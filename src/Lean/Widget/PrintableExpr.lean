import Lean.Elab
import Lean.PrettyPrinter
import Lean.Server.FileWorker.Rpc

namespace Lean.Json

declare_syntax_cat json
syntax "(" term ")" : json
syntax Parser.strLit : json
syntax Parser.numLit : json
syntax "{" (Parser.ident ": " json),* "}" : json
syntax "[" json,* "]" : json

syntax "json " json : term

/- declare a micro json parser, so we can write our tests in a more legible way. -/
open Json in macro_rules
  | `(json $s:strLit) => s
  | `(json $n:numLit) => n
  | `(json ($t:term)) => t
  | `(json { $[$ns : $js],* }) => do
    let mut fields := #[]
    for n in ns, j in js do
      fields := fields.push (← `(($(quote n.getId.getString!), json $j)))
    `(Lean.Json.mkObj [$fields,*])
  | `(json [ $[$js],* ]) => do
    let mut fields := #[]
    for j in js do
      fields := fields.push (← `(json $j))
    `(Json.arr #[$fields,*])

end Lean.Json

namespace Std.Format
open Lean

deriving instance ToJson for Std.Format.FlattenBehavior

def toJson : Format → Lean.Json
  | nil => "nil"
  | line => "line"
  | text s => json { text: (s) }
  | nest n f => json { nest: [(n), (f.toJson)] }
  | append f₁ f₂ => json { append: [(f₁.toJson), (f₂.toJson)] }
  | group f b => json { group: [(f.toJson), (ToJson.toJson b)] }
  | tag n f => json { tag: [(n), (f.toJson)] }

instance : ToJson Format :=
  ⟨toJson⟩

instance : FromJson Format where
  fromJson? _ := Except.error "unimplemented"

end Std.Format

namespace Lean.Server

/-- Bundles an `Expr` with the context needed to pretty-print it. -/
structure PrintableExpr where
  expr          : Expr
  env           : Environment
  mctx          : MetavarContext
  lctx          : LocalContext
  options       : Options
  currNamespace : Name
  openDecls     : List OpenDecl
  deriving Inhabited
mkWithRefInstance PrintableExpr

-- formatInteractiveExpr : Syntax → InteractiveExpr

def SubexprMap := Nat → PrintableExpr
mkWithRefInstance SubexprMap

namespace SubexprMap

-- TODO(WN): this is really tedious to write, should be autogen by elab
structure MapGet where
  map : WithRpcRef SubexprMap
  addr : Nat

namespace MapGet

structure LspPacket where
  map : Lsp.RpcRef
  addr : Nat
  deriving FromJson, ToJson

instance : LspEncoding MapGet LspPacket where
  lspEncode a := do
    return {
      map := ← lspEncode a.map
      addr := ← lspEncode a.addr
    }
  lspDecode a := do
    return {
      map := ← lspDecode a.map
      addr := ← lspDecode a.addr
    }

end MapGet

def get (g : MapGet) : RequestM (RequestTask (WithRpcRef PrintableExpr)) :=
  RequestM.asTask <| pure ⟨g.map.val g.addr⟩

initialize
  registerRpcCallHandler `SubexprMap.get MapGet (WithRpcRef PrintableExpr) SubexprMap.get

end SubexprMap

/-- Bundles a `Format` with a way to access its source subexpressions from `tag` nodes. -/
structure EFormat where
  fmt : Format
  map : WithRpcRef SubexprMap

namespace EFormat

structure LspPacket where
  fmt : Format
  map : Lsp.RpcRef
  deriving FromJson, ToJson

instance : LspEncoding EFormat LspPacket where
  lspEncode a := do
    return {
      fmt := ← lspEncode a.fmt
      map := ← lspEncode a.map
    }
  lspDecode a := do
    return {
      fmt := ← lspDecode a.fmt
      map := ← lspDecode a.map
    }

end EFormat

private partial def tritsLE (n : Nat) : List Nat :=
  go [] n
  where
    go (acc : List Nat) (n : Nat) : List Nat :=
      if n == 0 then acc
      else go (n % 3 :: acc) (n / 3)

open Expr in
private def traverseExpr (template : PrintableExpr) (e : Expr) (addr : Nat) : PrintableExpr :=
  go e (tritsLE addr |>.drop 1) 
  where
    go (e : Expr) (addr : List Nat) : PrintableExpr :=
      match addr with
      | [] => mkFrom e
      | a::as =>
        match e with
        | app e₁ e₂ _       =>
          if a == 0 then go e₁ as
          else if a == 1 then go e₂ as
          else unreachable!
        | lam _ e₁ e₂ _     =>
          if a == 0 then go e₁ as
          else if a == 1 then go e₂ as
          else unreachable!
        | forallE _ e₁ e₂ _ =>
          if a == 0 then go e₁ as
          else if a == 1 then go e₂ as
          else unreachable!
        | letE _ e₁ e₂ e₃ _ =>
          if a == 0 then go e₁ as
          else if a == 1 then go e₂ as
          else if a == 2 then go e₃ as
          else unreachable!
        | mdata _ e₁ _      =>
          if a == 0 then go e₁ as
          else unreachable!
        | proj _ _ e₁ _     =>
          if a == 0 then go e₁ as
          else unreachable!
        | _ => unreachable!
    mkFrom (e : Expr) : PrintableExpr := { template with expr := e }

open Elab PrettyPrinter in
def PrintableExpr.fmt (eRef : WithRpcRef PrintableExpr) : RequestM (RequestTask EFormat) := do
  let e := eRef.val
  RequestM.asTask do
    let act : MetaM Format := do
      let opts ← getOptions
      let lctx := (← getLCtx).sanitizeNames.run' { options := opts }
      Meta.withLCtx lctx #[] do
        -- NOTE: empty optionsPerPos, we use `Expr`s directly instead
        let stx ← delab e.currNamespace e.openDecls e.expr {}
        let stx := (sanitizeSyntax stx).run' { options := opts }
        let stx ← parenthesizeTerm stx
        formatTerm stx
        -- TODO: could just be ppExpr

    let ((f, _), _) ← act
      |>.run { lctx := e.lctx } { mctx := e.mctx }
      |>.toIO { options := e.options, currNamespace := e.currNamespace, openDecls := e.openDecls }
              { env := e.env }
    return {
      fmt := f
      map := ⟨fun n => traverseExpr e e.expr n⟩
    }

open PrettyPrinter in
def PrintableExpr.fmtType (e : WithRpcRef PrintableExpr) : RequestM (RequestTask EFormat) := do
  let e := e.val
  RequestM.asTask do
    let act : MetaM Format := do
      let lctx ← getLCtx
      let opts ← getOptions
      let lctx := lctx.sanitizeNames.run' { options := opts }
      Meta.withLCtx lctx #[] do
        let t ← Meta.inferType e.expr
        Meta.ppExpr t

    let ((f, _), _) ← act
      |>.run { lctx := e.lctx } { mctx := e.mctx }
      |>.toIO { options := e.options, currNamespace := e.currNamespace, openDecls := e.openDecls }
              { env := e.env }
    return {
      fmt := f
      map := ⟨fun n => traverseExpr e e.expr n⟩
    } 

initialize
  registerRpcCallHandler `PrintableExpr.fmt (WithRpcRef PrintableExpr) EFormat PrintableExpr.fmt
  registerRpcCallHandler `PrintableExpr.fmtType (WithRpcRef PrintableExpr) EFormat PrintableExpr.fmtType

end Lean.Server
