// Lean compiler output
// Module: Lean.Meta.SynthInstance
// Imports: Init Lean.Meta.Basic Lean.Meta.Instances Lean.Meta.LevelDefEq Lean.Meta.AbstractMVars Lean.Meta.WHNF Lean.Util.Profile
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
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_synthInstance_x3f___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getMaxHeartbeats___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__1___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Meta_synthInstance_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkGeneratorNode_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_is_out_param(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_addAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_State_resumeStack___default;
lean_object* l_Lean_Meta_synthInstance_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Option_toLOption___rarg(lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_State_emap___default;
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMCtx___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___spec__1(lean_object*);
lean_object* l_Array_insertionSort_swapLoop___at_Lean_Meta_SynthInstance_getInstances___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_getGlobalInstancesIndex___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_instInhabitedSynthM___rarg(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getResult(lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_consume_match__1(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SynthInstance_getInstances___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__9(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume_match__1(lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default___spec__1(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_checkMaxHeartbeats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_instInhabitedSynthM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_instInhabitedSynthM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_SynthInstance_hasInferTCGoalsRLAttribute(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs_match__1(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(lean_object*, lean_object*);
lean_object* l_Array_insertionSort_traverse___at_Lean_Meta_SynthInstance_getInstances___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_maxSize;
lean_object* l_Lean_Meta_SynthInstance_State_result___default;
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__1(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume_match__2(lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(lean_object*);
lean_object* l_Lean_Expr_setOption___at_Lean_Expr_setPPExplicit___spec__1(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getResult___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61_(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore_match__1(lean_object*);
uint8_t l_Lean_Meta_SynthInstance_Waiter_isRoot(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop___boxed(lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp_match__1(lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMCtx___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer_match__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed__const__1;
lean_object* l_Lean_Meta_SynthInstance_mapMetaM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_getInstances___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__2(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_instInhabitedGeneratorNode;
extern lean_object* l_Lean_Meta_isDefEqStuckExceptionId;
lean_object* l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_withCurrHeartbeatsImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_modifyTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_TableEntry_answers___default;
lean_object* l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal_match__1(lean_object*);
uint64_t l_Lean_Name_hash(lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry_match__1(lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__7(lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withCurrHeartbeats___at_Lean_Meta_SynthInstance_main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedAttributeImpl___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___boxed(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_instInhabitedConsumerNode;
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__1(lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux_match__1(lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_State_tableEntries___default___spec__1(lean_object*);
lean_object* l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
uint8_t l_Std_PersistentArray_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_4_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_28_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5167_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5152_(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___boxed(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__2(lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_newSubgoal___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore_match__1___rarg(lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_State_generatorStack___default;
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getResult___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_getInstances___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkMaxHeartbeatsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_update_imax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_consume_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_State_tableEntries___default;
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1___boxed(lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_wakeUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getTop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default;
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Meta_SynthInstance_isNewAnswer(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolve___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__1(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_Meta_SynthInstance_getTop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_synthInstance_x3f___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_toArray___rarg(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot___boxed(lean_object*);
extern lean_object* l_Lean_Meta_synthPendingRef;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getResult___boxed(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_generate_match__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKey(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_MkTableKey_State_emap___default___spec__1(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getNextToResume(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_isNewAnswer___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isLevelAssignable(lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getMaxHeartbeats(lean_object*);
lean_object* lean_level_update_succ(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolve___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstance_x3f___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_synth_match__1(lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedAttributeImpl___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_modifyTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_resume___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__2(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__2(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_synthInstance_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_State_nextIdx___default;
lean_object* l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isExprAssignable(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_consume(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels_match__1(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_synthInstance_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot_match__1(lean_object*);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__2(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SynthInstance_getInstances___spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_hasInferTCGoalsRLAttribute___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_instInhabitedAnswer;
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_synthInstance_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8(lean_object*);
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_has_out_params(lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4(lean_object*, lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_maxHeartbeats;
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_checkMaxHeartbeats___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5152____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("synthInstance");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("maxHeartbeats");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_unsigned_to_nat(500u);
x_8 = lean_mk_string("");
x_9 = lean_mk_string("maximum amount of heartbeats per typeclass resolution problem. A heartbeat is number of (small) memory allocations (in thousands), 0 means no limit");
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(x_6, x_10, x_1);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_28_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("synthInstance");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("maxSize");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_unsigned_to_nat(128u);
x_8 = lean_mk_string("");
x_9 = lean_mk_string("maximum number of instances used to construct a solution in the type class instance synthesis procedure");
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(x_6, x_10, x_1);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_SynthInstance_getMaxHeartbeats(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Meta_synthInstance_maxHeartbeats;
x_3 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_1, x_2);
x_4 = lean_unsigned_to_nat(1000u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_SynthInstance_getMaxHeartbeats___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_getMaxHeartbeats(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("inferTCGoalsRL");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("instruct type class resolution procedure to solve goals from right to left for this instance");
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61____lambda__1___boxed), 4, 0);
x_7 = l_Lean_registerTagAttribute(x_4, x_5, x_6, x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61____lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
uint8_t l_Lean_Meta_SynthInstance_hasInferTCGoalsRLAttribute(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr;
x_4 = l_Lean_TagAttribute_hasTag(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_hasInferTCGoalsRLAttribute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_SynthInstance_hasInferTCGoalsRLAttribute(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_instInhabitedGeneratorNode() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
x_4 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
lean_inc_n(x_6, 4);
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_6);
lean_ctor_set(x_7, 4, x_6);
lean_ctor_set(x_7, 5, x_6);
x_8 = lean_mk_empty_array_with_capacity(x_1);
lean_inc(x_3);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_3);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_1);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_instInhabitedConsumerNode() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
x_4 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
lean_inc_n(x_6, 4);
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_6);
lean_ctor_set(x_7, 4, x_6);
lean_ctor_set(x_7, 5, x_6);
x_8 = lean_box(0);
lean_inc(x_3);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_3);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_Waiter_isRoot_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Meta_SynthInstance_Waiter_isRoot(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_Waiter_isRoot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_SynthInstance_Waiter_isRoot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_State_nextIdx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_MkTableKey_State_emap___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_MkTableKey_State_emap___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_2(x_2, x_7, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_3(x_3, x_11, x_12, x_14);
return x_15;
}
case 3:
{
lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_19 = lean_box_uint64(x_18);
x_20 = lean_apply_3(x_4, x_16, x_17, x_19);
return x_20;
}
case 5:
{
lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_2(x_5, x_21, x_23);
return x_24;
}
default: 
{
lean_object* x_25; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_apply_1(x_6, x_1);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_MkTableKey_normLevel_match__2___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__1(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__7(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__7(x_3, x_6);
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
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__5(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_10 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__8(x_1, x_2, x_8);
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
x_15 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__8(x_1, x_2, x_13);
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
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_12 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4(x_2, x_11);
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
x_18 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__5(x_14, x_16);
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
x_19 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__8(x_2, x_3, x_11);
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
x_28 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4(x_2, x_27);
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
x_34 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__5(x_30, x_32);
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
x_36 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__8(x_2, x_3, x_27);
x_37 = lean_array_uset(x_22, x_26, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Level_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
switch (lean_obj_tag(x_1)) {
case 1:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_7, x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_level_update_succ(x_1, x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_level_update_succ(x_1, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_16);
lean_dec(x_1);
lean_inc(x_16);
x_18 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_16, x_2, x_3);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_21 = x_18;
} else {
 lean_dec_ref(x_18);
 x_21 = lean_box(0);
}
x_22 = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set_uint64(x_22, sizeof(void*)*1, x_17);
x_23 = lean_level_update_succ(x_22, x_19);
if (lean_is_scalar(x_21)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_21;
}
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
}
case 2:
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_1);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_26 = lean_ctor_get(x_1, 0);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_inc(x_26);
x_28 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_26, x_2, x_3);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_27);
x_31 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_27, x_2, x_30);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_level_update_max(x_1, x_29, x_33);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = lean_level_update_max(x_1, x_29, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint64_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_39 = lean_ctor_get(x_1, 0);
x_40 = lean_ctor_get(x_1, 1);
x_41 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_39);
x_42 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_39, x_2, x_3);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_inc(x_40);
x_45 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_40, x_2, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(2, 2, 8);
lean_ctor_set(x_49, 0, x_39);
lean_ctor_set(x_49, 1, x_40);
lean_ctor_set_uint64(x_49, sizeof(void*)*2, x_41);
x_50 = lean_level_update_max(x_49, x_43, x_46);
if (lean_is_scalar(x_48)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_48;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_47);
return x_51;
}
}
case 3:
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_1);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_53 = lean_ctor_get(x_1, 0);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_inc(x_53);
x_55 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_53, x_2, x_3);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_54);
x_58 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_54, x_2, x_57);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_58, 0);
x_61 = lean_level_update_imax(x_1, x_56, x_60);
lean_ctor_set(x_58, 0, x_61);
return x_58;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_58, 0);
x_63 = lean_ctor_get(x_58, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_58);
x_64 = lean_level_update_imax(x_1, x_56, x_62);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; uint64_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_66 = lean_ctor_get(x_1, 0);
x_67 = lean_ctor_get(x_1, 1);
x_68 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_66);
x_69 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_66, x_2, x_3);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_67);
x_72 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_67, x_2, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = lean_alloc_ctor(3, 2, 8);
lean_ctor_set(x_76, 0, x_66);
lean_ctor_set(x_76, 1, x_67);
lean_ctor_set_uint64(x_76, sizeof(void*)*2, x_68);
x_77 = lean_level_update_imax(x_76, x_70, x_73);
if (lean_is_scalar(x_75)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_75;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
return x_78;
}
}
case 5:
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_1, 0);
lean_inc(x_79);
x_80 = l_Lean_MetavarContext_isLevelAssignable(x_2, x_79);
if (x_80 == 0)
{
lean_object* x_81; 
lean_dec(x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_1);
lean_ctor_set(x_81, 1, x_3);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_1);
x_82 = lean_ctor_get(x_3, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_3, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_3, 2);
lean_inc(x_84);
x_85 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__1(x_83, x_79);
if (lean_obj_tag(x_85) == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_87 = lean_ctor_get(x_3, 2);
lean_dec(x_87);
x_88 = lean_ctor_get(x_3, 1);
lean_dec(x_88);
x_89 = lean_ctor_get(x_3, 0);
lean_dec(x_89);
x_90 = lean_box(0);
x_91 = lean_mk_string("_tc");
x_92 = lean_name_mk_string(x_90, x_91);
lean_inc(x_82);
x_93 = lean_name_mk_numeral(x_92, x_82);
x_94 = l_Lean_mkLevelParam(x_93);
x_95 = lean_unsigned_to_nat(1u);
x_96 = lean_nat_add(x_82, x_95);
lean_dec(x_82);
lean_inc(x_94);
x_97 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__3(x_83, x_79, x_94);
lean_ctor_set(x_3, 1, x_97);
lean_ctor_set(x_3, 0, x_96);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_94);
lean_ctor_set(x_98, 1, x_3);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_3);
x_99 = lean_box(0);
x_100 = lean_mk_string("_tc");
x_101 = lean_name_mk_string(x_99, x_100);
lean_inc(x_82);
x_102 = lean_name_mk_numeral(x_101, x_82);
x_103 = l_Lean_mkLevelParam(x_102);
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_add(x_82, x_104);
lean_dec(x_82);
lean_inc(x_103);
x_106 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__3(x_83, x_79, x_103);
x_107 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_107, 2, x_84);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_103);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_79);
x_109 = lean_ctor_get(x_85, 0);
lean_inc(x_109);
lean_dec(x_85);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_3);
return x_110;
}
}
}
default: 
{
lean_object* x_111; 
lean_dec(x_2);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_1);
lean_ctor_set(x_111, 1, x_3);
return x_111;
}
}
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normLevel___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_2(x_10, x_12, x_14);
return x_15;
}
case 3:
{
lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_18 = lean_box_uint64(x_17);
x_19 = lean_apply_2(x_3, x_16, x_18);
return x_19;
}
case 4:
{
lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_3(x_2, x_20, x_21, x_23);
return x_24;
}
case 5:
{
lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_28 = lean_box_uint64(x_27);
x_29 = lean_apply_3(x_4, x_25, x_26, x_28);
return x_29;
}
case 6:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint64_t x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 2);
lean_inc(x_32);
x_33 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_34 = lean_box_uint64(x_33);
x_35 = lean_apply_4(x_7, x_30, x_31, x_32, x_34);
return x_35;
}
case 7:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint64_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 2);
lean_inc(x_38);
x_39 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_40 = lean_box_uint64(x_39);
x_41 = lean_apply_4(x_6, x_36, x_37, x_38, x_40);
return x_41;
}
case 8:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 2);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 3);
lean_inc(x_45);
x_46 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_47 = lean_box_uint64(x_46);
x_48 = lean_apply_5(x_5, x_42, x_43, x_44, x_45, x_47);
return x_48;
}
case 10:
{
lean_object* x_49; lean_object* x_50; uint64_t x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_1, 1);
lean_inc(x_50);
x_51 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_52 = lean_box_uint64(x_51);
x_53 = lean_apply_3(x_8, x_49, x_50, x_52);
return x_53;
}
case 11:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint64_t x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 2);
lean_inc(x_56);
x_57 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_58 = lean_box_uint64(x_57);
x_59 = lean_apply_4(x_9, x_54, x_55, x_56, x_58);
return x_59;
}
default: 
{
lean_object* x_60; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = lean_apply_1(x_11, x_1);
return x_60;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_MkTableKey_normExpr_match__2___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__1(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__7(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__7(x_3, x_6);
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
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__5(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_10 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__8(x_1, x_2, x_8);
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
x_15 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__8(x_1, x_2, x_13);
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
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_12 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4(x_2, x_11);
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
x_18 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__5(x_14, x_16);
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
x_19 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__8(x_2, x_3, x_11);
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
x_28 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4(x_2, x_27);
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
x_34 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__5(x_30, x_32);
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
x_36 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__8(x_2, x_3, x_27);
x_37 = lean_array_uset(x_22, x_26, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_List_mapM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_9 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__9(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
lean_inc(x_2);
x_20 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__9(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_MkTableKey_normExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = l_Lean_MetavarContext_isExprAssignable(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__1(x_11, x_6);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_14 = lean_ctor_get(x_3, 2);
lean_dec(x_14);
x_15 = lean_ctor_get(x_3, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 0);
lean_dec(x_16);
x_17 = lean_box(0);
x_18 = lean_mk_string("_tc");
x_19 = lean_name_mk_string(x_17, x_18);
lean_inc(x_9);
x_20 = lean_name_mk_numeral(x_19, x_9);
x_21 = l_Lean_mkFVar(x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_9, x_22);
lean_dec(x_9);
lean_inc(x_21);
x_24 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__3(x_11, x_6, x_21);
lean_ctor_set(x_3, 2, x_24);
lean_ctor_set(x_3, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_3);
x_26 = lean_box(0);
x_27 = lean_mk_string("_tc");
x_28 = lean_name_mk_string(x_26, x_27);
lean_inc(x_9);
x_29 = lean_name_mk_numeral(x_28, x_9);
x_30 = l_Lean_mkFVar(x_29);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_9, x_31);
lean_dec(x_9);
lean_inc(x_30);
x_33 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__3(x_11, x_6, x_30);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_10);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
lean_dec(x_12);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
}
}
case 3:
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_1);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
x_40 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_39, x_2, x_3);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_expr_update_sort(x_1, x_42);
lean_ctor_set(x_40, 0, x_43);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_40, 0);
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_40);
x_46 = lean_expr_update_sort(x_1, x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; uint64_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_1, 0);
x_49 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_48);
lean_dec(x_1);
lean_inc(x_48);
x_50 = l_Lean_Meta_SynthInstance_MkTableKey_normLevel(x_48, x_2, x_3);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
x_54 = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set_uint64(x_54, sizeof(void*)*1, x_49);
x_55 = lean_expr_update_sort(x_54, x_51);
if (lean_is_scalar(x_53)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_53;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_52);
return x_56;
}
}
case 4:
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_1);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_1, 1);
lean_inc(x_58);
x_59 = l_List_mapM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__9(x_58, x_2, x_3);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_expr_update_const(x_1, x_61);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_59, 0);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_59);
x_65 = lean_expr_update_const(x_1, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; uint64_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_1, 0);
x_68 = lean_ctor_get(x_1, 1);
x_69 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_1);
lean_inc(x_68);
x_70 = l_List_mapM___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__9(x_68, x_2, x_3);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_73 = x_70;
} else {
 lean_dec_ref(x_70);
 x_73 = lean_box(0);
}
x_74 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_74, 0, x_67);
lean_ctor_set(x_74, 1, x_68);
lean_ctor_set_uint64(x_74, sizeof(void*)*2, x_69);
x_75 = lean_expr_update_const(x_74, x_71);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_72);
return x_76;
}
}
case 5:
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_1);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_78 = lean_ctor_get(x_1, 0);
x_79 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_inc(x_78);
x_80 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_78, x_2, x_3);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
lean_inc(x_79);
x_83 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_79, x_2, x_82);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_83, 0);
x_86 = lean_expr_update_app(x_1, x_81, x_85);
lean_ctor_set(x_83, 0, x_86);
return x_83;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_83, 0);
x_88 = lean_ctor_get(x_83, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_83);
x_89 = lean_expr_update_app(x_1, x_81, x_87);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; uint64_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_91 = lean_ctor_get(x_1, 0);
x_92 = lean_ctor_get(x_1, 1);
x_93 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_91);
x_94 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_91, x_2, x_3);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
lean_inc(x_92);
x_97 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_92, x_2, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_100 = x_97;
} else {
 lean_dec_ref(x_97);
 x_100 = lean_box(0);
}
x_101 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_101, 0, x_91);
lean_ctor_set(x_101, 1, x_92);
lean_ctor_set_uint64(x_101, sizeof(void*)*2, x_93);
x_102 = lean_expr_update_app(x_101, x_95, x_98);
if (lean_is_scalar(x_100)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_100;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_99);
return x_103;
}
}
case 6:
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_1);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; uint64_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_105 = lean_ctor_get(x_1, 1);
x_106 = lean_ctor_get(x_1, 2);
x_107 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_2);
lean_inc(x_105);
x_108 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_105, x_2, x_3);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
lean_inc(x_106);
x_111 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_106, x_2, x_110);
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
lean_object* x_113; uint8_t x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_111, 0);
x_114 = (uint8_t)((x_107 << 24) >> 61);
x_115 = lean_expr_update_lambda(x_1, x_114, x_109, x_113);
lean_ctor_set(x_111, 0, x_115);
return x_111;
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; 
x_116 = lean_ctor_get(x_111, 0);
x_117 = lean_ctor_get(x_111, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_111);
x_118 = (uint8_t)((x_107 << 24) >> 61);
x_119 = lean_expr_update_lambda(x_1, x_118, x_109, x_116);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; uint64_t x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_135; 
x_121 = lean_ctor_get(x_1, 0);
x_122 = lean_ctor_get(x_1, 1);
x_123 = lean_ctor_get(x_1, 2);
x_124 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_122);
x_125 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_122, x_2, x_3);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
lean_inc(x_123);
x_128 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_123, x_2, x_127);
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
x_132 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_132, 0, x_121);
lean_ctor_set(x_132, 1, x_122);
lean_ctor_set(x_132, 2, x_123);
lean_ctor_set_uint64(x_132, sizeof(void*)*3, x_124);
x_133 = (uint8_t)((x_124 << 24) >> 61);
x_134 = lean_expr_update_lambda(x_132, x_133, x_126, x_129);
if (lean_is_scalar(x_131)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_131;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_130);
return x_135;
}
}
case 7:
{
uint8_t x_136; 
x_136 = !lean_is_exclusive(x_1);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; uint64_t x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_137 = lean_ctor_get(x_1, 1);
x_138 = lean_ctor_get(x_1, 2);
x_139 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_2);
lean_inc(x_137);
x_140 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_137, x_2, x_3);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
lean_inc(x_138);
x_143 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_138, x_2, x_142);
x_144 = !lean_is_exclusive(x_143);
if (x_144 == 0)
{
lean_object* x_145; uint8_t x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_143, 0);
x_146 = (uint8_t)((x_139 << 24) >> 61);
x_147 = lean_expr_update_forall(x_1, x_146, x_141, x_145);
lean_ctor_set(x_143, 0, x_147);
return x_143;
}
else
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; lean_object* x_151; lean_object* x_152; 
x_148 = lean_ctor_get(x_143, 0);
x_149 = lean_ctor_get(x_143, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_143);
x_150 = (uint8_t)((x_139 << 24) >> 61);
x_151 = lean_expr_update_forall(x_1, x_150, x_141, x_148);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_149);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; uint64_t x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; lean_object* x_166; lean_object* x_167; 
x_153 = lean_ctor_get(x_1, 0);
x_154 = lean_ctor_get(x_1, 1);
x_155 = lean_ctor_get(x_1, 2);
x_156 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_155);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_154);
x_157 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_154, x_2, x_3);
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
lean_dec(x_157);
lean_inc(x_155);
x_160 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_155, x_2, x_159);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 lean_ctor_release(x_160, 1);
 x_163 = x_160;
} else {
 lean_dec_ref(x_160);
 x_163 = lean_box(0);
}
x_164 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_164, 0, x_153);
lean_ctor_set(x_164, 1, x_154);
lean_ctor_set(x_164, 2, x_155);
lean_ctor_set_uint64(x_164, sizeof(void*)*3, x_156);
x_165 = (uint8_t)((x_156 << 24) >> 61);
x_166 = lean_expr_update_forall(x_164, x_165, x_158, x_161);
if (lean_is_scalar(x_163)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_163;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_162);
return x_167;
}
}
case 8:
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_1);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_169 = lean_ctor_get(x_1, 1);
x_170 = lean_ctor_get(x_1, 2);
x_171 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
lean_inc(x_169);
x_172 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_169, x_2, x_3);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
lean_inc(x_2);
lean_inc(x_170);
x_175 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_170, x_2, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
lean_inc(x_171);
x_178 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_171, x_2, x_177);
x_179 = !lean_is_exclusive(x_178);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_178, 0);
x_181 = lean_expr_update_let(x_1, x_173, x_176, x_180);
lean_ctor_set(x_178, 0, x_181);
return x_178;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_182 = lean_ctor_get(x_178, 0);
x_183 = lean_ctor_get(x_178, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_178);
x_184 = lean_expr_update_let(x_1, x_173, x_176, x_182);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_183);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint64_t x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_186 = lean_ctor_get(x_1, 0);
x_187 = lean_ctor_get(x_1, 1);
x_188 = lean_ctor_get(x_1, 2);
x_189 = lean_ctor_get(x_1, 3);
x_190 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_inc(x_189);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_1);
lean_inc(x_2);
lean_inc(x_187);
x_191 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_187, x_2, x_3);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
lean_inc(x_2);
lean_inc(x_188);
x_194 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_188, x_2, x_193);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
lean_inc(x_189);
x_197 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_189, x_2, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_200 = x_197;
} else {
 lean_dec_ref(x_197);
 x_200 = lean_box(0);
}
x_201 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_201, 0, x_186);
lean_ctor_set(x_201, 1, x_187);
lean_ctor_set(x_201, 2, x_188);
lean_ctor_set(x_201, 3, x_189);
lean_ctor_set_uint64(x_201, sizeof(void*)*4, x_190);
x_202 = lean_expr_update_let(x_201, x_192, x_195, x_198);
if (lean_is_scalar(x_200)) {
 x_203 = lean_alloc_ctor(0, 2, 0);
} else {
 x_203 = x_200;
}
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_199);
return x_203;
}
}
case 10:
{
uint8_t x_204; 
x_204 = !lean_is_exclusive(x_1);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_205 = lean_ctor_get(x_1, 1);
lean_inc(x_205);
x_206 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_205, x_2, x_3);
x_207 = !lean_is_exclusive(x_206);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; 
x_208 = lean_ctor_get(x_206, 0);
x_209 = lean_expr_update_mdata(x_1, x_208);
lean_ctor_set(x_206, 0, x_209);
return x_206;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_210 = lean_ctor_get(x_206, 0);
x_211 = lean_ctor_get(x_206, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_206);
x_212 = lean_expr_update_mdata(x_1, x_210);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; uint64_t x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_214 = lean_ctor_get(x_1, 0);
x_215 = lean_ctor_get(x_1, 1);
x_216 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_1);
lean_inc(x_215);
x_217 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_215, x_2, x_3);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_220 = x_217;
} else {
 lean_dec_ref(x_217);
 x_220 = lean_box(0);
}
x_221 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_221, 0, x_214);
lean_ctor_set(x_221, 1, x_215);
lean_ctor_set_uint64(x_221, sizeof(void*)*2, x_216);
x_222 = lean_expr_update_mdata(x_221, x_218);
if (lean_is_scalar(x_220)) {
 x_223 = lean_alloc_ctor(0, 2, 0);
} else {
 x_223 = x_220;
}
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_219);
return x_223;
}
}
case 11:
{
uint8_t x_224; 
x_224 = !lean_is_exclusive(x_1);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; uint8_t x_227; 
x_225 = lean_ctor_get(x_1, 2);
lean_inc(x_225);
x_226 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_225, x_2, x_3);
x_227 = !lean_is_exclusive(x_226);
if (x_227 == 0)
{
lean_object* x_228; lean_object* x_229; 
x_228 = lean_ctor_get(x_226, 0);
x_229 = lean_expr_update_proj(x_1, x_228);
lean_ctor_set(x_226, 0, x_229);
return x_226;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_230 = lean_ctor_get(x_226, 0);
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
lean_inc(x_230);
lean_dec(x_226);
x_232 = lean_expr_update_proj(x_1, x_230);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_231);
return x_233;
}
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; uint64_t x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_234 = lean_ctor_get(x_1, 0);
x_235 = lean_ctor_get(x_1, 1);
x_236 = lean_ctor_get(x_1, 2);
x_237 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_1);
lean_inc(x_236);
x_238 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_236, x_2, x_3);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 x_241 = x_238;
} else {
 lean_dec_ref(x_238);
 x_241 = lean_box(0);
}
x_242 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_242, 0, x_234);
lean_ctor_set(x_242, 1, x_235);
lean_ctor_set(x_242, 2, x_236);
lean_ctor_set_uint64(x_242, sizeof(void*)*3, x_237);
x_243 = lean_expr_update_proj(x_242, x_239);
if (lean_is_scalar(x_241)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_241;
}
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_240);
return x_244;
}
}
default: 
{
lean_object* x_245; 
lean_dec(x_2);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_1);
lean_ctor_set(x_245, 1, x_3);
return x_245;
}
}
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_MkTableKey_normExpr___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKey(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_unsigned_to_nat(8u);
x_4 = l_Std_mkHashMapImp___rarg(x_3);
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_4);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_4);
x_7 = l_Lean_Meta_SynthInstance_MkTableKey_normExpr(x_2, x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_instInhabitedAnswer() {
_start:
{
lean_object* x_1; lean_object* x_2; uint64_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
x_3 = lean_uint64_of_nat(x_1);
x_4 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set_uint64(x_4, sizeof(void*)*1, x_3);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_4);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_TableEntry_answers___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_State_result___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_State_generatorStack___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_State_resumeStack___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_SynthInstance_State_tableEntries___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_State_tableEntries___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_checkMaxHeartbeats(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_box(0);
x_9 = lean_mk_string("synthInstance");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("maxHeartbeats");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_mk_string("typeclass");
x_15 = l_Lean_Core_checkMaxHeartbeatsCore(x_14, x_12, x_13, x_5, x_6, x_7);
lean_dec(x_14);
return x_15;
}
}
lean_object* l_Lean_Meta_SynthInstance_checkMaxHeartbeats___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_checkMaxHeartbeats(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_mapMetaM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_apply_2(x_3, x_4, x_5);
x_12 = lean_apply_7(x_1, lean_box(0), x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_SynthInstance_instInhabitedSynthM___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_instInhabitedSynthM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_instInhabitedSynthM___rarg), 1, 0);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_instInhabitedSynthM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_instInhabitedSynthM(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getInstances_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_getInstances_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getInstances_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Array_insertionSort_swapLoop___at_Lean_Meta_SynthInstance_getInstances___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = lean_array_fget(x_1, x_2);
x_9 = lean_array_fget(x_1, x_7);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_nat_dec_lt(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_13; 
x_13 = lean_array_fswap(x_1, x_2, x_7);
lean_dec(x_2);
x_1 = x_13;
x_2 = x_7;
x_3 = lean_box(0);
goto _start;
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_insertionSort_traverse___at_Lean_Meta_SynthInstance_getInstances___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_10 = l_Array_insertionSort_swapLoop___at_Lean_Meta_SynthInstance_getInstances___spec__3(x_1, x_2, lean_box(0));
x_11 = lean_nat_add(x_2, x_6);
lean_dec(x_2);
x_1 = x_10;
x_2 = x_11;
x_3 = x_7;
goto _start;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_3, x_4, x_5, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(x_10, x_2, x_3, x_4, x_5, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_13);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_1, 1, x_18);
lean_ctor_set(x_1, 0, x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_3, x_4, x_5, x_6);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(x_21, x_2, x_3, x_4, x_5, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_26);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SynthInstance_getInstances___spec__5(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_2 < x_1;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_10 = x_3;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_28; lean_object* x_29; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_28 = x_12;
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 4)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
x_32 = l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(x_31, x_4, x_5, x_6, x_7, x_8);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_expr_update_const(x_29, x_34);
lean_ctor_set(x_32, 0, x_35);
x_15 = x_32;
goto block_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_expr_update_const(x_29, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_15 = x_39;
goto block_27;
}
}
else
{
lean_object* x_40; lean_object* x_41; uint64_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_40 = lean_ctor_get(x_29, 0);
x_41 = lean_ctor_get(x_29, 1);
x_42 = lean_ctor_get_uint64(x_29, sizeof(void*)*2);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_29);
lean_inc(x_41);
x_43 = l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(x_41, x_4, x_5, x_6, x_7, x_8);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_46 = x_43;
} else {
 lean_dec_ref(x_43);
 x_46 = lean_box(0);
}
x_47 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_47, 0, x_40);
lean_ctor_set(x_47, 1, x_41);
lean_ctor_set_uint64(x_47, sizeof(void*)*2, x_42);
x_48 = lean_expr_update_const(x_47, x_44);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
x_15 = x_49;
goto block_27;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_29);
x_50 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_50, 0, lean_box(0));
x_51 = lean_mk_string("Lean.Meta.SynthInstance");
x_52 = lean_mk_string("Lean.Meta.SynthInstance.getInstances");
x_53 = lean_unsigned_to_nat(201u);
x_54 = lean_unsigned_to_nat(15u);
x_55 = lean_mk_string("global instance is not a constant");
x_56 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_51, x_52, x_53, x_54, x_55);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_51);
x_57 = lean_panic_fn(x_50, x_56);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_58 = lean_apply_5(x_57, x_4, x_5, x_6, x_7, x_8);
x_15 = x_58;
goto block_27;
}
block_27:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_2 + x_18;
x_20 = x_16;
x_21 = lean_array_uset(x_14, x_2, x_20);
x_2 = x_19;
x_3 = x_21;
x_8 = x_17;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_getInstances___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; size_t x_10; size_t x_11; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
x_10 = 1;
x_11 = x_3 + x_10;
if (x_9 == 0)
{
lean_dec(x_7);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_array_push(x_5, x_13);
x_3 = x_11;
x_5 = x_14;
goto _start;
}
}
else
{
return x_5;
}
}
}
static lean_object* _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = l_Lean_Meta_isClass_x3f(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_mk_string("type class instance expected");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = l_Lean_indentExpr(x_3);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_mk_string("");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_18, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_dec(x_9);
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
lean_dec(x_10);
x_22 = l_Lean_Meta_getGlobalInstancesIndex___rarg(x_7, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_25 = l_Lean_Meta_DiscrTree_getUnify___rarg(x_23, x_3, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; size_t x_32; size_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_array_get_size(x_26);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_insertionSort_traverse___at_Lean_Meta_SynthInstance_getInstances___spec__2(x_26, x_29, x_28);
x_31 = lean_array_get_size(x_30);
x_32 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_33 = 0;
x_34 = x_30;
x_35 = lean_box_usize(x_32);
x_36 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed__const__1;
x_37 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_SynthInstance_getInstances___spec__5___boxed), 8, 3);
lean_closure_set(x_37, 0, x_35);
lean_closure_set(x_37, 1, x_36);
lean_closure_set(x_37, 2, x_34);
x_38 = x_37;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_39 = lean_apply_5(x_38, x_4, x_5, x_6, x_7, x_27);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
x_53 = lean_box(0);
x_54 = lean_mk_string("Meta");
x_55 = lean_name_mk_string(x_53, x_54);
x_56 = lean_mk_string("synthInstance");
x_57 = lean_name_mk_string(x_55, x_56);
x_58 = lean_mk_string("globalInstances");
x_59 = lean_name_mk_string(x_57, x_58);
x_77 = lean_st_ref_get(x_7, x_41);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 3);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_ctor_get_uint8(x_79, sizeof(void*)*1);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_77, 1);
lean_inc(x_81);
lean_dec(x_77);
x_82 = 0;
x_60 = x_82;
x_61 = x_81;
goto block_76;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
lean_dec(x_77);
lean_inc(x_59);
x_84 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_59, x_4, x_5, x_6, x_7, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_unbox(x_85);
lean_dec(x_85);
x_60 = x_87;
x_61 = x_86;
goto block_76;
}
block_52:
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_array_get_size(x_1);
x_45 = lean_nat_dec_lt(x_29, x_44);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_44);
lean_dec(x_21);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
else
{
uint8_t x_47; 
x_47 = lean_nat_dec_le(x_44, x_44);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_44);
lean_dec(x_21);
if (lean_is_scalar(x_42)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_42;
}
lean_ctor_set(x_48, 0, x_40);
lean_ctor_set(x_48, 1, x_43);
return x_48;
}
else
{
size_t x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_50 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_21, x_1, x_33, x_49, x_40);
lean_dec(x_21);
if (lean_is_scalar(x_42)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_42;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_43);
return x_51;
}
}
}
block_76:
{
if (x_60 == 0)
{
lean_dec(x_59);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = x_61;
goto block_52;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_62 = lean_mk_string("");
x_63 = l_Lean_stringToMessageData(x_62);
lean_dec(x_62);
x_64 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_64, 0, x_3);
lean_inc(x_63);
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string(", ");
x_67 = l_Lean_stringToMessageData(x_66);
lean_dec(x_66);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_67);
lean_inc(x_40);
x_69 = lean_array_to_list(lean_box(0), x_40);
x_70 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_69);
x_71 = l_Lean_MessageData_ofList(x_70);
lean_dec(x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_68);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_63);
x_74 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_59, x_73, x_4, x_5, x_6, x_7, x_61);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_43 = x_75;
goto block_52;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_88 = !lean_is_exclusive(x_39);
if (x_88 == 0)
{
return x_39;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_39, 0);
x_90 = lean_ctor_get(x_39, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_39);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_92 = !lean_is_exclusive(x_25);
if (x_92 == 0)
{
return x_25;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_25, 0);
x_94 = lean_ctor_get(x_25, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_25);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_96 = !lean_is_exclusive(x_9);
if (x_96 == 0)
{
return x_9;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_9, 0);
x_98 = lean_ctor_get(x_9, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_9);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Lean_Meta_getLocalInstances(x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed), 8, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_10, x_2, x_3, x_4, x_5, x_9);
return x_11;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapM___at_Lean_Meta_SynthInstance_getInstances___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SynthInstance_getInstances___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Meta_SynthInstance_getInstances___spec__5(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_getInstances___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_getInstances___spec__6(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_getInstances___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkGeneratorNode_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Meta_inferType(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = l_Lean_Meta_instantiateMVars(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_4);
x_14 = l_Lean_Meta_SynthInstance_getInstances(x_12, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = l_Array_isEmpty___rarg(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_free_object(x_14);
x_19 = lean_st_ref_get(x_6, x_17);
lean_dec(x_6);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_4, x_20);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_array_get_size(x_16);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_1);
lean_ctor_set(x_26, 2, x_24);
lean_ctor_set(x_26, 3, x_16);
lean_ctor_set(x_26, 4, x_25);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_array_get_size(x_16);
x_32 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_1);
lean_ctor_set(x_32, 2, x_30);
lean_ctor_set(x_32, 3, x_16);
lean_ctor_set(x_32, 4, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_box(0);
lean_ctor_set(x_14, 0, x_35);
return x_14;
}
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_14, 0);
x_37 = lean_ctor_get(x_14, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_14);
x_38 = l_Array_isEmpty___rarg(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_39 = lean_st_ref_get(x_6, x_37);
lean_dec(x_6);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_st_ref_get(x_4, x_40);
lean_dec(x_4);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_array_get_size(x_36);
x_47 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_47, 0, x_2);
lean_ctor_set(x_47, 1, x_1);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_36);
lean_ctor_set(x_47, 4, x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
if (lean_is_scalar(x_44)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_44;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_43);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_36);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_37);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_14);
if (x_52 == 0)
{
return x_14;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_14, 0);
x_54 = lean_ctor_get(x_14, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_14);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_11);
if (x_56 == 0)
{
return x_11;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_11, 0);
x_58 = lean_ctor_get(x_11, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_11);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_8);
if (x_60 == 0)
{
return x_8;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_8, 0);
x_62 = lean_ctor_get(x_8, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_8);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_newSubgoal_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = l_Lean_checkTraceOption(x_9, x_1);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 0);
return x_3;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_5, x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 3);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_mk_string("[");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
lean_inc(x_1);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_1);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("] ");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_12);
x_30 = lean_mk_string("");
x_31 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_10);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_10);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Std_PersistentArray_push___rarg(x_21, x_34);
lean_ctor_set(x_16, 0, x_35);
x_36 = lean_st_ref_set(x_8, x_15, x_17);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
x_39 = lean_box(0);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_dec(x_36);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_43 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_44 = lean_ctor_get(x_16, 0);
lean_inc(x_44);
lean_dec(x_16);
x_45 = lean_mk_string("[");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
lean_inc(x_1);
x_47 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_47, 0, x_1);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("] ");
x_50 = l_Lean_stringToMessageData(x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_12);
x_53 = lean_mk_string("");
x_54 = l_Lean_stringToMessageData(x_53);
lean_dec(x_53);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_56, 0, x_1);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_10);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_10);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Std_PersistentArray_push___rarg(x_44, x_57);
x_59 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set_uint8(x_59, sizeof(void*)*1, x_43);
lean_ctor_set(x_15, 3, x_59);
x_60 = lean_st_ref_set(x_8, x_15, x_17);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_62 = x_60;
} else {
 lean_dec_ref(x_60);
 x_62 = lean_box(0);
}
x_63 = lean_box(0);
if (lean_is_scalar(x_62)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_62;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_65 = lean_ctor_get(x_15, 0);
x_66 = lean_ctor_get(x_15, 1);
x_67 = lean_ctor_get(x_15, 2);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_15);
x_68 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_69 = lean_ctor_get(x_16, 0);
lean_inc(x_69);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_70 = x_16;
} else {
 lean_dec_ref(x_16);
 x_70 = lean_box(0);
}
x_71 = lean_mk_string("[");
x_72 = l_Lean_stringToMessageData(x_71);
lean_dec(x_71);
lean_inc(x_1);
x_73 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_73, 0, x_1);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string("] ");
x_76 = l_Lean_stringToMessageData(x_75);
lean_dec(x_75);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_12);
x_79 = lean_mk_string("");
x_80 = l_Lean_stringToMessageData(x_79);
lean_dec(x_79);
x_81 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_82, 0, x_1);
lean_ctor_set(x_82, 1, x_81);
lean_inc(x_10);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_10);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Std_PersistentArray_push___rarg(x_69, x_83);
if (lean_is_scalar(x_70)) {
 x_85 = lean_alloc_ctor(0, 1, 1);
} else {
 x_85 = x_70;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set_uint8(x_85, sizeof(void*)*1, x_68);
x_86 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_86, 0, x_65);
lean_ctor_set(x_86, 1, x_66);
lean_ctor_set(x_86, 2, x_67);
lean_ctor_set(x_86, 3, x_85);
x_87 = lean_st_ref_set(x_8, x_86, x_17);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_89 = x_87;
} else {
 lean_dec_ref(x_87);
 x_89 = lean_box(0);
}
x_90 = lean_box(0);
if (lean_is_scalar(x_89)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_89;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
return x_91;
}
}
}
uint8_t l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(lean_object* x_1, lean_object* x_2) {
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
x_6 = lean_expr_eqv(x_4, x_1);
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
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_Lean_Expr_hash(x_4);
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
x_17 = l_Lean_Expr_hash(x_13);
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
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_Std_AssocList_foldlM___at_Lean_Meta_SynthInstance_newSubgoal___spec__8(x_3, x_6);
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
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Meta_SynthInstance_newSubgoal___spec__7(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_newSubgoal___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = lean_expr_eqv(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_newSubgoal___spec__9(x_1, x_2, x_8);
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
x_14 = lean_expr_eqv(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_newSubgoal___spec__9(x_1, x_2, x_13);
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
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_8 = l_Lean_Expr_hash(x_2);
x_9 = (size_t)x_8;
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(x_2, x_11);
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
x_18 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(x_14, x_16);
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
x_19 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_newSubgoal___spec__9(x_2, x_3, x_11);
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
x_24 = l_Lean_Expr_hash(x_2);
x_25 = (size_t)x_24;
x_26 = lean_usize_modn(x_25, x_23);
x_27 = lean_array_uget(x_22, x_26);
x_28 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(x_2, x_27);
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
x_34 = l_Std_HashMapImp_expand___at_Lean_Meta_SynthInstance_newSubgoal___spec__6(x_30, x_32);
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
x_36 = l_Std_AssocList_replace___at_Lean_Meta_SynthInstance_newSubgoal___spec__9(x_2, x_3, x_27);
x_37 = lean_array_uset(x_22, x_26, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_2, x_3, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg(x_1, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_ctor_get(x_12, 3);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (x_3 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_1);
x_12 = l_Lean_Meta_SynthInstance_mkGeneratorNode_x3f(x_1, x_2, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_array_push(x_23, x_3);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_mk_empty_array_with_capacity(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_st_ref_get(x_10, x_20);
lean_dec(x_10);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_take(x_6, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_ctor_get(x_31, 1);
x_35 = lean_ctor_get(x_31, 3);
x_36 = lean_array_push(x_34, x_21);
x_37 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_35, x_1, x_27);
lean_ctor_set(x_31, 3, x_37);
lean_ctor_set(x_31, 1, x_36);
x_38 = lean_st_ref_set(x_6, x_31, x_32);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
x_47 = lean_ctor_get(x_31, 2);
x_48 = lean_ctor_get(x_31, 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_31);
x_49 = lean_array_push(x_46, x_21);
x_50 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_48, x_1, x_27);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_47);
lean_ctor_set(x_51, 3, x_50);
x_52 = lean_st_ref_set(x_6, x_51, x_32);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
x_55 = lean_box(0);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_12);
if (x_57 == 0)
{
return x_12;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_12, 0);
x_59 = lean_ctor_get(x_12, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_12);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_12 = lean_box(0);
x_13 = lean_mk_string("Meta");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("synthInstance");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("newSubgoal");
x_18 = lean_name_mk_string(x_16, x_17);
lean_inc(x_18);
x_19 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__2___boxed), 9, 1);
lean_closure_set(x_19, 0, x_18);
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__1___boxed), 7, 0);
x_21 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_19);
lean_inc(x_2);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__3___boxed), 10, 2);
lean_closure_set(x_22, 0, x_2);
lean_closure_set(x_22, 1, x_18);
x_23 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_23, 0, x_21);
lean_closure_set(x_23, 1, x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__4___boxed), 11, 3);
lean_closure_set(x_24, 0, x_2);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_4);
x_25 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_26;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Meta_SynthInstance_newSubgoal___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_newSubgoal___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_newSubgoal___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_SynthInstance_newSubgoal___lambda__3(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Meta_SynthInstance_newSubgoal___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_SynthInstance_newSubgoal___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_7 = lean_expr_eqv(x_4, x_1);
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
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = (size_t)x_5;
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_3, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 3);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(x_14, x_1);
lean_dec(x_14);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_ctor_get(x_16, 3);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(x_18, x_1);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_SynthInstance_findEntry_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SynthInstance_findEntry_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_findEntry_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_getEntry_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getEntry_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Meta_SynthInstance_findEntry_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_instInhabitedSynthM___boxed), 7, 1);
lean_closure_set(x_12, 0, lean_box(0));
x_13 = lean_mk_string("Lean.Meta.SynthInstance");
x_14 = lean_mk_string("Lean.Meta.SynthInstance.getEntry");
x_15 = lean_unsigned_to_nat(242u);
x_16 = lean_unsigned_to_nat(18u);
x_17 = lean_mk_string("invalid key at synthInstance");
x_18 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_13, x_14, x_15, x_16, x_17);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
x_19 = lean_panic_fn(x_12, x_18);
x_20 = lean_apply_7(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_9, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_10, 0);
lean_inc(x_23);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_23);
return x_9;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_dec(x_9);
x_25 = lean_ctor_get(x_10, 0);
lean_inc(x_25);
lean_dec(x_10);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getEntry___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_getEntry(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_inferType(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_instantiateMVars(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_12);
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
x_16 = l_Lean_Meta_SynthInstance_mkTableKey(x_1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
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
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__1___boxed), 8, 1);
lean_closure_set(x_10, 0, x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__2___boxed), 9, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_13 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_mkTableKeyFor___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 7)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 2);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
lean_dec(x_5);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_8(x_6, x_1, x_2, x_3, x_4, x_8, x_9, x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_6);
x_14 = lean_apply_5(x_7, x_1, x_2, x_3, x_4, x_5);
return x_14;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_8) == 7)
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_8, 2);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_8, sizeof(void*)*3);
lean_dec(x_8);
x_17 = lean_array_get_size(x_4);
x_18 = lean_expr_instantiate_rev_range(x_14, x_5, x_17, x_4);
lean_dec(x_17);
lean_dec(x_14);
x_19 = 0;
x_20 = 1;
lean_inc(x_9);
lean_inc(x_3);
x_21 = l_Lean_Meta_mkForallFVars(x_3, x_18, x_19, x_20, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 0;
x_25 = lean_box(0);
x_26 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Lean_Meta_mkFreshExprMVarAt(x_1, x_2, x_22, x_24, x_25, x_26, x_9, x_10, x_11, x_12, x_23);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_28);
x_30 = l_Lean_mkAppN(x_28, x_3);
lean_inc(x_30);
x_31 = l_Lean_mkApp(x_7, x_30);
x_32 = (uint8_t)((x_16 << 24) >> 61);
x_33 = l_Lean_BinderInfo_isInstImplicit(x_32);
x_34 = lean_array_push(x_4, x_30);
if (x_33 == 0)
{
lean_dec(x_28);
x_4 = x_34;
x_7 = x_31;
x_8 = x_15;
x_13 = x_29;
goto _start;
}
else
{
lean_object* x_36; 
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_28);
lean_ctor_set(x_36, 1, x_6);
x_4 = x_34;
x_6 = x_36;
x_7 = x_31;
x_8 = x_15;
x_13 = x_29;
goto _start;
}
}
else
{
uint8_t x_38; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_21);
if (x_38 == 0)
{
return x_21;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_21, 0);
x_40 = lean_ctor_get(x_21, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_21);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_array_get_size(x_4);
x_43 = lean_expr_instantiate_rev_range(x_8, x_5, x_42, x_4);
lean_dec(x_5);
lean_dec(x_8);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_44 = l_Lean_Meta_whnf(x_43, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
x_48 = l_Lean_Expr_isForall(x_46);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_42);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_6);
lean_ctor_set(x_49, 1, x_7);
lean_ctor_set(x_49, 2, x_46);
lean_ctor_set(x_44, 0, x_49);
return x_44;
}
else
{
lean_free_object(x_44);
x_5 = x_42;
x_8 = x_46;
x_13 = x_47;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_44, 0);
x_52 = lean_ctor_get(x_44, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_44);
x_53 = l_Lean_Expr_isForall(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_42);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_6);
lean_ctor_set(x_54, 1, x_7);
lean_ctor_set(x_54, 2, x_51);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
else
{
x_5 = x_42;
x_8 = x_51;
x_13 = x_52;
goto _start;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_42);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_44);
if (x_57 == 0)
{
return x_44;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_44, 0);
x_59 = lean_ctor_get(x_44, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_44);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getSubgoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Lean_Meta_inferType(x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_8);
lean_inc(x_4);
x_16 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_getSubgoalsAux(x_1, x_2, x_3, x_15, x_14, x_13, x_4, x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = l_Lean_Expr_getAppFn(x_4);
lean_dec(x_4);
if (lean_obj_tag(x_20) == 4)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_free_object(x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_get(x_8, x_19);
lean_dec(x_8);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr;
x_27 = l_Lean_TagAttribute_hasTag(x_26, x_25, x_21);
lean_dec(x_21);
lean_dec(x_25);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = l_List_reverse___rarg(x_29);
lean_ctor_set(x_18, 0, x_30);
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_18, 1);
x_33 = lean_ctor_get(x_18, 2);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_18);
x_34 = l_List_reverse___rarg(x_31);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_22, 0, x_35);
return x_22;
}
}
else
{
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_22, 0);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_22);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr;
x_40 = l_Lean_TagAttribute_hasTag(x_39, x_38, x_21);
lean_dec(x_21);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_18, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_18, 2);
lean_inc(x_43);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_44 = x_18;
} else {
 lean_dec_ref(x_18);
 x_44 = lean_box(0);
}
x_45 = l_List_reverse___rarg(x_41);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 3, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_37);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_18);
lean_ctor_set(x_48, 1, x_37);
return x_48;
}
}
}
else
{
lean_dec(x_20);
lean_dec(x_8);
return x_16;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_16, 0);
x_50 = lean_ctor_get(x_16, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_16);
x_51 = l_Lean_Expr_getAppFn(x_4);
lean_dec(x_4);
if (lean_obj_tag(x_51) == 4)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_ref_get(x_8, x_50);
lean_dec(x_8);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 0);
lean_inc(x_57);
lean_dec(x_54);
x_58 = l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr;
x_59 = l_Lean_TagAttribute_hasTag(x_58, x_57, x_52);
lean_dec(x_52);
lean_dec(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_60 = lean_ctor_get(x_49, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_49, 2);
lean_inc(x_62);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 x_63 = x_49;
} else {
 lean_dec_ref(x_49);
 x_63 = lean_box(0);
}
x_64 = l_List_reverse___rarg(x_60);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 3, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_61);
lean_ctor_set(x_65, 2, x_62);
if (lean_is_scalar(x_56)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_56;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_55);
return x_66;
}
else
{
lean_object* x_67; 
if (lean_is_scalar(x_56)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_56;
}
lean_ctor_set(x_67, 0, x_49);
lean_ctor_set(x_67, 1, x_55);
return x_67;
}
}
else
{
lean_object* x_68; 
lean_dec(x_51);
lean_dec(x_8);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_49);
lean_ctor_set(x_68, 1, x_50);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_8);
lean_dec(x_4);
x_69 = !lean_is_exclusive(x_16);
if (x_69 == 0)
{
return x_16;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_16, 0);
x_71 = lean_ctor_get(x_16, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_16);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_10);
if (x_73 == 0)
{
return x_10;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_10, 0);
x_75 = lean_ctor_get(x_10, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_10);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryResolveCore_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_12 = l_Lean_Meta_SynthInstance_getSubgoals(x_1, x_2, x_5, x_3, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_159; lean_object* x_160; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_13, 2);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_mk_string("Meta");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("synthInstance");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("tryResolve");
x_24 = lean_name_mk_string(x_22, x_23);
x_174 = lean_st_ref_get(x_10, x_14);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_175, 3);
lean_inc(x_176);
lean_dec(x_175);
x_177 = lean_ctor_get_uint8(x_176, sizeof(void*)*1);
lean_dec(x_176);
if (x_177 == 0)
{
lean_object* x_178; uint8_t x_179; 
x_178 = lean_ctor_get(x_174, 1);
lean_inc(x_178);
lean_dec(x_174);
x_179 = 0;
x_159 = x_179;
x_160 = x_178;
goto block_173;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_180 = lean_ctor_get(x_174, 1);
lean_inc(x_180);
lean_dec(x_174);
lean_inc(x_24);
x_181 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_24, x_7, x_8, x_9, x_10, x_180);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = lean_unbox(x_182);
lean_dec(x_182);
x_159 = x_184;
x_160 = x_183;
goto block_173;
}
block_158:
{
lean_object* x_26; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_isExprDefEq(x_6, x_17, x_7, x_8, x_9, x_10, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_st_ref_get(x_10, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 3);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get_uint8(x_32, sizeof(void*)*1);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_30, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_30, 0, x_36);
return x_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_dec(x_30);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
lean_dec(x_30);
lean_inc(x_24);
x_41 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_24, x_7, x_8, x_9, x_10, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_41, 0, x_46);
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = lean_mk_string("failure");
x_52 = l_Lean_stringToMessageData(x_51);
lean_dec(x_51);
x_53 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_24, x_52, x_7, x_8, x_9, x_10, x_50);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
x_56 = lean_box(0);
lean_ctor_set(x_53, 0, x_56);
return x_53;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
lean_dec(x_53);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
else
{
lean_object* x_60; uint8_t x_61; uint8_t x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_26, 1);
lean_inc(x_60);
lean_dec(x_26);
x_61 = 0;
x_62 = 1;
lean_inc(x_7);
x_63 = l_Lean_Meta_mkLambdaFVars(x_5, x_16, x_61, x_62, x_7, x_8, x_9, x_10, x_60);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_101; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_101 = l_Lean_Meta_isExprDefEq(x_4, x_64, x_7, x_8, x_9, x_10, x_65);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_15);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
lean_dec(x_101);
x_105 = lean_st_ref_get(x_10, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_106, 3);
lean_inc(x_107);
lean_dec(x_106);
x_108 = lean_ctor_get_uint8(x_107, sizeof(void*)*1);
lean_dec(x_107);
if (x_108 == 0)
{
uint8_t x_109; 
lean_dec(x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_109 = !lean_is_exclusive(x_105);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_105, 0);
lean_dec(x_110);
x_111 = lean_box(0);
lean_ctor_set(x_105, 0, x_111);
return x_105;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_105, 1);
lean_inc(x_112);
lean_dec(x_105);
x_113 = lean_box(0);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_115 = lean_ctor_get(x_105, 1);
lean_inc(x_115);
lean_dec(x_105);
lean_inc(x_24);
x_116 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_24, x_7, x_8, x_9, x_10, x_115);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_unbox(x_117);
lean_dec(x_117);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_119 = !lean_is_exclusive(x_116);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_116, 0);
lean_dec(x_120);
x_121 = lean_box(0);
lean_ctor_set(x_116, 0, x_121);
return x_116;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_116, 1);
lean_inc(x_122);
lean_dec(x_116);
x_123 = lean_box(0);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_116, 1);
lean_inc(x_125);
lean_dec(x_116);
x_126 = lean_mk_string("failure assigning");
x_127 = l_Lean_stringToMessageData(x_126);
lean_dec(x_126);
x_128 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_24, x_127, x_7, x_8, x_9, x_10, x_125);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_129 = !lean_is_exclusive(x_128);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_128, 0);
lean_dec(x_130);
x_131 = lean_box(0);
lean_ctor_set(x_128, 0, x_131);
return x_128;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_128, 1);
lean_inc(x_132);
lean_dec(x_128);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_135 = lean_ctor_get(x_101, 1);
lean_inc(x_135);
lean_dec(x_101);
x_136 = lean_st_ref_get(x_10, x_135);
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_137, 3);
lean_inc(x_138);
lean_dec(x_137);
x_139 = lean_ctor_get_uint8(x_138, sizeof(void*)*1);
lean_dec(x_138);
if (x_139 == 0)
{
lean_object* x_140; 
x_140 = lean_ctor_get(x_136, 1);
lean_inc(x_140);
lean_dec(x_136);
x_66 = x_61;
x_67 = x_140;
goto block_100;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_dec(x_136);
lean_inc(x_24);
x_142 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_24, x_7, x_8, x_9, x_10, x_141);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = lean_unbox(x_143);
lean_dec(x_143);
x_66 = x_145;
x_67 = x_144;
goto block_100;
}
}
}
else
{
uint8_t x_146; 
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_146 = !lean_is_exclusive(x_101);
if (x_146 == 0)
{
return x_101;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_101, 0);
x_148 = lean_ctor_get(x_101, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_101);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
block_100:
{
if (x_66 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_dec(x_24);
lean_dec(x_9);
lean_dec(x_7);
x_68 = lean_st_ref_get(x_10, x_67);
lean_dec(x_10);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_st_ref_get(x_8, x_69);
lean_dec(x_8);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_15);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_70, 0, x_75);
return x_70;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = lean_ctor_get(x_70, 0);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_70);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_15);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_77);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_82 = lean_mk_string("success");
x_83 = l_Lean_stringToMessageData(x_82);
lean_dec(x_82);
x_84 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_24, x_83, x_7, x_8, x_9, x_10, x_67);
lean_dec(x_9);
lean_dec(x_7);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_st_ref_get(x_10, x_85);
lean_dec(x_10);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_st_ref_get(x_8, x_87);
lean_dec(x_8);
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_15);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_88, 0, x_93);
return x_88;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_88, 0);
x_95 = lean_ctor_get(x_88, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_88);
x_96 = lean_ctor_get(x_94, 0);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_15);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_95);
return x_99;
}
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_150 = !lean_is_exclusive(x_63);
if (x_150 == 0)
{
return x_63;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_63, 0);
x_152 = lean_ctor_get(x_63, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_63);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_154 = !lean_is_exclusive(x_26);
if (x_154 == 0)
{
return x_26;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_26, 0);
x_156 = lean_ctor_get(x_26, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_26);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
block_173:
{
if (x_159 == 0)
{
x_25 = x_160;
goto block_158;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_161 = lean_mk_string("");
x_162 = l_Lean_stringToMessageData(x_161);
lean_dec(x_161);
lean_inc(x_6);
x_163 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_163, 0, x_6);
lean_inc(x_162);
x_164 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_mk_string(" =?= ");
x_166 = l_Lean_stringToMessageData(x_165);
lean_dec(x_165);
x_167 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_167, 0, x_164);
lean_ctor_set(x_167, 1, x_166);
lean_inc(x_17);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_17);
x_169 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_162);
lean_inc(x_24);
x_171 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_24, x_170, x_7, x_8, x_9, x_10, x_160);
x_172 = lean_ctor_get(x_171, 1);
lean_inc(x_172);
lean_dec(x_171);
x_25 = x_172;
goto block_158;
}
}
}
else
{
uint8_t x_185; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_185 = !lean_is_exclusive(x_12);
if (x_185 == 0)
{
return x_12;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_12, 0);
x_187 = lean_ctor_get(x_12, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_12);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolveCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
x_12 = l_Lean_Meta_getLocalInstances(x_3, x_4, x_5, x_6, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryResolveCore___lambda__1), 11, 4);
lean_closure_set(x_15, 0, x_11);
lean_closure_set(x_15, 1, x_13);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_1);
x_16 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_9, x_15, x_3, x_4, x_5, x_6, x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 3);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_st_ref_take(x_1, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_9, 3);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_unsigned_to_nat(32u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_17);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = 5;
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_20);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set_usize(x_21, 4, x_19);
lean_ctor_set(x_10, 0, x_21);
x_22 = lean_st_ref_set(x_1, x_9, x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_7);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_27 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
lean_dec(x_10);
x_28 = lean_unsigned_to_nat(32u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
lean_inc(x_29);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = 5;
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_29);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_32);
lean_ctor_set_usize(x_33, 4, x_31);
x_34 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_27);
lean_ctor_set(x_9, 3, x_34);
x_35 = lean_st_ref_set(x_1, x_9, x_11);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_7);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; size_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_39 = lean_ctor_get(x_9, 0);
x_40 = lean_ctor_get(x_9, 1);
x_41 = lean_ctor_get(x_9, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_9);
x_42 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_43 = x_10;
} else {
 lean_dec_ref(x_10);
 x_43 = lean_box(0);
}
x_44 = lean_unsigned_to_nat(32u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
lean_inc(x_45);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = 5;
x_48 = lean_unsigned_to_nat(0u);
x_49 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_45);
lean_ctor_set(x_49, 2, x_48);
lean_ctor_set(x_49, 3, x_48);
lean_ctor_set_usize(x_49, 4, x_47);
if (lean_is_scalar(x_43)) {
 x_50 = lean_alloc_ctor(0, 1, 1);
} else {
 x_50 = x_43;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set_uint8(x_50, sizeof(void*)*1, x_42);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_39);
lean_ctor_set(x_51, 1, x_40);
lean_ctor_set(x_51, 2, x_41);
lean_ctor_set(x_51, 3, x_50);
x_52 = lean_st_ref_set(x_1, x_51, x_11);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_7);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_take(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_12, 3);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = l_Std_PersistentArray_isEmpty___rarg(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_20 = lean_mk_string("[");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
lean_inc(x_2);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_2);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("] ");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Std_PersistentArray_toArray___rarg(x_18);
lean_dec(x_18);
x_28 = lean_array_get_size(x_27);
x_29 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_30 = 0;
x_31 = x_27;
x_32 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_29, x_30, x_31);
x_33 = x_32;
x_34 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_string("");
x_37 = l_Lean_stringToMessageData(x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_39, 0, x_2);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_3);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Std_PersistentArray_push___rarg(x_1, x_40);
lean_ctor_set(x_13, 0, x_41);
x_42 = lean_st_ref_set(x_9, x_12, x_14);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(0);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_18);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_13, 0, x_1);
x_49 = lean_st_ref_set(x_9, x_12, x_14);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
x_52 = lean_box(0);
lean_ctor_set(x_49, 0, x_52);
return x_49;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_49, 1);
lean_inc(x_53);
lean_dec(x_49);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
uint8_t x_56; lean_object* x_57; uint8_t x_58; 
x_56 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
x_57 = lean_ctor_get(x_13, 0);
lean_inc(x_57);
lean_dec(x_13);
x_58 = l_Std_PersistentArray_isEmpty___rarg(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; size_t x_68; size_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_59 = lean_mk_string("[");
x_60 = l_Lean_stringToMessageData(x_59);
lean_dec(x_59);
lean_inc(x_2);
x_61 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_61, 0, x_2);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string("] ");
x_64 = l_Lean_stringToMessageData(x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Std_PersistentArray_toArray___rarg(x_57);
lean_dec(x_57);
x_67 = lean_array_get_size(x_66);
x_68 = lean_usize_of_nat(x_67);
lean_dec(x_67);
x_69 = 0;
x_70 = x_66;
x_71 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_68, x_69, x_70);
x_72 = x_71;
x_73 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_65);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string("");
x_76 = l_Lean_stringToMessageData(x_75);
lean_dec(x_75);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_78, 0, x_2);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_3);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Std_PersistentArray_push___rarg(x_1, x_79);
x_81 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set_uint8(x_81, sizeof(void*)*1, x_56);
lean_ctor_set(x_12, 3, x_81);
x_82 = lean_st_ref_set(x_9, x_12, x_14);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_84 = x_82;
} else {
 lean_dec_ref(x_82);
 x_84 = lean_box(0);
}
x_85 = lean_box(0);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_57);
lean_dec(x_3);
lean_dec(x_2);
x_87 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_87, 0, x_1);
lean_ctor_set_uint8(x_87, sizeof(void*)*1, x_56);
lean_ctor_set(x_12, 3, x_87);
x_88 = lean_st_ref_set(x_9, x_12, x_14);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_90 = x_88;
} else {
 lean_dec_ref(x_88);
 x_90 = lean_box(0);
}
x_91 = lean_box(0);
if (lean_is_scalar(x_90)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_90;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_89);
return x_92;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_93 = lean_ctor_get(x_12, 0);
x_94 = lean_ctor_get(x_12, 1);
x_95 = lean_ctor_get(x_12, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_12);
x_96 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
x_97 = lean_ctor_get(x_13, 0);
lean_inc(x_97);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_98 = x_13;
} else {
 lean_dec_ref(x_13);
 x_98 = lean_box(0);
}
x_99 = l_Std_PersistentArray_isEmpty___rarg(x_97);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; size_t x_109; size_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_100 = lean_mk_string("[");
x_101 = l_Lean_stringToMessageData(x_100);
lean_dec(x_100);
lean_inc(x_2);
x_102 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_102, 0, x_2);
x_103 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string("] ");
x_105 = l_Lean_stringToMessageData(x_104);
lean_dec(x_104);
x_106 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_105);
x_107 = l_Std_PersistentArray_toArray___rarg(x_97);
lean_dec(x_97);
x_108 = lean_array_get_size(x_107);
x_109 = lean_usize_of_nat(x_108);
lean_dec(x_108);
x_110 = 0;
x_111 = x_107;
x_112 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_109, x_110, x_111);
x_113 = x_112;
x_114 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_106);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_mk_string("");
x_117 = l_Lean_stringToMessageData(x_116);
lean_dec(x_116);
x_118 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_119, 0, x_2);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_3);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Std_PersistentArray_push___rarg(x_1, x_120);
if (lean_is_scalar(x_98)) {
 x_122 = lean_alloc_ctor(0, 1, 1);
} else {
 x_122 = x_98;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set_uint8(x_122, sizeof(void*)*1, x_96);
x_123 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_123, 0, x_93);
lean_ctor_set(x_123, 1, x_94);
lean_ctor_set(x_123, 2, x_95);
lean_ctor_set(x_123, 3, x_122);
x_124 = lean_st_ref_set(x_9, x_123, x_14);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_126 = x_124;
} else {
 lean_dec_ref(x_124);
 x_126 = lean_box(0);
}
x_127 = lean_box(0);
if (lean_is_scalar(x_126)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_126;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_125);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_97);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_98)) {
 x_129 = lean_alloc_ctor(0, 1, 1);
} else {
 x_129 = x_98;
}
lean_ctor_set(x_129, 0, x_1);
lean_ctor_set_uint8(x_129, sizeof(void*)*1, x_96);
x_130 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_130, 0, x_93);
lean_ctor_set(x_130, 1, x_94);
lean_ctor_set(x_130, 2, x_95);
lean_ctor_set(x_130, 3, x_129);
x_131 = lean_st_ref_set(x_9, x_130, x_14);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_133 = x_131;
} else {
 lean_dec_ref(x_131);
 x_133 = lean_box(0);
}
x_134 = lean_box(0);
if (lean_is_scalar(x_133)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_133;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_132);
return x_135;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolve___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_tryResolveCore(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolve(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Meta");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("synthInstance");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("tryResolve");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryResolve___lambda__1___boxed), 9, 2);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_3);
x_220 = lean_st_ref_get(x_9, x_10);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_221, 3);
lean_inc(x_222);
lean_dec(x_221);
x_223 = lean_ctor_get_uint8(x_222, sizeof(void*)*1);
lean_dec(x_222);
if (x_223 == 0)
{
lean_object* x_224; uint8_t x_225; 
x_224 = lean_ctor_get(x_220, 1);
lean_inc(x_224);
lean_dec(x_220);
x_225 = 0;
x_19 = x_225;
x_20 = x_224;
goto block_219;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_226 = lean_ctor_get(x_220, 1);
lean_inc(x_226);
lean_dec(x_220);
lean_inc(x_17);
x_227 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_226);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
x_230 = lean_unbox(x_228);
lean_dec(x_228);
x_19 = x_230;
x_20 = x_229;
goto block_219;
}
block_219:
{
if (x_19 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_17);
x_21 = lean_st_ref_get(x_9, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 3);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get_uint8(x_23, sizeof(void*)*1);
lean_dec(x_23);
x_26 = lean_st_ref_take(x_9, x_24);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 3);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_27, 3);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = 0;
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_33);
x_34 = lean_st_ref_set(x_9, x_27, x_29);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
lean_inc(x_9);
x_36 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_st_ref_get(x_9, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_st_ref_take(x_9, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_42, 3);
lean_dec(x_46);
x_47 = !lean_is_exclusive(x_43);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_25);
x_48 = lean_st_ref_set(x_9, x_42, x_44);
lean_dec(x_9);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
lean_ctor_set(x_48, 0, x_37);
return x_48;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_43, 0);
lean_inc(x_53);
lean_dec(x_43);
x_54 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_25);
lean_ctor_set(x_42, 3, x_54);
x_55 = lean_st_ref_set(x_9, x_42, x_44);
lean_dec(x_9);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_37);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_59 = lean_ctor_get(x_42, 0);
x_60 = lean_ctor_get(x_42, 1);
x_61 = lean_ctor_get(x_42, 2);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_42);
x_62 = lean_ctor_get(x_43, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 x_63 = x_43;
} else {
 lean_dec_ref(x_43);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 1, 1);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set_uint8(x_64, sizeof(void*)*1, x_25);
x_65 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_60);
lean_ctor_set(x_65, 2, x_61);
lean_ctor_set(x_65, 3, x_64);
x_66 = lean_st_ref_set(x_9, x_65, x_44);
lean_dec(x_9);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_68 = x_66;
} else {
 lean_dec_ref(x_66);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_37);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_70 = lean_ctor_get(x_36, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_36, 1);
lean_inc(x_71);
lean_dec(x_36);
x_72 = lean_st_ref_get(x_9, x_71);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_st_ref_take(x_9, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_75, 3);
lean_inc(x_76);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = !lean_is_exclusive(x_75);
if (x_78 == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_75, 3);
lean_dec(x_79);
x_80 = !lean_is_exclusive(x_76);
if (x_80 == 0)
{
lean_object* x_81; uint8_t x_82; 
lean_ctor_set_uint8(x_76, sizeof(void*)*1, x_25);
x_81 = lean_st_ref_set(x_9, x_75, x_77);
lean_dec(x_9);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_81, 0);
lean_dec(x_83);
lean_ctor_set_tag(x_81, 1);
lean_ctor_set(x_81, 0, x_70);
return x_81;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_70);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_ctor_get(x_76, 0);
lean_inc(x_86);
lean_dec(x_76);
x_87 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set_uint8(x_87, sizeof(void*)*1, x_25);
lean_ctor_set(x_75, 3, x_87);
x_88 = lean_st_ref_set(x_9, x_75, x_77);
lean_dec(x_9);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_90 = x_88;
} else {
 lean_dec_ref(x_88);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
 lean_ctor_set_tag(x_91, 1);
}
lean_ctor_set(x_91, 0, x_70);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_92 = lean_ctor_get(x_75, 0);
x_93 = lean_ctor_get(x_75, 1);
x_94 = lean_ctor_get(x_75, 2);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_75);
x_95 = lean_ctor_get(x_76, 0);
lean_inc(x_95);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 x_96 = x_76;
} else {
 lean_dec_ref(x_76);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 1, 1);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set_uint8(x_97, sizeof(void*)*1, x_25);
x_98 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_98, 0, x_92);
lean_ctor_set(x_98, 1, x_93);
lean_ctor_set(x_98, 2, x_94);
lean_ctor_set(x_98, 3, x_97);
x_99 = lean_st_ref_set(x_9, x_98, x_77);
lean_dec(x_9);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
 lean_ctor_set_tag(x_102, 1);
}
lean_ctor_set(x_102, 0, x_70);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
else
{
lean_object* x_103; uint8_t x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_103 = lean_ctor_get(x_28, 0);
lean_inc(x_103);
lean_dec(x_28);
x_104 = 0;
x_105 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set_uint8(x_105, sizeof(void*)*1, x_104);
lean_ctor_set(x_27, 3, x_105);
x_106 = lean_st_ref_set(x_9, x_27, x_29);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
lean_inc(x_9);
x_108 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_107);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_st_ref_get(x_9, x_110);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
lean_dec(x_111);
x_113 = lean_st_ref_take(x_9, x_112);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_114, 3);
lean_inc(x_115);
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
lean_dec(x_113);
x_117 = lean_ctor_get(x_114, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_114, 1);
lean_inc(x_118);
x_119 = lean_ctor_get(x_114, 2);
lean_inc(x_119);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 lean_ctor_release(x_114, 2);
 lean_ctor_release(x_114, 3);
 x_120 = x_114;
} else {
 lean_dec_ref(x_114);
 x_120 = lean_box(0);
}
x_121 = lean_ctor_get(x_115, 0);
lean_inc(x_121);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 x_122 = x_115;
} else {
 lean_dec_ref(x_115);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(0, 1, 1);
} else {
 x_123 = x_122;
}
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set_uint8(x_123, sizeof(void*)*1, x_25);
if (lean_is_scalar(x_120)) {
 x_124 = lean_alloc_ctor(0, 4, 0);
} else {
 x_124 = x_120;
}
lean_ctor_set(x_124, 0, x_117);
lean_ctor_set(x_124, 1, x_118);
lean_ctor_set(x_124, 2, x_119);
lean_ctor_set(x_124, 3, x_123);
x_125 = lean_st_ref_set(x_9, x_124, x_116);
lean_dec(x_9);
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_127 = x_125;
} else {
 lean_dec_ref(x_125);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_109);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_129 = lean_ctor_get(x_108, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_108, 1);
lean_inc(x_130);
lean_dec(x_108);
x_131 = lean_st_ref_get(x_9, x_130);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
lean_dec(x_131);
x_133 = lean_st_ref_take(x_9, x_132);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_134, 3);
lean_inc(x_135);
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_136);
lean_dec(x_133);
x_137 = lean_ctor_get(x_134, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_134, 1);
lean_inc(x_138);
x_139 = lean_ctor_get(x_134, 2);
lean_inc(x_139);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 lean_ctor_release(x_134, 2);
 lean_ctor_release(x_134, 3);
 x_140 = x_134;
} else {
 lean_dec_ref(x_134);
 x_140 = lean_box(0);
}
x_141 = lean_ctor_get(x_135, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 x_142 = x_135;
} else {
 lean_dec_ref(x_135);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(0, 1, 1);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set_uint8(x_143, sizeof(void*)*1, x_25);
if (lean_is_scalar(x_140)) {
 x_144 = lean_alloc_ctor(0, 4, 0);
} else {
 x_144 = x_140;
}
lean_ctor_set(x_144, 0, x_137);
lean_ctor_set(x_144, 1, x_138);
lean_ctor_set(x_144, 2, x_139);
lean_ctor_set(x_144, 3, x_143);
x_145 = lean_st_ref_set(x_9, x_144, x_136);
lean_dec(x_9);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_147 = x_145;
} else {
 lean_dec_ref(x_145);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
 lean_ctor_set_tag(x_148, 1);
}
lean_ctor_set(x_148, 0, x_129);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_149 = lean_ctor_get(x_27, 0);
x_150 = lean_ctor_get(x_27, 1);
x_151 = lean_ctor_get(x_27, 2);
lean_inc(x_151);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_27);
x_152 = lean_ctor_get(x_28, 0);
lean_inc(x_152);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_153 = x_28;
} else {
 lean_dec_ref(x_28);
 x_153 = lean_box(0);
}
x_154 = 0;
if (lean_is_scalar(x_153)) {
 x_155 = lean_alloc_ctor(0, 1, 1);
} else {
 x_155 = x_153;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set_uint8(x_155, sizeof(void*)*1, x_154);
x_156 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_156, 0, x_149);
lean_ctor_set(x_156, 1, x_150);
lean_ctor_set(x_156, 2, x_151);
lean_ctor_set(x_156, 3, x_155);
x_157 = lean_st_ref_set(x_9, x_156, x_29);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
lean_inc(x_9);
x_159 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_158);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_162 = lean_st_ref_get(x_9, x_161);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
lean_dec(x_162);
x_164 = lean_st_ref_take(x_9, x_163);
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_165, 3);
lean_inc(x_166);
x_167 = lean_ctor_get(x_164, 1);
lean_inc(x_167);
lean_dec(x_164);
x_168 = lean_ctor_get(x_165, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_165, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_165, 2);
lean_inc(x_170);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 lean_ctor_release(x_165, 2);
 lean_ctor_release(x_165, 3);
 x_171 = x_165;
} else {
 lean_dec_ref(x_165);
 x_171 = lean_box(0);
}
x_172 = lean_ctor_get(x_166, 0);
lean_inc(x_172);
if (lean_is_exclusive(x_166)) {
 lean_ctor_release(x_166, 0);
 x_173 = x_166;
} else {
 lean_dec_ref(x_166);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 1, 1);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set_uint8(x_174, sizeof(void*)*1, x_25);
if (lean_is_scalar(x_171)) {
 x_175 = lean_alloc_ctor(0, 4, 0);
} else {
 x_175 = x_171;
}
lean_ctor_set(x_175, 0, x_168);
lean_ctor_set(x_175, 1, x_169);
lean_ctor_set(x_175, 2, x_170);
lean_ctor_set(x_175, 3, x_174);
x_176 = lean_st_ref_set(x_9, x_175, x_167);
lean_dec(x_9);
x_177 = lean_ctor_get(x_176, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_178 = x_176;
} else {
 lean_dec_ref(x_176);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_160);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_180 = lean_ctor_get(x_159, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_159, 1);
lean_inc(x_181);
lean_dec(x_159);
x_182 = lean_st_ref_get(x_9, x_181);
x_183 = lean_ctor_get(x_182, 1);
lean_inc(x_183);
lean_dec(x_182);
x_184 = lean_st_ref_take(x_9, x_183);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_185, 3);
lean_inc(x_186);
x_187 = lean_ctor_get(x_184, 1);
lean_inc(x_187);
lean_dec(x_184);
x_188 = lean_ctor_get(x_185, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_185, 1);
lean_inc(x_189);
x_190 = lean_ctor_get(x_185, 2);
lean_inc(x_190);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 lean_ctor_release(x_185, 2);
 lean_ctor_release(x_185, 3);
 x_191 = x_185;
} else {
 lean_dec_ref(x_185);
 x_191 = lean_box(0);
}
x_192 = lean_ctor_get(x_186, 0);
lean_inc(x_192);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 x_193 = x_186;
} else {
 lean_dec_ref(x_186);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(0, 1, 1);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set_uint8(x_194, sizeof(void*)*1, x_25);
if (lean_is_scalar(x_191)) {
 x_195 = lean_alloc_ctor(0, 4, 0);
} else {
 x_195 = x_191;
}
lean_ctor_set(x_195, 0, x_188);
lean_ctor_set(x_195, 1, x_189);
lean_ctor_set(x_195, 2, x_190);
lean_ctor_set(x_195, 3, x_194);
x_196 = lean_st_ref_set(x_9, x_195, x_187);
lean_dec(x_9);
x_197 = lean_ctor_get(x_196, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_198 = x_196;
} else {
 lean_dec_ref(x_196);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_198;
 lean_ctor_set_tag(x_199, 1);
}
lean_ctor_set(x_199, 0, x_180);
lean_ctor_set(x_199, 1, x_197);
return x_199;
}
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_200 = lean_ctor_get(x_8, 3);
lean_inc(x_200);
x_201 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg(x_9, x_20);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_204 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_203);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2(x_202, x_17, x_200, x_4, x_5, x_6, x_7, x_8, x_9, x_206);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_208 = !lean_is_exclusive(x_207);
if (x_208 == 0)
{
lean_object* x_209; 
x_209 = lean_ctor_get(x_207, 0);
lean_dec(x_209);
lean_ctor_set(x_207, 0, x_205);
return x_207;
}
else
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_207, 1);
lean_inc(x_210);
lean_dec(x_207);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_205);
lean_ctor_set(x_211, 1, x_210);
return x_211;
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_215; 
x_212 = lean_ctor_get(x_204, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_204, 1);
lean_inc(x_213);
lean_dec(x_204);
x_214 = l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2(x_202, x_17, x_200, x_4, x_5, x_6, x_7, x_8, x_9, x_213);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_215 = !lean_is_exclusive(x_214);
if (x_215 == 0)
{
lean_object* x_216; 
x_216 = lean_ctor_get(x_214, 0);
lean_dec(x_216);
lean_ctor_set_tag(x_214, 1);
lean_ctor_set(x_214, 0, x_212);
return x_214;
}
else
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
lean_dec(x_214);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_212);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_SynthInstance_tryResolve___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Util_Trace_0__Lean_addNode___at_Lean_Meta_SynthInstance_tryResolve___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryResolve___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_tryResolve___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryAnswer_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_openAbstractMVarsResult(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_6);
x_12 = l_Lean_Meta_isExprDefEq(x_1, x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_6);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_st_ref_get(x_8, x_21);
lean_dec(x_8);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_st_ref_get(x_6, x_23);
lean_dec(x_6);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_8);
lean_dec(x_6);
x_34 = !lean_is_exclusive(x_12);
if (x_34 == 0)
{
return x_12;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_12, 0);
x_36 = lean_ctor_get(x_12, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_12);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryAnswer___lambda__1___boxed), 8, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_tryAnswer___lambda__2___boxed), 9, 1);
lean_closure_set(x_13, 0, x_2);
x_14 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_1, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_tryAnswer___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_tryAnswer___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_tryAnswer___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_wakeUp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_st_ref_get(x_8, x_9);
lean_dec(x_8);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_take(x_4, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_14, 2);
lean_inc(x_10);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_1);
x_19 = lean_array_push(x_17, x_18);
lean_ctor_set(x_14, 2, x_19);
x_20 = lean_st_ref_set(x_4, x_14, x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
x_29 = lean_ctor_get(x_14, 2);
x_30 = lean_ctor_get(x_14, 3);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
lean_inc(x_10);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_1);
x_32 = lean_array_push(x_29, x_31);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_30);
x_34 = lean_st_ref_set(x_4, x_33, x_15);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_87; uint8_t x_88; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_87 = lean_ctor_get(x_39, 0);
lean_inc(x_87);
x_88 = l_Array_isEmpty___rarg(x_87);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; 
x_89 = lean_box(0);
x_40 = x_89;
goto block_86;
}
else
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_90 = lean_ctor_get(x_39, 1);
lean_inc(x_90);
x_91 = lean_unsigned_to_nat(0u);
x_92 = lean_nat_dec_eq(x_90, x_91);
lean_dec(x_90);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_box(0);
x_40 = x_93;
goto block_86;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_94 = lean_st_ref_get(x_8, x_9);
lean_dec(x_8);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_96 = lean_st_ref_take(x_4, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = lean_ctor_get(x_39, 2);
lean_inc(x_99);
lean_dec(x_39);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = !lean_is_exclusive(x_97);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_102 = lean_ctor_get(x_97, 0);
lean_dec(x_102);
lean_ctor_set(x_97, 0, x_100);
x_103 = lean_st_ref_set(x_4, x_97, x_98);
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_103, 0);
lean_dec(x_105);
x_106 = lean_box(0);
lean_ctor_set(x_103, 0, x_106);
return x_103;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_103, 1);
lean_inc(x_107);
lean_dec(x_103);
x_108 = lean_box(0);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
return x_109;
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_110 = lean_ctor_get(x_97, 1);
x_111 = lean_ctor_get(x_97, 2);
x_112 = lean_ctor_get(x_97, 3);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_97);
x_113 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_113, 0, x_100);
lean_ctor_set(x_113, 1, x_110);
lean_ctor_set(x_113, 2, x_111);
lean_ctor_set(x_113, 3, x_112);
x_114 = lean_st_ref_set(x_4, x_113, x_98);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_116 = x_114;
} else {
 lean_dec_ref(x_114);
 x_116 = lean_box(0);
}
x_117 = lean_box(0);
if (lean_is_scalar(x_116)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_116;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
}
}
block_86:
{
lean_object* x_41; 
lean_dec(x_40);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_41 = l_Lean_Meta_openAbstractMVarsResult(x_39, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_45 = x_41;
} else {
 lean_dec_ref(x_41);
 x_45 = lean_box(0);
}
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_box(0);
x_48 = lean_mk_string("Meta");
x_49 = lean_name_mk_string(x_47, x_48);
x_50 = lean_mk_string("synthInstance");
x_51 = lean_name_mk_string(x_49, x_50);
x_71 = lean_st_ref_get(x_8, x_44);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_72, 3);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get_uint8(x_73, sizeof(void*)*1);
lean_dec(x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_ctor_get(x_71, 1);
lean_inc(x_75);
lean_dec(x_71);
x_76 = 0;
x_52 = x_76;
x_53 = x_75;
goto block_70;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_77 = lean_ctor_get(x_71, 1);
lean_inc(x_77);
lean_dec(x_71);
lean_inc(x_51);
x_78 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_51, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_unbox(x_79);
lean_dec(x_79);
x_52 = x_81;
x_53 = x_80;
goto block_70;
}
block_70:
{
if (x_52 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_51);
lean_dec(x_46);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_54 = lean_box(0);
if (lean_is_scalar(x_45)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_45;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_45);
x_56 = lean_mk_string("skip answer containing metavariables ");
x_57 = l_Lean_stringToMessageData(x_56);
lean_dec(x_56);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_46);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_mk_string("");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_51, x_62, x_3, x_4, x_5, x_6, x_7, x_8, x_53);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_63, 0);
lean_dec(x_65);
x_66 = lean_box(0);
lean_ctor_set(x_63, 0, x_66);
return x_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
lean_dec(x_63);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_82 = !lean_is_exclusive(x_41);
if (x_82 == 0)
{
return x_41;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_41, 0);
x_84 = lean_ctor_get(x_41, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_41);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_wakeUp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_expr_eqv(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
uint8_t l_Lean_Meta_SynthInstance_isNewAnswer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 1;
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(x_2, x_1, x_9, x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Meta_SynthInstance_isNewAnswer___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_isNewAnswer___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_SynthInstance_isNewAnswer(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_withMCtx___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_withMCtx___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___spec__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = lean_ctor_get(x_10, 3);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (x_4 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l_Lean_Meta_inferType(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_mk_string("size: ");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_ctor_get(x_2, 4);
lean_inc(x_17);
lean_dec(x_2);
x_18 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_mk_string(", ");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_13);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3, x_28, x_5, x_6, x_7, x_8, x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_12);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_instantiateMVars(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_41; lean_object* x_42; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_53 = lean_st_ref_get(x_8, x_12);
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
x_41 = x_58;
x_42 = x_57;
goto block_52;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
lean_inc(x_3);
x_60 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3, x_5, x_6, x_7, x_8, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unbox(x_61);
lean_dec(x_61);
x_41 = x_63;
x_42 = x_62;
goto block_52;
}
block_40:
{
lean_object* x_14; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Meta_abstractMVars(x_11, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType(x_17, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_2, 4);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_21, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_23);
lean_ctor_set(x_18, 0, x_24);
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_ctor_get(x_2, 4);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_27, x_28);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_15);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_15);
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
return x_18;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_18, 0);
x_34 = lean_ctor_get(x_18, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_18);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_36 = !lean_is_exclusive(x_14);
if (x_36 == 0)
{
return x_14;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_14, 0);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_14);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
block_52:
{
if (x_41 == 0)
{
lean_dec(x_3);
x_13 = x_42;
goto block_40;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_43 = lean_mk_string("val: ");
x_44 = l_Lean_stringToMessageData(x_43);
lean_dec(x_43);
lean_inc(x_11);
x_45 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_45, 0, x_11);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_mk_string("");
x_48 = l_Lean_stringToMessageData(x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3, x_49, x_5, x_6, x_7, x_8, x_42);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_13 = x_51;
goto block_40;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_10);
if (x_64 == 0)
{
return x_10;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_10, 0);
x_66 = lean_ctor_get(x_10, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_10);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_box(0);
x_9 = lean_mk_string("Meta");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("synthInstance");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("newAnswer");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_inc(x_14);
x_16 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2___boxed), 7, 1);
lean_closure_set(x_16, 0, x_14);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1___boxed), 5, 0);
x_18 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
lean_inc(x_14);
lean_inc(x_1);
lean_inc(x_15);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__3___boxed), 9, 3);
lean_closure_set(x_19, 0, x_15);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_14);
x_20 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__4___boxed), 9, 3);
lean_closure_set(x_21, 0, x_15);
lean_closure_set(x_21, 1, x_1);
lean_closure_set(x_21, 2, x_14);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = l_Lean_Meta_withMCtx___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___spec__1___rarg(x_7, x_22, x_2, x_3, x_4, x_5, x_6);
return x_23;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__3(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_15 = l_Lean_Meta_SynthInstance_wakeUp(x_1, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_addAnswer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = lean_nat_dec_le(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_12 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_Lean_Meta_SynthInstance_getEntry(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_16, 1);
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
x_23 = l_Lean_Meta_SynthInstance_isNewAnswer(x_22, x_13);
if (x_23 == 0)
{
lean_object* x_24; 
lean_free_object(x_18);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_box(0);
lean_ctor_set(x_16, 0, x_24);
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_free_object(x_16);
lean_inc(x_13);
x_25 = lean_array_push(x_22, x_13);
lean_inc(x_21);
lean_ctor_set(x_18, 1, x_25);
x_26 = lean_st_ref_get(x_7, x_20);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_st_ref_take(x_3, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_29, 3);
x_33 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_32, x_15, x_18);
lean_ctor_set(x_29, 3, x_33);
x_34 = lean_st_ref_set(x_3, x_29, x_30);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_34, 1);
x_37 = lean_ctor_get(x_34, 0);
lean_dec(x_37);
x_38 = lean_array_get_size(x_21);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_nat_dec_lt(x_39, x_38);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_38);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_box(0);
lean_ctor_set(x_34, 0, x_41);
return x_34;
}
else
{
uint8_t x_42; 
x_42 = lean_nat_dec_le(x_38, x_38);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_38);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_box(0);
lean_ctor_set(x_34, 0, x_43);
return x_34;
}
else
{
size_t x_44; size_t x_45; lean_object* x_46; lean_object* x_47; 
lean_free_object(x_34);
x_44 = 0;
x_45 = lean_usize_of_nat(x_38);
lean_dec(x_38);
x_46 = lean_box(0);
x_47 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_13, x_21, x_44, x_45, x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_21);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
lean_dec(x_34);
x_49 = lean_array_get_size(x_21);
x_50 = lean_unsigned_to_nat(0u);
x_51 = lean_nat_dec_lt(x_50, x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_48);
return x_53;
}
else
{
uint8_t x_54; 
x_54 = lean_nat_dec_le(x_49, x_49);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_49);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_48);
return x_56;
}
else
{
size_t x_57; size_t x_58; lean_object* x_59; lean_object* x_60; 
x_57 = 0;
x_58 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_59 = lean_box(0);
x_60 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_13, x_21, x_57, x_58, x_59, x_2, x_3, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_21);
return x_60;
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_61 = lean_ctor_get(x_29, 0);
x_62 = lean_ctor_get(x_29, 1);
x_63 = lean_ctor_get(x_29, 2);
x_64 = lean_ctor_get(x_29, 3);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_29);
x_65 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_64, x_15, x_18);
x_66 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_62);
lean_ctor_set(x_66, 2, x_63);
lean_ctor_set(x_66, 3, x_65);
x_67 = lean_st_ref_set(x_3, x_66, x_30);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
x_70 = lean_array_get_size(x_21);
x_71 = lean_unsigned_to_nat(0u);
x_72 = lean_nat_dec_lt(x_71, x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_70);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = lean_box(0);
if (lean_is_scalar(x_69)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_69;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_68);
return x_74;
}
else
{
uint8_t x_75; 
x_75 = lean_nat_dec_le(x_70, x_70);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_70);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_box(0);
if (lean_is_scalar(x_69)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_69;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_68);
return x_77;
}
else
{
size_t x_78; size_t x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_69);
x_78 = 0;
x_79 = lean_usize_of_nat(x_70);
lean_dec(x_70);
x_80 = lean_box(0);
x_81 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_13, x_21, x_78, x_79, x_80, x_2, x_3, x_4, x_5, x_6, x_7, x_68);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_21);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_16, 1);
x_83 = lean_ctor_get(x_18, 0);
x_84 = lean_ctor_get(x_18, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_18);
x_85 = l_Lean_Meta_SynthInstance_isNewAnswer(x_84, x_13);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_86 = lean_box(0);
lean_ctor_set(x_16, 0, x_86);
return x_16;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
lean_free_object(x_16);
lean_inc(x_13);
x_87 = lean_array_push(x_84, x_13);
lean_inc(x_83);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_83);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_st_ref_get(x_7, x_82);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = lean_st_ref_take(x_3, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
x_96 = lean_ctor_get(x_92, 2);
lean_inc(x_96);
x_97 = lean_ctor_get(x_92, 3);
lean_inc(x_97);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 lean_ctor_release(x_92, 2);
 lean_ctor_release(x_92, 3);
 x_98 = x_92;
} else {
 lean_dec_ref(x_92);
 x_98 = lean_box(0);
}
x_99 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_97, x_15, x_88);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 4, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_94);
lean_ctor_set(x_100, 1, x_95);
lean_ctor_set(x_100, 2, x_96);
lean_ctor_set(x_100, 3, x_99);
x_101 = lean_st_ref_set(x_3, x_100, x_93);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_103 = x_101;
} else {
 lean_dec_ref(x_101);
 x_103 = lean_box(0);
}
x_104 = lean_array_get_size(x_83);
x_105 = lean_unsigned_to_nat(0u);
x_106 = lean_nat_dec_lt(x_105, x_104);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_104);
lean_dec(x_83);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_107 = lean_box(0);
if (lean_is_scalar(x_103)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_103;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_102);
return x_108;
}
else
{
uint8_t x_109; 
x_109 = lean_nat_dec_le(x_104, x_104);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_104);
lean_dec(x_83);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_110 = lean_box(0);
if (lean_is_scalar(x_103)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_103;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_102);
return x_111;
}
else
{
size_t x_112; size_t x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_103);
x_112 = 0;
x_113 = lean_usize_of_nat(x_104);
lean_dec(x_104);
x_114 = lean_box(0);
x_115 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_13, x_83, x_112, x_113, x_114, x_2, x_3, x_4, x_5, x_6, x_7, x_102);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_83);
return x_115;
}
}
}
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_116 = lean_ctor_get(x_16, 0);
x_117 = lean_ctor_get(x_16, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_16);
x_118 = lean_ctor_get(x_116, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_116, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_120 = x_116;
} else {
 lean_dec_ref(x_116);
 x_120 = lean_box(0);
}
x_121 = l_Lean_Meta_SynthInstance_isNewAnswer(x_119, x_13);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_120);
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_122 = lean_box(0);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_117);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_inc(x_13);
x_124 = lean_array_push(x_119, x_13);
lean_inc(x_118);
if (lean_is_scalar(x_120)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_120;
}
lean_ctor_set(x_125, 0, x_118);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_st_ref_get(x_7, x_117);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_st_ref_take(x_3, x_127);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_129, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_129, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_129, 3);
lean_inc(x_134);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 lean_ctor_release(x_129, 2);
 lean_ctor_release(x_129, 3);
 x_135 = x_129;
} else {
 lean_dec_ref(x_129);
 x_135 = lean_box(0);
}
x_136 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_134, x_15, x_125);
if (lean_is_scalar(x_135)) {
 x_137 = lean_alloc_ctor(0, 4, 0);
} else {
 x_137 = x_135;
}
lean_ctor_set(x_137, 0, x_131);
lean_ctor_set(x_137, 1, x_132);
lean_ctor_set(x_137, 2, x_133);
lean_ctor_set(x_137, 3, x_136);
x_138 = lean_st_ref_set(x_3, x_137, x_130);
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_140 = x_138;
} else {
 lean_dec_ref(x_138);
 x_140 = lean_box(0);
}
x_141 = lean_array_get_size(x_118);
x_142 = lean_unsigned_to_nat(0u);
x_143 = lean_nat_dec_lt(x_142, x_141);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_141);
lean_dec(x_118);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_144 = lean_box(0);
if (lean_is_scalar(x_140)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_140;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_139);
return x_145;
}
else
{
uint8_t x_146; 
x_146 = lean_nat_dec_le(x_141, x_141);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; 
lean_dec(x_141);
lean_dec(x_118);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = lean_box(0);
if (lean_is_scalar(x_140)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_140;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_139);
return x_148;
}
else
{
size_t x_149; size_t x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_140);
x_149 = 0;
x_150 = lean_usize_of_nat(x_141);
lean_dec(x_141);
x_151 = lean_box(0);
x_152 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_13, x_118, x_149, x_150, x_151, x_2, x_3, x_4, x_5, x_6, x_7, x_139);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_118);
return x_152;
}
}
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_153 = !lean_is_exclusive(x_16);
if (x_153 == 0)
{
return x_16;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_16, 0);
x_155 = lean_ctor_get(x_16, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_16);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_12);
if (x_157 == 0)
{
return x_12;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_12, 0);
x_159 = lean_ctor_get(x_12, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_12);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; 
x_161 = lean_box(0);
x_162 = lean_mk_string("Meta");
x_163 = lean_name_mk_string(x_161, x_162);
x_164 = lean_mk_string("synthInstance");
x_165 = lean_name_mk_string(x_163, x_164);
x_166 = lean_mk_string("discarded");
x_167 = lean_name_mk_string(x_165, x_166);
x_207 = lean_st_ref_get(x_7, x_8);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_208, 3);
lean_inc(x_209);
lean_dec(x_208);
x_210 = lean_ctor_get_uint8(x_209, sizeof(void*)*1);
lean_dec(x_209);
if (x_210 == 0)
{
lean_object* x_211; uint8_t x_212; 
x_211 = lean_ctor_get(x_207, 1);
lean_inc(x_211);
lean_dec(x_207);
x_212 = 0;
x_168 = x_212;
x_169 = x_211;
goto block_206;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_213 = lean_ctor_get(x_207, 1);
lean_inc(x_213);
lean_dec(x_207);
lean_inc(x_167);
x_214 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_167, x_2, x_3, x_4, x_5, x_6, x_7, x_213);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_unbox(x_215);
lean_dec(x_215);
x_168 = x_217;
x_169 = x_216;
goto block_206;
}
block_206:
{
if (x_168 == 0)
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_167);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_box(0);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_1, 0);
lean_inc(x_172);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_173 = l_Lean_Meta_inferType(x_172, x_4, x_5, x_6, x_7, x_169);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
lean_dec(x_173);
x_176 = lean_mk_string("size: ");
x_177 = l_Lean_stringToMessageData(x_176);
lean_dec(x_176);
x_178 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_10);
x_179 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_179, 0, x_178);
x_180 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_mk_string(" ≥ ");
x_182 = l_Lean_stringToMessageData(x_181);
lean_dec(x_181);
x_183 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_182);
x_184 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_9);
x_185 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_185, 0, x_184);
x_186 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_mk_string(", ");
x_188 = l_Lean_stringToMessageData(x_187);
lean_dec(x_187);
x_189 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_190, 0, x_174);
x_191 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_mk_string("");
x_193 = l_Lean_stringToMessageData(x_192);
lean_dec(x_192);
x_194 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_193);
x_195 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_167, x_194, x_2, x_3, x_4, x_5, x_6, x_7, x_175);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_196 = !lean_is_exclusive(x_195);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_195, 0);
lean_dec(x_197);
x_198 = lean_box(0);
lean_ctor_set(x_195, 0, x_198);
return x_195;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_195, 1);
lean_inc(x_199);
lean_dec(x_195);
x_200 = lean_box(0);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
}
else
{
uint8_t x_202; 
lean_dec(x_167);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_202 = !lean_is_exclusive(x_173);
if (x_202 == 0)
{
return x_173;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_173, 0);
x_204 = lean_ctor_get(x_173, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_173);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
return x_205;
}
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_addAnswer___spec__1(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Lean_Meta_SynthInstance_consume_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_consume_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_consume_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_array_push(x_5, x_8);
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
x_5 = x_9;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_consume(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = l_Lean_Meta_SynthInstance_addAnswer(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_13);
x_14 = l_Lean_Meta_SynthInstance_mkTableKeyFor(x_13, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Meta_SynthInstance_findEntry_x3f(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_SynthInstance_newSubgoal(x_13, x_15, x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_st_ref_get(x_7, x_21);
lean_dec(x_7);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_take(x_3, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_30 = lean_ctor_get(x_26, 2);
x_31 = lean_ctor_get(x_26, 3);
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
x_34 = lean_array_get_size(x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_lt(x_35, x_34);
x_37 = lean_array_push(x_32, x_12);
lean_inc(x_33);
lean_ctor_set(x_22, 0, x_37);
if (x_36 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_1);
x_38 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_31, x_15, x_22);
lean_ctor_set(x_26, 3, x_38);
x_39 = lean_st_ref_set(x_3, x_26, x_27);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
x_42 = lean_box(0);
lean_ctor_set(x_39, 0, x_42);
return x_39;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_39, 1);
lean_inc(x_43);
lean_dec(x_39);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = lean_nat_dec_le(x_34, x_34);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_1);
x_47 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_31, x_15, x_22);
lean_ctor_set(x_26, 3, x_47);
x_48 = lean_st_ref_set(x_3, x_26, x_27);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
x_51 = lean_box(0);
lean_ctor_set(x_48, 0, x_51);
return x_48;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
size_t x_55; size_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_55 = 0;
x_56 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_57 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_33, x_55, x_56, x_30);
lean_dec(x_33);
x_58 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_31, x_15, x_22);
lean_ctor_set(x_26, 3, x_58);
lean_ctor_set(x_26, 2, x_57);
x_59 = lean_st_ref_set(x_3, x_26, x_27);
lean_dec(x_3);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
x_62 = lean_box(0);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; 
x_66 = lean_ctor_get(x_26, 2);
x_67 = lean_ctor_get(x_26, 3);
x_68 = lean_ctor_get(x_22, 0);
x_69 = lean_ctor_get(x_22, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_22);
x_70 = lean_array_get_size(x_69);
x_71 = lean_unsigned_to_nat(0u);
x_72 = lean_nat_dec_lt(x_71, x_70);
x_73 = lean_array_push(x_68, x_12);
lean_inc(x_69);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_69);
if (x_72 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_1);
x_75 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_67, x_15, x_74);
lean_ctor_set(x_26, 3, x_75);
x_76 = lean_st_ref_set(x_3, x_26, x_27);
lean_dec(x_3);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_78 = x_76;
} else {
 lean_dec_ref(x_76);
 x_78 = lean_box(0);
}
x_79 = lean_box(0);
if (lean_is_scalar(x_78)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_78;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
else
{
uint8_t x_81; 
x_81 = lean_nat_dec_le(x_70, x_70);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_1);
x_82 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_67, x_15, x_74);
lean_ctor_set(x_26, 3, x_82);
x_83 = lean_st_ref_set(x_3, x_26, x_27);
lean_dec(x_3);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_85 = x_83;
} else {
 lean_dec_ref(x_83);
 x_85 = lean_box(0);
}
x_86 = lean_box(0);
if (lean_is_scalar(x_85)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_85;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_84);
return x_87;
}
else
{
size_t x_88; size_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_88 = 0;
x_89 = lean_usize_of_nat(x_70);
lean_dec(x_70);
x_90 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_69, x_88, x_89, x_66);
lean_dec(x_69);
x_91 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_67, x_15, x_74);
lean_ctor_set(x_26, 3, x_91);
lean_ctor_set(x_26, 2, x_90);
x_92 = lean_st_ref_set(x_3, x_26, x_27);
lean_dec(x_3);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_94 = x_92;
} else {
 lean_dec_ref(x_92);
 x_94 = lean_box(0);
}
x_95 = lean_box(0);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; 
x_97 = lean_ctor_get(x_26, 0);
x_98 = lean_ctor_get(x_26, 1);
x_99 = lean_ctor_get(x_26, 2);
x_100 = lean_ctor_get(x_26, 3);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_26);
x_101 = lean_ctor_get(x_22, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_22, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_103 = x_22;
} else {
 lean_dec_ref(x_22);
 x_103 = lean_box(0);
}
x_104 = lean_array_get_size(x_102);
x_105 = lean_unsigned_to_nat(0u);
x_106 = lean_nat_dec_lt(x_105, x_104);
x_107 = lean_array_push(x_101, x_12);
lean_inc(x_102);
if (lean_is_scalar(x_103)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_103;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_102);
if (x_106 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_1);
x_109 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_100, x_15, x_108);
x_110 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_110, 0, x_97);
lean_ctor_set(x_110, 1, x_98);
lean_ctor_set(x_110, 2, x_99);
lean_ctor_set(x_110, 3, x_109);
x_111 = lean_st_ref_set(x_3, x_110, x_27);
lean_dec(x_3);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_113 = x_111;
} else {
 lean_dec_ref(x_111);
 x_113 = lean_box(0);
}
x_114 = lean_box(0);
if (lean_is_scalar(x_113)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_113;
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_112);
return x_115;
}
else
{
uint8_t x_116; 
x_116 = lean_nat_dec_le(x_104, x_104);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_1);
x_117 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_100, x_15, x_108);
x_118 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_118, 0, x_97);
lean_ctor_set(x_118, 1, x_98);
lean_ctor_set(x_118, 2, x_99);
lean_ctor_set(x_118, 3, x_117);
x_119 = lean_st_ref_set(x_3, x_118, x_27);
lean_dec(x_3);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
x_122 = lean_box(0);
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
size_t x_124; size_t x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_124 = 0;
x_125 = lean_usize_of_nat(x_104);
lean_dec(x_104);
x_126 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_102, x_124, x_125, x_99);
lean_dec(x_102);
x_127 = l_Std_HashMapImp_insert___at_Lean_Meta_SynthInstance_newSubgoal___spec__4(x_100, x_15, x_108);
x_128 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_128, 0, x_97);
lean_ctor_set(x_128, 1, x_98);
lean_ctor_set(x_128, 2, x_126);
lean_ctor_set(x_128, 3, x_127);
x_129 = lean_st_ref_set(x_3, x_128, x_27);
lean_dec(x_3);
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_131 = x_129;
} else {
 lean_dec_ref(x_129);
 x_131 = lean_box(0);
}
x_132 = lean_box(0);
if (lean_is_scalar(x_131)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_131;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_130);
return x_133;
}
}
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_134 = !lean_is_exclusive(x_14);
if (x_134 == 0)
{
return x_14;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_14, 0);
x_136 = lean_ctor_get(x_14, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_14);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SynthInstance_consume___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_Meta_SynthInstance_instInhabitedGeneratorNode;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_12);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getTop___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_SynthInstance_getTop___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_getTop___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_getTop___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_getTop(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_modifyTop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_array_get_size(x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_16, x_17);
x_19 = lean_nat_dec_lt(x_18, x_16);
lean_dec(x_16);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_18);
lean_dec(x_1);
x_20 = lean_st_ref_set(x_3, x_12, x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint64_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_27 = lean_array_fget(x_15, x_18);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_uint64_of_nat(x_28);
x_30 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set_uint64(x_30, sizeof(void*)*1, x_29);
x_31 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_28);
lean_inc_n(x_33, 4);
x_34 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_34, 2, x_33);
lean_ctor_set(x_34, 3, x_33);
lean_ctor_set(x_34, 4, x_33);
lean_ctor_set(x_34, 5, x_33);
x_35 = lean_mk_empty_array_with_capacity(x_28);
lean_inc(x_30);
x_36 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_30);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set(x_36, 3, x_35);
lean_ctor_set(x_36, 4, x_28);
x_37 = lean_array_fset(x_15, x_18, x_36);
x_38 = lean_apply_1(x_1, x_27);
x_39 = lean_array_fset(x_37, x_18, x_38);
lean_dec(x_18);
lean_ctor_set(x_12, 1, x_39);
x_40 = lean_st_ref_set(x_3, x_12, x_13);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = lean_box(0);
lean_ctor_set(x_40, 0, x_43);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_47 = lean_ctor_get(x_12, 0);
x_48 = lean_ctor_get(x_12, 1);
x_49 = lean_ctor_get(x_12, 2);
x_50 = lean_ctor_get(x_12, 3);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_12);
x_51 = lean_array_get_size(x_48);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_sub(x_51, x_52);
x_54 = lean_nat_dec_lt(x_53, x_51);
lean_dec(x_51);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_53);
lean_dec(x_1);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_47);
lean_ctor_set(x_55, 1, x_48);
lean_ctor_set(x_55, 2, x_49);
lean_ctor_set(x_55, 3, x_50);
x_56 = lean_st_ref_set(x_3, x_55, x_13);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
x_59 = lean_box(0);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; uint64_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_61 = lean_array_fget(x_48, x_53);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_uint64_of_nat(x_62);
x_64 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set_uint64(x_64, sizeof(void*)*1, x_63);
x_65 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_66 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_62);
lean_inc_n(x_67, 4);
x_68 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_67);
lean_ctor_set(x_68, 3, x_67);
lean_ctor_set(x_68, 4, x_67);
lean_ctor_set(x_68, 5, x_67);
x_69 = lean_mk_empty_array_with_capacity(x_62);
lean_inc(x_64);
x_70 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_70, 0, x_64);
lean_ctor_set(x_70, 1, x_64);
lean_ctor_set(x_70, 2, x_68);
lean_ctor_set(x_70, 3, x_69);
lean_ctor_set(x_70, 4, x_62);
x_71 = lean_array_fset(x_48, x_53, x_70);
x_72 = lean_apply_1(x_1, x_61);
x_73 = lean_array_fset(x_71, x_53, x_72);
lean_dec(x_53);
x_74 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_74, 0, x_47);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_74, 2, x_49);
lean_ctor_set(x_74, 3, x_50);
x_75 = lean_st_ref_set(x_3, x_74, x_13);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_77 = x_75;
} else {
 lean_dec_ref(x_75);
 x_77 = lean_box(0);
}
x_78 = lean_box(0);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_77;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_modifyTop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SynthInstance_modifyTop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_SynthInstance_generate_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_generate_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_generate_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_generate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_8 = l_Lean_Meta_SynthInstance_getTop___rarg(x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_9, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_9, 4);
lean_inc(x_15);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 lean_ctor_release(x_9, 4);
 x_16 = x_9;
} else {
 lean_dec_ref(x_9);
 x_16 = lean_box(0);
}
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_15, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_15, x_19);
lean_dec(x_15);
x_21 = l_Lean_instInhabitedExpr;
x_22 = lean_array_get(x_21, x_14, x_20);
lean_dec(x_14);
x_110 = lean_box(0);
x_111 = lean_mk_string("Meta");
x_112 = lean_name_mk_string(x_110, x_111);
x_113 = lean_mk_string("synthInstance");
x_114 = lean_name_mk_string(x_112, x_113);
x_115 = lean_mk_string("generate");
x_116 = lean_name_mk_string(x_114, x_115);
x_129 = lean_st_ref_get(x_6, x_10);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_130, 3);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_ctor_get_uint8(x_131, sizeof(void*)*1);
lean_dec(x_131);
if (x_132 == 0)
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_129, 1);
lean_inc(x_133);
lean_dec(x_129);
x_134 = 0;
x_117 = x_134;
x_118 = x_133;
goto block_128;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_135 = lean_ctor_get(x_129, 1);
lean_inc(x_135);
lean_dec(x_129);
lean_inc(x_116);
x_136 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_116, x_1, x_2, x_3, x_4, x_5, x_6, x_135);
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = lean_unbox(x_137);
lean_dec(x_137);
x_117 = x_139;
x_118 = x_138;
goto block_128;
}
block_109:
{
lean_object* x_24; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_st_ref_get(x_6, x_23);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_st_ref_take(x_2, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_47, 1);
x_51 = lean_array_get_size(x_50);
x_52 = lean_nat_sub(x_51, x_19);
x_53 = lean_nat_dec_lt(x_52, x_51);
lean_dec(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_52);
lean_dec(x_20);
lean_dec(x_16);
x_54 = lean_st_ref_set(x_2, x_47, x_48);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_24 = x_55;
goto block_43;
}
else
{
lean_object* x_56; uint64_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_56 = lean_array_fget(x_50, x_52);
x_57 = lean_uint64_of_nat(x_17);
x_58 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_58, 0, x_17);
lean_ctor_set_uint64(x_58, sizeof(void*)*1, x_57);
x_59 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_60 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_17);
lean_inc_n(x_61, 4);
x_62 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_62, 0, x_17);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_61);
lean_ctor_set(x_62, 4, x_61);
lean_ctor_set(x_62, 5, x_61);
x_63 = lean_mk_empty_array_with_capacity(x_17);
lean_inc(x_58);
if (lean_is_scalar(x_16)) {
 x_64 = lean_alloc_ctor(0, 5, 0);
} else {
 x_64 = x_16;
}
lean_ctor_set(x_64, 0, x_58);
lean_ctor_set(x_64, 1, x_58);
lean_ctor_set(x_64, 2, x_62);
lean_ctor_set(x_64, 3, x_63);
lean_ctor_set(x_64, 4, x_17);
x_65 = lean_array_fset(x_50, x_52, x_64);
x_66 = !lean_is_exclusive(x_56);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_56, 4);
lean_dec(x_67);
lean_ctor_set(x_56, 4, x_20);
x_68 = lean_array_fset(x_65, x_52, x_56);
lean_dec(x_52);
lean_ctor_set(x_47, 1, x_68);
x_69 = lean_st_ref_set(x_2, x_47, x_48);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_24 = x_70;
goto block_43;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_56, 0);
x_72 = lean_ctor_get(x_56, 1);
x_73 = lean_ctor_get(x_56, 2);
x_74 = lean_ctor_get(x_56, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_56);
x_75 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_75, 0, x_71);
lean_ctor_set(x_75, 1, x_72);
lean_ctor_set(x_75, 2, x_73);
lean_ctor_set(x_75, 3, x_74);
lean_ctor_set(x_75, 4, x_20);
x_76 = lean_array_fset(x_65, x_52, x_75);
lean_dec(x_52);
lean_ctor_set(x_47, 1, x_76);
x_77 = lean_st_ref_set(x_2, x_47, x_48);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_24 = x_78;
goto block_43;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_79 = lean_ctor_get(x_47, 0);
x_80 = lean_ctor_get(x_47, 1);
x_81 = lean_ctor_get(x_47, 2);
x_82 = lean_ctor_get(x_47, 3);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_47);
x_83 = lean_array_get_size(x_80);
x_84 = lean_nat_sub(x_83, x_19);
x_85 = lean_nat_dec_lt(x_84, x_83);
lean_dec(x_83);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_84);
lean_dec(x_20);
lean_dec(x_16);
x_86 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_86, 0, x_79);
lean_ctor_set(x_86, 1, x_80);
lean_ctor_set(x_86, 2, x_81);
lean_ctor_set(x_86, 3, x_82);
x_87 = lean_st_ref_set(x_2, x_86, x_48);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_24 = x_88;
goto block_43;
}
else
{
lean_object* x_89; uint64_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_89 = lean_array_fget(x_80, x_84);
x_90 = lean_uint64_of_nat(x_17);
x_91 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_91, 0, x_17);
lean_ctor_set_uint64(x_91, sizeof(void*)*1, x_90);
x_92 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_93 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_17);
lean_inc_n(x_94, 4);
x_95 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_95, 0, x_17);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_94);
lean_ctor_set(x_95, 3, x_94);
lean_ctor_set(x_95, 4, x_94);
lean_ctor_set(x_95, 5, x_94);
x_96 = lean_mk_empty_array_with_capacity(x_17);
lean_inc(x_91);
if (lean_is_scalar(x_16)) {
 x_97 = lean_alloc_ctor(0, 5, 0);
} else {
 x_97 = x_16;
}
lean_ctor_set(x_97, 0, x_91);
lean_ctor_set(x_97, 1, x_91);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_96);
lean_ctor_set(x_97, 4, x_17);
x_98 = lean_array_fset(x_80, x_84, x_97);
x_99 = lean_ctor_get(x_89, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_89, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_89, 2);
lean_inc(x_101);
x_102 = lean_ctor_get(x_89, 3);
lean_inc(x_102);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 lean_ctor_release(x_89, 2);
 lean_ctor_release(x_89, 3);
 lean_ctor_release(x_89, 4);
 x_103 = x_89;
} else {
 lean_dec_ref(x_89);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(0, 5, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_100);
lean_ctor_set(x_104, 2, x_101);
lean_ctor_set(x_104, 3, x_102);
lean_ctor_set(x_104, 4, x_20);
x_105 = lean_array_fset(x_98, x_84, x_104);
lean_dec(x_84);
x_106 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_106, 0, x_79);
lean_ctor_set(x_106, 1, x_105);
lean_ctor_set(x_106, 2, x_81);
lean_ctor_set(x_106, 3, x_82);
x_107 = lean_st_ref_set(x_2, x_106, x_48);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_24 = x_108;
goto block_43;
}
}
block_43:
{
lean_object* x_25; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_11);
x_25 = l_Lean_Meta_SynthInstance_tryResolve(x_13, x_11, x_22, x_1, x_2, x_3, x_4, x_5, x_6, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_26, 0);
lean_inc(x_33);
lean_dec(x_26);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_37, 0, x_11);
lean_ctor_set(x_37, 1, x_12);
lean_ctor_set(x_37, 2, x_35);
lean_ctor_set(x_37, 3, x_36);
lean_ctor_set(x_37, 4, x_17);
x_38 = l_Lean_Meta_SynthInstance_consume(x_37, x_1, x_2, x_3, x_4, x_5, x_6, x_34);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_25);
if (x_39 == 0)
{
return x_25;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_25, 0);
x_41 = lean_ctor_get(x_25, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_25);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
block_128:
{
if (x_117 == 0)
{
lean_dec(x_116);
x_23 = x_118;
goto block_109;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_119 = lean_mk_string("instance ");
x_120 = l_Lean_stringToMessageData(x_119);
lean_dec(x_119);
lean_inc(x_22);
x_121 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_121, 0, x_22);
x_122 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_mk_string("");
x_124 = l_Lean_stringToMessageData(x_123);
lean_dec(x_123);
x_125 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_124);
x_126 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_116, x_125, x_1, x_2, x_3, x_4, x_5, x_6, x_118);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_23 = x_127;
goto block_109;
}
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_140 = lean_st_ref_get(x_6, x_10);
lean_dec(x_6);
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
lean_dec(x_140);
x_142 = lean_st_ref_take(x_2, x_141);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = !lean_is_exclusive(x_143);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_146 = lean_ctor_get(x_143, 1);
x_147 = lean_array_pop(x_146);
lean_ctor_set(x_143, 1, x_147);
x_148 = lean_st_ref_set(x_2, x_143, x_144);
lean_dec(x_2);
x_149 = !lean_is_exclusive(x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_148, 0);
lean_dec(x_150);
x_151 = lean_box(0);
lean_ctor_set(x_148, 0, x_151);
return x_148;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_148, 1);
lean_inc(x_152);
lean_dec(x_148);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_155 = lean_ctor_get(x_143, 0);
x_156 = lean_ctor_get(x_143, 1);
x_157 = lean_ctor_get(x_143, 2);
x_158 = lean_ctor_get(x_143, 3);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_143);
x_159 = lean_array_pop(x_156);
x_160 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_160, 0, x_155);
lean_ctor_set(x_160, 1, x_159);
lean_ctor_set(x_160, 2, x_157);
lean_ctor_set(x_160, 3, x_158);
x_161 = lean_st_ref_set(x_2, x_160, x_144);
lean_dec(x_2);
x_162 = lean_ctor_get(x_161, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_163 = x_161;
} else {
 lean_dec_ref(x_161);
 x_163 = lean_box(0);
}
x_164 = lean_box(0);
if (lean_is_scalar(x_163)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_163;
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_162);
return x_165;
}
}
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Meta_SynthInstance_instInhabitedConsumerNode;
x_3 = l_Lean_Meta_SynthInstance_instInhabitedAnswer;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_array_get(x_4, x_1, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_12);
lean_dec(x_12);
x_14 = lean_st_ref_get(x_5, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_take(x_1, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_17, 2);
x_21 = lean_array_pop(x_20);
lean_ctor_set(x_17, 2, x_21);
x_22 = lean_st_ref_set(x_1, x_17, x_18);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_13);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_13);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
x_29 = lean_ctor_get(x_17, 2);
x_30 = lean_ctor_get(x_17, 3);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_31 = lean_array_pop(x_29);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_28);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_32, 3, x_30);
x_33 = lean_st_ref_set(x_1, x_32, x_18);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_13);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getNextToResume___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_SynthInstance_getNextToResume___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_getNextToResume___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_getNextToResume___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_getNextToResume(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_resume_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_resume_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_resume_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_resume_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_SynthInstance_resume_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_resume_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_resume___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (x_6 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l_Lean_Meta_inferType(x_1, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_19 = l_Lean_Meta_inferType(x_2, x_9, x_10, x_11, x_12, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_mk_string("size: ");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_ctor_get(x_3, 2);
x_25 = lean_nat_add(x_4, x_24);
x_26 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_25);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_mk_string(", ");
x_30 = l_Lean_stringToMessageData(x_29);
lean_dec(x_29);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_17);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_string(" <== ");
x_35 = l_Lean_stringToMessageData(x_34);
lean_dec(x_34);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_20);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_string("");
x_40 = l_Lean_stringToMessageData(x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_5, x_41, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_42;
}
else
{
uint8_t x_43; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_43 = !lean_is_exclusive(x_19);
if (x_43 == 0)
{
return x_19;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_19, 0);
x_45 = lean_ctor_get(x_19, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_19);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_16);
if (x_47 == 0)
{
return x_16;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_16, 0);
x_49 = lean_ctor_get(x_16, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_16);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_resume(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Lean_Meta_SynthInstance_getNextToResume___rarg(x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_9);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_instInhabitedSynthM___boxed), 7, 1);
lean_closure_set(x_13, 0, lean_box(0));
x_14 = lean_mk_string("Lean.Meta.SynthInstance");
x_15 = lean_mk_string("Lean.Meta.SynthInstance.resume");
x_16 = lean_unsigned_to_nat(446u);
x_17 = lean_unsigned_to_nat(18u);
x_18 = lean_mk_string("resume found no remaining subgoals");
x_19 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
x_20 = lean_panic_fn(x_13, x_19);
x_21 = lean_apply_7(x_20, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_dec(x_9);
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
x_27 = lean_ctor_get(x_10, 2);
x_28 = lean_ctor_get(x_10, 4);
x_29 = lean_ctor_get(x_10, 3);
lean_dec(x_29);
x_30 = lean_ctor_get(x_11, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_23);
lean_inc(x_30);
x_32 = l_Lean_Meta_SynthInstance_tryAnswer(x_27, x_30, x_23, x_1, x_2, x_3, x_4, x_5, x_6, x_22);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
lean_dec(x_31);
lean_dec(x_30);
lean_free_object(x_10);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_32, 0, x_36);
return x_32;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_dec(x_32);
x_41 = lean_ctor_get(x_33, 0);
lean_inc(x_41);
lean_dec(x_33);
x_42 = lean_box(0);
x_43 = lean_mk_string("Meta");
x_44 = lean_name_mk_string(x_42, x_43);
x_45 = lean_mk_string("synthInstance");
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("resume");
x_48 = lean_name_mk_string(x_46, x_47);
lean_inc(x_48);
x_49 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__2___boxed), 9, 1);
lean_closure_set(x_49, 0, x_48);
x_50 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__1___boxed), 7, 0);
x_51 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_51, 0, x_50);
lean_closure_set(x_51, 1, x_49);
lean_inc(x_28);
lean_inc(x_23);
lean_inc(x_25);
x_52 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_resume___lambda__1___boxed), 13, 5);
lean_closure_set(x_52, 0, x_25);
lean_closure_set(x_52, 1, x_30);
lean_closure_set(x_52, 2, x_23);
lean_closure_set(x_52, 3, x_28);
lean_closure_set(x_52, 4, x_48);
x_53 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_53, 0, x_51);
lean_closure_set(x_53, 1, x_52);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_41);
x_54 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_41, x_53, x_1, x_2, x_3, x_4, x_5, x_6, x_40);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_ctor_get(x_23, 2);
lean_inc(x_56);
lean_dec(x_23);
x_57 = lean_nat_add(x_28, x_56);
lean_dec(x_56);
lean_dec(x_28);
lean_ctor_set(x_10, 4, x_57);
lean_ctor_set(x_10, 3, x_31);
lean_ctor_set(x_10, 2, x_41);
x_58 = l_Lean_Meta_SynthInstance_consume(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_55);
return x_58;
}
else
{
uint8_t x_59; 
lean_dec(x_41);
lean_dec(x_31);
lean_free_object(x_10);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_54);
if (x_59 == 0)
{
return x_54;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_54, 0);
x_61 = lean_ctor_get(x_54, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_54);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_31);
lean_dec(x_30);
lean_free_object(x_10);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_32);
if (x_63 == 0)
{
return x_32;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_32, 0);
x_65 = lean_ctor_get(x_32, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_32);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_67 = lean_ctor_get(x_10, 0);
x_68 = lean_ctor_get(x_10, 1);
x_69 = lean_ctor_get(x_10, 2);
x_70 = lean_ctor_get(x_10, 4);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_10);
x_71 = lean_ctor_get(x_11, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_11, 1);
lean_inc(x_72);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_23);
lean_inc(x_71);
x_73 = l_Lean_Meta_SynthInstance_tryAnswer(x_69, x_71, x_23, x_1, x_2, x_3, x_4, x_5, x_6, x_22);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
x_77 = lean_box(0);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_dec(x_73);
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
lean_dec(x_74);
x_81 = lean_box(0);
x_82 = lean_mk_string("Meta");
x_83 = lean_name_mk_string(x_81, x_82);
x_84 = lean_mk_string("synthInstance");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_mk_string("resume");
x_87 = lean_name_mk_string(x_85, x_86);
lean_inc(x_87);
x_88 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__2___boxed), 9, 1);
lean_closure_set(x_88, 0, x_87);
x_89 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_newSubgoal___lambda__1___boxed), 7, 0);
x_90 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_90, 0, x_89);
lean_closure_set(x_90, 1, x_88);
lean_inc(x_70);
lean_inc(x_23);
lean_inc(x_67);
x_91 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_resume___lambda__1___boxed), 13, 5);
lean_closure_set(x_91, 0, x_67);
lean_closure_set(x_91, 1, x_71);
lean_closure_set(x_91, 2, x_23);
lean_closure_set(x_91, 3, x_70);
lean_closure_set(x_91, 4, x_87);
x_92 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_SynthInstance_newSubgoal___spec__2___rarg), 9, 2);
lean_closure_set(x_92, 0, x_90);
lean_closure_set(x_92, 1, x_91);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_80);
x_93 = l_Lean_Meta_withMCtx___at_Lean_Meta_SynthInstance_newSubgoal___spec__10___rarg(x_80, x_92, x_1, x_2, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_ctor_get(x_23, 2);
lean_inc(x_95);
lean_dec(x_23);
x_96 = lean_nat_add(x_70, x_95);
lean_dec(x_95);
lean_dec(x_70);
x_97 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_97, 0, x_67);
lean_ctor_set(x_97, 1, x_68);
lean_ctor_set(x_97, 2, x_80);
lean_ctor_set(x_97, 3, x_72);
lean_ctor_set(x_97, 4, x_96);
x_98 = l_Lean_Meta_SynthInstance_consume(x_97, x_1, x_2, x_3, x_4, x_5, x_6, x_94);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_70);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_99 = lean_ctor_get(x_93, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_93, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_101 = x_93;
} else {
 lean_dec_ref(x_93);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_103 = lean_ctor_get(x_73, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_73, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_105 = x_73;
} else {
 lean_dec_ref(x_73);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
}
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_resume___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = l_Lean_Meta_SynthInstance_resume___lambda__1(x_1, x_2, x_3, x_4, x_5, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
lean_object* l_Lean_Meta_SynthInstance_step(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SynthInstance_checkMaxHeartbeats(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_6, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
x_17 = l_Array_isEmpty___rarg(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_12);
lean_dec(x_14);
x_18 = l_Lean_Meta_SynthInstance_resume(x_1, x_2, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = 1;
x_22 = lean_box(x_21);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
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
x_27 = !lean_is_exclusive(x_18);
if (x_27 == 0)
{
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_dec(x_14);
x_32 = l_Array_isEmpty___rarg(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_free_object(x_12);
x_33 = l_Lean_Meta_SynthInstance_generate(x_1, x_2, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
x_36 = 1;
x_37 = lean_box(x_36);
lean_ctor_set(x_33, 0, x_37);
return x_33;
}
else
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = 1;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_33);
if (x_42 == 0)
{
return x_33;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_33, 0);
x_44 = lean_ctor_get(x_33, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_33);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; lean_object* x_47; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = 0;
x_47 = lean_box(x_46);
lean_ctor_set(x_12, 0, x_47);
return x_12;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_12, 0);
x_49 = lean_ctor_get(x_12, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_12);
x_50 = lean_ctor_get(x_48, 2);
lean_inc(x_50);
x_51 = l_Array_isEmpty___rarg(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
lean_dec(x_48);
x_52 = l_Lean_Meta_SynthInstance_resume(x_1, x_2, x_3, x_4, x_5, x_6, x_49);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
x_55 = 1;
x_56 = lean_box(x_55);
if (lean_is_scalar(x_54)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_54;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_53);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_52, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_60 = x_52;
} else {
 lean_dec_ref(x_52);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_48, 1);
lean_inc(x_62);
lean_dec(x_48);
x_63 = l_Array_isEmpty___rarg(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = l_Lean_Meta_SynthInstance_generate(x_1, x_2, x_3, x_4, x_5, x_6, x_49);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_66 = x_64;
} else {
 lean_dec_ref(x_64);
 x_66 = lean_box(0);
}
x_67 = 1;
x_68 = lean_box(x_67);
if (lean_is_scalar(x_66)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_66;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_65);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_ctor_get(x_64, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_64, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_72 = x_64;
} else {
 lean_dec_ref(x_64);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
else
{
uint8_t x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = 0;
x_75 = lean_box(x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_49);
return x_76;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_8);
if (x_77 == 0)
{
return x_8;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_8, 0);
x_79 = lean_ctor_get(x_8, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_8);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getResult___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_Meta_SynthInstance_getResult(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_getResult___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_getResult___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SynthInstance_getResult___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_SynthInstance_getResult___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SynthInstance_getResult(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_synth_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SynthInstance_synth_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_synth_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SynthInstance_synth(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_Meta_SynthInstance_step(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
x_13 = lean_mk_string("Meta");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("synthInstance");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_st_ref_get(x_6, x_11);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 3);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get_uint8(x_19, sizeof(void*)*1);
lean_dec(x_19);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_17, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_17, 0, x_23);
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_dec(x_17);
lean_inc(x_16);
x_28 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__1(x_16, x_1, x_2, x_3, x_4, x_5, x_6, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
uint8_t x_31; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_28, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_dec(x_28);
x_38 = lean_mk_string("failed");
x_39 = l_Lean_stringToMessageData(x_38);
lean_dec(x_38);
x_40 = l_Lean_addTrace___at_Lean_Meta_SynthInstance_newSubgoal___spec__3(x_16, x_39, x_1, x_2, x_3, x_4, x_5, x_6, x_37);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = lean_box(0);
lean_ctor_set(x_40, 0, x_43);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_8, 1);
lean_inc(x_47);
lean_dec(x_8);
x_48 = l_Lean_Meta_SynthInstance_getResult___rarg(x_2, x_3, x_4, x_5, x_6, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_7 = x_50;
goto _start;
}
else
{
uint8_t x_52; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_48, 0);
lean_dec(x_53);
x_54 = !lean_is_exclusive(x_49);
if (x_54 == 0)
{
return x_48;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_48, 0, x_56);
return x_48;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_48, 1);
lean_inc(x_57);
lean_dec(x_48);
x_58 = lean_ctor_get(x_49, 0);
lean_inc(x_58);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 x_59 = x_49;
} else {
 lean_dec_ref(x_49);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 1, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_58);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_57);
return x_61;
}
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_8);
if (x_62 == 0)
{
return x_8;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_8, 0);
x_64 = lean_ctor_get(x_8, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_8);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
lean_object* l_Lean_Core_withCurrHeartbeats___at_Lean_Meta_SynthInstance_main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_2(x_1, x_2, x_3);
x_8 = l___private_Lean_CoreM_0__Lean_Core_withCurrHeartbeatsImp___rarg(x_7, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_SynthInstance_main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
if (x_4 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_23 = lean_st_ref_get(x_8, x_9);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 3);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_ctor_get_uint8(x_25, sizeof(void*)*1);
lean_dec(x_25);
x_28 = lean_st_ref_take(x_8, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_29, 3);
lean_dec(x_33);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_72; uint8_t x_157; lean_object* x_158; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_35 = 0;
lean_ctor_set_uint8(x_30, sizeof(void*)*1, x_35);
x_36 = lean_st_ref_set(x_8, x_29, x_31);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_169 = lean_st_ref_get(x_8, x_37);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_170, 3);
lean_inc(x_171);
lean_dec(x_170);
x_172 = lean_ctor_get_uint8(x_171, sizeof(void*)*1);
lean_dec(x_171);
if (x_172 == 0)
{
lean_object* x_173; 
x_173 = lean_ctor_get(x_169, 1);
lean_inc(x_173);
lean_dec(x_169);
x_157 = x_35;
x_158 = x_173;
goto block_168;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_174 = lean_ctor_get(x_169, 1);
lean_inc(x_174);
lean_dec(x_169);
lean_inc(x_3);
x_175 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3, x_5, x_6, x_7, x_8, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_unbox(x_176);
lean_dec(x_176);
x_157 = x_178;
x_158 = x_177;
goto block_168;
}
block_71:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_40 = lean_st_ref_get(x_8, x_39);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_st_ref_take(x_8, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_43, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = !lean_is_exclusive(x_43);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_43, 3);
lean_dec(x_47);
x_48 = !lean_is_exclusive(x_44);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
lean_ctor_set_uint8(x_44, sizeof(void*)*1, x_27);
x_49 = lean_st_ref_set(x_8, x_43, x_45);
lean_dec(x_8);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set_tag(x_49, 1);
lean_ctor_set(x_49, 0, x_38);
x_10 = x_49;
goto block_22;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_38);
lean_ctor_set(x_53, 1, x_52);
x_10 = x_53;
goto block_22;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_44, 0);
lean_inc(x_54);
lean_dec(x_44);
x_55 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set_uint8(x_55, sizeof(void*)*1, x_27);
lean_ctor_set(x_43, 3, x_55);
x_56 = lean_st_ref_set(x_8, x_43, x_45);
lean_dec(x_8);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
 lean_ctor_set_tag(x_59, 1);
}
lean_ctor_set(x_59, 0, x_38);
lean_ctor_set(x_59, 1, x_57);
x_10 = x_59;
goto block_22;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_60 = lean_ctor_get(x_43, 0);
x_61 = lean_ctor_get(x_43, 1);
x_62 = lean_ctor_get(x_43, 2);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_43);
x_63 = lean_ctor_get(x_44, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 x_64 = x_44;
} else {
 lean_dec_ref(x_44);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(0, 1, 1);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set_uint8(x_65, sizeof(void*)*1, x_27);
x_66 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_66, 0, x_60);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_65);
x_67 = lean_st_ref_set(x_8, x_66, x_45);
lean_dec(x_8);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
 lean_ctor_set_tag(x_70, 1);
}
lean_ctor_set(x_70, 0, x_38);
lean_ctor_set(x_70, 1, x_68);
x_10 = x_70;
goto block_22;
}
}
block_156:
{
lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_inc(x_1);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_1);
x_74 = 0;
x_75 = lean_box(0);
lean_inc(x_5);
x_76 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_73, x_74, x_75, x_5, x_6, x_7, x_8, x_72);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_st_ref_get(x_8, x_78);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_st_ref_get(x_6, x_80);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_84);
x_85 = l_Lean_Meta_SynthInstance_mkTableKey(x_84, x_1);
x_86 = lean_ctor_get(x_7, 0);
lean_inc(x_86);
x_87 = l_Lean_Meta_SynthInstance_getMaxHeartbeats(x_86);
lean_dec(x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_2);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_box(0);
x_90 = lean_unsigned_to_nat(0u);
x_91 = lean_mk_empty_array_with_capacity(x_90);
x_92 = lean_unsigned_to_nat(8u);
x_93 = l_Std_mkHashMapImp___rarg(x_92);
lean_inc(x_91);
x_94 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_94, 0, x_89);
lean_ctor_set(x_94, 1, x_91);
lean_ctor_set(x_94, 2, x_91);
lean_ctor_set(x_94, 3, x_93);
x_95 = lean_st_ref_get(x_8, x_83);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_st_mk_ref(x_94, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = lean_box(1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_98);
lean_inc(x_88);
x_101 = l_Lean_Meta_SynthInstance_newSubgoal(x_84, x_85, x_77, x_100, x_88, x_98, x_5, x_6, x_7, x_8, x_99);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
lean_inc(x_8);
lean_inc(x_98);
x_103 = l_Lean_Meta_SynthInstance_synth(x_88, x_98, x_5, x_6, x_7, x_8, x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_st_ref_get(x_8, x_105);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = lean_st_ref_get(x_98, x_107);
lean_dec(x_98);
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
lean_dec(x_108);
x_110 = lean_st_ref_get(x_8, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_ctor_get(x_111, 3);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_ctor_get_uint8(x_113, sizeof(void*)*1);
lean_dec(x_113);
x_115 = lean_st_ref_take(x_8, x_112);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_116, 3);
lean_inc(x_117);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
x_119 = !lean_is_exclusive(x_116);
if (x_119 == 0)
{
lean_object* x_120; uint8_t x_121; 
x_120 = lean_ctor_get(x_116, 3);
lean_dec(x_120);
x_121 = !lean_is_exclusive(x_117);
if (x_121 == 0)
{
lean_object* x_122; uint8_t x_123; 
lean_ctor_set_uint8(x_117, sizeof(void*)*1, x_27);
x_122 = lean_st_ref_set(x_8, x_116, x_118);
lean_dec(x_8);
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_122, 0);
lean_dec(x_124);
x_125 = lean_box(x_114);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_104);
lean_ctor_set(x_126, 1, x_125);
lean_ctor_set(x_122, 0, x_126);
x_10 = x_122;
goto block_22;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_127 = lean_ctor_get(x_122, 1);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_box(x_114);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_104);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_127);
x_10 = x_130;
goto block_22;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_131 = lean_ctor_get(x_117, 0);
lean_inc(x_131);
lean_dec(x_117);
x_132 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set_uint8(x_132, sizeof(void*)*1, x_27);
lean_ctor_set(x_116, 3, x_132);
x_133 = lean_st_ref_set(x_8, x_116, x_118);
lean_dec(x_8);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_135 = x_133;
} else {
 lean_dec_ref(x_133);
 x_135 = lean_box(0);
}
x_136 = lean_box(x_114);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_104);
lean_ctor_set(x_137, 1, x_136);
if (lean_is_scalar(x_135)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_135;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_134);
x_10 = x_138;
goto block_22;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_139 = lean_ctor_get(x_116, 0);
x_140 = lean_ctor_get(x_116, 1);
x_141 = lean_ctor_get(x_116, 2);
lean_inc(x_141);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_116);
x_142 = lean_ctor_get(x_117, 0);
lean_inc(x_142);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 x_143 = x_117;
} else {
 lean_dec_ref(x_117);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(0, 1, 1);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set_uint8(x_144, sizeof(void*)*1, x_27);
x_145 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_145, 0, x_139);
lean_ctor_set(x_145, 1, x_140);
lean_ctor_set(x_145, 2, x_141);
lean_ctor_set(x_145, 3, x_144);
x_146 = lean_st_ref_set(x_8, x_145, x_118);
lean_dec(x_8);
x_147 = lean_ctor_get(x_146, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_148 = x_146;
} else {
 lean_dec_ref(x_146);
 x_148 = lean_box(0);
}
x_149 = lean_box(x_114);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_104);
lean_ctor_set(x_150, 1, x_149);
if (lean_is_scalar(x_148)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_148;
}
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_147);
x_10 = x_151;
goto block_22;
}
}
else
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_98);
x_152 = lean_ctor_get(x_103, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_103, 1);
lean_inc(x_153);
lean_dec(x_103);
x_38 = x_152;
x_39 = x_153;
goto block_71;
}
}
else
{
lean_object* x_154; lean_object* x_155; 
lean_dec(x_98);
lean_dec(x_88);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_154 = lean_ctor_get(x_101, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_101, 1);
lean_inc(x_155);
lean_dec(x_101);
x_38 = x_154;
x_39 = x_155;
goto block_71;
}
}
block_168:
{
if (x_157 == 0)
{
lean_dec(x_3);
x_72 = x_158;
goto block_156;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_159 = lean_mk_string("main goal ");
x_160 = l_Lean_stringToMessageData(x_159);
lean_dec(x_159);
lean_inc(x_1);
x_161 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_161, 0, x_1);
x_162 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_mk_string("");
x_164 = l_Lean_stringToMessageData(x_163);
lean_dec(x_163);
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3, x_165, x_5, x_6, x_7, x_8, x_158);
x_167 = lean_ctor_get(x_166, 1);
lean_inc(x_167);
lean_dec(x_166);
x_72 = x_167;
goto block_156;
}
}
}
else
{
lean_object* x_179; uint8_t x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_205; uint8_t x_271; lean_object* x_272; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; 
x_179 = lean_ctor_get(x_30, 0);
lean_inc(x_179);
lean_dec(x_30);
x_180 = 0;
x_181 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set_uint8(x_181, sizeof(void*)*1, x_180);
lean_ctor_set(x_29, 3, x_181);
x_182 = lean_st_ref_set(x_8, x_29, x_31);
x_183 = lean_ctor_get(x_182, 1);
lean_inc(x_183);
lean_dec(x_182);
x_283 = lean_st_ref_get(x_8, x_183);
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_284, 3);
lean_inc(x_285);
lean_dec(x_284);
x_286 = lean_ctor_get_uint8(x_285, sizeof(void*)*1);
lean_dec(x_285);
if (x_286 == 0)
{
lean_object* x_287; 
x_287 = lean_ctor_get(x_283, 1);
lean_inc(x_287);
lean_dec(x_283);
x_271 = x_180;
x_272 = x_287;
goto block_282;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_292; 
x_288 = lean_ctor_get(x_283, 1);
lean_inc(x_288);
lean_dec(x_283);
lean_inc(x_3);
x_289 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3, x_5, x_6, x_7, x_8, x_288);
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_unbox(x_290);
lean_dec(x_290);
x_271 = x_292;
x_272 = x_291;
goto block_282;
}
block_204:
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_186 = lean_st_ref_get(x_8, x_185);
x_187 = lean_ctor_get(x_186, 1);
lean_inc(x_187);
lean_dec(x_186);
x_188 = lean_st_ref_take(x_8, x_187);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_189, 3);
lean_inc(x_190);
x_191 = lean_ctor_get(x_188, 1);
lean_inc(x_191);
lean_dec(x_188);
x_192 = lean_ctor_get(x_189, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_189, 1);
lean_inc(x_193);
x_194 = lean_ctor_get(x_189, 2);
lean_inc(x_194);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 lean_ctor_release(x_189, 2);
 lean_ctor_release(x_189, 3);
 x_195 = x_189;
} else {
 lean_dec_ref(x_189);
 x_195 = lean_box(0);
}
x_196 = lean_ctor_get(x_190, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 x_197 = x_190;
} else {
 lean_dec_ref(x_190);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(0, 1, 1);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set_uint8(x_198, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_195)) {
 x_199 = lean_alloc_ctor(0, 4, 0);
} else {
 x_199 = x_195;
}
lean_ctor_set(x_199, 0, x_192);
lean_ctor_set(x_199, 1, x_193);
lean_ctor_set(x_199, 2, x_194);
lean_ctor_set(x_199, 3, x_198);
x_200 = lean_st_ref_set(x_8, x_199, x_191);
lean_dec(x_8);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_202 = x_200;
} else {
 lean_dec_ref(x_200);
 x_202 = lean_box(0);
}
if (lean_is_scalar(x_202)) {
 x_203 = lean_alloc_ctor(1, 2, 0);
} else {
 x_203 = x_202;
 lean_ctor_set_tag(x_203, 1);
}
lean_ctor_set(x_203, 0, x_184);
lean_ctor_set(x_203, 1, x_201);
x_10 = x_203;
goto block_22;
}
block_270:
{
lean_object* x_206; uint8_t x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_inc(x_1);
x_206 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_206, 0, x_1);
x_207 = 0;
x_208 = lean_box(0);
lean_inc(x_5);
x_209 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_206, x_207, x_208, x_5, x_6, x_7, x_8, x_205);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
lean_dec(x_209);
x_212 = lean_st_ref_get(x_8, x_211);
x_213 = lean_ctor_get(x_212, 1);
lean_inc(x_213);
lean_dec(x_212);
x_214 = lean_st_ref_get(x_6, x_213);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_ctor_get(x_215, 0);
lean_inc(x_217);
lean_dec(x_215);
lean_inc(x_217);
x_218 = l_Lean_Meta_SynthInstance_mkTableKey(x_217, x_1);
x_219 = lean_ctor_get(x_7, 0);
lean_inc(x_219);
x_220 = l_Lean_Meta_SynthInstance_getMaxHeartbeats(x_219);
lean_dec(x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_2);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_box(0);
x_223 = lean_unsigned_to_nat(0u);
x_224 = lean_mk_empty_array_with_capacity(x_223);
x_225 = lean_unsigned_to_nat(8u);
x_226 = l_Std_mkHashMapImp___rarg(x_225);
lean_inc(x_224);
x_227 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_227, 0, x_222);
lean_ctor_set(x_227, 1, x_224);
lean_ctor_set(x_227, 2, x_224);
lean_ctor_set(x_227, 3, x_226);
x_228 = lean_st_ref_get(x_8, x_216);
x_229 = lean_ctor_get(x_228, 1);
lean_inc(x_229);
lean_dec(x_228);
x_230 = lean_st_mk_ref(x_227, x_229);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = lean_box(1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_231);
lean_inc(x_221);
x_234 = l_Lean_Meta_SynthInstance_newSubgoal(x_217, x_218, x_210, x_233, x_221, x_231, x_5, x_6, x_7, x_8, x_232);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; lean_object* x_236; 
x_235 = lean_ctor_get(x_234, 1);
lean_inc(x_235);
lean_dec(x_234);
lean_inc(x_8);
lean_inc(x_231);
x_236 = l_Lean_Meta_SynthInstance_synth(x_221, x_231, x_5, x_6, x_7, x_8, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; uint8_t x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
x_239 = lean_st_ref_get(x_8, x_238);
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
lean_dec(x_239);
x_241 = lean_st_ref_get(x_231, x_240);
lean_dec(x_231);
x_242 = lean_ctor_get(x_241, 1);
lean_inc(x_242);
lean_dec(x_241);
x_243 = lean_st_ref_get(x_8, x_242);
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
lean_dec(x_243);
x_246 = lean_ctor_get(x_244, 3);
lean_inc(x_246);
lean_dec(x_244);
x_247 = lean_ctor_get_uint8(x_246, sizeof(void*)*1);
lean_dec(x_246);
x_248 = lean_st_ref_take(x_8, x_245);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_249, 3);
lean_inc(x_250);
x_251 = lean_ctor_get(x_248, 1);
lean_inc(x_251);
lean_dec(x_248);
x_252 = lean_ctor_get(x_249, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_249, 1);
lean_inc(x_253);
x_254 = lean_ctor_get(x_249, 2);
lean_inc(x_254);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 lean_ctor_release(x_249, 2);
 lean_ctor_release(x_249, 3);
 x_255 = x_249;
} else {
 lean_dec_ref(x_249);
 x_255 = lean_box(0);
}
x_256 = lean_ctor_get(x_250, 0);
lean_inc(x_256);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 x_257 = x_250;
} else {
 lean_dec_ref(x_250);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(0, 1, 1);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_256);
lean_ctor_set_uint8(x_258, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_255)) {
 x_259 = lean_alloc_ctor(0, 4, 0);
} else {
 x_259 = x_255;
}
lean_ctor_set(x_259, 0, x_252);
lean_ctor_set(x_259, 1, x_253);
lean_ctor_set(x_259, 2, x_254);
lean_ctor_set(x_259, 3, x_258);
x_260 = lean_st_ref_set(x_8, x_259, x_251);
lean_dec(x_8);
x_261 = lean_ctor_get(x_260, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_260)) {
 lean_ctor_release(x_260, 0);
 lean_ctor_release(x_260, 1);
 x_262 = x_260;
} else {
 lean_dec_ref(x_260);
 x_262 = lean_box(0);
}
x_263 = lean_box(x_247);
x_264 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_264, 0, x_237);
lean_ctor_set(x_264, 1, x_263);
if (lean_is_scalar(x_262)) {
 x_265 = lean_alloc_ctor(0, 2, 0);
} else {
 x_265 = x_262;
}
lean_ctor_set(x_265, 0, x_264);
lean_ctor_set(x_265, 1, x_261);
x_10 = x_265;
goto block_22;
}
else
{
lean_object* x_266; lean_object* x_267; 
lean_dec(x_231);
x_266 = lean_ctor_get(x_236, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_236, 1);
lean_inc(x_267);
lean_dec(x_236);
x_184 = x_266;
x_185 = x_267;
goto block_204;
}
}
else
{
lean_object* x_268; lean_object* x_269; 
lean_dec(x_231);
lean_dec(x_221);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_268 = lean_ctor_get(x_234, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_234, 1);
lean_inc(x_269);
lean_dec(x_234);
x_184 = x_268;
x_185 = x_269;
goto block_204;
}
}
block_282:
{
if (x_271 == 0)
{
lean_dec(x_3);
x_205 = x_272;
goto block_270;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_273 = lean_mk_string("main goal ");
x_274 = l_Lean_stringToMessageData(x_273);
lean_dec(x_273);
lean_inc(x_1);
x_275 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_275, 0, x_1);
x_276 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_276, 0, x_274);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_mk_string("");
x_278 = l_Lean_stringToMessageData(x_277);
lean_dec(x_277);
x_279 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_279, 0, x_276);
lean_ctor_set(x_279, 1, x_278);
x_280 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3, x_279, x_5, x_6, x_7, x_8, x_272);
x_281 = lean_ctor_get(x_280, 1);
lean_inc(x_281);
lean_dec(x_280);
x_205 = x_281;
goto block_270;
}
}
}
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_324; uint8_t x_390; lean_object* x_391; lean_object* x_402; lean_object* x_403; lean_object* x_404; uint8_t x_405; 
x_293 = lean_ctor_get(x_29, 0);
x_294 = lean_ctor_get(x_29, 1);
x_295 = lean_ctor_get(x_29, 2);
lean_inc(x_295);
lean_inc(x_294);
lean_inc(x_293);
lean_dec(x_29);
x_296 = lean_ctor_get(x_30, 0);
lean_inc(x_296);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_297 = x_30;
} else {
 lean_dec_ref(x_30);
 x_297 = lean_box(0);
}
x_298 = 0;
if (lean_is_scalar(x_297)) {
 x_299 = lean_alloc_ctor(0, 1, 1);
} else {
 x_299 = x_297;
}
lean_ctor_set(x_299, 0, x_296);
lean_ctor_set_uint8(x_299, sizeof(void*)*1, x_298);
x_300 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_300, 0, x_293);
lean_ctor_set(x_300, 1, x_294);
lean_ctor_set(x_300, 2, x_295);
lean_ctor_set(x_300, 3, x_299);
x_301 = lean_st_ref_set(x_8, x_300, x_31);
x_302 = lean_ctor_get(x_301, 1);
lean_inc(x_302);
lean_dec(x_301);
x_402 = lean_st_ref_get(x_8, x_302);
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_403, 3);
lean_inc(x_404);
lean_dec(x_403);
x_405 = lean_ctor_get_uint8(x_404, sizeof(void*)*1);
lean_dec(x_404);
if (x_405 == 0)
{
lean_object* x_406; 
x_406 = lean_ctor_get(x_402, 1);
lean_inc(x_406);
lean_dec(x_402);
x_390 = x_298;
x_391 = x_406;
goto block_401;
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; uint8_t x_411; 
x_407 = lean_ctor_get(x_402, 1);
lean_inc(x_407);
lean_dec(x_402);
lean_inc(x_3);
x_408 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3, x_5, x_6, x_7, x_8, x_407);
x_409 = lean_ctor_get(x_408, 0);
lean_inc(x_409);
x_410 = lean_ctor_get(x_408, 1);
lean_inc(x_410);
lean_dec(x_408);
x_411 = lean_unbox(x_409);
lean_dec(x_409);
x_390 = x_411;
x_391 = x_410;
goto block_401;
}
block_323:
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_305 = lean_st_ref_get(x_8, x_304);
x_306 = lean_ctor_get(x_305, 1);
lean_inc(x_306);
lean_dec(x_305);
x_307 = lean_st_ref_take(x_8, x_306);
x_308 = lean_ctor_get(x_307, 0);
lean_inc(x_308);
x_309 = lean_ctor_get(x_308, 3);
lean_inc(x_309);
x_310 = lean_ctor_get(x_307, 1);
lean_inc(x_310);
lean_dec(x_307);
x_311 = lean_ctor_get(x_308, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_308, 1);
lean_inc(x_312);
x_313 = lean_ctor_get(x_308, 2);
lean_inc(x_313);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 lean_ctor_release(x_308, 2);
 lean_ctor_release(x_308, 3);
 x_314 = x_308;
} else {
 lean_dec_ref(x_308);
 x_314 = lean_box(0);
}
x_315 = lean_ctor_get(x_309, 0);
lean_inc(x_315);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 x_316 = x_309;
} else {
 lean_dec_ref(x_309);
 x_316 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_317 = lean_alloc_ctor(0, 1, 1);
} else {
 x_317 = x_316;
}
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set_uint8(x_317, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_314)) {
 x_318 = lean_alloc_ctor(0, 4, 0);
} else {
 x_318 = x_314;
}
lean_ctor_set(x_318, 0, x_311);
lean_ctor_set(x_318, 1, x_312);
lean_ctor_set(x_318, 2, x_313);
lean_ctor_set(x_318, 3, x_317);
x_319 = lean_st_ref_set(x_8, x_318, x_310);
lean_dec(x_8);
x_320 = lean_ctor_get(x_319, 1);
lean_inc(x_320);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_321 = x_319;
} else {
 lean_dec_ref(x_319);
 x_321 = lean_box(0);
}
if (lean_is_scalar(x_321)) {
 x_322 = lean_alloc_ctor(1, 2, 0);
} else {
 x_322 = x_321;
 lean_ctor_set_tag(x_322, 1);
}
lean_ctor_set(x_322, 0, x_303);
lean_ctor_set(x_322, 1, x_320);
x_10 = x_322;
goto block_22;
}
block_389:
{
lean_object* x_325; uint8_t x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
lean_inc(x_1);
x_325 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_325, 0, x_1);
x_326 = 0;
x_327 = lean_box(0);
lean_inc(x_5);
x_328 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_325, x_326, x_327, x_5, x_6, x_7, x_8, x_324);
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
lean_dec(x_328);
x_331 = lean_st_ref_get(x_8, x_330);
x_332 = lean_ctor_get(x_331, 1);
lean_inc(x_332);
lean_dec(x_331);
x_333 = lean_st_ref_get(x_6, x_332);
x_334 = lean_ctor_get(x_333, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_333, 1);
lean_inc(x_335);
lean_dec(x_333);
x_336 = lean_ctor_get(x_334, 0);
lean_inc(x_336);
lean_dec(x_334);
lean_inc(x_336);
x_337 = l_Lean_Meta_SynthInstance_mkTableKey(x_336, x_1);
x_338 = lean_ctor_get(x_7, 0);
lean_inc(x_338);
x_339 = l_Lean_Meta_SynthInstance_getMaxHeartbeats(x_338);
lean_dec(x_338);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_2);
lean_ctor_set(x_340, 1, x_339);
x_341 = lean_box(0);
x_342 = lean_unsigned_to_nat(0u);
x_343 = lean_mk_empty_array_with_capacity(x_342);
x_344 = lean_unsigned_to_nat(8u);
x_345 = l_Std_mkHashMapImp___rarg(x_344);
lean_inc(x_343);
x_346 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_346, 0, x_341);
lean_ctor_set(x_346, 1, x_343);
lean_ctor_set(x_346, 2, x_343);
lean_ctor_set(x_346, 3, x_345);
x_347 = lean_st_ref_get(x_8, x_335);
x_348 = lean_ctor_get(x_347, 1);
lean_inc(x_348);
lean_dec(x_347);
x_349 = lean_st_mk_ref(x_346, x_348);
x_350 = lean_ctor_get(x_349, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_349, 1);
lean_inc(x_351);
lean_dec(x_349);
x_352 = lean_box(1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_350);
lean_inc(x_340);
x_353 = l_Lean_Meta_SynthInstance_newSubgoal(x_336, x_337, x_329, x_352, x_340, x_350, x_5, x_6, x_7, x_8, x_351);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; lean_object* x_355; 
x_354 = lean_ctor_get(x_353, 1);
lean_inc(x_354);
lean_dec(x_353);
lean_inc(x_8);
lean_inc(x_350);
x_355 = l_Lean_Meta_SynthInstance_synth(x_340, x_350, x_5, x_6, x_7, x_8, x_354);
if (lean_obj_tag(x_355) == 0)
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; uint8_t x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_356 = lean_ctor_get(x_355, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_355, 1);
lean_inc(x_357);
lean_dec(x_355);
x_358 = lean_st_ref_get(x_8, x_357);
x_359 = lean_ctor_get(x_358, 1);
lean_inc(x_359);
lean_dec(x_358);
x_360 = lean_st_ref_get(x_350, x_359);
lean_dec(x_350);
x_361 = lean_ctor_get(x_360, 1);
lean_inc(x_361);
lean_dec(x_360);
x_362 = lean_st_ref_get(x_8, x_361);
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
lean_dec(x_362);
x_365 = lean_ctor_get(x_363, 3);
lean_inc(x_365);
lean_dec(x_363);
x_366 = lean_ctor_get_uint8(x_365, sizeof(void*)*1);
lean_dec(x_365);
x_367 = lean_st_ref_take(x_8, x_364);
x_368 = lean_ctor_get(x_367, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_368, 3);
lean_inc(x_369);
x_370 = lean_ctor_get(x_367, 1);
lean_inc(x_370);
lean_dec(x_367);
x_371 = lean_ctor_get(x_368, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_368, 1);
lean_inc(x_372);
x_373 = lean_ctor_get(x_368, 2);
lean_inc(x_373);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 lean_ctor_release(x_368, 2);
 lean_ctor_release(x_368, 3);
 x_374 = x_368;
} else {
 lean_dec_ref(x_368);
 x_374 = lean_box(0);
}
x_375 = lean_ctor_get(x_369, 0);
lean_inc(x_375);
if (lean_is_exclusive(x_369)) {
 lean_ctor_release(x_369, 0);
 x_376 = x_369;
} else {
 lean_dec_ref(x_369);
 x_376 = lean_box(0);
}
if (lean_is_scalar(x_376)) {
 x_377 = lean_alloc_ctor(0, 1, 1);
} else {
 x_377 = x_376;
}
lean_ctor_set(x_377, 0, x_375);
lean_ctor_set_uint8(x_377, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_374)) {
 x_378 = lean_alloc_ctor(0, 4, 0);
} else {
 x_378 = x_374;
}
lean_ctor_set(x_378, 0, x_371);
lean_ctor_set(x_378, 1, x_372);
lean_ctor_set(x_378, 2, x_373);
lean_ctor_set(x_378, 3, x_377);
x_379 = lean_st_ref_set(x_8, x_378, x_370);
lean_dec(x_8);
x_380 = lean_ctor_get(x_379, 1);
lean_inc(x_380);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 x_381 = x_379;
} else {
 lean_dec_ref(x_379);
 x_381 = lean_box(0);
}
x_382 = lean_box(x_366);
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_356);
lean_ctor_set(x_383, 1, x_382);
if (lean_is_scalar(x_381)) {
 x_384 = lean_alloc_ctor(0, 2, 0);
} else {
 x_384 = x_381;
}
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_380);
x_10 = x_384;
goto block_22;
}
else
{
lean_object* x_385; lean_object* x_386; 
lean_dec(x_350);
x_385 = lean_ctor_get(x_355, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_355, 1);
lean_inc(x_386);
lean_dec(x_355);
x_303 = x_385;
x_304 = x_386;
goto block_323;
}
}
else
{
lean_object* x_387; lean_object* x_388; 
lean_dec(x_350);
lean_dec(x_340);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_387 = lean_ctor_get(x_353, 0);
lean_inc(x_387);
x_388 = lean_ctor_get(x_353, 1);
lean_inc(x_388);
lean_dec(x_353);
x_303 = x_387;
x_304 = x_388;
goto block_323;
}
}
block_401:
{
if (x_390 == 0)
{
lean_dec(x_3);
x_324 = x_391;
goto block_389;
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_392 = lean_mk_string("main goal ");
x_393 = l_Lean_stringToMessageData(x_392);
lean_dec(x_392);
lean_inc(x_1);
x_394 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_394, 0, x_1);
x_395 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_mk_string("");
x_397 = l_Lean_stringToMessageData(x_396);
lean_dec(x_396);
x_398 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_398, 0, x_395);
lean_ctor_set(x_398, 1, x_397);
x_399 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3, x_398, x_5, x_6, x_7, x_8, x_391);
x_400 = lean_ctor_get(x_399, 1);
lean_inc(x_400);
lean_dec(x_399);
x_324 = x_400;
goto block_389;
}
}
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_474; lean_object* x_475; lean_object* x_486; lean_object* x_487; lean_object* x_488; uint8_t x_489; 
x_412 = lean_ctor_get(x_7, 3);
lean_inc(x_412);
x_413 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_8, x_9);
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
x_486 = lean_st_ref_get(x_8, x_415);
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_487, 3);
lean_inc(x_488);
lean_dec(x_487);
x_489 = lean_ctor_get_uint8(x_488, sizeof(void*)*1);
lean_dec(x_488);
if (x_489 == 0)
{
lean_object* x_490; uint8_t x_491; 
x_490 = lean_ctor_get(x_486, 1);
lean_inc(x_490);
lean_dec(x_486);
x_491 = 0;
x_474 = x_491;
x_475 = x_490;
goto block_485;
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; uint8_t x_496; 
x_492 = lean_ctor_get(x_486, 1);
lean_inc(x_492);
lean_dec(x_486);
lean_inc(x_3);
x_493 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3, x_5, x_6, x_7, x_8, x_492);
x_494 = lean_ctor_get(x_493, 0);
lean_inc(x_494);
x_495 = lean_ctor_get(x_493, 1);
lean_inc(x_495);
lean_dec(x_493);
x_496 = lean_unbox(x_494);
lean_dec(x_494);
x_474 = x_496;
x_475 = x_495;
goto block_485;
}
block_473:
{
lean_object* x_417; uint8_t x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_inc(x_1);
x_417 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_417, 0, x_1);
x_418 = 0;
x_419 = lean_box(0);
lean_inc(x_5);
x_420 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_417, x_418, x_419, x_5, x_6, x_7, x_8, x_416);
x_421 = lean_ctor_get(x_420, 0);
lean_inc(x_421);
x_422 = lean_ctor_get(x_420, 1);
lean_inc(x_422);
lean_dec(x_420);
x_423 = lean_st_ref_get(x_8, x_422);
x_424 = lean_ctor_get(x_423, 1);
lean_inc(x_424);
lean_dec(x_423);
x_425 = lean_st_ref_get(x_6, x_424);
x_426 = lean_ctor_get(x_425, 0);
lean_inc(x_426);
x_427 = lean_ctor_get(x_425, 1);
lean_inc(x_427);
lean_dec(x_425);
x_428 = lean_ctor_get(x_426, 0);
lean_inc(x_428);
lean_dec(x_426);
lean_inc(x_428);
x_429 = l_Lean_Meta_SynthInstance_mkTableKey(x_428, x_1);
x_430 = lean_ctor_get(x_7, 0);
lean_inc(x_430);
x_431 = l_Lean_Meta_SynthInstance_getMaxHeartbeats(x_430);
lean_dec(x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_2);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_box(0);
x_434 = lean_unsigned_to_nat(0u);
x_435 = lean_mk_empty_array_with_capacity(x_434);
x_436 = lean_unsigned_to_nat(8u);
x_437 = l_Std_mkHashMapImp___rarg(x_436);
lean_inc(x_435);
x_438 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_438, 0, x_433);
lean_ctor_set(x_438, 1, x_435);
lean_ctor_set(x_438, 2, x_435);
lean_ctor_set(x_438, 3, x_437);
x_439 = lean_st_ref_get(x_8, x_427);
x_440 = lean_ctor_get(x_439, 1);
lean_inc(x_440);
lean_dec(x_439);
x_441 = lean_st_mk_ref(x_438, x_440);
x_442 = lean_ctor_get(x_441, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_441, 1);
lean_inc(x_443);
lean_dec(x_441);
x_444 = lean_box(1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_442);
lean_inc(x_432);
x_445 = l_Lean_Meta_SynthInstance_newSubgoal(x_428, x_429, x_421, x_444, x_432, x_442, x_5, x_6, x_7, x_8, x_443);
if (lean_obj_tag(x_445) == 0)
{
lean_object* x_446; lean_object* x_447; 
x_446 = lean_ctor_get(x_445, 1);
lean_inc(x_446);
lean_dec(x_445);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_442);
x_447 = l_Lean_Meta_SynthInstance_synth(x_432, x_442, x_5, x_6, x_7, x_8, x_446);
if (lean_obj_tag(x_447) == 0)
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; 
x_448 = lean_ctor_get(x_447, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_447, 1);
lean_inc(x_449);
lean_dec(x_447);
x_450 = lean_st_ref_get(x_8, x_449);
x_451 = lean_ctor_get(x_450, 1);
lean_inc(x_451);
lean_dec(x_450);
x_452 = lean_st_ref_get(x_442, x_451);
lean_dec(x_442);
x_453 = lean_ctor_get(x_452, 1);
lean_inc(x_453);
lean_dec(x_452);
x_454 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_414, x_3, x_412, x_5, x_6, x_7, x_8, x_453);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_455 = !lean_is_exclusive(x_454);
if (x_455 == 0)
{
lean_object* x_456; 
x_456 = lean_ctor_get(x_454, 0);
lean_dec(x_456);
lean_ctor_set(x_454, 0, x_448);
return x_454;
}
else
{
lean_object* x_457; lean_object* x_458; 
x_457 = lean_ctor_get(x_454, 1);
lean_inc(x_457);
lean_dec(x_454);
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_448);
lean_ctor_set(x_458, 1, x_457);
return x_458;
}
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; uint8_t x_462; 
lean_dec(x_442);
x_459 = lean_ctor_get(x_447, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_447, 1);
lean_inc(x_460);
lean_dec(x_447);
x_461 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_414, x_3, x_412, x_5, x_6, x_7, x_8, x_460);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_462 = !lean_is_exclusive(x_461);
if (x_462 == 0)
{
lean_object* x_463; 
x_463 = lean_ctor_get(x_461, 0);
lean_dec(x_463);
lean_ctor_set_tag(x_461, 1);
lean_ctor_set(x_461, 0, x_459);
return x_461;
}
else
{
lean_object* x_464; lean_object* x_465; 
x_464 = lean_ctor_get(x_461, 1);
lean_inc(x_464);
lean_dec(x_461);
x_465 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_465, 0, x_459);
lean_ctor_set(x_465, 1, x_464);
return x_465;
}
}
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; 
lean_dec(x_442);
lean_dec(x_432);
x_466 = lean_ctor_get(x_445, 0);
lean_inc(x_466);
x_467 = lean_ctor_get(x_445, 1);
lean_inc(x_467);
lean_dec(x_445);
x_468 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_414, x_3, x_412, x_5, x_6, x_7, x_8, x_467);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_469 = !lean_is_exclusive(x_468);
if (x_469 == 0)
{
lean_object* x_470; 
x_470 = lean_ctor_get(x_468, 0);
lean_dec(x_470);
lean_ctor_set_tag(x_468, 1);
lean_ctor_set(x_468, 0, x_466);
return x_468;
}
else
{
lean_object* x_471; lean_object* x_472; 
x_471 = lean_ctor_get(x_468, 1);
lean_inc(x_471);
lean_dec(x_468);
x_472 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_472, 0, x_466);
lean_ctor_set(x_472, 1, x_471);
return x_472;
}
}
}
block_485:
{
if (x_474 == 0)
{
x_416 = x_475;
goto block_473;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
x_476 = lean_mk_string("main goal ");
x_477 = l_Lean_stringToMessageData(x_476);
lean_dec(x_476);
lean_inc(x_1);
x_478 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_478, 0, x_1);
x_479 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_479, 0, x_477);
lean_ctor_set(x_479, 1, x_478);
x_480 = lean_mk_string("");
x_481 = l_Lean_stringToMessageData(x_480);
lean_dec(x_480);
x_482 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_482, 0, x_479);
lean_ctor_set(x_482, 1, x_481);
lean_inc(x_3);
x_483 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3, x_482, x_5, x_6, x_7, x_8, x_475);
x_484 = lean_ctor_get(x_483, 1);
lean_inc(x_484);
lean_dec(x_483);
x_416 = x_484;
goto block_473;
}
}
}
block_22:
{
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
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
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
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
}
lean_object* l_Lean_Meta_SynthInstance_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = lean_box(0);
x_9 = lean_mk_string("Meta");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("synthInstance");
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__2___boxed), 7, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1___boxed), 5, 0);
x_15 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_main___lambda__1___boxed), 9, 3);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_12);
x_17 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_16);
x_18 = l_Lean_Core_withCurrHeartbeats___at_Lean_Meta_SynthInstance_main___spec__1(x_17, x_3, x_4, x_5, x_6, x_7);
return x_18;
}
}
lean_object* l_Lean_Meta_SynthInstance_main___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Meta_SynthInstance_main___lambda__1(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_whnf(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 0;
x_12 = 1;
x_13 = l_Lean_Meta_mkForallFVars(x_1, x_9, x_11, x_12, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess___lambda__1), 7, 0);
x_8 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Level_hasMVar(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_array_push(x_12, x_15);
lean_ctor_set(x_2, 0, x_18);
x_1 = x_10;
x_7 = x_16;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_13);
x_20 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_4, x_5, x_6, x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_array_push(x_12, x_21);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_23);
x_1 = x_10;
x_7 = x_22;
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
x_29 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Level_hasMVar(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_array_push(x_27, x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
x_1 = x_10;
x_2 = x_34;
x_7 = x_31;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_30);
lean_dec(x_28);
x_36 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_4, x_5, x_6, x_31);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_array_push(x_27, x_37);
x_40 = 1;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
x_1 = x_10;
x_2 = x_42;
x_7 = x_38;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_List_forIn_loop___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___spec__1(x_1, x_11, x_2, x_3, x_4, x_5, x_6);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_to_list(lean_box(0), x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_array_to_list(lean_box(0), x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_forIn_loop___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_4);
x_10 = lean_array_fset(x_1, x_2, x_4);
x_11 = lean_expr_instantiate1(x_3, x_4);
lean_dec(x_4);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
x_14 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs(x_11, x_13, x_10, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_13);
return x_14;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_3);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_Meta_whnf(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 7)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 2);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_array_fget(x_3, x_2);
lean_inc(x_15);
x_18 = lean_is_out_param(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
x_19 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1(x_3, x_2, x_16, x_17, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_16);
return x_19;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_17);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_15);
x_21 = 0;
x_22 = lean_box(0);
lean_inc(x_4);
x_23 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_20, x_21, x_22, x_4, x_5, x_6, x_7, x_14);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1(x_3, x_2, x_16, x_24, x_4, x_5, x_6, x_7, x_25);
lean_dec(x_16);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_13);
lean_dec(x_3);
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
lean_dec(x_12);
x_28 = lean_mk_string("type class resolution failed, insufficient number of arguments");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = l_Lean_throwError___at_Lean_Meta_SynthInstance_getInstances___spec__1(x_29, x_4, x_5, x_6, x_7, x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_12);
if (x_31 == 0)
{
return x_12;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_4(x_2, x_1, x_4, x_5, x_7);
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
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_3);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
x_16 = lean_has_out_params(x_15, x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels(x_11, x_4, x_5, x_6, x_7, x_14);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_17, 0);
lean_dec(x_22);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_ctor_get(x_18, 0);
lean_inc(x_26);
lean_dec(x_18);
x_27 = l_Lean_mkConst(x_10, x_26);
x_28 = l_Lean_levelZero;
x_29 = l_Lean_mkSort(x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Expr_getAppNumArgsAux(x_3, x_30);
lean_inc(x_31);
x_32 = lean_mk_array(x_31, x_29);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_sub(x_31, x_33);
lean_dec(x_31);
x_35 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_32, x_34);
x_36 = l_Lean_mkAppN(x_27, x_35);
lean_dec(x_35);
x_37 = 0;
x_38 = 1;
x_39 = l_Lean_Meta_mkForallFVars(x_2, x_36, x_37, x_38, x_4, x_5, x_6, x_7, x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_1);
x_40 = l_Lean_levelZero;
x_41 = l_Lean_mkSort(x_40);
x_42 = lean_unsigned_to_nat(0u);
x_43 = l_Lean_Expr_getAppNumArgsAux(x_3, x_42);
lean_inc(x_43);
x_44 = lean_mk_array(x_43, x_41);
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_sub(x_43, x_45);
lean_dec(x_43);
x_47 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_44, x_46);
x_48 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessLevels(x_11, x_4, x_5, x_6, x_7, x_14);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_mkConst(x_10, x_51);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_52);
x_53 = l_Lean_Meta_inferType(x_52, x_4, x_5, x_6, x_7, x_50);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_56 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessArgs(x_54, x_42, x_47, x_4, x_5, x_6, x_7, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; uint8_t x_61; lean_object* x_62; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_mkAppN(x_52, x_57);
lean_dec(x_57);
x_60 = 0;
x_61 = 1;
x_62 = l_Lean_Meta_mkForallFVars(x_2, x_59, x_60, x_61, x_4, x_5, x_6, x_7, x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_62;
}
else
{
uint8_t x_63; 
lean_dec(x_52);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_56);
if (x_63 == 0)
{
return x_56;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_56, 0);
x_65 = lean_ctor_get(x_56, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_56);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_52);
lean_dec(x_47);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_53);
if (x_67 == 0)
{
return x_53;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_53, 0);
x_69 = lean_ctor_get(x_53, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
else
{
lean_object* x_71; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_8);
return x_71;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam___lambda__1), 8, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_synthInstance_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_synthInstance_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_10 = lean_expr_eqv(x_5, x_9);
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
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_synthInstance_x3f___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
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
x_15 = lean_expr_eqv(x_3, x_13);
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
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_synthInstance_x3f___spec__3(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Expr_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_synthInstance_x3f___spec__2(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_11 = l_Lean_Expr_hash(x_9);
x_12 = (size_t)x_11;
x_13 = 1;
x_14 = x_1 - x_13;
x_15 = 5;
x_16 = x_15 * x_14;
x_17 = x_12 >> x_16 % (sizeof(size_t) * 8);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_synthInstance_x3f___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_18 = lean_expr_eqv(x_3, x_17);
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
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
x_22 = lean_expr_eqv(x_4, x_20);
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
x_29 = lean_expr_eqv(x_4, x_27);
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
x_39 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_36, x_37, x_38, x_4, x_5);
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
x_44 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_41, x_42, x_43, x_4, x_5);
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
x_65 = lean_expr_eqv(x_4, x_62);
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
x_77 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_73, x_75, x_76, x_4, x_5);
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
x_86 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_synthInstance_x3f___spec__7(x_1, x_85, x_4, x_5);
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
x_95 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6(x_3, x_92, x_93, lean_box(0), x_85, x_94);
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
x_100 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_synthInstance_x3f___spec__7(x_98, x_99, x_4, x_5);
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
x_109 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6(x_3, x_106, x_107, lean_box(0), x_99, x_108);
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
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstance_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Expr_hash(x_2);
x_8 = (size_t)x_7;
x_9 = 1;
x_10 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_5, x_8, x_9, x_2, x_3);
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
x_15 = l_Lean_Expr_hash(x_2);
x_16 = (size_t)x_15;
x_17 = 1;
x_18 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_13, x_16, x_17, x_2, x_3);
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
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_4(x_3, x_4, x_5, x_6, x_7);
x_10 = l_Lean_profileitIOUnsafe___rarg(x_1, x_2, x_9, x_8);
return x_10;
}
}
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_110; lean_object* x_111; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Meta");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("synthInstance");
x_13 = lean_name_mk_string(x_11, x_12);
x_125 = lean_st_ref_get(x_7, x_8);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_126, 3);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_ctor_get_uint8(x_127, sizeof(void*)*1);
lean_dec(x_127);
if (x_128 == 0)
{
lean_object* x_129; uint8_t x_130; 
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
lean_dec(x_125);
x_130 = 0;
x_110 = x_130;
x_111 = x_129;
goto block_124;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
lean_dec(x_125);
lean_inc(x_13);
x_132 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_13, x_4, x_5, x_6, x_7, x_131);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_135 = lean_unbox(x_133);
lean_dec(x_133);
x_110 = x_135;
x_111 = x_134;
goto block_124;
}
block_109:
{
lean_object* x_15; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Meta_SynthInstance_main(x_3, x_1, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_82; lean_object* x_83; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_25 = x_16;
} else {
 lean_dec_ref(x_16);
 x_25 = lean_box(0);
}
x_94 = lean_st_ref_get(x_7, x_23);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_95, 3);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_ctor_get_uint8(x_96, sizeof(void*)*1);
lean_dec(x_96);
if (x_97 == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = lean_ctor_get(x_94, 1);
lean_inc(x_98);
lean_dec(x_94);
x_99 = 0;
x_82 = x_99;
x_83 = x_98;
goto block_93;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_100 = lean_ctor_get(x_94, 1);
lean_inc(x_100);
lean_dec(x_94);
lean_inc(x_13);
x_101 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_13, x_4, x_5, x_6, x_7, x_100);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_unbox(x_102);
lean_dec(x_102);
x_82 = x_104;
x_83 = x_103;
goto block_93;
}
block_81:
{
lean_object* x_27; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_27 = l_Lean_Meta_instantiateMVars(x_24, x_4, x_5, x_6, x_7, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
x_56 = l_Lean_Meta_hasAssignableMVar(x_28, x_4, x_5, x_6, x_7, x_29);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
uint8_t x_59; 
lean_dec(x_30);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_59 = !lean_is_exclusive(x_56);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_56, 0);
lean_dec(x_60);
if (lean_is_scalar(x_25)) {
 x_61 = lean_alloc_ctor(1, 1, 0);
} else {
 x_61 = x_25;
}
lean_ctor_set(x_61, 0, x_28);
lean_ctor_set(x_56, 0, x_61);
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_dec(x_56);
if (lean_is_scalar(x_25)) {
 x_63 = lean_alloc_ctor(1, 1, 0);
} else {
 x_63 = x_25;
}
lean_ctor_set(x_63, 0, x_28);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_25);
x_65 = lean_ctor_get(x_56, 1);
lean_inc(x_65);
lean_dec(x_56);
x_66 = lean_st_ref_get(x_7, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_67, 3);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_ctor_get_uint8(x_68, sizeof(void*)*1);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_dec(x_66);
x_71 = 0;
x_31 = x_71;
x_32 = x_70;
goto block_55;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_dec(x_66);
lean_inc(x_13);
x_73 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_13, x_4, x_5, x_6, x_7, x_72);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_unbox(x_74);
lean_dec(x_74);
x_31 = x_76;
x_32 = x_75;
goto block_55;
}
}
block_55:
{
if (x_31 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_33 = lean_box(0);
if (lean_is_scalar(x_30)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_30;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_30);
x_35 = lean_mk_string("Failed has assignable mvar ");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_mk_string("pp");
x_38 = lean_name_mk_string(x_9, x_37);
x_39 = lean_mk_string("all");
x_40 = lean_name_mk_string(x_38, x_39);
x_41 = 1;
x_42 = l_Lean_Expr_setOption___at_Lean_Expr_setPPExplicit___spec__1(x_28, x_40, x_41);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_36);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_13, x_47, x_4, x_5, x_6, x_7, x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
x_51 = lean_box(0);
lean_ctor_set(x_48, 0, x_51);
return x_48;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_25);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_77 = !lean_is_exclusive(x_27);
if (x_77 == 0)
{
return x_27;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_27, 0);
x_79 = lean_ctor_get(x_27, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_27);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
block_93:
{
if (x_82 == 0)
{
x_26 = x_83;
goto block_81;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_84 = lean_mk_string("FOUND result ");
x_85 = l_Lean_stringToMessageData(x_84);
lean_dec(x_84);
lean_inc(x_24);
x_86 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_86, 0, x_24);
x_87 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_string("");
x_89 = l_Lean_stringToMessageData(x_88);
lean_dec(x_88);
x_90 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_89);
lean_inc(x_13);
x_91 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_13, x_90, x_4, x_5, x_6, x_7, x_83);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_26 = x_92;
goto block_81;
}
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_105 = !lean_is_exclusive(x_15);
if (x_105 == 0)
{
return x_15;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_15, 0);
x_107 = lean_ctor_get(x_15, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_15);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
block_124:
{
if (x_110 == 0)
{
lean_dec(x_2);
x_14 = x_111;
goto block_109;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_112 = lean_mk_string("");
x_113 = l_Lean_stringToMessageData(x_112);
lean_dec(x_112);
x_114 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_114, 0, x_2);
lean_inc(x_113);
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_mk_string(" ==> ");
x_117 = l_Lean_stringToMessageData(x_116);
lean_dec(x_116);
x_118 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
lean_inc(x_3);
x_119 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_119, 0, x_3);
x_120 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_113);
lean_inc(x_13);
x_122 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_13, x_121, x_4, x_5, x_6, x_7, x_111);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_14 = x_123;
goto block_109;
}
}
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasMVar(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_st_ref_get(x_6, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_4, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_13, 2);
lean_inc(x_2);
x_19 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstance_x3f___spec__4(x_18, x_1, x_2);
lean_ctor_set(x_13, 2, x_19);
x_20 = lean_st_ref_set(x_4, x_12, x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_2);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
x_27 = lean_ctor_get(x_13, 3);
x_28 = lean_ctor_get(x_13, 4);
x_29 = lean_ctor_get(x_13, 2);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_29);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
lean_inc(x_2);
x_30 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstance_x3f___spec__4(x_29, x_1, x_2);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_26);
lean_ctor_set(x_31, 2, x_30);
lean_ctor_set(x_31, 3, x_27);
lean_ctor_set(x_31, 4, x_28);
lean_ctor_set(x_12, 1, x_31);
x_32 = lean_st_ref_set(x_4, x_12, x_14);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_2);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_36 = lean_ctor_get(x_12, 0);
x_37 = lean_ctor_get(x_12, 2);
x_38 = lean_ctor_get(x_12, 3);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_12);
x_39 = lean_ctor_get(x_13, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_13, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_13, 3);
lean_inc(x_41);
x_42 = lean_ctor_get(x_13, 4);
lean_inc(x_42);
x_43 = lean_ctor_get(x_13, 2);
lean_inc(x_43);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 lean_ctor_release(x_13, 4);
 x_44 = x_13;
} else {
 lean_dec_ref(x_13);
 x_44 = lean_box(0);
}
lean_inc(x_2);
x_45 = l_Std_PersistentHashMap_insert___at_Lean_Meta_synthInstance_x3f___spec__4(x_43, x_1, x_2);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 5, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_39);
lean_ctor_set(x_46, 1, x_40);
lean_ctor_set(x_46, 2, x_45);
lean_ctor_set(x_46, 3, x_41);
lean_ctor_set(x_46, 4, x_42);
x_47 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_47, 0, x_36);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_47, 2, x_37);
lean_ctor_set(x_47, 3, x_38);
x_48 = lean_st_ref_set(x_4, x_47, x_14);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; 
lean_dec(x_1);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_2);
lean_ctor_set(x_52, 1, x_7);
return x_52;
}
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_601; lean_object* x_602; lean_object* x_603; 
x_601 = l_Lean_Meta_synthInstance_maxSize;
x_602 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_3, x_601);
x_603 = l_Lean_Meta_getConfig(x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_604; lean_object* x_605; 
x_604 = lean_ctor_get(x_603, 0);
lean_inc(x_604);
x_605 = lean_ctor_get(x_603, 1);
lean_inc(x_605);
lean_dec(x_603);
x_9 = x_602;
x_10 = x_604;
x_11 = x_605;
goto block_600;
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; 
lean_dec(x_602);
x_606 = lean_ctor_get(x_2, 0);
lean_inc(x_606);
lean_dec(x_2);
x_607 = lean_ctor_get(x_603, 0);
lean_inc(x_607);
x_608 = lean_ctor_get(x_603, 1);
lean_inc(x_608);
lean_dec(x_603);
x_9 = x_606;
x_10 = x_607;
x_11 = x_608;
goto block_600;
}
block_600:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_ctor_get(x_4, 2);
x_17 = lean_ctor_get(x_4, 3);
x_18 = 1;
x_19 = 0;
x_20 = 3;
lean_ctor_set_uint8(x_13, 0, x_18);
lean_ctor_set_uint8(x_13, 1, x_18);
lean_ctor_set_uint8(x_13, 3, x_19);
lean_ctor_set_uint8(x_13, 4, x_18);
lean_ctor_set_uint8(x_13, 5, x_20);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l_Lean_Meta_instantiateMVars(x_1, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess___lambda__1), 7, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_22, x_24, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_st_ref_get(x_7, x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_get(x_5, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_34, 2);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(x_35, x_26);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_free_object(x_30);
lean_inc(x_26);
x_37 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam), 6, 1);
lean_closure_set(x_37, 0, x_26);
lean_inc(x_26);
x_38 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f___lambda__2), 8, 2);
lean_closure_set(x_38, 0, x_9);
lean_closure_set(x_38, 1, x_26);
x_39 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_39, 0, x_37);
lean_closure_set(x_39, 1, x_38);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_40 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(x_39, x_4, x_5, x_6, x_7, x_33);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_box(0);
x_44 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_43, x_4, x_5, x_6, x_7, x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_128; lean_object* x_129; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_49 = lean_ctor_get(x_40, 1);
lean_inc(x_49);
lean_dec(x_40);
x_50 = lean_ctor_get(x_41, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 x_51 = x_41;
} else {
 lean_dec_ref(x_41);
 x_51 = lean_box(0);
}
x_52 = lean_box(0);
x_53 = lean_mk_string("Meta");
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = lean_mk_string("synthInstance");
x_56 = lean_name_mk_string(x_54, x_55);
x_140 = lean_st_ref_get(x_7, x_49);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_141, 3);
lean_inc(x_142);
lean_dec(x_141);
x_143 = lean_ctor_get_uint8(x_142, sizeof(void*)*1);
lean_dec(x_142);
if (x_143 == 0)
{
lean_object* x_144; 
x_144 = lean_ctor_get(x_140, 1);
lean_inc(x_144);
lean_dec(x_140);
x_128 = x_19;
x_129 = x_144;
goto block_139;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_145 = lean_ctor_get(x_140, 1);
lean_inc(x_145);
lean_dec(x_140);
lean_inc(x_56);
x_146 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_56, x_4, x_5, x_6, x_7, x_145);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_unbox(x_147);
lean_dec(x_147);
x_128 = x_149;
x_129 = x_148;
goto block_139;
}
block_127:
{
lean_object* x_58; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_50);
x_58 = l_Lean_Meta_inferType(x_50, x_4, x_5, x_6, x_7, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_90; lean_object* x_91; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_90 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_90, 0, x_10);
lean_ctor_set(x_90, 1, x_15);
lean_ctor_set(x_90, 2, x_16);
lean_ctor_set(x_90, 3, x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_59);
lean_inc(x_26);
x_91 = l_Lean_Meta_isExprDefEq(x_26, x_59, x_90, x_5, x_6, x_7, x_60);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; uint8_t x_93; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_unbox(x_92);
lean_dec(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
lean_dec(x_51);
lean_dec(x_50);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_dec(x_91);
x_95 = lean_st_ref_get(x_7, x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_96, 3);
lean_inc(x_97);
lean_dec(x_96);
x_98 = lean_ctor_get_uint8(x_97, sizeof(void*)*1);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_95, 1);
lean_inc(x_99);
lean_dec(x_95);
x_61 = x_19;
x_62 = x_99;
goto block_89;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_100 = lean_ctor_get(x_95, 1);
lean_inc(x_100);
lean_dec(x_95);
lean_inc(x_56);
x_101 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_56, x_4, x_5, x_6, x_7, x_100);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_unbox(x_102);
lean_dec(x_102);
x_61 = x_104;
x_62 = x_103;
goto block_89;
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_59);
lean_dec(x_56);
x_105 = lean_ctor_get(x_91, 1);
lean_inc(x_105);
lean_dec(x_91);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_106 = l_Lean_Meta_instantiateMVars(x_50, x_4, x_5, x_6, x_7, x_105);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
if (lean_is_scalar(x_51)) {
 x_109 = lean_alloc_ctor(1, 1, 0);
} else {
 x_109 = x_51;
}
lean_ctor_set(x_109, 0, x_107);
x_110 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_109, x_4, x_5, x_6, x_7, x_108);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_111 = !lean_is_exclusive(x_110);
if (x_111 == 0)
{
return x_110;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_110, 0);
x_113 = lean_ctor_get(x_110, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_110);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
else
{
uint8_t x_115; 
lean_dec(x_51);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_115 = !lean_is_exclusive(x_106);
if (x_115 == 0)
{
return x_106;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_106, 0);
x_117 = lean_ctor_get(x_106, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_106);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
else
{
uint8_t x_119; 
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_119 = !lean_is_exclusive(x_91);
if (x_119 == 0)
{
return x_91;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_91, 0);
x_121 = lean_ctor_get(x_91, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_91);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
block_89:
{
if (x_61 == 0)
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; 
lean_dec(x_59);
lean_dec(x_56);
x_63 = lean_box(0);
x_64 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_63, x_4, x_5, x_6, x_7, x_62);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
return x_64;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_64, 0);
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_64);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_69 = lean_mk_string("result type");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = l_Lean_indentExpr(x_59);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("\nis not definitionally equal to");
x_74 = l_Lean_stringToMessageData(x_73);
lean_dec(x_73);
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_26);
x_76 = l_Lean_indentExpr(x_26);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("");
x_79 = l_Lean_stringToMessageData(x_78);
lean_dec(x_78);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_56, x_80, x_4, x_5, x_6, x_7, x_62);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = lean_box(0);
x_84 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_83, x_4, x_5, x_6, x_7, x_82);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
return x_84;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_84, 0);
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_84);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_56);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_123 = !lean_is_exclusive(x_58);
if (x_123 == 0)
{
return x_58;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_58, 0);
x_125 = lean_ctor_get(x_58, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_58);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
block_139:
{
if (x_128 == 0)
{
x_57 = x_129;
goto block_127;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_130 = lean_mk_string("result ");
x_131 = l_Lean_stringToMessageData(x_130);
lean_dec(x_130);
lean_inc(x_50);
x_132 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_132, 0, x_50);
x_133 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_mk_string("");
x_135 = l_Lean_stringToMessageData(x_134);
lean_dec(x_134);
x_136 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_135);
lean_inc(x_56);
x_137 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_56, x_136, x_4, x_5, x_6, x_7, x_129);
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
lean_dec(x_137);
x_57 = x_138;
goto block_127;
}
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_150 = !lean_is_exclusive(x_40);
if (x_150 == 0)
{
return x_40;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_40, 0);
x_152 = lean_ctor_get(x_40, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_40);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
else
{
lean_object* x_154; 
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_154 = lean_ctor_get(x_36, 0);
lean_inc(x_154);
lean_dec(x_36);
lean_ctor_set(x_30, 0, x_154);
return x_30;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_155 = lean_ctor_get(x_30, 0);
x_156 = lean_ctor_get(x_30, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_30);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_ctor_get(x_157, 2);
lean_inc(x_158);
lean_dec(x_157);
x_159 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(x_158, x_26);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_inc(x_26);
x_160 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam), 6, 1);
lean_closure_set(x_160, 0, x_26);
lean_inc(x_26);
x_161 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f___lambda__2), 8, 2);
lean_closure_set(x_161, 0, x_9);
lean_closure_set(x_161, 1, x_26);
x_162 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_162, 0, x_160);
lean_closure_set(x_162, 1, x_161);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_163 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(x_162, x_4, x_5, x_6, x_7, x_156);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
x_166 = lean_box(0);
x_167 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_166, x_4, x_5, x_6, x_7, x_165);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_170 = x_167;
} else {
 lean_dec_ref(x_167);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_168);
lean_ctor_set(x_171, 1, x_169);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; uint8_t x_251; lean_object* x_252; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_172 = lean_ctor_get(x_163, 1);
lean_inc(x_172);
lean_dec(x_163);
x_173 = lean_ctor_get(x_164, 0);
lean_inc(x_173);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 x_174 = x_164;
} else {
 lean_dec_ref(x_164);
 x_174 = lean_box(0);
}
x_175 = lean_box(0);
x_176 = lean_mk_string("Meta");
x_177 = lean_name_mk_string(x_175, x_176);
x_178 = lean_mk_string("synthInstance");
x_179 = lean_name_mk_string(x_177, x_178);
x_263 = lean_st_ref_get(x_7, x_172);
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_264, 3);
lean_inc(x_265);
lean_dec(x_264);
x_266 = lean_ctor_get_uint8(x_265, sizeof(void*)*1);
lean_dec(x_265);
if (x_266 == 0)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_263, 1);
lean_inc(x_267);
lean_dec(x_263);
x_251 = x_19;
x_252 = x_267;
goto block_262;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; 
x_268 = lean_ctor_get(x_263, 1);
lean_inc(x_268);
lean_dec(x_263);
lean_inc(x_179);
x_269 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_179, x_4, x_5, x_6, x_7, x_268);
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
lean_dec(x_269);
x_272 = lean_unbox(x_270);
lean_dec(x_270);
x_251 = x_272;
x_252 = x_271;
goto block_262;
}
block_250:
{
lean_object* x_181; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_173);
x_181 = l_Lean_Meta_inferType(x_173, x_4, x_5, x_6, x_7, x_180);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; uint8_t x_184; lean_object* x_185; lean_object* x_213; lean_object* x_214; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_213 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_213, 0, x_10);
lean_ctor_set(x_213, 1, x_15);
lean_ctor_set(x_213, 2, x_16);
lean_ctor_set(x_213, 3, x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_182);
lean_inc(x_26);
x_214 = l_Lean_Meta_isExprDefEq(x_26, x_182, x_213, x_5, x_6, x_7, x_183);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_unbox(x_215);
lean_dec(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
lean_dec(x_174);
lean_dec(x_173);
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
lean_dec(x_214);
x_218 = lean_st_ref_get(x_7, x_217);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_219, 3);
lean_inc(x_220);
lean_dec(x_219);
x_221 = lean_ctor_get_uint8(x_220, sizeof(void*)*1);
lean_dec(x_220);
if (x_221 == 0)
{
lean_object* x_222; 
x_222 = lean_ctor_get(x_218, 1);
lean_inc(x_222);
lean_dec(x_218);
x_184 = x_19;
x_185 = x_222;
goto block_212;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; uint8_t x_227; 
x_223 = lean_ctor_get(x_218, 1);
lean_inc(x_223);
lean_dec(x_218);
lean_inc(x_179);
x_224 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_179, x_4, x_5, x_6, x_7, x_223);
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_unbox(x_225);
lean_dec(x_225);
x_184 = x_227;
x_185 = x_226;
goto block_212;
}
}
else
{
lean_object* x_228; lean_object* x_229; 
lean_dec(x_182);
lean_dec(x_179);
x_228 = lean_ctor_get(x_214, 1);
lean_inc(x_228);
lean_dec(x_214);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_229 = l_Lean_Meta_instantiateMVars(x_173, x_4, x_5, x_6, x_7, x_228);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
if (lean_is_scalar(x_174)) {
 x_232 = lean_alloc_ctor(1, 1, 0);
} else {
 x_232 = x_174;
}
lean_ctor_set(x_232, 0, x_230);
x_233 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_232, x_4, x_5, x_6, x_7, x_231);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_236 = x_233;
} else {
 lean_dec_ref(x_233);
 x_236 = lean_box(0);
}
if (lean_is_scalar(x_236)) {
 x_237 = lean_alloc_ctor(0, 2, 0);
} else {
 x_237 = x_236;
}
lean_ctor_set(x_237, 0, x_234);
lean_ctor_set(x_237, 1, x_235);
return x_237;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_174);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_238 = lean_ctor_get(x_229, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_229, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_229)) {
 lean_ctor_release(x_229, 0);
 lean_ctor_release(x_229, 1);
 x_240 = x_229;
} else {
 lean_dec_ref(x_229);
 x_240 = lean_box(0);
}
if (lean_is_scalar(x_240)) {
 x_241 = lean_alloc_ctor(1, 2, 0);
} else {
 x_241 = x_240;
}
lean_ctor_set(x_241, 0, x_238);
lean_ctor_set(x_241, 1, x_239);
return x_241;
}
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_182);
lean_dec(x_179);
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_242 = lean_ctor_get(x_214, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_214, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_244 = x_214;
} else {
 lean_dec_ref(x_214);
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
block_212:
{
if (x_184 == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_182);
lean_dec(x_179);
x_186 = lean_box(0);
x_187 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_186, x_4, x_5, x_6, x_7, x_185);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
if (lean_is_scalar(x_190)) {
 x_191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_191 = x_190;
}
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set(x_191, 1, x_189);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_192 = lean_mk_string("result type");
x_193 = l_Lean_stringToMessageData(x_192);
lean_dec(x_192);
x_194 = l_Lean_indentExpr(x_182);
x_195 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_mk_string("\nis not definitionally equal to");
x_197 = l_Lean_stringToMessageData(x_196);
lean_dec(x_196);
x_198 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_197);
lean_inc(x_26);
x_199 = l_Lean_indentExpr(x_26);
x_200 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_mk_string("");
x_202 = l_Lean_stringToMessageData(x_201);
lean_dec(x_201);
x_203 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_203, 0, x_200);
lean_ctor_set(x_203, 1, x_202);
x_204 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_179, x_203, x_4, x_5, x_6, x_7, x_185);
x_205 = lean_ctor_get(x_204, 1);
lean_inc(x_205);
lean_dec(x_204);
x_206 = lean_box(0);
x_207 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_26, x_206, x_4, x_5, x_6, x_7, x_205);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_210 = x_207;
} else {
 lean_dec_ref(x_207);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_179);
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_246 = lean_ctor_get(x_181, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_181, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_248 = x_181;
} else {
 lean_dec_ref(x_181);
 x_248 = lean_box(0);
}
if (lean_is_scalar(x_248)) {
 x_249 = lean_alloc_ctor(1, 2, 0);
} else {
 x_249 = x_248;
}
lean_ctor_set(x_249, 0, x_246);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
block_262:
{
if (x_251 == 0)
{
x_180 = x_252;
goto block_250;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_253 = lean_mk_string("result ");
x_254 = l_Lean_stringToMessageData(x_253);
lean_dec(x_253);
lean_inc(x_173);
x_255 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_255, 0, x_173);
x_256 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_mk_string("");
x_258 = l_Lean_stringToMessageData(x_257);
lean_dec(x_257);
x_259 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_258);
lean_inc(x_179);
x_260 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_179, x_259, x_4, x_5, x_6, x_7, x_252);
x_261 = lean_ctor_get(x_260, 1);
lean_inc(x_261);
lean_dec(x_260);
x_180 = x_261;
goto block_250;
}
}
}
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_273 = lean_ctor_get(x_163, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_163, 1);
lean_inc(x_274);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_275 = x_163;
} else {
 lean_dec_ref(x_163);
 x_275 = lean_box(0);
}
if (lean_is_scalar(x_275)) {
 x_276 = lean_alloc_ctor(1, 2, 0);
} else {
 x_276 = x_275;
}
lean_ctor_set(x_276, 0, x_273);
lean_ctor_set(x_276, 1, x_274);
return x_276;
}
}
else
{
lean_object* x_277; lean_object* x_278; 
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_277 = lean_ctor_get(x_159, 0);
lean_inc(x_277);
lean_dec(x_159);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_156);
return x_278;
}
}
}
else
{
uint8_t x_279; 
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_279 = !lean_is_exclusive(x_25);
if (x_279 == 0)
{
return x_25;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_25, 0);
x_281 = lean_ctor_get(x_25, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_25);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
return x_282;
}
}
}
else
{
uint8_t x_283; 
lean_dec(x_4);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_283 = !lean_is_exclusive(x_21);
if (x_283 == 0)
{
return x_21;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_21, 0);
x_285 = lean_ctor_get(x_21, 1);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_21);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
return x_286;
}
}
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; uint8_t x_290; uint8_t x_291; uint8_t x_292; uint8_t x_293; uint8_t x_294; uint8_t x_295; uint8_t x_296; uint8_t x_297; lean_object* x_298; lean_object* x_299; 
x_287 = lean_ctor_get(x_4, 1);
x_288 = lean_ctor_get(x_4, 2);
x_289 = lean_ctor_get(x_4, 3);
x_290 = lean_ctor_get_uint8(x_13, 2);
x_291 = lean_ctor_get_uint8(x_13, 6);
x_292 = lean_ctor_get_uint8(x_13, 7);
x_293 = lean_ctor_get_uint8(x_13, 8);
x_294 = lean_ctor_get_uint8(x_13, 9);
lean_dec(x_13);
x_295 = 1;
x_296 = 0;
x_297 = 3;
x_298 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_298, 0, x_295);
lean_ctor_set_uint8(x_298, 1, x_295);
lean_ctor_set_uint8(x_298, 2, x_290);
lean_ctor_set_uint8(x_298, 3, x_296);
lean_ctor_set_uint8(x_298, 4, x_295);
lean_ctor_set_uint8(x_298, 5, x_297);
lean_ctor_set_uint8(x_298, 6, x_291);
lean_ctor_set_uint8(x_298, 7, x_292);
lean_ctor_set_uint8(x_298, 8, x_293);
lean_ctor_set_uint8(x_298, 9, x_294);
lean_inc(x_289);
lean_inc(x_288);
lean_inc(x_287);
lean_ctor_set(x_4, 0, x_298);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_299 = l_Lean_Meta_instantiateMVars(x_1, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_299) == 0)
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec(x_299);
x_302 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess___lambda__1), 7, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_303 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_300, x_302, x_4, x_5, x_6, x_7, x_301);
if (lean_obj_tag(x_303) == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
x_306 = lean_st_ref_get(x_7, x_305);
x_307 = lean_ctor_get(x_306, 1);
lean_inc(x_307);
lean_dec(x_306);
x_308 = lean_st_ref_get(x_5, x_307);
x_309 = lean_ctor_get(x_308, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_308, 1);
lean_inc(x_310);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 x_311 = x_308;
} else {
 lean_dec_ref(x_308);
 x_311 = lean_box(0);
}
x_312 = lean_ctor_get(x_309, 1);
lean_inc(x_312);
lean_dec(x_309);
x_313 = lean_ctor_get(x_312, 2);
lean_inc(x_313);
lean_dec(x_312);
x_314 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(x_313, x_304);
if (lean_obj_tag(x_314) == 0)
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_311);
lean_inc(x_304);
x_315 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam), 6, 1);
lean_closure_set(x_315, 0, x_304);
lean_inc(x_304);
x_316 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f___lambda__2), 8, 2);
lean_closure_set(x_316, 0, x_9);
lean_closure_set(x_316, 1, x_304);
x_317 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_317, 0, x_315);
lean_closure_set(x_317, 1, x_316);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_318 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(x_317, x_4, x_5, x_6, x_7, x_310);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; 
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_10);
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
x_321 = lean_box(0);
x_322 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_304, x_321, x_4, x_5, x_6, x_7, x_320);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_323 = lean_ctor_get(x_322, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_322, 1);
lean_inc(x_324);
if (lean_is_exclusive(x_322)) {
 lean_ctor_release(x_322, 0);
 lean_ctor_release(x_322, 1);
 x_325 = x_322;
} else {
 lean_dec_ref(x_322);
 x_325 = lean_box(0);
}
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(0, 2, 0);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_323);
lean_ctor_set(x_326, 1, x_324);
return x_326;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; uint8_t x_406; lean_object* x_407; lean_object* x_418; lean_object* x_419; lean_object* x_420; uint8_t x_421; 
x_327 = lean_ctor_get(x_318, 1);
lean_inc(x_327);
lean_dec(x_318);
x_328 = lean_ctor_get(x_319, 0);
lean_inc(x_328);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 x_329 = x_319;
} else {
 lean_dec_ref(x_319);
 x_329 = lean_box(0);
}
x_330 = lean_box(0);
x_331 = lean_mk_string("Meta");
x_332 = lean_name_mk_string(x_330, x_331);
x_333 = lean_mk_string("synthInstance");
x_334 = lean_name_mk_string(x_332, x_333);
x_418 = lean_st_ref_get(x_7, x_327);
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_419, 3);
lean_inc(x_420);
lean_dec(x_419);
x_421 = lean_ctor_get_uint8(x_420, sizeof(void*)*1);
lean_dec(x_420);
if (x_421 == 0)
{
lean_object* x_422; 
x_422 = lean_ctor_get(x_418, 1);
lean_inc(x_422);
lean_dec(x_418);
x_406 = x_296;
x_407 = x_422;
goto block_417;
}
else
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; 
x_423 = lean_ctor_get(x_418, 1);
lean_inc(x_423);
lean_dec(x_418);
lean_inc(x_334);
x_424 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_334, x_4, x_5, x_6, x_7, x_423);
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
lean_dec(x_424);
x_427 = lean_unbox(x_425);
lean_dec(x_425);
x_406 = x_427;
x_407 = x_426;
goto block_417;
}
block_405:
{
lean_object* x_336; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_328);
x_336 = l_Lean_Meta_inferType(x_328, x_4, x_5, x_6, x_7, x_335);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; lean_object* x_368; lean_object* x_369; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
lean_dec(x_336);
x_368 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_368, 0, x_10);
lean_ctor_set(x_368, 1, x_287);
lean_ctor_set(x_368, 2, x_288);
lean_ctor_set(x_368, 3, x_289);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_337);
lean_inc(x_304);
x_369 = l_Lean_Meta_isExprDefEq(x_304, x_337, x_368, x_5, x_6, x_7, x_338);
if (lean_obj_tag(x_369) == 0)
{
lean_object* x_370; uint8_t x_371; 
x_370 = lean_ctor_get(x_369, 0);
lean_inc(x_370);
x_371 = lean_unbox(x_370);
lean_dec(x_370);
if (x_371 == 0)
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; uint8_t x_376; 
lean_dec(x_329);
lean_dec(x_328);
x_372 = lean_ctor_get(x_369, 1);
lean_inc(x_372);
lean_dec(x_369);
x_373 = lean_st_ref_get(x_7, x_372);
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_374, 3);
lean_inc(x_375);
lean_dec(x_374);
x_376 = lean_ctor_get_uint8(x_375, sizeof(void*)*1);
lean_dec(x_375);
if (x_376 == 0)
{
lean_object* x_377; 
x_377 = lean_ctor_get(x_373, 1);
lean_inc(x_377);
lean_dec(x_373);
x_339 = x_296;
x_340 = x_377;
goto block_367;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; uint8_t x_382; 
x_378 = lean_ctor_get(x_373, 1);
lean_inc(x_378);
lean_dec(x_373);
lean_inc(x_334);
x_379 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_334, x_4, x_5, x_6, x_7, x_378);
x_380 = lean_ctor_get(x_379, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_379, 1);
lean_inc(x_381);
lean_dec(x_379);
x_382 = lean_unbox(x_380);
lean_dec(x_380);
x_339 = x_382;
x_340 = x_381;
goto block_367;
}
}
else
{
lean_object* x_383; lean_object* x_384; 
lean_dec(x_337);
lean_dec(x_334);
x_383 = lean_ctor_get(x_369, 1);
lean_inc(x_383);
lean_dec(x_369);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_384 = l_Lean_Meta_instantiateMVars(x_328, x_4, x_5, x_6, x_7, x_383);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_384, 1);
lean_inc(x_386);
lean_dec(x_384);
if (lean_is_scalar(x_329)) {
 x_387 = lean_alloc_ctor(1, 1, 0);
} else {
 x_387 = x_329;
}
lean_ctor_set(x_387, 0, x_385);
x_388 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_304, x_387, x_4, x_5, x_6, x_7, x_386);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
lean_dec(x_329);
lean_dec(x_304);
lean_dec(x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_393 = lean_ctor_get(x_384, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_384, 1);
lean_inc(x_394);
if (lean_is_exclusive(x_384)) {
 lean_ctor_release(x_384, 0);
 lean_ctor_release(x_384, 1);
 x_395 = x_384;
} else {
 lean_dec_ref(x_384);
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
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
lean_dec(x_337);
lean_dec(x_334);
lean_dec(x_329);
lean_dec(x_328);
lean_dec(x_304);
lean_dec(x_4);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_397 = lean_ctor_get(x_369, 0);
lean_inc(x_397);
x_398 = lean_ctor_get(x_369, 1);
lean_inc(x_398);
if (lean_is_exclusive(x_369)) {
 lean_ctor_release(x_369, 0);
 lean_ctor_release(x_369, 1);
 x_399 = x_369;
} else {
 lean_dec_ref(x_369);
 x_399 = lean_box(0);
}
if (lean_is_scalar(x_399)) {
 x_400 = lean_alloc_ctor(1, 2, 0);
} else {
 x_400 = x_399;
}
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_398);
return x_400;
}
block_367:
{
if (x_339 == 0)
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
lean_dec(x_337);
lean_dec(x_334);
x_341 = lean_box(0);
x_342 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_304, x_341, x_4, x_5, x_6, x_7, x_340);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_347 = lean_mk_string("result type");
x_348 = l_Lean_stringToMessageData(x_347);
lean_dec(x_347);
x_349 = l_Lean_indentExpr(x_337);
x_350 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_350, 0, x_348);
lean_ctor_set(x_350, 1, x_349);
x_351 = lean_mk_string("\nis not definitionally equal to");
x_352 = l_Lean_stringToMessageData(x_351);
lean_dec(x_351);
x_353 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_353, 0, x_350);
lean_ctor_set(x_353, 1, x_352);
lean_inc(x_304);
x_354 = l_Lean_indentExpr(x_304);
x_355 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_355, 0, x_353);
lean_ctor_set(x_355, 1, x_354);
x_356 = lean_mk_string("");
x_357 = l_Lean_stringToMessageData(x_356);
lean_dec(x_356);
x_358 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_358, 0, x_355);
lean_ctor_set(x_358, 1, x_357);
x_359 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_334, x_358, x_4, x_5, x_6, x_7, x_340);
x_360 = lean_ctor_get(x_359, 1);
lean_inc(x_360);
lean_dec(x_359);
x_361 = lean_box(0);
x_362 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_304, x_361, x_4, x_5, x_6, x_7, x_360);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_362)) {
 lean_ctor_release(x_362, 0);
 lean_ctor_release(x_362, 1);
 x_365 = x_362;
} else {
 lean_dec_ref(x_362);
 x_365 = lean_box(0);
}
if (lean_is_scalar(x_365)) {
 x_366 = lean_alloc_ctor(0, 2, 0);
} else {
 x_366 = x_365;
}
lean_ctor_set(x_366, 0, x_363);
lean_ctor_set(x_366, 1, x_364);
return x_366;
}
}
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_dec(x_334);
lean_dec(x_329);
lean_dec(x_328);
lean_dec(x_304);
lean_dec(x_4);
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_401 = lean_ctor_get(x_336, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_336, 1);
lean_inc(x_402);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_403 = x_336;
} else {
 lean_dec_ref(x_336);
 x_403 = lean_box(0);
}
if (lean_is_scalar(x_403)) {
 x_404 = lean_alloc_ctor(1, 2, 0);
} else {
 x_404 = x_403;
}
lean_ctor_set(x_404, 0, x_401);
lean_ctor_set(x_404, 1, x_402);
return x_404;
}
}
block_417:
{
if (x_406 == 0)
{
x_335 = x_407;
goto block_405;
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; 
x_408 = lean_mk_string("result ");
x_409 = l_Lean_stringToMessageData(x_408);
lean_dec(x_408);
lean_inc(x_328);
x_410 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_410, 0, x_328);
x_411 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_411, 0, x_409);
lean_ctor_set(x_411, 1, x_410);
x_412 = lean_mk_string("");
x_413 = l_Lean_stringToMessageData(x_412);
lean_dec(x_412);
x_414 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_414, 0, x_411);
lean_ctor_set(x_414, 1, x_413);
lean_inc(x_334);
x_415 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_334, x_414, x_4, x_5, x_6, x_7, x_407);
x_416 = lean_ctor_get(x_415, 1);
lean_inc(x_416);
lean_dec(x_415);
x_335 = x_416;
goto block_405;
}
}
}
}
else
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
lean_dec(x_304);
lean_dec(x_4);
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_428 = lean_ctor_get(x_318, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_318, 1);
lean_inc(x_429);
if (lean_is_exclusive(x_318)) {
 lean_ctor_release(x_318, 0);
 lean_ctor_release(x_318, 1);
 x_430 = x_318;
} else {
 lean_dec_ref(x_318);
 x_430 = lean_box(0);
}
if (lean_is_scalar(x_430)) {
 x_431 = lean_alloc_ctor(1, 2, 0);
} else {
 x_431 = x_430;
}
lean_ctor_set(x_431, 0, x_428);
lean_ctor_set(x_431, 1, x_429);
return x_431;
}
}
else
{
lean_object* x_432; lean_object* x_433; 
lean_dec(x_304);
lean_dec(x_4);
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_432 = lean_ctor_get(x_314, 0);
lean_inc(x_432);
lean_dec(x_314);
if (lean_is_scalar(x_311)) {
 x_433 = lean_alloc_ctor(0, 2, 0);
} else {
 x_433 = x_311;
}
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_310);
return x_433;
}
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; 
lean_dec(x_4);
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_434 = lean_ctor_get(x_303, 0);
lean_inc(x_434);
x_435 = lean_ctor_get(x_303, 1);
lean_inc(x_435);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_436 = x_303;
} else {
 lean_dec_ref(x_303);
 x_436 = lean_box(0);
}
if (lean_is_scalar(x_436)) {
 x_437 = lean_alloc_ctor(1, 2, 0);
} else {
 x_437 = x_436;
}
lean_ctor_set(x_437, 0, x_434);
lean_ctor_set(x_437, 1, x_435);
return x_437;
}
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
lean_dec(x_4);
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_438 = lean_ctor_get(x_299, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_299, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_299)) {
 lean_ctor_release(x_299, 0);
 lean_ctor_release(x_299, 1);
 x_440 = x_299;
} else {
 lean_dec_ref(x_299);
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
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; uint8_t x_446; uint8_t x_447; uint8_t x_448; uint8_t x_449; uint8_t x_450; lean_object* x_451; uint8_t x_452; uint8_t x_453; uint8_t x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; 
x_442 = lean_ctor_get(x_4, 0);
x_443 = lean_ctor_get(x_4, 1);
x_444 = lean_ctor_get(x_4, 2);
x_445 = lean_ctor_get(x_4, 3);
lean_inc(x_445);
lean_inc(x_444);
lean_inc(x_443);
lean_inc(x_442);
lean_dec(x_4);
x_446 = lean_ctor_get_uint8(x_442, 2);
x_447 = lean_ctor_get_uint8(x_442, 6);
x_448 = lean_ctor_get_uint8(x_442, 7);
x_449 = lean_ctor_get_uint8(x_442, 8);
x_450 = lean_ctor_get_uint8(x_442, 9);
if (lean_is_exclusive(x_442)) {
 x_451 = x_442;
} else {
 lean_dec_ref(x_442);
 x_451 = lean_box(0);
}
x_452 = 1;
x_453 = 0;
x_454 = 3;
if (lean_is_scalar(x_451)) {
 x_455 = lean_alloc_ctor(0, 0, 10);
} else {
 x_455 = x_451;
}
lean_ctor_set_uint8(x_455, 0, x_452);
lean_ctor_set_uint8(x_455, 1, x_452);
lean_ctor_set_uint8(x_455, 2, x_446);
lean_ctor_set_uint8(x_455, 3, x_453);
lean_ctor_set_uint8(x_455, 4, x_452);
lean_ctor_set_uint8(x_455, 5, x_454);
lean_ctor_set_uint8(x_455, 6, x_447);
lean_ctor_set_uint8(x_455, 7, x_448);
lean_ctor_set_uint8(x_455, 8, x_449);
lean_ctor_set_uint8(x_455, 9, x_450);
lean_inc(x_445);
lean_inc(x_444);
lean_inc(x_443);
x_456 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_456, 0, x_455);
lean_ctor_set(x_456, 1, x_443);
lean_ctor_set(x_456, 2, x_444);
lean_ctor_set(x_456, 3, x_445);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_456);
x_457 = l_Lean_Meta_instantiateMVars(x_1, x_456, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_457) == 0)
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; 
x_458 = lean_ctor_get(x_457, 0);
lean_inc(x_458);
x_459 = lean_ctor_get(x_457, 1);
lean_inc(x_459);
lean_dec(x_457);
x_460 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocess___lambda__1), 7, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_456);
x_461 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_458, x_460, x_456, x_5, x_6, x_7, x_459);
if (lean_obj_tag(x_461) == 0)
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_462 = lean_ctor_get(x_461, 0);
lean_inc(x_462);
x_463 = lean_ctor_get(x_461, 1);
lean_inc(x_463);
lean_dec(x_461);
x_464 = lean_st_ref_get(x_7, x_463);
x_465 = lean_ctor_get(x_464, 1);
lean_inc(x_465);
lean_dec(x_464);
x_466 = lean_st_ref_get(x_5, x_465);
x_467 = lean_ctor_get(x_466, 0);
lean_inc(x_467);
x_468 = lean_ctor_get(x_466, 1);
lean_inc(x_468);
if (lean_is_exclusive(x_466)) {
 lean_ctor_release(x_466, 0);
 lean_ctor_release(x_466, 1);
 x_469 = x_466;
} else {
 lean_dec_ref(x_466);
 x_469 = lean_box(0);
}
x_470 = lean_ctor_get(x_467, 1);
lean_inc(x_470);
lean_dec(x_467);
x_471 = lean_ctor_get(x_470, 2);
lean_inc(x_471);
lean_dec(x_470);
x_472 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(x_471, x_462);
if (lean_obj_tag(x_472) == 0)
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
lean_dec(x_469);
lean_inc(x_462);
x_473 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_preprocessOutParam), 6, 1);
lean_closure_set(x_473, 0, x_462);
lean_inc(x_462);
x_474 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f___lambda__2), 8, 2);
lean_closure_set(x_474, 0, x_9);
lean_closure_set(x_474, 1, x_462);
x_475 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_475, 0, x_473);
lean_closure_set(x_475, 1, x_474);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_456);
x_476 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(x_475, x_456, x_5, x_6, x_7, x_468);
if (lean_obj_tag(x_476) == 0)
{
lean_object* x_477; 
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
if (lean_obj_tag(x_477) == 0)
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_10);
x_478 = lean_ctor_get(x_476, 1);
lean_inc(x_478);
lean_dec(x_476);
x_479 = lean_box(0);
x_480 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_462, x_479, x_456, x_5, x_6, x_7, x_478);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_456);
x_481 = lean_ctor_get(x_480, 0);
lean_inc(x_481);
x_482 = lean_ctor_get(x_480, 1);
lean_inc(x_482);
if (lean_is_exclusive(x_480)) {
 lean_ctor_release(x_480, 0);
 lean_ctor_release(x_480, 1);
 x_483 = x_480;
} else {
 lean_dec_ref(x_480);
 x_483 = lean_box(0);
}
if (lean_is_scalar(x_483)) {
 x_484 = lean_alloc_ctor(0, 2, 0);
} else {
 x_484 = x_483;
}
lean_ctor_set(x_484, 0, x_481);
lean_ctor_set(x_484, 1, x_482);
return x_484;
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; uint8_t x_564; lean_object* x_565; lean_object* x_576; lean_object* x_577; lean_object* x_578; uint8_t x_579; 
x_485 = lean_ctor_get(x_476, 1);
lean_inc(x_485);
lean_dec(x_476);
x_486 = lean_ctor_get(x_477, 0);
lean_inc(x_486);
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 x_487 = x_477;
} else {
 lean_dec_ref(x_477);
 x_487 = lean_box(0);
}
x_488 = lean_box(0);
x_489 = lean_mk_string("Meta");
x_490 = lean_name_mk_string(x_488, x_489);
x_491 = lean_mk_string("synthInstance");
x_492 = lean_name_mk_string(x_490, x_491);
x_576 = lean_st_ref_get(x_7, x_485);
x_577 = lean_ctor_get(x_576, 0);
lean_inc(x_577);
x_578 = lean_ctor_get(x_577, 3);
lean_inc(x_578);
lean_dec(x_577);
x_579 = lean_ctor_get_uint8(x_578, sizeof(void*)*1);
lean_dec(x_578);
if (x_579 == 0)
{
lean_object* x_580; 
x_580 = lean_ctor_get(x_576, 1);
lean_inc(x_580);
lean_dec(x_576);
x_564 = x_453;
x_565 = x_580;
goto block_575;
}
else
{
lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; uint8_t x_585; 
x_581 = lean_ctor_get(x_576, 1);
lean_inc(x_581);
lean_dec(x_576);
lean_inc(x_492);
x_582 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_492, x_456, x_5, x_6, x_7, x_581);
x_583 = lean_ctor_get(x_582, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_582, 1);
lean_inc(x_584);
lean_dec(x_582);
x_585 = lean_unbox(x_583);
lean_dec(x_583);
x_564 = x_585;
x_565 = x_584;
goto block_575;
}
block_563:
{
lean_object* x_494; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_456);
lean_inc(x_486);
x_494 = l_Lean_Meta_inferType(x_486, x_456, x_5, x_6, x_7, x_493);
if (lean_obj_tag(x_494) == 0)
{
lean_object* x_495; lean_object* x_496; uint8_t x_497; lean_object* x_498; lean_object* x_526; lean_object* x_527; 
x_495 = lean_ctor_get(x_494, 0);
lean_inc(x_495);
x_496 = lean_ctor_get(x_494, 1);
lean_inc(x_496);
lean_dec(x_494);
x_526 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_526, 0, x_10);
lean_ctor_set(x_526, 1, x_443);
lean_ctor_set(x_526, 2, x_444);
lean_ctor_set(x_526, 3, x_445);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_495);
lean_inc(x_462);
x_527 = l_Lean_Meta_isExprDefEq(x_462, x_495, x_526, x_5, x_6, x_7, x_496);
if (lean_obj_tag(x_527) == 0)
{
lean_object* x_528; uint8_t x_529; 
x_528 = lean_ctor_get(x_527, 0);
lean_inc(x_528);
x_529 = lean_unbox(x_528);
lean_dec(x_528);
if (x_529 == 0)
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; uint8_t x_534; 
lean_dec(x_487);
lean_dec(x_486);
x_530 = lean_ctor_get(x_527, 1);
lean_inc(x_530);
lean_dec(x_527);
x_531 = lean_st_ref_get(x_7, x_530);
x_532 = lean_ctor_get(x_531, 0);
lean_inc(x_532);
x_533 = lean_ctor_get(x_532, 3);
lean_inc(x_533);
lean_dec(x_532);
x_534 = lean_ctor_get_uint8(x_533, sizeof(void*)*1);
lean_dec(x_533);
if (x_534 == 0)
{
lean_object* x_535; 
x_535 = lean_ctor_get(x_531, 1);
lean_inc(x_535);
lean_dec(x_531);
x_497 = x_453;
x_498 = x_535;
goto block_525;
}
else
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; uint8_t x_540; 
x_536 = lean_ctor_get(x_531, 1);
lean_inc(x_536);
lean_dec(x_531);
lean_inc(x_492);
x_537 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_492, x_456, x_5, x_6, x_7, x_536);
x_538 = lean_ctor_get(x_537, 0);
lean_inc(x_538);
x_539 = lean_ctor_get(x_537, 1);
lean_inc(x_539);
lean_dec(x_537);
x_540 = lean_unbox(x_538);
lean_dec(x_538);
x_497 = x_540;
x_498 = x_539;
goto block_525;
}
}
else
{
lean_object* x_541; lean_object* x_542; 
lean_dec(x_495);
lean_dec(x_492);
x_541 = lean_ctor_get(x_527, 1);
lean_inc(x_541);
lean_dec(x_527);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_456);
x_542 = l_Lean_Meta_instantiateMVars(x_486, x_456, x_5, x_6, x_7, x_541);
if (lean_obj_tag(x_542) == 0)
{
lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; 
x_543 = lean_ctor_get(x_542, 0);
lean_inc(x_543);
x_544 = lean_ctor_get(x_542, 1);
lean_inc(x_544);
lean_dec(x_542);
if (lean_is_scalar(x_487)) {
 x_545 = lean_alloc_ctor(1, 1, 0);
} else {
 x_545 = x_487;
}
lean_ctor_set(x_545, 0, x_543);
x_546 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_462, x_545, x_456, x_5, x_6, x_7, x_544);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_456);
x_547 = lean_ctor_get(x_546, 0);
lean_inc(x_547);
x_548 = lean_ctor_get(x_546, 1);
lean_inc(x_548);
if (lean_is_exclusive(x_546)) {
 lean_ctor_release(x_546, 0);
 lean_ctor_release(x_546, 1);
 x_549 = x_546;
} else {
 lean_dec_ref(x_546);
 x_549 = lean_box(0);
}
if (lean_is_scalar(x_549)) {
 x_550 = lean_alloc_ctor(0, 2, 0);
} else {
 x_550 = x_549;
}
lean_ctor_set(x_550, 0, x_547);
lean_ctor_set(x_550, 1, x_548);
return x_550;
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; 
lean_dec(x_487);
lean_dec(x_462);
lean_dec(x_456);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_551 = lean_ctor_get(x_542, 0);
lean_inc(x_551);
x_552 = lean_ctor_get(x_542, 1);
lean_inc(x_552);
if (lean_is_exclusive(x_542)) {
 lean_ctor_release(x_542, 0);
 lean_ctor_release(x_542, 1);
 x_553 = x_542;
} else {
 lean_dec_ref(x_542);
 x_553 = lean_box(0);
}
if (lean_is_scalar(x_553)) {
 x_554 = lean_alloc_ctor(1, 2, 0);
} else {
 x_554 = x_553;
}
lean_ctor_set(x_554, 0, x_551);
lean_ctor_set(x_554, 1, x_552);
return x_554;
}
}
}
else
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; 
lean_dec(x_495);
lean_dec(x_492);
lean_dec(x_487);
lean_dec(x_486);
lean_dec(x_462);
lean_dec(x_456);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_555 = lean_ctor_get(x_527, 0);
lean_inc(x_555);
x_556 = lean_ctor_get(x_527, 1);
lean_inc(x_556);
if (lean_is_exclusive(x_527)) {
 lean_ctor_release(x_527, 0);
 lean_ctor_release(x_527, 1);
 x_557 = x_527;
} else {
 lean_dec_ref(x_527);
 x_557 = lean_box(0);
}
if (lean_is_scalar(x_557)) {
 x_558 = lean_alloc_ctor(1, 2, 0);
} else {
 x_558 = x_557;
}
lean_ctor_set(x_558, 0, x_555);
lean_ctor_set(x_558, 1, x_556);
return x_558;
}
block_525:
{
if (x_497 == 0)
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; 
lean_dec(x_495);
lean_dec(x_492);
x_499 = lean_box(0);
x_500 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_462, x_499, x_456, x_5, x_6, x_7, x_498);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_456);
x_501 = lean_ctor_get(x_500, 0);
lean_inc(x_501);
x_502 = lean_ctor_get(x_500, 1);
lean_inc(x_502);
if (lean_is_exclusive(x_500)) {
 lean_ctor_release(x_500, 0);
 lean_ctor_release(x_500, 1);
 x_503 = x_500;
} else {
 lean_dec_ref(x_500);
 x_503 = lean_box(0);
}
if (lean_is_scalar(x_503)) {
 x_504 = lean_alloc_ctor(0, 2, 0);
} else {
 x_504 = x_503;
}
lean_ctor_set(x_504, 0, x_501);
lean_ctor_set(x_504, 1, x_502);
return x_504;
}
else
{
lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; 
x_505 = lean_mk_string("result type");
x_506 = l_Lean_stringToMessageData(x_505);
lean_dec(x_505);
x_507 = l_Lean_indentExpr(x_495);
x_508 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_508, 0, x_506);
lean_ctor_set(x_508, 1, x_507);
x_509 = lean_mk_string("\nis not definitionally equal to");
x_510 = l_Lean_stringToMessageData(x_509);
lean_dec(x_509);
x_511 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_511, 0, x_508);
lean_ctor_set(x_511, 1, x_510);
lean_inc(x_462);
x_512 = l_Lean_indentExpr(x_462);
x_513 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_513, 0, x_511);
lean_ctor_set(x_513, 1, x_512);
x_514 = lean_mk_string("");
x_515 = l_Lean_stringToMessageData(x_514);
lean_dec(x_514);
x_516 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_516, 0, x_513);
lean_ctor_set(x_516, 1, x_515);
x_517 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_492, x_516, x_456, x_5, x_6, x_7, x_498);
x_518 = lean_ctor_get(x_517, 1);
lean_inc(x_518);
lean_dec(x_517);
x_519 = lean_box(0);
x_520 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_462, x_519, x_456, x_5, x_6, x_7, x_518);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_456);
x_521 = lean_ctor_get(x_520, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_520, 1);
lean_inc(x_522);
if (lean_is_exclusive(x_520)) {
 lean_ctor_release(x_520, 0);
 lean_ctor_release(x_520, 1);
 x_523 = x_520;
} else {
 lean_dec_ref(x_520);
 x_523 = lean_box(0);
}
if (lean_is_scalar(x_523)) {
 x_524 = lean_alloc_ctor(0, 2, 0);
} else {
 x_524 = x_523;
}
lean_ctor_set(x_524, 0, x_521);
lean_ctor_set(x_524, 1, x_522);
return x_524;
}
}
}
else
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; 
lean_dec(x_492);
lean_dec(x_487);
lean_dec(x_486);
lean_dec(x_462);
lean_dec(x_456);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_559 = lean_ctor_get(x_494, 0);
lean_inc(x_559);
x_560 = lean_ctor_get(x_494, 1);
lean_inc(x_560);
if (lean_is_exclusive(x_494)) {
 lean_ctor_release(x_494, 0);
 lean_ctor_release(x_494, 1);
 x_561 = x_494;
} else {
 lean_dec_ref(x_494);
 x_561 = lean_box(0);
}
if (lean_is_scalar(x_561)) {
 x_562 = lean_alloc_ctor(1, 2, 0);
} else {
 x_562 = x_561;
}
lean_ctor_set(x_562, 0, x_559);
lean_ctor_set(x_562, 1, x_560);
return x_562;
}
}
block_575:
{
if (x_564 == 0)
{
x_493 = x_565;
goto block_563;
}
else
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; 
x_566 = lean_mk_string("result ");
x_567 = l_Lean_stringToMessageData(x_566);
lean_dec(x_566);
lean_inc(x_486);
x_568 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_568, 0, x_486);
x_569 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_569, 0, x_567);
lean_ctor_set(x_569, 1, x_568);
x_570 = lean_mk_string("");
x_571 = l_Lean_stringToMessageData(x_570);
lean_dec(x_570);
x_572 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_572, 0, x_569);
lean_ctor_set(x_572, 1, x_571);
lean_inc(x_492);
x_573 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_492, x_572, x_456, x_5, x_6, x_7, x_565);
x_574 = lean_ctor_get(x_573, 1);
lean_inc(x_574);
lean_dec(x_573);
x_493 = x_574;
goto block_563;
}
}
}
}
else
{
lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; 
lean_dec(x_462);
lean_dec(x_456);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_586 = lean_ctor_get(x_476, 0);
lean_inc(x_586);
x_587 = lean_ctor_get(x_476, 1);
lean_inc(x_587);
if (lean_is_exclusive(x_476)) {
 lean_ctor_release(x_476, 0);
 lean_ctor_release(x_476, 1);
 x_588 = x_476;
} else {
 lean_dec_ref(x_476);
 x_588 = lean_box(0);
}
if (lean_is_scalar(x_588)) {
 x_589 = lean_alloc_ctor(1, 2, 0);
} else {
 x_589 = x_588;
}
lean_ctor_set(x_589, 0, x_586);
lean_ctor_set(x_589, 1, x_587);
return x_589;
}
}
else
{
lean_object* x_590; lean_object* x_591; 
lean_dec(x_462);
lean_dec(x_456);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_590 = lean_ctor_get(x_472, 0);
lean_inc(x_590);
lean_dec(x_472);
if (lean_is_scalar(x_469)) {
 x_591 = lean_alloc_ctor(0, 2, 0);
} else {
 x_591 = x_469;
}
lean_ctor_set(x_591, 0, x_590);
lean_ctor_set(x_591, 1, x_468);
return x_591;
}
}
else
{
lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; 
lean_dec(x_456);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_592 = lean_ctor_get(x_461, 0);
lean_inc(x_592);
x_593 = lean_ctor_get(x_461, 1);
lean_inc(x_593);
if (lean_is_exclusive(x_461)) {
 lean_ctor_release(x_461, 0);
 lean_ctor_release(x_461, 1);
 x_594 = x_461;
} else {
 lean_dec_ref(x_461);
 x_594 = lean_box(0);
}
if (lean_is_scalar(x_594)) {
 x_595 = lean_alloc_ctor(1, 2, 0);
} else {
 x_595 = x_594;
}
lean_ctor_set(x_595, 0, x_592);
lean_ctor_set(x_595, 1, x_593);
return x_595;
}
}
else
{
lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; 
lean_dec(x_456);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_596 = lean_ctor_get(x_457, 0);
lean_inc(x_596);
x_597 = lean_ctor_get(x_457, 1);
lean_inc(x_597);
if (lean_is_exclusive(x_457)) {
 lean_ctor_release(x_457, 0);
 lean_ctor_release(x_457, 1);
 x_598 = x_457;
} else {
 lean_dec_ref(x_457);
 x_598 = lean_box(0);
}
if (lean_is_scalar(x_598)) {
 x_599 = lean_alloc_ctor(1, 2, 0);
} else {
 x_599 = x_598;
}
lean_ctor_set(x_599, 0, x_596);
lean_ctor_set(x_599, 1, x_597);
return x_599;
}
}
}
}
}
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f___lambda__4___boxed), 8, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance_x3f___lambda__1___boxed), 5, 0);
x_11 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_mk_string("typeclass inference");
x_13 = l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg(x_12, x_8, x_11, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
lean_dec(x_12);
return x_13;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_synthInstance_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_synthInstance_x3f___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_synthInstance_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_synthInstance_x3f___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_synthInstance_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_synthInstance_x3f___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_synthInstance_x3f___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_synthInstance_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_synthInstance_x3f___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_synthInstance_x3f___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_trySynthInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_synthInstance_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Option_toLOption___rarg(x_10);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = l_Option_toLOption___rarg(x_12);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_8, 0);
lean_dec(x_18);
return x_8;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_8, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
x_24 = l_Lean_Meta_isDefEqStuckExceptionId;
x_25 = lean_nat_dec_eq(x_24, x_23);
lean_dec(x_23);
if (x_25 == 0)
{
return x_8;
}
else
{
lean_object* x_26; 
lean_dec(x_16);
x_26 = lean_box(2);
lean_ctor_set_tag(x_8, 0);
lean_ctor_set(x_8, 0, x_26);
return x_8;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_8, 1);
lean_inc(x_27);
lean_dec(x_8);
x_28 = lean_ctor_get(x_16, 0);
lean_inc(x_28);
x_29 = l_Lean_Meta_isDefEqStuckExceptionId;
x_30 = lean_nat_dec_eq(x_29, x_28);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_16);
lean_ctor_set(x_31, 1, x_27);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_16);
x_32 = lean_box(2);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
}
}
}
}
lean_object* l_Lean_Meta_synthInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_24; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_24 = l_Lean_Meta_synthInstance_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_mk_string("failed to synthesize");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
lean_inc(x_1);
x_29 = l_Lean_indentExpr(x_1);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_mk_string("");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(x_33, x_3, x_4, x_5, x_6, x_26);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_8 = x_35;
x_9 = x_36;
goto block_23;
}
else
{
uint8_t x_37; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_24);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_24, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_25, 0);
lean_inc(x_39);
lean_dec(x_25);
lean_ctor_set(x_24, 0, x_39);
return x_24;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_24, 1);
lean_inc(x_40);
lean_dec(x_24);
x_41 = lean_ctor_get(x_25, 0);
lean_inc(x_41);
lean_dec(x_25);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_24, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_24, 1);
lean_inc(x_44);
lean_dec(x_24);
x_8 = x_43;
x_9 = x_44;
goto block_23;
}
block_23:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = l_Lean_Meta_isDefEqStuckExceptionId;
x_13 = lean_nat_dec_eq(x_12, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_8);
x_15 = lean_mk_string("failed to synthesize");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = l_Lean_indentExpr(x_1);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(x_21, x_3, x_4, x_5, x_6, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
}
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_Meta_getMVarDecl(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*6);
x_11 = lean_box(x_10);
if (lean_obj_tag(x_11) == 1)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_8, 1);
x_14 = lean_ctor_get(x_8, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_9, 2);
lean_inc(x_15);
lean_dec(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_16 = l_Lean_Meta_isClass_x3f(x_15, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_19 = x_16;
} else {
 lean_dec_ref(x_16);
 x_19 = lean_box(0);
}
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_48; lean_object* x_49; 
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = 0;
x_49 = lean_box(x_48);
lean_ctor_set(x_8, 1, x_18);
lean_ctor_set(x_8, 0, x_49);
return x_8;
}
else
{
lean_object* x_50; 
lean_dec(x_17);
lean_free_object(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_50 = l_Lean_Meta_synthInstance_x3f(x_15, x_2, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_20 = x_51;
x_21 = x_52;
goto block_47;
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_50);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_50, 0);
lean_dec(x_55);
return x_50;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_50);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_50, 1);
x_60 = lean_ctor_get(x_50, 0);
lean_dec(x_60);
x_61 = lean_ctor_get(x_53, 0);
lean_inc(x_61);
x_62 = l_Lean_Meta_isDefEqStuckExceptionId;
x_63 = lean_nat_dec_eq(x_62, x_61);
lean_dec(x_61);
if (x_63 == 0)
{
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_50;
}
else
{
lean_object* x_64; 
lean_free_object(x_50);
lean_dec(x_53);
x_64 = lean_box(0);
x_20 = x_64;
x_21 = x_59;
goto block_47;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_50, 1);
lean_inc(x_65);
lean_dec(x_50);
x_66 = lean_ctor_get(x_53, 0);
lean_inc(x_66);
x_67 = l_Lean_Meta_isDefEqStuckExceptionId;
x_68 = lean_nat_dec_eq(x_67, x_66);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_53);
lean_ctor_set(x_69, 1, x_65);
return x_69;
}
else
{
lean_object* x_70; 
lean_dec(x_53);
x_70 = lean_box(0);
x_20 = x_70;
x_21 = x_65;
goto block_47;
}
}
}
}
}
block_47:
{
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_22 = 0;
x_23 = lean_box(x_22);
if (lean_is_scalar(x_19)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_19;
}
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_19);
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
lean_dec(x_20);
x_26 = l_Lean_Meta_isExprMVarAssigned(x_1, x_3, x_4, x_5, x_6, x_21);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Meta_assignExprMVar(x_1, x_25, x_3, x_4, x_5, x_6, x_29);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = 1;
x_34 = lean_box(x_33);
lean_ctor_set(x_30, 0, x_34);
return x_30;
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_dec(x_30);
x_36 = 1;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_26);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_26, 0);
lean_dec(x_40);
x_41 = 0;
x_42 = lean_box(x_41);
lean_ctor_set(x_26, 0, x_42);
return x_26;
}
else
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_26, 1);
lean_inc(x_43);
lean_dec(x_26);
x_44 = 0;
x_45 = lean_box(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_15);
lean_free_object(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_16);
if (x_71 == 0)
{
return x_16;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_16, 0);
x_73 = lean_ctor_get(x_16, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_16);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_8, 1);
lean_inc(x_75);
lean_dec(x_8);
x_76 = lean_ctor_get(x_9, 2);
lean_inc(x_76);
lean_dec(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_76);
x_77 = l_Lean_Meta_isClass_x3f(x_76, x_3, x_4, x_5, x_6, x_75);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_80);
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_103 = 0;
x_104 = lean_box(x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_79);
return x_105;
}
else
{
lean_object* x_106; 
lean_dec(x_78);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_106 = l_Lean_Meta_synthInstance_x3f(x_76, x_2, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_81 = x_107;
x_82 = x_108;
goto block_102;
}
else
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_111 = x_106;
} else {
 lean_dec_ref(x_106);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_113 = lean_ctor_get(x_106, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_114 = x_106;
} else {
 lean_dec_ref(x_106);
 x_114 = lean_box(0);
}
x_115 = lean_ctor_get(x_109, 0);
lean_inc(x_115);
x_116 = l_Lean_Meta_isDefEqStuckExceptionId;
x_117 = lean_nat_dec_eq(x_116, x_115);
lean_dec(x_115);
if (x_117 == 0)
{
lean_object* x_118; 
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_114)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_114;
}
lean_ctor_set(x_118, 0, x_109);
lean_ctor_set(x_118, 1, x_113);
return x_118;
}
else
{
lean_object* x_119; 
lean_dec(x_114);
lean_dec(x_109);
x_119 = lean_box(0);
x_81 = x_119;
x_82 = x_113;
goto block_102;
}
}
}
}
block_102:
{
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_83 = 0;
x_84 = lean_box(x_83);
if (lean_is_scalar(x_80)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_80;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
lean_dec(x_80);
x_86 = lean_ctor_get(x_81, 0);
lean_inc(x_86);
lean_dec(x_81);
x_87 = l_Lean_Meta_isExprMVarAssigned(x_1, x_3, x_4, x_5, x_6, x_82);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_unbox(x_88);
lean_dec(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; lean_object* x_95; lean_object* x_96; 
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
lean_dec(x_87);
x_91 = l_Lean_Meta_assignExprMVar(x_1, x_86, x_3, x_4, x_5, x_6, x_90);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
x_94 = 1;
x_95 = lean_box(x_94);
if (lean_is_scalar(x_93)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_93;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_92);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_86);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_97 = lean_ctor_get(x_87, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_98 = x_87;
} else {
 lean_dec_ref(x_87);
 x_98 = lean_box(0);
}
x_99 = 0;
x_100 = lean_box(x_99);
if (lean_is_scalar(x_98)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_98;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_97);
return x_101;
}
}
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_120 = lean_ctor_get(x_77, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_77, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_122 = x_77;
} else {
 lean_dec_ref(x_77);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_122;
}
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_124 = !lean_is_exclusive(x_8);
if (x_124 == 0)
{
lean_object* x_125; uint8_t x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_8, 0);
lean_dec(x_125);
x_126 = 0;
x_127 = lean_box(x_126);
lean_ctor_set(x_8, 0, x_127);
return x_8;
}
else
{
lean_object* x_128; uint8_t x_129; lean_object* x_130; lean_object* x_131; 
x_128 = lean_ctor_get(x_8, 1);
lean_inc(x_128);
lean_dec(x_8);
x_129 = 0;
x_130 = lean_box(x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_128);
return x_131;
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_8);
if (x_132 == 0)
{
return x_8;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_8, 0);
x_134 = lean_ctor_get(x_8, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_8);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5152____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5152_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Lean_Meta_synthPendingRef;
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5152____lambda__1), 6, 0);
x_4 = lean_st_ref_set(x_2, x_3, x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5167_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Meta");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("synthInstance");
x_6 = lean_name_mk_string(x_4, x_5);
lean_inc(x_6);
x_7 = l_Lean_registerTraceClass(x_6, x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_mk_string("globalInstances");
lean_inc(x_6);
x_10 = lean_name_mk_string(x_6, x_9);
x_11 = l_Lean_registerTraceClass(x_10, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_mk_string("newSubgoal");
lean_inc(x_6);
x_14 = lean_name_mk_string(x_6, x_13);
x_15 = l_Lean_registerTraceClass(x_14, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_mk_string("tryResolve");
lean_inc(x_6);
x_18 = lean_name_mk_string(x_6, x_17);
x_19 = l_Lean_registerTraceClass(x_18, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_mk_string("resume");
lean_inc(x_6);
x_22 = lean_name_mk_string(x_6, x_21);
x_23 = l_Lean_registerTraceClass(x_22, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_mk_string("generate");
x_26 = lean_name_mk_string(x_6, x_25);
x_27 = l_Lean_registerTraceClass(x_26, x_24);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_6);
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
else
{
uint8_t x_32; 
lean_dec(x_6);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_6);
x_36 = !lean_is_exclusive(x_15);
if (x_36 == 0)
{
return x_15;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_15, 0);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_15);
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
lean_dec(x_6);
x_40 = !lean_is_exclusive(x_11);
if (x_40 == 0)
{
return x_11;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_11, 0);
x_42 = lean_ctor_get(x_11, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_11);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_7);
if (x_44 == 0)
{
return x_7;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_7, 0);
x_46 = lean_ctor_get(x_7, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_7);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_Instances(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Lean_Meta_AbstractMVars(lean_object*);
lean_object* initialize_Lean_Meta_WHNF(lean_object*);
lean_object* initialize_Lean_Util_Profile(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_SynthInstance(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Instances(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AbstractMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Profile(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_synthInstance_maxHeartbeats = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_synthInstance_maxHeartbeats);
lean_dec_ref(res);
res = l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_28_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_synthInstance_maxSize = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_synthInstance_maxSize);
lean_dec_ref(res);
res = l_Lean_Meta_SynthInstance_initFn____x40_Lean_Meta_SynthInstance___hyg_61_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_SynthInstance_inferTCGoalsRLAttr);
lean_dec_ref(res);
l_Lean_Meta_SynthInstance_instInhabitedGeneratorNode = _init_l_Lean_Meta_SynthInstance_instInhabitedGeneratorNode();
lean_mark_persistent(l_Lean_Meta_SynthInstance_instInhabitedGeneratorNode);
l_Lean_Meta_SynthInstance_instInhabitedConsumerNode = _init_l_Lean_Meta_SynthInstance_instInhabitedConsumerNode();
lean_mark_persistent(l_Lean_Meta_SynthInstance_instInhabitedConsumerNode);
l_Lean_Meta_SynthInstance_MkTableKey_State_nextIdx___default = _init_l_Lean_Meta_SynthInstance_MkTableKey_State_nextIdx___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_State_nextIdx___default);
l_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default = _init_l_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_State_lmap___default);
l_Lean_Meta_SynthInstance_MkTableKey_State_emap___default = _init_l_Lean_Meta_SynthInstance_MkTableKey_State_emap___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_MkTableKey_State_emap___default);
l_Lean_Meta_SynthInstance_instInhabitedAnswer = _init_l_Lean_Meta_SynthInstance_instInhabitedAnswer();
lean_mark_persistent(l_Lean_Meta_SynthInstance_instInhabitedAnswer);
l_Lean_Meta_SynthInstance_TableEntry_answers___default = _init_l_Lean_Meta_SynthInstance_TableEntry_answers___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_TableEntry_answers___default);
l_Lean_Meta_SynthInstance_State_result___default = _init_l_Lean_Meta_SynthInstance_State_result___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_State_result___default);
l_Lean_Meta_SynthInstance_State_generatorStack___default = _init_l_Lean_Meta_SynthInstance_State_generatorStack___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_State_generatorStack___default);
l_Lean_Meta_SynthInstance_State_resumeStack___default = _init_l_Lean_Meta_SynthInstance_State_resumeStack___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_State_resumeStack___default);
l_Lean_Meta_SynthInstance_State_tableEntries___default = _init_l_Lean_Meta_SynthInstance_State_tableEntries___default();
lean_mark_persistent(l_Lean_Meta_SynthInstance_State_tableEntries___default);
l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed__const__1 = _init_l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_SynthInstance_getInstances___lambda__1___boxed__const__1);
res = l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5152_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_initFn____x40_Lean_Meta_SynthInstance___hyg_5167_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
