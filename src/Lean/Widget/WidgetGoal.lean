import Lean.Elab
import Lean.PrettyPrinter
import Lean.Server.Requests
import Lean.Server.FileWorker.Rpc
import Lean.Widget.PrintableExpr

namespace Lean.Server

deriving instance FromJson, ToJson for Prod

structure RefinableGoal where
  hyps : Array (String × WithRpcRef PrintableExpr)
  goal : WithRpcRef PrintableExpr

namespace RefinableGoal

structure LspPacket where
  hyps : Array (String × Lsp.RpcRef)
  goal : Lsp.RpcRef
  deriving FromJson, ToJson

instance : LspEncoding RefinableGoal LspPacket where
  lspEncode g := do
    return {
      hyps := ← lspEncode g.hyps
      goal := ← lspEncode g.goal
    }

  lspDecode g := do
    return {
      hyps := ← lspDecode g.hyps
      goal := ← lspDecode g.goal
    }

end RefinableGoal

structure RefinableGoals where
  goals : Array RefinableGoal

namespace RefinableGoals

structure LspPacket where
  goals : Array RefinableGoal.LspPacket
  deriving FromJson, ToJson

instance : LspEncoding RefinableGoals LspPacket where
  lspEncode g :=
    return { goals := ← lspEncode g.goals }

  lspDecode g := do
    return { goals := ← lspDecode g.goals }

end RefinableGoals

open Meta in
def ptrifyGoal (mvarId : MVarId) : MetaM RefinableGoal := do
  match (← getMCtx).findDecl? mvarId with
  | none          => unreachable!
  | some mvarDecl => do
    let indent         := 2 -- Use option
    let lctx           := mvarDecl.lctx
    let lctx           := lctx.sanitizeNames.run' { options := (← getOptions) }
    -- tmp so (← ) lifts work
    let tmpPrintableExpr : PrintableExpr := {
        lctx
        mctx := ← getMCtx
        options := ← getOptions
        currNamespace := ← getCurrNamespace
        openDecls := ← getOpenDecls
        env := ← getEnv
        expr := Expr.bvar 0 arbitrary
      }
    let mkPrintableExpr (e : Expr) : WithRpcRef PrintableExpr :=
      ⟨ { tmpPrintableExpr with expr := e } ⟩
    withLCtx lctx mvarDecl.localInstances do
      let (hidden, hiddenProp) ← ToHide.collect mvarDecl.type
      -- The following two `let rec`s are being used to control the generated code size.
      -- Then should be remove after we rewrite the compiler in Lean
      let rec pushPending (ids : List Name) (type? : Option Expr) (fmt : Array (String × WithRpcRef PrintableExpr)) : MetaM (Array (String × WithRpcRef PrintableExpr)) :=
        if ids.isEmpty then
          pure fmt
        else
          match ids, type? with
          | [], _        => pure fmt
          | _, none      => pure fmt
          | _, some type => do
            pure $ fmt.push (Format.joinSep ids.reverse " " |> toString, mkPrintableExpr type)
      let rec ppVars (varNames : List Name) (prevType? : Option Expr) (fmt : Array (String × WithRpcRef PrintableExpr)) (localDecl : LocalDecl) : MetaM (List Name × Option Expr × Array (String × WithRpcRef PrintableExpr)) := do
        if hiddenProp.contains localDecl.fvarId then
          let fmt ← pushPending varNames prevType? fmt
          let type ← instantiateMVars localDecl.type
          let fmt  := fmt.push ("", mkPrintableExpr type)
          pure ([], none, fmt)
        else
          match localDecl with
          | LocalDecl.cdecl _ _ varName type _   =>
            let varName := varName.simpMacroScopes
            let type ← instantiateMVars type
            if prevType? == none || prevType? == some type then
              pure (varName :: varNames, some type, fmt)
            else do
              let fmt ← pushPending varNames prevType? fmt
              pure ([varName], some type, fmt)
          | LocalDecl.ldecl _ _ varName type val _ => do
            let varName := varName.simpMacroScopes
            let fmt ← pushPending varNames prevType? fmt
            let type ← instantiateMVars type
            let val  ← instantiateMVars val
            let typeFmt ← mkPrintableExpr type
            --let valFmt ← f!"expr:{ptrAddrUnsafe <| printableExpr val}"
            let fmt := fmt.push (format varName |> toString, typeFmt)
            --let fmt  := fmt ++ (format varName ++ " : " ++ typeFmt ++ " :=" ++ Format.nest indent (Format.line ++ valFmt)).group
            pure ([], none, fmt)
      let (varNames, type?, fmt) ← lctx.foldlM (init := ([], none, #[])) fun (varNames, prevType?, fmt) (localDecl : LocalDecl) =>
         if localDecl.isAuxDecl || hidden.contains localDecl.fvarId then
           pure (varNames, prevType?, fmt)
         else
           ppVars varNames prevType? fmt localDecl
      let fmt ← pushPending varNames type? fmt
      let goalFmt ← mkPrintableExpr mvarDecl.type
      --let fmt := fmt ++ "⊢" ++ " " ++ Format.nest indent typeFmt
      return { hyps := fmt, goal := goalFmt }
     --match mvarDecl.userName with
     --| Name.anonymous => pure fmt
     --| name           => return "case " ++ format name.eraseMacroScopes ++ Format.line ++ fmt

open RequestM in
def handleRefinableGoal (p : Lsp.PlainGoalParams)
    : RequestM (RequestTask (Option RefinableGoals)) := do
  let doc ← readDoc
  let text := doc.meta.text
  let hoverPos := text.lspPosToUtf8Pos p.position
  -- NOTE: use `>=` since the cursor can be *after* the input
  withWaitFindSnap doc (fun s => s.endPos >= hoverPos)
    (notFoundX := return none) fun snap => do
      for t in snap.cmdState.infoState.trees do
        if let rs@(_ :: _) := t.goalsAt? doc.meta.text hoverPos then
          let goals ← List.join <$> rs.mapM fun { ctxInfo := ci, tacticInfo := ti, useAfter := useAfter } =>
            let ci := if useAfter then { ci with mctx := ti.mctxAfter } else { ci with mctx := ti.mctxBefore }
            let goals := if useAfter then ti.goalsAfter else ti.goalsBefore
            ci.runMetaM {} <| goals.mapM (fun g => Meta.withPPInaccessibleNames (ptrifyGoal g))
          return some { goals := goals.toArray }

      return none

builtin_initialize
  registerRpcCallHandler `handleRefinableGoal Lsp.PlainGoalParams (Option RefinableGoals) handleRefinableGoal

end Lean.Server
