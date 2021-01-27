/-
Copyright (c) 2020 Wojciech Nawrocki. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Wojciech Nawrocki, Marc Huisinga
-/
import Lean.Data.Position
import Lean.Data.Lsp
import Init.System.FilePath

namespace IO

def throwServerError (err : String) : IO α :=
  throw (userError err)

namespace FS.Stream

/-- Chains two streams by creating a new stream s.t. writing to it
just writes to `a` but reading from it also duplicates the read output
into `b`, c.f. `a | tee b` on Unix.
NB: if `a` is written to but this stream is never read from,
the output will *not* be duplicated. Use this if you only care
about the data that was actually read. -/
def chainRight (a : Stream) (b : Stream) (flushEagerly : Bool := false) : Stream :=
  { a with
    flush := a.flush *> b.flush
    read := fun sz => do
      let bs ← a.read sz
      b.write bs
      when flushEagerly b.flush
      pure bs
    getLine := do
      let ln ← a.getLine
      b.putStr ln
      when flushEagerly b.flush
      pure ln }

/-- Like `tee a | b` on Unix. See `chainOut`. -/
def chainLeft (a : Stream) (b : Stream) (flushEagerly : Bool := false) : Stream :=
  { b with
    flush := a.flush *> b.flush
    write := fun bs => do
      a.write bs
      when flushEagerly a.flush
      b.write bs
    putStr := fun s => do
      a.putStr s
      when flushEagerly a.flush
      b.putStr s }

/-- Prefixes all written outputs with `pre`. -/
def withPrefix (a : Stream) (pre : String) : Stream :=
  { a with
    write := fun bs => do
      a.putStr pre
      a.write bs
    putStr := fun s =>
      a.putStr (pre ++ s) }

end FS.Stream
end IO

namespace Lean.Server

structure DocumentMeta where
  uri     : Lsp.DocumentUri
  version : Nat
  text    : FileMap
  deriving Inhabited

def replaceLspRange (text : FileMap) (r : Lsp.Range) (newText : String) : FileMap :=
  let start := text.lspPosToUtf8Pos r.start
  let «end» := text.lspPosToUtf8Pos r.«end»
  let pre := text.source.extract 0 start
  let post := text.source.extract «end» text.source.bsize
  (pre ++ newText ++ post).toFileMap

open IO

/-- Duplicates an I/O stream to a log file `fName` in LEAN_SERVER_LOG_DIR
if that envvar is set. -/
def maybeTee (fName : String) (isOut : Bool) (h : FS.Stream) : IO FS.Stream := do
  match (← IO.getEnv "LEAN_SERVER_LOG_DIR") with
  | none => pure h
  | some logDir =>
    let hTee ← FS.Handle.mk (System.mkFilePath [logDir, fName]) FS.Mode.write true
    let hTee := FS.Stream.ofHandle hTee
    pure $ if isOut then
      hTee.chainLeft h true
    else
      h.chainRight hTee true

/-- Transform the given path to a file:// URI. -/
def toFileUri (fname : String) : Lsp.DocumentUri :=
  let fname := System.FilePath.normalizePath fname
  let fname := if System.Platform.isWindows then
    fname.map fun c => if c == '\\' then '/' else c
  else
    fname
  -- TODO(WN): URL-encode special characters
  -- Three slashes denote localhost.
  "file:///" ++ fname.dropWhile (· == '/')

open Lsp

/-- Returns the document contents with all changes applied, together with the position of the change
which lands earliest in the file. Panics if there are no changes. -/
def foldDocumentChanges (changes : @& Array Lsp.TextDocumentContentChangeEvent) (oldText : FileMap)
  : FileMap × String.Pos :=
  if changes.isEmpty then panic! "Lean.Server.foldDocumentChanges: empty change array" else
  let accumulateChanges : FileMap × String.Pos → TextDocumentContentChangeEvent → FileMap × String.Pos :=
    fun ⟨newDocText, minStartOff⟩ change =>
      match change with
      | TextDocumentContentChangeEvent.rangeChange (range : Range) (newText : String) =>
        let startOff    := oldText.lspPosToUtf8Pos range.start
        let newDocText  := replaceLspRange newDocText range newText
        let minStartOff := minStartOff.min startOff
        ⟨newDocText, minStartOff⟩
      | TextDocumentContentChangeEvent.fullChange (newText : String) =>
        ⟨newText.toFileMap, 0⟩
  -- NOTE: We assume Lean files are below 16 EiB.
  changes.foldl accumulateChanges (oldText, 0xffffffff)

end Lean.Server

namespace List

universe u

def takeWhile (p : α → Bool) : List α → List α
  | []       => []
  | hd :: tl => if p hd then hd :: takeWhile p tl else []

end List
