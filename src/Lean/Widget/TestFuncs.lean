import Lean.Elab

open Lean

@[export lean_wasm_test_lean]
def leanWasmTest : IO Unit := do
  IO.println "Hello from Lean!"
  (←IO.getStdout).flush

@[export lean_wasm_elab_header]
def leanWasmElabHeader (hdr : String) : IO Unit := do
  IO.println s!"Elabbing header:\n{hdr}\n"

  let opts := {}  -- TODO
  let inputCtx := Parser.mkInputContext hdr "<input>"
  let (headerStx, headerParserState, msgLog) ← Parser.parseHeader inputCtx
  IO.println s!"Parsed!"

  let (headerEnv, msgLog) ← Elab.processHeader headerStx opts msgLog inputCtx
  let sp ← searchPathRef.get
  IO.println s!"Search path = {sp}"
  msgLog.forM fun m => do
    IO.println (← m.toString)
  IO.println s!"Elab'd!"

  for imp in headerEnv.imports do
    IO.println s!"Imported {imp}"