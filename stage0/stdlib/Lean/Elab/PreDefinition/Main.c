// Lean compiler output
// Module: Lean.Elab.PreDefinition.Main
// Imports: Init Lean.Elab.PreDefinition.Basic Lean.Elab.PreDefinition.Structural Lean.Elab.PreDefinition.WF
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7(lean_object*, size_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SCC_scc___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__4(lean_object*, size_t, size_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__14(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__8___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__25(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_modifyDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__18(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__1(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_resetOnStack___rarg___lambda__1(lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_resetOnStack___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__22(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_List_map___at_Lean_Elab_addPreDefinitions___spec__3(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___lambda__1(lean_object*, lean_object*);
lean_object* l_Std_mkHashSetImp___rarg(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__23(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__2(lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive_match__1(lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Main___hyg_800_(lean_object*);
lean_object* l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(lean_object*, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef_match__1(lean_object*);
lean_object* l_Lean_Elab_mkInhabitantFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___rarg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__6(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_push___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__10(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__3(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7___boxed(lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__4(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC_add___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5(lean_object*, size_t, size_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Name_hash(lean_object*);
lean_object* l_Std_AssocList_replace___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_collectMVarsAtPreDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__24(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition;
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_collectMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs(lean_object*);
lean_object* l_Std_HashMapImp_expand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__13(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6___boxed(lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addPreDefinitions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive(lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__26(lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__15(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC_add___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_updateLowLinkOf___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___boxed__const__1;
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_collectMVarsAtPreDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12___boxed(lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addPreDefinitions___boxed__const__1;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__4(lean_object*, size_t, size_t);
extern lean_object* l_Lean_Expr_FoldConstsImpl_initCache;
lean_object* l_Lean_Elab_WFRecursion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___lambda__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20___boxed(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__3(lean_object*, size_t, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___boxed(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__8(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_updateLowLinkOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__17(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Meta_Basic_0__Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_245____spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_13);
x_14 = l_Lean_Elab_mkInhabitantFor(x_13, x_4, x_5, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_43 = lean_st_ref_get(x_11, x_16);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_44, 3);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_ctor_get_uint8(x_45, sizeof(void*)*1);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
x_48 = 0;
x_17 = x_48;
x_18 = x_47;
goto block_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_dec(x_43);
lean_inc(x_3);
x_50 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_unbox(x_51);
lean_dec(x_51);
x_17 = x_53;
x_18 = x_52;
goto block_42;
}
block_42:
{
if (x_17 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
lean_dec(x_3);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
lean_dec(x_1);
x_22 = 3;
x_23 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_13);
lean_ctor_set(x_23, 4, x_2);
lean_ctor_set(x_23, 5, x_15);
lean_ctor_set_uint8(x_23, sizeof(void*)*6, x_22);
x_24 = 0;
x_25 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_23, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_26 = lean_mk_string("inhabitant for ");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
lean_inc(x_13);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_13);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_string("");
x_31 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_3, x_32, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
lean_dec(x_1);
x_38 = 3;
x_39 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_39, 0, x_35);
lean_ctor_set(x_39, 1, x_36);
lean_ctor_set(x_39, 2, x_37);
lean_ctor_set(x_39, 3, x_13);
lean_ctor_set(x_39, 4, x_2);
lean_ctor_set(x_39, 5, x_15);
lean_ctor_set_uint8(x_39, sizeof(void*)*6, x_38);
x_40 = 0;
x_41 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_39, x_40, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
return x_41;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_14);
if (x_54 == 0)
{
return x_14;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_14, 0);
x_56 = lean_ctor_get(x_14, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_14);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_31; lean_object* x_32; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Elab");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("definition");
x_13 = lean_name_mk_string(x_11, x_12);
x_44 = lean_st_ref_get(x_7, x_8);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_45, 3);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_ctor_get_uint8(x_46, sizeof(void*)*1);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_dec(x_44);
x_49 = 0;
x_31 = x_49;
x_32 = x_48;
goto block_43;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
lean_dec(x_44);
lean_inc(x_13);
x_51 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_unbox(x_52);
lean_dec(x_52);
x_31 = x_54;
x_32 = x_53;
goto block_43;
}
block_30:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__1___boxed), 12, 3);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_15);
lean_closure_set(x_16, 2, x_13);
x_17 = l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg(x_15, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_17);
if (x_26 == 0)
{
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
block_43:
{
if (x_31 == 0)
{
x_14 = x_32;
goto block_30;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_33 = lean_mk_string("processing ");
x_34 = l_Lean_stringToMessageData(x_33);
lean_dec(x_33);
x_35 = lean_ctor_get(x_1, 3);
lean_inc(x_35);
x_36 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("");
x_39 = l_Lean_stringToMessageData(x_38);
lean_dec(x_38);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_13);
x_41 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_13, x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_32);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_14 = x_42;
goto block_30;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__3(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
lean_dec(x_6);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_9(x_16, lean_box(0), x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
else
{
lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_6, 0);
lean_inc(x_18);
lean_dec(x_6);
x_19 = 1;
x_20 = x_2 + x_19;
x_21 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1(x_3, x_1, x_4, x_5, x_20, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_21;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_5 < x_4;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_9(x_16, lean_box(0), x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_6);
x_18 = lean_array_uget(x_3, x_5);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
x_20 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__2), 8, 1);
lean_closure_set(x_20, 0, x_18);
x_21 = lean_box_usize(x_5);
x_22 = lean_box_usize(x_4);
x_23 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__3___boxed), 13, 5);
lean_closure_set(x_23, 0, x_2);
lean_closure_set(x_23, 1, x_21);
lean_closure_set(x_23, 2, x_1);
lean_closure_set(x_23, 3, x_3);
lean_closure_set(x_23, 4, x_22);
x_24 = lean_apply_11(x_19, lean_box(0), lean_box(0), x_20, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_24;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_9 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_10 = l_ReaderT_instMonadReaderT___rarg(x_9);
x_11 = l_ReaderT_instMonadReaderT___rarg(x_10);
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
lean_inc(x_13);
x_14 = l_ReaderT_instMonadReaderT___rarg(x_13);
x_15 = l_ReaderT_instMonadReaderT___rarg(x_14);
x_16 = lean_array_get_size(x_1);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_20 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1(x_13, x_15, x_1, x_17, x_18, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_addAndCompilePartialRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
return x_13;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___lambda__3(x_1, x_14, x_3, x_4, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial___spec__1(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_1, 3);
x_5 = lean_name_eq(x_4, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_ctor_get(x_1, 5);
lean_inc(x_3);
lean_dec(x_1);
x_4 = 8192;
x_5 = l_Lean_Expr_FindImpl_initCache;
x_6 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_2, x_4, x_3, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 0;
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
size_t x_11; size_t x_12; 
lean_dec(x_8);
x_11 = 1;
x_12 = x_5 + x_11;
{
size_t _tmp_4 = x_12;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_8);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 3);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__2(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
size_t x_11; size_t x_12; 
lean_dec(x_8);
x_11 = 1;
x_12 = x_5 + x_11;
{
size_t _tmp_4 = x_12;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_8);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = (size_t)x_5;
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Std_AssocList_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__8(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
x_4 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7(x_3, x_1);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
x_6 = 0;
x_7 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*2, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
return x_10;
}
}
}
uint8_t l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = (size_t)x_7;
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l_Lean_Name_hash(x_13);
x_18 = (size_t)x_17;
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__15(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__14(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__16(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__16(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = (size_t)x_8;
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = lean_nat_dec_le(x_14, x_7);
lean_dec(x_7);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_1);
x_18 = l_Std_HashMapImp_expand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__13(x_14, x_16);
return x_18;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
x_19 = l_Std_AssocList_replace___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__16(x_2, x_3, x_11);
x_20 = lean_array_uset(x_6, x_10, x_19);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; size_t x_25; size_t x_26; lean_object* x_27; uint8_t x_28; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = l_Lean_Name_hash(x_2);
x_25 = (size_t)x_24;
x_26 = lean_usize_modn(x_25, x_23);
x_27 = lean_array_uget(x_22, x_26);
x_28 = l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12(x_2, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_21, x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_27);
x_32 = lean_array_uset(x_22, x_26, x_31);
x_33 = lean_nat_dec_le(x_30, x_23);
lean_dec(x_23);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Std_HashMapImp_expand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__13(x_30, x_32);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_36 = l_Std_AssocList_replace___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__16(x_2, x_3, x_27);
x_37 = lean_array_uset(x_22, x_26, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_push___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_5, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_5);
x_11 = 1;
lean_inc(x_10);
x_12 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_11);
x_13 = l_Std_HashMapImp_insert___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__11(x_6, x_1, x_12);
lean_ctor_set(x_2, 2, x_13);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_7);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_2);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = lean_ctor_get(x_2, 1);
x_18 = lean_ctor_get(x_2, 2);
x_19 = lean_ctor_get(x_2, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_2);
lean_inc(x_1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_16);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_17, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_17);
x_24 = 1;
lean_inc(x_23);
x_25 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*2, x_24);
x_26 = l_Std_HashMapImp_insert___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__11(x_18, x_1, x_25);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_26);
lean_ctor_set(x_27, 3, x_19);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_modifyDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 2);
x_6 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7(x_5, x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_1(x_2, x_9);
x_11 = l_Std_HashMapImp_insert___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__11(x_5, x_1, x_10);
lean_ctor_set(x_3, 2, x_11);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
x_17 = lean_ctor_get(x_3, 3);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_18 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7(x_16, x_1);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_17);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_apply_1(x_2, x_22);
x_24 = l_Std_HashMapImp_insert___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__11(x_16, x_1, x_23);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_14);
lean_ctor_set(x_25, 1, x_15);
lean_ctor_set(x_25, 2, x_24);
lean_ctor_set(x_25, 3, x_17);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_updateLowLinkOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l___private_Lean_Util_SCC_0__Lean_SCC_updateLowLinkOf___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l___private_Lean_Util_SCC_0__Lean_SCC_modifyDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__18(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(x_7, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_1);
x_13 = l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9(x_1, x_7, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(x_7, x_14);
lean_dec(x_7);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_2);
x_19 = l___private_Lean_Util_SCC_0__Lean_SCC_updateLowLinkOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__17(x_2, x_18, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_3 = x_8;
x_4 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_7);
x_22 = lean_ctor_get_uint8(x_10, sizeof(void*)*2);
lean_dec(x_10);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_11);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
x_3 = x_8;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_dec(x_9);
lean_inc(x_2);
x_26 = l___private_Lean_Util_SCC_0__Lean_SCC_updateLowLinkOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__17(x_2, x_11, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_3 = x_8;
x_4 = x_27;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_resetOnStack___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Util_SCC_0__Lean_SCC_resetOnStack___rarg___lambda__1), 1, 0);
x_4 = l___private_Lean_Util_SCC_0__Lean_SCC_modifyDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__18(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC_add___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_box(0);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = lean_ctor_get(x_4, 0);
lean_dec(x_8);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_4, 3, x_9);
lean_ctor_set(x_4, 0, x_5);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_13);
lean_ctor_set(x_16, 3, x_15);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_2);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Util_SCC_0__Lean_SCC_resetOnStack___rarg___lambda__1), 1, 0);
lean_inc(x_20);
x_23 = l___private_Lean_Util_SCC_0__Lean_SCC_modifyDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__18(x_20, x_22, x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_23, 1);
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
lean_inc(x_20);
lean_ctor_set(x_2, 1, x_3);
x_27 = lean_name_eq(x_1, x_20);
lean_dec(x_20);
if (x_27 == 0)
{
lean_free_object(x_23);
{
lean_object* _tmp_1 = x_21;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_3 = x_25;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_25, 3);
x_31 = lean_ctor_get(x_25, 0);
lean_dec(x_31);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_25, 3, x_32);
lean_ctor_set(x_25, 0, x_21);
x_33 = lean_box(0);
lean_ctor_set(x_23, 0, x_33);
return x_23;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_25, 1);
x_35 = lean_ctor_get(x_25, 2);
x_36 = lean_ctor_get(x_25, 3);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_25);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_34);
lean_ctor_set(x_38, 2, x_35);
lean_ctor_set(x_38, 3, x_37);
x_39 = lean_box(0);
lean_ctor_set(x_23, 1, x_38);
lean_ctor_set(x_23, 0, x_39);
return x_23;
}
}
}
else
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_23, 1);
lean_inc(x_40);
lean_dec(x_23);
lean_inc(x_20);
lean_ctor_set(x_2, 1, x_3);
x_41 = lean_name_eq(x_1, x_20);
lean_dec(x_20);
if (x_41 == 0)
{
{
lean_object* _tmp_1 = x_21;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_3 = x_40;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 2);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 3);
lean_inc(x_45);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 x_46 = x_40;
} else {
 lean_dec_ref(x_40);
 x_46 = lean_box(0);
}
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_2);
lean_ctor_set(x_47, 1, x_45);
if (lean_is_scalar(x_46)) {
 x_48 = lean_alloc_ctor(0, 4, 0);
} else {
 x_48 = x_46;
}
lean_ctor_set(x_48, 0, x_21);
lean_ctor_set(x_48, 1, x_43);
lean_ctor_set(x_48, 2, x_44);
lean_ctor_set(x_48, 3, x_47);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_51 = lean_ctor_get(x_2, 0);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_2);
x_53 = lean_alloc_closure((void*)(l___private_Lean_Util_SCC_0__Lean_SCC_resetOnStack___rarg___lambda__1), 1, 0);
lean_inc(x_51);
x_54 = l___private_Lean_Util_SCC_0__Lean_SCC_modifyDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__18(x_51, x_53, x_4);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
lean_inc(x_51);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_51);
lean_ctor_set(x_57, 1, x_3);
x_58 = lean_name_eq(x_1, x_51);
lean_dec(x_51);
if (x_58 == 0)
{
lean_dec(x_56);
x_2 = x_52;
x_3 = x_57;
x_4 = x_55;
goto _start;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_55, 2);
lean_inc(x_61);
x_62 = lean_ctor_get(x_55, 3);
lean_inc(x_62);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 lean_ctor_release(x_55, 2);
 lean_ctor_release(x_55, 3);
 x_63 = x_55;
} else {
 lean_dec_ref(x_55);
 x_63 = lean_box(0);
}
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_57);
lean_ctor_set(x_64, 1, x_62);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 4, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_52);
lean_ctor_set(x_65, 1, x_60);
lean_ctor_set(x_65, 2, x_61);
lean_ctor_set(x_65, 3, x_64);
x_66 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_56;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_box(0);
x_5 = l___private_Lean_Util_SCC_0__Lean_SCC_addSCC_add___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__21(x_1, x_3, x_4, x_2);
return x_5;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___lambda__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_1);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_1, x_1);
if (x_9 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
uint8_t x_10; 
x_10 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__4(x_5, x_2, x_3, x_4);
if (x_10 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; 
lean_inc(x_2);
x_4 = l___private_Lean_Util_SCC_0__Lean_SCC_push___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__10(x_2, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
x_11 = 0;
x_12 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__3(x_2, x_8, x_1, x_10, x_11, x_8);
lean_dec(x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___boxed__const__1;
x_16 = lean_box_usize(x_10);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___lambda__1___boxed), 6, 4);
lean_closure_set(x_17, 0, x_9);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_15);
lean_closure_set(x_17, 3, x_16);
x_18 = 8192;
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_38 = lean_mk_string("Init.Data.Option.BasicAux");
x_39 = lean_mk_string("Option.get!");
x_40 = lean_unsigned_to_nat(16u);
x_41 = lean_unsigned_to_nat(14u);
x_42 = lean_mk_string("value is none");
x_43 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_38, x_39, x_40, x_41, x_42);
lean_dec(x_42);
lean_dec(x_39);
lean_dec(x_38);
x_44 = l_Lean_Elab_instInhabitedPreDefinition;
x_45 = lean_panic_fn(x_44, x_43);
x_46 = lean_ctor_get(x_45, 5);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Expr_FoldConstsImpl_initCache;
x_48 = l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(x_17, x_18, x_46, x_14, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
x_19 = x_49;
goto block_37;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_13, 0);
lean_inc(x_50);
lean_dec(x_13);
x_51 = lean_ctor_get(x_50, 5);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_Expr_FoldConstsImpl_initCache;
x_53 = l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(x_17, x_18, x_51, x_14, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
lean_dec(x_53);
x_19 = x_54;
goto block_37;
}
block_37:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_inc(x_2);
x_20 = l_List_forM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__19(x_1, x_2, x_19, x_5);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(x_2, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 0);
lean_inc(x_27);
lean_dec(x_24);
x_28 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Meta_Basic_0__Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_245____spec__1(x_26, x_27);
lean_dec(x_27);
lean_dec(x_26);
if (x_28 == 0)
{
lean_dec(x_2);
lean_ctor_set(x_22, 0, x_7);
return x_22;
}
else
{
lean_object* x_29; 
lean_free_object(x_22);
x_29 = l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20(x_2, x_25);
lean_dec(x_2);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
lean_dec(x_30);
x_34 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Meta_Basic_0__Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_245____spec__1(x_32, x_33);
lean_dec(x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_2);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_7);
lean_ctor_set(x_35, 1, x_31);
return x_35;
}
else
{
lean_object* x_36; 
x_36 = l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20(x_2, x_31);
lean_dec(x_2);
return x_36;
}
}
}
}
}
lean_object* l_Std_mkHashMap___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__23(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(x_6, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9(x_1, x_6, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_2 = x_7;
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_6);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_2 = x_7;
x_3 = x_15;
goto _start;
}
}
}
}
lean_object* l_Lean_SCC_scc___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_box(0);
x_4 = lean_unsigned_to_nat(8u);
x_5 = l_Std_mkHashMapImp___rarg(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_3);
x_8 = l_List_forM___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__24(x_1, x_2, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_List_reverse___rarg(x_10);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__25(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__1(x_10, x_13, x_1, x_15, x_16, x_13);
lean_dec(x_13);
lean_dec(x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 1;
x_20 = x_3 + x_19;
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_mk_string("Init.Data.Option.BasicAux");
x_22 = lean_mk_string("Option.get!");
x_23 = lean_unsigned_to_nat(16u);
x_24 = lean_unsigned_to_nat(14u);
x_25 = lean_mk_string("value is none");
x_26 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_21, x_22, x_23, x_24, x_25);
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_21);
x_27 = l_Lean_Elab_instInhabitedPreDefinition;
x_28 = lean_panic_fn(x_27, x_26);
x_29 = x_28;
x_30 = lean_array_uset(x_9, x_3, x_29);
x_3 = x_20;
x_4 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
lean_inc(x_32);
lean_dec(x_18);
x_33 = x_32;
x_34 = lean_array_uset(x_9, x_3, x_33);
x_3 = x_20;
x_4 = x_34;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__26(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = l_List_redLength___rarg(x_10);
x_12 = lean_mk_empty_array_with_capacity(x_11);
lean_dec(x_11);
x_13 = l_List_toArrayAux___rarg(x_10, x_12);
x_14 = lean_array_get_size(x_13);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = x_13;
x_18 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__25(x_1, x_15, x_16, x_17);
x_19 = x_18;
x_20 = 1;
x_21 = x_3 + x_20;
x_22 = x_19;
x_23 = lean_array_uset(x_9, x_3, x_22);
x_3 = x_21;
x_4 = x_23;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_2 = lean_array_to_list(lean_box(0), x_1);
x_3 = l_List_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__2(x_2);
lean_inc(x_1);
x_4 = l_Lean_SCC_scc___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__5(x_1, x_3);
x_5 = l_List_redLength___rarg(x_4);
x_6 = lean_mk_empty_array_with_capacity(x_5);
lean_dec(x_5);
x_7 = l_List_toArrayAux___rarg(x_4, x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_10 = 0;
x_11 = x_7;
x_12 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__26(x_1, x_9, x_10, x_11);
lean_dec(x_1);
x_13 = x_12;
return x_13;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__3(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__4(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__8(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Util_SCC_0__Lean_SCC_getDataOf___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__6(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__12(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC_add___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Util_SCC_0__Lean_SCC_addSCC_add___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__21(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Util_SCC_0__Lean_SCC_addSCC___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__20(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___lambda__1(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__25(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__26(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_collectMVarsAtPreDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 5);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = l_Lean_Meta_collectMVars(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Lean_Meta_collectMVars(x_11, x_2, x_3, x_4, x_5, x_6, x_10);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_collectMVarsAtPreDef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_collectMVarsAtPreDef(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_unsigned_to_nat(8u);
x_8 = l_Std_mkHashSetImp___rarg(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_st_ref_get(x_5, x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_st_mk_ref(x_11, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_5);
x_17 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_collectMVarsAtPreDef(x_1, x_15, x_2, x_3, x_4, x_5, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_get(x_5, x_18);
lean_dec(x_5);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_15, x_20);
lean_dec(x_15);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_21);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_17);
if (x_29 == 0)
{
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 0);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_abortCommandExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(x_10, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
x_24 = lean_ctor_get(x_1, 2);
x_25 = lean_ctor_get(x_1, 3);
x_26 = lean_ctor_get(x_1, 4);
x_27 = lean_ctor_get(x_1, 5);
lean_dec(x_27);
x_28 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_26);
x_29 = l_Lean_Meta_mkSorry(x_26, x_28, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_ctor_set(x_1, 5, x_30);
lean_inc(x_1);
x_32 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef(x_1, x_4, x_5, x_6, x_7, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
x_36 = l_Array_isEmpty___rarg(x_34);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_free_object(x_32);
lean_dec(x_1);
x_37 = l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___rarg(x_35);
return x_37;
}
else
{
lean_ctor_set(x_32, 0, x_1);
return x_32;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = l_Array_isEmpty___rarg(x_38);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_1);
x_41 = l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___rarg(x_39);
return x_41;
}
else
{
lean_object* x_42; 
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_32);
if (x_43 == 0)
{
return x_32;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_32, 0);
x_45 = lean_ctor_get(x_32, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_32);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_free_object(x_1);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_47 = !lean_is_exclusive(x_29);
if (x_47 == 0)
{
return x_29;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_29, 0);
x_49 = lean_ctor_get(x_29, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_29);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_1, 0);
x_52 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_53 = lean_ctor_get(x_1, 1);
x_54 = lean_ctor_get(x_1, 2);
x_55 = lean_ctor_get(x_1, 3);
x_56 = lean_ctor_get(x_1, 4);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_51);
lean_dec(x_1);
x_57 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_56);
x_58 = l_Lean_Meta_mkSorry(x_56, x_57, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_61, 0, x_51);
lean_ctor_set(x_61, 1, x_53);
lean_ctor_set(x_61, 2, x_54);
lean_ctor_set(x_61, 3, x_55);
lean_ctor_set(x_61, 4, x_56);
lean_ctor_set(x_61, 5, x_59);
lean_ctor_set_uint8(x_61, sizeof(void*)*6, x_52);
lean_inc(x_61);
x_62 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_getMVarsAtPreDef(x_61, x_4, x_5, x_6, x_7, x_60);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_66 = l_Array_isEmpty___rarg(x_63);
lean_dec(x_63);
if (x_66 == 0)
{
lean_object* x_67; 
lean_dec(x_65);
lean_dec(x_61);
x_67 = l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___rarg(x_64);
return x_67;
}
else
{
lean_object* x_68; 
if (lean_is_scalar(x_65)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_65;
}
lean_ctor_set(x_68, 0, x_61);
lean_ctor_set(x_68, 1, x_64);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_61);
x_69 = lean_ctor_get(x_62, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_62, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_71 = x_62;
} else {
 lean_dec_ref(x_62);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_73 = lean_ctor_get(x_58, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_58, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_75 = x_58;
} else {
 lean_dec_ref(x_58);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_13);
if (x_77 == 0)
{
return x_13;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_13, 0);
x_79 = lean_ctor_get(x_13, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_13);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_9);
if (x_81 == 0)
{
return x_9;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_9, 0);
x_83 = lean_ctor_get(x_9, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_9);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
lean_object* l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwAbortCommand___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_box(0);
x_16 = lean_mk_string("Elab");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("definition");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("body");
x_21 = lean_name_mk_string(x_19, x_20);
x_53 = lean_st_ref_get(x_10, x_11);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_54, 3);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_ctor_get_uint8(x_55, sizeof(void*)*1);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
lean_dec(x_53);
x_58 = 0;
x_22 = x_58;
x_23 = x_57;
goto block_52;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
lean_inc(x_21);
x_60 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unbox(x_61);
lean_dec(x_61);
x_22 = x_63;
x_23 = x_62;
goto block_52;
}
block_52:
{
if (x_22 == 0)
{
size_t x_24; size_t x_25; lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_14);
x_24 = 1;
x_25 = x_3 + x_24;
x_26 = lean_box(0);
x_3 = x_25;
x_4 = x_26;
x_11 = x_23;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; lean_object* x_50; 
x_28 = lean_mk_string("");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = lean_ctor_get(x_14, 3);
lean_inc(x_30);
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_inc(x_29);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_mk_string(" : ");
x_34 = l_Lean_stringToMessageData(x_33);
lean_dec(x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_ctor_get(x_14, 4);
lean_inc(x_36);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_string(" :=\n");
x_40 = l_Lean_stringToMessageData(x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_ctor_get(x_14, 5);
lean_inc(x_42);
lean_dec(x_14);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_29);
x_46 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_21, x_45, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = 1;
x_49 = x_3 + x_48;
x_50 = lean_box(0);
x_3 = x_49;
x_4 = x_50;
x_11 = x_47;
goto _start;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__2(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_ensureNoUnassignedMVarsAtPreDef(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_2 + x_21;
x_23 = x_19;
x_24 = lean_array_uset(x_16, x_2, x_23);
x_2 = x_22;
x_3 = x_24;
x_10 = x_20;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_List_map___at_Lean_Elab_addPreDefinitions___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 3);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = l_Lean_mkConst(x_6, x_7);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_List_map___at_Lean_Elab_addPreDefinitions___spec__3(x_5);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 3);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = l_Lean_mkConst(x_13, x_14);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = l_List_map___at_Lean_Elab_addPreDefinitions___spec__3(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__4(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*2 + 2);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
goto _start;
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
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*2 + 3);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
goto _start;
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
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__6(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 1;
x_12 = x_2 + x_11;
x_13 = x_10;
x_14 = lean_array_uset(x_8, x_2, x_13);
x_2 = x_12;
x_3 = x_14;
goto _start;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = lean_array_to_list(lean_box(0), x_1);
x_4 = l_List_map___at_Lean_Elab_addPreDefinitions___spec__3(x_3);
x_5 = lean_mk_string("fail to show termination for");
x_6 = l_Lean_stringToMessageData(x_5);
lean_dec(x_5);
x_7 = lean_box(1);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = l_Lean_MessageData_joinSep(x_4, x_8);
lean_dec(x_4);
x_10 = l_Lean_indentD(x_9);
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_mk_string("\nwith errors\n");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_2);
x_16 = lean_mk_string("");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_7, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_5, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Elab_Structural_structuralRecursion(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_12, x_4, x_5, x_6, x_7, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Meta_setMCtx(x_18, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = l_Lean_Elab_WFRecursion___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_30, 1);
x_33 = lean_ctor_get(x_30, 0);
lean_dec(x_33);
x_34 = lean_box(1);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
lean_inc(x_35);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_27);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_32);
lean_ctor_set(x_30, 1, x_38);
lean_ctor_set(x_30, 0, x_26);
return x_28;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_dec(x_30);
x_40 = lean_box(1);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_inc(x_41);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_27);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_39);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_26);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_28, 0, x_45);
return x_28;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_46 = lean_ctor_get(x_28, 0);
x_47 = lean_ctor_get(x_28, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_28);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
x_50 = lean_box(1);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
lean_inc(x_51);
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_27);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_48);
if (lean_is_scalar(x_49)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_49;
}
lean_ctor_set(x_55, 0, x_26);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_47);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_24);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_24, 0);
lean_dec(x_58);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_20);
return x_24;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_24, 1);
lean_inc(x_59);
lean_dec(x_24);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_20);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_164 = lean_box(0);
x_165 = lean_mk_string("Elab");
x_166 = lean_name_mk_string(x_164, x_165);
x_167 = lean_mk_string("definition");
x_168 = lean_name_mk_string(x_166, x_167);
x_169 = lean_mk_string("scc");
x_170 = lean_name_mk_string(x_168, x_169);
x_188 = lean_st_ref_get(x_8, x_9);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_189, 3);
lean_inc(x_190);
lean_dec(x_189);
x_191 = lean_ctor_get_uint8(x_190, sizeof(void*)*1);
lean_dec(x_190);
if (x_191 == 0)
{
lean_object* x_192; uint8_t x_193; 
x_192 = lean_ctor_get(x_188, 1);
lean_inc(x_192);
lean_dec(x_188);
x_193 = 0;
x_171 = x_193;
x_172 = x_192;
goto block_187;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; 
x_194 = lean_ctor_get(x_188, 1);
lean_inc(x_194);
lean_dec(x_188);
lean_inc(x_170);
x_195 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_170, x_2, x_3, x_5, x_6, x_7, x_8, x_194);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_198 = lean_unbox(x_196);
lean_dec(x_196);
x_171 = x_198;
x_172 = x_197;
goto block_187;
}
block_163:
{
lean_object* x_11; lean_object* x_60; lean_object* x_61; lean_object* x_84; uint8_t x_85; 
x_60 = lean_array_get_size(x_1);
x_84 = lean_unsigned_to_nat(1u);
x_85 = lean_nat_dec_eq(x_60, x_84);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_unsigned_to_nat(0u);
x_87 = lean_nat_dec_lt(x_86, x_60);
if (x_87 == 0)
{
lean_object* x_88; 
x_88 = lean_box(0);
x_61 = x_88;
goto block_83;
}
else
{
uint8_t x_89; 
x_89 = lean_nat_dec_le(x_60, x_60);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_box(0);
x_61 = x_90;
goto block_83;
}
else
{
size_t x_91; uint8_t x_92; 
x_91 = lean_usize_of_nat(x_60);
x_92 = l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5(x_1, x_4, x_91);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_box(0);
x_61 = x_93;
goto block_83;
}
else
{
uint8_t x_94; lean_object* x_95; 
lean_dec(x_60);
x_94 = 0;
x_95 = l_Lean_Elab_addAndCompileUnsafe(x_1, x_94, x_2, x_3, x_5, x_6, x_7, x_8, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_95) == 0)
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_95, 0);
lean_dec(x_97);
x_98 = lean_box(0);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_95, 0, x_99);
return x_95;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_95, 1);
lean_inc(x_100);
lean_dec(x_95);
x_101 = lean_box(0);
x_102 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
return x_103;
}
}
else
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_95);
if (x_104 == 0)
{
return x_95;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_95, 0);
x_106 = lean_ctor_get(x_95, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_95);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_108 = l_Lean_Elab_instInhabitedPreDefinition;
x_109 = lean_unsigned_to_nat(0u);
x_110 = lean_array_get(x_108, x_1, x_109);
lean_inc(x_110);
x_111 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_isNonRecursive(x_110);
if (x_111 == 0)
{
uint8_t x_112; 
lean_dec(x_110);
x_112 = lean_nat_dec_lt(x_109, x_60);
if (x_112 == 0)
{
lean_object* x_113; 
x_113 = lean_box(0);
x_61 = x_113;
goto block_83;
}
else
{
uint8_t x_114; 
x_114 = lean_nat_dec_le(x_60, x_60);
if (x_114 == 0)
{
lean_object* x_115; 
x_115 = lean_box(0);
x_61 = x_115;
goto block_83;
}
else
{
size_t x_116; uint8_t x_117; 
x_116 = lean_usize_of_nat(x_60);
x_117 = l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5(x_1, x_4, x_116);
if (x_117 == 0)
{
lean_object* x_118; 
x_118 = lean_box(0);
x_61 = x_118;
goto block_83;
}
else
{
uint8_t x_119; lean_object* x_120; 
lean_dec(x_60);
x_119 = 0;
x_120 = l_Lean_Elab_addAndCompileUnsafe(x_1, x_119, x_2, x_3, x_5, x_6, x_7, x_8, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_120) == 0)
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_120, 0);
lean_dec(x_122);
x_123 = lean_box(0);
x_124 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_120, 0, x_124);
return x_120;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_120, 1);
lean_inc(x_125);
lean_dec(x_120);
x_126 = lean_box(0);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_126);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_125);
return x_128;
}
}
else
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_120);
if (x_129 == 0)
{
return x_120;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_120, 0);
x_131 = lean_ctor_get(x_120, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_120);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
}
}
}
else
{
lean_object* x_133; uint8_t x_134; 
lean_dec(x_60);
lean_dec(x_1);
x_133 = lean_ctor_get(x_110, 2);
lean_inc(x_133);
x_134 = lean_ctor_get_uint8(x_133, sizeof(void*)*2 + 1);
lean_dec(x_133);
if (x_134 == 0)
{
uint8_t x_135; lean_object* x_136; 
x_135 = 1;
x_136 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_110, x_135, x_2, x_3, x_5, x_6, x_7, x_8, x_10);
lean_dec(x_3);
if (lean_obj_tag(x_136) == 0)
{
uint8_t x_137; 
x_137 = !lean_is_exclusive(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_136, 0);
lean_dec(x_138);
x_139 = lean_box(0);
x_140 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_136, 0, x_140);
return x_136;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_dec(x_136);
x_142 = lean_box(0);
x_143 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_143, 0, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_141);
return x_144;
}
}
else
{
uint8_t x_145; 
x_145 = !lean_is_exclusive(x_136);
if (x_145 == 0)
{
return x_136;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_136, 0);
x_147 = lean_ctor_get(x_136, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_136);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
}
else
{
uint8_t x_149; lean_object* x_150; 
x_149 = 0;
x_150 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_110, x_149, x_2, x_3, x_5, x_6, x_7, x_8, x_10);
lean_dec(x_3);
if (lean_obj_tag(x_150) == 0)
{
uint8_t x_151; 
x_151 = !lean_is_exclusive(x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_150, 0);
lean_dec(x_152);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_150, 0, x_154);
return x_150;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_155 = lean_ctor_get(x_150, 1);
lean_inc(x_155);
lean_dec(x_150);
x_156 = lean_box(0);
x_157 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_157, 0, x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_155);
return x_158;
}
}
else
{
uint8_t x_159; 
x_159 = !lean_is_exclusive(x_150);
if (x_159 == 0)
{
return x_150;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_150, 0);
x_161 = lean_ctor_get(x_150, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_150);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
}
}
block_59:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_11);
x_12 = l_Lean_Elab_instInhabitedPreDefinition;
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_get(x_12, x_1, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__1), 2, 1);
lean_closure_set(x_16, 0, x_1);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_7, 3);
x_19 = l_Lean_replaceRef(x_15, x_18);
lean_dec(x_18);
lean_dec(x_15);
lean_ctor_set(x_7, 3, x_19);
x_20 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__2), 8, 3);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2___boxed), 6, 0);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = l_Lean_Meta_mapErrorImp___rarg(x_22, x_16, x_5, x_6, x_7, x_8, x_10);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_23, 0, x_27);
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_23);
if (x_32 == 0)
{
return x_23;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_36 = lean_ctor_get(x_7, 0);
x_37 = lean_ctor_get(x_7, 1);
x_38 = lean_ctor_get(x_7, 2);
x_39 = lean_ctor_get(x_7, 3);
x_40 = lean_ctor_get(x_7, 4);
x_41 = lean_ctor_get(x_7, 5);
x_42 = lean_ctor_get(x_7, 6);
x_43 = lean_ctor_get(x_7, 7);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_7);
x_44 = l_Lean_replaceRef(x_15, x_39);
lean_dec(x_39);
lean_dec(x_15);
x_45 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_45, 0, x_36);
lean_ctor_set(x_45, 1, x_37);
lean_ctor_set(x_45, 2, x_38);
lean_ctor_set(x_45, 3, x_44);
lean_ctor_set(x_45, 4, x_40);
lean_ctor_set(x_45, 5, x_41);
lean_ctor_set(x_45, 6, x_42);
lean_ctor_set(x_45, 7, x_43);
x_46 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__2), 8, 3);
lean_closure_set(x_46, 0, x_1);
lean_closure_set(x_46, 1, x_2);
lean_closure_set(x_46, 2, x_3);
x_47 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2___boxed), 6, 0);
x_48 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_48, 0, x_46);
lean_closure_set(x_48, 1, x_47);
x_49 = l_Lean_Meta_mapErrorImp___rarg(x_48, x_16, x_5, x_6, x_45, x_8, x_10);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_51 = x_49;
} else {
 lean_dec_ref(x_49);
 x_51 = lean_box(0);
}
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_52);
if (lean_is_scalar(x_51)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_51;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_57 = x_49;
} else {
 lean_dec_ref(x_49);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
block_83:
{
lean_object* x_62; uint8_t x_63; 
lean_dec(x_61);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_nat_dec_lt(x_62, x_60);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec(x_60);
x_64 = lean_box(0);
x_11 = x_64;
goto block_59;
}
else
{
uint8_t x_65; 
x_65 = lean_nat_dec_le(x_60, x_60);
if (x_65 == 0)
{
lean_object* x_66; 
lean_dec(x_60);
x_66 = lean_box(0);
x_11 = x_66;
goto block_59;
}
else
{
size_t x_67; uint8_t x_68; 
x_67 = lean_usize_of_nat(x_60);
lean_dec(x_60);
x_68 = l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__4(x_1, x_4, x_67);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_box(0);
x_11 = x_69;
goto block_59;
}
else
{
lean_object* x_70; 
x_70 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_addAndCompilePartial(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_10);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; 
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_70, 0);
lean_dec(x_72);
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_70, 0, x_74);
return x_70;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_70);
if (x_79 == 0)
{
return x_70;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_70, 0);
x_81 = lean_ctor_get(x_70, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_70);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
}
}
block_187:
{
if (x_171 == 0)
{
lean_dec(x_170);
x_10 = x_172;
goto block_163;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; size_t x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_173 = lean_mk_string("");
x_174 = l_Lean_stringToMessageData(x_173);
lean_dec(x_173);
x_175 = lean_array_get_size(x_1);
x_176 = lean_usize_of_nat(x_175);
lean_dec(x_175);
lean_inc(x_1);
x_177 = x_1;
x_178 = l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__6(x_176, x_4, x_177);
x_179 = x_178;
x_180 = lean_array_to_list(lean_box(0), x_179);
x_181 = l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(x_180);
x_182 = l_Lean_MessageData_ofList(x_181);
lean_dec(x_181);
lean_inc(x_174);
x_183 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_183, 0, x_174);
lean_ctor_set(x_183, 1, x_182);
x_184 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_174);
x_185 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_170, x_184, x_2, x_3, x_5, x_6, x_7, x_8, x_172);
x_186 = lean_ctor_get(x_185, 1);
lean_inc(x_186);
lean_dec(x_185);
x_10 = x_186;
goto block_163;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_7(x_16, lean_box(0), x_14, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
else
{
lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
lean_dec(x_8);
x_19 = 1;
x_20 = x_2 + x_19;
x_21 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7(x_1, x_3, x_4, x_5, x_20, x_18, x_6, x_7, x_9, x_10, x_11, x_12, x_13);
return x_21;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7(lean_object* x_1, size_t x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_5 < x_4;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_7(x_16, lean_box(0), x_6, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_6);
x_18 = lean_array_uget(x_3, x_5);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_box_usize(x_2);
lean_inc(x_8);
lean_inc(x_7);
x_21 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__3___boxed), 9, 4);
lean_closure_set(x_21, 0, x_18);
lean_closure_set(x_21, 1, x_7);
lean_closure_set(x_21, 2, x_8);
lean_closure_set(x_21, 3, x_20);
x_22 = lean_box_usize(x_5);
x_23 = lean_box_usize(x_2);
x_24 = lean_box_usize(x_4);
x_25 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__4___boxed), 13, 7);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_22);
lean_closure_set(x_25, 2, x_23);
lean_closure_set(x_25, 3, x_3);
lean_closure_set(x_25, 4, x_24);
lean_closure_set(x_25, 5, x_7);
lean_closure_set(x_25, 6, x_8);
x_26 = lean_apply_9(x_19, lean_box(0), lean_box(0), x_21, x_25, x_9, x_10, x_11, x_12, x_13);
return x_26;
}
}
}
static lean_object* _init_l_Lean_Elab_addPreDefinitions___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_addPreDefinitions(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_10 = l_ReaderT_instMonadReaderT___rarg(x_9);
x_11 = l_ReaderT_instMonadReaderT___rarg(x_10);
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
x_14 = lean_array_get_size(x_1);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = lean_box(0);
x_18 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__1(x_1, x_15, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = x_1;
x_21 = lean_box_usize(x_15);
x_22 = l_Lean_Elab_addPreDefinitions___boxed__const__1;
x_23 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__2___boxed), 10, 3);
lean_closure_set(x_23, 0, x_21);
lean_closure_set(x_23, 1, x_22);
lean_closure_set(x_23, 2, x_20);
x_24 = x_23;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_25 = lean_apply_7(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs(x_26);
x_29 = lean_array_get_size(x_28);
x_30 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_31 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7(x_13, x_16, x_28, x_30, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_17);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_17);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_25);
if (x_40 == 0)
{
return x_25;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__2(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__4(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_addPreDefinitions___spec__5(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_addPreDefinitions___spec__6(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; lean_object* x_11; 
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__3(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___lambda__4(x_1, x_14, x_15, x_4, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Elab_addPreDefinitions___spec__7(x_1, x_14, x_3, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_17;
}
}
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Main___hyg_800_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Elab");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("definition");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("body");
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = l_Lean_registerTraceClass(x_8, x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_mk_string("scc");
x_12 = lean_name_mk_string(x_6, x_11);
x_13 = l_Lean_registerTraceClass(x_12, x_10);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_6);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Structural(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_WF(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_PreDefinition_Main(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___boxed__const__1 = _init_l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___boxed__const__1();
lean_mark_persistent(l___private_Lean_Util_SCC_0__Lean_SCC_sccAux___at___private_Lean_Elab_PreDefinition_Main_0__Lean_Elab_partitionPreDefs___spec__9___boxed__const__1);
l_Lean_Elab_addPreDefinitions___boxed__const__1 = _init_l_Lean_Elab_addPreDefinitions___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_addPreDefinitions___boxed__const__1);
res = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Main___hyg_800_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
