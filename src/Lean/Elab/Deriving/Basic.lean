/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Elab.Command

namespace Lean.Elab
open Command

def DerivingHandler := (typeNames : Array Name) → CommandElabM Bool

builtin_initialize derivingHandlersRef : IO.Ref (NameMap DerivingHandler) ← IO.mkRef {}

def registerBuiltinDerivingHandler (className : Name) (handler : DerivingHandler) : IO Unit := do
  let initializing ← IO.initializing
  unless initializing do
    throw (IO.userError "failed to register deriving handler, it can only be registered during initialization")
  if (← derivingHandlersRef.get).contains className then
    throw (IO.userError s!"failed to register deriving handler, a handler has already been registered for '{className}'")
  derivingHandlersRef.modify fun m => m.insert className handler

def defaultHandler (className : Name) (typeNames : Array Name) : CommandElabM Unit := do
  throwError "default handlers have not been implemented yet, class: '{className}' types: {typeNames}"

def applyDerivingHandlers (className : Name) (typeNames : Array Name) : CommandElabM Unit := do
  match (← derivingHandlersRef.get).find? className with
  | some handler =>
    unless (← handler typeNames) do
      defaultHandler className typeNames
  | none => defaultHandler className typeNames

@[builtinCommandElab «deriving»] def elabDeriving : CommandElab
  | `(deriving instance $[$classes $[with $argss?]?],* for $[$declNames],*) => do
     let classes ← classes.mapM resolveGlobalConstNoOverloadWithInfo
     let declNames ← declNames.mapM resolveGlobalConstNoOverloadWithInfo
     for cls in classes, args? in argss? do
       try
         applyDerivingHandlers cls declNames
       catch ex =>
         logException ex
  | _ => throwUnsupportedSyntax

structure DerivingClassView where
  ref : Syntax
  className : Name

/- def derivingClasses  := sepBy1 (ident >> optional (" with " >> Term.structInst)) ", "
leading_parser optional ("deriving " >> derivingClasses) -/
def getOptDerivingClasses [Monad m] [MonadEnv m] [MonadResolveName m] [MonadError m] [MonadInfoTree m] (optDeriving : Syntax) : m (Array DerivingClassView) := do
  match optDeriving with
  | `(Parser.Command.optDeriving| deriving $[$classes $[with $argss?]?],*) =>
    let mut ret := #[]
    for cls in classes, args? in argss? do
      let className ← resolveGlobalConstNoOverloadWithInfo cls
      ret := ret.push { ref := cls, className := className }
    return ret
  | `(Parser.Command.optDeriving|) => return #[]
  | _ => unreachable!

def DerivingClassView.applyHandlers (view : DerivingClassView) (declNames : Array Name) : CommandElabM Unit :=
  withRef view.ref do applyDerivingHandlers view.className declNames

builtin_initialize
  registerTraceClass `Elab.Deriving

end Lean.Elab
