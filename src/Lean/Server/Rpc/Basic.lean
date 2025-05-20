/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Wojciech Nawrocki
-/
prelude
import Init.Dynamic
import Lean.Data.Json

/-! Allows LSP clients to make Remote Procedure Calls to the server.

The single use case for these is to allow the infoview UI to refer to and manipulate heavy-weight
objects residing on the server. It would be inefficient to serialize these into JSON and send over.
For example, the client can format an `Expr` without transporting the whole `Environment`.

All RPC requests are relative to an open file and an RPC session for that file. The client must
first connect to the session using `$/lean/rpc/connect`. -/

namespace Lean.Lsp

/-- An object which RPC clients can refer to without marshalling. -/
structure RpcRef where
  /- NOTE(WN): It is important for this to be a single-field structure
  in order to deserialize as an `Object` on the JS side. -/
  p : USize
  deriving BEq, Hashable, FromJson, ToJson

instance : ToString RpcRef where
  toString r := toString r.p

end Lean.Lsp

namespace Lean.Server

structure ReferencedObject where
  obj : Dynamic
  /-- How many references to this object have been sent to the client.
  It will be freed after all of those have been released. -/
  rc  : Nat

structure RpcObjectStore : Type where
  /-- Objects that are being kept alive for the RPC client, together with their type names,
  mapped to by their RPC reference. -/
  aliveRefs : PersistentHashMap Lsp.RpcRef ReferencedObject := {}

unsafe def rpcStoreRef [TypeName α] (a : α) : StateM RpcObjectStore Lsp.RpcRef := do
  let ptr := ptrAddrUnsafe a
  let r : Lsp.RpcRef := ⟨ptr⟩
  let st ← get
  let obj := st.aliveRefs.findD r { obj := .mk a, rc := 0 }
  set { st with aliveRefs := st.aliveRefs.insert r { obj with rc := obj.rc + 1 } }
  return r

def rpcGetRef (r : Lsp.RpcRef) : ReaderT RpcObjectStore Id (Option Dynamic) :=
  return (← read).aliveRefs.find? r |>.map (·.obj)

def rpcReleaseRef (r : Lsp.RpcRef) : StateM RpcObjectStore Bool := do
  let st ← get
  let some referencedObj := st.aliveRefs.find? r
    | return false
  if referencedObj.rc == 1 then
    set { st with aliveRefs := st.aliveRefs.erase r }
  else
    set { st with aliveRefs :=
      st.aliveRefs.insert r { referencedObj with rc :=
        referencedObj.rc - 1 } }
  return true

/-- `RpcEncodable α` means that `α` can be deserialized from and serialized into JSON
for the purpose of receiving arguments to and sending return values from
Remote Procedure Calls (RPCs).

Any type with `FromJson` and `ToJson` instances is `RpcEncodable`.

Furthermore, types that do not have these instances may still be `RpcEncodable`.
Use `deriving RpcEncodable` to automatically derive instances for such types.

This occurs when `α` contains data that should not or cannot be serialized:
for instance, heavy objects such as `Lean.Environment`, or closures.
For such data, we use the `WithRpcRef` marker.
Note that for `WithRpcRef α` to be `RpcEncodable`,
`α` must have a `TypeName` instance

On the server side, `WithRpcRef α` is just a structure
containing a value of type `α`.
On the client side, it is an opaque reference of (structural) type `Lsp.RpcRef`.
Thus, `WithRpcRef α` is cheap to transmit over the network
but may only be accessed on the server side.
In practice, it is used by the client to pass data
between various RPC methods provided by the server. -/
-- TODO(WN): for Lean.js, compile `WithRpcRef` to "opaque reference" on the client
class RpcEncodable (α : Type) where
  rpcEncode : α → StateM RpcObjectStore Json
  rpcDecode : Json → ExceptT String (ReaderT RpcObjectStore Id) α
export RpcEncodable (rpcEncode rpcDecode)

instance : Nonempty (RpcEncodable α) :=
  ⟨{ rpcEncode := default, rpcDecode := default }⟩

instance [FromJson α] [ToJson α] : RpcEncodable α where
  rpcEncode a := return toJson a
  rpcDecode j := ofExcept (fromJson? j)

instance [RpcEncodable α] : RpcEncodable (Option α) where
  rpcEncode v := toJson <$> v.mapM rpcEncode
  rpcDecode j := do Option.mapM rpcDecode (← fromJson? j)

-- TODO(WN): instance [RpcEncodable α β] [Traversable t] : RpcEncodable (t α) (t β)

instance [RpcEncodable α] : RpcEncodable (Array α) where
  rpcEncode a := toJson <$> a.mapM rpcEncode
  rpcDecode b := do Array.mapM rpcDecode (← fromJson? b)

instance [RpcEncodable α] [RpcEncodable β] : RpcEncodable (α × β) where
  rpcEncode := fun (a, b) => return toJson (← rpcEncode a, ← rpcEncode b)
  rpcDecode j := do
    let (a, b) ← fromJson? j
    return (← rpcDecode a, ← rpcDecode b)

instance [RpcEncodable α] : RpcEncodable (StateM RpcObjectStore α) where
  rpcEncode fn := fn >>= rpcEncode
  rpcDecode j := do
    let a : α ← rpcDecode j
    return return a

/-- Marks values to be encoded as opaque references in RPC packets.

See the docstring for `RpcEncodable`. -/
structure WithRpcRef (α : Type u) where
  val : α
  deriving Inhabited

private unsafe def rpcEncodableWithRpcRef [TypeName α] : RpcEncodable (WithRpcRef α) :=
  { rpcEncode, rpcDecode }
where
  -- separate definitions to prevent inlining
  rpcEncode r := toJson <$> rpcStoreRef r.val
  rpcDecode j := do
    let r ← fromJson? j
    match (← rpcGetRef r) with
      | none => throw s!"RPC reference '{r}' is not valid"
      | some any =>
        if let some obj := any.get? α then
          return ⟨obj⟩
        else
          throw s!"RPC call type mismatch in reference '{r}'\nexpected '{TypeName.typeName α}', got '{any.typeName}'"

@[implemented_by rpcEncodableWithRpcRef]
instance [TypeName α] : RpcEncodable (WithRpcRef α) where
  rpcEncode _ := pure default
  rpcDecode _ := throw ""

end Lean.Server
