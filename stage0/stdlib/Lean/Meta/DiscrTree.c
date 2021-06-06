// Lean compiler output
// Module: Lean.Meta.DiscrTree
// Imports: Init Lean.Meta.Basic Lean.Meta.FunInfo Lean.Meta.InferType
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
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10(lean_object*);
lean_object* l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity;
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_join(lean_object*);
uint8_t l_Lean_Expr_isNatLit(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__8(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_arity_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Lean_Meta_DiscrTree_getMatch(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx_match__1(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instDecidableLt(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_format_match__1(lean_object*);
lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__2(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabitedDiscrTree(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify_process_match__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2(lean_object*);
lean_object* l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_format(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_format(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult(lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPathAux_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Key_format___spec__1(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_format___spec__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_format(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instToFormatDiscrTree___rarg(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__3___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
lean_object* l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13(lean_object*);
lean_object* l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_lt___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insert(lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__1(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__3(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore_match__1(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_format_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify_process___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_format___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPathAux(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6(lean_object*);
lean_object* l_List_format___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getMatchKeyArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__1(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId;
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_arity(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify_process_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instToFormatTrie(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10(lean_object*);
lean_object* l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(lean_object*);
uint8_t l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify_process(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux_match__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instDecidableLt___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_match__1(lean_object*);
lean_object* l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPathAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_format___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instToFormatDiscrTree(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1(lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify(lean_object*);
uint8_t l_Array_contains___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta_match__1(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13(lean_object*);
lean_object* l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpStar;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__4(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_format_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_process___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(lean_object*);
extern lean_object* l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_object* l_Lean_Meta_DiscrTree_insertCore___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult_match__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instToFormatTrie___rarg(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_format___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__4(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instToFormatKey;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_format___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1___boxed(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_arity___boxed(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_format_match__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_hasNoindexAnnotation___boxed(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify_process_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_lt_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch_process(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_arity_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__2(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_etaExpandedStrict_x3f(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__8___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPathAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instLTKey;
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Literal_lt(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs_match__1(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg___boxed(lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_lt_match__1(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg(lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_6, x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_5, x_11, x_12);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_1(x_4, x_14);
return x_15;
}
case 3:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_2, x_16);
return x_17;
}
case 4:
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_18 = lean_box(0);
x_19 = lean_apply_1(x_3, x_18);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_box(0);
x_21 = lean_apply_1(x_7, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Key_ctorIdx_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(4u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(3u);
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
case 3:
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
case 4:
{
lean_object* x_6; 
x_6 = lean_unsigned_to_nat(1u);
return x_6;
}
default: 
{
lean_object* x_7; 
x_7 = lean_unsigned_to_nat(5u);
return x_7;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_ctorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_lt_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_4(x_5, x_7, x_8, x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_5);
x_12 = lean_apply_2(x_6, x_1, x_2);
return x_12;
}
}
case 1:
{
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_apply_4(x_4, x_13, x_14, x_15, x_16);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_4);
x_18 = lean_apply_2(x_6, x_1, x_2);
return x_18;
}
}
case 2:
{
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_apply_2(x_3, x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_3);
x_22 = lean_apply_2(x_6, x_1, x_2);
return x_22;
}
}
default: 
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = lean_apply_2(x_6, x_1, x_2);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_lt_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Key_lt_match__1___rarg), 6, 0);
return x_2;
}
}
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Name_quickLt(x_3, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = lean_name_eq(x_3, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_lt(x_4, x_6);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_1);
x_13 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_2);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
return x_14;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = l_Lean_Name_quickLt(x_15, x_17);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = lean_name_eq(x_15, x_17);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = 0;
return x_21;
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_lt(x_16, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = 1;
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_1);
x_25 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_2);
x_26 = lean_nat_dec_lt(x_24, x_25);
lean_dec(x_25);
lean_dec(x_24);
return x_26;
}
}
case 2:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_1, 0);
x_28 = lean_ctor_get(x_2, 0);
x_29 = l_Lean_Literal_lt(x_27, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_1);
x_31 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_2);
x_32 = lean_nat_dec_lt(x_30, x_31);
lean_dec(x_31);
lean_dec(x_30);
return x_32;
}
}
default: 
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_1);
x_34 = l_Lean_Meta_DiscrTree_Key_ctorIdx(x_2);
x_35 = lean_nat_dec_lt(x_33, x_34);
lean_dec(x_34);
lean_dec(x_33);
return x_35;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_DiscrTree_Key_lt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_instLTKey() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l_Lean_Meta_DiscrTree_instDecidableLt(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Meta_DiscrTree_Key_lt(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_instDecidableLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_DiscrTree_instDecidableLt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_format_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_6, x_9, x_10);
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_2(x_7, x_12, x_13);
return x_14;
}
case 2:
{
lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_1(x_4, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_4);
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_apply_1(x_5, x_18);
return x_19;
}
}
case 3:
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_box(0);
x_21 = lean_apply_1(x_2, x_20);
return x_21;
}
case 4:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_22 = lean_box(0);
x_23 = lean_apply_1(x_3, x_22);
return x_23;
}
default: 
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_box(0);
x_25 = lean_apply_1(x_8, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_format_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Key_format_match__1___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Key_format___spec__1(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_format(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Std_fmt___at_Lean_Meta_DiscrTree_Key_format___spec__1(x_4);
return x_5;
}
case 2:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = l_String_quote(x_9);
lean_dec(x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
case 3:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_mk_string("*");
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
case 4:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_mk_string("◾");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_mk_string("→");
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_instToFormatKey() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Key_format), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_arity_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_3, x_9, x_10);
return x_11;
}
case 5:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_4, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_5, x_1);
return x_14;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_arity_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Key_arity_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_arity(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
case 5:
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
default: 
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Key_arity___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DiscrTree_Key_arity(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_format_match__1___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_DiscrTree_Trie_format_match__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_format_match__2___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DiscrTree_Key_format(x_1);
return x_2;
}
}
lean_object* l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2___rarg(x_1, x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Lean_Meta_DiscrTree_Key_format(x_8);
x_11 = lean_mk_string(" => ");
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_DiscrTree_Trie_format___rarg(x_1, x_9);
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_mk_string("(");
x_17 = lean_string_length(x_16);
x_18 = lean_nat_to_int(x_17);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_16);
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
x_21 = lean_mk_string(")");
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
x_25 = 0;
x_26 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_25);
x_27 = lean_box(1);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_28);
return x_2;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_29 = lean_ctor_get(x_2, 0);
x_30 = lean_ctor_get(x_2, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_2);
lean_inc(x_1);
x_31 = l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2___rarg(x_1, x_30);
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = l_Lean_Meta_DiscrTree_Key_format(x_32);
x_35 = lean_mk_string(" => ");
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Meta_DiscrTree_Trie_format___rarg(x_1, x_33);
x_39 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("(");
x_41 = lean_string_length(x_40);
x_42 = lean_nat_to_int(x_41);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_40);
x_44 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_39);
x_45 = lean_mk_string(")");
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
x_49 = 0;
x_50 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set_uint8(x_50, sizeof(void*)*1, x_49);
x_51 = lean_box(1);
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_31);
return x_53;
}
}
}
}
lean_object* l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_format___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__4___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_array_to_list(lean_box(0), x_2);
x_4 = l_List_format___rarg(x_1, x_3);
x_5 = lean_mk_string("#");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_format___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Array_isEmpty___rarg(x_3);
x_6 = lean_mk_string("node");
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_array_to_list(lean_box(0), x_4);
lean_inc(x_1);
x_9 = l_List_map___at_Lean_Meta_DiscrTree_Trie_format___spec__2___rarg(x_1, x_8);
x_10 = l_Std_Format_join(x_9);
lean_dec(x_9);
x_11 = lean_mk_string("(");
x_12 = lean_string_length(x_11);
x_13 = lean_nat_to_int(x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_11);
x_15 = lean_mk_string(")");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
if (x_5 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_17 = l_Std_fmt___at_Lean_Meta_DiscrTree_Trie_format___spec__3___rarg(x_1, x_3);
x_18 = lean_mk_string(" ");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_7);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
x_25 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
x_26 = 0;
x_27 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
x_28 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_26);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_3);
lean_dec(x_1);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_7);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_10);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_16);
x_34 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_34, 0, x_13);
lean_ctor_set(x_34, 1, x_33);
x_35 = 0;
x_36 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
x_37 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_35);
return x_37;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_format(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_format___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_instToFormatTrie___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_format___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_instToFormatTrie(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_instToFormatTrie___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_format_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_DiscrTree_format_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_format_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_format___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DiscrTree_Trie_format___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_DiscrTree_format___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_fmt___at_Lean_Meta_DiscrTree_format___spec__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; uint8_t x_31; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = l_Lean_Meta_DiscrTree_Key_format(x_10);
x_15 = lean_mk_string(" => ");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_inc(x_1);
x_18 = l_Lean_Meta_DiscrTree_Trie_format___rarg(x_1, x_11);
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_mk_string("(");
x_21 = lean_string_length(x_20);
x_22 = lean_nat_to_int(x_21);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_20);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
x_25 = lean_mk_string(")");
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = 0;
x_30 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*1, x_29);
x_31 = lean_unbox(x_13);
lean_dec(x_13);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_box(1);
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
x_35 = 0;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
x_3 = x_9;
x_5 = x_37;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_40, 0, x_12);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_30);
x_42 = 0;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
x_3 = x_9;
x_5 = x_44;
goto _start;
}
}
case 1:
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_7, 0);
lean_inc(x_46);
lean_dec(x_7);
lean_inc(x_1);
x_47 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg(x_1, x_46, x_5);
lean_dec(x_46);
x_3 = x_9;
x_5 = x_47;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; uint8_t x_24; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Lean_Meta_DiscrTree_Key_format(x_3);
x_8 = lean_mk_string(" => ");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_Meta_DiscrTree_Trie_format___rarg(x_1, x_4);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string("(");
x_14 = lean_string_length(x_13);
x_15 = lean_nat_to_int(x_14);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_13);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
x_18 = lean_mk_string(")");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
x_22 = 0;
x_23 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_22);
x_24 = lean_unbox(x_6);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_box(1);
lean_inc(x_5);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_box(0);
lean_inc(x_5);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_5);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_23);
x_34 = 0;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_format___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_3 = 1;
x_4 = lean_box(0);
x_5 = lean_box(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg(x_1, x_2, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = 0;
x_10 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_DiscrTree_format(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_format___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_format___spec__4___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_format___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_format___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_format___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_format___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DiscrTree_format___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_instToFormatDiscrTree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_format___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_instToFormatDiscrTree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_instToFormatDiscrTree___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_mk_string("_discr_tree_tmp");
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpStar() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId;
x_2 = l_Lean_mkMVar(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_instInhabitedDiscrTree(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_ignoreArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_3);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Meta_isProof(x_1, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_fget(x_3, x_2);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*1 + 1);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_ctor_get_uint8(x_12, sizeof(void*)*1);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = l_Lean_Meta_isProof(x_1, x_4, x_5, x_6, x_7, x_8);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = l_Lean_Meta_isType(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 0);
lean_dec(x_20);
x_21 = 1;
x_22 = lean_box(x_21);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_16);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_16, 0);
lean_dec(x_28);
x_29 = 0;
x_30 = lean_box(x_29);
lean_ctor_set(x_16, 0, x_30);
return x_16;
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_16, 1);
lean_inc(x_31);
lean_dec(x_16);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_16);
if (x_35 == 0)
{
return x_16;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = lean_ctor_get(x_16, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_16);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_39 = 1;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_8);
return x_41;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_ignoreArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_ignoreArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 5)
{
lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_5(x_4, x_1, x_6, x_7, x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_4);
x_11 = lean_apply_3(x_5, x_1, x_2, x_3);
return x_11;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_11);
x_12 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_ignoreArg(x_11, x_2, x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_18 = lean_array_push(x_4, x_11);
x_2 = x_17;
x_3 = x_10;
x_4 = x_18;
x_9 = x_15;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_11);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_2, x_21);
lean_dec(x_2);
x_23 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpStar;
x_24 = lean_array_push(x_4, x_23);
x_2 = x_22;
x_3 = x_10;
x_4 = x_24;
x_9 = x_20;
goto _start;
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_12);
if (x_26 == 0)
{
return x_12;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_12, 0);
x_28 = lean_ctor_get(x_12, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_12);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_9);
return x_30;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_whnf(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_11 = l_Lean_Expr_etaExpandedStrict_x3f(x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
else
{
lean_object* x_12; 
lean_free_object(x_7);
lean_dec(x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_1 = x_12;
x_6 = x_10;
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
lean_inc(x_14);
x_16 = l_Lean_Expr_etaExpandedStrict_x3f(x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_14);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_1 = x_18;
x_6 = x_15;
goto _start;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_7);
if (x_20 == 0)
{
return x_7;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
uint8_t l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Expr_isNatLit(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Expr_getAppFn(x_1);
x_4 = l_Lean_Expr_isConst(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_6 = l_Lean_Expr_constName_x21(x_3);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_mk_string("Nat");
x_9 = lean_name_mk_string(x_7, x_8);
x_38 = lean_mk_string("succ");
lean_inc(x_9);
x_39 = lean_name_mk_string(x_9, x_38);
x_40 = lean_name_eq(x_6, x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_box(0);
x_10 = x_41;
goto block_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_unsigned_to_nat(0u);
x_43 = l_Lean_Expr_getAppNumArgsAux(x_1, x_42);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_dec_eq(x_43, x_44);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_box(0);
x_10 = x_46;
goto block_37;
}
else
{
lean_object* x_47; 
lean_dec(x_9);
lean_dec(x_6);
x_47 = l_Lean_Expr_appArg_x21(x_1);
lean_dec(x_1);
x_1 = x_47;
goto _start;
}
}
block_37:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_10);
x_11 = lean_mk_string("OfNat");
x_12 = lean_name_mk_string(x_7, x_11);
x_13 = lean_mk_string("ofNat");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_name_eq(x_6, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_mk_string("zero");
x_17 = lean_name_mk_string(x_9, x_16);
x_18 = lean_name_eq(x_6, x_17);
lean_dec(x_17);
lean_dec(x_6);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = 0;
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Expr_getAppNumArgsAux(x_1, x_20);
lean_dec(x_1);
x_22 = lean_nat_dec_eq(x_21, x_20);
lean_dec(x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Expr_getAppNumArgsAux(x_1, x_23);
x_25 = lean_unsigned_to_nat(3u);
x_26 = lean_nat_dec_eq(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_1);
x_27 = lean_mk_string("zero");
x_28 = lean_name_mk_string(x_9, x_27);
x_29 = lean_name_eq(x_6, x_28);
lean_dec(x_28);
lean_dec(x_6);
if (x_29 == 0)
{
uint8_t x_30; 
lean_dec(x_24);
x_30 = 0;
return x_30;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_eq(x_24, x_23);
lean_dec(x_24);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_9);
lean_dec(x_6);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_sub(x_24, x_32);
lean_dec(x_24);
x_34 = lean_nat_sub(x_33, x_32);
lean_dec(x_33);
x_35 = l_Lean_Expr_getRevArg_x21(x_1, x_34);
lean_dec(x_1);
x_1 = x_35;
goto _start;
}
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_1);
x_49 = 1;
return x_49;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNatType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_whnf(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_box(0);
x_11 = lean_mk_string("Nat");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = l_Lean_Expr_isConstOf(x_9, x_12);
lean_dec(x_12);
lean_dec(x_9);
x_14 = lean_box(x_13);
lean_ctor_set(x_7, 0, x_14);
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_7);
x_17 = lean_box(0);
x_18 = lean_mk_string("Nat");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = l_Lean_Expr_isConstOf(x_15, x_19);
lean_dec(x_19);
lean_dec(x_15);
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
return x_7;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_7, 0);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_7);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_73; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_8 = lean_box(0);
x_9 = lean_mk_string("Nat");
x_10 = lean_name_mk_string(x_8, x_9);
x_115 = lean_mk_string("add");
lean_inc(x_10);
x_116 = lean_name_mk_string(x_10, x_115);
x_117 = lean_name_eq(x_1, x_116);
lean_dec(x_116);
if (x_117 == 0)
{
lean_object* x_118; 
x_118 = lean_box(0);
x_73 = x_118;
goto block_114;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_119 = lean_unsigned_to_nat(0u);
x_120 = l_Lean_Expr_getAppNumArgsAux(x_2, x_119);
x_121 = lean_unsigned_to_nat(2u);
x_122 = lean_nat_dec_eq(x_120, x_121);
lean_dec(x_120);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_box(0);
x_73 = x_123;
goto block_114;
}
else
{
lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_124 = l_Lean_Expr_appArg_x21(x_2);
x_125 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(x_124);
x_126 = lean_box(x_125);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_7);
return x_127;
}
}
block_72:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_11);
x_12 = lean_mk_string("HAdd");
x_13 = lean_name_mk_string(x_8, x_12);
x_14 = lean_mk_string("hAdd");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_name_eq(x_1, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_mk_string("succ");
x_18 = lean_name_mk_string(x_10, x_17);
x_19 = lean_name_eq(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_7);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Expr_getAppNumArgsAux(x_2, x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_7);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Lean_Expr_getAppNumArgsAux(x_2, x_29);
x_31 = lean_unsigned_to_nat(6u);
x_32 = lean_nat_dec_eq(x_30, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = lean_mk_string("succ");
x_34 = lean_name_mk_string(x_10, x_33);
x_35 = lean_name_eq(x_1, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_30);
x_36 = 0;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_7);
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_dec_eq(x_30, x_39);
lean_dec(x_30);
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_7);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_10);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_sub(x_30, x_43);
lean_dec(x_30);
x_45 = lean_nat_sub(x_44, x_43);
lean_dec(x_44);
x_46 = l_Lean_Expr_getRevArg_x21(x_2, x_45);
x_47 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNatType(x_46, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_47);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_47, 0);
lean_dec(x_51);
x_52 = 0;
x_53 = lean_box(x_52);
lean_ctor_set(x_47, 0, x_53);
return x_47;
}
else
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_47, 1);
lean_inc(x_54);
lean_dec(x_47);
x_55 = 0;
x_56 = lean_box(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_47);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_47, 0);
lean_dec(x_59);
x_60 = l_Lean_Expr_appArg_x21(x_2);
x_61 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(x_60);
x_62 = lean_box(x_61);
lean_ctor_set(x_47, 0, x_62);
return x_47;
}
else
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_47, 1);
lean_inc(x_63);
lean_dec(x_47);
x_64 = l_Lean_Expr_appArg_x21(x_2);
x_65 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(x_64);
x_66 = lean_box(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_63);
return x_67;
}
}
}
else
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_47);
if (x_68 == 0)
{
return x_47;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_47, 0);
x_70 = lean_ctor_get(x_47, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_47);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
}
block_114:
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
lean_dec(x_73);
x_74 = lean_mk_string("Add");
x_75 = lean_name_mk_string(x_8, x_74);
x_76 = lean_mk_string("add");
x_77 = lean_name_mk_string(x_75, x_76);
x_78 = lean_name_eq(x_1, x_77);
lean_dec(x_77);
if (x_78 == 0)
{
lean_object* x_79; 
x_79 = lean_box(0);
x_11 = x_79;
goto block_72;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_unsigned_to_nat(0u);
x_81 = l_Lean_Expr_getAppNumArgsAux(x_2, x_80);
x_82 = lean_unsigned_to_nat(4u);
x_83 = lean_nat_dec_eq(x_81, x_82);
if (x_83 == 0)
{
lean_object* x_84; 
lean_dec(x_81);
x_84 = lean_box(0);
x_11 = x_84;
goto block_72;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_10);
x_85 = lean_nat_sub(x_81, x_80);
lean_dec(x_81);
x_86 = lean_unsigned_to_nat(1u);
x_87 = lean_nat_sub(x_85, x_86);
lean_dec(x_85);
x_88 = l_Lean_Expr_getRevArg_x21(x_2, x_87);
x_89 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNatType(x_88, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_unbox(x_90);
lean_dec(x_90);
if (x_91 == 0)
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_89);
if (x_92 == 0)
{
lean_object* x_93; uint8_t x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_89, 0);
lean_dec(x_93);
x_94 = 0;
x_95 = lean_box(x_94);
lean_ctor_set(x_89, 0, x_95);
return x_89;
}
else
{
lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_89, 1);
lean_inc(x_96);
lean_dec(x_89);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_96);
return x_99;
}
}
else
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_89);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; 
x_101 = lean_ctor_get(x_89, 0);
lean_dec(x_101);
x_102 = l_Lean_Expr_appArg_x21(x_2);
x_103 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(x_102);
x_104 = lean_box(x_103);
lean_ctor_set(x_89, 0, x_104);
return x_89;
}
else
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_89, 1);
lean_inc(x_105);
lean_dec(x_89);
x_106 = l_Lean_Expr_appArg_x21(x_2);
x_107 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isNumeral(x_106);
x_108 = lean_box(x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_105);
return x_109;
}
}
}
else
{
uint8_t x_110; 
x_110 = !lean_is_exclusive(x_89);
if (x_110 == 0)
{
return x_89;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_89, 0);
x_112 = lean_ctor_get(x_89, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_89);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isOffset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isOffset(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_box(0);
x_9 = lean_mk_string("Nat");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("zero");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_name_eq(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_isOffset(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
else
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = 1;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
return x_17;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("noindex");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_mkAnnotation(x_4, x_1);
return x_5;
}
}
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("noindex");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_annotation_x3f(x_4, x_1);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 1;
return x_7;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_hasNoindexAnnotation___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_2(x_4, x_8, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_2(x_5, x_12, x_14);
return x_15;
}
case 4:
{
lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_19 = lean_box_uint64(x_18);
x_20 = lean_apply_3(x_3, x_16, x_17, x_19);
return x_20;
}
case 7:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_25 = lean_box_uint64(x_24);
x_26 = lean_apply_4(x_6, x_21, x_22, x_23, x_25);
return x_26;
}
case 9:
{
lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_29 = lean_box_uint64(x_28);
x_30 = lean_apply_2(x_2, x_27, x_29);
return x_30;
}
default: 
{
lean_object* x_31; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_apply_1(x_7, x_1);
return x_31;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
lean_inc(x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_12);
x_14 = l_Lean_Meta_getFunInfoNArgs(x_3, x_12, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_12, x_18);
lean_dec(x_12);
x_20 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux(x_17, x_19, x_1, x_4, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_13);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_13);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_13);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_14);
if (x_32 == 0)
{
return x_14;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_14, 0);
x_34 = lean_ctor_get(x_14, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_14);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(x_3);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Expr_getAppFn(x_12);
switch (lean_obj_tag(x_14)) {
case 1:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_free_object(x_10);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux(x_12, x_16);
lean_inc(x_17);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_17);
x_19 = l_Lean_Meta_getFunInfoNArgs(x_14, x_17, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_17, x_23);
lean_dec(x_17);
x_25 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux(x_22, x_24, x_12, x_2, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_22);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_25, 0, x_28);
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_25);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_18);
x_33 = !lean_is_exclusive(x_25);
if (x_33 == 0)
{
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 0);
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_25);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_19);
if (x_37 == 0)
{
return x_19;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_19, 0);
x_39 = lean_ctor_get(x_19, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_19);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
case 2:
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_12);
x_41 = lean_ctor_get(x_14, 0);
lean_inc(x_41);
lean_dec(x_14);
x_42 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId;
x_43 = lean_name_eq(x_41, x_42);
if (x_43 == 0)
{
lean_object* x_44; 
lean_free_object(x_10);
x_44 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(x_41, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_unbox(x_45);
lean_dec(x_45);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_44);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_44, 0);
lean_dec(x_48);
x_49 = lean_box(3);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_2);
lean_ctor_set(x_44, 0, x_50);
return x_44;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
lean_dec(x_44);
x_52 = lean_box(3);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_2);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
}
else
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_44);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_44, 0);
lean_dec(x_56);
x_57 = lean_box(4);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_2);
lean_ctor_set(x_44, 0, x_58);
return x_44;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_44, 1);
lean_inc(x_59);
lean_dec(x_44);
x_60 = lean_box(4);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_2);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_44);
if (x_63 == 0)
{
return x_44;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_44, 0);
x_65 = lean_ctor_get(x_44, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_44);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_67 = lean_box(3);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_2);
lean_ctor_set(x_10, 0, x_68);
return x_10;
}
}
case 4:
{
lean_free_object(x_10);
if (x_1 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_14, 0);
lean_inc(x_69);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_70 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar(x_69, x_12, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = lean_box(0);
x_75 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(x_12, x_69, x_14, x_2, x_74, x_4, x_5, x_6, x_7, x_73);
return x_75;
}
else
{
uint8_t x_76; 
lean_dec(x_69);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_70);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_70, 0);
lean_dec(x_77);
x_78 = lean_box(3);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_2);
lean_ctor_set(x_70, 0, x_79);
return x_70;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_70, 1);
lean_inc(x_80);
lean_dec(x_70);
x_81 = lean_box(3);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_2);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_80);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_69);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_84 = !lean_is_exclusive(x_70);
if (x_84 == 0)
{
return x_70;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_70, 0);
x_86 = lean_ctor_get(x_70, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_70);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_14, 0);
lean_inc(x_88);
x_89 = lean_box(0);
x_90 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(x_12, x_88, x_14, x_2, x_89, x_4, x_5, x_6, x_7, x_13);
return x_90;
}
}
case 7:
{
lean_object* x_91; lean_object* x_92; uint8_t x_93; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = lean_ctor_get(x_14, 1);
lean_inc(x_91);
x_92 = lean_ctor_get(x_14, 2);
lean_inc(x_92);
lean_dec(x_14);
x_93 = l_Lean_Expr_hasLooseBVars(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_array_push(x_2, x_91);
x_95 = lean_array_push(x_94, x_92);
x_96 = lean_box(5);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
lean_ctor_set(x_10, 0, x_97);
return x_10;
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_dec(x_92);
lean_dec(x_91);
x_98 = lean_box(4);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_2);
lean_ctor_set(x_10, 0, x_99);
return x_10;
}
}
case 9:
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_100 = lean_ctor_get(x_14, 0);
lean_inc(x_100);
lean_dec(x_14);
x_101 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_2);
lean_ctor_set(x_10, 0, x_102);
return x_10;
}
default: 
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_103 = lean_box(4);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_2);
lean_ctor_set(x_10, 0, x_104);
return x_10;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_10, 0);
x_106 = lean_ctor_get(x_10, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_10);
x_107 = l_Lean_Expr_getAppFn(x_105);
switch (lean_obj_tag(x_107)) {
case 1:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_unsigned_to_nat(0u);
x_110 = l_Lean_Expr_getAppNumArgsAux(x_105, x_109);
lean_inc(x_110);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_110);
x_112 = l_Lean_Meta_getFunInfoNArgs(x_107, x_110, x_4, x_5, x_6, x_7, x_106);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_ctor_get(x_113, 0);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_unsigned_to_nat(1u);
x_117 = lean_nat_sub(x_110, x_116);
lean_dec(x_110);
x_118 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgsAux(x_115, x_117, x_105, x_2, x_4, x_5, x_6, x_7, x_114);
lean_dec(x_115);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_121 = x_118;
} else {
 lean_dec_ref(x_118);
 x_121 = lean_box(0);
}
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_111);
lean_ctor_set(x_122, 1, x_119);
if (lean_is_scalar(x_121)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_121;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_120);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_111);
x_124 = lean_ctor_get(x_118, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_118, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_126 = x_118;
} else {
 lean_dec_ref(x_118);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_105);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_128 = lean_ctor_get(x_112, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_112, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_130 = x_112;
} else {
 lean_dec_ref(x_112);
 x_130 = lean_box(0);
}
if (lean_is_scalar(x_130)) {
 x_131 = lean_alloc_ctor(1, 2, 0);
} else {
 x_131 = x_130;
}
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
case 2:
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
lean_dec(x_105);
x_132 = lean_ctor_get(x_107, 0);
lean_inc(x_132);
lean_dec(x_107);
x_133 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId;
x_134 = lean_name_eq(x_132, x_133);
if (x_134 == 0)
{
lean_object* x_135; 
x_135 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(x_132, x_4, x_5, x_6, x_7, x_106);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; uint8_t x_137; 
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_139 = x_135;
} else {
 lean_dec_ref(x_135);
 x_139 = lean_box(0);
}
x_140 = lean_box(3);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_2);
if (lean_is_scalar(x_139)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_139;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_138);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_143 = lean_ctor_get(x_135, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_144 = x_135;
} else {
 lean_dec_ref(x_135);
 x_144 = lean_box(0);
}
x_145 = lean_box(4);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_2);
if (lean_is_scalar(x_144)) {
 x_147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_147 = x_144;
}
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_143);
return x_147;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_2);
x_148 = lean_ctor_get(x_135, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_135, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_150 = x_135;
} else {
 lean_dec_ref(x_135);
 x_150 = lean_box(0);
}
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_132);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_152 = lean_box(3);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_2);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_106);
return x_154;
}
}
case 4:
{
if (x_1 == 0)
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_107, 0);
lean_inc(x_155);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_156 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_shouldAddAsStar(x_155, x_105, x_4, x_5, x_6, x_7, x_106);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; uint8_t x_158; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_unbox(x_157);
lean_dec(x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_156, 1);
lean_inc(x_159);
lean_dec(x_156);
x_160 = lean_box(0);
x_161 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(x_105, x_155, x_107, x_2, x_160, x_4, x_5, x_6, x_7, x_159);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_155);
lean_dec(x_107);
lean_dec(x_105);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_162 = lean_ctor_get(x_156, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_163 = x_156;
} else {
 lean_dec_ref(x_156);
 x_163 = lean_box(0);
}
x_164 = lean_box(3);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_2);
if (lean_is_scalar(x_163)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_163;
}
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_162);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_155);
lean_dec(x_107);
lean_dec(x_105);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_167 = lean_ctor_get(x_156, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_156, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_169 = x_156;
} else {
 lean_dec_ref(x_156);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(1, 2, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_167);
lean_ctor_set(x_170, 1, x_168);
return x_170;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_107, 0);
lean_inc(x_171);
x_172 = lean_box(0);
x_173 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(x_105, x_171, x_107, x_2, x_172, x_4, x_5, x_6, x_7, x_106);
return x_173;
}
}
case 7:
{
lean_object* x_174; lean_object* x_175; uint8_t x_176; 
lean_dec(x_105);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_174 = lean_ctor_get(x_107, 1);
lean_inc(x_174);
x_175 = lean_ctor_get(x_107, 2);
lean_inc(x_175);
lean_dec(x_107);
x_176 = l_Lean_Expr_hasLooseBVars(x_175);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_177 = lean_array_push(x_2, x_174);
x_178 = lean_array_push(x_177, x_175);
x_179 = lean_box(5);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_178);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_106);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_175);
lean_dec(x_174);
x_182 = lean_box(4);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_2);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_106);
return x_184;
}
}
case 9:
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_105);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_185 = lean_ctor_get(x_107, 0);
lean_inc(x_185);
lean_dec(x_107);
x_186 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_186, 0, x_185);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_2);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_106);
return x_188;
}
default: 
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_107);
lean_dec(x_105);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_189 = lean_box(4);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_2);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_106);
return x_191;
}
}
}
}
else
{
uint8_t x_192; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_192 = !lean_is_exclusive(x_10);
if (x_192 == 0)
{
return x_10;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_10, 0);
x_194 = lean_ctor_get(x_10, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_10);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_196 = lean_box(3);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_2);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_8);
return x_198;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_DiscrTree_mkPathAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_DiscrTree_mkPathAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_mkPathAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_instInhabitedExpr;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_DiscrTree_mkPathAux(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Array_isEmpty___rarg(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(x_2);
x_11 = lean_array_pop(x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_pushArgs(x_1, x_11, x_10, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_array_push(x_3, x_15);
x_18 = 0;
x_1 = x_18;
x_2 = x_16;
x_3 = x_17;
x_8 = x_14;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_8);
return x_24;
}
}
}
lean_object* l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_mkPathAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Meta_DiscrTree_mkPathAux(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(8u);
return x_1;
}
}
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity;
x_8 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_8);
x_9 = lean_array_push(x_8, x_1);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = 2;
lean_ctor_set_uint8(x_11, 5, x_13);
x_14 = 1;
x_15 = l_Lean_Meta_DiscrTree_mkPathAux(x_14, x_9, x_8, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_24 = lean_ctor_get_uint8(x_11, 0);
x_25 = lean_ctor_get_uint8(x_11, 1);
x_26 = lean_ctor_get_uint8(x_11, 2);
x_27 = lean_ctor_get_uint8(x_11, 3);
x_28 = lean_ctor_get_uint8(x_11, 4);
x_29 = lean_ctor_get_uint8(x_11, 6);
x_30 = lean_ctor_get_uint8(x_11, 7);
x_31 = lean_ctor_get_uint8(x_11, 8);
x_32 = lean_ctor_get_uint8(x_11, 9);
lean_dec(x_11);
x_33 = 2;
x_34 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_34, 0, x_24);
lean_ctor_set_uint8(x_34, 1, x_25);
lean_ctor_set_uint8(x_34, 2, x_26);
lean_ctor_set_uint8(x_34, 3, x_27);
lean_ctor_set_uint8(x_34, 4, x_28);
lean_ctor_set_uint8(x_34, 5, x_33);
lean_ctor_set_uint8(x_34, 6, x_29);
lean_ctor_set_uint8(x_34, 7, x_30);
lean_ctor_set_uint8(x_34, 8, x_31);
lean_ctor_set_uint8(x_34, 9, x_32);
lean_ctor_set(x_2, 0, x_34);
x_35 = 1;
x_36 = l_Lean_Meta_DiscrTree_mkPathAux(x_35, x_9, x_8, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_36, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_43 = x_36;
} else {
 lean_dec_ref(x_36);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_45 = lean_ctor_get(x_2, 0);
x_46 = lean_ctor_get(x_2, 1);
x_47 = lean_ctor_get(x_2, 2);
x_48 = lean_ctor_get(x_2, 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_2);
x_49 = lean_ctor_get_uint8(x_45, 0);
x_50 = lean_ctor_get_uint8(x_45, 1);
x_51 = lean_ctor_get_uint8(x_45, 2);
x_52 = lean_ctor_get_uint8(x_45, 3);
x_53 = lean_ctor_get_uint8(x_45, 4);
x_54 = lean_ctor_get_uint8(x_45, 6);
x_55 = lean_ctor_get_uint8(x_45, 7);
x_56 = lean_ctor_get_uint8(x_45, 8);
x_57 = lean_ctor_get_uint8(x_45, 9);
if (lean_is_exclusive(x_45)) {
 x_58 = x_45;
} else {
 lean_dec_ref(x_45);
 x_58 = lean_box(0);
}
x_59 = 2;
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 0, 10);
} else {
 x_60 = x_58;
}
lean_ctor_set_uint8(x_60, 0, x_49);
lean_ctor_set_uint8(x_60, 1, x_50);
lean_ctor_set_uint8(x_60, 2, x_51);
lean_ctor_set_uint8(x_60, 3, x_52);
lean_ctor_set_uint8(x_60, 4, x_53);
lean_ctor_set_uint8(x_60, 5, x_59);
lean_ctor_set_uint8(x_60, 6, x_54);
lean_ctor_set_uint8(x_60, 7, x_55);
lean_ctor_set_uint8(x_60, 8, x_56);
lean_ctor_set_uint8(x_60, 9, x_57);
x_61 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_46);
lean_ctor_set(x_61, 2, x_47);
lean_ctor_set(x_61, 3, x_48);
x_62 = 1;
x_63 = l_Lean_Meta_DiscrTree_mkPathAux(x_62, x_9, x_8, x_61, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_66 = x_63;
} else {
 lean_dec_ref(x_63);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_63, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_70 = x_63;
} else {
 lean_dec_ref(x_63);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_mk_empty_array_with_capacity(x_6);
x_8 = lean_array_push(x_7, x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_array_fget(x_1, x_3);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
x_15 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_1, x_2, x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_15);
x_19 = lean_mk_empty_array_with_capacity(x_13);
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
x_4 = l_Array_contains___rarg(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_array_push(x_2, x_3);
return x_5;
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_3(x_3, x_1, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_3 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_array_get(x_4, x_1, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_11 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_nat_add(x_8, x_9);
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_nat_div(x_13, x_14);
lean_dec(x_13);
x_16 = lean_array_get(x_12, x_6, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_7, 0);
x_19 = l_Lean_Meta_DiscrTree_Key_lt(x_17, x_18);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_9);
x_20 = l_Lean_Meta_DiscrTree_Key_lt(x_18, x_17);
lean_dec(x_17);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_8);
x_21 = lean_array_get_size(x_6);
x_22 = lean_nat_dec_lt(x_15, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_array_fget(x_6, x_15);
x_24 = lean_box(0);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_empty_array_with_capacity(x_25);
lean_inc(x_27);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_array_fset(x_6, x_15, x_29);
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_23, 1);
x_33 = lean_ctor_get(x_23, 0);
lean_dec(x_33);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_4, x_34);
x_36 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_35, x_32);
lean_dec(x_35);
lean_ctor_set(x_23, 1, x_36);
lean_ctor_set(x_23, 0, x_5);
x_37 = lean_array_fset(x_30, x_15, x_23);
lean_dec(x_15);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_23, 1);
lean_inc(x_38);
lean_dec(x_23);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_4, x_39);
x_41 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_40, x_38);
lean_dec(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_5);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_array_fset(x_30, x_15, x_42);
lean_dec(x_15);
return x_43;
}
}
}
else
{
x_9 = x_15;
goto _start;
}
}
else
{
uint8_t x_45; 
lean_dec(x_17);
x_45 = lean_nat_dec_eq(x_15, x_8);
if (x_45 == 0)
{
lean_dec(x_8);
x_8 = x_15;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_1);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_add(x_4, x_47);
x_49 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_2, x_3, x_48);
lean_dec(x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_5);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_nat_add(x_8, x_47);
lean_dec(x_8);
x_52 = l_Array_insertAt___rarg(x_6, x_51, x_50);
lean_dec(x_51);
return x_52;
}
}
}
}
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_9 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_Array_isEmpty___rarg(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_get(x_10, x_6, x_12);
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_array_get_size(x_6);
x_19 = lean_nat_dec_lt(x_12, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_20 = lean_array_fget(x_6, x_12);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
x_23 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_array_fset(x_6, x_12, x_25);
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_20, 1);
x_29 = lean_ctor_get(x_20, 0);
lean_dec(x_29);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_4, x_30);
x_32 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_31, x_28);
lean_dec(x_31);
lean_ctor_set(x_20, 1, x_32);
lean_ctor_set(x_20, 0, x_5);
x_33 = lean_array_fset(x_26, x_12, x_20);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_20, 1);
lean_inc(x_34);
lean_dec(x_20);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_4, x_35);
x_37 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_36, x_34);
lean_dec(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_array_fset(x_26, x_12, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg(x_6);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lean_Meta_DiscrTree_Key_lt(x_41, x_14);
if (x_42 == 0)
{
uint8_t x_43; 
x_43 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_41);
lean_dec(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_array_get_size(x_6);
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_sub(x_44, x_45);
x_47 = lean_nat_dec_lt(x_46, x_44);
lean_dec(x_44);
if (x_47 == 0)
{
lean_dec(x_46);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_array_fget(x_6, x_46);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_12);
x_51 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_51);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_array_fset(x_6, x_46, x_53);
x_55 = !lean_is_exclusive(x_48);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_48, 1);
x_57 = lean_ctor_get(x_48, 0);
lean_dec(x_57);
x_58 = lean_nat_add(x_4, x_45);
x_59 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_58, x_56);
lean_dec(x_58);
lean_ctor_set(x_48, 1, x_59);
lean_ctor_set(x_48, 0, x_5);
x_60 = lean_array_fset(x_54, x_46, x_48);
lean_dec(x_46);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_48, 1);
lean_inc(x_61);
lean_dec(x_48);
x_62 = lean_nat_add(x_4, x_45);
x_63 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_62, x_61);
lean_dec(x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_5);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_fset(x_54, x_46, x_64);
lean_dec(x_46);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_array_get_size(x_6);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_nat_sub(x_66, x_67);
lean_dec(x_66);
x_69 = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_12, x_68);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_41);
lean_dec(x_1);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_4, x_70);
x_72 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_2, x_3, x_71);
lean_dec(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_5);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_push(x_6, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_15);
lean_dec(x_1);
x_75 = lean_unsigned_to_nat(1u);
x_76 = lean_nat_add(x_4, x_75);
x_77 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_2, x_3, x_76);
lean_dec(x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_5);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Array_insertAt___rarg(x_6, x_12, x_78);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_10);
lean_dec(x_1);
x_80 = lean_unsigned_to_nat(1u);
x_81 = lean_nat_add(x_4, x_80);
x_82 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_2, x_3, x_81);
lean_dec(x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_5);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_array_push(x_6, x_83);
return x_84;
}
}
}
lean_object* l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_array_get_size(x_2);
x_10 = lean_nat_dec_lt(x_4, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___rarg(x_1, x_7, x_3);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_array_fget(x_2, x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_inc(x_14);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_14);
lean_inc(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_5);
x_16 = l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg(x_1, x_2, x_3, x_4, x_12, x_8, x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
x_20 = lean_array_get_size(x_2);
x_21 = lean_nat_dec_lt(x_4, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___rarg(x_1, x_18, x_3);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_array_fget(x_2, x_4);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_mk_empty_array_with_capacity(x_25);
lean_inc(x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_26);
lean_inc(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg(x_1, x_2, x_3, x_4, x_24, x_19, x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_binInsertM___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Meta_DiscrTree_insertCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_DiscrTree_insertCore_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insertCore_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Meta_DiscrTree_Key_hash(x_9);
x_12 = (size_t)x_11;
x_13 = 1;
x_14 = x_1 - x_13;
x_15 = 5;
x_16 = x_15 * x_14;
x_17 = x_12 >> x_16 % (sizeof(size_t) * 8);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = x_8 << x_9 % (sizeof(size_t) * 8);
x_11 = x_10 - x_8;
x_12 = x_2 & x_11;
x_13 = lean_usize_to_nat(x_12);
x_14 = lean_array_get_size(x_7);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_array_fget(x_7, x_13);
x_17 = lean_box(2);
x_18 = lean_array_fset(x_7, x_13, x_17);
switch (lean_obj_tag(x_16)) {
case 0:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
x_22 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_16);
x_23 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_20, x_21, x_4, x_5);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_array_fset(x_18, x_13, x_24);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_20);
lean_ctor_set(x_16, 1, x_5);
lean_ctor_set(x_16, 0, x_4);
x_26 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_27, x_28, x_4, x_5);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_array_fset(x_18, x_13, x_31);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_32);
return x_1;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_28);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_5);
x_34 = lean_array_fset(x_18, x_13, x_33);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
case 1:
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_16);
if (x_35 == 0)
{
lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_38 = x_3 + x_8;
x_39 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_36, x_37, x_38, x_4, x_5);
lean_ctor_set(x_16, 0, x_39);
x_40 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_40);
return x_1;
}
else
{
lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_16, 0);
lean_inc(x_41);
lean_dec(x_16);
x_42 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_43 = x_3 + x_8;
x_44 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_41, x_42, x_43, x_4, x_5);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_array_fset(x_18, x_13, x_45);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_46);
return x_1;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_5);
x_48 = lean_array_fset(x_18, x_13, x_47);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_48);
return x_1;
}
}
}
}
else
{
lean_object* x_49; size_t x_50; size_t x_51; size_t x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
lean_dec(x_1);
x_50 = 1;
x_51 = 5;
x_52 = x_50 << x_51 % (sizeof(size_t) * 8);
x_53 = x_52 - x_50;
x_54 = x_2 & x_53;
x_55 = lean_usize_to_nat(x_54);
x_56 = lean_array_get_size(x_49);
x_57 = lean_nat_dec_lt(x_55, x_56);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
lean_dec(x_55);
lean_dec(x_5);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_49);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_array_fget(x_49, x_55);
x_60 = lean_box(2);
x_61 = lean_array_fset(x_49, x_55, x_60);
switch (lean_obj_tag(x_59)) {
case 0:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_64 = x_59;
} else {
 lean_dec_ref(x_59);
 x_64 = lean_box(0);
}
x_65 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_62);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_64);
x_66 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_62, x_63, x_4, x_5);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_array_fset(x_61, x_55, x_67);
lean_dec(x_55);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_63);
lean_dec(x_62);
if (lean_is_scalar(x_64)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_64;
}
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_5);
x_71 = lean_array_fset(x_61, x_55, x_70);
lean_dec(x_55);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
case 1:
{
lean_object* x_73; lean_object* x_74; size_t x_75; size_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_ctor_get(x_59, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 x_74 = x_59;
} else {
 lean_dec_ref(x_59);
 x_74 = lean_box(0);
}
x_75 = x_2 >> x_51 % (sizeof(size_t) * 8);
x_76 = x_3 + x_50;
x_77 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_73, x_75, x_76, x_4, x_5);
if (lean_is_scalar(x_74)) {
 x_78 = lean_alloc_ctor(1, 1, 0);
} else {
 x_78 = x_74;
}
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_array_fset(x_61, x_55, x_78);
lean_dec(x_55);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
default: 
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_4);
lean_ctor_set(x_81, 1, x_5);
x_82 = lean_array_fset(x_61, x_55, x_81);
lean_dec(x_55);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
return x_83;
}
}
}
}
}
else
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_1);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; size_t x_87; uint8_t x_88; 
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7___rarg(x_1, x_85, x_4, x_5);
x_87 = 7;
x_88 = x_87 <= x_3;
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_86);
x_90 = lean_unsigned_to_nat(4u);
x_91 = lean_nat_dec_lt(x_89, x_90);
lean_dec(x_89);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_86, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_94 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_95 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg(x_3, x_92, x_93, lean_box(0), x_85, x_94);
lean_dec(x_93);
lean_dec(x_92);
return x_95;
}
else
{
return x_86;
}
}
else
{
return x_86;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; size_t x_101; uint8_t x_102; 
x_96 = lean_ctor_get(x_1, 0);
x_97 = lean_ctor_get(x_1, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_1);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_unsigned_to_nat(0u);
x_100 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__7___rarg(x_98, x_99, x_4, x_5);
x_101 = 7;
x_102 = x_101 <= x_3;
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_100);
x_104 = lean_unsigned_to_nat(4u);
x_105 = lean_nat_dec_lt(x_103, x_104);
lean_dec(x_103);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_100, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_100, 1);
lean_inc(x_107);
lean_dec(x_100);
x_108 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_109 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg(x_3, x_106, x_107, lean_box(0), x_99, x_108);
lean_dec(x_107);
lean_dec(x_106);
return x_109;
}
else
{
return x_100;
}
}
else
{
return x_100;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_8 = (size_t)x_7;
x_9 = 1;
x_10 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_5, x_8, x_9, x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; uint64_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_16 = (size_t)x_15;
x_17 = 1;
x_18 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_13, x_16, x_17, x_2, x_3);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_14, x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Meta_DiscrTree_Key_hash(x_9);
x_12 = (size_t)x_11;
x_13 = 1;
x_14 = x_1 - x_13;
x_15 = 5;
x_16 = x_15 * x_14;
x_17 = x_12 >> x_16 % (sizeof(size_t) * 8);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = x_8 << x_9 % (sizeof(size_t) * 8);
x_11 = x_10 - x_8;
x_12 = x_2 & x_11;
x_13 = lean_usize_to_nat(x_12);
x_14 = lean_array_get_size(x_7);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_array_fget(x_7, x_13);
x_17 = lean_box(2);
x_18 = lean_array_fset(x_7, x_13, x_17);
switch (lean_obj_tag(x_16)) {
case 0:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
x_22 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_16);
x_23 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_20, x_21, x_4, x_5);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_array_fset(x_18, x_13, x_24);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_20);
lean_ctor_set(x_16, 1, x_5);
lean_ctor_set(x_16, 0, x_4);
x_26 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_27, x_28, x_4, x_5);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_array_fset(x_18, x_13, x_31);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_32);
return x_1;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_28);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_5);
x_34 = lean_array_fset(x_18, x_13, x_33);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
case 1:
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_16);
if (x_35 == 0)
{
lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_38 = x_3 + x_8;
x_39 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_36, x_37, x_38, x_4, x_5);
lean_ctor_set(x_16, 0, x_39);
x_40 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_40);
return x_1;
}
else
{
lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_16, 0);
lean_inc(x_41);
lean_dec(x_16);
x_42 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_43 = x_3 + x_8;
x_44 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_41, x_42, x_43, x_4, x_5);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_array_fset(x_18, x_13, x_45);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_46);
return x_1;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_5);
x_48 = lean_array_fset(x_18, x_13, x_47);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_48);
return x_1;
}
}
}
}
else
{
lean_object* x_49; size_t x_50; size_t x_51; size_t x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
lean_dec(x_1);
x_50 = 1;
x_51 = 5;
x_52 = x_50 << x_51 % (sizeof(size_t) * 8);
x_53 = x_52 - x_50;
x_54 = x_2 & x_53;
x_55 = lean_usize_to_nat(x_54);
x_56 = lean_array_get_size(x_49);
x_57 = lean_nat_dec_lt(x_55, x_56);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
lean_dec(x_55);
lean_dec(x_5);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_49);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_array_fget(x_49, x_55);
x_60 = lean_box(2);
x_61 = lean_array_fset(x_49, x_55, x_60);
switch (lean_obj_tag(x_59)) {
case 0:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_64 = x_59;
} else {
 lean_dec_ref(x_59);
 x_64 = lean_box(0);
}
x_65 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_62);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_64);
x_66 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_62, x_63, x_4, x_5);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_array_fset(x_61, x_55, x_67);
lean_dec(x_55);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_63);
lean_dec(x_62);
if (lean_is_scalar(x_64)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_64;
}
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_5);
x_71 = lean_array_fset(x_61, x_55, x_70);
lean_dec(x_55);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
case 1:
{
lean_object* x_73; lean_object* x_74; size_t x_75; size_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_ctor_get(x_59, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 x_74 = x_59;
} else {
 lean_dec_ref(x_59);
 x_74 = lean_box(0);
}
x_75 = x_2 >> x_51 % (sizeof(size_t) * 8);
x_76 = x_3 + x_50;
x_77 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_73, x_75, x_76, x_4, x_5);
if (lean_is_scalar(x_74)) {
 x_78 = lean_alloc_ctor(1, 1, 0);
} else {
 x_78 = x_74;
}
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_array_fset(x_61, x_55, x_78);
lean_dec(x_55);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
default: 
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_4);
lean_ctor_set(x_81, 1, x_5);
x_82 = lean_array_fset(x_61, x_55, x_81);
lean_dec(x_55);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
return x_83;
}
}
}
}
}
else
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_1);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; size_t x_87; uint8_t x_88; 
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11___rarg(x_1, x_85, x_4, x_5);
x_87 = 7;
x_88 = x_87 <= x_3;
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_86);
x_90 = lean_unsigned_to_nat(4u);
x_91 = lean_nat_dec_lt(x_89, x_90);
lean_dec(x_89);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_86, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_94 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_95 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg(x_3, x_92, x_93, lean_box(0), x_85, x_94);
lean_dec(x_93);
lean_dec(x_92);
return x_95;
}
else
{
return x_86;
}
}
else
{
return x_86;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; size_t x_101; uint8_t x_102; 
x_96 = lean_ctor_get(x_1, 0);
x_97 = lean_ctor_get(x_1, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_1);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_unsigned_to_nat(0u);
x_100 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_DiscrTree_insertCore___spec__11___rarg(x_98, x_99, x_4, x_5);
x_101 = 7;
x_102 = x_101 <= x_3;
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_100);
x_104 = lean_unsigned_to_nat(4u);
x_105 = lean_nat_dec_lt(x_103, x_104);
lean_dec(x_103);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_100, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_100, 1);
lean_inc(x_107);
lean_dec(x_100);
x_108 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_109 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg(x_3, x_106, x_107, lean_box(0), x_99, x_108);
lean_dec(x_107);
lean_dec(x_106);
return x_109;
}
else
{
return x_100;
}
}
else
{
return x_100;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_8 = (size_t)x_7;
x_9 = 1;
x_10 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_5, x_8, x_9, x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; uint64_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_16 = (size_t)x_15;
x_17 = 1;
x_18 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_13, x_16, x_17, x_2, x_3);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_14, x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__8___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_insertCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Array_isEmpty___rarg(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_get(x_6, x_3, x_7);
lean_inc(x_2);
x_9 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg(x_2, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_3, x_4, x_10);
x_12 = l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__4___rarg(x_2, x_8, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_unsigned_to_nat(1u);
x_15 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___rarg(x_1, x_3, x_4, x_14, x_13);
x_16 = l_Std_PersistentHashMap_insert___at_Lean_Meta_DiscrTree_insertCore___spec__8___rarg(x_2, x_8, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Lean_Meta_DiscrTree_instInhabitedDiscrTree(lean_box(0));
x_18 = lean_mk_string("Lean.Meta.DiscrTree");
x_19 = lean_mk_string("Lean.Meta.DiscrTree.insertCore");
x_20 = lean_unsigned_to_nat(310u);
x_21 = lean_unsigned_to_nat(23u);
x_22 = lean_mk_string("invalid key sequence");
x_23 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_18, x_19, x_20, x_21, x_22);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_18);
x_24 = lean_panic_fn(x_17, x_23);
return x_24;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_insertCore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insertCore___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_insertCore___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_insertCore___spec__2___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_insertCore___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__6___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__5___rarg(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_DiscrTree_insertCore___spec__10___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_DiscrTree_insertCore___spec__9___rarg(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Meta_DiscrTree_insertCore___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_insertCore___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_DiscrTree_mkPath(x_3, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Meta_DiscrTree_insertCore___rarg(x_1, x_2, x_12, x_4);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Lean_Meta_DiscrTree_insertCore___rarg(x_1, x_2, x_14, x_4);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_insert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insert___rarg), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_whnfEta(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_getAppFn(x_10);
switch (lean_obj_tag(x_12)) {
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Expr_getAppNumArgsAux(x_10, x_14);
lean_inc(x_15);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_empty_array_with_capacity(x_15);
lean_dec(x_15);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_10, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_8, 0, x_19);
return x_8;
}
case 2:
{
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_20, 4);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_free_object(x_8);
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
x_23 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(x_22, x_3, x_4, x_5, x_6, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_23, 0);
lean_dec(x_27);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
x_30 = lean_box(3);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_23, 0, x_31);
return x_23;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_dec(x_23);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_mk_empty_array_with_capacity(x_33);
x_35 = lean_box(3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_32);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_23);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_23, 0);
lean_dec(x_39);
x_40 = lean_unsigned_to_nat(0u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
x_42 = lean_box(4);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_23, 0, x_43);
return x_23;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_dec(x_23);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_mk_empty_array_with_capacity(x_45);
x_47 = lean_box(4);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_44);
return x_49;
}
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_23);
if (x_50 == 0)
{
return x_23;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_23, 0);
x_52 = lean_ctor_get(x_23, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_23);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_mk_empty_array_with_capacity(x_54);
x_56 = lean_box(3);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
lean_ctor_set(x_8, 0, x_57);
return x_8;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = lean_unsigned_to_nat(0u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_box(4);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
lean_ctor_set(x_8, 0, x_61);
return x_8;
}
}
case 4:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = lean_ctor_get(x_12, 0);
lean_inc(x_62);
lean_dec(x_12);
x_63 = lean_unsigned_to_nat(0u);
x_64 = l_Lean_Expr_getAppNumArgsAux(x_10, x_63);
lean_inc(x_64);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_empty_array_with_capacity(x_64);
lean_dec(x_64);
x_67 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_10, x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_8, 0, x_68);
return x_8;
}
case 7:
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_69 = lean_ctor_get(x_12, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_12, 2);
lean_inc(x_70);
lean_dec(x_12);
x_71 = l_Lean_Expr_hasLooseBVars(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_72 = lean_unsigned_to_nat(2u);
x_73 = lean_mk_empty_array_with_capacity(x_72);
x_74 = lean_array_push(x_73, x_69);
x_75 = lean_array_push(x_74, x_70);
x_76 = lean_box(5);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
lean_ctor_set(x_8, 0, x_77);
return x_8;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_70);
lean_dec(x_69);
x_78 = lean_unsigned_to_nat(0u);
x_79 = lean_mk_empty_array_with_capacity(x_78);
x_80 = lean_box(4);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_8, 0, x_81);
return x_8;
}
}
case 9:
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_82 = lean_ctor_get(x_12, 0);
lean_inc(x_82);
lean_dec(x_12);
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_unsigned_to_nat(0u);
x_85 = lean_mk_empty_array_with_capacity(x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
lean_ctor_set(x_8, 0, x_86);
return x_8;
}
default: 
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = lean_unsigned_to_nat(0u);
x_88 = lean_mk_empty_array_with_capacity(x_87);
x_89 = lean_box(4);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
lean_ctor_set(x_8, 0, x_90);
return x_8;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_8, 0);
x_92 = lean_ctor_get(x_8, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_8);
x_93 = l_Lean_Expr_getAppFn(x_91);
switch (lean_obj_tag(x_93)) {
case 1:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_unsigned_to_nat(0u);
x_96 = l_Lean_Expr_getAppNumArgsAux(x_91, x_95);
lean_inc(x_96);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_mk_empty_array_with_capacity(x_96);
lean_dec(x_96);
x_99 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_91, x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_92);
return x_101;
}
case 2:
{
lean_dec(x_91);
if (x_2 == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_ctor_get(x_3, 0);
lean_inc(x_102);
x_103 = lean_ctor_get_uint8(x_102, 4);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_93, 0);
lean_inc(x_104);
lean_dec(x_93);
x_105 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(x_104, x_3, x_4, x_5, x_6, x_92);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; uint8_t x_107; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
lean_dec(x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_109 = x_105;
} else {
 lean_dec_ref(x_105);
 x_109 = lean_box(0);
}
x_110 = lean_unsigned_to_nat(0u);
x_111 = lean_mk_empty_array_with_capacity(x_110);
x_112 = lean_box(3);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
if (lean_is_scalar(x_109)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_109;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_108);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_115 = lean_ctor_get(x_105, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_116 = x_105;
} else {
 lean_dec_ref(x_105);
 x_116 = lean_box(0);
}
x_117 = lean_unsigned_to_nat(0u);
x_118 = lean_mk_empty_array_with_capacity(x_117);
x_119 = lean_box(4);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
if (lean_is_scalar(x_116)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_116;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_115);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_105, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_105, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_124 = x_105;
} else {
 lean_dec_ref(x_105);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_93);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_126 = lean_unsigned_to_nat(0u);
x_127 = lean_mk_empty_array_with_capacity(x_126);
x_128 = lean_box(3);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_92);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_93);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_131 = lean_unsigned_to_nat(0u);
x_132 = lean_mk_empty_array_with_capacity(x_131);
x_133 = lean_box(4);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_92);
return x_135;
}
}
case 4:
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_136 = lean_ctor_get(x_93, 0);
lean_inc(x_136);
lean_dec(x_93);
x_137 = lean_unsigned_to_nat(0u);
x_138 = l_Lean_Expr_getAppNumArgsAux(x_91, x_137);
lean_inc(x_138);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_mk_empty_array_with_capacity(x_138);
lean_dec(x_138);
x_141 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_91, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_92);
return x_143;
}
case 7:
{
lean_object* x_144; lean_object* x_145; uint8_t x_146; 
lean_dec(x_91);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_144 = lean_ctor_get(x_93, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_93, 2);
lean_inc(x_145);
lean_dec(x_93);
x_146 = l_Lean_Expr_hasLooseBVars(x_145);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_147 = lean_unsigned_to_nat(2u);
x_148 = lean_mk_empty_array_with_capacity(x_147);
x_149 = lean_array_push(x_148, x_144);
x_150 = lean_array_push(x_149, x_145);
x_151 = lean_box(5);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_92);
return x_153;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_145);
lean_dec(x_144);
x_154 = lean_unsigned_to_nat(0u);
x_155 = lean_mk_empty_array_with_capacity(x_154);
x_156 = lean_box(4);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_155);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_92);
return x_158;
}
}
case 9:
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_91);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_159 = lean_ctor_get(x_93, 0);
lean_inc(x_159);
lean_dec(x_93);
x_160 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_160, 0, x_159);
x_161 = lean_unsigned_to_nat(0u);
x_162 = lean_mk_empty_array_with_capacity(x_161);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_92);
return x_164;
}
default: 
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_165 = lean_unsigned_to_nat(0u);
x_166 = lean_mk_empty_array_with_capacity(x_165);
x_167 = lean_box(4);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_92);
return x_169;
}
}
}
}
else
{
uint8_t x_170; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_170 = !lean_is_exclusive(x_8);
if (x_170 == 0)
{
return x_8;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_8, 0);
x_172 = lean_ctor_get(x_8, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_8);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getMatchKeyArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 1;
x_8 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 0;
x_8 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity;
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = lean_box(3);
x_5 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Array_append___rarg(x_3, x_7);
lean_dec(x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__2___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_array_get_size(x_1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_7, x_8);
x_10 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_6);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg(x_1, x_6, x_3, x_9);
lean_dec(x_6);
return x_12;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_findKey___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getMatch_process_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 5:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_process_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getMatch_process_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getMatch_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_process___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = l_Array_isEmpty___rarg(x_1);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_10);
x_13 = l_Array_isEmpty___rarg(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_14 = l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(x_1);
x_15 = lean_array_pop(x_1);
x_16 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_17 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_array_get(x_18, x_11, x_19);
x_21 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_22 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_14, x_21, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_22, 1);
x_27 = lean_ctor_get(x_24, 0);
x_28 = lean_ctor_get(x_24, 1);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
x_30 = lean_box(3);
x_31 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_dec(x_20);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_32);
lean_ctor_set(x_2, 1, x_32);
lean_ctor_set(x_2, 0, x_32);
lean_ctor_set(x_24, 1, x_2);
x_33 = lean_array_get_size(x_11);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_33, x_34);
x_36 = lean_nat_dec_lt(x_19, x_33);
lean_dec(x_33);
if (x_36 == 0)
{
lean_dec(x_35);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_37; 
x_37 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(x_11, x_24, x_19, x_35);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_free_object(x_22);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_1 = x_39;
x_2 = x_40;
x_8 = x_26;
goto _start;
}
}
}
case 1:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_42 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_42);
lean_ctor_set(x_2, 1, x_42);
lean_ctor_set(x_2, 0, x_42);
lean_ctor_set(x_24, 1, x_2);
x_43 = lean_array_get_size(x_11);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_sub(x_43, x_44);
x_46 = lean_nat_dec_lt(x_19, x_43);
lean_dec(x_43);
if (x_46 == 0)
{
lean_dec(x_45);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_47; 
x_47 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(x_11, x_24, x_19, x_45);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_47) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_free_object(x_22);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_1 = x_49;
x_2 = x_50;
x_8 = x_26;
goto _start;
}
}
}
case 2:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_52 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_52);
lean_ctor_set(x_2, 1, x_52);
lean_ctor_set(x_2, 0, x_52);
lean_ctor_set(x_24, 1, x_2);
x_53 = lean_array_get_size(x_11);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_sub(x_53, x_54);
x_56 = lean_nat_dec_lt(x_19, x_53);
lean_dec(x_53);
if (x_56 == 0)
{
lean_dec(x_55);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_57; 
x_57 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(x_11, x_24, x_19, x_55);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_57) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_free_object(x_22);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_1 = x_59;
x_2 = x_60;
x_8 = x_26;
goto _start;
}
}
}
case 3:
{
lean_free_object(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
case 4:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_62 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_62);
lean_ctor_set(x_2, 1, x_62);
lean_ctor_set(x_2, 0, x_62);
lean_ctor_set(x_24, 1, x_2);
x_63 = lean_array_get_size(x_11);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_sub(x_63, x_64);
x_66 = lean_nat_dec_lt(x_19, x_63);
lean_dec(x_63);
if (x_66 == 0)
{
lean_dec(x_65);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_67; 
x_67 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(x_11, x_24, x_19, x_65);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_67) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_free_object(x_22);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
lean_dec(x_67);
x_69 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_1 = x_69;
x_2 = x_70;
x_8 = x_26;
goto _start;
}
}
}
default: 
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_72 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_72, 2);
lean_ctor_set(x_2, 1, x_72);
lean_ctor_set(x_2, 0, x_72);
lean_inc(x_2);
lean_ctor_set(x_24, 1, x_2);
x_73 = lean_array_get_size(x_11);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_sub(x_73, x_74);
x_76 = lean_nat_dec_lt(x_19, x_73);
lean_dec(x_73);
if (x_76 == 0)
{
lean_dec(x_75);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_72);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_77; 
lean_inc(x_75);
x_77 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(x_11, x_24, x_19, x_75);
lean_dec(x_24);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_28);
x_78 = lean_box(4);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_2);
x_80 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(x_11, x_79, x_19, x_75);
lean_dec(x_79);
lean_dec(x_11);
if (lean_obj_tag(x_80) == 0)
{
lean_dec(x_72);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_free_object(x_22);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_Array_append___rarg(x_15, x_72);
lean_dec(x_72);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_1 = x_82;
x_2 = x_83;
x_8 = x_26;
goto _start;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_free_object(x_22);
x_85 = lean_ctor_get(x_77, 0);
lean_inc(x_85);
lean_dec(x_77);
lean_inc(x_15);
x_86 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_88 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_86, x_87, x_3, x_4, x_5, x_6, x_7, x_26);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_ctor_get(x_88, 1);
x_92 = lean_box(4);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_2);
x_94 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(x_11, x_93, x_19, x_75);
lean_dec(x_93);
lean_dec(x_11);
if (lean_obj_tag(x_94) == 0)
{
lean_dec(x_72);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_88;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_free_object(x_88);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
lean_dec(x_94);
x_96 = l_Array_append___rarg(x_15, x_72);
lean_dec(x_72);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_1 = x_96;
x_2 = x_97;
x_3 = x_90;
x_8 = x_91;
goto _start;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_99 = lean_ctor_get(x_88, 0);
x_100 = lean_ctor_get(x_88, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_88);
x_101 = lean_box(4);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_2);
x_103 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(x_11, x_102, x_19, x_75);
lean_dec(x_102);
lean_dec(x_11);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; 
lean_dec(x_72);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_100);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_103, 0);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Array_append___rarg(x_15, x_72);
lean_dec(x_72);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_1 = x_106;
x_2 = x_107;
x_3 = x_99;
x_8 = x_100;
goto _start;
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_75);
lean_dec(x_2);
lean_dec(x_72);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_109 = !lean_is_exclusive(x_88);
if (x_109 == 0)
{
return x_88;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_88, 0);
x_111 = lean_ctor_get(x_88, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_88);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
}
}
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_free_object(x_22);
x_113 = lean_ctor_get(x_20, 1);
lean_inc(x_113);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_15);
x_114 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_15, x_113, x_3, x_4, x_5, x_6, x_7, x_26);
if (lean_obj_tag(x_114) == 0)
{
switch (lean_obj_tag(x_27)) {
case 0:
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_ctor_get(x_114, 1);
x_118 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_118);
lean_ctor_set(x_2, 1, x_118);
lean_ctor_set(x_2, 0, x_118);
lean_ctor_set(x_24, 1, x_2);
x_119 = lean_array_get_size(x_11);
x_120 = lean_unsigned_to_nat(1u);
x_121 = lean_nat_sub(x_119, x_120);
x_122 = lean_nat_dec_lt(x_19, x_119);
lean_dec(x_119);
if (x_122 == 0)
{
lean_dec(x_121);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_123; 
x_123 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(x_11, x_24, x_19, x_121);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_123) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_free_object(x_114);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
lean_dec(x_123);
x_125 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_1 = x_125;
x_2 = x_126;
x_3 = x_116;
x_8 = x_117;
goto _start;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_128 = lean_ctor_get(x_114, 0);
x_129 = lean_ctor_get(x_114, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_114);
x_130 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_130);
lean_ctor_set(x_2, 1, x_130);
lean_ctor_set(x_2, 0, x_130);
lean_ctor_set(x_24, 1, x_2);
x_131 = lean_array_get_size(x_11);
x_132 = lean_unsigned_to_nat(1u);
x_133 = lean_nat_sub(x_131, x_132);
x_134 = lean_nat_dec_lt(x_19, x_131);
lean_dec(x_131);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_133);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_128);
lean_ctor_set(x_135, 1, x_129);
return x_135;
}
else
{
lean_object* x_136; 
x_136 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(x_11, x_24, x_19, x_133);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; 
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_128);
lean_ctor_set(x_137, 1, x_129);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_136, 0);
lean_inc(x_138);
lean_dec(x_136);
x_139 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_1 = x_139;
x_2 = x_140;
x_3 = x_128;
x_8 = x_129;
goto _start;
}
}
}
}
case 1:
{
uint8_t x_142; 
x_142 = !lean_is_exclusive(x_114);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_143 = lean_ctor_get(x_114, 0);
x_144 = lean_ctor_get(x_114, 1);
x_145 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_145);
lean_ctor_set(x_2, 1, x_145);
lean_ctor_set(x_2, 0, x_145);
lean_ctor_set(x_24, 1, x_2);
x_146 = lean_array_get_size(x_11);
x_147 = lean_unsigned_to_nat(1u);
x_148 = lean_nat_sub(x_146, x_147);
x_149 = lean_nat_dec_lt(x_19, x_146);
lean_dec(x_146);
if (x_149 == 0)
{
lean_dec(x_148);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_150; 
x_150 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(x_11, x_24, x_19, x_148);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_150) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_free_object(x_114);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
lean_dec(x_150);
x_152 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_1 = x_152;
x_2 = x_153;
x_3 = x_143;
x_8 = x_144;
goto _start;
}
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_155 = lean_ctor_get(x_114, 0);
x_156 = lean_ctor_get(x_114, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_114);
x_157 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_157);
lean_ctor_set(x_2, 1, x_157);
lean_ctor_set(x_2, 0, x_157);
lean_ctor_set(x_24, 1, x_2);
x_158 = lean_array_get_size(x_11);
x_159 = lean_unsigned_to_nat(1u);
x_160 = lean_nat_sub(x_158, x_159);
x_161 = lean_nat_dec_lt(x_19, x_158);
lean_dec(x_158);
if (x_161 == 0)
{
lean_object* x_162; 
lean_dec(x_160);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_155);
lean_ctor_set(x_162, 1, x_156);
return x_162;
}
else
{
lean_object* x_163; 
x_163 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(x_11, x_24, x_19, x_160);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; 
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_155);
lean_ctor_set(x_164, 1, x_156);
return x_164;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_163, 0);
lean_inc(x_165);
lean_dec(x_163);
x_166 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_1 = x_166;
x_2 = x_167;
x_3 = x_155;
x_8 = x_156;
goto _start;
}
}
}
}
case 2:
{
uint8_t x_169; 
x_169 = !lean_is_exclusive(x_114);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_170 = lean_ctor_get(x_114, 0);
x_171 = lean_ctor_get(x_114, 1);
x_172 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_172);
lean_ctor_set(x_2, 1, x_172);
lean_ctor_set(x_2, 0, x_172);
lean_ctor_set(x_24, 1, x_2);
x_173 = lean_array_get_size(x_11);
x_174 = lean_unsigned_to_nat(1u);
x_175 = lean_nat_sub(x_173, x_174);
x_176 = lean_nat_dec_lt(x_19, x_173);
lean_dec(x_173);
if (x_176 == 0)
{
lean_dec(x_175);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_177; 
x_177 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(x_11, x_24, x_19, x_175);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_177) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
lean_free_object(x_114);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
lean_dec(x_177);
x_179 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
x_1 = x_179;
x_2 = x_180;
x_3 = x_170;
x_8 = x_171;
goto _start;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; 
x_182 = lean_ctor_get(x_114, 0);
x_183 = lean_ctor_get(x_114, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_114);
x_184 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_184);
lean_ctor_set(x_2, 1, x_184);
lean_ctor_set(x_2, 0, x_184);
lean_ctor_set(x_24, 1, x_2);
x_185 = lean_array_get_size(x_11);
x_186 = lean_unsigned_to_nat(1u);
x_187 = lean_nat_sub(x_185, x_186);
x_188 = lean_nat_dec_lt(x_19, x_185);
lean_dec(x_185);
if (x_188 == 0)
{
lean_object* x_189; 
lean_dec(x_187);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_182);
lean_ctor_set(x_189, 1, x_183);
return x_189;
}
else
{
lean_object* x_190; 
x_190 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(x_11, x_24, x_19, x_187);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; 
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_182);
lean_ctor_set(x_191, 1, x_183);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
lean_dec(x_190);
x_193 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
x_1 = x_193;
x_2 = x_194;
x_3 = x_182;
x_8 = x_183;
goto _start;
}
}
}
}
case 3:
{
uint8_t x_196; 
lean_free_object(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_196 = !lean_is_exclusive(x_114);
if (x_196 == 0)
{
return x_114;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_114, 0);
x_198 = lean_ctor_get(x_114, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_114);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
case 4:
{
uint8_t x_200; 
x_200 = !lean_is_exclusive(x_114);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_201 = lean_ctor_get(x_114, 0);
x_202 = lean_ctor_get(x_114, 1);
x_203 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_203);
lean_ctor_set(x_2, 1, x_203);
lean_ctor_set(x_2, 0, x_203);
lean_ctor_set(x_24, 1, x_2);
x_204 = lean_array_get_size(x_11);
x_205 = lean_unsigned_to_nat(1u);
x_206 = lean_nat_sub(x_204, x_205);
x_207 = lean_nat_dec_lt(x_19, x_204);
lean_dec(x_204);
if (x_207 == 0)
{
lean_dec(x_206);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_208; 
x_208 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(x_11, x_24, x_19, x_206);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_208) == 0)
{
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_free_object(x_114);
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
lean_dec(x_208);
x_210 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
lean_dec(x_209);
x_1 = x_210;
x_2 = x_211;
x_3 = x_201;
x_8 = x_202;
goto _start;
}
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_213 = lean_ctor_get(x_114, 0);
x_214 = lean_ctor_get(x_114, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_114);
x_215 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_215);
lean_ctor_set(x_2, 1, x_215);
lean_ctor_set(x_2, 0, x_215);
lean_ctor_set(x_24, 1, x_2);
x_216 = lean_array_get_size(x_11);
x_217 = lean_unsigned_to_nat(1u);
x_218 = lean_nat_sub(x_216, x_217);
x_219 = lean_nat_dec_lt(x_19, x_216);
lean_dec(x_216);
if (x_219 == 0)
{
lean_object* x_220; 
lean_dec(x_218);
lean_dec(x_24);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_213);
lean_ctor_set(x_220, 1, x_214);
return x_220;
}
else
{
lean_object* x_221; 
x_221 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(x_11, x_24, x_19, x_218);
lean_dec(x_24);
lean_dec(x_11);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; 
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_213);
lean_ctor_set(x_222, 1, x_214);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_221, 0);
lean_inc(x_223);
lean_dec(x_221);
x_224 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
lean_dec(x_223);
x_1 = x_224;
x_2 = x_225;
x_3 = x_213;
x_8 = x_214;
goto _start;
}
}
}
}
default: 
{
uint8_t x_227; 
x_227 = !lean_is_exclusive(x_114);
if (x_227 == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_228 = lean_ctor_get(x_114, 0);
x_229 = lean_ctor_get(x_114, 1);
x_230 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_230, 2);
lean_ctor_set(x_2, 1, x_230);
lean_ctor_set(x_2, 0, x_230);
lean_inc(x_2);
lean_ctor_set(x_24, 1, x_2);
x_231 = lean_array_get_size(x_11);
x_232 = lean_unsigned_to_nat(1u);
x_233 = lean_nat_sub(x_231, x_232);
x_234 = lean_nat_dec_lt(x_19, x_231);
lean_dec(x_231);
if (x_234 == 0)
{
lean_dec(x_233);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_230);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_235; 
lean_inc(x_233);
x_235 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(x_11, x_24, x_19, x_233);
lean_dec(x_24);
if (lean_obj_tag(x_235) == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_28);
x_236 = lean_box(4);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_2);
x_238 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(x_11, x_237, x_19, x_233);
lean_dec(x_237);
lean_dec(x_11);
if (lean_obj_tag(x_238) == 0)
{
lean_dec(x_230);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_114;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_free_object(x_114);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
lean_dec(x_238);
x_240 = l_Array_append___rarg(x_15, x_230);
lean_dec(x_230);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
lean_dec(x_239);
x_1 = x_240;
x_2 = x_241;
x_3 = x_228;
x_8 = x_229;
goto _start;
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_free_object(x_114);
x_243 = lean_ctor_get(x_235, 0);
lean_inc(x_243);
lean_dec(x_235);
lean_inc(x_15);
x_244 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
lean_dec(x_243);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_246 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_244, x_245, x_228, x_4, x_5, x_6, x_7, x_229);
if (lean_obj_tag(x_246) == 0)
{
uint8_t x_247; 
x_247 = !lean_is_exclusive(x_246);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_248 = lean_ctor_get(x_246, 0);
x_249 = lean_ctor_get(x_246, 1);
x_250 = lean_box(4);
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_2);
x_252 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_11, x_251, x_19, x_233);
lean_dec(x_251);
lean_dec(x_11);
if (lean_obj_tag(x_252) == 0)
{
lean_dec(x_230);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_246;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_free_object(x_246);
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
lean_dec(x_252);
x_254 = l_Array_append___rarg(x_15, x_230);
lean_dec(x_230);
x_255 = lean_ctor_get(x_253, 1);
lean_inc(x_255);
lean_dec(x_253);
x_1 = x_254;
x_2 = x_255;
x_3 = x_248;
x_8 = x_249;
goto _start;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_257 = lean_ctor_get(x_246, 0);
x_258 = lean_ctor_get(x_246, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_246);
x_259 = lean_box(4);
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_2);
x_261 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_11, x_260, x_19, x_233);
lean_dec(x_260);
lean_dec(x_11);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; 
lean_dec(x_230);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_257);
lean_ctor_set(x_262, 1, x_258);
return x_262;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_261, 0);
lean_inc(x_263);
lean_dec(x_261);
x_264 = l_Array_append___rarg(x_15, x_230);
lean_dec(x_230);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
lean_dec(x_263);
x_1 = x_264;
x_2 = x_265;
x_3 = x_257;
x_8 = x_258;
goto _start;
}
}
}
else
{
uint8_t x_267; 
lean_dec(x_233);
lean_dec(x_2);
lean_dec(x_230);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_267 = !lean_is_exclusive(x_246);
if (x_267 == 0)
{
return x_246;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_246, 0);
x_269 = lean_ctor_get(x_246, 1);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_246);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_269);
return x_270;
}
}
}
}
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
x_271 = lean_ctor_get(x_114, 0);
x_272 = lean_ctor_get(x_114, 1);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_114);
x_273 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_273, 2);
lean_ctor_set(x_2, 1, x_273);
lean_ctor_set(x_2, 0, x_273);
lean_inc(x_2);
lean_ctor_set(x_24, 1, x_2);
x_274 = lean_array_get_size(x_11);
x_275 = lean_unsigned_to_nat(1u);
x_276 = lean_nat_sub(x_274, x_275);
x_277 = lean_nat_dec_lt(x_19, x_274);
lean_dec(x_274);
if (x_277 == 0)
{
lean_object* x_278; 
lean_dec(x_276);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_273);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_271);
lean_ctor_set(x_278, 1, x_272);
return x_278;
}
else
{
lean_object* x_279; 
lean_inc(x_276);
x_279 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(x_11, x_24, x_19, x_276);
lean_dec(x_24);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_28);
x_280 = lean_box(4);
x_281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_2);
x_282 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(x_11, x_281, x_19, x_276);
lean_dec(x_281);
lean_dec(x_11);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; 
lean_dec(x_273);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_283 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_283, 0, x_271);
lean_ctor_set(x_283, 1, x_272);
return x_283;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_282, 0);
lean_inc(x_284);
lean_dec(x_282);
x_285 = l_Array_append___rarg(x_15, x_273);
lean_dec(x_273);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
x_1 = x_285;
x_2 = x_286;
x_3 = x_271;
x_8 = x_272;
goto _start;
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_288 = lean_ctor_get(x_279, 0);
lean_inc(x_288);
lean_dec(x_279);
lean_inc(x_15);
x_289 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_291 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_289, x_290, x_271, x_4, x_5, x_6, x_7, x_272);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_294 = x_291;
} else {
 lean_dec_ref(x_291);
 x_294 = lean_box(0);
}
x_295 = lean_box(4);
x_296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_2);
x_297 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_11, x_296, x_19, x_276);
lean_dec(x_296);
lean_dec(x_11);
if (lean_obj_tag(x_297) == 0)
{
lean_object* x_298; 
lean_dec(x_273);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_294)) {
 x_298 = lean_alloc_ctor(0, 2, 0);
} else {
 x_298 = x_294;
}
lean_ctor_set(x_298, 0, x_292);
lean_ctor_set(x_298, 1, x_293);
return x_298;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; 
lean_dec(x_294);
x_299 = lean_ctor_get(x_297, 0);
lean_inc(x_299);
lean_dec(x_297);
x_300 = l_Array_append___rarg(x_15, x_273);
lean_dec(x_273);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec(x_299);
x_1 = x_300;
x_2 = x_301;
x_3 = x_292;
x_8 = x_293;
goto _start;
}
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_276);
lean_dec(x_2);
lean_dec(x_273);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_303 = lean_ctor_get(x_291, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_291, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_305 = x_291;
} else {
 lean_dec_ref(x_291);
 x_305 = lean_box(0);
}
if (lean_is_scalar(x_305)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_305;
}
lean_ctor_set(x_306, 0, x_303);
lean_ctor_set(x_306, 1, x_304);
return x_306;
}
}
}
}
}
}
}
else
{
uint8_t x_307; 
lean_free_object(x_24);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_307 = !lean_is_exclusive(x_114);
if (x_307 == 0)
{
return x_114;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_308 = lean_ctor_get(x_114, 0);
x_309 = lean_ctor_get(x_114, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_114);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
return x_310;
}
}
}
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_311 = lean_ctor_get(x_22, 1);
x_312 = lean_ctor_get(x_24, 0);
x_313 = lean_ctor_get(x_24, 1);
lean_inc(x_313);
lean_inc(x_312);
lean_dec(x_24);
x_314 = lean_ctor_get(x_20, 0);
lean_inc(x_314);
x_315 = lean_box(3);
x_316 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_314, x_315);
lean_dec(x_314);
if (x_316 == 0)
{
lean_dec(x_20);
switch (lean_obj_tag(x_312)) {
case 0:
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_317 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_317);
lean_ctor_set(x_2, 1, x_317);
lean_ctor_set(x_2, 0, x_317);
x_318 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_318, 0, x_312);
lean_ctor_set(x_318, 1, x_2);
x_319 = lean_array_get_size(x_11);
x_320 = lean_unsigned_to_nat(1u);
x_321 = lean_nat_sub(x_319, x_320);
x_322 = lean_nat_dec_lt(x_19, x_319);
lean_dec(x_319);
if (x_322 == 0)
{
lean_dec(x_321);
lean_dec(x_318);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_323; 
x_323 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(x_11, x_318, x_19, x_321);
lean_dec(x_318);
lean_dec(x_11);
if (lean_obj_tag(x_323) == 0)
{
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_free_object(x_22);
x_324 = lean_ctor_get(x_323, 0);
lean_inc(x_324);
lean_dec(x_323);
x_325 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
x_1 = x_325;
x_2 = x_326;
x_8 = x_311;
goto _start;
}
}
}
case 1:
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_328 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_328);
lean_ctor_set(x_2, 1, x_328);
lean_ctor_set(x_2, 0, x_328);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_312);
lean_ctor_set(x_329, 1, x_2);
x_330 = lean_array_get_size(x_11);
x_331 = lean_unsigned_to_nat(1u);
x_332 = lean_nat_sub(x_330, x_331);
x_333 = lean_nat_dec_lt(x_19, x_330);
lean_dec(x_330);
if (x_333 == 0)
{
lean_dec(x_332);
lean_dec(x_329);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_334; 
x_334 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(x_11, x_329, x_19, x_332);
lean_dec(x_329);
lean_dec(x_11);
if (lean_obj_tag(x_334) == 0)
{
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_free_object(x_22);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
lean_dec(x_334);
x_336 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_337 = lean_ctor_get(x_335, 1);
lean_inc(x_337);
lean_dec(x_335);
x_1 = x_336;
x_2 = x_337;
x_8 = x_311;
goto _start;
}
}
}
case 2:
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_339 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_339);
lean_ctor_set(x_2, 1, x_339);
lean_ctor_set(x_2, 0, x_339);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_312);
lean_ctor_set(x_340, 1, x_2);
x_341 = lean_array_get_size(x_11);
x_342 = lean_unsigned_to_nat(1u);
x_343 = lean_nat_sub(x_341, x_342);
x_344 = lean_nat_dec_lt(x_19, x_341);
lean_dec(x_341);
if (x_344 == 0)
{
lean_dec(x_343);
lean_dec(x_340);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_345; 
x_345 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(x_11, x_340, x_19, x_343);
lean_dec(x_340);
lean_dec(x_11);
if (lean_obj_tag(x_345) == 0)
{
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; 
lean_free_object(x_22);
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
lean_dec(x_345);
x_347 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_348 = lean_ctor_get(x_346, 1);
lean_inc(x_348);
lean_dec(x_346);
x_1 = x_347;
x_2 = x_348;
x_8 = x_311;
goto _start;
}
}
}
case 3:
{
lean_dec(x_313);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
case 4:
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; uint8_t x_355; 
x_350 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_350);
lean_ctor_set(x_2, 1, x_350);
lean_ctor_set(x_2, 0, x_350);
x_351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_351, 0, x_312);
lean_ctor_set(x_351, 1, x_2);
x_352 = lean_array_get_size(x_11);
x_353 = lean_unsigned_to_nat(1u);
x_354 = lean_nat_sub(x_352, x_353);
x_355 = lean_nat_dec_lt(x_19, x_352);
lean_dec(x_352);
if (x_355 == 0)
{
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_356; 
x_356 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(x_11, x_351, x_19, x_354);
lean_dec(x_351);
lean_dec(x_11);
if (lean_obj_tag(x_356) == 0)
{
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_free_object(x_22);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
lean_dec(x_356);
x_358 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_359 = lean_ctor_get(x_357, 1);
lean_inc(x_359);
lean_dec(x_357);
x_1 = x_358;
x_2 = x_359;
x_8 = x_311;
goto _start;
}
}
}
default: 
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; uint8_t x_366; 
x_361 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_361, 2);
lean_ctor_set(x_2, 1, x_361);
lean_ctor_set(x_2, 0, x_361);
lean_inc(x_2);
x_362 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_362, 0, x_312);
lean_ctor_set(x_362, 1, x_2);
x_363 = lean_array_get_size(x_11);
x_364 = lean_unsigned_to_nat(1u);
x_365 = lean_nat_sub(x_363, x_364);
x_366 = lean_nat_dec_lt(x_19, x_363);
lean_dec(x_363);
if (x_366 == 0)
{
lean_dec(x_365);
lean_dec(x_362);
lean_dec(x_2);
lean_dec(x_361);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_367; 
lean_inc(x_365);
x_367 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(x_11, x_362, x_19, x_365);
lean_dec(x_362);
if (lean_obj_tag(x_367) == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; 
lean_dec(x_313);
x_368 = lean_box(4);
x_369 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_2);
x_370 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(x_11, x_369, x_19, x_365);
lean_dec(x_369);
lean_dec(x_11);
if (lean_obj_tag(x_370) == 0)
{
lean_dec(x_361);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; 
lean_free_object(x_22);
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
lean_dec(x_370);
x_372 = l_Array_append___rarg(x_15, x_361);
lean_dec(x_361);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
lean_dec(x_371);
x_1 = x_372;
x_2 = x_373;
x_8 = x_311;
goto _start;
}
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
lean_free_object(x_22);
x_375 = lean_ctor_get(x_367, 0);
lean_inc(x_375);
lean_dec(x_367);
lean_inc(x_15);
x_376 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_377 = lean_ctor_get(x_375, 1);
lean_inc(x_377);
lean_dec(x_375);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_378 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_376, x_377, x_3, x_4, x_5, x_6, x_7, x_311);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_378, 1);
lean_inc(x_380);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 x_381 = x_378;
} else {
 lean_dec_ref(x_378);
 x_381 = lean_box(0);
}
x_382 = lean_box(4);
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_2);
x_384 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(x_11, x_383, x_19, x_365);
lean_dec(x_383);
lean_dec(x_11);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; 
lean_dec(x_361);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_381)) {
 x_385 = lean_alloc_ctor(0, 2, 0);
} else {
 x_385 = x_381;
}
lean_ctor_set(x_385, 0, x_379);
lean_ctor_set(x_385, 1, x_380);
return x_385;
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_381);
x_386 = lean_ctor_get(x_384, 0);
lean_inc(x_386);
lean_dec(x_384);
x_387 = l_Array_append___rarg(x_15, x_361);
lean_dec(x_361);
x_388 = lean_ctor_get(x_386, 1);
lean_inc(x_388);
lean_dec(x_386);
x_1 = x_387;
x_2 = x_388;
x_3 = x_379;
x_8 = x_380;
goto _start;
}
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; 
lean_dec(x_365);
lean_dec(x_2);
lean_dec(x_361);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_390 = lean_ctor_get(x_378, 0);
lean_inc(x_390);
x_391 = lean_ctor_get(x_378, 1);
lean_inc(x_391);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 x_392 = x_378;
} else {
 lean_dec_ref(x_378);
 x_392 = lean_box(0);
}
if (lean_is_scalar(x_392)) {
 x_393 = lean_alloc_ctor(1, 2, 0);
} else {
 x_393 = x_392;
}
lean_ctor_set(x_393, 0, x_390);
lean_ctor_set(x_393, 1, x_391);
return x_393;
}
}
}
}
}
}
else
{
lean_object* x_394; lean_object* x_395; 
lean_free_object(x_22);
x_394 = lean_ctor_get(x_20, 1);
lean_inc(x_394);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_15);
x_395 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_15, x_394, x_3, x_4, x_5, x_6, x_7, x_311);
if (lean_obj_tag(x_395) == 0)
{
switch (lean_obj_tag(x_312)) {
case 0:
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; 
x_396 = lean_ctor_get(x_395, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_395, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_398 = x_395;
} else {
 lean_dec_ref(x_395);
 x_398 = lean_box(0);
}
x_399 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_399);
lean_ctor_set(x_2, 1, x_399);
lean_ctor_set(x_2, 0, x_399);
x_400 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_400, 0, x_312);
lean_ctor_set(x_400, 1, x_2);
x_401 = lean_array_get_size(x_11);
x_402 = lean_unsigned_to_nat(1u);
x_403 = lean_nat_sub(x_401, x_402);
x_404 = lean_nat_dec_lt(x_19, x_401);
lean_dec(x_401);
if (x_404 == 0)
{
lean_object* x_405; 
lean_dec(x_403);
lean_dec(x_400);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_398)) {
 x_405 = lean_alloc_ctor(0, 2, 0);
} else {
 x_405 = x_398;
}
lean_ctor_set(x_405, 0, x_396);
lean_ctor_set(x_405, 1, x_397);
return x_405;
}
else
{
lean_object* x_406; 
x_406 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(x_11, x_400, x_19, x_403);
lean_dec(x_400);
lean_dec(x_11);
if (lean_obj_tag(x_406) == 0)
{
lean_object* x_407; 
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_398)) {
 x_407 = lean_alloc_ctor(0, 2, 0);
} else {
 x_407 = x_398;
}
lean_ctor_set(x_407, 0, x_396);
lean_ctor_set(x_407, 1, x_397);
return x_407;
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; 
lean_dec(x_398);
x_408 = lean_ctor_get(x_406, 0);
lean_inc(x_408);
lean_dec(x_406);
x_409 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_410 = lean_ctor_get(x_408, 1);
lean_inc(x_410);
lean_dec(x_408);
x_1 = x_409;
x_2 = x_410;
x_3 = x_396;
x_8 = x_397;
goto _start;
}
}
}
case 1:
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_412 = lean_ctor_get(x_395, 0);
lean_inc(x_412);
x_413 = lean_ctor_get(x_395, 1);
lean_inc(x_413);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_414 = x_395;
} else {
 lean_dec_ref(x_395);
 x_414 = lean_box(0);
}
x_415 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_415);
lean_ctor_set(x_2, 1, x_415);
lean_ctor_set(x_2, 0, x_415);
x_416 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_416, 0, x_312);
lean_ctor_set(x_416, 1, x_2);
x_417 = lean_array_get_size(x_11);
x_418 = lean_unsigned_to_nat(1u);
x_419 = lean_nat_sub(x_417, x_418);
x_420 = lean_nat_dec_lt(x_19, x_417);
lean_dec(x_417);
if (x_420 == 0)
{
lean_object* x_421; 
lean_dec(x_419);
lean_dec(x_416);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_414)) {
 x_421 = lean_alloc_ctor(0, 2, 0);
} else {
 x_421 = x_414;
}
lean_ctor_set(x_421, 0, x_412);
lean_ctor_set(x_421, 1, x_413);
return x_421;
}
else
{
lean_object* x_422; 
x_422 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(x_11, x_416, x_19, x_419);
lean_dec(x_416);
lean_dec(x_11);
if (lean_obj_tag(x_422) == 0)
{
lean_object* x_423; 
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_414)) {
 x_423 = lean_alloc_ctor(0, 2, 0);
} else {
 x_423 = x_414;
}
lean_ctor_set(x_423, 0, x_412);
lean_ctor_set(x_423, 1, x_413);
return x_423;
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; 
lean_dec(x_414);
x_424 = lean_ctor_get(x_422, 0);
lean_inc(x_424);
lean_dec(x_422);
x_425 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
lean_dec(x_424);
x_1 = x_425;
x_2 = x_426;
x_3 = x_412;
x_8 = x_413;
goto _start;
}
}
}
case 2:
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; 
x_428 = lean_ctor_get(x_395, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_395, 1);
lean_inc(x_429);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_430 = x_395;
} else {
 lean_dec_ref(x_395);
 x_430 = lean_box(0);
}
x_431 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_431);
lean_ctor_set(x_2, 1, x_431);
lean_ctor_set(x_2, 0, x_431);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_312);
lean_ctor_set(x_432, 1, x_2);
x_433 = lean_array_get_size(x_11);
x_434 = lean_unsigned_to_nat(1u);
x_435 = lean_nat_sub(x_433, x_434);
x_436 = lean_nat_dec_lt(x_19, x_433);
lean_dec(x_433);
if (x_436 == 0)
{
lean_object* x_437; 
lean_dec(x_435);
lean_dec(x_432);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_430)) {
 x_437 = lean_alloc_ctor(0, 2, 0);
} else {
 x_437 = x_430;
}
lean_ctor_set(x_437, 0, x_428);
lean_ctor_set(x_437, 1, x_429);
return x_437;
}
else
{
lean_object* x_438; 
x_438 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(x_11, x_432, x_19, x_435);
lean_dec(x_432);
lean_dec(x_11);
if (lean_obj_tag(x_438) == 0)
{
lean_object* x_439; 
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_430)) {
 x_439 = lean_alloc_ctor(0, 2, 0);
} else {
 x_439 = x_430;
}
lean_ctor_set(x_439, 0, x_428);
lean_ctor_set(x_439, 1, x_429);
return x_439;
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; 
lean_dec(x_430);
x_440 = lean_ctor_get(x_438, 0);
lean_inc(x_440);
lean_dec(x_438);
x_441 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
lean_dec(x_440);
x_1 = x_441;
x_2 = x_442;
x_3 = x_428;
x_8 = x_429;
goto _start;
}
}
}
case 3:
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; 
lean_dec(x_313);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_444 = lean_ctor_get(x_395, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_395, 1);
lean_inc(x_445);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_446 = x_395;
} else {
 lean_dec_ref(x_395);
 x_446 = lean_box(0);
}
if (lean_is_scalar(x_446)) {
 x_447 = lean_alloc_ctor(0, 2, 0);
} else {
 x_447 = x_446;
}
lean_ctor_set(x_447, 0, x_444);
lean_ctor_set(x_447, 1, x_445);
return x_447;
}
case 4:
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; uint8_t x_456; 
x_448 = lean_ctor_get(x_395, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_395, 1);
lean_inc(x_449);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_450 = x_395;
} else {
 lean_dec_ref(x_395);
 x_450 = lean_box(0);
}
x_451 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_451);
lean_ctor_set(x_2, 1, x_451);
lean_ctor_set(x_2, 0, x_451);
x_452 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_452, 0, x_312);
lean_ctor_set(x_452, 1, x_2);
x_453 = lean_array_get_size(x_11);
x_454 = lean_unsigned_to_nat(1u);
x_455 = lean_nat_sub(x_453, x_454);
x_456 = lean_nat_dec_lt(x_19, x_453);
lean_dec(x_453);
if (x_456 == 0)
{
lean_object* x_457; 
lean_dec(x_455);
lean_dec(x_452);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_450)) {
 x_457 = lean_alloc_ctor(0, 2, 0);
} else {
 x_457 = x_450;
}
lean_ctor_set(x_457, 0, x_448);
lean_ctor_set(x_457, 1, x_449);
return x_457;
}
else
{
lean_object* x_458; 
x_458 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(x_11, x_452, x_19, x_455);
lean_dec(x_452);
lean_dec(x_11);
if (lean_obj_tag(x_458) == 0)
{
lean_object* x_459; 
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_450)) {
 x_459 = lean_alloc_ctor(0, 2, 0);
} else {
 x_459 = x_450;
}
lean_ctor_set(x_459, 0, x_448);
lean_ctor_set(x_459, 1, x_449);
return x_459;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; 
lean_dec(x_450);
x_460 = lean_ctor_get(x_458, 0);
lean_inc(x_460);
lean_dec(x_458);
x_461 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_462 = lean_ctor_get(x_460, 1);
lean_inc(x_462);
lean_dec(x_460);
x_1 = x_461;
x_2 = x_462;
x_3 = x_448;
x_8 = x_449;
goto _start;
}
}
}
default: 
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; uint8_t x_472; 
x_464 = lean_ctor_get(x_395, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_395, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_466 = x_395;
} else {
 lean_dec_ref(x_395);
 x_466 = lean_box(0);
}
x_467 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_467, 2);
lean_ctor_set(x_2, 1, x_467);
lean_ctor_set(x_2, 0, x_467);
lean_inc(x_2);
x_468 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_468, 0, x_312);
lean_ctor_set(x_468, 1, x_2);
x_469 = lean_array_get_size(x_11);
x_470 = lean_unsigned_to_nat(1u);
x_471 = lean_nat_sub(x_469, x_470);
x_472 = lean_nat_dec_lt(x_19, x_469);
lean_dec(x_469);
if (x_472 == 0)
{
lean_object* x_473; 
lean_dec(x_471);
lean_dec(x_468);
lean_dec(x_2);
lean_dec(x_467);
lean_dec(x_313);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_466)) {
 x_473 = lean_alloc_ctor(0, 2, 0);
} else {
 x_473 = x_466;
}
lean_ctor_set(x_473, 0, x_464);
lean_ctor_set(x_473, 1, x_465);
return x_473;
}
else
{
lean_object* x_474; 
lean_inc(x_471);
x_474 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(x_11, x_468, x_19, x_471);
lean_dec(x_468);
if (lean_obj_tag(x_474) == 0)
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; 
lean_dec(x_313);
x_475 = lean_box(4);
x_476 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_2);
x_477 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(x_11, x_476, x_19, x_471);
lean_dec(x_476);
lean_dec(x_11);
if (lean_obj_tag(x_477) == 0)
{
lean_object* x_478; 
lean_dec(x_467);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_466)) {
 x_478 = lean_alloc_ctor(0, 2, 0);
} else {
 x_478 = x_466;
}
lean_ctor_set(x_478, 0, x_464);
lean_ctor_set(x_478, 1, x_465);
return x_478;
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; 
lean_dec(x_466);
x_479 = lean_ctor_get(x_477, 0);
lean_inc(x_479);
lean_dec(x_477);
x_480 = l_Array_append___rarg(x_15, x_467);
lean_dec(x_467);
x_481 = lean_ctor_get(x_479, 1);
lean_inc(x_481);
lean_dec(x_479);
x_1 = x_480;
x_2 = x_481;
x_3 = x_464;
x_8 = x_465;
goto _start;
}
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; 
lean_dec(x_466);
x_483 = lean_ctor_get(x_474, 0);
lean_inc(x_483);
lean_dec(x_474);
lean_inc(x_15);
x_484 = l_Array_append___rarg(x_15, x_313);
lean_dec(x_313);
x_485 = lean_ctor_get(x_483, 1);
lean_inc(x_485);
lean_dec(x_483);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_486 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_484, x_485, x_464, x_4, x_5, x_6, x_7, x_465);
if (lean_obj_tag(x_486) == 0)
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; 
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_489 = x_486;
} else {
 lean_dec_ref(x_486);
 x_489 = lean_box(0);
}
x_490 = lean_box(4);
x_491 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_491, 0, x_490);
lean_ctor_set(x_491, 1, x_2);
x_492 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_11, x_491, x_19, x_471);
lean_dec(x_491);
lean_dec(x_11);
if (lean_obj_tag(x_492) == 0)
{
lean_object* x_493; 
lean_dec(x_467);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_489)) {
 x_493 = lean_alloc_ctor(0, 2, 0);
} else {
 x_493 = x_489;
}
lean_ctor_set(x_493, 0, x_487);
lean_ctor_set(x_493, 1, x_488);
return x_493;
}
else
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; 
lean_dec(x_489);
x_494 = lean_ctor_get(x_492, 0);
lean_inc(x_494);
lean_dec(x_492);
x_495 = l_Array_append___rarg(x_15, x_467);
lean_dec(x_467);
x_496 = lean_ctor_get(x_494, 1);
lean_inc(x_496);
lean_dec(x_494);
x_1 = x_495;
x_2 = x_496;
x_3 = x_487;
x_8 = x_488;
goto _start;
}
}
else
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; 
lean_dec(x_471);
lean_dec(x_2);
lean_dec(x_467);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_498 = lean_ctor_get(x_486, 0);
lean_inc(x_498);
x_499 = lean_ctor_get(x_486, 1);
lean_inc(x_499);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_500 = x_486;
} else {
 lean_dec_ref(x_486);
 x_500 = lean_box(0);
}
if (lean_is_scalar(x_500)) {
 x_501 = lean_alloc_ctor(1, 2, 0);
} else {
 x_501 = x_500;
}
lean_ctor_set(x_501, 0, x_498);
lean_ctor_set(x_501, 1, x_499);
return x_501;
}
}
}
}
}
}
else
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
lean_dec(x_313);
lean_dec(x_312);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_502 = lean_ctor_get(x_395, 0);
lean_inc(x_502);
x_503 = lean_ctor_get(x_395, 1);
lean_inc(x_503);
if (lean_is_exclusive(x_395)) {
 lean_ctor_release(x_395, 0);
 lean_ctor_release(x_395, 1);
 x_504 = x_395;
} else {
 lean_dec_ref(x_395);
 x_504 = lean_box(0);
}
if (lean_is_scalar(x_504)) {
 x_505 = lean_alloc_ctor(1, 2, 0);
} else {
 x_505 = x_504;
}
lean_ctor_set(x_505, 0, x_502);
lean_ctor_set(x_505, 1, x_503);
return x_505;
}
}
}
}
else
{
lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; uint8_t x_513; 
x_506 = lean_ctor_get(x_22, 0);
x_507 = lean_ctor_get(x_22, 1);
lean_inc(x_507);
lean_inc(x_506);
lean_dec(x_22);
x_508 = lean_ctor_get(x_506, 0);
lean_inc(x_508);
x_509 = lean_ctor_get(x_506, 1);
lean_inc(x_509);
if (lean_is_exclusive(x_506)) {
 lean_ctor_release(x_506, 0);
 lean_ctor_release(x_506, 1);
 x_510 = x_506;
} else {
 lean_dec_ref(x_506);
 x_510 = lean_box(0);
}
x_511 = lean_ctor_get(x_20, 0);
lean_inc(x_511);
x_512 = lean_box(3);
x_513 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_511, x_512);
lean_dec(x_511);
if (x_513 == 0)
{
lean_dec(x_20);
switch (lean_obj_tag(x_508)) {
case 0:
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; 
x_514 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_514);
lean_ctor_set(x_2, 1, x_514);
lean_ctor_set(x_2, 0, x_514);
if (lean_is_scalar(x_510)) {
 x_515 = lean_alloc_ctor(0, 2, 0);
} else {
 x_515 = x_510;
}
lean_ctor_set(x_515, 0, x_508);
lean_ctor_set(x_515, 1, x_2);
x_516 = lean_array_get_size(x_11);
x_517 = lean_unsigned_to_nat(1u);
x_518 = lean_nat_sub(x_516, x_517);
x_519 = lean_nat_dec_lt(x_19, x_516);
lean_dec(x_516);
if (x_519 == 0)
{
lean_object* x_520; 
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_520 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_520, 0, x_3);
lean_ctor_set(x_520, 1, x_507);
return x_520;
}
else
{
lean_object* x_521; 
x_521 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(x_11, x_515, x_19, x_518);
lean_dec(x_515);
lean_dec(x_11);
if (lean_obj_tag(x_521) == 0)
{
lean_object* x_522; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_522 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_522, 0, x_3);
lean_ctor_set(x_522, 1, x_507);
return x_522;
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; 
x_523 = lean_ctor_get(x_521, 0);
lean_inc(x_523);
lean_dec(x_521);
x_524 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_525 = lean_ctor_get(x_523, 1);
lean_inc(x_525);
lean_dec(x_523);
x_1 = x_524;
x_2 = x_525;
x_8 = x_507;
goto _start;
}
}
}
case 1:
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; uint8_t x_532; 
x_527 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_527);
lean_ctor_set(x_2, 1, x_527);
lean_ctor_set(x_2, 0, x_527);
if (lean_is_scalar(x_510)) {
 x_528 = lean_alloc_ctor(0, 2, 0);
} else {
 x_528 = x_510;
}
lean_ctor_set(x_528, 0, x_508);
lean_ctor_set(x_528, 1, x_2);
x_529 = lean_array_get_size(x_11);
x_530 = lean_unsigned_to_nat(1u);
x_531 = lean_nat_sub(x_529, x_530);
x_532 = lean_nat_dec_lt(x_19, x_529);
lean_dec(x_529);
if (x_532 == 0)
{
lean_object* x_533; 
lean_dec(x_531);
lean_dec(x_528);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_533 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_533, 0, x_3);
lean_ctor_set(x_533, 1, x_507);
return x_533;
}
else
{
lean_object* x_534; 
x_534 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(x_11, x_528, x_19, x_531);
lean_dec(x_528);
lean_dec(x_11);
if (lean_obj_tag(x_534) == 0)
{
lean_object* x_535; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_535 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_535, 0, x_3);
lean_ctor_set(x_535, 1, x_507);
return x_535;
}
else
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; 
x_536 = lean_ctor_get(x_534, 0);
lean_inc(x_536);
lean_dec(x_534);
x_537 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_538 = lean_ctor_get(x_536, 1);
lean_inc(x_538);
lean_dec(x_536);
x_1 = x_537;
x_2 = x_538;
x_8 = x_507;
goto _start;
}
}
}
case 2:
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; uint8_t x_545; 
x_540 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_540);
lean_ctor_set(x_2, 1, x_540);
lean_ctor_set(x_2, 0, x_540);
if (lean_is_scalar(x_510)) {
 x_541 = lean_alloc_ctor(0, 2, 0);
} else {
 x_541 = x_510;
}
lean_ctor_set(x_541, 0, x_508);
lean_ctor_set(x_541, 1, x_2);
x_542 = lean_array_get_size(x_11);
x_543 = lean_unsigned_to_nat(1u);
x_544 = lean_nat_sub(x_542, x_543);
x_545 = lean_nat_dec_lt(x_19, x_542);
lean_dec(x_542);
if (x_545 == 0)
{
lean_object* x_546; 
lean_dec(x_544);
lean_dec(x_541);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_546 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_546, 0, x_3);
lean_ctor_set(x_546, 1, x_507);
return x_546;
}
else
{
lean_object* x_547; 
x_547 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(x_11, x_541, x_19, x_544);
lean_dec(x_541);
lean_dec(x_11);
if (lean_obj_tag(x_547) == 0)
{
lean_object* x_548; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_548 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_548, 0, x_3);
lean_ctor_set(x_548, 1, x_507);
return x_548;
}
else
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; 
x_549 = lean_ctor_get(x_547, 0);
lean_inc(x_549);
lean_dec(x_547);
x_550 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_551 = lean_ctor_get(x_549, 1);
lean_inc(x_551);
lean_dec(x_549);
x_1 = x_550;
x_2 = x_551;
x_8 = x_507;
goto _start;
}
}
}
case 3:
{
lean_object* x_553; 
lean_dec(x_510);
lean_dec(x_509);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_553 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_553, 0, x_3);
lean_ctor_set(x_553, 1, x_507);
return x_553;
}
case 4:
{
lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; uint8_t x_559; 
x_554 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_554);
lean_ctor_set(x_2, 1, x_554);
lean_ctor_set(x_2, 0, x_554);
if (lean_is_scalar(x_510)) {
 x_555 = lean_alloc_ctor(0, 2, 0);
} else {
 x_555 = x_510;
}
lean_ctor_set(x_555, 0, x_508);
lean_ctor_set(x_555, 1, x_2);
x_556 = lean_array_get_size(x_11);
x_557 = lean_unsigned_to_nat(1u);
x_558 = lean_nat_sub(x_556, x_557);
x_559 = lean_nat_dec_lt(x_19, x_556);
lean_dec(x_556);
if (x_559 == 0)
{
lean_object* x_560; 
lean_dec(x_558);
lean_dec(x_555);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_560 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_560, 0, x_3);
lean_ctor_set(x_560, 1, x_507);
return x_560;
}
else
{
lean_object* x_561; 
x_561 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(x_11, x_555, x_19, x_558);
lean_dec(x_555);
lean_dec(x_11);
if (lean_obj_tag(x_561) == 0)
{
lean_object* x_562; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_562 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_562, 0, x_3);
lean_ctor_set(x_562, 1, x_507);
return x_562;
}
else
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; 
x_563 = lean_ctor_get(x_561, 0);
lean_inc(x_563);
lean_dec(x_561);
x_564 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_565 = lean_ctor_get(x_563, 1);
lean_inc(x_565);
lean_dec(x_563);
x_1 = x_564;
x_2 = x_565;
x_8 = x_507;
goto _start;
}
}
}
default: 
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; uint8_t x_572; 
x_567 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_567, 2);
lean_ctor_set(x_2, 1, x_567);
lean_ctor_set(x_2, 0, x_567);
lean_inc(x_2);
if (lean_is_scalar(x_510)) {
 x_568 = lean_alloc_ctor(0, 2, 0);
} else {
 x_568 = x_510;
}
lean_ctor_set(x_568, 0, x_508);
lean_ctor_set(x_568, 1, x_2);
x_569 = lean_array_get_size(x_11);
x_570 = lean_unsigned_to_nat(1u);
x_571 = lean_nat_sub(x_569, x_570);
x_572 = lean_nat_dec_lt(x_19, x_569);
lean_dec(x_569);
if (x_572 == 0)
{
lean_object* x_573; 
lean_dec(x_571);
lean_dec(x_568);
lean_dec(x_2);
lean_dec(x_567);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_573 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_573, 0, x_3);
lean_ctor_set(x_573, 1, x_507);
return x_573;
}
else
{
lean_object* x_574; 
lean_inc(x_571);
x_574 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(x_11, x_568, x_19, x_571);
lean_dec(x_568);
if (lean_obj_tag(x_574) == 0)
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; 
lean_dec(x_509);
x_575 = lean_box(4);
x_576 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_576, 0, x_575);
lean_ctor_set(x_576, 1, x_2);
x_577 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(x_11, x_576, x_19, x_571);
lean_dec(x_576);
lean_dec(x_11);
if (lean_obj_tag(x_577) == 0)
{
lean_object* x_578; 
lean_dec(x_567);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_578 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_578, 0, x_3);
lean_ctor_set(x_578, 1, x_507);
return x_578;
}
else
{
lean_object* x_579; lean_object* x_580; lean_object* x_581; 
x_579 = lean_ctor_get(x_577, 0);
lean_inc(x_579);
lean_dec(x_577);
x_580 = l_Array_append___rarg(x_15, x_567);
lean_dec(x_567);
x_581 = lean_ctor_get(x_579, 1);
lean_inc(x_581);
lean_dec(x_579);
x_1 = x_580;
x_2 = x_581;
x_8 = x_507;
goto _start;
}
}
else
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; 
x_583 = lean_ctor_get(x_574, 0);
lean_inc(x_583);
lean_dec(x_574);
lean_inc(x_15);
x_584 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_585 = lean_ctor_get(x_583, 1);
lean_inc(x_585);
lean_dec(x_583);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_586 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_584, x_585, x_3, x_4, x_5, x_6, x_7, x_507);
if (lean_obj_tag(x_586) == 0)
{
lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; 
x_587 = lean_ctor_get(x_586, 0);
lean_inc(x_587);
x_588 = lean_ctor_get(x_586, 1);
lean_inc(x_588);
if (lean_is_exclusive(x_586)) {
 lean_ctor_release(x_586, 0);
 lean_ctor_release(x_586, 1);
 x_589 = x_586;
} else {
 lean_dec_ref(x_586);
 x_589 = lean_box(0);
}
x_590 = lean_box(4);
x_591 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_591, 0, x_590);
lean_ctor_set(x_591, 1, x_2);
x_592 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(x_11, x_591, x_19, x_571);
lean_dec(x_591);
lean_dec(x_11);
if (lean_obj_tag(x_592) == 0)
{
lean_object* x_593; 
lean_dec(x_567);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_589)) {
 x_593 = lean_alloc_ctor(0, 2, 0);
} else {
 x_593 = x_589;
}
lean_ctor_set(x_593, 0, x_587);
lean_ctor_set(x_593, 1, x_588);
return x_593;
}
else
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; 
lean_dec(x_589);
x_594 = lean_ctor_get(x_592, 0);
lean_inc(x_594);
lean_dec(x_592);
x_595 = l_Array_append___rarg(x_15, x_567);
lean_dec(x_567);
x_596 = lean_ctor_get(x_594, 1);
lean_inc(x_596);
lean_dec(x_594);
x_1 = x_595;
x_2 = x_596;
x_3 = x_587;
x_8 = x_588;
goto _start;
}
}
else
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_571);
lean_dec(x_2);
lean_dec(x_567);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_598 = lean_ctor_get(x_586, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_586, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_586)) {
 lean_ctor_release(x_586, 0);
 lean_ctor_release(x_586, 1);
 x_600 = x_586;
} else {
 lean_dec_ref(x_586);
 x_600 = lean_box(0);
}
if (lean_is_scalar(x_600)) {
 x_601 = lean_alloc_ctor(1, 2, 0);
} else {
 x_601 = x_600;
}
lean_ctor_set(x_601, 0, x_598);
lean_ctor_set(x_601, 1, x_599);
return x_601;
}
}
}
}
}
}
else
{
lean_object* x_602; lean_object* x_603; 
x_602 = lean_ctor_get(x_20, 1);
lean_inc(x_602);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_15);
x_603 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_15, x_602, x_3, x_4, x_5, x_6, x_7, x_507);
if (lean_obj_tag(x_603) == 0)
{
switch (lean_obj_tag(x_508)) {
case 0:
{
lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; uint8_t x_612; 
x_604 = lean_ctor_get(x_603, 0);
lean_inc(x_604);
x_605 = lean_ctor_get(x_603, 1);
lean_inc(x_605);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_606 = x_603;
} else {
 lean_dec_ref(x_603);
 x_606 = lean_box(0);
}
x_607 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_607);
lean_ctor_set(x_2, 1, x_607);
lean_ctor_set(x_2, 0, x_607);
if (lean_is_scalar(x_510)) {
 x_608 = lean_alloc_ctor(0, 2, 0);
} else {
 x_608 = x_510;
}
lean_ctor_set(x_608, 0, x_508);
lean_ctor_set(x_608, 1, x_2);
x_609 = lean_array_get_size(x_11);
x_610 = lean_unsigned_to_nat(1u);
x_611 = lean_nat_sub(x_609, x_610);
x_612 = lean_nat_dec_lt(x_19, x_609);
lean_dec(x_609);
if (x_612 == 0)
{
lean_object* x_613; 
lean_dec(x_611);
lean_dec(x_608);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_606)) {
 x_613 = lean_alloc_ctor(0, 2, 0);
} else {
 x_613 = x_606;
}
lean_ctor_set(x_613, 0, x_604);
lean_ctor_set(x_613, 1, x_605);
return x_613;
}
else
{
lean_object* x_614; 
x_614 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(x_11, x_608, x_19, x_611);
lean_dec(x_608);
lean_dec(x_11);
if (lean_obj_tag(x_614) == 0)
{
lean_object* x_615; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_606)) {
 x_615 = lean_alloc_ctor(0, 2, 0);
} else {
 x_615 = x_606;
}
lean_ctor_set(x_615, 0, x_604);
lean_ctor_set(x_615, 1, x_605);
return x_615;
}
else
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; 
lean_dec(x_606);
x_616 = lean_ctor_get(x_614, 0);
lean_inc(x_616);
lean_dec(x_614);
x_617 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_618 = lean_ctor_get(x_616, 1);
lean_inc(x_618);
lean_dec(x_616);
x_1 = x_617;
x_2 = x_618;
x_3 = x_604;
x_8 = x_605;
goto _start;
}
}
}
case 1:
{
lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; uint8_t x_628; 
x_620 = lean_ctor_get(x_603, 0);
lean_inc(x_620);
x_621 = lean_ctor_get(x_603, 1);
lean_inc(x_621);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_622 = x_603;
} else {
 lean_dec_ref(x_603);
 x_622 = lean_box(0);
}
x_623 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_623);
lean_ctor_set(x_2, 1, x_623);
lean_ctor_set(x_2, 0, x_623);
if (lean_is_scalar(x_510)) {
 x_624 = lean_alloc_ctor(0, 2, 0);
} else {
 x_624 = x_510;
}
lean_ctor_set(x_624, 0, x_508);
lean_ctor_set(x_624, 1, x_2);
x_625 = lean_array_get_size(x_11);
x_626 = lean_unsigned_to_nat(1u);
x_627 = lean_nat_sub(x_625, x_626);
x_628 = lean_nat_dec_lt(x_19, x_625);
lean_dec(x_625);
if (x_628 == 0)
{
lean_object* x_629; 
lean_dec(x_627);
lean_dec(x_624);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_622)) {
 x_629 = lean_alloc_ctor(0, 2, 0);
} else {
 x_629 = x_622;
}
lean_ctor_set(x_629, 0, x_620);
lean_ctor_set(x_629, 1, x_621);
return x_629;
}
else
{
lean_object* x_630; 
x_630 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(x_11, x_624, x_19, x_627);
lean_dec(x_624);
lean_dec(x_11);
if (lean_obj_tag(x_630) == 0)
{
lean_object* x_631; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_622)) {
 x_631 = lean_alloc_ctor(0, 2, 0);
} else {
 x_631 = x_622;
}
lean_ctor_set(x_631, 0, x_620);
lean_ctor_set(x_631, 1, x_621);
return x_631;
}
else
{
lean_object* x_632; lean_object* x_633; lean_object* x_634; 
lean_dec(x_622);
x_632 = lean_ctor_get(x_630, 0);
lean_inc(x_632);
lean_dec(x_630);
x_633 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_634 = lean_ctor_get(x_632, 1);
lean_inc(x_634);
lean_dec(x_632);
x_1 = x_633;
x_2 = x_634;
x_3 = x_620;
x_8 = x_621;
goto _start;
}
}
}
case 2:
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; uint8_t x_644; 
x_636 = lean_ctor_get(x_603, 0);
lean_inc(x_636);
x_637 = lean_ctor_get(x_603, 1);
lean_inc(x_637);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_638 = x_603;
} else {
 lean_dec_ref(x_603);
 x_638 = lean_box(0);
}
x_639 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_639);
lean_ctor_set(x_2, 1, x_639);
lean_ctor_set(x_2, 0, x_639);
if (lean_is_scalar(x_510)) {
 x_640 = lean_alloc_ctor(0, 2, 0);
} else {
 x_640 = x_510;
}
lean_ctor_set(x_640, 0, x_508);
lean_ctor_set(x_640, 1, x_2);
x_641 = lean_array_get_size(x_11);
x_642 = lean_unsigned_to_nat(1u);
x_643 = lean_nat_sub(x_641, x_642);
x_644 = lean_nat_dec_lt(x_19, x_641);
lean_dec(x_641);
if (x_644 == 0)
{
lean_object* x_645; 
lean_dec(x_643);
lean_dec(x_640);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_638)) {
 x_645 = lean_alloc_ctor(0, 2, 0);
} else {
 x_645 = x_638;
}
lean_ctor_set(x_645, 0, x_636);
lean_ctor_set(x_645, 1, x_637);
return x_645;
}
else
{
lean_object* x_646; 
x_646 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(x_11, x_640, x_19, x_643);
lean_dec(x_640);
lean_dec(x_11);
if (lean_obj_tag(x_646) == 0)
{
lean_object* x_647; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_638)) {
 x_647 = lean_alloc_ctor(0, 2, 0);
} else {
 x_647 = x_638;
}
lean_ctor_set(x_647, 0, x_636);
lean_ctor_set(x_647, 1, x_637);
return x_647;
}
else
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; 
lean_dec(x_638);
x_648 = lean_ctor_get(x_646, 0);
lean_inc(x_648);
lean_dec(x_646);
x_649 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_650 = lean_ctor_get(x_648, 1);
lean_inc(x_650);
lean_dec(x_648);
x_1 = x_649;
x_2 = x_650;
x_3 = x_636;
x_8 = x_637;
goto _start;
}
}
}
case 3:
{
lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; 
lean_dec(x_510);
lean_dec(x_509);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_652 = lean_ctor_get(x_603, 0);
lean_inc(x_652);
x_653 = lean_ctor_get(x_603, 1);
lean_inc(x_653);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_654 = x_603;
} else {
 lean_dec_ref(x_603);
 x_654 = lean_box(0);
}
if (lean_is_scalar(x_654)) {
 x_655 = lean_alloc_ctor(0, 2, 0);
} else {
 x_655 = x_654;
}
lean_ctor_set(x_655, 0, x_652);
lean_ctor_set(x_655, 1, x_653);
return x_655;
}
case 4:
{
lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; uint8_t x_664; 
x_656 = lean_ctor_get(x_603, 0);
lean_inc(x_656);
x_657 = lean_ctor_get(x_603, 1);
lean_inc(x_657);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_658 = x_603;
} else {
 lean_dec_ref(x_603);
 x_658 = lean_box(0);
}
x_659 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_659);
lean_ctor_set(x_2, 1, x_659);
lean_ctor_set(x_2, 0, x_659);
if (lean_is_scalar(x_510)) {
 x_660 = lean_alloc_ctor(0, 2, 0);
} else {
 x_660 = x_510;
}
lean_ctor_set(x_660, 0, x_508);
lean_ctor_set(x_660, 1, x_2);
x_661 = lean_array_get_size(x_11);
x_662 = lean_unsigned_to_nat(1u);
x_663 = lean_nat_sub(x_661, x_662);
x_664 = lean_nat_dec_lt(x_19, x_661);
lean_dec(x_661);
if (x_664 == 0)
{
lean_object* x_665; 
lean_dec(x_663);
lean_dec(x_660);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_658)) {
 x_665 = lean_alloc_ctor(0, 2, 0);
} else {
 x_665 = x_658;
}
lean_ctor_set(x_665, 0, x_656);
lean_ctor_set(x_665, 1, x_657);
return x_665;
}
else
{
lean_object* x_666; 
x_666 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(x_11, x_660, x_19, x_663);
lean_dec(x_660);
lean_dec(x_11);
if (lean_obj_tag(x_666) == 0)
{
lean_object* x_667; 
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_658)) {
 x_667 = lean_alloc_ctor(0, 2, 0);
} else {
 x_667 = x_658;
}
lean_ctor_set(x_667, 0, x_656);
lean_ctor_set(x_667, 1, x_657);
return x_667;
}
else
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; 
lean_dec(x_658);
x_668 = lean_ctor_get(x_666, 0);
lean_inc(x_668);
lean_dec(x_666);
x_669 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_670 = lean_ctor_get(x_668, 1);
lean_inc(x_670);
lean_dec(x_668);
x_1 = x_669;
x_2 = x_670;
x_3 = x_656;
x_8 = x_657;
goto _start;
}
}
}
default: 
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; uint8_t x_680; 
x_672 = lean_ctor_get(x_603, 0);
lean_inc(x_672);
x_673 = lean_ctor_get(x_603, 1);
lean_inc(x_673);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_674 = x_603;
} else {
 lean_dec_ref(x_603);
 x_674 = lean_box(0);
}
x_675 = lean_mk_empty_array_with_capacity(x_19);
lean_inc_n(x_675, 2);
lean_ctor_set(x_2, 1, x_675);
lean_ctor_set(x_2, 0, x_675);
lean_inc(x_2);
if (lean_is_scalar(x_510)) {
 x_676 = lean_alloc_ctor(0, 2, 0);
} else {
 x_676 = x_510;
}
lean_ctor_set(x_676, 0, x_508);
lean_ctor_set(x_676, 1, x_2);
x_677 = lean_array_get_size(x_11);
x_678 = lean_unsigned_to_nat(1u);
x_679 = lean_nat_sub(x_677, x_678);
x_680 = lean_nat_dec_lt(x_19, x_677);
lean_dec(x_677);
if (x_680 == 0)
{
lean_object* x_681; 
lean_dec(x_679);
lean_dec(x_676);
lean_dec(x_2);
lean_dec(x_675);
lean_dec(x_509);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_674)) {
 x_681 = lean_alloc_ctor(0, 2, 0);
} else {
 x_681 = x_674;
}
lean_ctor_set(x_681, 0, x_672);
lean_ctor_set(x_681, 1, x_673);
return x_681;
}
else
{
lean_object* x_682; 
lean_inc(x_679);
x_682 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(x_11, x_676, x_19, x_679);
lean_dec(x_676);
if (lean_obj_tag(x_682) == 0)
{
lean_object* x_683; lean_object* x_684; lean_object* x_685; 
lean_dec(x_509);
x_683 = lean_box(4);
x_684 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_684, 0, x_683);
lean_ctor_set(x_684, 1, x_2);
x_685 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(x_11, x_684, x_19, x_679);
lean_dec(x_684);
lean_dec(x_11);
if (lean_obj_tag(x_685) == 0)
{
lean_object* x_686; 
lean_dec(x_675);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_674)) {
 x_686 = lean_alloc_ctor(0, 2, 0);
} else {
 x_686 = x_674;
}
lean_ctor_set(x_686, 0, x_672);
lean_ctor_set(x_686, 1, x_673);
return x_686;
}
else
{
lean_object* x_687; lean_object* x_688; lean_object* x_689; 
lean_dec(x_674);
x_687 = lean_ctor_get(x_685, 0);
lean_inc(x_687);
lean_dec(x_685);
x_688 = l_Array_append___rarg(x_15, x_675);
lean_dec(x_675);
x_689 = lean_ctor_get(x_687, 1);
lean_inc(x_689);
lean_dec(x_687);
x_1 = x_688;
x_2 = x_689;
x_3 = x_672;
x_8 = x_673;
goto _start;
}
}
else
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; 
lean_dec(x_674);
x_691 = lean_ctor_get(x_682, 0);
lean_inc(x_691);
lean_dec(x_682);
lean_inc(x_15);
x_692 = l_Array_append___rarg(x_15, x_509);
lean_dec(x_509);
x_693 = lean_ctor_get(x_691, 1);
lean_inc(x_693);
lean_dec(x_691);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_694 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_692, x_693, x_672, x_4, x_5, x_6, x_7, x_673);
if (lean_obj_tag(x_694) == 0)
{
lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; 
x_695 = lean_ctor_get(x_694, 0);
lean_inc(x_695);
x_696 = lean_ctor_get(x_694, 1);
lean_inc(x_696);
if (lean_is_exclusive(x_694)) {
 lean_ctor_release(x_694, 0);
 lean_ctor_release(x_694, 1);
 x_697 = x_694;
} else {
 lean_dec_ref(x_694);
 x_697 = lean_box(0);
}
x_698 = lean_box(4);
x_699 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_699, 0, x_698);
lean_ctor_set(x_699, 1, x_2);
x_700 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_11, x_699, x_19, x_679);
lean_dec(x_699);
lean_dec(x_11);
if (lean_obj_tag(x_700) == 0)
{
lean_object* x_701; 
lean_dec(x_675);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_697)) {
 x_701 = lean_alloc_ctor(0, 2, 0);
} else {
 x_701 = x_697;
}
lean_ctor_set(x_701, 0, x_695);
lean_ctor_set(x_701, 1, x_696);
return x_701;
}
else
{
lean_object* x_702; lean_object* x_703; lean_object* x_704; 
lean_dec(x_697);
x_702 = lean_ctor_get(x_700, 0);
lean_inc(x_702);
lean_dec(x_700);
x_703 = l_Array_append___rarg(x_15, x_675);
lean_dec(x_675);
x_704 = lean_ctor_get(x_702, 1);
lean_inc(x_704);
lean_dec(x_702);
x_1 = x_703;
x_2 = x_704;
x_3 = x_695;
x_8 = x_696;
goto _start;
}
}
else
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; 
lean_dec(x_679);
lean_dec(x_2);
lean_dec(x_675);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_706 = lean_ctor_get(x_694, 0);
lean_inc(x_706);
x_707 = lean_ctor_get(x_694, 1);
lean_inc(x_707);
if (lean_is_exclusive(x_694)) {
 lean_ctor_release(x_694, 0);
 lean_ctor_release(x_694, 1);
 x_708 = x_694;
} else {
 lean_dec_ref(x_694);
 x_708 = lean_box(0);
}
if (lean_is_scalar(x_708)) {
 x_709 = lean_alloc_ctor(1, 2, 0);
} else {
 x_709 = x_708;
}
lean_ctor_set(x_709, 0, x_706);
lean_ctor_set(x_709, 1, x_707);
return x_709;
}
}
}
}
}
}
else
{
lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; 
lean_dec(x_510);
lean_dec(x_509);
lean_dec(x_508);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_710 = lean_ctor_get(x_603, 0);
lean_inc(x_710);
x_711 = lean_ctor_get(x_603, 1);
lean_inc(x_711);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_712 = x_603;
} else {
 lean_dec_ref(x_603);
 x_712 = lean_box(0);
}
if (lean_is_scalar(x_712)) {
 x_713 = lean_alloc_ctor(1, 2, 0);
} else {
 x_713 = x_712;
}
lean_ctor_set(x_713, 0, x_710);
lean_ctor_set(x_713, 1, x_711);
return x_713;
}
}
}
}
else
{
uint8_t x_714; 
lean_dec(x_20);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_714 = !lean_is_exclusive(x_22);
if (x_714 == 0)
{
return x_22;
}
else
{
lean_object* x_715; lean_object* x_716; lean_object* x_717; 
x_715 = lean_ctor_get(x_22, 0);
x_716 = lean_ctor_get(x_22, 1);
lean_inc(x_716);
lean_inc(x_715);
lean_dec(x_22);
x_717 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_717, 0, x_715);
lean_ctor_set(x_717, 1, x_716);
return x_717;
}
}
}
else
{
lean_object* x_718; 
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_718 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_718, 0, x_3);
lean_ctor_set(x_718, 1, x_8);
return x_718;
}
}
else
{
lean_object* x_719; lean_object* x_720; 
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_719 = l_Array_append___rarg(x_3, x_10);
lean_dec(x_10);
x_720 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_720, 0, x_719);
lean_ctor_set(x_720, 1, x_8);
return x_720;
}
}
else
{
lean_object* x_721; lean_object* x_722; uint8_t x_723; 
x_721 = lean_ctor_get(x_2, 0);
x_722 = lean_ctor_get(x_2, 1);
lean_inc(x_722);
lean_inc(x_721);
lean_dec(x_2);
x_723 = l_Array_isEmpty___rarg(x_1);
if (x_723 == 0)
{
uint8_t x_724; 
lean_dec(x_721);
x_724 = l_Array_isEmpty___rarg(x_722);
if (x_724 == 0)
{
lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; uint8_t x_732; lean_object* x_733; 
x_725 = l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(x_1);
x_726 = lean_array_pop(x_1);
x_727 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_728 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_729 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_729, 0, x_728);
lean_ctor_set(x_729, 1, x_727);
x_730 = lean_unsigned_to_nat(0u);
x_731 = lean_array_get(x_729, x_722, x_730);
x_732 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_733 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_725, x_732, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_733) == 0)
{
lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; uint8_t x_742; 
x_734 = lean_ctor_get(x_733, 0);
lean_inc(x_734);
x_735 = lean_ctor_get(x_733, 1);
lean_inc(x_735);
if (lean_is_exclusive(x_733)) {
 lean_ctor_release(x_733, 0);
 lean_ctor_release(x_733, 1);
 x_736 = x_733;
} else {
 lean_dec_ref(x_733);
 x_736 = lean_box(0);
}
x_737 = lean_ctor_get(x_734, 0);
lean_inc(x_737);
x_738 = lean_ctor_get(x_734, 1);
lean_inc(x_738);
if (lean_is_exclusive(x_734)) {
 lean_ctor_release(x_734, 0);
 lean_ctor_release(x_734, 1);
 x_739 = x_734;
} else {
 lean_dec_ref(x_734);
 x_739 = lean_box(0);
}
x_740 = lean_ctor_get(x_731, 0);
lean_inc(x_740);
x_741 = lean_box(3);
x_742 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_740, x_741);
lean_dec(x_740);
if (x_742 == 0)
{
lean_dec(x_731);
switch (lean_obj_tag(x_737)) {
case 0:
{
lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; uint8_t x_749; 
x_743 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_743);
x_744 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_744, 0, x_743);
lean_ctor_set(x_744, 1, x_743);
if (lean_is_scalar(x_739)) {
 x_745 = lean_alloc_ctor(0, 2, 0);
} else {
 x_745 = x_739;
}
lean_ctor_set(x_745, 0, x_737);
lean_ctor_set(x_745, 1, x_744);
x_746 = lean_array_get_size(x_722);
x_747 = lean_unsigned_to_nat(1u);
x_748 = lean_nat_sub(x_746, x_747);
x_749 = lean_nat_dec_lt(x_730, x_746);
lean_dec(x_746);
if (x_749 == 0)
{
lean_object* x_750; 
lean_dec(x_748);
lean_dec(x_745);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_750 = lean_alloc_ctor(0, 2, 0);
} else {
 x_750 = x_736;
}
lean_ctor_set(x_750, 0, x_3);
lean_ctor_set(x_750, 1, x_735);
return x_750;
}
else
{
lean_object* x_751; 
x_751 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(x_722, x_745, x_730, x_748);
lean_dec(x_745);
lean_dec(x_722);
if (lean_obj_tag(x_751) == 0)
{
lean_object* x_752; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_752 = lean_alloc_ctor(0, 2, 0);
} else {
 x_752 = x_736;
}
lean_ctor_set(x_752, 0, x_3);
lean_ctor_set(x_752, 1, x_735);
return x_752;
}
else
{
lean_object* x_753; lean_object* x_754; lean_object* x_755; 
lean_dec(x_736);
x_753 = lean_ctor_get(x_751, 0);
lean_inc(x_753);
lean_dec(x_751);
x_754 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_755 = lean_ctor_get(x_753, 1);
lean_inc(x_755);
lean_dec(x_753);
x_1 = x_754;
x_2 = x_755;
x_8 = x_735;
goto _start;
}
}
}
case 1:
{
lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; uint8_t x_763; 
x_757 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_757);
x_758 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_758, 0, x_757);
lean_ctor_set(x_758, 1, x_757);
if (lean_is_scalar(x_739)) {
 x_759 = lean_alloc_ctor(0, 2, 0);
} else {
 x_759 = x_739;
}
lean_ctor_set(x_759, 0, x_737);
lean_ctor_set(x_759, 1, x_758);
x_760 = lean_array_get_size(x_722);
x_761 = lean_unsigned_to_nat(1u);
x_762 = lean_nat_sub(x_760, x_761);
x_763 = lean_nat_dec_lt(x_730, x_760);
lean_dec(x_760);
if (x_763 == 0)
{
lean_object* x_764; 
lean_dec(x_762);
lean_dec(x_759);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_764 = lean_alloc_ctor(0, 2, 0);
} else {
 x_764 = x_736;
}
lean_ctor_set(x_764, 0, x_3);
lean_ctor_set(x_764, 1, x_735);
return x_764;
}
else
{
lean_object* x_765; 
x_765 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(x_722, x_759, x_730, x_762);
lean_dec(x_759);
lean_dec(x_722);
if (lean_obj_tag(x_765) == 0)
{
lean_object* x_766; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_766 = lean_alloc_ctor(0, 2, 0);
} else {
 x_766 = x_736;
}
lean_ctor_set(x_766, 0, x_3);
lean_ctor_set(x_766, 1, x_735);
return x_766;
}
else
{
lean_object* x_767; lean_object* x_768; lean_object* x_769; 
lean_dec(x_736);
x_767 = lean_ctor_get(x_765, 0);
lean_inc(x_767);
lean_dec(x_765);
x_768 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_769 = lean_ctor_get(x_767, 1);
lean_inc(x_769);
lean_dec(x_767);
x_1 = x_768;
x_2 = x_769;
x_8 = x_735;
goto _start;
}
}
}
case 2:
{
lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; uint8_t x_777; 
x_771 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_771);
x_772 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_772, 0, x_771);
lean_ctor_set(x_772, 1, x_771);
if (lean_is_scalar(x_739)) {
 x_773 = lean_alloc_ctor(0, 2, 0);
} else {
 x_773 = x_739;
}
lean_ctor_set(x_773, 0, x_737);
lean_ctor_set(x_773, 1, x_772);
x_774 = lean_array_get_size(x_722);
x_775 = lean_unsigned_to_nat(1u);
x_776 = lean_nat_sub(x_774, x_775);
x_777 = lean_nat_dec_lt(x_730, x_774);
lean_dec(x_774);
if (x_777 == 0)
{
lean_object* x_778; 
lean_dec(x_776);
lean_dec(x_773);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_778 = lean_alloc_ctor(0, 2, 0);
} else {
 x_778 = x_736;
}
lean_ctor_set(x_778, 0, x_3);
lean_ctor_set(x_778, 1, x_735);
return x_778;
}
else
{
lean_object* x_779; 
x_779 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(x_722, x_773, x_730, x_776);
lean_dec(x_773);
lean_dec(x_722);
if (lean_obj_tag(x_779) == 0)
{
lean_object* x_780; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_780 = lean_alloc_ctor(0, 2, 0);
} else {
 x_780 = x_736;
}
lean_ctor_set(x_780, 0, x_3);
lean_ctor_set(x_780, 1, x_735);
return x_780;
}
else
{
lean_object* x_781; lean_object* x_782; lean_object* x_783; 
lean_dec(x_736);
x_781 = lean_ctor_get(x_779, 0);
lean_inc(x_781);
lean_dec(x_779);
x_782 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_783 = lean_ctor_get(x_781, 1);
lean_inc(x_783);
lean_dec(x_781);
x_1 = x_782;
x_2 = x_783;
x_8 = x_735;
goto _start;
}
}
}
case 3:
{
lean_object* x_785; 
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_785 = lean_alloc_ctor(0, 2, 0);
} else {
 x_785 = x_736;
}
lean_ctor_set(x_785, 0, x_3);
lean_ctor_set(x_785, 1, x_735);
return x_785;
}
case 4:
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; uint8_t x_792; 
x_786 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_786);
x_787 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_787, 0, x_786);
lean_ctor_set(x_787, 1, x_786);
if (lean_is_scalar(x_739)) {
 x_788 = lean_alloc_ctor(0, 2, 0);
} else {
 x_788 = x_739;
}
lean_ctor_set(x_788, 0, x_737);
lean_ctor_set(x_788, 1, x_787);
x_789 = lean_array_get_size(x_722);
x_790 = lean_unsigned_to_nat(1u);
x_791 = lean_nat_sub(x_789, x_790);
x_792 = lean_nat_dec_lt(x_730, x_789);
lean_dec(x_789);
if (x_792 == 0)
{
lean_object* x_793; 
lean_dec(x_791);
lean_dec(x_788);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_793 = lean_alloc_ctor(0, 2, 0);
} else {
 x_793 = x_736;
}
lean_ctor_set(x_793, 0, x_3);
lean_ctor_set(x_793, 1, x_735);
return x_793;
}
else
{
lean_object* x_794; 
x_794 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(x_722, x_788, x_730, x_791);
lean_dec(x_788);
lean_dec(x_722);
if (lean_obj_tag(x_794) == 0)
{
lean_object* x_795; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_795 = lean_alloc_ctor(0, 2, 0);
} else {
 x_795 = x_736;
}
lean_ctor_set(x_795, 0, x_3);
lean_ctor_set(x_795, 1, x_735);
return x_795;
}
else
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; 
lean_dec(x_736);
x_796 = lean_ctor_get(x_794, 0);
lean_inc(x_796);
lean_dec(x_794);
x_797 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_798 = lean_ctor_get(x_796, 1);
lean_inc(x_798);
lean_dec(x_796);
x_1 = x_797;
x_2 = x_798;
x_8 = x_735;
goto _start;
}
}
}
default: 
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; uint8_t x_806; 
x_800 = lean_mk_empty_array_with_capacity(x_730);
lean_inc_n(x_800, 2);
x_801 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_801, 0, x_800);
lean_ctor_set(x_801, 1, x_800);
lean_inc(x_801);
if (lean_is_scalar(x_739)) {
 x_802 = lean_alloc_ctor(0, 2, 0);
} else {
 x_802 = x_739;
}
lean_ctor_set(x_802, 0, x_737);
lean_ctor_set(x_802, 1, x_801);
x_803 = lean_array_get_size(x_722);
x_804 = lean_unsigned_to_nat(1u);
x_805 = lean_nat_sub(x_803, x_804);
x_806 = lean_nat_dec_lt(x_730, x_803);
lean_dec(x_803);
if (x_806 == 0)
{
lean_object* x_807; 
lean_dec(x_805);
lean_dec(x_802);
lean_dec(x_801);
lean_dec(x_800);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_807 = lean_alloc_ctor(0, 2, 0);
} else {
 x_807 = x_736;
}
lean_ctor_set(x_807, 0, x_3);
lean_ctor_set(x_807, 1, x_735);
return x_807;
}
else
{
lean_object* x_808; 
lean_inc(x_805);
x_808 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(x_722, x_802, x_730, x_805);
lean_dec(x_802);
if (lean_obj_tag(x_808) == 0)
{
lean_object* x_809; lean_object* x_810; lean_object* x_811; 
lean_dec(x_738);
x_809 = lean_box(4);
x_810 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_810, 0, x_809);
lean_ctor_set(x_810, 1, x_801);
x_811 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(x_722, x_810, x_730, x_805);
lean_dec(x_810);
lean_dec(x_722);
if (lean_obj_tag(x_811) == 0)
{
lean_object* x_812; 
lean_dec(x_800);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_736)) {
 x_812 = lean_alloc_ctor(0, 2, 0);
} else {
 x_812 = x_736;
}
lean_ctor_set(x_812, 0, x_3);
lean_ctor_set(x_812, 1, x_735);
return x_812;
}
else
{
lean_object* x_813; lean_object* x_814; lean_object* x_815; 
lean_dec(x_736);
x_813 = lean_ctor_get(x_811, 0);
lean_inc(x_813);
lean_dec(x_811);
x_814 = l_Array_append___rarg(x_726, x_800);
lean_dec(x_800);
x_815 = lean_ctor_get(x_813, 1);
lean_inc(x_815);
lean_dec(x_813);
x_1 = x_814;
x_2 = x_815;
x_8 = x_735;
goto _start;
}
}
else
{
lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; 
lean_dec(x_736);
x_817 = lean_ctor_get(x_808, 0);
lean_inc(x_817);
lean_dec(x_808);
lean_inc(x_726);
x_818 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_819 = lean_ctor_get(x_817, 1);
lean_inc(x_819);
lean_dec(x_817);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_820 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_818, x_819, x_3, x_4, x_5, x_6, x_7, x_735);
if (lean_obj_tag(x_820) == 0)
{
lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; 
x_821 = lean_ctor_get(x_820, 0);
lean_inc(x_821);
x_822 = lean_ctor_get(x_820, 1);
lean_inc(x_822);
if (lean_is_exclusive(x_820)) {
 lean_ctor_release(x_820, 0);
 lean_ctor_release(x_820, 1);
 x_823 = x_820;
} else {
 lean_dec_ref(x_820);
 x_823 = lean_box(0);
}
x_824 = lean_box(4);
x_825 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_825, 0, x_824);
lean_ctor_set(x_825, 1, x_801);
x_826 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(x_722, x_825, x_730, x_805);
lean_dec(x_825);
lean_dec(x_722);
if (lean_obj_tag(x_826) == 0)
{
lean_object* x_827; 
lean_dec(x_800);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_823)) {
 x_827 = lean_alloc_ctor(0, 2, 0);
} else {
 x_827 = x_823;
}
lean_ctor_set(x_827, 0, x_821);
lean_ctor_set(x_827, 1, x_822);
return x_827;
}
else
{
lean_object* x_828; lean_object* x_829; lean_object* x_830; 
lean_dec(x_823);
x_828 = lean_ctor_get(x_826, 0);
lean_inc(x_828);
lean_dec(x_826);
x_829 = l_Array_append___rarg(x_726, x_800);
lean_dec(x_800);
x_830 = lean_ctor_get(x_828, 1);
lean_inc(x_830);
lean_dec(x_828);
x_1 = x_829;
x_2 = x_830;
x_3 = x_821;
x_8 = x_822;
goto _start;
}
}
else
{
lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; 
lean_dec(x_805);
lean_dec(x_801);
lean_dec(x_800);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_832 = lean_ctor_get(x_820, 0);
lean_inc(x_832);
x_833 = lean_ctor_get(x_820, 1);
lean_inc(x_833);
if (lean_is_exclusive(x_820)) {
 lean_ctor_release(x_820, 0);
 lean_ctor_release(x_820, 1);
 x_834 = x_820;
} else {
 lean_dec_ref(x_820);
 x_834 = lean_box(0);
}
if (lean_is_scalar(x_834)) {
 x_835 = lean_alloc_ctor(1, 2, 0);
} else {
 x_835 = x_834;
}
lean_ctor_set(x_835, 0, x_832);
lean_ctor_set(x_835, 1, x_833);
return x_835;
}
}
}
}
}
}
else
{
lean_object* x_836; lean_object* x_837; 
lean_dec(x_736);
x_836 = lean_ctor_get(x_731, 1);
lean_inc(x_836);
lean_dec(x_731);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_726);
x_837 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_726, x_836, x_3, x_4, x_5, x_6, x_7, x_735);
if (lean_obj_tag(x_837) == 0)
{
switch (lean_obj_tag(x_737)) {
case 0:
{
lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; uint8_t x_847; 
x_838 = lean_ctor_get(x_837, 0);
lean_inc(x_838);
x_839 = lean_ctor_get(x_837, 1);
lean_inc(x_839);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_840 = x_837;
} else {
 lean_dec_ref(x_837);
 x_840 = lean_box(0);
}
x_841 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_841);
x_842 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_842, 0, x_841);
lean_ctor_set(x_842, 1, x_841);
if (lean_is_scalar(x_739)) {
 x_843 = lean_alloc_ctor(0, 2, 0);
} else {
 x_843 = x_739;
}
lean_ctor_set(x_843, 0, x_737);
lean_ctor_set(x_843, 1, x_842);
x_844 = lean_array_get_size(x_722);
x_845 = lean_unsigned_to_nat(1u);
x_846 = lean_nat_sub(x_844, x_845);
x_847 = lean_nat_dec_lt(x_730, x_844);
lean_dec(x_844);
if (x_847 == 0)
{
lean_object* x_848; 
lean_dec(x_846);
lean_dec(x_843);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_840)) {
 x_848 = lean_alloc_ctor(0, 2, 0);
} else {
 x_848 = x_840;
}
lean_ctor_set(x_848, 0, x_838);
lean_ctor_set(x_848, 1, x_839);
return x_848;
}
else
{
lean_object* x_849; 
x_849 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(x_722, x_843, x_730, x_846);
lean_dec(x_843);
lean_dec(x_722);
if (lean_obj_tag(x_849) == 0)
{
lean_object* x_850; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_840)) {
 x_850 = lean_alloc_ctor(0, 2, 0);
} else {
 x_850 = x_840;
}
lean_ctor_set(x_850, 0, x_838);
lean_ctor_set(x_850, 1, x_839);
return x_850;
}
else
{
lean_object* x_851; lean_object* x_852; lean_object* x_853; 
lean_dec(x_840);
x_851 = lean_ctor_get(x_849, 0);
lean_inc(x_851);
lean_dec(x_849);
x_852 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_853 = lean_ctor_get(x_851, 1);
lean_inc(x_853);
lean_dec(x_851);
x_1 = x_852;
x_2 = x_853;
x_3 = x_838;
x_8 = x_839;
goto _start;
}
}
}
case 1:
{
lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; uint8_t x_864; 
x_855 = lean_ctor_get(x_837, 0);
lean_inc(x_855);
x_856 = lean_ctor_get(x_837, 1);
lean_inc(x_856);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_857 = x_837;
} else {
 lean_dec_ref(x_837);
 x_857 = lean_box(0);
}
x_858 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_858);
x_859 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_859, 0, x_858);
lean_ctor_set(x_859, 1, x_858);
if (lean_is_scalar(x_739)) {
 x_860 = lean_alloc_ctor(0, 2, 0);
} else {
 x_860 = x_739;
}
lean_ctor_set(x_860, 0, x_737);
lean_ctor_set(x_860, 1, x_859);
x_861 = lean_array_get_size(x_722);
x_862 = lean_unsigned_to_nat(1u);
x_863 = lean_nat_sub(x_861, x_862);
x_864 = lean_nat_dec_lt(x_730, x_861);
lean_dec(x_861);
if (x_864 == 0)
{
lean_object* x_865; 
lean_dec(x_863);
lean_dec(x_860);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_857)) {
 x_865 = lean_alloc_ctor(0, 2, 0);
} else {
 x_865 = x_857;
}
lean_ctor_set(x_865, 0, x_855);
lean_ctor_set(x_865, 1, x_856);
return x_865;
}
else
{
lean_object* x_866; 
x_866 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(x_722, x_860, x_730, x_863);
lean_dec(x_860);
lean_dec(x_722);
if (lean_obj_tag(x_866) == 0)
{
lean_object* x_867; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_857)) {
 x_867 = lean_alloc_ctor(0, 2, 0);
} else {
 x_867 = x_857;
}
lean_ctor_set(x_867, 0, x_855);
lean_ctor_set(x_867, 1, x_856);
return x_867;
}
else
{
lean_object* x_868; lean_object* x_869; lean_object* x_870; 
lean_dec(x_857);
x_868 = lean_ctor_get(x_866, 0);
lean_inc(x_868);
lean_dec(x_866);
x_869 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_870 = lean_ctor_get(x_868, 1);
lean_inc(x_870);
lean_dec(x_868);
x_1 = x_869;
x_2 = x_870;
x_3 = x_855;
x_8 = x_856;
goto _start;
}
}
}
case 2:
{
lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; uint8_t x_881; 
x_872 = lean_ctor_get(x_837, 0);
lean_inc(x_872);
x_873 = lean_ctor_get(x_837, 1);
lean_inc(x_873);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_874 = x_837;
} else {
 lean_dec_ref(x_837);
 x_874 = lean_box(0);
}
x_875 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_875);
x_876 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_876, 0, x_875);
lean_ctor_set(x_876, 1, x_875);
if (lean_is_scalar(x_739)) {
 x_877 = lean_alloc_ctor(0, 2, 0);
} else {
 x_877 = x_739;
}
lean_ctor_set(x_877, 0, x_737);
lean_ctor_set(x_877, 1, x_876);
x_878 = lean_array_get_size(x_722);
x_879 = lean_unsigned_to_nat(1u);
x_880 = lean_nat_sub(x_878, x_879);
x_881 = lean_nat_dec_lt(x_730, x_878);
lean_dec(x_878);
if (x_881 == 0)
{
lean_object* x_882; 
lean_dec(x_880);
lean_dec(x_877);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_874)) {
 x_882 = lean_alloc_ctor(0, 2, 0);
} else {
 x_882 = x_874;
}
lean_ctor_set(x_882, 0, x_872);
lean_ctor_set(x_882, 1, x_873);
return x_882;
}
else
{
lean_object* x_883; 
x_883 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(x_722, x_877, x_730, x_880);
lean_dec(x_877);
lean_dec(x_722);
if (lean_obj_tag(x_883) == 0)
{
lean_object* x_884; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_874)) {
 x_884 = lean_alloc_ctor(0, 2, 0);
} else {
 x_884 = x_874;
}
lean_ctor_set(x_884, 0, x_872);
lean_ctor_set(x_884, 1, x_873);
return x_884;
}
else
{
lean_object* x_885; lean_object* x_886; lean_object* x_887; 
lean_dec(x_874);
x_885 = lean_ctor_get(x_883, 0);
lean_inc(x_885);
lean_dec(x_883);
x_886 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_887 = lean_ctor_get(x_885, 1);
lean_inc(x_887);
lean_dec(x_885);
x_1 = x_886;
x_2 = x_887;
x_3 = x_872;
x_8 = x_873;
goto _start;
}
}
}
case 3:
{
lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; 
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_889 = lean_ctor_get(x_837, 0);
lean_inc(x_889);
x_890 = lean_ctor_get(x_837, 1);
lean_inc(x_890);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_891 = x_837;
} else {
 lean_dec_ref(x_837);
 x_891 = lean_box(0);
}
if (lean_is_scalar(x_891)) {
 x_892 = lean_alloc_ctor(0, 2, 0);
} else {
 x_892 = x_891;
}
lean_ctor_set(x_892, 0, x_889);
lean_ctor_set(x_892, 1, x_890);
return x_892;
}
case 4:
{
lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; uint8_t x_902; 
x_893 = lean_ctor_get(x_837, 0);
lean_inc(x_893);
x_894 = lean_ctor_get(x_837, 1);
lean_inc(x_894);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_895 = x_837;
} else {
 lean_dec_ref(x_837);
 x_895 = lean_box(0);
}
x_896 = lean_mk_empty_array_with_capacity(x_730);
lean_inc(x_896);
x_897 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_897, 0, x_896);
lean_ctor_set(x_897, 1, x_896);
if (lean_is_scalar(x_739)) {
 x_898 = lean_alloc_ctor(0, 2, 0);
} else {
 x_898 = x_739;
}
lean_ctor_set(x_898, 0, x_737);
lean_ctor_set(x_898, 1, x_897);
x_899 = lean_array_get_size(x_722);
x_900 = lean_unsigned_to_nat(1u);
x_901 = lean_nat_sub(x_899, x_900);
x_902 = lean_nat_dec_lt(x_730, x_899);
lean_dec(x_899);
if (x_902 == 0)
{
lean_object* x_903; 
lean_dec(x_901);
lean_dec(x_898);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_895)) {
 x_903 = lean_alloc_ctor(0, 2, 0);
} else {
 x_903 = x_895;
}
lean_ctor_set(x_903, 0, x_893);
lean_ctor_set(x_903, 1, x_894);
return x_903;
}
else
{
lean_object* x_904; 
x_904 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(x_722, x_898, x_730, x_901);
lean_dec(x_898);
lean_dec(x_722);
if (lean_obj_tag(x_904) == 0)
{
lean_object* x_905; 
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_895)) {
 x_905 = lean_alloc_ctor(0, 2, 0);
} else {
 x_905 = x_895;
}
lean_ctor_set(x_905, 0, x_893);
lean_ctor_set(x_905, 1, x_894);
return x_905;
}
else
{
lean_object* x_906; lean_object* x_907; lean_object* x_908; 
lean_dec(x_895);
x_906 = lean_ctor_get(x_904, 0);
lean_inc(x_906);
lean_dec(x_904);
x_907 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_908 = lean_ctor_get(x_906, 1);
lean_inc(x_908);
lean_dec(x_906);
x_1 = x_907;
x_2 = x_908;
x_3 = x_893;
x_8 = x_894;
goto _start;
}
}
}
default: 
{
lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; uint8_t x_919; 
x_910 = lean_ctor_get(x_837, 0);
lean_inc(x_910);
x_911 = lean_ctor_get(x_837, 1);
lean_inc(x_911);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_912 = x_837;
} else {
 lean_dec_ref(x_837);
 x_912 = lean_box(0);
}
x_913 = lean_mk_empty_array_with_capacity(x_730);
lean_inc_n(x_913, 2);
x_914 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_914, 0, x_913);
lean_ctor_set(x_914, 1, x_913);
lean_inc(x_914);
if (lean_is_scalar(x_739)) {
 x_915 = lean_alloc_ctor(0, 2, 0);
} else {
 x_915 = x_739;
}
lean_ctor_set(x_915, 0, x_737);
lean_ctor_set(x_915, 1, x_914);
x_916 = lean_array_get_size(x_722);
x_917 = lean_unsigned_to_nat(1u);
x_918 = lean_nat_sub(x_916, x_917);
x_919 = lean_nat_dec_lt(x_730, x_916);
lean_dec(x_916);
if (x_919 == 0)
{
lean_object* x_920; 
lean_dec(x_918);
lean_dec(x_915);
lean_dec(x_914);
lean_dec(x_913);
lean_dec(x_738);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_912)) {
 x_920 = lean_alloc_ctor(0, 2, 0);
} else {
 x_920 = x_912;
}
lean_ctor_set(x_920, 0, x_910);
lean_ctor_set(x_920, 1, x_911);
return x_920;
}
else
{
lean_object* x_921; 
lean_inc(x_918);
x_921 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(x_722, x_915, x_730, x_918);
lean_dec(x_915);
if (lean_obj_tag(x_921) == 0)
{
lean_object* x_922; lean_object* x_923; lean_object* x_924; 
lean_dec(x_738);
x_922 = lean_box(4);
x_923 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_923, 0, x_922);
lean_ctor_set(x_923, 1, x_914);
x_924 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(x_722, x_923, x_730, x_918);
lean_dec(x_923);
lean_dec(x_722);
if (lean_obj_tag(x_924) == 0)
{
lean_object* x_925; 
lean_dec(x_913);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_912)) {
 x_925 = lean_alloc_ctor(0, 2, 0);
} else {
 x_925 = x_912;
}
lean_ctor_set(x_925, 0, x_910);
lean_ctor_set(x_925, 1, x_911);
return x_925;
}
else
{
lean_object* x_926; lean_object* x_927; lean_object* x_928; 
lean_dec(x_912);
x_926 = lean_ctor_get(x_924, 0);
lean_inc(x_926);
lean_dec(x_924);
x_927 = l_Array_append___rarg(x_726, x_913);
lean_dec(x_913);
x_928 = lean_ctor_get(x_926, 1);
lean_inc(x_928);
lean_dec(x_926);
x_1 = x_927;
x_2 = x_928;
x_3 = x_910;
x_8 = x_911;
goto _start;
}
}
else
{
lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; 
lean_dec(x_912);
x_930 = lean_ctor_get(x_921, 0);
lean_inc(x_930);
lean_dec(x_921);
lean_inc(x_726);
x_931 = l_Array_append___rarg(x_726, x_738);
lean_dec(x_738);
x_932 = lean_ctor_get(x_930, 1);
lean_inc(x_932);
lean_dec(x_930);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_933 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_931, x_932, x_910, x_4, x_5, x_6, x_7, x_911);
if (lean_obj_tag(x_933) == 0)
{
lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; 
x_934 = lean_ctor_get(x_933, 0);
lean_inc(x_934);
x_935 = lean_ctor_get(x_933, 1);
lean_inc(x_935);
if (lean_is_exclusive(x_933)) {
 lean_ctor_release(x_933, 0);
 lean_ctor_release(x_933, 1);
 x_936 = x_933;
} else {
 lean_dec_ref(x_933);
 x_936 = lean_box(0);
}
x_937 = lean_box(4);
x_938 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_938, 0, x_937);
lean_ctor_set(x_938, 1, x_914);
x_939 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_722, x_938, x_730, x_918);
lean_dec(x_938);
lean_dec(x_722);
if (lean_obj_tag(x_939) == 0)
{
lean_object* x_940; 
lean_dec(x_913);
lean_dec(x_726);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_936)) {
 x_940 = lean_alloc_ctor(0, 2, 0);
} else {
 x_940 = x_936;
}
lean_ctor_set(x_940, 0, x_934);
lean_ctor_set(x_940, 1, x_935);
return x_940;
}
else
{
lean_object* x_941; lean_object* x_942; lean_object* x_943; 
lean_dec(x_936);
x_941 = lean_ctor_get(x_939, 0);
lean_inc(x_941);
lean_dec(x_939);
x_942 = l_Array_append___rarg(x_726, x_913);
lean_dec(x_913);
x_943 = lean_ctor_get(x_941, 1);
lean_inc(x_943);
lean_dec(x_941);
x_1 = x_942;
x_2 = x_943;
x_3 = x_934;
x_8 = x_935;
goto _start;
}
}
else
{
lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; 
lean_dec(x_918);
lean_dec(x_914);
lean_dec(x_913);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_945 = lean_ctor_get(x_933, 0);
lean_inc(x_945);
x_946 = lean_ctor_get(x_933, 1);
lean_inc(x_946);
if (lean_is_exclusive(x_933)) {
 lean_ctor_release(x_933, 0);
 lean_ctor_release(x_933, 1);
 x_947 = x_933;
} else {
 lean_dec_ref(x_933);
 x_947 = lean_box(0);
}
if (lean_is_scalar(x_947)) {
 x_948 = lean_alloc_ctor(1, 2, 0);
} else {
 x_948 = x_947;
}
lean_ctor_set(x_948, 0, x_945);
lean_ctor_set(x_948, 1, x_946);
return x_948;
}
}
}
}
}
}
else
{
lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; 
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_737);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_949 = lean_ctor_get(x_837, 0);
lean_inc(x_949);
x_950 = lean_ctor_get(x_837, 1);
lean_inc(x_950);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_951 = x_837;
} else {
 lean_dec_ref(x_837);
 x_951 = lean_box(0);
}
if (lean_is_scalar(x_951)) {
 x_952 = lean_alloc_ctor(1, 2, 0);
} else {
 x_952 = x_951;
}
lean_ctor_set(x_952, 0, x_949);
lean_ctor_set(x_952, 1, x_950);
return x_952;
}
}
}
else
{
lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; 
lean_dec(x_731);
lean_dec(x_726);
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_953 = lean_ctor_get(x_733, 0);
lean_inc(x_953);
x_954 = lean_ctor_get(x_733, 1);
lean_inc(x_954);
if (lean_is_exclusive(x_733)) {
 lean_ctor_release(x_733, 0);
 lean_ctor_release(x_733, 1);
 x_955 = x_733;
} else {
 lean_dec_ref(x_733);
 x_955 = lean_box(0);
}
if (lean_is_scalar(x_955)) {
 x_956 = lean_alloc_ctor(1, 2, 0);
} else {
 x_956 = x_955;
}
lean_ctor_set(x_956, 0, x_953);
lean_ctor_set(x_956, 1, x_954);
return x_956;
}
}
else
{
lean_object* x_957; 
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_957 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_957, 0, x_3);
lean_ctor_set(x_957, 1, x_8);
return x_957;
}
}
else
{
lean_object* x_958; lean_object* x_959; 
lean_dec(x_722);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_958 = l_Array_append___rarg(x_3, x_721);
lean_dec(x_721);
x_959 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_959, 0, x_958);
lean_ctor_set(x_959, 1, x_8);
return x_959;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch_process(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getMatch_process___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__7___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__8___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__9___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__11___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__12___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__13___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getMatch_process___spec__14___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_1);
x_8 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = 2;
lean_ctor_set_uint8(x_10, 5, x_12);
x_13 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_2, x_13, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
switch (lean_obj_tag(x_16)) {
case 0:
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 1);
x_19 = lean_ctor_get(x_14, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(x_1, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_21) == 0)
{
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_free_object(x_14);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_20, x_22, x_8, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_23);
if (x_28 == 0)
{
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_dec(x_15);
x_34 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(x_1, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
lean_dec(x_33);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_8);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_33, x_36, x_8, x_3, x_4, x_5, x_6, x_32);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_37, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_44 = x_37;
} else {
 lean_dec_ref(x_37);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
case 1:
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_14);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_14, 1);
x_48 = lean_ctor_get(x_14, 0);
lean_dec(x_48);
x_49 = lean_ctor_get(x_15, 1);
lean_inc(x_49);
lean_dec(x_15);
x_50 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(x_1, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_50) == 0)
{
lean_dec(x_49);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_free_object(x_14);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_49, x_51, x_8, x_3, x_4, x_5, x_6, x_47);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
return x_52;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_52);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_52);
if (x_57 == 0)
{
return x_52;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_52, 0);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_52);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_14, 1);
lean_inc(x_61);
lean_dec(x_14);
x_62 = lean_ctor_get(x_15, 1);
lean_inc(x_62);
lean_dec(x_15);
x_63 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(x_1, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
lean_dec(x_62);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_8);
lean_ctor_set(x_64, 1, x_61);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
x_66 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_62, x_65, x_8, x_3, x_4, x_5, x_6, x_61);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_66, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_73 = x_66;
} else {
 lean_dec_ref(x_66);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
}
case 2:
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_14);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_14, 1);
x_77 = lean_ctor_get(x_14, 0);
lean_dec(x_77);
x_78 = lean_ctor_get(x_15, 1);
lean_inc(x_78);
lean_dec(x_15);
x_79 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(x_1, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_79) == 0)
{
lean_dec(x_78);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_free_object(x_14);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
lean_dec(x_79);
x_81 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_78, x_80, x_8, x_3, x_4, x_5, x_6, x_76);
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
return x_81;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_81);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
else
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_81);
if (x_86 == 0)
{
return x_81;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_81, 0);
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_81);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_14, 1);
lean_inc(x_90);
lean_dec(x_14);
x_91 = lean_ctor_get(x_15, 1);
lean_inc(x_91);
lean_dec(x_15);
x_92 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(x_1, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; 
lean_dec(x_91);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_8);
lean_ctor_set(x_93, 1, x_90);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_91, x_94, x_8, x_3, x_4, x_5, x_6, x_90);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_95, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_95, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_102 = x_95;
} else {
 lean_dec_ref(x_95);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
}
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
}
}
case 3:
{
uint8_t x_104; 
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_14);
if (x_104 == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_14, 0);
lean_dec(x_105);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_14, 1);
lean_inc(x_106);
lean_dec(x_14);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_8);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
case 4:
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_14);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_14, 1);
x_110 = lean_ctor_get(x_14, 0);
lean_dec(x_110);
x_111 = lean_ctor_get(x_15, 1);
lean_inc(x_111);
lean_dec(x_15);
x_112 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(x_1, x_16);
if (lean_obj_tag(x_112) == 0)
{
lean_dec(x_111);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_free_object(x_14);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
lean_dec(x_112);
x_114 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_111, x_113, x_8, x_3, x_4, x_5, x_6, x_109);
if (lean_obj_tag(x_114) == 0)
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
return x_114;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_ctor_get(x_114, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_114);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
else
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_114);
if (x_119 == 0)
{
return x_114;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_114, 0);
x_121 = lean_ctor_get(x_114, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_114);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_14, 1);
lean_inc(x_123);
lean_dec(x_14);
x_124 = lean_ctor_get(x_15, 1);
lean_inc(x_124);
lean_dec(x_15);
x_125 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(x_1, x_16);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; 
lean_dec(x_124);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_8);
lean_ctor_set(x_126, 1, x_123);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_124, x_127, x_8, x_3, x_4, x_5, x_6, x_123);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_131 = x_128;
} else {
 lean_dec_ref(x_128);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_128, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_128, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_135 = x_128;
} else {
 lean_dec_ref(x_128);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
}
default: 
{
uint8_t x_137; 
x_137 = !lean_is_exclusive(x_14);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_ctor_get(x_14, 1);
x_139 = lean_ctor_get(x_14, 0);
lean_dec(x_139);
x_140 = lean_ctor_get(x_15, 1);
lean_inc(x_140);
lean_dec(x_15);
x_141 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(x_1, x_16);
if (lean_obj_tag(x_141) == 0)
{
lean_dec(x_140);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_142; lean_object* x_143; 
lean_free_object(x_14);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
lean_dec(x_141);
x_143 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_140, x_142, x_8, x_3, x_4, x_5, x_6, x_138);
if (lean_obj_tag(x_143) == 0)
{
uint8_t x_144; 
x_144 = !lean_is_exclusive(x_143);
if (x_144 == 0)
{
return x_143;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_143, 0);
x_146 = lean_ctor_get(x_143, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_143);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_143);
if (x_148 == 0)
{
return x_143;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_143, 0);
x_150 = lean_ctor_get(x_143, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_143);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_14, 1);
lean_inc(x_152);
lean_dec(x_14);
x_153 = lean_ctor_get(x_15, 1);
lean_inc(x_153);
lean_dec(x_15);
x_154 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(x_1, x_16);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; 
lean_dec(x_153);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_8);
lean_ctor_set(x_155, 1, x_152);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; 
x_156 = lean_ctor_get(x_154, 0);
lean_inc(x_156);
lean_dec(x_154);
x_157 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_153, x_156, x_8, x_3, x_4, x_5, x_6, x_152);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_160 = x_157;
} else {
 lean_dec_ref(x_157);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_157, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_157, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_164 = x_157;
} else {
 lean_dec_ref(x_157);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
}
}
}
}
else
{
uint8_t x_166; 
lean_dec(x_3);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_166 = !lean_is_exclusive(x_14);
if (x_166 == 0)
{
return x_14;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_14, 0);
x_168 = lean_ctor_get(x_14, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_14);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
else
{
uint8_t x_170; uint8_t x_171; uint8_t x_172; uint8_t x_173; uint8_t x_174; uint8_t x_175; uint8_t x_176; uint8_t x_177; uint8_t x_178; uint8_t x_179; lean_object* x_180; uint8_t x_181; lean_object* x_182; 
x_170 = lean_ctor_get_uint8(x_10, 0);
x_171 = lean_ctor_get_uint8(x_10, 1);
x_172 = lean_ctor_get_uint8(x_10, 2);
x_173 = lean_ctor_get_uint8(x_10, 3);
x_174 = lean_ctor_get_uint8(x_10, 4);
x_175 = lean_ctor_get_uint8(x_10, 6);
x_176 = lean_ctor_get_uint8(x_10, 7);
x_177 = lean_ctor_get_uint8(x_10, 8);
x_178 = lean_ctor_get_uint8(x_10, 9);
lean_dec(x_10);
x_179 = 2;
x_180 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_180, 0, x_170);
lean_ctor_set_uint8(x_180, 1, x_171);
lean_ctor_set_uint8(x_180, 2, x_172);
lean_ctor_set_uint8(x_180, 3, x_173);
lean_ctor_set_uint8(x_180, 4, x_174);
lean_ctor_set_uint8(x_180, 5, x_179);
lean_ctor_set_uint8(x_180, 6, x_175);
lean_ctor_set_uint8(x_180, 7, x_176);
lean_ctor_set_uint8(x_180, 8, x_177);
lean_ctor_set_uint8(x_180, 9, x_178);
lean_ctor_set(x_3, 0, x_180);
x_181 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_182 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_2, x_181, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
switch (lean_obj_tag(x_184)) {
case 0:
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_185 = lean_ctor_get(x_182, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_186 = x_182;
} else {
 lean_dec_ref(x_182);
 x_186 = lean_box(0);
}
x_187 = lean_ctor_get(x_183, 1);
lean_inc(x_187);
lean_dec(x_183);
x_188 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(x_1, x_184);
lean_dec(x_184);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; 
lean_dec(x_187);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_186)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_186;
}
lean_ctor_set(x_189, 0, x_8);
lean_ctor_set(x_189, 1, x_185);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_186);
x_190 = lean_ctor_get(x_188, 0);
lean_inc(x_190);
lean_dec(x_188);
x_191 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_187, x_190, x_8, x_3, x_4, x_5, x_6, x_185);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_194 = x_191;
} else {
 lean_dec_ref(x_191);
 x_194 = lean_box(0);
}
if (lean_is_scalar(x_194)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_194;
}
lean_ctor_set(x_195, 0, x_192);
lean_ctor_set(x_195, 1, x_193);
return x_195;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_196 = lean_ctor_get(x_191, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_191, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_198 = x_191;
} else {
 lean_dec_ref(x_191);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_197);
return x_199;
}
}
}
case 1:
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_200 = lean_ctor_get(x_182, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_201 = x_182;
} else {
 lean_dec_ref(x_182);
 x_201 = lean_box(0);
}
x_202 = lean_ctor_get(x_183, 1);
lean_inc(x_202);
lean_dec(x_183);
x_203 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(x_1, x_184);
lean_dec(x_184);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; 
lean_dec(x_202);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_201)) {
 x_204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_204 = x_201;
}
lean_ctor_set(x_204, 0, x_8);
lean_ctor_set(x_204, 1, x_200);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; 
lean_dec(x_201);
x_205 = lean_ctor_get(x_203, 0);
lean_inc(x_205);
lean_dec(x_203);
x_206 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_202, x_205, x_8, x_3, x_4, x_5, x_6, x_200);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_209 = x_206;
} else {
 lean_dec_ref(x_206);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(0, 2, 0);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_208);
return x_210;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_211 = lean_ctor_get(x_206, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_206, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_213 = x_206;
} else {
 lean_dec_ref(x_206);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
}
}
case 2:
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_215 = lean_ctor_get(x_182, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_216 = x_182;
} else {
 lean_dec_ref(x_182);
 x_216 = lean_box(0);
}
x_217 = lean_ctor_get(x_183, 1);
lean_inc(x_217);
lean_dec(x_183);
x_218 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(x_1, x_184);
lean_dec(x_184);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; 
lean_dec(x_217);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_216)) {
 x_219 = lean_alloc_ctor(0, 2, 0);
} else {
 x_219 = x_216;
}
lean_ctor_set(x_219, 0, x_8);
lean_ctor_set(x_219, 1, x_215);
return x_219;
}
else
{
lean_object* x_220; lean_object* x_221; 
lean_dec(x_216);
x_220 = lean_ctor_get(x_218, 0);
lean_inc(x_220);
lean_dec(x_218);
x_221 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_217, x_220, x_8, x_3, x_4, x_5, x_6, x_215);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_224 = x_221;
} else {
 lean_dec_ref(x_221);
 x_224 = lean_box(0);
}
if (lean_is_scalar(x_224)) {
 x_225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_225 = x_224;
}
lean_ctor_set(x_225, 0, x_222);
lean_ctor_set(x_225, 1, x_223);
return x_225;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_226 = lean_ctor_get(x_221, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_221, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_228 = x_221;
} else {
 lean_dec_ref(x_221);
 x_228 = lean_box(0);
}
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(1, 2, 0);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_226);
lean_ctor_set(x_229, 1, x_227);
return x_229;
}
}
}
case 3:
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_dec(x_183);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_230 = lean_ctor_get(x_182, 1);
lean_inc(x_230);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_231 = x_182;
} else {
 lean_dec_ref(x_182);
 x_231 = lean_box(0);
}
if (lean_is_scalar(x_231)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_231;
}
lean_ctor_set(x_232, 0, x_8);
lean_ctor_set(x_232, 1, x_230);
return x_232;
}
case 4:
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_233 = lean_ctor_get(x_182, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_234 = x_182;
} else {
 lean_dec_ref(x_182);
 x_234 = lean_box(0);
}
x_235 = lean_ctor_get(x_183, 1);
lean_inc(x_235);
lean_dec(x_183);
x_236 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(x_1, x_184);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; 
lean_dec(x_235);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_234)) {
 x_237 = lean_alloc_ctor(0, 2, 0);
} else {
 x_237 = x_234;
}
lean_ctor_set(x_237, 0, x_8);
lean_ctor_set(x_237, 1, x_233);
return x_237;
}
else
{
lean_object* x_238; lean_object* x_239; 
lean_dec(x_234);
x_238 = lean_ctor_get(x_236, 0);
lean_inc(x_238);
lean_dec(x_236);
x_239 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_235, x_238, x_8, x_3, x_4, x_5, x_6, x_233);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_242 = x_239;
} else {
 lean_dec_ref(x_239);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(0, 2, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_240);
lean_ctor_set(x_243, 1, x_241);
return x_243;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_244 = lean_ctor_get(x_239, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_239, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_246 = x_239;
} else {
 lean_dec_ref(x_239);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(1, 2, 0);
} else {
 x_247 = x_246;
}
lean_ctor_set(x_247, 0, x_244);
lean_ctor_set(x_247, 1, x_245);
return x_247;
}
}
}
default: 
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_248 = lean_ctor_get(x_182, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_249 = x_182;
} else {
 lean_dec_ref(x_182);
 x_249 = lean_box(0);
}
x_250 = lean_ctor_get(x_183, 1);
lean_inc(x_250);
lean_dec(x_183);
x_251 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(x_1, x_184);
if (lean_obj_tag(x_251) == 0)
{
lean_object* x_252; 
lean_dec(x_250);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_249)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_249;
}
lean_ctor_set(x_252, 0, x_8);
lean_ctor_set(x_252, 1, x_248);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; 
lean_dec(x_249);
x_253 = lean_ctor_get(x_251, 0);
lean_inc(x_253);
lean_dec(x_251);
x_254 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_250, x_253, x_8, x_3, x_4, x_5, x_6, x_248);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_257 = x_254;
} else {
 lean_dec_ref(x_254);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_259 = lean_ctor_get(x_254, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_254, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_261 = x_254;
} else {
 lean_dec_ref(x_254);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_261;
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
}
}
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_3);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_263 = lean_ctor_get(x_182, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_182, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_265 = x_182;
} else {
 lean_dec_ref(x_182);
 x_265 = lean_box(0);
}
if (lean_is_scalar(x_265)) {
 x_266 = lean_alloc_ctor(1, 2, 0);
} else {
 x_266 = x_265;
}
lean_ctor_set(x_266, 0, x_263);
lean_ctor_set(x_266, 1, x_264);
return x_266;
}
}
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; uint8_t x_272; uint8_t x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; uint8_t x_279; lean_object* x_280; uint8_t x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; 
x_267 = lean_ctor_get(x_3, 0);
x_268 = lean_ctor_get(x_3, 1);
x_269 = lean_ctor_get(x_3, 2);
x_270 = lean_ctor_get(x_3, 3);
lean_inc(x_270);
lean_inc(x_269);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_3);
x_271 = lean_ctor_get_uint8(x_267, 0);
x_272 = lean_ctor_get_uint8(x_267, 1);
x_273 = lean_ctor_get_uint8(x_267, 2);
x_274 = lean_ctor_get_uint8(x_267, 3);
x_275 = lean_ctor_get_uint8(x_267, 4);
x_276 = lean_ctor_get_uint8(x_267, 6);
x_277 = lean_ctor_get_uint8(x_267, 7);
x_278 = lean_ctor_get_uint8(x_267, 8);
x_279 = lean_ctor_get_uint8(x_267, 9);
if (lean_is_exclusive(x_267)) {
 x_280 = x_267;
} else {
 lean_dec_ref(x_267);
 x_280 = lean_box(0);
}
x_281 = 2;
if (lean_is_scalar(x_280)) {
 x_282 = lean_alloc_ctor(0, 0, 10);
} else {
 x_282 = x_280;
}
lean_ctor_set_uint8(x_282, 0, x_271);
lean_ctor_set_uint8(x_282, 1, x_272);
lean_ctor_set_uint8(x_282, 2, x_273);
lean_ctor_set_uint8(x_282, 3, x_274);
lean_ctor_set_uint8(x_282, 4, x_275);
lean_ctor_set_uint8(x_282, 5, x_281);
lean_ctor_set_uint8(x_282, 6, x_276);
lean_ctor_set_uint8(x_282, 7, x_277);
lean_ctor_set_uint8(x_282, 8, x_278);
lean_ctor_set_uint8(x_282, 9, x_279);
x_283 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_268);
lean_ctor_set(x_283, 2, x_269);
lean_ctor_set(x_283, 3, x_270);
x_284 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_283);
x_285 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_2, x_284, x_283, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_285) == 0)
{
lean_object* x_286; lean_object* x_287; 
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
switch (lean_obj_tag(x_287)) {
case 0:
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_288 = lean_ctor_get(x_285, 1);
lean_inc(x_288);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_289 = x_285;
} else {
 lean_dec_ref(x_285);
 x_289 = lean_box(0);
}
x_290 = lean_ctor_get(x_286, 1);
lean_inc(x_290);
lean_dec(x_286);
x_291 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(x_1, x_287);
lean_dec(x_287);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; 
lean_dec(x_290);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_289)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_289;
}
lean_ctor_set(x_292, 0, x_8);
lean_ctor_set(x_292, 1, x_288);
return x_292;
}
else
{
lean_object* x_293; lean_object* x_294; 
lean_dec(x_289);
x_293 = lean_ctor_get(x_291, 0);
lean_inc(x_293);
lean_dec(x_291);
x_294 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_290, x_293, x_8, x_283, x_4, x_5, x_6, x_288);
if (lean_obj_tag(x_294) == 0)
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 lean_ctor_release(x_294, 1);
 x_297 = x_294;
} else {
 lean_dec_ref(x_294);
 x_297 = lean_box(0);
}
if (lean_is_scalar(x_297)) {
 x_298 = lean_alloc_ctor(0, 2, 0);
} else {
 x_298 = x_297;
}
lean_ctor_set(x_298, 0, x_295);
lean_ctor_set(x_298, 1, x_296);
return x_298;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_299 = lean_ctor_get(x_294, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_294, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 lean_ctor_release(x_294, 1);
 x_301 = x_294;
} else {
 lean_dec_ref(x_294);
 x_301 = lean_box(0);
}
if (lean_is_scalar(x_301)) {
 x_302 = lean_alloc_ctor(1, 2, 0);
} else {
 x_302 = x_301;
}
lean_ctor_set(x_302, 0, x_299);
lean_ctor_set(x_302, 1, x_300);
return x_302;
}
}
}
case 1:
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_303 = lean_ctor_get(x_285, 1);
lean_inc(x_303);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_304 = x_285;
} else {
 lean_dec_ref(x_285);
 x_304 = lean_box(0);
}
x_305 = lean_ctor_get(x_286, 1);
lean_inc(x_305);
lean_dec(x_286);
x_306 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(x_1, x_287);
lean_dec(x_287);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; 
lean_dec(x_305);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_304)) {
 x_307 = lean_alloc_ctor(0, 2, 0);
} else {
 x_307 = x_304;
}
lean_ctor_set(x_307, 0, x_8);
lean_ctor_set(x_307, 1, x_303);
return x_307;
}
else
{
lean_object* x_308; lean_object* x_309; 
lean_dec(x_304);
x_308 = lean_ctor_get(x_306, 0);
lean_inc(x_308);
lean_dec(x_306);
x_309 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_305, x_308, x_8, x_283, x_4, x_5, x_6, x_303);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_312 = x_309;
} else {
 lean_dec_ref(x_309);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_311);
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_314 = lean_ctor_get(x_309, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_309, 1);
lean_inc(x_315);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_316 = x_309;
} else {
 lean_dec_ref(x_309);
 x_316 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_317 = lean_alloc_ctor(1, 2, 0);
} else {
 x_317 = x_316;
}
lean_ctor_set(x_317, 0, x_314);
lean_ctor_set(x_317, 1, x_315);
return x_317;
}
}
}
case 2:
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_318 = lean_ctor_get(x_285, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_319 = x_285;
} else {
 lean_dec_ref(x_285);
 x_319 = lean_box(0);
}
x_320 = lean_ctor_get(x_286, 1);
lean_inc(x_320);
lean_dec(x_286);
x_321 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(x_1, x_287);
lean_dec(x_287);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; 
lean_dec(x_320);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_319)) {
 x_322 = lean_alloc_ctor(0, 2, 0);
} else {
 x_322 = x_319;
}
lean_ctor_set(x_322, 0, x_8);
lean_ctor_set(x_322, 1, x_318);
return x_322;
}
else
{
lean_object* x_323; lean_object* x_324; 
lean_dec(x_319);
x_323 = lean_ctor_get(x_321, 0);
lean_inc(x_323);
lean_dec(x_321);
x_324 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_320, x_323, x_8, x_283, x_4, x_5, x_6, x_318);
if (lean_obj_tag(x_324) == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
if (lean_is_exclusive(x_324)) {
 lean_ctor_release(x_324, 0);
 lean_ctor_release(x_324, 1);
 x_327 = x_324;
} else {
 lean_dec_ref(x_324);
 x_327 = lean_box(0);
}
if (lean_is_scalar(x_327)) {
 x_328 = lean_alloc_ctor(0, 2, 0);
} else {
 x_328 = x_327;
}
lean_ctor_set(x_328, 0, x_325);
lean_ctor_set(x_328, 1, x_326);
return x_328;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_329 = lean_ctor_get(x_324, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_324, 1);
lean_inc(x_330);
if (lean_is_exclusive(x_324)) {
 lean_ctor_release(x_324, 0);
 lean_ctor_release(x_324, 1);
 x_331 = x_324;
} else {
 lean_dec_ref(x_324);
 x_331 = lean_box(0);
}
if (lean_is_scalar(x_331)) {
 x_332 = lean_alloc_ctor(1, 2, 0);
} else {
 x_332 = x_331;
}
lean_ctor_set(x_332, 0, x_329);
lean_ctor_set(x_332, 1, x_330);
return x_332;
}
}
}
case 3:
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
lean_dec(x_286);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_333 = lean_ctor_get(x_285, 1);
lean_inc(x_333);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_334 = x_285;
} else {
 lean_dec_ref(x_285);
 x_334 = lean_box(0);
}
if (lean_is_scalar(x_334)) {
 x_335 = lean_alloc_ctor(0, 2, 0);
} else {
 x_335 = x_334;
}
lean_ctor_set(x_335, 0, x_8);
lean_ctor_set(x_335, 1, x_333);
return x_335;
}
case 4:
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_336 = lean_ctor_get(x_285, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_337 = x_285;
} else {
 lean_dec_ref(x_285);
 x_337 = lean_box(0);
}
x_338 = lean_ctor_get(x_286, 1);
lean_inc(x_338);
lean_dec(x_286);
x_339 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(x_1, x_287);
if (lean_obj_tag(x_339) == 0)
{
lean_object* x_340; 
lean_dec(x_338);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_337)) {
 x_340 = lean_alloc_ctor(0, 2, 0);
} else {
 x_340 = x_337;
}
lean_ctor_set(x_340, 0, x_8);
lean_ctor_set(x_340, 1, x_336);
return x_340;
}
else
{
lean_object* x_341; lean_object* x_342; 
lean_dec(x_337);
x_341 = lean_ctor_get(x_339, 0);
lean_inc(x_341);
lean_dec(x_339);
x_342 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_338, x_341, x_8, x_283, x_4, x_5, x_6, x_336);
if (lean_obj_tag(x_342) == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_345 = x_342;
} else {
 lean_dec_ref(x_342);
 x_345 = lean_box(0);
}
if (lean_is_scalar(x_345)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_345;
}
lean_ctor_set(x_346, 0, x_343);
lean_ctor_set(x_346, 1, x_344);
return x_346;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_347 = lean_ctor_get(x_342, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_342, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_349 = x_342;
} else {
 lean_dec_ref(x_342);
 x_349 = lean_box(0);
}
if (lean_is_scalar(x_349)) {
 x_350 = lean_alloc_ctor(1, 2, 0);
} else {
 x_350 = x_349;
}
lean_ctor_set(x_350, 0, x_347);
lean_ctor_set(x_350, 1, x_348);
return x_350;
}
}
}
default: 
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_351 = lean_ctor_get(x_285, 1);
lean_inc(x_351);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_352 = x_285;
} else {
 lean_dec_ref(x_285);
 x_352 = lean_box(0);
}
x_353 = lean_ctor_get(x_286, 1);
lean_inc(x_353);
lean_dec(x_286);
x_354 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(x_1, x_287);
if (lean_obj_tag(x_354) == 0)
{
lean_object* x_355; 
lean_dec(x_353);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_352)) {
 x_355 = lean_alloc_ctor(0, 2, 0);
} else {
 x_355 = x_352;
}
lean_ctor_set(x_355, 0, x_8);
lean_ctor_set(x_355, 1, x_351);
return x_355;
}
else
{
lean_object* x_356; lean_object* x_357; 
lean_dec(x_352);
x_356 = lean_ctor_get(x_354, 0);
lean_inc(x_356);
lean_dec(x_354);
x_357 = l_Lean_Meta_DiscrTree_getMatch_process___rarg(x_353, x_356, x_8, x_283, x_4, x_5, x_6, x_351);
if (lean_obj_tag(x_357) == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_357, 1);
lean_inc(x_359);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 x_360 = x_357;
} else {
 lean_dec_ref(x_357);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(0, 2, 0);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_358);
lean_ctor_set(x_361, 1, x_359);
return x_361;
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_362 = lean_ctor_get(x_357, 0);
lean_inc(x_362);
x_363 = lean_ctor_get(x_357, 1);
lean_inc(x_363);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 x_364 = x_357;
} else {
 lean_dec_ref(x_357);
 x_364 = lean_box(0);
}
if (lean_is_scalar(x_364)) {
 x_365 = lean_alloc_ctor(1, 2, 0);
} else {
 x_365 = x_364;
}
lean_ctor_set(x_365, 0, x_362);
lean_ctor_set(x_365, 1, x_363);
return x_365;
}
}
}
}
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
lean_dec(x_283);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_366 = lean_ctor_get(x_285, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_285, 1);
lean_inc(x_367);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_368 = x_285;
} else {
 lean_dec_ref(x_285);
 x_368 = lean_box(0);
}
if (lean_is_scalar(x_368)) {
 x_369 = lean_alloc_ctor(1, 2, 0);
} else {
 x_369 = x_368;
}
lean_ctor_set(x_369, 0, x_366);
lean_ctor_set(x_369, 1, x_367);
return x_369;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getMatch___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__2___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__5___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__8___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__7___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__12___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__11___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__10___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getMatch___spec__15___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getMatch___spec__14___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getMatch___spec__13___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_3(x_3, x_8, x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_2(x_4, x_12, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify_process_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getUnify_process_match__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify_process_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_getUnify_process_match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_3 == x_4;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_uget(x_2, x_3);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_DiscrTree_Key_arity(x_13);
lean_dec(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_16 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_15, x_1, x_14, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_5 = x_17;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_10);
return x_26;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_6 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Meta_DiscrTree_Key_lt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_4 == x_5;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_array_uget(x_3, x_4);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_DiscrTree_Key_arity(x_14);
lean_dec(x_14);
x_17 = lean_nat_add(x_2, x_16);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_18 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_17, x_1, x_15, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_4 + x_21;
x_4 = x_22;
x_6 = x_19;
x_11 = x_20;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_6);
lean_ctor_set(x_28, 1, x_11);
return x_28;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify_process___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_1, x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = l_Array_isEmpty___rarg(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_14);
x_17 = lean_nat_dec_lt(x_10, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_16, x_16);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_9);
return x_20;
}
else
{
size_t x_21; size_t x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg(x_2, x_13, x_14, x_21, x_22, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_14);
lean_dec(x_13);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_9);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_27 = x_3;
} else {
 lean_dec_ref(x_3);
 x_27 = lean_box(0);
}
x_28 = l_Array_isEmpty___rarg(x_2);
if (x_28 == 0)
{
uint8_t x_29; 
lean_dec(x_25);
x_29 = l_Array_isEmpty___rarg(x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_30 = l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(x_2);
x_31 = lean_array_pop(x_2);
x_32 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_33 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_30, x_32, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
switch (lean_obj_tag(x_35)) {
case 0:
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_33);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_33, 1);
x_38 = lean_ctor_get(x_33, 0);
lean_dec(x_38);
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_40 = lean_ctor_get(x_34, 1);
x_41 = lean_ctor_get(x_34, 0);
lean_dec(x_41);
x_42 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_43 = l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_ctor_set(x_34, 1, x_42);
lean_ctor_set(x_34, 0, x_43);
x_44 = lean_array_get(x_34, x_26, x_10);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_box(3);
x_47 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_45, x_46);
lean_dec(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_44);
x_48 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_48);
if (lean_is_scalar(x_27)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_27;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_35);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_get_size(x_26);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_sub(x_51, x_52);
x_54 = lean_nat_dec_lt(x_10, x_51);
lean_dec(x_51);
if (x_54 == 0)
{
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_55; 
x_55 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg(x_26, x_50, x_10, x_53);
lean_dec(x_50);
lean_dec(x_26);
if (lean_obj_tag(x_55) == 0)
{
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_free_object(x_33);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Array_append___rarg(x_31, x_40);
lean_dec(x_40);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_1 = x_10;
x_2 = x_57;
x_3 = x_58;
x_9 = x_37;
goto _start;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_free_object(x_33);
x_60 = lean_ctor_get(x_44, 1);
lean_inc(x_60);
lean_dec(x_44);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_61 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_60, x_4, x_5, x_6, x_7, x_8, x_37);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
x_65 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_65);
if (lean_is_scalar(x_27)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_27;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_35);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_get_size(x_26);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_sub(x_68, x_69);
x_71 = lean_nat_dec_lt(x_10, x_68);
lean_dec(x_68);
if (x_71 == 0)
{
lean_dec(x_70);
lean_dec(x_67);
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_61;
}
else
{
lean_object* x_72; 
x_72 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(x_26, x_67, x_10, x_70);
lean_dec(x_67);
lean_dec(x_26);
if (lean_obj_tag(x_72) == 0)
{
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_61;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_free_object(x_61);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
x_74 = l_Array_append___rarg(x_31, x_40);
lean_dec(x_40);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_1 = x_10;
x_2 = x_74;
x_3 = x_75;
x_4 = x_63;
x_9 = x_64;
goto _start;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_77 = lean_ctor_get(x_61, 0);
x_78 = lean_ctor_get(x_61, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_61);
x_79 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_79);
if (lean_is_scalar(x_27)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_27;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_35);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_array_get_size(x_26);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_nat_sub(x_82, x_83);
x_85 = lean_nat_dec_lt(x_10, x_82);
lean_dec(x_82);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_84);
lean_dec(x_81);
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_77);
lean_ctor_set(x_86, 1, x_78);
return x_86;
}
else
{
lean_object* x_87; 
x_87 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(x_26, x_81, x_10, x_84);
lean_dec(x_81);
lean_dec(x_26);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_77);
lean_ctor_set(x_88, 1, x_78);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_87, 0);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Array_append___rarg(x_31, x_40);
lean_dec(x_40);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_1 = x_10;
x_2 = x_90;
x_3 = x_91;
x_4 = x_77;
x_9 = x_78;
goto _start;
}
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_40);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_93 = !lean_is_exclusive(x_61);
if (x_93 == 0)
{
return x_61;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_61, 0);
x_95 = lean_ctor_get(x_61, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_61);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_97 = lean_ctor_get(x_34, 1);
lean_inc(x_97);
lean_dec(x_34);
x_98 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_99 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
x_101 = lean_array_get(x_100, x_26, x_10);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_box(3);
x_104 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_102, x_103);
lean_dec(x_102);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
lean_dec(x_101);
x_105 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_105);
if (lean_is_scalar(x_27)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_27;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_35);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_array_get_size(x_26);
x_109 = lean_unsigned_to_nat(1u);
x_110 = lean_nat_sub(x_108, x_109);
x_111 = lean_nat_dec_lt(x_10, x_108);
lean_dec(x_108);
if (x_111 == 0)
{
lean_dec(x_110);
lean_dec(x_107);
lean_dec(x_97);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_112; 
x_112 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg(x_26, x_107, x_10, x_110);
lean_dec(x_107);
lean_dec(x_26);
if (lean_obj_tag(x_112) == 0)
{
lean_dec(x_97);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_free_object(x_33);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
lean_dec(x_112);
x_114 = l_Array_append___rarg(x_31, x_97);
lean_dec(x_97);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_1 = x_10;
x_2 = x_114;
x_3 = x_115;
x_9 = x_37;
goto _start;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; 
lean_free_object(x_33);
x_117 = lean_ctor_get(x_101, 1);
lean_inc(x_117);
lean_dec(x_101);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_118 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_117, x_4, x_5, x_6, x_7, x_8, x_37);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_121 = x_118;
} else {
 lean_dec_ref(x_118);
 x_121 = lean_box(0);
}
x_122 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_122);
if (lean_is_scalar(x_27)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_27;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_35);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_array_get_size(x_26);
x_126 = lean_unsigned_to_nat(1u);
x_127 = lean_nat_sub(x_125, x_126);
x_128 = lean_nat_dec_lt(x_10, x_125);
lean_dec(x_125);
if (x_128 == 0)
{
lean_object* x_129; 
lean_dec(x_127);
lean_dec(x_124);
lean_dec(x_97);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_121)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_121;
}
lean_ctor_set(x_129, 0, x_119);
lean_ctor_set(x_129, 1, x_120);
return x_129;
}
else
{
lean_object* x_130; 
x_130 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(x_26, x_124, x_10, x_127);
lean_dec(x_124);
lean_dec(x_26);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; 
lean_dec(x_97);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_121)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_121;
}
lean_ctor_set(x_131, 0, x_119);
lean_ctor_set(x_131, 1, x_120);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_121);
x_132 = lean_ctor_get(x_130, 0);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Array_append___rarg(x_31, x_97);
lean_dec(x_97);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_1 = x_10;
x_2 = x_133;
x_3 = x_134;
x_4 = x_119;
x_9 = x_120;
goto _start;
}
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_97);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_136 = lean_ctor_get(x_118, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_118, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_138 = x_118;
} else {
 lean_dec_ref(x_118);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_140 = lean_ctor_get(x_33, 1);
lean_inc(x_140);
lean_dec(x_33);
x_141 = lean_ctor_get(x_34, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_142 = x_34;
} else {
 lean_dec_ref(x_34);
 x_142 = lean_box(0);
}
x_143 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_144 = l_Lean_Meta_DiscrTree_instInhabitedKey;
if (lean_is_scalar(x_142)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_142;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
x_146 = lean_array_get(x_145, x_26, x_10);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_box(3);
x_149 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_147, x_148);
lean_dec(x_147);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
lean_dec(x_146);
x_150 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_150);
if (lean_is_scalar(x_27)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_27;
}
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_35);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_array_get_size(x_26);
x_154 = lean_unsigned_to_nat(1u);
x_155 = lean_nat_sub(x_153, x_154);
x_156 = lean_nat_dec_lt(x_10, x_153);
lean_dec(x_153);
if (x_156 == 0)
{
lean_object* x_157; 
lean_dec(x_155);
lean_dec(x_152);
lean_dec(x_141);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_4);
lean_ctor_set(x_157, 1, x_140);
return x_157;
}
else
{
lean_object* x_158; 
x_158 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg(x_26, x_152, x_10, x_155);
lean_dec(x_152);
lean_dec(x_26);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; 
lean_dec(x_141);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_4);
lean_ctor_set(x_159, 1, x_140);
return x_159;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_158, 0);
lean_inc(x_160);
lean_dec(x_158);
x_161 = l_Array_append___rarg(x_31, x_141);
lean_dec(x_141);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_1 = x_10;
x_2 = x_161;
x_3 = x_162;
x_9 = x_140;
goto _start;
}
}
}
else
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_146, 1);
lean_inc(x_164);
lean_dec(x_146);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_165 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_164, x_4, x_5, x_6, x_7, x_8, x_140);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_168 = x_165;
} else {
 lean_dec_ref(x_165);
 x_168 = lean_box(0);
}
x_169 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_169);
if (lean_is_scalar(x_27)) {
 x_170 = lean_alloc_ctor(0, 2, 0);
} else {
 x_170 = x_27;
}
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_35);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_array_get_size(x_26);
x_173 = lean_unsigned_to_nat(1u);
x_174 = lean_nat_sub(x_172, x_173);
x_175 = lean_nat_dec_lt(x_10, x_172);
lean_dec(x_172);
if (x_175 == 0)
{
lean_object* x_176; 
lean_dec(x_174);
lean_dec(x_171);
lean_dec(x_141);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_168)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_168;
}
lean_ctor_set(x_176, 0, x_166);
lean_ctor_set(x_176, 1, x_167);
return x_176;
}
else
{
lean_object* x_177; 
x_177 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(x_26, x_171, x_10, x_174);
lean_dec(x_171);
lean_dec(x_26);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; 
lean_dec(x_141);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_168)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_168;
}
lean_ctor_set(x_178, 0, x_166);
lean_ctor_set(x_178, 1, x_167);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_168);
x_179 = lean_ctor_get(x_177, 0);
lean_inc(x_179);
lean_dec(x_177);
x_180 = l_Array_append___rarg(x_31, x_141);
lean_dec(x_141);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
x_1 = x_10;
x_2 = x_180;
x_3 = x_181;
x_4 = x_166;
x_9 = x_167;
goto _start;
}
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_141);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_183 = lean_ctor_get(x_165, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_165, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_185 = x_165;
} else {
 lean_dec_ref(x_165);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
}
case 1:
{
uint8_t x_187; 
x_187 = !lean_is_exclusive(x_33);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_188 = lean_ctor_get(x_33, 1);
x_189 = lean_ctor_get(x_33, 0);
lean_dec(x_189);
x_190 = !lean_is_exclusive(x_34);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; 
x_191 = lean_ctor_get(x_34, 1);
x_192 = lean_ctor_get(x_34, 0);
lean_dec(x_192);
x_193 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_194 = l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_ctor_set(x_34, 1, x_193);
lean_ctor_set(x_34, 0, x_194);
x_195 = lean_array_get(x_34, x_26, x_10);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_box(3);
x_198 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_196, x_197);
lean_dec(x_196);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
lean_dec(x_195);
x_199 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_199);
if (lean_is_scalar(x_27)) {
 x_200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_200 = x_27;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_35);
lean_ctor_set(x_201, 1, x_200);
x_202 = lean_array_get_size(x_26);
x_203 = lean_unsigned_to_nat(1u);
x_204 = lean_nat_sub(x_202, x_203);
x_205 = lean_nat_dec_lt(x_10, x_202);
lean_dec(x_202);
if (x_205 == 0)
{
lean_dec(x_204);
lean_dec(x_201);
lean_dec(x_191);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_206; 
x_206 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg(x_26, x_201, x_10, x_204);
lean_dec(x_201);
lean_dec(x_26);
if (lean_obj_tag(x_206) == 0)
{
lean_dec(x_191);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_free_object(x_33);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
lean_dec(x_206);
x_208 = l_Array_append___rarg(x_31, x_191);
lean_dec(x_191);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
x_1 = x_10;
x_2 = x_208;
x_3 = x_209;
x_9 = x_188;
goto _start;
}
}
}
else
{
lean_object* x_211; lean_object* x_212; 
lean_free_object(x_33);
x_211 = lean_ctor_get(x_195, 1);
lean_inc(x_211);
lean_dec(x_195);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_212 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_211, x_4, x_5, x_6, x_7, x_8, x_188);
if (lean_obj_tag(x_212) == 0)
{
uint8_t x_213; 
x_213 = !lean_is_exclusive(x_212);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; 
x_214 = lean_ctor_get(x_212, 0);
x_215 = lean_ctor_get(x_212, 1);
x_216 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_216);
if (lean_is_scalar(x_27)) {
 x_217 = lean_alloc_ctor(0, 2, 0);
} else {
 x_217 = x_27;
}
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_35);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_array_get_size(x_26);
x_220 = lean_unsigned_to_nat(1u);
x_221 = lean_nat_sub(x_219, x_220);
x_222 = lean_nat_dec_lt(x_10, x_219);
lean_dec(x_219);
if (x_222 == 0)
{
lean_dec(x_221);
lean_dec(x_218);
lean_dec(x_191);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_212;
}
else
{
lean_object* x_223; 
x_223 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(x_26, x_218, x_10, x_221);
lean_dec(x_218);
lean_dec(x_26);
if (lean_obj_tag(x_223) == 0)
{
lean_dec(x_191);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_212;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_free_object(x_212);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
lean_dec(x_223);
x_225 = l_Array_append___rarg(x_31, x_191);
lean_dec(x_191);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_1 = x_10;
x_2 = x_225;
x_3 = x_226;
x_4 = x_214;
x_9 = x_215;
goto _start;
}
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; 
x_228 = lean_ctor_get(x_212, 0);
x_229 = lean_ctor_get(x_212, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_212);
x_230 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_230);
if (lean_is_scalar(x_27)) {
 x_231 = lean_alloc_ctor(0, 2, 0);
} else {
 x_231 = x_27;
}
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_230);
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_35);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_array_get_size(x_26);
x_234 = lean_unsigned_to_nat(1u);
x_235 = lean_nat_sub(x_233, x_234);
x_236 = lean_nat_dec_lt(x_10, x_233);
lean_dec(x_233);
if (x_236 == 0)
{
lean_object* x_237; 
lean_dec(x_235);
lean_dec(x_232);
lean_dec(x_191);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_228);
lean_ctor_set(x_237, 1, x_229);
return x_237;
}
else
{
lean_object* x_238; 
x_238 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(x_26, x_232, x_10, x_235);
lean_dec(x_232);
lean_dec(x_26);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; 
lean_dec(x_191);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_228);
lean_ctor_set(x_239, 1, x_229);
return x_239;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_238, 0);
lean_inc(x_240);
lean_dec(x_238);
x_241 = l_Array_append___rarg(x_31, x_191);
lean_dec(x_191);
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
lean_dec(x_240);
x_1 = x_10;
x_2 = x_241;
x_3 = x_242;
x_4 = x_228;
x_9 = x_229;
goto _start;
}
}
}
}
else
{
uint8_t x_244; 
lean_dec(x_191);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_244 = !lean_is_exclusive(x_212);
if (x_244 == 0)
{
return x_212;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_212, 0);
x_246 = lean_ctor_get(x_212, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_212);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
}
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; 
x_248 = lean_ctor_get(x_34, 1);
lean_inc(x_248);
lean_dec(x_34);
x_249 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_250 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_249);
x_252 = lean_array_get(x_251, x_26, x_10);
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
x_254 = lean_box(3);
x_255 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_253, x_254);
lean_dec(x_253);
if (x_255 == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; uint8_t x_262; 
lean_dec(x_252);
x_256 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_256);
if (lean_is_scalar(x_27)) {
 x_257 = lean_alloc_ctor(0, 2, 0);
} else {
 x_257 = x_27;
}
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_256);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_35);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_array_get_size(x_26);
x_260 = lean_unsigned_to_nat(1u);
x_261 = lean_nat_sub(x_259, x_260);
x_262 = lean_nat_dec_lt(x_10, x_259);
lean_dec(x_259);
if (x_262 == 0)
{
lean_dec(x_261);
lean_dec(x_258);
lean_dec(x_248);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_263; 
x_263 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg(x_26, x_258, x_10, x_261);
lean_dec(x_258);
lean_dec(x_26);
if (lean_obj_tag(x_263) == 0)
{
lean_dec(x_248);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_free_object(x_33);
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
lean_dec(x_263);
x_265 = l_Array_append___rarg(x_31, x_248);
lean_dec(x_248);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_1 = x_10;
x_2 = x_265;
x_3 = x_266;
x_9 = x_188;
goto _start;
}
}
}
else
{
lean_object* x_268; lean_object* x_269; 
lean_free_object(x_33);
x_268 = lean_ctor_get(x_252, 1);
lean_inc(x_268);
lean_dec(x_252);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_269 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_268, x_4, x_5, x_6, x_7, x_8, x_188);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; uint8_t x_279; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 x_272 = x_269;
} else {
 lean_dec_ref(x_269);
 x_272 = lean_box(0);
}
x_273 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_273);
if (lean_is_scalar(x_27)) {
 x_274 = lean_alloc_ctor(0, 2, 0);
} else {
 x_274 = x_27;
}
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_35);
lean_ctor_set(x_275, 1, x_274);
x_276 = lean_array_get_size(x_26);
x_277 = lean_unsigned_to_nat(1u);
x_278 = lean_nat_sub(x_276, x_277);
x_279 = lean_nat_dec_lt(x_10, x_276);
lean_dec(x_276);
if (x_279 == 0)
{
lean_object* x_280; 
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_248);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_272)) {
 x_280 = lean_alloc_ctor(0, 2, 0);
} else {
 x_280 = x_272;
}
lean_ctor_set(x_280, 0, x_270);
lean_ctor_set(x_280, 1, x_271);
return x_280;
}
else
{
lean_object* x_281; 
x_281 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(x_26, x_275, x_10, x_278);
lean_dec(x_275);
lean_dec(x_26);
if (lean_obj_tag(x_281) == 0)
{
lean_object* x_282; 
lean_dec(x_248);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_272)) {
 x_282 = lean_alloc_ctor(0, 2, 0);
} else {
 x_282 = x_272;
}
lean_ctor_set(x_282, 0, x_270);
lean_ctor_set(x_282, 1, x_271);
return x_282;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_272);
x_283 = lean_ctor_get(x_281, 0);
lean_inc(x_283);
lean_dec(x_281);
x_284 = l_Array_append___rarg(x_31, x_248);
lean_dec(x_248);
x_285 = lean_ctor_get(x_283, 1);
lean_inc(x_285);
lean_dec(x_283);
x_1 = x_10;
x_2 = x_284;
x_3 = x_285;
x_4 = x_270;
x_9 = x_271;
goto _start;
}
}
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_248);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_287 = lean_ctor_get(x_269, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_269, 1);
lean_inc(x_288);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 x_289 = x_269;
} else {
 lean_dec_ref(x_269);
 x_289 = lean_box(0);
}
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 2, 0);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_287);
lean_ctor_set(x_290, 1, x_288);
return x_290;
}
}
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_300; 
x_291 = lean_ctor_get(x_33, 1);
lean_inc(x_291);
lean_dec(x_33);
x_292 = lean_ctor_get(x_34, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_293 = x_34;
} else {
 lean_dec_ref(x_34);
 x_293 = lean_box(0);
}
x_294 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_295 = l_Lean_Meta_DiscrTree_instInhabitedKey;
if (lean_is_scalar(x_293)) {
 x_296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_296 = x_293;
}
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_294);
x_297 = lean_array_get(x_296, x_26, x_10);
x_298 = lean_ctor_get(x_297, 0);
lean_inc(x_298);
x_299 = lean_box(3);
x_300 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_298, x_299);
lean_dec(x_298);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; uint8_t x_307; 
lean_dec(x_297);
x_301 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_301);
if (lean_is_scalar(x_27)) {
 x_302 = lean_alloc_ctor(0, 2, 0);
} else {
 x_302 = x_27;
}
lean_ctor_set(x_302, 0, x_301);
lean_ctor_set(x_302, 1, x_301);
x_303 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_303, 0, x_35);
lean_ctor_set(x_303, 1, x_302);
x_304 = lean_array_get_size(x_26);
x_305 = lean_unsigned_to_nat(1u);
x_306 = lean_nat_sub(x_304, x_305);
x_307 = lean_nat_dec_lt(x_10, x_304);
lean_dec(x_304);
if (x_307 == 0)
{
lean_object* x_308; 
lean_dec(x_306);
lean_dec(x_303);
lean_dec(x_292);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_308 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_308, 0, x_4);
lean_ctor_set(x_308, 1, x_291);
return x_308;
}
else
{
lean_object* x_309; 
x_309 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg(x_26, x_303, x_10, x_306);
lean_dec(x_303);
lean_dec(x_26);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; 
lean_dec(x_292);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_4);
lean_ctor_set(x_310, 1, x_291);
return x_310;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_311 = lean_ctor_get(x_309, 0);
lean_inc(x_311);
lean_dec(x_309);
x_312 = l_Array_append___rarg(x_31, x_292);
lean_dec(x_292);
x_313 = lean_ctor_get(x_311, 1);
lean_inc(x_313);
lean_dec(x_311);
x_1 = x_10;
x_2 = x_312;
x_3 = x_313;
x_9 = x_291;
goto _start;
}
}
}
else
{
lean_object* x_315; lean_object* x_316; 
x_315 = lean_ctor_get(x_297, 1);
lean_inc(x_315);
lean_dec(x_297);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_316 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_315, x_4, x_5, x_6, x_7, x_8, x_291);
if (lean_obj_tag(x_316) == 0)
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_316, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_316)) {
 lean_ctor_release(x_316, 0);
 lean_ctor_release(x_316, 1);
 x_319 = x_316;
} else {
 lean_dec_ref(x_316);
 x_319 = lean_box(0);
}
x_320 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_320);
if (lean_is_scalar(x_27)) {
 x_321 = lean_alloc_ctor(0, 2, 0);
} else {
 x_321 = x_27;
}
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_320);
x_322 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_322, 0, x_35);
lean_ctor_set(x_322, 1, x_321);
x_323 = lean_array_get_size(x_26);
x_324 = lean_unsigned_to_nat(1u);
x_325 = lean_nat_sub(x_323, x_324);
x_326 = lean_nat_dec_lt(x_10, x_323);
lean_dec(x_323);
if (x_326 == 0)
{
lean_object* x_327; 
lean_dec(x_325);
lean_dec(x_322);
lean_dec(x_292);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_319)) {
 x_327 = lean_alloc_ctor(0, 2, 0);
} else {
 x_327 = x_319;
}
lean_ctor_set(x_327, 0, x_317);
lean_ctor_set(x_327, 1, x_318);
return x_327;
}
else
{
lean_object* x_328; 
x_328 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(x_26, x_322, x_10, x_325);
lean_dec(x_322);
lean_dec(x_26);
if (lean_obj_tag(x_328) == 0)
{
lean_object* x_329; 
lean_dec(x_292);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_319)) {
 x_329 = lean_alloc_ctor(0, 2, 0);
} else {
 x_329 = x_319;
}
lean_ctor_set(x_329, 0, x_317);
lean_ctor_set(x_329, 1, x_318);
return x_329;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
lean_dec(x_319);
x_330 = lean_ctor_get(x_328, 0);
lean_inc(x_330);
lean_dec(x_328);
x_331 = l_Array_append___rarg(x_31, x_292);
lean_dec(x_292);
x_332 = lean_ctor_get(x_330, 1);
lean_inc(x_332);
lean_dec(x_330);
x_1 = x_10;
x_2 = x_331;
x_3 = x_332;
x_4 = x_317;
x_9 = x_318;
goto _start;
}
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_292);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_334 = lean_ctor_get(x_316, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_316, 1);
lean_inc(x_335);
if (lean_is_exclusive(x_316)) {
 lean_ctor_release(x_316, 0);
 lean_ctor_release(x_316, 1);
 x_336 = x_316;
} else {
 lean_dec_ref(x_316);
 x_336 = lean_box(0);
}
if (lean_is_scalar(x_336)) {
 x_337 = lean_alloc_ctor(1, 2, 0);
} else {
 x_337 = x_336;
}
lean_ctor_set(x_337, 0, x_334);
lean_ctor_set(x_337, 1, x_335);
return x_337;
}
}
}
}
case 2:
{
uint8_t x_338; 
x_338 = !lean_is_exclusive(x_33);
if (x_338 == 0)
{
lean_object* x_339; lean_object* x_340; uint8_t x_341; 
x_339 = lean_ctor_get(x_33, 1);
x_340 = lean_ctor_get(x_33, 0);
lean_dec(x_340);
x_341 = !lean_is_exclusive(x_34);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; uint8_t x_349; 
x_342 = lean_ctor_get(x_34, 1);
x_343 = lean_ctor_get(x_34, 0);
lean_dec(x_343);
x_344 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_345 = l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_ctor_set(x_34, 1, x_344);
lean_ctor_set(x_34, 0, x_345);
x_346 = lean_array_get(x_34, x_26, x_10);
x_347 = lean_ctor_get(x_346, 0);
lean_inc(x_347);
x_348 = lean_box(3);
x_349 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_347, x_348);
lean_dec(x_347);
if (x_349 == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; uint8_t x_356; 
lean_dec(x_346);
x_350 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_350);
if (lean_is_scalar(x_27)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_27;
}
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_352, 0, x_35);
lean_ctor_set(x_352, 1, x_351);
x_353 = lean_array_get_size(x_26);
x_354 = lean_unsigned_to_nat(1u);
x_355 = lean_nat_sub(x_353, x_354);
x_356 = lean_nat_dec_lt(x_10, x_353);
lean_dec(x_353);
if (x_356 == 0)
{
lean_dec(x_355);
lean_dec(x_352);
lean_dec(x_342);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_357; 
x_357 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg(x_26, x_352, x_10, x_355);
lean_dec(x_352);
lean_dec(x_26);
if (lean_obj_tag(x_357) == 0)
{
lean_dec(x_342);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_free_object(x_33);
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
lean_dec(x_357);
x_359 = l_Array_append___rarg(x_31, x_342);
lean_dec(x_342);
x_360 = lean_ctor_get(x_358, 1);
lean_inc(x_360);
lean_dec(x_358);
x_1 = x_10;
x_2 = x_359;
x_3 = x_360;
x_9 = x_339;
goto _start;
}
}
}
else
{
lean_object* x_362; lean_object* x_363; 
lean_free_object(x_33);
x_362 = lean_ctor_get(x_346, 1);
lean_inc(x_362);
lean_dec(x_346);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_363 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_362, x_4, x_5, x_6, x_7, x_8, x_339);
if (lean_obj_tag(x_363) == 0)
{
uint8_t x_364; 
x_364 = !lean_is_exclusive(x_363);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; uint8_t x_373; 
x_365 = lean_ctor_get(x_363, 0);
x_366 = lean_ctor_get(x_363, 1);
x_367 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_367);
if (lean_is_scalar(x_27)) {
 x_368 = lean_alloc_ctor(0, 2, 0);
} else {
 x_368 = x_27;
}
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_367);
x_369 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_369, 0, x_35);
lean_ctor_set(x_369, 1, x_368);
x_370 = lean_array_get_size(x_26);
x_371 = lean_unsigned_to_nat(1u);
x_372 = lean_nat_sub(x_370, x_371);
x_373 = lean_nat_dec_lt(x_10, x_370);
lean_dec(x_370);
if (x_373 == 0)
{
lean_dec(x_372);
lean_dec(x_369);
lean_dec(x_342);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_363;
}
else
{
lean_object* x_374; 
x_374 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(x_26, x_369, x_10, x_372);
lean_dec(x_369);
lean_dec(x_26);
if (lean_obj_tag(x_374) == 0)
{
lean_dec(x_342);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_363;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; 
lean_free_object(x_363);
x_375 = lean_ctor_get(x_374, 0);
lean_inc(x_375);
lean_dec(x_374);
x_376 = l_Array_append___rarg(x_31, x_342);
lean_dec(x_342);
x_377 = lean_ctor_get(x_375, 1);
lean_inc(x_377);
lean_dec(x_375);
x_1 = x_10;
x_2 = x_376;
x_3 = x_377;
x_4 = x_365;
x_9 = x_366;
goto _start;
}
}
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; 
x_379 = lean_ctor_get(x_363, 0);
x_380 = lean_ctor_get(x_363, 1);
lean_inc(x_380);
lean_inc(x_379);
lean_dec(x_363);
x_381 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_381);
if (lean_is_scalar(x_27)) {
 x_382 = lean_alloc_ctor(0, 2, 0);
} else {
 x_382 = x_27;
}
lean_ctor_set(x_382, 0, x_381);
lean_ctor_set(x_382, 1, x_381);
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_35);
lean_ctor_set(x_383, 1, x_382);
x_384 = lean_array_get_size(x_26);
x_385 = lean_unsigned_to_nat(1u);
x_386 = lean_nat_sub(x_384, x_385);
x_387 = lean_nat_dec_lt(x_10, x_384);
lean_dec(x_384);
if (x_387 == 0)
{
lean_object* x_388; 
lean_dec(x_386);
lean_dec(x_383);
lean_dec(x_342);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_388 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_388, 0, x_379);
lean_ctor_set(x_388, 1, x_380);
return x_388;
}
else
{
lean_object* x_389; 
x_389 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(x_26, x_383, x_10, x_386);
lean_dec(x_383);
lean_dec(x_26);
if (lean_obj_tag(x_389) == 0)
{
lean_object* x_390; 
lean_dec(x_342);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_379);
lean_ctor_set(x_390, 1, x_380);
return x_390;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_391 = lean_ctor_get(x_389, 0);
lean_inc(x_391);
lean_dec(x_389);
x_392 = l_Array_append___rarg(x_31, x_342);
lean_dec(x_342);
x_393 = lean_ctor_get(x_391, 1);
lean_inc(x_393);
lean_dec(x_391);
x_1 = x_10;
x_2 = x_392;
x_3 = x_393;
x_4 = x_379;
x_9 = x_380;
goto _start;
}
}
}
}
else
{
uint8_t x_395; 
lean_dec(x_342);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_395 = !lean_is_exclusive(x_363);
if (x_395 == 0)
{
return x_363;
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_396 = lean_ctor_get(x_363, 0);
x_397 = lean_ctor_get(x_363, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_363);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_397);
return x_398;
}
}
}
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; uint8_t x_406; 
x_399 = lean_ctor_get(x_34, 1);
lean_inc(x_399);
lean_dec(x_34);
x_400 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_401 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_402 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_400);
x_403 = lean_array_get(x_402, x_26, x_10);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
x_405 = lean_box(3);
x_406 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_404, x_405);
lean_dec(x_404);
if (x_406 == 0)
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; uint8_t x_413; 
lean_dec(x_403);
x_407 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_407);
if (lean_is_scalar(x_27)) {
 x_408 = lean_alloc_ctor(0, 2, 0);
} else {
 x_408 = x_27;
}
lean_ctor_set(x_408, 0, x_407);
lean_ctor_set(x_408, 1, x_407);
x_409 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_409, 0, x_35);
lean_ctor_set(x_409, 1, x_408);
x_410 = lean_array_get_size(x_26);
x_411 = lean_unsigned_to_nat(1u);
x_412 = lean_nat_sub(x_410, x_411);
x_413 = lean_nat_dec_lt(x_10, x_410);
lean_dec(x_410);
if (x_413 == 0)
{
lean_dec(x_412);
lean_dec(x_409);
lean_dec(x_399);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_414; 
x_414 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg(x_26, x_409, x_10, x_412);
lean_dec(x_409);
lean_dec(x_26);
if (lean_obj_tag(x_414) == 0)
{
lean_dec(x_399);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_free_object(x_33);
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
lean_dec(x_414);
x_416 = l_Array_append___rarg(x_31, x_399);
lean_dec(x_399);
x_417 = lean_ctor_get(x_415, 1);
lean_inc(x_417);
lean_dec(x_415);
x_1 = x_10;
x_2 = x_416;
x_3 = x_417;
x_9 = x_339;
goto _start;
}
}
}
else
{
lean_object* x_419; lean_object* x_420; 
lean_free_object(x_33);
x_419 = lean_ctor_get(x_403, 1);
lean_inc(x_419);
lean_dec(x_403);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_420 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_419, x_4, x_5, x_6, x_7, x_8, x_339);
if (lean_obj_tag(x_420) == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; uint8_t x_430; 
x_421 = lean_ctor_get(x_420, 0);
lean_inc(x_421);
x_422 = lean_ctor_get(x_420, 1);
lean_inc(x_422);
if (lean_is_exclusive(x_420)) {
 lean_ctor_release(x_420, 0);
 lean_ctor_release(x_420, 1);
 x_423 = x_420;
} else {
 lean_dec_ref(x_420);
 x_423 = lean_box(0);
}
x_424 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_424);
if (lean_is_scalar(x_27)) {
 x_425 = lean_alloc_ctor(0, 2, 0);
} else {
 x_425 = x_27;
}
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_424);
x_426 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_426, 0, x_35);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_array_get_size(x_26);
x_428 = lean_unsigned_to_nat(1u);
x_429 = lean_nat_sub(x_427, x_428);
x_430 = lean_nat_dec_lt(x_10, x_427);
lean_dec(x_427);
if (x_430 == 0)
{
lean_object* x_431; 
lean_dec(x_429);
lean_dec(x_426);
lean_dec(x_399);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_423)) {
 x_431 = lean_alloc_ctor(0, 2, 0);
} else {
 x_431 = x_423;
}
lean_ctor_set(x_431, 0, x_421);
lean_ctor_set(x_431, 1, x_422);
return x_431;
}
else
{
lean_object* x_432; 
x_432 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(x_26, x_426, x_10, x_429);
lean_dec(x_426);
lean_dec(x_26);
if (lean_obj_tag(x_432) == 0)
{
lean_object* x_433; 
lean_dec(x_399);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_423)) {
 x_433 = lean_alloc_ctor(0, 2, 0);
} else {
 x_433 = x_423;
}
lean_ctor_set(x_433, 0, x_421);
lean_ctor_set(x_433, 1, x_422);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; 
lean_dec(x_423);
x_434 = lean_ctor_get(x_432, 0);
lean_inc(x_434);
lean_dec(x_432);
x_435 = l_Array_append___rarg(x_31, x_399);
lean_dec(x_399);
x_436 = lean_ctor_get(x_434, 1);
lean_inc(x_436);
lean_dec(x_434);
x_1 = x_10;
x_2 = x_435;
x_3 = x_436;
x_4 = x_421;
x_9 = x_422;
goto _start;
}
}
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
lean_dec(x_399);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_438 = lean_ctor_get(x_420, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_420, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_420)) {
 lean_ctor_release(x_420, 0);
 lean_ctor_release(x_420, 1);
 x_440 = x_420;
} else {
 lean_dec_ref(x_420);
 x_440 = lean_box(0);
}
if (lean_is_scalar(x_440)) {
 x_441 = lean_alloc_ctor(1, 2, 0);
} else {
 x_441 = x_440;
}
lean_ctor_set(x_441, 0, x_438);
lean_ctor_set(x_441, 1, x_439);
return x_441;
}
}
}
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; uint8_t x_451; 
x_442 = lean_ctor_get(x_33, 1);
lean_inc(x_442);
lean_dec(x_33);
x_443 = lean_ctor_get(x_34, 1);
lean_inc(x_443);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_444 = x_34;
} else {
 lean_dec_ref(x_34);
 x_444 = lean_box(0);
}
x_445 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_446 = l_Lean_Meta_DiscrTree_instInhabitedKey;
if (lean_is_scalar(x_444)) {
 x_447 = lean_alloc_ctor(0, 2, 0);
} else {
 x_447 = x_444;
}
lean_ctor_set(x_447, 0, x_446);
lean_ctor_set(x_447, 1, x_445);
x_448 = lean_array_get(x_447, x_26, x_10);
x_449 = lean_ctor_get(x_448, 0);
lean_inc(x_449);
x_450 = lean_box(3);
x_451 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_449, x_450);
lean_dec(x_449);
if (x_451 == 0)
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; uint8_t x_458; 
lean_dec(x_448);
x_452 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_452);
if (lean_is_scalar(x_27)) {
 x_453 = lean_alloc_ctor(0, 2, 0);
} else {
 x_453 = x_27;
}
lean_ctor_set(x_453, 0, x_452);
lean_ctor_set(x_453, 1, x_452);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_35);
lean_ctor_set(x_454, 1, x_453);
x_455 = lean_array_get_size(x_26);
x_456 = lean_unsigned_to_nat(1u);
x_457 = lean_nat_sub(x_455, x_456);
x_458 = lean_nat_dec_lt(x_10, x_455);
lean_dec(x_455);
if (x_458 == 0)
{
lean_object* x_459; 
lean_dec(x_457);
lean_dec(x_454);
lean_dec(x_443);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_459 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_459, 0, x_4);
lean_ctor_set(x_459, 1, x_442);
return x_459;
}
else
{
lean_object* x_460; 
x_460 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg(x_26, x_454, x_10, x_457);
lean_dec(x_454);
lean_dec(x_26);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; 
lean_dec(x_443);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_461 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_461, 0, x_4);
lean_ctor_set(x_461, 1, x_442);
return x_461;
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; 
x_462 = lean_ctor_get(x_460, 0);
lean_inc(x_462);
lean_dec(x_460);
x_463 = l_Array_append___rarg(x_31, x_443);
lean_dec(x_443);
x_464 = lean_ctor_get(x_462, 1);
lean_inc(x_464);
lean_dec(x_462);
x_1 = x_10;
x_2 = x_463;
x_3 = x_464;
x_9 = x_442;
goto _start;
}
}
}
else
{
lean_object* x_466; lean_object* x_467; 
x_466 = lean_ctor_get(x_448, 1);
lean_inc(x_466);
lean_dec(x_448);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_467 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_466, x_4, x_5, x_6, x_7, x_8, x_442);
if (lean_obj_tag(x_467) == 0)
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; uint8_t x_477; 
x_468 = lean_ctor_get(x_467, 0);
lean_inc(x_468);
x_469 = lean_ctor_get(x_467, 1);
lean_inc(x_469);
if (lean_is_exclusive(x_467)) {
 lean_ctor_release(x_467, 0);
 lean_ctor_release(x_467, 1);
 x_470 = x_467;
} else {
 lean_dec_ref(x_467);
 x_470 = lean_box(0);
}
x_471 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_471);
if (lean_is_scalar(x_27)) {
 x_472 = lean_alloc_ctor(0, 2, 0);
} else {
 x_472 = x_27;
}
lean_ctor_set(x_472, 0, x_471);
lean_ctor_set(x_472, 1, x_471);
x_473 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_473, 0, x_35);
lean_ctor_set(x_473, 1, x_472);
x_474 = lean_array_get_size(x_26);
x_475 = lean_unsigned_to_nat(1u);
x_476 = lean_nat_sub(x_474, x_475);
x_477 = lean_nat_dec_lt(x_10, x_474);
lean_dec(x_474);
if (x_477 == 0)
{
lean_object* x_478; 
lean_dec(x_476);
lean_dec(x_473);
lean_dec(x_443);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_470)) {
 x_478 = lean_alloc_ctor(0, 2, 0);
} else {
 x_478 = x_470;
}
lean_ctor_set(x_478, 0, x_468);
lean_ctor_set(x_478, 1, x_469);
return x_478;
}
else
{
lean_object* x_479; 
x_479 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(x_26, x_473, x_10, x_476);
lean_dec(x_473);
lean_dec(x_26);
if (lean_obj_tag(x_479) == 0)
{
lean_object* x_480; 
lean_dec(x_443);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_470)) {
 x_480 = lean_alloc_ctor(0, 2, 0);
} else {
 x_480 = x_470;
}
lean_ctor_set(x_480, 0, x_468);
lean_ctor_set(x_480, 1, x_469);
return x_480;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
lean_dec(x_470);
x_481 = lean_ctor_get(x_479, 0);
lean_inc(x_481);
lean_dec(x_479);
x_482 = l_Array_append___rarg(x_31, x_443);
lean_dec(x_443);
x_483 = lean_ctor_get(x_481, 1);
lean_inc(x_483);
lean_dec(x_481);
x_1 = x_10;
x_2 = x_482;
x_3 = x_483;
x_4 = x_468;
x_9 = x_469;
goto _start;
}
}
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; 
lean_dec(x_443);
lean_dec(x_35);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_485 = lean_ctor_get(x_467, 0);
lean_inc(x_485);
x_486 = lean_ctor_get(x_467, 1);
lean_inc(x_486);
if (lean_is_exclusive(x_467)) {
 lean_ctor_release(x_467, 0);
 lean_ctor_release(x_467, 1);
 x_487 = x_467;
} else {
 lean_dec_ref(x_467);
 x_487 = lean_box(0);
}
if (lean_is_scalar(x_487)) {
 x_488 = lean_alloc_ctor(1, 2, 0);
} else {
 x_488 = x_487;
}
lean_ctor_set(x_488, 0, x_485);
lean_ctor_set(x_488, 1, x_486);
return x_488;
}
}
}
}
case 3:
{
uint8_t x_489; 
lean_dec(x_34);
lean_dec(x_27);
x_489 = !lean_is_exclusive(x_33);
if (x_489 == 0)
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; uint8_t x_493; 
x_490 = lean_ctor_get(x_33, 1);
x_491 = lean_ctor_get(x_33, 0);
lean_dec(x_491);
x_492 = lean_array_get_size(x_26);
x_493 = lean_nat_dec_lt(x_10, x_492);
if (x_493 == 0)
{
lean_dec(x_492);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
uint8_t x_494; 
x_494 = lean_nat_dec_le(x_492, x_492);
if (x_494 == 0)
{
lean_dec(x_492);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
size_t x_495; size_t x_496; lean_object* x_497; 
lean_free_object(x_33);
x_495 = 0;
x_496 = lean_usize_of_nat(x_492);
lean_dec(x_492);
x_497 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg(x_31, x_26, x_495, x_496, x_4, x_5, x_6, x_7, x_8, x_490);
lean_dec(x_26);
return x_497;
}
}
}
else
{
lean_object* x_498; lean_object* x_499; uint8_t x_500; 
x_498 = lean_ctor_get(x_33, 1);
lean_inc(x_498);
lean_dec(x_33);
x_499 = lean_array_get_size(x_26);
x_500 = lean_nat_dec_lt(x_10, x_499);
if (x_500 == 0)
{
lean_object* x_501; 
lean_dec(x_499);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_501 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_501, 0, x_4);
lean_ctor_set(x_501, 1, x_498);
return x_501;
}
else
{
uint8_t x_502; 
x_502 = lean_nat_dec_le(x_499, x_499);
if (x_502 == 0)
{
lean_object* x_503; 
lean_dec(x_499);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_503 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_503, 0, x_4);
lean_ctor_set(x_503, 1, x_498);
return x_503;
}
else
{
size_t x_504; size_t x_505; lean_object* x_506; 
x_504 = 0;
x_505 = lean_usize_of_nat(x_499);
lean_dec(x_499);
x_506 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg(x_31, x_26, x_504, x_505, x_4, x_5, x_6, x_7, x_8, x_498);
lean_dec(x_26);
return x_506;
}
}
}
}
case 4:
{
uint8_t x_507; 
x_507 = !lean_is_exclusive(x_33);
if (x_507 == 0)
{
lean_object* x_508; lean_object* x_509; uint8_t x_510; 
x_508 = lean_ctor_get(x_33, 1);
x_509 = lean_ctor_get(x_33, 0);
lean_dec(x_509);
x_510 = !lean_is_exclusive(x_34);
if (x_510 == 0)
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; uint8_t x_518; 
x_511 = lean_ctor_get(x_34, 1);
x_512 = lean_ctor_get(x_34, 0);
lean_dec(x_512);
x_513 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_514 = l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_ctor_set(x_34, 1, x_513);
lean_ctor_set(x_34, 0, x_514);
x_515 = lean_array_get(x_34, x_26, x_10);
x_516 = lean_ctor_get(x_515, 0);
lean_inc(x_516);
x_517 = lean_box(3);
x_518 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_516, x_517);
lean_dec(x_516);
if (x_518 == 0)
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; uint8_t x_525; 
lean_dec(x_515);
x_519 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_519);
if (lean_is_scalar(x_27)) {
 x_520 = lean_alloc_ctor(0, 2, 0);
} else {
 x_520 = x_27;
}
lean_ctor_set(x_520, 0, x_519);
lean_ctor_set(x_520, 1, x_519);
x_521 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_521, 0, x_35);
lean_ctor_set(x_521, 1, x_520);
x_522 = lean_array_get_size(x_26);
x_523 = lean_unsigned_to_nat(1u);
x_524 = lean_nat_sub(x_522, x_523);
x_525 = lean_nat_dec_lt(x_10, x_522);
lean_dec(x_522);
if (x_525 == 0)
{
lean_dec(x_524);
lean_dec(x_521);
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_526; 
x_526 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg(x_26, x_521, x_10, x_524);
lean_dec(x_521);
lean_dec(x_26);
if (lean_obj_tag(x_526) == 0)
{
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; 
lean_free_object(x_33);
x_527 = lean_ctor_get(x_526, 0);
lean_inc(x_527);
lean_dec(x_526);
x_528 = l_Array_append___rarg(x_31, x_511);
lean_dec(x_511);
x_529 = lean_ctor_get(x_527, 1);
lean_inc(x_529);
lean_dec(x_527);
x_1 = x_10;
x_2 = x_528;
x_3 = x_529;
x_9 = x_508;
goto _start;
}
}
}
else
{
lean_object* x_531; lean_object* x_532; 
lean_free_object(x_33);
x_531 = lean_ctor_get(x_515, 1);
lean_inc(x_531);
lean_dec(x_515);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_532 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_531, x_4, x_5, x_6, x_7, x_8, x_508);
if (lean_obj_tag(x_532) == 0)
{
uint8_t x_533; 
x_533 = !lean_is_exclusive(x_532);
if (x_533 == 0)
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; uint8_t x_542; 
x_534 = lean_ctor_get(x_532, 0);
x_535 = lean_ctor_get(x_532, 1);
x_536 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_536);
if (lean_is_scalar(x_27)) {
 x_537 = lean_alloc_ctor(0, 2, 0);
} else {
 x_537 = x_27;
}
lean_ctor_set(x_537, 0, x_536);
lean_ctor_set(x_537, 1, x_536);
x_538 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_538, 0, x_35);
lean_ctor_set(x_538, 1, x_537);
x_539 = lean_array_get_size(x_26);
x_540 = lean_unsigned_to_nat(1u);
x_541 = lean_nat_sub(x_539, x_540);
x_542 = lean_nat_dec_lt(x_10, x_539);
lean_dec(x_539);
if (x_542 == 0)
{
lean_dec(x_541);
lean_dec(x_538);
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_532;
}
else
{
lean_object* x_543; 
x_543 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(x_26, x_538, x_10, x_541);
lean_dec(x_538);
lean_dec(x_26);
if (lean_obj_tag(x_543) == 0)
{
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_532;
}
else
{
lean_object* x_544; lean_object* x_545; lean_object* x_546; 
lean_free_object(x_532);
x_544 = lean_ctor_get(x_543, 0);
lean_inc(x_544);
lean_dec(x_543);
x_545 = l_Array_append___rarg(x_31, x_511);
lean_dec(x_511);
x_546 = lean_ctor_get(x_544, 1);
lean_inc(x_546);
lean_dec(x_544);
x_1 = x_10;
x_2 = x_545;
x_3 = x_546;
x_4 = x_534;
x_9 = x_535;
goto _start;
}
}
}
else
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; uint8_t x_556; 
x_548 = lean_ctor_get(x_532, 0);
x_549 = lean_ctor_get(x_532, 1);
lean_inc(x_549);
lean_inc(x_548);
lean_dec(x_532);
x_550 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_550);
if (lean_is_scalar(x_27)) {
 x_551 = lean_alloc_ctor(0, 2, 0);
} else {
 x_551 = x_27;
}
lean_ctor_set(x_551, 0, x_550);
lean_ctor_set(x_551, 1, x_550);
x_552 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_552, 0, x_35);
lean_ctor_set(x_552, 1, x_551);
x_553 = lean_array_get_size(x_26);
x_554 = lean_unsigned_to_nat(1u);
x_555 = lean_nat_sub(x_553, x_554);
x_556 = lean_nat_dec_lt(x_10, x_553);
lean_dec(x_553);
if (x_556 == 0)
{
lean_object* x_557; 
lean_dec(x_555);
lean_dec(x_552);
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_557 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_557, 0, x_548);
lean_ctor_set(x_557, 1, x_549);
return x_557;
}
else
{
lean_object* x_558; 
x_558 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(x_26, x_552, x_10, x_555);
lean_dec(x_552);
lean_dec(x_26);
if (lean_obj_tag(x_558) == 0)
{
lean_object* x_559; 
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_559 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_559, 0, x_548);
lean_ctor_set(x_559, 1, x_549);
return x_559;
}
else
{
lean_object* x_560; lean_object* x_561; lean_object* x_562; 
x_560 = lean_ctor_get(x_558, 0);
lean_inc(x_560);
lean_dec(x_558);
x_561 = l_Array_append___rarg(x_31, x_511);
lean_dec(x_511);
x_562 = lean_ctor_get(x_560, 1);
lean_inc(x_562);
lean_dec(x_560);
x_1 = x_10;
x_2 = x_561;
x_3 = x_562;
x_4 = x_548;
x_9 = x_549;
goto _start;
}
}
}
}
else
{
uint8_t x_564; 
lean_dec(x_511);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_564 = !lean_is_exclusive(x_532);
if (x_564 == 0)
{
return x_532;
}
else
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; 
x_565 = lean_ctor_get(x_532, 0);
x_566 = lean_ctor_get(x_532, 1);
lean_inc(x_566);
lean_inc(x_565);
lean_dec(x_532);
x_567 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_567, 0, x_565);
lean_ctor_set(x_567, 1, x_566);
return x_567;
}
}
}
}
else
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; uint8_t x_575; 
x_568 = lean_ctor_get(x_34, 1);
lean_inc(x_568);
lean_dec(x_34);
x_569 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_570 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_571 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_571, 0, x_570);
lean_ctor_set(x_571, 1, x_569);
x_572 = lean_array_get(x_571, x_26, x_10);
x_573 = lean_ctor_get(x_572, 0);
lean_inc(x_573);
x_574 = lean_box(3);
x_575 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_573, x_574);
lean_dec(x_573);
if (x_575 == 0)
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; uint8_t x_582; 
lean_dec(x_572);
x_576 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_576);
if (lean_is_scalar(x_27)) {
 x_577 = lean_alloc_ctor(0, 2, 0);
} else {
 x_577 = x_27;
}
lean_ctor_set(x_577, 0, x_576);
lean_ctor_set(x_577, 1, x_576);
x_578 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_578, 0, x_35);
lean_ctor_set(x_578, 1, x_577);
x_579 = lean_array_get_size(x_26);
x_580 = lean_unsigned_to_nat(1u);
x_581 = lean_nat_sub(x_579, x_580);
x_582 = lean_nat_dec_lt(x_10, x_579);
lean_dec(x_579);
if (x_582 == 0)
{
lean_dec(x_581);
lean_dec(x_578);
lean_dec(x_568);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_583; 
x_583 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg(x_26, x_578, x_10, x_581);
lean_dec(x_578);
lean_dec(x_26);
if (lean_obj_tag(x_583) == 0)
{
lean_dec(x_568);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_33, 0, x_4);
return x_33;
}
else
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; 
lean_free_object(x_33);
x_584 = lean_ctor_get(x_583, 0);
lean_inc(x_584);
lean_dec(x_583);
x_585 = l_Array_append___rarg(x_31, x_568);
lean_dec(x_568);
x_586 = lean_ctor_get(x_584, 1);
lean_inc(x_586);
lean_dec(x_584);
x_1 = x_10;
x_2 = x_585;
x_3 = x_586;
x_9 = x_508;
goto _start;
}
}
}
else
{
lean_object* x_588; lean_object* x_589; 
lean_free_object(x_33);
x_588 = lean_ctor_get(x_572, 1);
lean_inc(x_588);
lean_dec(x_572);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_589 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_588, x_4, x_5, x_6, x_7, x_8, x_508);
if (lean_obj_tag(x_589) == 0)
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; uint8_t x_599; 
x_590 = lean_ctor_get(x_589, 0);
lean_inc(x_590);
x_591 = lean_ctor_get(x_589, 1);
lean_inc(x_591);
if (lean_is_exclusive(x_589)) {
 lean_ctor_release(x_589, 0);
 lean_ctor_release(x_589, 1);
 x_592 = x_589;
} else {
 lean_dec_ref(x_589);
 x_592 = lean_box(0);
}
x_593 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_593);
if (lean_is_scalar(x_27)) {
 x_594 = lean_alloc_ctor(0, 2, 0);
} else {
 x_594 = x_27;
}
lean_ctor_set(x_594, 0, x_593);
lean_ctor_set(x_594, 1, x_593);
x_595 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_595, 0, x_35);
lean_ctor_set(x_595, 1, x_594);
x_596 = lean_array_get_size(x_26);
x_597 = lean_unsigned_to_nat(1u);
x_598 = lean_nat_sub(x_596, x_597);
x_599 = lean_nat_dec_lt(x_10, x_596);
lean_dec(x_596);
if (x_599 == 0)
{
lean_object* x_600; 
lean_dec(x_598);
lean_dec(x_595);
lean_dec(x_568);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_592)) {
 x_600 = lean_alloc_ctor(0, 2, 0);
} else {
 x_600 = x_592;
}
lean_ctor_set(x_600, 0, x_590);
lean_ctor_set(x_600, 1, x_591);
return x_600;
}
else
{
lean_object* x_601; 
x_601 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(x_26, x_595, x_10, x_598);
lean_dec(x_595);
lean_dec(x_26);
if (lean_obj_tag(x_601) == 0)
{
lean_object* x_602; 
lean_dec(x_568);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_592)) {
 x_602 = lean_alloc_ctor(0, 2, 0);
} else {
 x_602 = x_592;
}
lean_ctor_set(x_602, 0, x_590);
lean_ctor_set(x_602, 1, x_591);
return x_602;
}
else
{
lean_object* x_603; lean_object* x_604; lean_object* x_605; 
lean_dec(x_592);
x_603 = lean_ctor_get(x_601, 0);
lean_inc(x_603);
lean_dec(x_601);
x_604 = l_Array_append___rarg(x_31, x_568);
lean_dec(x_568);
x_605 = lean_ctor_get(x_603, 1);
lean_inc(x_605);
lean_dec(x_603);
x_1 = x_10;
x_2 = x_604;
x_3 = x_605;
x_4 = x_590;
x_9 = x_591;
goto _start;
}
}
}
else
{
lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; 
lean_dec(x_568);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_607 = lean_ctor_get(x_589, 0);
lean_inc(x_607);
x_608 = lean_ctor_get(x_589, 1);
lean_inc(x_608);
if (lean_is_exclusive(x_589)) {
 lean_ctor_release(x_589, 0);
 lean_ctor_release(x_589, 1);
 x_609 = x_589;
} else {
 lean_dec_ref(x_589);
 x_609 = lean_box(0);
}
if (lean_is_scalar(x_609)) {
 x_610 = lean_alloc_ctor(1, 2, 0);
} else {
 x_610 = x_609;
}
lean_ctor_set(x_610, 0, x_607);
lean_ctor_set(x_610, 1, x_608);
return x_610;
}
}
}
}
else
{
lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; uint8_t x_620; 
x_611 = lean_ctor_get(x_33, 1);
lean_inc(x_611);
lean_dec(x_33);
x_612 = lean_ctor_get(x_34, 1);
lean_inc(x_612);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_613 = x_34;
} else {
 lean_dec_ref(x_34);
 x_613 = lean_box(0);
}
x_614 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_615 = l_Lean_Meta_DiscrTree_instInhabitedKey;
if (lean_is_scalar(x_613)) {
 x_616 = lean_alloc_ctor(0, 2, 0);
} else {
 x_616 = x_613;
}
lean_ctor_set(x_616, 0, x_615);
lean_ctor_set(x_616, 1, x_614);
x_617 = lean_array_get(x_616, x_26, x_10);
x_618 = lean_ctor_get(x_617, 0);
lean_inc(x_618);
x_619 = lean_box(3);
x_620 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_618, x_619);
lean_dec(x_618);
if (x_620 == 0)
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; uint8_t x_627; 
lean_dec(x_617);
x_621 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_621);
if (lean_is_scalar(x_27)) {
 x_622 = lean_alloc_ctor(0, 2, 0);
} else {
 x_622 = x_27;
}
lean_ctor_set(x_622, 0, x_621);
lean_ctor_set(x_622, 1, x_621);
x_623 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_623, 0, x_35);
lean_ctor_set(x_623, 1, x_622);
x_624 = lean_array_get_size(x_26);
x_625 = lean_unsigned_to_nat(1u);
x_626 = lean_nat_sub(x_624, x_625);
x_627 = lean_nat_dec_lt(x_10, x_624);
lean_dec(x_624);
if (x_627 == 0)
{
lean_object* x_628; 
lean_dec(x_626);
lean_dec(x_623);
lean_dec(x_612);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_628 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_628, 0, x_4);
lean_ctor_set(x_628, 1, x_611);
return x_628;
}
else
{
lean_object* x_629; 
x_629 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg(x_26, x_623, x_10, x_626);
lean_dec(x_623);
lean_dec(x_26);
if (lean_obj_tag(x_629) == 0)
{
lean_object* x_630; 
lean_dec(x_612);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_630 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_630, 0, x_4);
lean_ctor_set(x_630, 1, x_611);
return x_630;
}
else
{
lean_object* x_631; lean_object* x_632; lean_object* x_633; 
x_631 = lean_ctor_get(x_629, 0);
lean_inc(x_631);
lean_dec(x_629);
x_632 = l_Array_append___rarg(x_31, x_612);
lean_dec(x_612);
x_633 = lean_ctor_get(x_631, 1);
lean_inc(x_633);
lean_dec(x_631);
x_1 = x_10;
x_2 = x_632;
x_3 = x_633;
x_9 = x_611;
goto _start;
}
}
}
else
{
lean_object* x_635; lean_object* x_636; 
x_635 = lean_ctor_get(x_617, 1);
lean_inc(x_635);
lean_dec(x_617);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_636 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_635, x_4, x_5, x_6, x_7, x_8, x_611);
if (lean_obj_tag(x_636) == 0)
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; uint8_t x_646; 
x_637 = lean_ctor_get(x_636, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_636, 1);
lean_inc(x_638);
if (lean_is_exclusive(x_636)) {
 lean_ctor_release(x_636, 0);
 lean_ctor_release(x_636, 1);
 x_639 = x_636;
} else {
 lean_dec_ref(x_636);
 x_639 = lean_box(0);
}
x_640 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_640);
if (lean_is_scalar(x_27)) {
 x_641 = lean_alloc_ctor(0, 2, 0);
} else {
 x_641 = x_27;
}
lean_ctor_set(x_641, 0, x_640);
lean_ctor_set(x_641, 1, x_640);
x_642 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_642, 0, x_35);
lean_ctor_set(x_642, 1, x_641);
x_643 = lean_array_get_size(x_26);
x_644 = lean_unsigned_to_nat(1u);
x_645 = lean_nat_sub(x_643, x_644);
x_646 = lean_nat_dec_lt(x_10, x_643);
lean_dec(x_643);
if (x_646 == 0)
{
lean_object* x_647; 
lean_dec(x_645);
lean_dec(x_642);
lean_dec(x_612);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_639)) {
 x_647 = lean_alloc_ctor(0, 2, 0);
} else {
 x_647 = x_639;
}
lean_ctor_set(x_647, 0, x_637);
lean_ctor_set(x_647, 1, x_638);
return x_647;
}
else
{
lean_object* x_648; 
x_648 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(x_26, x_642, x_10, x_645);
lean_dec(x_642);
lean_dec(x_26);
if (lean_obj_tag(x_648) == 0)
{
lean_object* x_649; 
lean_dec(x_612);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_639)) {
 x_649 = lean_alloc_ctor(0, 2, 0);
} else {
 x_649 = x_639;
}
lean_ctor_set(x_649, 0, x_637);
lean_ctor_set(x_649, 1, x_638);
return x_649;
}
else
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; 
lean_dec(x_639);
x_650 = lean_ctor_get(x_648, 0);
lean_inc(x_650);
lean_dec(x_648);
x_651 = l_Array_append___rarg(x_31, x_612);
lean_dec(x_612);
x_652 = lean_ctor_get(x_650, 1);
lean_inc(x_652);
lean_dec(x_650);
x_1 = x_10;
x_2 = x_651;
x_3 = x_652;
x_4 = x_637;
x_9 = x_638;
goto _start;
}
}
}
else
{
lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; 
lean_dec(x_612);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_654 = lean_ctor_get(x_636, 0);
lean_inc(x_654);
x_655 = lean_ctor_get(x_636, 1);
lean_inc(x_655);
if (lean_is_exclusive(x_636)) {
 lean_ctor_release(x_636, 0);
 lean_ctor_release(x_636, 1);
 x_656 = x_636;
} else {
 lean_dec_ref(x_636);
 x_656 = lean_box(0);
}
if (lean_is_scalar(x_656)) {
 x_657 = lean_alloc_ctor(1, 2, 0);
} else {
 x_657 = x_656;
}
lean_ctor_set(x_657, 0, x_654);
lean_ctor_set(x_657, 1, x_655);
return x_657;
}
}
}
}
default: 
{
lean_object* x_658; lean_object* x_659; uint8_t x_660; 
x_658 = lean_ctor_get(x_33, 1);
lean_inc(x_658);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_659 = x_33;
} else {
 lean_dec_ref(x_33);
 x_659 = lean_box(0);
}
x_660 = !lean_is_exclusive(x_34);
if (x_660 == 0)
{
lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; uint8_t x_668; 
x_661 = lean_ctor_get(x_34, 1);
x_662 = lean_ctor_get(x_34, 0);
lean_dec(x_662);
x_663 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_664 = l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_ctor_set(x_34, 1, x_663);
lean_ctor_set(x_34, 0, x_664);
x_665 = lean_array_get(x_34, x_26, x_10);
x_666 = lean_ctor_get(x_665, 0);
lean_inc(x_666);
x_667 = lean_box(3);
x_668 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_666, x_667);
lean_dec(x_666);
if (x_668 == 0)
{
lean_object* x_669; lean_object* x_670; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; uint8_t x_693; 
lean_dec(x_665);
x_687 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_687);
x_688 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_688, 0, x_687);
lean_ctor_set(x_688, 1, x_687);
x_689 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_689, 0, x_35);
lean_ctor_set(x_689, 1, x_688);
x_690 = lean_array_get_size(x_26);
x_691 = lean_unsigned_to_nat(1u);
x_692 = lean_nat_sub(x_690, x_691);
x_693 = lean_nat_dec_lt(x_10, x_690);
lean_dec(x_690);
if (x_693 == 0)
{
lean_dec(x_692);
lean_dec(x_689);
lean_dec(x_661);
x_669 = x_4;
x_670 = x_658;
goto block_686;
}
else
{
lean_object* x_694; 
x_694 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg(x_26, x_689, x_10, x_692);
lean_dec(x_689);
if (lean_obj_tag(x_694) == 0)
{
lean_dec(x_661);
x_669 = x_4;
x_670 = x_658;
goto block_686;
}
else
{
lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; 
x_695 = lean_ctor_get(x_694, 0);
lean_inc(x_695);
lean_dec(x_694);
lean_inc(x_31);
x_696 = l_Array_append___rarg(x_31, x_661);
lean_dec(x_661);
x_697 = lean_ctor_get(x_695, 1);
lean_inc(x_697);
lean_dec(x_695);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_698 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_696, x_697, x_4, x_5, x_6, x_7, x_8, x_658);
if (lean_obj_tag(x_698) == 0)
{
lean_object* x_699; lean_object* x_700; 
x_699 = lean_ctor_get(x_698, 0);
lean_inc(x_699);
x_700 = lean_ctor_get(x_698, 1);
lean_inc(x_700);
lean_dec(x_698);
x_669 = x_699;
x_670 = x_700;
goto block_686;
}
else
{
uint8_t x_701; 
lean_dec(x_659);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_701 = !lean_is_exclusive(x_698);
if (x_701 == 0)
{
return x_698;
}
else
{
lean_object* x_702; lean_object* x_703; lean_object* x_704; 
x_702 = lean_ctor_get(x_698, 0);
x_703 = lean_ctor_get(x_698, 1);
lean_inc(x_703);
lean_inc(x_702);
lean_dec(x_698);
x_704 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_704, 0, x_702);
lean_ctor_set(x_704, 1, x_703);
return x_704;
}
}
}
}
block_686:
{
lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; uint8_t x_678; 
x_671 = lean_mk_empty_array_with_capacity(x_10);
lean_inc_n(x_671, 2);
if (lean_is_scalar(x_27)) {
 x_672 = lean_alloc_ctor(0, 2, 0);
} else {
 x_672 = x_27;
}
lean_ctor_set(x_672, 0, x_671);
lean_ctor_set(x_672, 1, x_671);
x_673 = lean_box(4);
x_674 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_674, 0, x_673);
lean_ctor_set(x_674, 1, x_672);
x_675 = lean_array_get_size(x_26);
x_676 = lean_unsigned_to_nat(1u);
x_677 = lean_nat_sub(x_675, x_676);
x_678 = lean_nat_dec_lt(x_10, x_675);
lean_dec(x_675);
if (x_678 == 0)
{
lean_object* x_679; 
lean_dec(x_677);
lean_dec(x_674);
lean_dec(x_671);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_659)) {
 x_679 = lean_alloc_ctor(0, 2, 0);
} else {
 x_679 = x_659;
}
lean_ctor_set(x_679, 0, x_669);
lean_ctor_set(x_679, 1, x_670);
return x_679;
}
else
{
lean_object* x_680; 
x_680 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg(x_26, x_674, x_10, x_677);
lean_dec(x_674);
lean_dec(x_26);
if (lean_obj_tag(x_680) == 0)
{
lean_object* x_681; 
lean_dec(x_671);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_659)) {
 x_681 = lean_alloc_ctor(0, 2, 0);
} else {
 x_681 = x_659;
}
lean_ctor_set(x_681, 0, x_669);
lean_ctor_set(x_681, 1, x_670);
return x_681;
}
else
{
lean_object* x_682; lean_object* x_683; lean_object* x_684; 
lean_dec(x_659);
x_682 = lean_ctor_get(x_680, 0);
lean_inc(x_682);
lean_dec(x_680);
x_683 = l_Array_append___rarg(x_31, x_671);
lean_dec(x_671);
x_684 = lean_ctor_get(x_682, 1);
lean_inc(x_684);
lean_dec(x_682);
x_1 = x_10;
x_2 = x_683;
x_3 = x_684;
x_4 = x_669;
x_9 = x_670;
goto _start;
}
}
}
}
else
{
lean_object* x_705; lean_object* x_706; 
lean_dec(x_659);
x_705 = lean_ctor_get(x_665, 1);
lean_inc(x_705);
lean_dec(x_665);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_706 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_705, x_4, x_5, x_6, x_7, x_8, x_658);
if (lean_obj_tag(x_706) == 0)
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; uint8_t x_734; 
x_707 = lean_ctor_get(x_706, 0);
lean_inc(x_707);
x_708 = lean_ctor_get(x_706, 1);
lean_inc(x_708);
if (lean_is_exclusive(x_706)) {
 lean_ctor_release(x_706, 0);
 lean_ctor_release(x_706, 1);
 x_709 = x_706;
} else {
 lean_dec_ref(x_706);
 x_709 = lean_box(0);
}
x_728 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_728);
x_729 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_729, 0, x_728);
lean_ctor_set(x_729, 1, x_728);
x_730 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_730, 0, x_35);
lean_ctor_set(x_730, 1, x_729);
x_731 = lean_array_get_size(x_26);
x_732 = lean_unsigned_to_nat(1u);
x_733 = lean_nat_sub(x_731, x_732);
x_734 = lean_nat_dec_lt(x_10, x_731);
lean_dec(x_731);
if (x_734 == 0)
{
lean_dec(x_733);
lean_dec(x_730);
lean_dec(x_661);
x_710 = x_707;
x_711 = x_708;
goto block_727;
}
else
{
lean_object* x_735; 
x_735 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg(x_26, x_730, x_10, x_733);
lean_dec(x_730);
if (lean_obj_tag(x_735) == 0)
{
lean_dec(x_661);
x_710 = x_707;
x_711 = x_708;
goto block_727;
}
else
{
lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; 
x_736 = lean_ctor_get(x_735, 0);
lean_inc(x_736);
lean_dec(x_735);
lean_inc(x_31);
x_737 = l_Array_append___rarg(x_31, x_661);
lean_dec(x_661);
x_738 = lean_ctor_get(x_736, 1);
lean_inc(x_738);
lean_dec(x_736);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_739 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_737, x_738, x_707, x_5, x_6, x_7, x_8, x_708);
if (lean_obj_tag(x_739) == 0)
{
lean_object* x_740; lean_object* x_741; 
x_740 = lean_ctor_get(x_739, 0);
lean_inc(x_740);
x_741 = lean_ctor_get(x_739, 1);
lean_inc(x_741);
lean_dec(x_739);
x_710 = x_740;
x_711 = x_741;
goto block_727;
}
else
{
uint8_t x_742; 
lean_dec(x_709);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_742 = !lean_is_exclusive(x_739);
if (x_742 == 0)
{
return x_739;
}
else
{
lean_object* x_743; lean_object* x_744; lean_object* x_745; 
x_743 = lean_ctor_get(x_739, 0);
x_744 = lean_ctor_get(x_739, 1);
lean_inc(x_744);
lean_inc(x_743);
lean_dec(x_739);
x_745 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_745, 0, x_743);
lean_ctor_set(x_745, 1, x_744);
return x_745;
}
}
}
}
block_727:
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; uint8_t x_719; 
x_712 = lean_mk_empty_array_with_capacity(x_10);
lean_inc_n(x_712, 2);
if (lean_is_scalar(x_27)) {
 x_713 = lean_alloc_ctor(0, 2, 0);
} else {
 x_713 = x_27;
}
lean_ctor_set(x_713, 0, x_712);
lean_ctor_set(x_713, 1, x_712);
x_714 = lean_box(4);
x_715 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_715, 0, x_714);
lean_ctor_set(x_715, 1, x_713);
x_716 = lean_array_get_size(x_26);
x_717 = lean_unsigned_to_nat(1u);
x_718 = lean_nat_sub(x_716, x_717);
x_719 = lean_nat_dec_lt(x_10, x_716);
lean_dec(x_716);
if (x_719 == 0)
{
lean_object* x_720; 
lean_dec(x_718);
lean_dec(x_715);
lean_dec(x_712);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_709)) {
 x_720 = lean_alloc_ctor(0, 2, 0);
} else {
 x_720 = x_709;
}
lean_ctor_set(x_720, 0, x_710);
lean_ctor_set(x_720, 1, x_711);
return x_720;
}
else
{
lean_object* x_721; 
x_721 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg(x_26, x_715, x_10, x_718);
lean_dec(x_715);
lean_dec(x_26);
if (lean_obj_tag(x_721) == 0)
{
lean_object* x_722; 
lean_dec(x_712);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_709)) {
 x_722 = lean_alloc_ctor(0, 2, 0);
} else {
 x_722 = x_709;
}
lean_ctor_set(x_722, 0, x_710);
lean_ctor_set(x_722, 1, x_711);
return x_722;
}
else
{
lean_object* x_723; lean_object* x_724; lean_object* x_725; 
lean_dec(x_709);
x_723 = lean_ctor_get(x_721, 0);
lean_inc(x_723);
lean_dec(x_721);
x_724 = l_Array_append___rarg(x_31, x_712);
lean_dec(x_712);
x_725 = lean_ctor_get(x_723, 1);
lean_inc(x_725);
lean_dec(x_723);
x_1 = x_10;
x_2 = x_724;
x_3 = x_725;
x_4 = x_710;
x_9 = x_711;
goto _start;
}
}
}
}
else
{
uint8_t x_746; 
lean_dec(x_661);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_746 = !lean_is_exclusive(x_706);
if (x_746 == 0)
{
return x_706;
}
else
{
lean_object* x_747; lean_object* x_748; lean_object* x_749; 
x_747 = lean_ctor_get(x_706, 0);
x_748 = lean_ctor_get(x_706, 1);
lean_inc(x_748);
lean_inc(x_747);
lean_dec(x_706);
x_749 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_749, 0, x_747);
lean_ctor_set(x_749, 1, x_748);
return x_749;
}
}
}
}
else
{
lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; uint8_t x_757; 
x_750 = lean_ctor_get(x_34, 1);
lean_inc(x_750);
lean_dec(x_34);
x_751 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_752 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_753 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_753, 0, x_752);
lean_ctor_set(x_753, 1, x_751);
x_754 = lean_array_get(x_753, x_26, x_10);
x_755 = lean_ctor_get(x_754, 0);
lean_inc(x_755);
x_756 = lean_box(3);
x_757 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_755, x_756);
lean_dec(x_755);
if (x_757 == 0)
{
lean_object* x_758; lean_object* x_759; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; uint8_t x_782; 
lean_dec(x_754);
x_776 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_776);
x_777 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_777, 0, x_776);
lean_ctor_set(x_777, 1, x_776);
x_778 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_778, 0, x_35);
lean_ctor_set(x_778, 1, x_777);
x_779 = lean_array_get_size(x_26);
x_780 = lean_unsigned_to_nat(1u);
x_781 = lean_nat_sub(x_779, x_780);
x_782 = lean_nat_dec_lt(x_10, x_779);
lean_dec(x_779);
if (x_782 == 0)
{
lean_dec(x_781);
lean_dec(x_778);
lean_dec(x_750);
x_758 = x_4;
x_759 = x_658;
goto block_775;
}
else
{
lean_object* x_783; 
x_783 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg(x_26, x_778, x_10, x_781);
lean_dec(x_778);
if (lean_obj_tag(x_783) == 0)
{
lean_dec(x_750);
x_758 = x_4;
x_759 = x_658;
goto block_775;
}
else
{
lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; 
x_784 = lean_ctor_get(x_783, 0);
lean_inc(x_784);
lean_dec(x_783);
lean_inc(x_31);
x_785 = l_Array_append___rarg(x_31, x_750);
lean_dec(x_750);
x_786 = lean_ctor_get(x_784, 1);
lean_inc(x_786);
lean_dec(x_784);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_787 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_785, x_786, x_4, x_5, x_6, x_7, x_8, x_658);
if (lean_obj_tag(x_787) == 0)
{
lean_object* x_788; lean_object* x_789; 
x_788 = lean_ctor_get(x_787, 0);
lean_inc(x_788);
x_789 = lean_ctor_get(x_787, 1);
lean_inc(x_789);
lean_dec(x_787);
x_758 = x_788;
x_759 = x_789;
goto block_775;
}
else
{
lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; 
lean_dec(x_659);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_790 = lean_ctor_get(x_787, 0);
lean_inc(x_790);
x_791 = lean_ctor_get(x_787, 1);
lean_inc(x_791);
if (lean_is_exclusive(x_787)) {
 lean_ctor_release(x_787, 0);
 lean_ctor_release(x_787, 1);
 x_792 = x_787;
} else {
 lean_dec_ref(x_787);
 x_792 = lean_box(0);
}
if (lean_is_scalar(x_792)) {
 x_793 = lean_alloc_ctor(1, 2, 0);
} else {
 x_793 = x_792;
}
lean_ctor_set(x_793, 0, x_790);
lean_ctor_set(x_793, 1, x_791);
return x_793;
}
}
}
block_775:
{
lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; uint8_t x_767; 
x_760 = lean_mk_empty_array_with_capacity(x_10);
lean_inc_n(x_760, 2);
if (lean_is_scalar(x_27)) {
 x_761 = lean_alloc_ctor(0, 2, 0);
} else {
 x_761 = x_27;
}
lean_ctor_set(x_761, 0, x_760);
lean_ctor_set(x_761, 1, x_760);
x_762 = lean_box(4);
x_763 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_763, 0, x_762);
lean_ctor_set(x_763, 1, x_761);
x_764 = lean_array_get_size(x_26);
x_765 = lean_unsigned_to_nat(1u);
x_766 = lean_nat_sub(x_764, x_765);
x_767 = lean_nat_dec_lt(x_10, x_764);
lean_dec(x_764);
if (x_767 == 0)
{
lean_object* x_768; 
lean_dec(x_766);
lean_dec(x_763);
lean_dec(x_760);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_659)) {
 x_768 = lean_alloc_ctor(0, 2, 0);
} else {
 x_768 = x_659;
}
lean_ctor_set(x_768, 0, x_758);
lean_ctor_set(x_768, 1, x_759);
return x_768;
}
else
{
lean_object* x_769; 
x_769 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg(x_26, x_763, x_10, x_766);
lean_dec(x_763);
lean_dec(x_26);
if (lean_obj_tag(x_769) == 0)
{
lean_object* x_770; 
lean_dec(x_760);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_659)) {
 x_770 = lean_alloc_ctor(0, 2, 0);
} else {
 x_770 = x_659;
}
lean_ctor_set(x_770, 0, x_758);
lean_ctor_set(x_770, 1, x_759);
return x_770;
}
else
{
lean_object* x_771; lean_object* x_772; lean_object* x_773; 
lean_dec(x_659);
x_771 = lean_ctor_get(x_769, 0);
lean_inc(x_771);
lean_dec(x_769);
x_772 = l_Array_append___rarg(x_31, x_760);
lean_dec(x_760);
x_773 = lean_ctor_get(x_771, 1);
lean_inc(x_773);
lean_dec(x_771);
x_1 = x_10;
x_2 = x_772;
x_3 = x_773;
x_4 = x_758;
x_9 = x_759;
goto _start;
}
}
}
}
else
{
lean_object* x_794; lean_object* x_795; 
lean_dec(x_659);
x_794 = lean_ctor_get(x_754, 1);
lean_inc(x_794);
lean_dec(x_754);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_795 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_31, x_794, x_4, x_5, x_6, x_7, x_8, x_658);
if (lean_obj_tag(x_795) == 0)
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; uint8_t x_823; 
x_796 = lean_ctor_get(x_795, 0);
lean_inc(x_796);
x_797 = lean_ctor_get(x_795, 1);
lean_inc(x_797);
if (lean_is_exclusive(x_795)) {
 lean_ctor_release(x_795, 0);
 lean_ctor_release(x_795, 1);
 x_798 = x_795;
} else {
 lean_dec_ref(x_795);
 x_798 = lean_box(0);
}
x_817 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_817);
x_818 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_818, 0, x_817);
lean_ctor_set(x_818, 1, x_817);
x_819 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_819, 0, x_35);
lean_ctor_set(x_819, 1, x_818);
x_820 = lean_array_get_size(x_26);
x_821 = lean_unsigned_to_nat(1u);
x_822 = lean_nat_sub(x_820, x_821);
x_823 = lean_nat_dec_lt(x_10, x_820);
lean_dec(x_820);
if (x_823 == 0)
{
lean_dec(x_822);
lean_dec(x_819);
lean_dec(x_750);
x_799 = x_796;
x_800 = x_797;
goto block_816;
}
else
{
lean_object* x_824; 
x_824 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg(x_26, x_819, x_10, x_822);
lean_dec(x_819);
if (lean_obj_tag(x_824) == 0)
{
lean_dec(x_750);
x_799 = x_796;
x_800 = x_797;
goto block_816;
}
else
{
lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; 
x_825 = lean_ctor_get(x_824, 0);
lean_inc(x_825);
lean_dec(x_824);
lean_inc(x_31);
x_826 = l_Array_append___rarg(x_31, x_750);
lean_dec(x_750);
x_827 = lean_ctor_get(x_825, 1);
lean_inc(x_827);
lean_dec(x_825);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_828 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_10, x_826, x_827, x_796, x_5, x_6, x_7, x_8, x_797);
if (lean_obj_tag(x_828) == 0)
{
lean_object* x_829; lean_object* x_830; 
x_829 = lean_ctor_get(x_828, 0);
lean_inc(x_829);
x_830 = lean_ctor_get(x_828, 1);
lean_inc(x_830);
lean_dec(x_828);
x_799 = x_829;
x_800 = x_830;
goto block_816;
}
else
{
lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; 
lean_dec(x_798);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_831 = lean_ctor_get(x_828, 0);
lean_inc(x_831);
x_832 = lean_ctor_get(x_828, 1);
lean_inc(x_832);
if (lean_is_exclusive(x_828)) {
 lean_ctor_release(x_828, 0);
 lean_ctor_release(x_828, 1);
 x_833 = x_828;
} else {
 lean_dec_ref(x_828);
 x_833 = lean_box(0);
}
if (lean_is_scalar(x_833)) {
 x_834 = lean_alloc_ctor(1, 2, 0);
} else {
 x_834 = x_833;
}
lean_ctor_set(x_834, 0, x_831);
lean_ctor_set(x_834, 1, x_832);
return x_834;
}
}
}
block_816:
{
lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; uint8_t x_808; 
x_801 = lean_mk_empty_array_with_capacity(x_10);
lean_inc_n(x_801, 2);
if (lean_is_scalar(x_27)) {
 x_802 = lean_alloc_ctor(0, 2, 0);
} else {
 x_802 = x_27;
}
lean_ctor_set(x_802, 0, x_801);
lean_ctor_set(x_802, 1, x_801);
x_803 = lean_box(4);
x_804 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_804, 0, x_803);
lean_ctor_set(x_804, 1, x_802);
x_805 = lean_array_get_size(x_26);
x_806 = lean_unsigned_to_nat(1u);
x_807 = lean_nat_sub(x_805, x_806);
x_808 = lean_nat_dec_lt(x_10, x_805);
lean_dec(x_805);
if (x_808 == 0)
{
lean_object* x_809; 
lean_dec(x_807);
lean_dec(x_804);
lean_dec(x_801);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_798)) {
 x_809 = lean_alloc_ctor(0, 2, 0);
} else {
 x_809 = x_798;
}
lean_ctor_set(x_809, 0, x_799);
lean_ctor_set(x_809, 1, x_800);
return x_809;
}
else
{
lean_object* x_810; 
x_810 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg(x_26, x_804, x_10, x_807);
lean_dec(x_804);
lean_dec(x_26);
if (lean_obj_tag(x_810) == 0)
{
lean_object* x_811; 
lean_dec(x_801);
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_798)) {
 x_811 = lean_alloc_ctor(0, 2, 0);
} else {
 x_811 = x_798;
}
lean_ctor_set(x_811, 0, x_799);
lean_ctor_set(x_811, 1, x_800);
return x_811;
}
else
{
lean_object* x_812; lean_object* x_813; lean_object* x_814; 
lean_dec(x_798);
x_812 = lean_ctor_get(x_810, 0);
lean_inc(x_812);
lean_dec(x_810);
x_813 = l_Array_append___rarg(x_31, x_801);
lean_dec(x_801);
x_814 = lean_ctor_get(x_812, 1);
lean_inc(x_814);
lean_dec(x_812);
x_1 = x_10;
x_2 = x_813;
x_3 = x_814;
x_4 = x_799;
x_9 = x_800;
goto _start;
}
}
}
}
else
{
lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; 
lean_dec(x_750);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_835 = lean_ctor_get(x_795, 0);
lean_inc(x_835);
x_836 = lean_ctor_get(x_795, 1);
lean_inc(x_836);
if (lean_is_exclusive(x_795)) {
 lean_ctor_release(x_795, 0);
 lean_ctor_release(x_795, 1);
 x_837 = x_795;
} else {
 lean_dec_ref(x_795);
 x_837 = lean_box(0);
}
if (lean_is_scalar(x_837)) {
 x_838 = lean_alloc_ctor(1, 2, 0);
} else {
 x_838 = x_837;
}
lean_ctor_set(x_838, 0, x_835);
lean_ctor_set(x_838, 1, x_836);
return x_838;
}
}
}
}
}
}
else
{
uint8_t x_839; 
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_839 = !lean_is_exclusive(x_33);
if (x_839 == 0)
{
return x_33;
}
else
{
lean_object* x_840; lean_object* x_841; lean_object* x_842; 
x_840 = lean_ctor_get(x_33, 0);
x_841 = lean_ctor_get(x_33, 1);
lean_inc(x_841);
lean_inc(x_840);
lean_dec(x_33);
x_842 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_842, 0, x_840);
lean_ctor_set(x_842, 1, x_841);
return x_842;
}
}
}
else
{
lean_object* x_843; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_843 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_843, 0, x_4);
lean_ctor_set(x_843, 1, x_9);
return x_843;
}
}
else
{
lean_object* x_844; lean_object* x_845; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_844 = l_Array_append___rarg(x_4, x_25);
lean_dec(x_25);
x_845 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_845, 0, x_844);
lean_ctor_set(x_845, 1, x_9);
return x_845;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify_process(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getUnify_process___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__7___rarg(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__8___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__9___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__11___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__12___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Meta_DiscrTree_getUnify_process___spec__13___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify_process___spec__14___rarg(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_2 == x_3;
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_array_uget(x_1, x_2);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_DiscrTree_Key_arity(x_12);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_mk_empty_array_with_capacity(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_14, x_16, x_13, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_2 + x_20;
x_2 = x_21;
x_4 = x_18;
x_9 = x_19;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 1:
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_11, 0);
lean_inc(x_27);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_28 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg(x_27, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = 1;
x_32 = x_2 + x_31;
x_2 = x_32;
x_4 = x_29;
x_9 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
default: 
{
size_t x_38; size_t x_39; 
x_38 = 1;
x_39 = x_2 + x_38;
x_2 = x_39;
goto _start;
}
}
}
else
{
lean_object* x_41; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_9);
return x_41;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_2, x_5);
x_16 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_17 = lean_apply_8(x_1, x_6, x_15, x_16, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_21;
x_6 = x_18;
x_11 = x_19;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg___boxed), 11, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_Meta_DiscrTree_Key_arity(x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_9, x_11, x_3, x_1, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_array_get_size(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_9, x_9);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_7);
return x_14;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = 0;
x_16 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg(x_8, x_15, x_16, x_2, x_3, x_4, x_5, x_6, x_7);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___lambda__1___boxed), 8, 0);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg(x_20, x_18, x_19, lean_box(0), x_21, x_2, x_3, x_4, x_5, x_6, x_7);
return x_22;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = 2;
lean_ctor_set_uint8(x_9, 5, x_11);
x_12 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_2, x_12, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_13, 1);
x_18 = lean_ctor_get(x_13, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
lean_inc(x_1);
x_20 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_21 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_21) == 0)
{
lean_dec(x_19);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_13, 0, x_20);
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_13);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_23, x_19, x_22, x_20, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_13, 1);
lean_inc(x_33);
lean_dec(x_13);
x_34 = lean_ctor_get(x_14, 1);
lean_inc(x_34);
lean_dec(x_14);
lean_inc(x_1);
x_35 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_36 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
lean_dec(x_34);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_unsigned_to_nat(0u);
x_40 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_39, x_34, x_38, x_35, x_3, x_4, x_5, x_6, x_33);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
case 1:
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_13);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_13, 1);
x_51 = lean_ctor_get(x_13, 0);
lean_dec(x_51);
x_52 = lean_ctor_get(x_14, 1);
lean_inc(x_52);
lean_dec(x_14);
lean_inc(x_1);
x_53 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_54 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_54) == 0)
{
lean_dec(x_52);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_13, 0, x_53);
return x_13;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_free_object(x_13);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_unsigned_to_nat(0u);
x_57 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_56, x_52, x_55, x_53, x_3, x_4, x_5, x_6, x_50);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
return x_57;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_57);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_57);
if (x_62 == 0)
{
return x_57;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_57, 0);
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_57);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_13, 1);
lean_inc(x_66);
lean_dec(x_13);
x_67 = lean_ctor_get(x_14, 1);
lean_inc(x_67);
lean_dec(x_14);
lean_inc(x_1);
x_68 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_69 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
lean_dec(x_67);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_66);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_69, 0);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_unsigned_to_nat(0u);
x_73 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_72, x_67, x_71, x_68, x_3, x_4, x_5, x_6, x_66);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_73, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_80 = x_73;
} else {
 lean_dec_ref(x_73);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
}
case 2:
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_13);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_13, 1);
x_84 = lean_ctor_get(x_13, 0);
lean_dec(x_84);
x_85 = lean_ctor_get(x_14, 1);
lean_inc(x_85);
lean_dec(x_14);
lean_inc(x_1);
x_86 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_87 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_87) == 0)
{
lean_dec(x_85);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_13, 0, x_86);
return x_13;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_free_object(x_13);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_unsigned_to_nat(0u);
x_90 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_89, x_85, x_88, x_86, x_3, x_4, x_5, x_6, x_83);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
return x_90;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_90, 0);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_90);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
else
{
uint8_t x_95; 
x_95 = !lean_is_exclusive(x_90);
if (x_95 == 0)
{
return x_90;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_90, 0);
x_97 = lean_ctor_get(x_90, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_90);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_13, 1);
lean_inc(x_99);
lean_dec(x_13);
x_100 = lean_ctor_get(x_14, 1);
lean_inc(x_100);
lean_dec(x_14);
lean_inc(x_1);
x_101 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_102 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
lean_dec(x_100);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_99);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_102, 0);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_unsigned_to_nat(0u);
x_106 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_105, x_100, x_104, x_101, x_3, x_4, x_5, x_6, x_99);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_109 = x_106;
} else {
 lean_dec_ref(x_106);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_106, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_106, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_113 = x_106;
} else {
 lean_dec_ref(x_106);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
}
}
case 3:
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_14);
x_115 = lean_ctor_get(x_13, 1);
lean_inc(x_115);
lean_dec(x_13);
x_116 = lean_unsigned_to_nat(0u);
x_117 = lean_mk_empty_array_with_capacity(x_116);
x_118 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg(x_1, x_117, x_3, x_4, x_5, x_6, x_115);
lean_dec(x_1);
if (lean_obj_tag(x_118) == 0)
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_118);
if (x_119 == 0)
{
return x_118;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_118, 0);
x_121 = lean_ctor_get(x_118, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_118);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
else
{
uint8_t x_123; 
x_123 = !lean_is_exclusive(x_118);
if (x_123 == 0)
{
return x_118;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_118, 0);
x_125 = lean_ctor_get(x_118, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_118);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
case 4:
{
uint8_t x_127; 
x_127 = !lean_is_exclusive(x_13);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_13, 1);
x_129 = lean_ctor_get(x_13, 0);
lean_dec(x_129);
x_130 = lean_ctor_get(x_14, 1);
lean_inc(x_130);
lean_dec(x_14);
lean_inc(x_1);
x_131 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_132 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(x_1, x_15);
if (lean_obj_tag(x_132) == 0)
{
lean_dec(x_130);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_13, 0, x_131);
return x_13;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_free_object(x_13);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_unsigned_to_nat(0u);
x_135 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_134, x_130, x_133, x_131, x_3, x_4, x_5, x_6, x_128);
if (lean_obj_tag(x_135) == 0)
{
uint8_t x_136; 
x_136 = !lean_is_exclusive(x_135);
if (x_136 == 0)
{
return x_135;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_135, 0);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_135);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
else
{
uint8_t x_140; 
x_140 = !lean_is_exclusive(x_135);
if (x_140 == 0)
{
return x_135;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_135, 0);
x_142 = lean_ctor_get(x_135, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_135);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_144 = lean_ctor_get(x_13, 1);
lean_inc(x_144);
lean_dec(x_13);
x_145 = lean_ctor_get(x_14, 1);
lean_inc(x_145);
lean_dec(x_14);
lean_inc(x_1);
x_146 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_147 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(x_1, x_15);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; 
lean_dec(x_145);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_144);
return x_148;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
lean_dec(x_147);
x_150 = lean_unsigned_to_nat(0u);
x_151 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_150, x_145, x_149, x_146, x_3, x_4, x_5, x_6, x_144);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_154 = x_151;
} else {
 lean_dec_ref(x_151);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_156 = lean_ctor_get(x_151, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_151, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_158 = x_151;
} else {
 lean_dec_ref(x_151);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
}
}
default: 
{
uint8_t x_160; 
x_160 = !lean_is_exclusive(x_13);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_161 = lean_ctor_get(x_13, 1);
x_162 = lean_ctor_get(x_13, 0);
lean_dec(x_162);
x_163 = lean_ctor_get(x_14, 1);
lean_inc(x_163);
lean_dec(x_14);
lean_inc(x_1);
x_164 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_165 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(x_1, x_15);
if (lean_obj_tag(x_165) == 0)
{
lean_dec(x_163);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_13, 0, x_164);
return x_13;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_free_object(x_13);
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
lean_dec(x_165);
x_167 = lean_unsigned_to_nat(0u);
x_168 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_167, x_163, x_166, x_164, x_3, x_4, x_5, x_6, x_161);
if (lean_obj_tag(x_168) == 0)
{
uint8_t x_169; 
x_169 = !lean_is_exclusive(x_168);
if (x_169 == 0)
{
return x_168;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_168, 0);
x_171 = lean_ctor_get(x_168, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_168);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
else
{
uint8_t x_173; 
x_173 = !lean_is_exclusive(x_168);
if (x_173 == 0)
{
return x_168;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_168, 0);
x_175 = lean_ctor_get(x_168, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_168);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_13, 1);
lean_inc(x_177);
lean_dec(x_13);
x_178 = lean_ctor_get(x_14, 1);
lean_inc(x_178);
lean_dec(x_14);
lean_inc(x_1);
x_179 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_180 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(x_1, x_15);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; 
lean_dec(x_178);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_177);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_180, 0);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_unsigned_to_nat(0u);
x_184 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_183, x_178, x_182, x_179, x_3, x_4, x_5, x_6, x_177);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_187 = x_184;
} else {
 lean_dec_ref(x_184);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_188 = x_187;
}
lean_ctor_set(x_188, 0, x_185);
lean_ctor_set(x_188, 1, x_186);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_189 = lean_ctor_get(x_184, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_184, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_191 = x_184;
} else {
 lean_dec_ref(x_184);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 2, 0);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_189);
lean_ctor_set(x_192, 1, x_190);
return x_192;
}
}
}
}
}
}
else
{
uint8_t x_193; 
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_193 = !lean_is_exclusive(x_13);
if (x_193 == 0)
{
return x_13;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_13, 0);
x_195 = lean_ctor_get(x_13, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_13);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
}
else
{
uint8_t x_197; uint8_t x_198; uint8_t x_199; uint8_t x_200; uint8_t x_201; uint8_t x_202; uint8_t x_203; uint8_t x_204; uint8_t x_205; uint8_t x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; 
x_197 = lean_ctor_get_uint8(x_9, 0);
x_198 = lean_ctor_get_uint8(x_9, 1);
x_199 = lean_ctor_get_uint8(x_9, 2);
x_200 = lean_ctor_get_uint8(x_9, 3);
x_201 = lean_ctor_get_uint8(x_9, 4);
x_202 = lean_ctor_get_uint8(x_9, 6);
x_203 = lean_ctor_get_uint8(x_9, 7);
x_204 = lean_ctor_get_uint8(x_9, 8);
x_205 = lean_ctor_get_uint8(x_9, 9);
lean_dec(x_9);
x_206 = 2;
x_207 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_207, 0, x_197);
lean_ctor_set_uint8(x_207, 1, x_198);
lean_ctor_set_uint8(x_207, 2, x_199);
lean_ctor_set_uint8(x_207, 3, x_200);
lean_ctor_set_uint8(x_207, 4, x_201);
lean_ctor_set_uint8(x_207, 5, x_206);
lean_ctor_set_uint8(x_207, 6, x_202);
lean_ctor_set_uint8(x_207, 7, x_203);
lean_ctor_set_uint8(x_207, 8, x_204);
lean_ctor_set_uint8(x_207, 9, x_205);
lean_ctor_set(x_3, 0, x_207);
x_208 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_209 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_2, x_208, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
switch (lean_obj_tag(x_211)) {
case 0:
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_212 = lean_ctor_get(x_209, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_213 = x_209;
} else {
 lean_dec_ref(x_209);
 x_213 = lean_box(0);
}
x_214 = lean_ctor_get(x_210, 1);
lean_inc(x_214);
lean_dec(x_210);
lean_inc(x_1);
x_215 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_216 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(x_1, x_211);
lean_dec(x_211);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; 
lean_dec(x_214);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_213)) {
 x_217 = lean_alloc_ctor(0, 2, 0);
} else {
 x_217 = x_213;
}
lean_ctor_set(x_217, 0, x_215);
lean_ctor_set(x_217, 1, x_212);
return x_217;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_213);
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_unsigned_to_nat(0u);
x_220 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_219, x_214, x_218, x_215, x_3, x_4, x_5, x_6, x_212);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_223 = x_220;
} else {
 lean_dec_ref(x_220);
 x_223 = lean_box(0);
}
if (lean_is_scalar(x_223)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_223;
}
lean_ctor_set(x_224, 0, x_221);
lean_ctor_set(x_224, 1, x_222);
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_225 = lean_ctor_get(x_220, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_220, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_227 = x_220;
} else {
 lean_dec_ref(x_220);
 x_227 = lean_box(0);
}
if (lean_is_scalar(x_227)) {
 x_228 = lean_alloc_ctor(1, 2, 0);
} else {
 x_228 = x_227;
}
lean_ctor_set(x_228, 0, x_225);
lean_ctor_set(x_228, 1, x_226);
return x_228;
}
}
}
case 1:
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_229 = lean_ctor_get(x_209, 1);
lean_inc(x_229);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_230 = x_209;
} else {
 lean_dec_ref(x_209);
 x_230 = lean_box(0);
}
x_231 = lean_ctor_get(x_210, 1);
lean_inc(x_231);
lean_dec(x_210);
lean_inc(x_1);
x_232 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_233 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(x_1, x_211);
lean_dec(x_211);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; 
lean_dec(x_231);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_230)) {
 x_234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_234 = x_230;
}
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_229);
return x_234;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; 
lean_dec(x_230);
x_235 = lean_ctor_get(x_233, 0);
lean_inc(x_235);
lean_dec(x_233);
x_236 = lean_unsigned_to_nat(0u);
x_237 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_236, x_231, x_235, x_232, x_3, x_4, x_5, x_6, x_229);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_240 = x_237;
} else {
 lean_dec_ref(x_237);
 x_240 = lean_box(0);
}
if (lean_is_scalar(x_240)) {
 x_241 = lean_alloc_ctor(0, 2, 0);
} else {
 x_241 = x_240;
}
lean_ctor_set(x_241, 0, x_238);
lean_ctor_set(x_241, 1, x_239);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_242 = lean_ctor_get(x_237, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_237, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_244 = x_237;
} else {
 lean_dec_ref(x_237);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_242);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
}
}
case 2:
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_246 = lean_ctor_get(x_209, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_247 = x_209;
} else {
 lean_dec_ref(x_209);
 x_247 = lean_box(0);
}
x_248 = lean_ctor_get(x_210, 1);
lean_inc(x_248);
lean_dec(x_210);
lean_inc(x_1);
x_249 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_250 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(x_1, x_211);
lean_dec(x_211);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; 
lean_dec(x_248);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_247)) {
 x_251 = lean_alloc_ctor(0, 2, 0);
} else {
 x_251 = x_247;
}
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_246);
return x_251;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_247);
x_252 = lean_ctor_get(x_250, 0);
lean_inc(x_252);
lean_dec(x_250);
x_253 = lean_unsigned_to_nat(0u);
x_254 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_253, x_248, x_252, x_249, x_3, x_4, x_5, x_6, x_246);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_257 = x_254;
} else {
 lean_dec_ref(x_254);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_259 = lean_ctor_get(x_254, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_254, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_261 = x_254;
} else {
 lean_dec_ref(x_254);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_261;
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
}
}
case 3:
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_210);
x_263 = lean_ctor_get(x_209, 1);
lean_inc(x_263);
lean_dec(x_209);
x_264 = lean_unsigned_to_nat(0u);
x_265 = lean_mk_empty_array_with_capacity(x_264);
x_266 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg(x_1, x_265, x_3, x_4, x_5, x_6, x_263);
lean_dec(x_1);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_266, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_266)) {
 lean_ctor_release(x_266, 0);
 lean_ctor_release(x_266, 1);
 x_269 = x_266;
} else {
 lean_dec_ref(x_266);
 x_269 = lean_box(0);
}
if (lean_is_scalar(x_269)) {
 x_270 = lean_alloc_ctor(0, 2, 0);
} else {
 x_270 = x_269;
}
lean_ctor_set(x_270, 0, x_267);
lean_ctor_set(x_270, 1, x_268);
return x_270;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_266, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_266, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_266)) {
 lean_ctor_release(x_266, 0);
 lean_ctor_release(x_266, 1);
 x_273 = x_266;
} else {
 lean_dec_ref(x_266);
 x_273 = lean_box(0);
}
if (lean_is_scalar(x_273)) {
 x_274 = lean_alloc_ctor(1, 2, 0);
} else {
 x_274 = x_273;
}
lean_ctor_set(x_274, 0, x_271);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
}
case 4:
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_275 = lean_ctor_get(x_209, 1);
lean_inc(x_275);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_276 = x_209;
} else {
 lean_dec_ref(x_209);
 x_276 = lean_box(0);
}
x_277 = lean_ctor_get(x_210, 1);
lean_inc(x_277);
lean_dec(x_210);
lean_inc(x_1);
x_278 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_279 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(x_1, x_211);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; 
lean_dec(x_277);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_276)) {
 x_280 = lean_alloc_ctor(0, 2, 0);
} else {
 x_280 = x_276;
}
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_275);
return x_280;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_276);
x_281 = lean_ctor_get(x_279, 0);
lean_inc(x_281);
lean_dec(x_279);
x_282 = lean_unsigned_to_nat(0u);
x_283 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_282, x_277, x_281, x_278, x_3, x_4, x_5, x_6, x_275);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_283, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_286 = x_283;
} else {
 lean_dec_ref(x_283);
 x_286 = lean_box(0);
}
if (lean_is_scalar(x_286)) {
 x_287 = lean_alloc_ctor(0, 2, 0);
} else {
 x_287 = x_286;
}
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_285);
return x_287;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_288 = lean_ctor_get(x_283, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_283, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_290 = x_283;
} else {
 lean_dec_ref(x_283);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_290)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_290;
}
lean_ctor_set(x_291, 0, x_288);
lean_ctor_set(x_291, 1, x_289);
return x_291;
}
}
}
default: 
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_292 = lean_ctor_get(x_209, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_293 = x_209;
} else {
 lean_dec_ref(x_209);
 x_293 = lean_box(0);
}
x_294 = lean_ctor_get(x_210, 1);
lean_inc(x_294);
lean_dec(x_210);
lean_inc(x_1);
x_295 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_296 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(x_1, x_211);
if (lean_obj_tag(x_296) == 0)
{
lean_object* x_297; 
lean_dec(x_294);
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_293)) {
 x_297 = lean_alloc_ctor(0, 2, 0);
} else {
 x_297 = x_293;
}
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_292);
return x_297;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_293);
x_298 = lean_ctor_get(x_296, 0);
lean_inc(x_298);
lean_dec(x_296);
x_299 = lean_unsigned_to_nat(0u);
x_300 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_299, x_294, x_298, x_295, x_3, x_4, x_5, x_6, x_292);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_300, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_300)) {
 lean_ctor_release(x_300, 0);
 lean_ctor_release(x_300, 1);
 x_303 = x_300;
} else {
 lean_dec_ref(x_300);
 x_303 = lean_box(0);
}
if (lean_is_scalar(x_303)) {
 x_304 = lean_alloc_ctor(0, 2, 0);
} else {
 x_304 = x_303;
}
lean_ctor_set(x_304, 0, x_301);
lean_ctor_set(x_304, 1, x_302);
return x_304;
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_305 = lean_ctor_get(x_300, 0);
lean_inc(x_305);
x_306 = lean_ctor_get(x_300, 1);
lean_inc(x_306);
if (lean_is_exclusive(x_300)) {
 lean_ctor_release(x_300, 0);
 lean_ctor_release(x_300, 1);
 x_307 = x_300;
} else {
 lean_dec_ref(x_300);
 x_307 = lean_box(0);
}
if (lean_is_scalar(x_307)) {
 x_308 = lean_alloc_ctor(1, 2, 0);
} else {
 x_308 = x_307;
}
lean_ctor_set(x_308, 0, x_305);
lean_ctor_set(x_308, 1, x_306);
return x_308;
}
}
}
}
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_309 = lean_ctor_get(x_209, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_209, 1);
lean_inc(x_310);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_311 = x_209;
} else {
 lean_dec_ref(x_209);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(1, 2, 0);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_309);
lean_ctor_set(x_312, 1, x_310);
return x_312;
}
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; uint8_t x_317; uint8_t x_318; uint8_t x_319; uint8_t x_320; uint8_t x_321; uint8_t x_322; uint8_t x_323; uint8_t x_324; uint8_t x_325; lean_object* x_326; uint8_t x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; lean_object* x_331; 
x_313 = lean_ctor_get(x_3, 0);
x_314 = lean_ctor_get(x_3, 1);
x_315 = lean_ctor_get(x_3, 2);
x_316 = lean_ctor_get(x_3, 3);
lean_inc(x_316);
lean_inc(x_315);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_3);
x_317 = lean_ctor_get_uint8(x_313, 0);
x_318 = lean_ctor_get_uint8(x_313, 1);
x_319 = lean_ctor_get_uint8(x_313, 2);
x_320 = lean_ctor_get_uint8(x_313, 3);
x_321 = lean_ctor_get_uint8(x_313, 4);
x_322 = lean_ctor_get_uint8(x_313, 6);
x_323 = lean_ctor_get_uint8(x_313, 7);
x_324 = lean_ctor_get_uint8(x_313, 8);
x_325 = lean_ctor_get_uint8(x_313, 9);
if (lean_is_exclusive(x_313)) {
 x_326 = x_313;
} else {
 lean_dec_ref(x_313);
 x_326 = lean_box(0);
}
x_327 = 2;
if (lean_is_scalar(x_326)) {
 x_328 = lean_alloc_ctor(0, 0, 10);
} else {
 x_328 = x_326;
}
lean_ctor_set_uint8(x_328, 0, x_317);
lean_ctor_set_uint8(x_328, 1, x_318);
lean_ctor_set_uint8(x_328, 2, x_319);
lean_ctor_set_uint8(x_328, 3, x_320);
lean_ctor_set_uint8(x_328, 4, x_321);
lean_ctor_set_uint8(x_328, 5, x_327);
lean_ctor_set_uint8(x_328, 6, x_322);
lean_ctor_set_uint8(x_328, 7, x_323);
lean_ctor_set_uint8(x_328, 8, x_324);
lean_ctor_set_uint8(x_328, 9, x_325);
x_329 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_314);
lean_ctor_set(x_329, 2, x_315);
lean_ctor_set(x_329, 3, x_316);
x_330 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_329);
x_331 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getKeyArgs(x_2, x_330, x_329, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_331) == 0)
{
lean_object* x_332; lean_object* x_333; 
x_332 = lean_ctor_get(x_331, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
switch (lean_obj_tag(x_333)) {
case 0:
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_334 = lean_ctor_get(x_331, 1);
lean_inc(x_334);
if (lean_is_exclusive(x_331)) {
 lean_ctor_release(x_331, 0);
 lean_ctor_release(x_331, 1);
 x_335 = x_331;
} else {
 lean_dec_ref(x_331);
 x_335 = lean_box(0);
}
x_336 = lean_ctor_get(x_332, 1);
lean_inc(x_336);
lean_dec(x_332);
lean_inc(x_1);
x_337 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_338 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(x_1, x_333);
lean_dec(x_333);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; 
lean_dec(x_336);
lean_dec(x_329);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_335)) {
 x_339 = lean_alloc_ctor(0, 2, 0);
} else {
 x_339 = x_335;
}
lean_ctor_set(x_339, 0, x_337);
lean_ctor_set(x_339, 1, x_334);
return x_339;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_335);
x_340 = lean_ctor_get(x_338, 0);
lean_inc(x_340);
lean_dec(x_338);
x_341 = lean_unsigned_to_nat(0u);
x_342 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_341, x_336, x_340, x_337, x_329, x_4, x_5, x_6, x_334);
if (lean_obj_tag(x_342) == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_345 = x_342;
} else {
 lean_dec_ref(x_342);
 x_345 = lean_box(0);
}
if (lean_is_scalar(x_345)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_345;
}
lean_ctor_set(x_346, 0, x_343);
lean_ctor_set(x_346, 1, x_344);
return x_346;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_347 = lean_ctor_get(x_342, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_342, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_349 = x_342;
} else {
 lean_dec_ref(x_342);
 x_349 = lean_box(0);
}
if (lean_is_scalar(x_349)) {
 x_350 = lean_alloc_ctor(1, 2, 0);
} else {
 x_350 = x_349;
}
lean_ctor_set(x_350, 0, x_347);
lean_ctor_set(x_350, 1, x_348);
return x_350;
}
}
}
case 1:
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_351 = lean_ctor_get(x_331, 1);
lean_inc(x_351);
if (lean_is_exclusive(x_331)) {
 lean_ctor_release(x_331, 0);
 lean_ctor_release(x_331, 1);
 x_352 = x_331;
} else {
 lean_dec_ref(x_331);
 x_352 = lean_box(0);
}
x_353 = lean_ctor_get(x_332, 1);
lean_inc(x_353);
lean_dec(x_332);
lean_inc(x_1);
x_354 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_355 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(x_1, x_333);
lean_dec(x_333);
if (lean_obj_tag(x_355) == 0)
{
lean_object* x_356; 
lean_dec(x_353);
lean_dec(x_329);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_352)) {
 x_356 = lean_alloc_ctor(0, 2, 0);
} else {
 x_356 = x_352;
}
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_351);
return x_356;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_dec(x_352);
x_357 = lean_ctor_get(x_355, 0);
lean_inc(x_357);
lean_dec(x_355);
x_358 = lean_unsigned_to_nat(0u);
x_359 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_358, x_353, x_357, x_354, x_329, x_4, x_5, x_6, x_351);
if (lean_obj_tag(x_359) == 0)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_360 = lean_ctor_get(x_359, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 1);
lean_inc(x_361);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 x_362 = x_359;
} else {
 lean_dec_ref(x_359);
 x_362 = lean_box(0);
}
if (lean_is_scalar(x_362)) {
 x_363 = lean_alloc_ctor(0, 2, 0);
} else {
 x_363 = x_362;
}
lean_ctor_set(x_363, 0, x_360);
lean_ctor_set(x_363, 1, x_361);
return x_363;
}
else
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_364 = lean_ctor_get(x_359, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_359, 1);
lean_inc(x_365);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 x_366 = x_359;
} else {
 lean_dec_ref(x_359);
 x_366 = lean_box(0);
}
if (lean_is_scalar(x_366)) {
 x_367 = lean_alloc_ctor(1, 2, 0);
} else {
 x_367 = x_366;
}
lean_ctor_set(x_367, 0, x_364);
lean_ctor_set(x_367, 1, x_365);
return x_367;
}
}
}
case 2:
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
x_368 = lean_ctor_get(x_331, 1);
lean_inc(x_368);
if (lean_is_exclusive(x_331)) {
 lean_ctor_release(x_331, 0);
 lean_ctor_release(x_331, 1);
 x_369 = x_331;
} else {
 lean_dec_ref(x_331);
 x_369 = lean_box(0);
}
x_370 = lean_ctor_get(x_332, 1);
lean_inc(x_370);
lean_dec(x_332);
lean_inc(x_1);
x_371 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_372 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(x_1, x_333);
lean_dec(x_333);
if (lean_obj_tag(x_372) == 0)
{
lean_object* x_373; 
lean_dec(x_370);
lean_dec(x_329);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_369)) {
 x_373 = lean_alloc_ctor(0, 2, 0);
} else {
 x_373 = x_369;
}
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_368);
return x_373;
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; 
lean_dec(x_369);
x_374 = lean_ctor_get(x_372, 0);
lean_inc(x_374);
lean_dec(x_372);
x_375 = lean_unsigned_to_nat(0u);
x_376 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_375, x_370, x_374, x_371, x_329, x_4, x_5, x_6, x_368);
if (lean_obj_tag(x_376) == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; 
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
if (lean_is_exclusive(x_376)) {
 lean_ctor_release(x_376, 0);
 lean_ctor_release(x_376, 1);
 x_379 = x_376;
} else {
 lean_dec_ref(x_376);
 x_379 = lean_box(0);
}
if (lean_is_scalar(x_379)) {
 x_380 = lean_alloc_ctor(0, 2, 0);
} else {
 x_380 = x_379;
}
lean_ctor_set(x_380, 0, x_377);
lean_ctor_set(x_380, 1, x_378);
return x_380;
}
else
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_381 = lean_ctor_get(x_376, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_376, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_376)) {
 lean_ctor_release(x_376, 0);
 lean_ctor_release(x_376, 1);
 x_383 = x_376;
} else {
 lean_dec_ref(x_376);
 x_383 = lean_box(0);
}
if (lean_is_scalar(x_383)) {
 x_384 = lean_alloc_ctor(1, 2, 0);
} else {
 x_384 = x_383;
}
lean_ctor_set(x_384, 0, x_381);
lean_ctor_set(x_384, 1, x_382);
return x_384;
}
}
}
case 3:
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_332);
x_385 = lean_ctor_get(x_331, 1);
lean_inc(x_385);
lean_dec(x_331);
x_386 = lean_unsigned_to_nat(0u);
x_387 = lean_mk_empty_array_with_capacity(x_386);
x_388 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg(x_1, x_387, x_329, x_4, x_5, x_6, x_385);
lean_dec(x_1);
if (lean_obj_tag(x_388) == 0)
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
if (lean_is_exclusive(x_388)) {
 lean_ctor_release(x_388, 0);
 lean_ctor_release(x_388, 1);
 x_391 = x_388;
} else {
 lean_dec_ref(x_388);
 x_391 = lean_box(0);
}
if (lean_is_scalar(x_391)) {
 x_392 = lean_alloc_ctor(0, 2, 0);
} else {
 x_392 = x_391;
}
lean_ctor_set(x_392, 0, x_389);
lean_ctor_set(x_392, 1, x_390);
return x_392;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; 
x_393 = lean_ctor_get(x_388, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_388, 1);
lean_inc(x_394);
if (lean_is_exclusive(x_388)) {
 lean_ctor_release(x_388, 0);
 lean_ctor_release(x_388, 1);
 x_395 = x_388;
} else {
 lean_dec_ref(x_388);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(1, 2, 0);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_393);
lean_ctor_set(x_396, 1, x_394);
return x_396;
}
}
case 4:
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_397 = lean_ctor_get(x_331, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_331)) {
 lean_ctor_release(x_331, 0);
 lean_ctor_release(x_331, 1);
 x_398 = x_331;
} else {
 lean_dec_ref(x_331);
 x_398 = lean_box(0);
}
x_399 = lean_ctor_get(x_332, 1);
lean_inc(x_399);
lean_dec(x_332);
lean_inc(x_1);
x_400 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_401 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(x_1, x_333);
if (lean_obj_tag(x_401) == 0)
{
lean_object* x_402; 
lean_dec(x_399);
lean_dec(x_329);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_398)) {
 x_402 = lean_alloc_ctor(0, 2, 0);
} else {
 x_402 = x_398;
}
lean_ctor_set(x_402, 0, x_400);
lean_ctor_set(x_402, 1, x_397);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
lean_dec(x_398);
x_403 = lean_ctor_get(x_401, 0);
lean_inc(x_403);
lean_dec(x_401);
x_404 = lean_unsigned_to_nat(0u);
x_405 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_404, x_399, x_403, x_400, x_329, x_4, x_5, x_6, x_397);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; 
x_406 = lean_ctor_get(x_405, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_405, 1);
lean_inc(x_407);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 x_408 = x_405;
} else {
 lean_dec_ref(x_405);
 x_408 = lean_box(0);
}
if (lean_is_scalar(x_408)) {
 x_409 = lean_alloc_ctor(0, 2, 0);
} else {
 x_409 = x_408;
}
lean_ctor_set(x_409, 0, x_406);
lean_ctor_set(x_409, 1, x_407);
return x_409;
}
else
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_410 = lean_ctor_get(x_405, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_405, 1);
lean_inc(x_411);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 x_412 = x_405;
} else {
 lean_dec_ref(x_405);
 x_412 = lean_box(0);
}
if (lean_is_scalar(x_412)) {
 x_413 = lean_alloc_ctor(1, 2, 0);
} else {
 x_413 = x_412;
}
lean_ctor_set(x_413, 0, x_410);
lean_ctor_set(x_413, 1, x_411);
return x_413;
}
}
}
default: 
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_414 = lean_ctor_get(x_331, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_331)) {
 lean_ctor_release(x_331, 0);
 lean_ctor_release(x_331, 1);
 x_415 = x_331;
} else {
 lean_dec_ref(x_331);
 x_415 = lean_box(0);
}
x_416 = lean_ctor_get(x_332, 1);
lean_inc(x_416);
lean_dec(x_332);
lean_inc(x_1);
x_417 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_getStarResult___rarg(x_1);
x_418 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(x_1, x_333);
if (lean_obj_tag(x_418) == 0)
{
lean_object* x_419; 
lean_dec(x_416);
lean_dec(x_329);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_415)) {
 x_419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_419 = x_415;
}
lean_ctor_set(x_419, 0, x_417);
lean_ctor_set(x_419, 1, x_414);
return x_419;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; 
lean_dec(x_415);
x_420 = lean_ctor_get(x_418, 0);
lean_inc(x_420);
lean_dec(x_418);
x_421 = lean_unsigned_to_nat(0u);
x_422 = l_Lean_Meta_DiscrTree_getUnify_process___rarg(x_421, x_416, x_420, x_417, x_329, x_4, x_5, x_6, x_414);
if (lean_obj_tag(x_422) == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 x_425 = x_422;
} else {
 lean_dec_ref(x_422);
 x_425 = lean_box(0);
}
if (lean_is_scalar(x_425)) {
 x_426 = lean_alloc_ctor(0, 2, 0);
} else {
 x_426 = x_425;
}
lean_ctor_set(x_426, 0, x_423);
lean_ctor_set(x_426, 1, x_424);
return x_426;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_427 = lean_ctor_get(x_422, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_422, 1);
lean_inc(x_428);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 x_429 = x_422;
} else {
 lean_dec_ref(x_422);
 x_429 = lean_box(0);
}
if (lean_is_scalar(x_429)) {
 x_430 = lean_alloc_ctor(1, 2, 0);
} else {
 x_430 = x_429;
}
lean_ctor_set(x_430, 0, x_427);
lean_ctor_set(x_430, 1, x_428);
return x_430;
}
}
}
}
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; 
lean_dec(x_329);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_431 = lean_ctor_get(x_331, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_331, 1);
lean_inc(x_432);
if (lean_is_exclusive(x_331)) {
 lean_ctor_release(x_331, 0);
 lean_ctor_release(x_331, 1);
 x_433 = x_331;
} else {
 lean_dec_ref(x_331);
 x_433 = lean_box(0);
}
if (lean_is_scalar(x_433)) {
 x_434 = lean_alloc_ctor(1, 2, 0);
} else {
 x_434 = x_433;
}
lean_ctor_set(x_434, 0, x_431);
lean_ctor_set(x_434, 1, x_432);
return x_434;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_getUnify(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_getUnify___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__2___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__5___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__8___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__7___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_getUnify___spec__12___rarg(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_getUnify___spec__11___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_getUnify___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__16___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__15___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__14___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_DiscrTree_getUnify___spec__19___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_DiscrTree_getUnify___spec__18___rarg(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_DiscrTree_getUnify___spec__17___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_FunInfo(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_DiscrTree(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_DiscrTree_instLTKey = _init_l_Lean_Meta_DiscrTree_instLTKey();
lean_mark_persistent(l_Lean_Meta_DiscrTree_instLTKey);
l_Lean_Meta_DiscrTree_instToFormatKey = _init_l_Lean_Meta_DiscrTree_instToFormatKey();
lean_mark_persistent(l_Lean_Meta_DiscrTree_instToFormatKey);
l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId = _init_l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpMVarId);
l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpStar = _init_l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpStar();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_tmpStar);
l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity = _init_l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
