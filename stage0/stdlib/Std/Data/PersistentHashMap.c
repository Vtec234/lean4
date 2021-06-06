// Lean compiler output
// Module: Std.Data.PersistentHashMap
// Imports: Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Std_PersistentHashMap_empty___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_PersistentHashMap_findEntryAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___rarg(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_instToStringStats;
lean_object* l_Std_PersistentHashMap_insertAux_match__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x21(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_Stats_maxDepth___default;
lean_object* l_Std_PersistentHashMap_insertAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_stats(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Std_PersistentHashMap_mod2Shift(size_t, size_t);
lean_object* l_Std_PersistentHashMap_findEntryAux___rarg(lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_collectStats___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__1(lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Std_PersistentHashMap_Stats_numNull___default;
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_forM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_toList___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_Stats_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_max(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize(lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
size_t l_Std_PersistentHashMap_shift;
size_t l_Std_PersistentHashMap_mul2Shift(size_t, size_t);
lean_object* l_Std_PersistentHashMap_collectStats___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findEntryAtAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_toList___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_stats___rarg___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Std_PersistentHashMap_maxDepth;
lean_object* l_Std_PersistentHashMap_containsAux___rarg(lean_object*, lean_object*, size_t, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l_Std_PersistentHashMap_collectStats_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__4___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_empty___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryNode___rarg(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_toList(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_containsAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findEntryAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_forM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_instInhabitedEntry(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_getOp(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Std_PersistentHashMap_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_Stats_numNodes___default;
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_Std_PersistentHashMap_containsAtAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_collectStats(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findEntry_x3f(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_collectStats_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_stats___rarg(lean_object*);
lean_object* l_Std_PersistentHashMap_forM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Std_PersistentHashMap_findAtAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_maxCollisions;
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findD___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findD___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_match__2(lean_object*, lean_object*, lean_object*);
size_t l_Std_PersistentHashMap_div2Shift(size_t, size_t);
lean_object* l_Std_PersistentHashMap_mod2Shift___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldl(lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Std_PersistentHashMap_findEntry_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_getOp___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_size___default;
lean_object* l_Std_PersistentHashMap_insert_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_containsAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryNode___rarg___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x21_match__1(lean_object*, lean_object*);
extern lean_object* l_Id_instMonadId;
lean_object* l_Std_PersistentHashMap_findEntryAtAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Std_PersistentHashMap_insertAux___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_root___default(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_match__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mul2Shift___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNode(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_stats___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x21_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx_x27___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___rarg(lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryNode(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryNode_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isEmpty___rarg___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_contains(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findD(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_match__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Std_PersistentHashMap_branching;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux_match__1___rarg(lean_object*, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_forM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_div2Shift___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__6___rarg(lean_object*, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux___rarg(lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryNode_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_forM(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_match__3___rarg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Std_PersistentHashMap_empty(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_instInhabitedNode(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findEntryAtAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_isEmpty___rarg(lean_object*);
lean_object* l_Std_PersistentHashMap_containsAtAux(lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_containsAtAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_Stats_numCollisions___default;
lean_object* l_Std_PersistentHashMap_instInhabitedEntry(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_instInhabitedNode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
static size_t _init_l_Std_PersistentHashMap_shift() {
_start:
{
size_t x_1; 
x_1 = 5;
return x_1;
}
}
static size_t _init_l_Std_PersistentHashMap_branching() {
_start:
{
size_t x_1; 
x_1 = 32;
return x_1;
}
}
static size_t _init_l_Std_PersistentHashMap_maxDepth() {
_start:
{
size_t x_1; 
x_1 = 7;
return x_1;
}
}
static lean_object* _init_l_Std_PersistentHashMap_maxCollisions() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(4u);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(2);
x_4 = lean_unsigned_to_nat(32u);
x_5 = lean_mk_array(x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_root___default(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
static lean_object* _init_l_Std_PersistentHashMap_size___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_empty___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_empty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_empty___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_empty___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_empty___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_Std_PersistentHashMap_isEmpty___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_isEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_isEmpty___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_isEmpty___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Std_PersistentHashMap_isEmpty___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_isEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_isEmpty(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_instInhabitedPersistentHashMap___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_mkEmptyEntries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
size_t l_Std_PersistentHashMap_mul2Shift(size_t x_1, size_t x_2) {
_start:
{
size_t x_3; 
x_3 = x_1 << x_2 % (sizeof(size_t) * 8);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_mul2Shift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_mul2Shift(x_3, x_4);
x_6 = lean_box_usize(x_5);
return x_6;
}
}
size_t l_Std_PersistentHashMap_div2Shift(size_t x_1, size_t x_2) {
_start:
{
size_t x_3; 
x_3 = x_1 >> x_2 % (sizeof(size_t) * 8);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_div2Shift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_div2Shift(x_3, x_4);
x_6 = lean_box_usize(x_5);
return x_6;
}
}
size_t l_Std_PersistentHashMap_mod2Shift(size_t x_1, size_t x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; size_t x_6; 
x_3 = 1;
x_4 = x_3 << x_2 % (sizeof(size_t) * 8);
x_5 = x_4 - x_3;
x_6 = x_1 & x_5;
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_mod2Shift___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_mod2Shift(x_3, x_4);
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_5(x_6, x_7, lean_box(0), x_2, x_3, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_apply_8(x_5, x_1, x_9, x_10, lean_box(0), lean_box(0), x_2, x_3, x_4);
return x_11;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAtCollisionNodeAux_match__2___rarg), 6, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_array_get_size(x_6);
x_9 = lean_nat_dec_lt(x_3, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = lean_array_push(x_6, x_4);
x_14 = lean_array_push(x_7, x_5);
lean_ctor_set(x_2, 1, x_14);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_array_push(x_7, x_5);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_array_fget(x_6, x_3);
lean_inc(x_1);
lean_inc(x_4);
x_19 = lean_apply_2(x_1, x_4, x_18);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_3, x_21);
lean_dec(x_3);
x_3 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_2, 1);
lean_dec(x_25);
x_26 = lean_ctor_get(x_2, 0);
lean_dec(x_26);
x_27 = lean_array_fset(x_6, x_3, x_4);
x_28 = lean_array_fset(x_7, x_3, x_5);
lean_dec(x_3);
lean_ctor_set(x_2, 1, x_28);
lean_ctor_set(x_2, 0, x_27);
return x_2;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_2);
x_29 = lean_array_fset(x_6, x_3, x_4);
x_30 = lean_array_fset(x_7, x_3, x_5);
lean_dec(x_3);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAtCollisionNodeAux___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNode___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___rarg(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAtCollisionNode___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_3, x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_6, x_7, lean_box(0), lean_box(0));
return x_8;
}
}
}
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_getCollisionNodeSize_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_array_get_size(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_getCollisionNodeSize___rarg___boxed), 1, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_unsigned_to_nat(4u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
lean_inc(x_6);
x_7 = lean_array_push(x_6, x_1);
x_8 = lean_array_push(x_7, x_3);
x_9 = lean_array_push(x_6, x_2);
x_10 = lean_array_push(x_9, x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
lean_object* l_Std_PersistentHashMap_mkCollisionNode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_mkCollisionNode___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_3, x_6, x_7, lean_box(0), lean_box(0));
return x_8;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_4, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_2, x_10);
return x_11;
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux_match__2___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__3___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_box_usize(x_2);
x_10 = lean_box_usize(x_3);
x_11 = lean_apply_5(x_7, x_8, x_9, x_10, x_4, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_box_usize(x_2);
x_15 = lean_box_usize(x_3);
x_16 = lean_apply_7(x_6, x_12, x_13, lean_box(0), x_14, x_15, x_4, x_5);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux_match__3___rarg___boxed), 7, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_match__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Std_PersistentHashMap_insertAux_match__3___rarg(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_4);
x_10 = lean_nat_dec_lt(x_7, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_11 = lean_array_fget(x_4, x_7);
x_12 = lean_array_fget(x_5, x_7);
lean_inc(x_2);
lean_inc(x_11);
x_13 = lean_apply_1(x_2, x_11);
x_14 = lean_unbox_uint64(x_13);
lean_dec(x_13);
x_15 = (size_t)x_14;
x_16 = 1;
x_17 = x_3 - x_16;
x_18 = 5;
x_19 = x_18 * x_17;
x_20 = x_15 >> x_19 % (sizeof(size_t) * 8);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_7, x_21);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_23 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_8, x_20, x_3, x_11, x_12);
x_6 = lean_box(0);
x_7 = x_22;
x_8 = x_23;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux_traverse___rarg___boxed), 8, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = 1;
x_11 = 5;
x_12 = x_10 << x_11 % (sizeof(size_t) * 8);
x_13 = x_12 - x_10;
x_14 = x_4 & x_13;
x_15 = lean_usize_to_nat(x_14);
x_16 = lean_array_get_size(x_9);
x_17 = lean_nat_dec_lt(x_15, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_array_fget(x_9, x_15);
x_19 = lean_box(2);
x_20 = lean_array_fset(x_9, x_15, x_19);
switch (lean_obj_tag(x_18)) {
case 0:
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_6);
x_24 = lean_apply_2(x_1, x_6, x_22);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_free_object(x_18);
x_26 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_22, x_23, x_6, x_7);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_array_fset(x_20, x_15, x_27);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
else
{
lean_object* x_29; 
lean_dec(x_23);
lean_dec(x_22);
lean_ctor_set(x_18, 1, x_7);
lean_ctor_set(x_18, 0, x_6);
x_29 = lean_array_fset(x_20, x_15, x_18);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_29);
return x_3;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_18, 0);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_18);
lean_inc(x_30);
lean_inc(x_6);
x_32 = lean_apply_2(x_1, x_6, x_30);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_30, x_31, x_6, x_7);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_array_fset(x_20, x_15, x_35);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_36);
return x_3;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_31);
lean_dec(x_30);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_6);
lean_ctor_set(x_37, 1, x_7);
x_38 = lean_array_fset(x_20, x_15, x_37);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_38);
return x_3;
}
}
}
case 1:
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_18);
if (x_39 == 0)
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_18, 0);
x_41 = x_4 >> x_11 % (sizeof(size_t) * 8);
x_42 = x_5 + x_10;
x_43 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_40, x_41, x_42, x_6, x_7);
lean_ctor_set(x_18, 0, x_43);
x_44 = lean_array_fset(x_20, x_15, x_18);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_44);
return x_3;
}
else
{
lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_18, 0);
lean_inc(x_45);
lean_dec(x_18);
x_46 = x_4 >> x_11 % (sizeof(size_t) * 8);
x_47 = x_5 + x_10;
x_48 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_45, x_46, x_47, x_6, x_7);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_array_fset(x_20, x_15, x_49);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_50);
return x_3;
}
}
default: 
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_2);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_6);
lean_ctor_set(x_51, 1, x_7);
x_52 = lean_array_fset(x_20, x_15, x_51);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_52);
return x_3;
}
}
}
}
else
{
lean_object* x_53; size_t x_54; size_t x_55; size_t x_56; size_t x_57; size_t x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_53 = lean_ctor_get(x_3, 0);
lean_inc(x_53);
lean_dec(x_3);
x_54 = 1;
x_55 = 5;
x_56 = x_54 << x_55 % (sizeof(size_t) * 8);
x_57 = x_56 - x_54;
x_58 = x_4 & x_57;
x_59 = lean_usize_to_nat(x_58);
x_60 = lean_array_get_size(x_53);
x_61 = lean_nat_dec_lt(x_59, x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_59);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_62 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_62, 0, x_53);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_array_fget(x_53, x_59);
x_64 = lean_box(2);
x_65 = lean_array_fset(x_53, x_59, x_64);
switch (lean_obj_tag(x_63)) {
case 0:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
lean_dec(x_2);
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_68 = x_63;
} else {
 lean_dec_ref(x_63);
 x_68 = lean_box(0);
}
lean_inc(x_66);
lean_inc(x_6);
x_69 = lean_apply_2(x_1, x_6, x_66);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_68);
x_71 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_66, x_67, x_6, x_7);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = lean_array_fset(x_65, x_59, x_72);
lean_dec(x_59);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_73);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_67);
lean_dec(x_66);
if (lean_is_scalar(x_68)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_68;
}
lean_ctor_set(x_75, 0, x_6);
lean_ctor_set(x_75, 1, x_7);
x_76 = lean_array_fset(x_65, x_59, x_75);
lean_dec(x_59);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
return x_77;
}
}
case 1:
{
lean_object* x_78; lean_object* x_79; size_t x_80; size_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_78 = lean_ctor_get(x_63, 0);
lean_inc(x_78);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 x_79 = x_63;
} else {
 lean_dec_ref(x_63);
 x_79 = lean_box(0);
}
x_80 = x_4 >> x_55 % (sizeof(size_t) * 8);
x_81 = x_5 + x_54;
x_82 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_78, x_80, x_81, x_6, x_7);
if (lean_is_scalar(x_79)) {
 x_83 = lean_alloc_ctor(1, 1, 0);
} else {
 x_83 = x_79;
}
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_array_fset(x_65, x_59, x_83);
lean_dec(x_59);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
return x_85;
}
default: 
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_2);
lean_dec(x_1);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_6);
lean_ctor_set(x_86, 1, x_7);
x_87 = lean_array_fset(x_65, x_59, x_86);
lean_dec(x_59);
x_88 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_88, 0, x_87);
return x_88;
}
}
}
}
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_3);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; size_t x_92; uint8_t x_93; 
x_90 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_91 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___rarg(x_1, x_3, x_90, x_6, x_7);
x_92 = 7;
x_93 = x_92 <= x_5;
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_94 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_91);
x_95 = lean_unsigned_to_nat(4u);
x_96 = lean_nat_dec_lt(x_94, x_95);
lean_dec(x_94);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_97 = lean_ctor_get(x_91, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_91, 1);
lean_inc(x_98);
lean_dec(x_91);
x_99 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_100 = l_Std_PersistentHashMap_insertAux_traverse___rarg(x_1, x_2, x_5, x_97, x_98, lean_box(0), x_90, x_99);
lean_dec(x_98);
lean_dec(x_97);
return x_100;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_91;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_91;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; size_t x_106; uint8_t x_107; 
x_101 = lean_ctor_get(x_3, 0);
x_102 = lean_ctor_get(x_3, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_3);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_105 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___rarg(x_1, x_103, x_104, x_6, x_7);
x_106 = 7;
x_107 = x_106 <= x_5;
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_108 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_105);
x_109 = lean_unsigned_to_nat(4u);
x_110 = lean_nat_dec_lt(x_108, x_109);
lean_dec(x_108);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_105, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_113 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_114 = l_Std_PersistentHashMap_insertAux_traverse___rarg(x_1, x_2, x_5, x_111, x_112, lean_box(0), x_104, x_113);
lean_dec(x_112);
lean_dec(x_111);
return x_114;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_105;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_105;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux___rarg___boxed), 7, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; lean_object* x_10; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Std_PersistentHashMap_insertAux_traverse___rarg(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Std_PersistentHashMap_insert_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_4, x_5, x_6, x_2, x_3);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_insert_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insert_match__1___rarg), 4, 0);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_insert_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_insert_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint64_t x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
lean_inc(x_4);
x_9 = lean_apply_1(x_2, x_4);
x_10 = lean_unbox_uint64(x_9);
lean_dec(x_9);
x_11 = (size_t)x_10;
x_12 = 1;
x_13 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_7, x_11, x_12, x_4, x_5);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_8, x_14);
lean_dec(x_8);
lean_ctor_set(x_3, 1, x_15);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_4);
x_18 = lean_apply_1(x_2, x_4);
x_19 = lean_unbox_uint64(x_18);
lean_dec(x_18);
x_20 = (size_t)x_19;
x_21 = 1;
x_22 = l_Std_PersistentHashMap_insertAux___rarg(x_1, x_2, x_16, x_20, x_21, x_4, x_5);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_17, x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_insert(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insert___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_2, x_5);
lean_inc(x_1);
lean_inc(x_6);
x_11 = lean_apply_2(x_1, x_6, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_1);
x_16 = lean_array_fget(x_3, x_5);
lean_dec(x_5);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_findAtAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_findAux_match__1___rarg(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_box_usize(x_2);
x_8 = lean_apply_3(x_4, x_6, x_7, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_box_usize(x_2);
x_12 = lean_apply_5(x_5, x_9, x_10, lean_box(0), x_11, x_3);
return x_12;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux_match__1___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_findAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = l_Std_PersistentHashMap_findAux_match__1___rarg(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_findAux___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = 1;
x_7 = 5;
x_8 = x_6 << x_7 % (sizeof(size_t) * 8);
x_9 = x_8 - x_6;
x_10 = x_3 & x_9;
x_11 = lean_usize_to_nat(x_10);
x_12 = lean_box(2);
x_13 = lean_array_get(x_12, x_5, x_11);
lean_dec(x_11);
lean_dec(x_5);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_apply_2(x_1, x_4, x_14);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_15);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_15);
return x_19;
}
}
case 1:
{
lean_object* x_20; size_t x_21; 
x_20 = lean_ctor_get(x_13, 0);
lean_inc(x_20);
lean_dec(x_13);
x_21 = x_3 >> x_7 % (sizeof(size_t) * 8);
x_2 = x_20;
x_3 = x_21;
goto _start;
}
default: 
{
lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_1);
x_23 = lean_box(0);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Std_PersistentHashMap_findAtAux___rarg(x_1, x_24, x_25, lean_box(0), x_26, x_4);
lean_dec(x_25);
lean_dec(x_24);
return x_27;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentHashMap_findAux___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_3, x_4, x_2, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f_match__1___rarg), 3, 0);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_find_x3f_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_8 = (size_t)x_7;
x_9 = l_Std_PersistentHashMap_findAux___rarg(x_1, x_5, x_8, x_4);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_getOp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_getOp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_getOp___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findD___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
}
lean_object* l_Std_PersistentHashMap_findD(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findD___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findD___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findD___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x21_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x21_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_find_x21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_mk_string("Std.Data.PersistentHashMap");
x_8 = lean_mk_string("Std.PersistentHashMap.find!");
x_9 = lean_unsigned_to_nat(159u);
x_10 = lean_unsigned_to_nat(14u);
x_11 = lean_mk_string("key is not in the map");
x_12 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
x_13 = lean_panic_fn(x_3, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
lean_dec(x_6);
return x_14;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x21___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findEntryAtAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_2, x_5);
lean_inc(x_1);
lean_inc(x_10);
lean_inc(x_6);
x_11 = lean_apply_2(x_1, x_6, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_1);
x_16 = lean_array_fget(x_3, x_5);
lean_dec(x_5);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findEntryAtAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findEntryAtAux___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findEntryAtAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_findEntryAtAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_findEntryAux___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = 1;
x_7 = 5;
x_8 = x_6 << x_7 % (sizeof(size_t) * 8);
x_9 = x_8 - x_6;
x_10 = x_3 & x_9;
x_11 = lean_usize_to_nat(x_10);
x_12 = lean_box(2);
x_13 = lean_array_get(x_12, x_5, x_11);
lean_dec(x_11);
lean_dec(x_5);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_14);
x_16 = lean_apply_2(x_1, x_4, x_14);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_14);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
case 1:
{
lean_object* x_21; size_t x_22; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = x_3 >> x_7 % (sizeof(size_t) * 8);
x_2 = x_21;
x_3 = x_22;
goto _start;
}
default: 
{
lean_object* x_24; 
lean_dec(x_4);
lean_dec(x_1);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Std_PersistentHashMap_findEntryAtAux___rarg(x_1, x_25, x_26, lean_box(0), x_27, x_4);
lean_dec(x_26);
lean_dec(x_25);
return x_28;
}
}
}
lean_object* l_Std_PersistentHashMap_findEntryAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findEntryAux___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findEntryAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentHashMap_findEntryAux___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findEntry_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_8 = (size_t)x_7;
x_9 = l_Std_PersistentHashMap_findEntryAux___rarg(x_1, x_5, x_8, x_4);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_findEntry_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findEntry_x3f___rarg), 4, 0);
return x_3;
}
}
uint8_t l_Std_PersistentHashMap_containsAtAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_2, x_5);
lean_inc(x_1);
lean_inc(x_6);
x_11 = lean_apply_2(x_1, x_6, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_16 = 1;
return x_16;
}
}
}
}
lean_object* l_Std_PersistentHashMap_containsAtAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_containsAtAux___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_containsAtAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Std_PersistentHashMap_containsAtAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_containsAux___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = 1;
x_7 = 5;
x_8 = x_6 << x_7 % (sizeof(size_t) * 8);
x_9 = x_8 - x_6;
x_10 = x_3 & x_9;
x_11 = lean_usize_to_nat(x_10);
x_12 = lean_box(2);
x_13 = lean_array_get(x_12, x_5, x_11);
lean_dec(x_11);
lean_dec(x_5);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_1, x_4, x_14);
return x_15;
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = x_3 >> x_7 % (sizeof(size_t) * 8);
x_2 = x_16;
x_3 = x_17;
goto _start;
}
default: 
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_1);
x_19 = 0;
x_20 = lean_box(x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Std_PersistentHashMap_containsAtAux___rarg(x_1, x_21, x_22, lean_box(0), x_23, x_4);
lean_dec(x_22);
lean_dec(x_21);
x_25 = lean_box(x_24);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_containsAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_containsAux___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_containsAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentHashMap_containsAux___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_contains___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_8 = (size_t)x_7;
x_9 = l_Std_PersistentHashMap_containsAux___rarg(x_1, x_5, x_8, x_4);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_contains___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_isUnaryEntries_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_4, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_2, x_10);
return x_11;
}
}
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_isUnaryEntries_match__2___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_object* x_6; 
x_6 = lean_array_fget(x_1, x_2);
switch (lean_obj_tag(x_6)) {
case 0:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_8);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_2 = x_10;
x_3 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
return x_14;
}
}
case 1:
{
lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_2, x_16);
lean_dec(x_2);
x_2 = x_17;
goto _start;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_isUnaryEntries___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryEntries___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_isUnaryEntries___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryNode_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, lean_box(0));
return x_8;
}
}
}
lean_object* l_Std_PersistentHashMap_isUnaryNode_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_isUnaryNode_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryNode___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_box(0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Std_PersistentHashMap_isUnaryEntries___rarg(x_2, x_4, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_eq(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_fget(x_6, x_12);
x_14 = lean_array_fget(x_7, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
lean_object* l_Std_PersistentHashMap_isUnaryNode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_isUnaryNode___rarg___boxed), 1, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_isUnaryNode___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_eraseAux_match__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux_match__2___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_eraseAux_match__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux_match__3___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux_match__4___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_4, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_2, x_10);
return x_11;
}
}
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux_match__5___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__6___rarg(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_box_usize(x_2);
x_8 = lean_apply_4(x_5, x_1, x_6, x_7, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_box_usize(x_2);
x_12 = lean_apply_6(x_4, x_1, x_9, x_10, lean_box(0), x_11, x_3);
return x_12;
}
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux_match__6___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux_match__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = l_Std_PersistentHashMap_eraseAux_match__6___rarg(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = 1;
x_7 = 5;
x_8 = x_6 << x_7 % (sizeof(size_t) * 8);
x_9 = x_8 - x_6;
x_10 = x_3 & x_9;
x_11 = lean_usize_to_nat(x_10);
x_12 = lean_box(2);
x_13 = lean_array_get(x_12, x_5, x_11);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_1, x_4, x_14);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_5);
x_17 = 0;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_2, 0);
lean_dec(x_21);
x_22 = lean_array_set(x_5, x_11, x_12);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_22);
x_23 = 1;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_2);
x_26 = lean_array_set(x_5, x_11, x_12);
lean_dec(x_11);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
case 1:
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_13);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; size_t x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_13, 0);
x_33 = lean_array_set(x_5, x_11, x_12);
x_34 = x_3 >> x_7 % (sizeof(size_t) * 8);
x_35 = l_Std_PersistentHashMap_eraseAux___rarg(x_1, x_32, x_34, x_4);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
uint8_t x_38; 
lean_dec(x_33);
lean_free_object(x_13);
lean_dec(x_11);
x_38 = !lean_is_exclusive(x_35);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 1);
lean_dec(x_39);
x_40 = lean_ctor_get(x_35, 0);
lean_dec(x_40);
x_41 = 0;
x_42 = lean_box(x_41);
lean_ctor_set(x_35, 1, x_42);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_35);
x_43 = 0;
x_44 = lean_box(x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_2);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_2);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_2, 0);
lean_dec(x_47);
x_48 = !lean_is_exclusive(x_35);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_35, 0);
x_50 = lean_ctor_get(x_35, 1);
lean_dec(x_50);
x_51 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_49);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; uint8_t x_53; lean_object* x_54; 
lean_ctor_set(x_13, 0, x_49);
x_52 = lean_array_set(x_33, x_11, x_13);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_52);
x_53 = 1;
x_54 = lean_box(x_53);
lean_ctor_set(x_35, 1, x_54);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
else
{
lean_object* x_55; uint8_t x_56; 
lean_free_object(x_35);
lean_dec(x_49);
lean_free_object(x_13);
x_55 = lean_ctor_get(x_51, 0);
lean_inc(x_55);
lean_dec(x_51);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_array_set(x_33, x_11, x_59);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_60);
x_61 = 1;
x_62 = lean_box(x_61);
lean_ctor_set(x_55, 1, x_62);
lean_ctor_set(x_55, 0, x_2);
return x_55;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; 
x_63 = lean_ctor_get(x_55, 0);
x_64 = lean_ctor_get(x_55, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_55);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_array_set(x_33, x_11, x_65);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_66);
x_67 = 1;
x_68 = lean_box(x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_2);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_35, 0);
lean_inc(x_70);
lean_dec(x_35);
x_71 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_70);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; 
lean_ctor_set(x_13, 0, x_70);
x_72 = lean_array_set(x_33, x_11, x_13);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_72);
x_73 = 1;
x_74 = lean_box(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_2);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_70);
lean_free_object(x_13);
x_76 = lean_ctor_get(x_71, 0);
lean_inc(x_76);
lean_dec(x_71);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_79 = x_76;
} else {
 lean_dec_ref(x_76);
 x_79 = lean_box(0);
}
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_array_set(x_33, x_11, x_80);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_81);
x_82 = 1;
x_83 = lean_box(x_82);
if (lean_is_scalar(x_79)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_79;
}
lean_ctor_set(x_84, 0, x_2);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_2);
x_85 = lean_ctor_get(x_35, 0);
lean_inc(x_85);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_86 = x_35;
} else {
 lean_dec_ref(x_35);
 x_86 = lean_box(0);
}
x_87 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_85);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_ctor_set(x_13, 0, x_85);
x_88 = lean_array_set(x_33, x_11, x_13);
lean_dec(x_11);
x_89 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = 1;
x_91 = lean_box(x_90);
if (lean_is_scalar(x_86)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_86;
}
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_86);
lean_dec(x_85);
lean_free_object(x_13);
x_93 = lean_ctor_get(x_87, 0);
lean_inc(x_93);
lean_dec(x_87);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_array_set(x_33, x_11, x_97);
lean_dec(x_11);
x_99 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = 1;
x_101 = lean_box(x_100);
if (lean_is_scalar(x_96)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_96;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
else
{
lean_object* x_103; lean_object* x_104; size_t x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_103 = lean_ctor_get(x_13, 0);
lean_inc(x_103);
lean_dec(x_13);
x_104 = lean_array_set(x_5, x_11, x_12);
x_105 = x_3 >> x_7 % (sizeof(size_t) * 8);
x_106 = l_Std_PersistentHashMap_eraseAux___rarg(x_1, x_103, x_105, x_4);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
x_108 = lean_unbox(x_107);
lean_dec(x_107);
if (x_108 == 0)
{
lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_104);
lean_dec(x_11);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_109 = x_106;
} else {
 lean_dec_ref(x_106);
 x_109 = lean_box(0);
}
x_110 = 0;
x_111 = lean_box(x_110);
if (lean_is_scalar(x_109)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_109;
}
lean_ctor_set(x_112, 0, x_2);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_113 = x_2;
} else {
 lean_dec_ref(x_2);
 x_113 = lean_box(0);
}
x_114 = lean_ctor_get(x_106, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_115 = x_106;
} else {
 lean_dec_ref(x_106);
 x_115 = lean_box(0);
}
x_116 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_114);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; lean_object* x_121; lean_object* x_122; 
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_114);
x_118 = lean_array_set(x_104, x_11, x_117);
lean_dec(x_11);
if (lean_is_scalar(x_113)) {
 x_119 = lean_alloc_ctor(0, 1, 0);
} else {
 x_119 = x_113;
}
lean_ctor_set(x_119, 0, x_118);
x_120 = 1;
x_121 = lean_box(x_120);
if (lean_is_scalar(x_115)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_115;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_115);
lean_dec(x_114);
x_123 = lean_ctor_get(x_116, 0);
lean_inc(x_123);
lean_dec(x_116);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_126 = x_123;
} else {
 lean_dec_ref(x_123);
 x_126 = lean_box(0);
}
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
x_128 = lean_array_set(x_104, x_11, x_127);
lean_dec(x_11);
if (lean_is_scalar(x_113)) {
 x_129 = lean_alloc_ctor(0, 1, 0);
} else {
 x_129 = x_113;
}
lean_ctor_set(x_129, 0, x_128);
x_130 = 1;
x_131 = lean_box(x_130);
if (lean_is_scalar(x_126)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_126;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
}
default: 
{
uint8_t x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_133 = 0;
x_134 = lean_box(x_133);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_2);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_136 = lean_ctor_get(x_2, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_2, 1);
lean_inc(x_137);
x_138 = lean_unsigned_to_nat(0u);
x_139 = l_Array_indexOfAux___rarg(x_1, x_136, x_4, x_138);
if (lean_obj_tag(x_139) == 0)
{
uint8_t x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_137);
lean_dec(x_136);
x_140 = 0;
x_141 = lean_box(x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_2);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
else
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_2);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; 
x_144 = lean_ctor_get(x_2, 1);
lean_dec(x_144);
x_145 = lean_ctor_get(x_2, 0);
lean_dec(x_145);
x_146 = lean_ctor_get(x_139, 0);
lean_inc(x_146);
lean_dec(x_139);
x_147 = l_Array_eraseIdx_x27___rarg(x_136, x_146);
x_148 = l_Array_eraseIdx_x27___rarg(x_137, x_146);
lean_dec(x_146);
lean_ctor_set(x_2, 1, x_148);
lean_ctor_set(x_2, 0, x_147);
x_149 = 1;
x_150 = lean_box(x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_2);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_2);
x_152 = lean_ctor_get(x_139, 0);
lean_inc(x_152);
lean_dec(x_139);
x_153 = l_Array_eraseIdx_x27___rarg(x_136, x_152);
x_154 = l_Array_eraseIdx_x27___rarg(x_137, x_152);
lean_dec(x_152);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = 1;
x_157 = lean_box(x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_155);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_eraseAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_eraseAux___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentHashMap_eraseAux___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_erase_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_3, x_4, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_erase_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_erase_match__1___rarg), 3, 0);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_erase_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_erase_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = (size_t)x_9;
x_11 = l_Std_PersistentHashMap_eraseAux___rarg(x_1, x_6, x_10, x_4);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_7, x_16);
lean_dec(x_7);
lean_ctor_set(x_3, 1, x_17);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_3, 0);
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_3);
lean_inc(x_4);
x_20 = lean_apply_1(x_2, x_4);
x_21 = lean_unbox_uint64(x_20);
lean_dec(x_20);
x_22 = (size_t)x_21;
x_23 = l_Std_PersistentHashMap_eraseAux___rarg(x_1, x_18, x_22, x_4);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_23, 0);
lean_inc(x_28);
lean_dec(x_23);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_19, x_29);
lean_dec(x_19);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Std_PersistentHashMap_erase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_erase___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_4, x_5, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_4(x_3, x_7, x_8, lean_box(0), x_2);
return x_9;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_match__1___rarg), 4, 0);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = l_Std_PersistentHashMap_foldlMAux_traverse___rarg(x_2, lean_box(0), x_3, x_4, x_5, lean_box(0), x_8, x_6);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_4);
x_10 = lean_nat_dec_lt(x_7, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_array_fget(x_4, x_7);
x_15 = lean_array_fget(x_5, x_7);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_3);
x_17 = lean_apply_3(x_3, x_8, x_14, x_15);
x_18 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_18, 0, x_7);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_5);
x_19 = lean_apply_4(x_16, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___rarg), 8, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_3(x_1, x_3, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = l_Std_PersistentHashMap_foldlMAux___rarg(x_2, lean_box(0), x_1, x_8, x_3);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, lean_box(0), x_3);
return x_12;
}
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___rarg___lambda__1), 4, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_5);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_8, x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_5);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_20 = l_Array_foldlMUnsafe_fold___rarg(x_1, x_7, x_6, x_18, x_19, x_5);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_dec(x_4);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Std_PersistentHashMap_foldlMAux_traverse___rarg(x_1, lean_box(0), x_3, x_21, x_22, lean_box(0), x_23, x_5);
return x_24;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___rarg), 5, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Std_PersistentHashMap_foldlMAux___rarg(x_1, lean_box(0), x_6, x_8, x_7);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___rarg___boxed), 7, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentHashMap_foldlM___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_forM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_forM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_forM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_box(0);
x_8 = l_Std_PersistentHashMap_foldlM___rarg(x_1, lean_box(0), x_2, x_3, x_4, x_6, x_7);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_forM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_forM___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_forM___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_forM___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_forM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_forM___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Id_instMonadId;
x_7 = l_Std_PersistentHashMap_foldlM___rarg(x_6, lean_box(0), x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldl___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldl___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = x_2 + x_7;
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_8;
x_4 = x_12;
goto _start;
}
case 1:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
lean_dec(x_6);
x_15 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg(x_14, x_4);
lean_dec(x_14);
x_2 = x_8;
x_4 = x_15;
goto _start;
}
default: 
{
x_2 = x_8;
goto _start;
}
}
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg___lambda__1), 3, 0);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg(x_13, x_11, x_12, lean_box(0), x_14, x_2);
return x_15;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_toList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_toList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_toList___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_toList___spec__3___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_toList___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_toList___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_toList___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_toList___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_toList___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Std_PersistentHashMap_Stats_numNodes___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Std_PersistentHashMap_Stats_numNull___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Std_PersistentHashMap_Stats_numCollisions___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Std_PersistentHashMap_Stats_maxDepth___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_collectStats_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_3(x_5, x_6, x_2, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_5(x_4, x_8, x_9, lean_box(0), x_2, x_3);
return x_10;
}
}
}
lean_object* l_Std_PersistentHashMap_collectStats_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_collectStats_match__1___rarg), 5, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_dec(x_7);
x_3 = x_9;
goto _start;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = l_Std_PersistentHashMap_collectStats___rarg(x_11, x_5, x_13);
lean_dec(x_13);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_5);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_5, 1);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_17, x_18);
lean_dec(x_17);
lean_ctor_set(x_5, 1, x_19);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_5, 0);
x_22 = lean_ctor_get(x_5, 1);
x_23 = lean_ctor_get(x_5, 2);
x_24 = lean_ctor_get(x_5, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_22, x_25);
lean_dec(x_22);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_24);
x_3 = x_9;
x_5 = x_27;
goto _start;
}
}
}
}
else
{
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_collectStats___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
x_10 = l_Nat_max(x_7, x_3);
lean_dec(x_7);
lean_ctor_set(x_2, 3, x_10);
lean_ctor_set(x_2, 0, x_9);
x_11 = lean_array_get_size(x_5);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_dec(x_11);
return x_2;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_11, x_11);
if (x_14 == 0)
{
lean_dec(x_11);
return x_2;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = 0;
x_16 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_17 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg(x_3, x_5, x_15, x_16, x_2);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_2, 0);
x_20 = lean_ctor_get(x_2, 1);
x_21 = lean_ctor_get(x_2, 2);
x_22 = lean_ctor_get(x_2, 3);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_2);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_19, x_23);
lean_dec(x_19);
x_25 = l_Nat_max(x_22, x_3);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_21);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_array_get_size(x_18);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_28, x_27);
if (x_29 == 0)
{
lean_dec(x_27);
return x_26;
}
else
{
uint8_t x_30; 
x_30 = lean_nat_dec_le(x_27, x_27);
if (x_30 == 0)
{
lean_dec(x_27);
return x_26;
}
else
{
size_t x_31; size_t x_32; lean_object* x_33; 
x_31 = 0;
x_32 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_33 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg(x_3, x_18, x_31, x_32, x_26);
return x_33;
}
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_2);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_2, 0);
x_37 = lean_ctor_get(x_2, 2);
x_38 = lean_ctor_get(x_2, 3);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_36, x_39);
lean_dec(x_36);
x_41 = lean_array_get_size(x_35);
x_42 = lean_nat_add(x_37, x_41);
lean_dec(x_41);
lean_dec(x_37);
x_43 = lean_nat_sub(x_42, x_39);
lean_dec(x_42);
x_44 = l_Nat_max(x_38, x_3);
lean_dec(x_38);
lean_ctor_set(x_2, 3, x_44);
lean_ctor_set(x_2, 2, x_43);
lean_ctor_set(x_2, 0, x_40);
return x_2;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_45 = lean_ctor_get(x_1, 0);
x_46 = lean_ctor_get(x_2, 0);
x_47 = lean_ctor_get(x_2, 1);
x_48 = lean_ctor_get(x_2, 2);
x_49 = lean_ctor_get(x_2, 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_2);
x_50 = lean_unsigned_to_nat(1u);
x_51 = lean_nat_add(x_46, x_50);
lean_dec(x_46);
x_52 = lean_array_get_size(x_45);
x_53 = lean_nat_add(x_48, x_52);
lean_dec(x_52);
lean_dec(x_48);
x_54 = lean_nat_sub(x_53, x_50);
lean_dec(x_53);
x_55 = l_Nat_max(x_49, x_3);
lean_dec(x_49);
x_56 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_47);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_55);
return x_56;
}
}
}
}
lean_object* l_Std_PersistentHashMap_collectStats(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_collectStats___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_collectStats___spec__1___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_collectStats___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_collectStats___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_stats___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Std_PersistentHashMap_collectStats___rarg(x_2, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_stats(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_stats___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_stats___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_PersistentHashMap_stats___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_stats___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_stats(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_Stats_toString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Nat_repr(x_2);
x_4 = lean_mk_string("{ nodes := ");
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = lean_mk_string(", null := ");
x_7 = lean_string_append(x_5, x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = l_Nat_repr(x_8);
x_10 = lean_string_append(x_7, x_9);
lean_dec(x_9);
x_11 = lean_mk_string(", collisions := ");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = l_Nat_repr(x_13);
x_15 = lean_string_append(x_12, x_14);
lean_dec(x_14);
x_16 = lean_mk_string(", depth := ");
x_17 = lean_string_append(x_15, x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_dec(x_1);
x_19 = l_Nat_repr(x_18);
x_20 = lean_string_append(x_17, x_19);
lean_dec(x_19);
x_21 = lean_mk_string("}");
x_22 = lean_string_append(x_20, x_21);
lean_dec(x_21);
return x_22;
}
}
static lean_object* _init_l_Std_PersistentHashMap_instToStringStats() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_Stats_toString), 1, 0);
return x_1;
}
}
lean_object* initialize_Init(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Std_Data_PersistentHashMap(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_PersistentHashMap_shift = _init_l_Std_PersistentHashMap_shift();
l_Std_PersistentHashMap_branching = _init_l_Std_PersistentHashMap_branching();
l_Std_PersistentHashMap_maxDepth = _init_l_Std_PersistentHashMap_maxDepth();
l_Std_PersistentHashMap_maxCollisions = _init_l_Std_PersistentHashMap_maxCollisions();
lean_mark_persistent(l_Std_PersistentHashMap_maxCollisions);
l_Std_PersistentHashMap_size___default = _init_l_Std_PersistentHashMap_size___default();
lean_mark_persistent(l_Std_PersistentHashMap_size___default);
l_Std_PersistentHashMap_Stats_numNodes___default = _init_l_Std_PersistentHashMap_Stats_numNodes___default();
lean_mark_persistent(l_Std_PersistentHashMap_Stats_numNodes___default);
l_Std_PersistentHashMap_Stats_numNull___default = _init_l_Std_PersistentHashMap_Stats_numNull___default();
lean_mark_persistent(l_Std_PersistentHashMap_Stats_numNull___default);
l_Std_PersistentHashMap_Stats_numCollisions___default = _init_l_Std_PersistentHashMap_Stats_numCollisions___default();
lean_mark_persistent(l_Std_PersistentHashMap_Stats_numCollisions___default);
l_Std_PersistentHashMap_Stats_maxDepth___default = _init_l_Std_PersistentHashMap_Stats_maxDepth___default();
lean_mark_persistent(l_Std_PersistentHashMap_Stats_maxDepth___default);
l_Std_PersistentHashMap_instToStringStats = _init_l_Std_PersistentHashMap_instToStringStats();
lean_mark_persistent(l_Std_PersistentHashMap_instToStringStats);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
