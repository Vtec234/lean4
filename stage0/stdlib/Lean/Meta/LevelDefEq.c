// Lean compiler output
// Module: Lean.Meta.LevelDefEq
// Imports: Init Lean.Util.CollectMVars Lean.Util.ReplaceExpr Lean.Meta.Basic Lean.Meta.InferType
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getResetPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses_match__1(lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isListLevelDefEqAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Level_collectMVars(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_whnf___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed(lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_processPostponed_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_append___rarg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(uint8_t, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_decLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__2(lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__3(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPostponed___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isListLevelDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__1(lean_object*);
lean_object* l_Lean_Expr_setPPUniverses(lean_object*, uint8_t);
uint8_t l_Lean_Level_isParam(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__10(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getLevelAssignment_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_any(lean_object*, lean_object*);
lean_object* lean_level_mk_max_simp(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__4(lean_object*);
lean_object* l_Lean_Meta_isLevelDefEqAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___rarg(lean_object*);
lean_object* l_Lean_Meta_mkLevelErrorMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__11(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq_match__1(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___boxed(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___spec__1(lean_object*);
uint8_t l_Std_PersistentArray_isEmpty___rarg(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve_match__1(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLevelStuckErrorMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff_match__1(lean_object*);
size_t l_USize_mod(size_t, size_t);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Meta_decLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_processPostponed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelSucc(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit_match__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_decLevel___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_processPostponed_loop(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignableLevelMVar(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_toArray___rarg(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__2(lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isMVar(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqNoConstantApprox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isListLevelDefEqAux_match__1(lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__2(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses(lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l_Lean_Level_occurs(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__1(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__5(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getResetPostponed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_LevelDefEq___hyg_2791_(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_processPostponed(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEqAux_match__1(lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isMax(lean_object*);
extern lean_object* l_Lean_Expr_ReplaceImpl_initCache;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_3(x_2, x_5, x_6, x_8);
return x_9;
}
case 3:
{
lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_3(x_3, x_10, x_11, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_4, x_1);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get_uint64(x_1, 0);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
case 1:
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_2(x_5, x_10, x_12);
return x_13;
}
case 4:
{
lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_16 = lean_box_uint64(x_15);
x_17 = lean_apply_2(x_3, x_14, x_16);
return x_17;
}
case 5:
{
lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_20 = lean_box_uint64(x_19);
x_21 = lean_apply_2(x_4, x_18, x_20);
return x_21;
}
default: 
{
lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_apply_1(x_6, x_1);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f_match__4___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_11);
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(x_11, x_2, x_3, x_4, x_5, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_21);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_22, 0, x_26);
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_dec(x_22);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_22, 0);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_23);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_level_mk_max_simp(x_21, x_33);
lean_ctor_set(x_23, 0, x_34);
return x_22;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_23, 0);
lean_inc(x_35);
lean_dec(x_23);
x_36 = lean_level_mk_max_simp(x_21, x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_22, 0, x_37);
return x_22;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_22, 1);
lean_inc(x_38);
lean_dec(x_22);
x_39 = lean_ctor_get(x_23, 0);
lean_inc(x_39);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_40 = x_23;
} else {
 lean_dec_ref(x_23);
 x_40 = lean_box(0);
}
x_41 = lean_level_mk_max_simp(x_21, x_39);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(1, 1, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_38);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_21);
x_44 = !lean_is_exclusive(x_22);
if (x_44 == 0)
{
return x_22;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_22, 0);
x_46 = lean_ctor_get(x_22, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_22);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_12);
if (x_48 == 0)
{
return x_12;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_12, 0);
x_50 = lean_ctor_get(x_12, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_12);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
case 3:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
lean_dec(x_1);
x_54 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(x_52, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
lean_dec(x_53);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_54, 0);
lean_dec(x_57);
x_58 = lean_box(0);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_54, 1);
lean_inc(x_62);
lean_dec(x_54);
x_63 = lean_ctor_get(x_55, 0);
lean_inc(x_63);
lean_dec(x_55);
x_64 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(x_53, x_2, x_3, x_4, x_5, x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
lean_dec(x_63);
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_64, 0);
lean_dec(x_67);
x_68 = lean_box(0);
lean_ctor_set(x_64, 0, x_68);
return x_64;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_64, 1);
lean_inc(x_69);
lean_dec(x_64);
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
else
{
uint8_t x_72; 
x_72 = !lean_is_exclusive(x_64);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_64, 0);
lean_dec(x_73);
x_74 = !lean_is_exclusive(x_65);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_65, 0);
x_76 = lean_level_mk_max_simp(x_63, x_75);
lean_ctor_set(x_65, 0, x_76);
return x_64;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_65, 0);
lean_inc(x_77);
lean_dec(x_65);
x_78 = lean_level_mk_max_simp(x_63, x_77);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_64, 0, x_79);
return x_64;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_80 = lean_ctor_get(x_64, 1);
lean_inc(x_80);
lean_dec(x_64);
x_81 = lean_ctor_get(x_65, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 x_82 = x_65;
} else {
 lean_dec_ref(x_65);
 x_82 = lean_box(0);
}
x_83 = lean_level_mk_max_simp(x_63, x_81);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(1, 1, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_80);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_63);
x_86 = !lean_is_exclusive(x_64);
if (x_86 == 0)
{
return x_64;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_64, 0);
x_88 = lean_ctor_get(x_64, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_64);
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
uint8_t x_90; 
lean_dec(x_53);
x_90 = !lean_is_exclusive(x_54);
if (x_90 == 0)
{
return x_54;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_54, 0);
x_92 = lean_ctor_get(x_54, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_54);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
case 5:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_1, 0);
lean_inc(x_94);
lean_dec(x_1);
x_95 = lean_st_ref_get(x_5, x_6);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_st_ref_get(x_3, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = lean_ctor_get(x_98, 0);
lean_inc(x_100);
lean_dec(x_98);
x_101 = l_Lean_MetavarContext_getLevelAssignment_x3f(x_100, x_94);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; 
lean_inc(x_94);
x_102 = l_Lean_Meta_isReadOnlyLevelMVar(x_94, x_2, x_3, x_4, x_5, x_99);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
lean_dec(x_102);
x_106 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_3, x_4, x_5, x_105);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
lean_inc(x_107);
x_109 = l_Lean_mkLevelSucc(x_107);
x_110 = l_Lean_Meta_assignLevelMVar(x_94, x_109, x_2, x_3, x_4, x_5, x_108);
x_111 = !lean_is_exclusive(x_110);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_110, 0);
lean_dec(x_112);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_107);
lean_ctor_set(x_110, 0, x_113);
return x_110;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_110, 1);
lean_inc(x_114);
lean_dec(x_110);
x_115 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_115, 0, x_107);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
else
{
uint8_t x_117; 
lean_dec(x_94);
x_117 = !lean_is_exclusive(x_102);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_102, 0);
lean_dec(x_118);
x_119 = lean_box(0);
lean_ctor_set(x_102, 0, x_119);
return x_102;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_102, 1);
lean_inc(x_120);
lean_dec(x_102);
x_121 = lean_box(0);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_94);
x_123 = !lean_is_exclusive(x_102);
if (x_123 == 0)
{
return x_102;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_102, 0);
x_125 = lean_ctor_get(x_102, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_102);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
lean_object* x_127; 
lean_dec(x_94);
x_127 = lean_ctor_get(x_101, 0);
lean_inc(x_127);
lean_dec(x_101);
x_1 = x_127;
x_6 = x_99;
goto _start;
}
}
default: 
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_1);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_6);
return x_130;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_decLevel_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_decAux_x3f(x_1, x_2, x_3, x_4, x_5, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_5, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_take(x_3, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
lean_ctor_set(x_19, 0, x_12);
x_23 = lean_st_ref_set(x_3, x_19, x_20);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_19, 1);
x_31 = lean_ctor_get(x_19, 2);
x_32 = lean_ctor_get(x_19, 3);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_19);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set(x_33, 2, x_31);
lean_ctor_set(x_33, 3, x_32);
x_34 = lean_st_ref_set(x_3, x_33, x_20);
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
uint8_t x_39; 
lean_dec(x_12);
x_39 = !lean_is_exclusive(x_13);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_13, 0);
lean_dec(x_40);
x_41 = !lean_is_exclusive(x_14);
if (x_41 == 0)
{
return x_13;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_14, 0);
lean_inc(x_42);
lean_dec(x_14);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_13, 0, x_43);
return x_13;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_dec(x_13);
x_45 = lean_ctor_get(x_14, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_46 = x_14;
} else {
 lean_dec_ref(x_14);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 1, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_12);
x_49 = !lean_is_exclusive(x_13);
if (x_49 == 0)
{
return x_13;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_13, 0);
x_51 = lean_ctor_get(x_13, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_13);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
lean_object* l_Lean_Meta_decLevel_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_decLevel_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_decLevel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_Meta_decLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_Meta_decLevel_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_mk_string("invalid universe level, ");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string(" is not greater than 0");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_Meta_decLevel___spec__1(x_16, x_2, x_3, x_4, x_5, x_9);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
lean_dec(x_8);
lean_ctor_set(x_7, 0, x_20);
return x_7;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_dec(x_7);
x_22 = lean_ctor_get(x_8, 0);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_7);
if (x_24 == 0)
{
return x_7;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_7, 0);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_7);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_decLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_decLevel___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_decLevel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_decLevel(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_getDecLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_getLevel(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Meta_decLevel(x_8, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_3);
if (x_5 == 0)
{
x_2 = x_4;
goto _start;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = lean_level_eq(x_2, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Level_occurs(x_1, x_2);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(x_1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_4(x_3, x_6, x_7, x_9, x_2);
return x_10;
}
case 5:
{
lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_4(x_4, x_1, x_11, x_13, x_2);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_apply_2(x_5, x_1, x_2);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(x_1, x_4, x_3);
x_2 = x_5;
x_3 = x_6;
goto _start;
}
case 5:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_level_mk_max_simp(x_3, x_2);
return x_10;
}
else
{
lean_dec(x_2);
return x_3;
}
}
default: 
{
lean_object* x_11; 
x_11 = lean_level_mk_max_simp(x_3, x_2);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Level_isMax(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_9, 0, lean_box(0));
x_10 = lean_mk_string("assertion violation: ");
x_11 = lean_mk_string("v.isMax\n  ");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_mk_string("Lean.Meta.LevelDefEq");
x_14 = lean_mk_string("_private.Lean.Meta.LevelDefEq.0.Lean.Meta.solveSelfMax");
x_15 = lean_unsigned_to_nat(82u);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_13, x_14, x_15, x_16, x_12);
lean_dec(x_12);
lean_dec(x_14);
lean_dec(x_13);
x_18 = lean_panic_fn(x_9, x_17);
x_19 = lean_apply_5(x_18, x_3, x_4, x_5, x_6, x_7);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_4, x_5, x_6, x_7);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(x_1, x_2, x_21);
x_24 = l_Lean_Meta_assignLevelMVar(x_1, x_23, x_3, x_4, x_5, x_6, x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_24;
}
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_3, x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_take(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_13, 3);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_mk_string("[");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
lean_inc(x_1);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_1);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("] ");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_10);
x_28 = lean_mk_string("");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_30);
lean_inc(x_8);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_8);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Std_PersistentArray_push___rarg(x_19, x_32);
lean_ctor_set(x_14, 0, x_33);
x_34 = lean_st_ref_set(x_6, x_13, x_15);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_34, 0, x_37);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_41 = lean_ctor_get_uint8(x_14, sizeof(void*)*1);
x_42 = lean_ctor_get(x_14, 0);
lean_inc(x_42);
lean_dec(x_14);
x_43 = lean_mk_string("[");
x_44 = l_Lean_stringToMessageData(x_43);
lean_dec(x_43);
lean_inc(x_1);
x_45 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_45, 0, x_1);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_mk_string("] ");
x_48 = l_Lean_stringToMessageData(x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_10);
x_51 = lean_mk_string("");
x_52 = l_Lean_stringToMessageData(x_51);
lean_dec(x_51);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_54, 0, x_1);
lean_ctor_set(x_54, 1, x_53);
lean_inc(x_8);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_8);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Std_PersistentArray_push___rarg(x_42, x_55);
x_57 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set_uint8(x_57, sizeof(void*)*1, x_41);
lean_ctor_set(x_13, 3, x_57);
x_58 = lean_st_ref_set(x_6, x_13, x_15);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_60 = x_58;
} else {
 lean_dec_ref(x_58);
 x_60 = lean_box(0);
}
x_61 = lean_box(0);
if (lean_is_scalar(x_60)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_60;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_63 = lean_ctor_get(x_13, 0);
x_64 = lean_ctor_get(x_13, 1);
x_65 = lean_ctor_get(x_13, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_13);
x_66 = lean_ctor_get_uint8(x_14, sizeof(void*)*1);
x_67 = lean_ctor_get(x_14, 0);
lean_inc(x_67);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_68 = x_14;
} else {
 lean_dec_ref(x_14);
 x_68 = lean_box(0);
}
x_69 = lean_mk_string("[");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
lean_inc(x_1);
x_71 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_71, 0, x_1);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("] ");
x_74 = l_Lean_stringToMessageData(x_73);
lean_dec(x_73);
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_10);
x_77 = lean_mk_string("");
x_78 = l_Lean_stringToMessageData(x_77);
lean_dec(x_77);
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_8);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_8);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Std_PersistentArray_push___rarg(x_67, x_81);
if (lean_is_scalar(x_68)) {
 x_83 = lean_alloc_ctor(0, 1, 1);
} else {
 x_83 = x_68;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set_uint8(x_83, sizeof(void*)*1, x_66);
x_84 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_84, 0, x_63);
lean_ctor_set(x_84, 1, x_64);
lean_ctor_set(x_84, 2, x_65);
lean_ctor_set(x_84, 3, x_83);
x_85 = lean_st_ref_set(x_6, x_84, x_15);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_87 = x_85;
} else {
 lean_dec_ref(x_85);
 x_87 = lean_box(0);
}
x_88 = lean_box(0);
if (lean_is_scalar(x_87)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_87;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
return x_89;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_Lean_checkTraceOption(x_7, x_1);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_8 = lean_ctor_get(x_5, 3);
x_41 = lean_box(0);
x_42 = lean_mk_string("Meta");
x_43 = lean_name_mk_string(x_41, x_42);
x_44 = lean_mk_string("isLevelDefEq");
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = lean_mk_string("stuck");
x_47 = lean_name_mk_string(x_45, x_46);
x_63 = lean_st_ref_get(x_6, x_7);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_64, 3);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_ctor_get_uint8(x_65, sizeof(void*)*1);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
lean_dec(x_63);
x_68 = 0;
x_48 = x_68;
x_49 = x_67;
goto block_62;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
lean_dec(x_63);
lean_inc(x_47);
x_70 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_47, x_3, x_4, x_5, x_6, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_unbox(x_71);
lean_dec(x_71);
x_48 = x_73;
x_49 = x_72;
goto block_62;
}
block_40:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_6, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_4, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 3);
x_17 = lean_ctor_get(x_3, 3);
lean_inc(x_17);
lean_inc(x_8);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set(x_18, 2, x_2);
lean_ctor_set(x_18, 3, x_17);
x_19 = l_Std_PersistentArray_push___rarg(x_16, x_18);
lean_ctor_set(x_13, 3, x_19);
x_20 = lean_st_ref_set(x_4, x_13, x_14);
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
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
x_29 = lean_ctor_get(x_13, 2);
x_30 = lean_ctor_get(x_13, 3);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_31 = lean_ctor_get(x_3, 3);
lean_inc(x_31);
lean_inc(x_8);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_8);
lean_ctor_set(x_32, 1, x_1);
lean_ctor_set(x_32, 2, x_2);
lean_ctor_set(x_32, 3, x_31);
x_33 = l_Std_PersistentArray_push___rarg(x_30, x_32);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_28);
lean_ctor_set(x_34, 2, x_29);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_st_ref_set(x_4, x_34, x_14);
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
x_38 = lean_box(0);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
block_62:
{
if (x_48 == 0)
{
lean_dec(x_47);
x_9 = x_49;
goto block_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_50 = lean_mk_string("");
x_51 = l_Lean_stringToMessageData(x_50);
lean_dec(x_50);
lean_inc(x_1);
x_52 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_52, 0, x_1);
lean_inc(x_51);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_mk_string(" =?= ");
x_55 = l_Lean_stringToMessageData(x_54);
lean_dec(x_54);
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_2);
x_57 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_57, 0, x_2);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_51);
x_60 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_47, x_59, x_3, x_4, x_5, x_6, x_49);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_9 = x_61;
goto block_40;
}
}
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_7);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 1:
{
uint64_t x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_ctor_get_uint64(x_1, 0);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_12 = lean_box_uint64(x_9);
x_13 = lean_box_uint64(x_11);
x_14 = lean_apply_3(x_6, x_12, x_10, x_13);
return x_14;
}
case 2:
{
uint64_t x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_ctor_get_uint64(x_1, 0);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_19 = lean_box_uint64(x_15);
x_20 = lean_box_uint64(x_18);
x_21 = lean_apply_4(x_4, x_19, x_16, x_17, x_20);
return x_21;
}
case 3:
{
uint64_t x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_22 = lean_ctor_get_uint64(x_1, 0);
lean_dec(x_1);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_26 = lean_box_uint64(x_22);
x_27 = lean_box_uint64(x_25);
x_28 = lean_apply_4(x_5, x_26, x_23, x_24, x_27);
return x_28;
}
default: 
{
lean_object* x_29; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_29 = lean_apply_2(x_8, x_1, x_2);
return x_29;
}
}
}
case 1:
{
lean_object* x_30; uint64_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_32 = lean_box_uint64(x_31);
x_33 = lean_apply_3(x_7, x_30, x_32, x_2);
return x_33;
}
case 5:
{
lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_36 = lean_box_uint64(x_35);
x_37 = lean_apply_3(x_3, x_34, x_36, x_2);
return x_37;
}
default: 
{
lean_object* x_38; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = lean_apply_2(x_8, x_1, x_2);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve_match__1___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isLevelDefEqAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_9 = lean_box_uint64(x_6);
x_10 = lean_box_uint64(x_8);
x_11 = lean_apply_4(x_3, x_5, x_9, x_7, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_apply_2(x_4, x_1, x_2);
return x_12;
}
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_apply_2(x_4, x_1, x_2);
return x_13;
}
}
}
lean_object* l_Lean_Meta_isLevelDefEqAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isLevelDefEqAux_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_1);
switch (lean_obj_tag(x_2)) {
case 1:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_levelZero;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_Meta_isLevelDefEqAux(x_13, x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = lean_unbox(x_15);
lean_dec(x_15);
x_20 = l_Bool_toLBool(x_19);
x_21 = lean_box(x_20);
lean_ctor_set(x_14, 0, x_21);
return x_14;
}
else
{
lean_object* x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_unbox(x_15);
lean_dec(x_15);
x_24 = l_Bool_toLBool(x_23);
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
x_28 = l_Lean_Meta_isLevelDefEqAux(x_13, x_12, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = l_Bool_toLBool(x_31);
x_33 = lean_box(x_32);
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_unbox(x_34);
lean_dec(x_34);
x_37 = l_Bool_toLBool(x_36);
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
return x_39;
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_28);
if (x_40 == 0)
{
return x_28;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_28, 0);
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_28);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_14);
if (x_44 == 0)
{
return x_14;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_14, 0);
x_46 = lean_ctor_get(x_14, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_14);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
case 3:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_2, 1);
lean_inc(x_48);
lean_dec(x_2);
x_49 = l_Lean_levelZero;
x_50 = l_Lean_Meta_isLevelDefEqAux(x_49, x_48, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; uint8_t x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
x_54 = l_Bool_toLBool(x_53);
x_55 = lean_box(x_54);
lean_ctor_set(x_50, 0, x_55);
return x_50;
}
else
{
lean_object* x_56; lean_object* x_57; uint8_t x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_50, 0);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_50);
x_58 = lean_unbox(x_56);
lean_dec(x_56);
x_59 = l_Bool_toLBool(x_58);
x_60 = lean_box(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_57);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_50);
if (x_62 == 0)
{
return x_50;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_50, 0);
x_64 = lean_ctor_get(x_50, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_50);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
default: 
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = 2;
x_67 = lean_box(x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_7);
return x_68;
}
}
}
case 1:
{
lean_object* x_69; uint8_t x_70; 
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
lean_dec(x_1);
x_70 = l_Lean_Level_isParam(x_2);
if (x_70 == 0)
{
uint8_t x_71; 
x_71 = l_Lean_Level_isMVar(x_69);
if (x_71 == 0)
{
lean_object* x_72; 
x_72 = l_Lean_Meta_decLevel_x3f(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
if (lean_obj_tag(x_73) == 0)
{
uint8_t x_74; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_74 = !lean_is_exclusive(x_72);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_72, 0);
lean_dec(x_75);
x_76 = 2;
x_77 = lean_box(x_76);
lean_ctor_set(x_72, 0, x_77);
return x_72;
}
else
{
lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_72, 1);
lean_inc(x_78);
lean_dec(x_72);
x_79 = 2;
x_80 = lean_box(x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_72, 1);
lean_inc(x_82);
lean_dec(x_72);
x_83 = lean_ctor_get(x_73, 0);
lean_inc(x_83);
lean_dec(x_73);
x_84 = l_Lean_Meta_isLevelDefEqAux(x_69, x_83, x_3, x_4, x_5, x_6, x_82);
if (lean_obj_tag(x_84) == 0)
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; uint8_t x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_84, 0);
x_87 = lean_unbox(x_86);
lean_dec(x_86);
x_88 = l_Bool_toLBool(x_87);
x_89 = lean_box(x_88);
lean_ctor_set(x_84, 0, x_89);
return x_84;
}
else
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_ctor_get(x_84, 0);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_84);
x_92 = lean_unbox(x_90);
lean_dec(x_90);
x_93 = l_Bool_toLBool(x_92);
x_94 = lean_box(x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_91);
return x_95;
}
}
else
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_84);
if (x_96 == 0)
{
return x_84;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_84, 0);
x_98 = lean_ctor_get(x_84, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_84);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_100 = !lean_is_exclusive(x_72);
if (x_100 == 0)
{
return x_72;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_72, 0);
x_102 = lean_ctor_get(x_72, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_72);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
x_104 = l_Lean_Level_occurs(x_69, x_2);
if (x_104 == 0)
{
lean_object* x_105; 
x_105 = l_Lean_Meta_decLevel_x3f(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
if (lean_obj_tag(x_106) == 0)
{
uint8_t x_107; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_107 = !lean_is_exclusive(x_105);
if (x_107 == 0)
{
lean_object* x_108; uint8_t x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_105, 0);
lean_dec(x_108);
x_109 = 2;
x_110 = lean_box(x_109);
lean_ctor_set(x_105, 0, x_110);
return x_105;
}
else
{
lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_105, 1);
lean_inc(x_111);
lean_dec(x_105);
x_112 = 2;
x_113 = lean_box(x_112);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_111);
return x_114;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_105, 1);
lean_inc(x_115);
lean_dec(x_105);
x_116 = lean_ctor_get(x_106, 0);
lean_inc(x_116);
lean_dec(x_106);
x_117 = l_Lean_Meta_isLevelDefEqAux(x_69, x_116, x_3, x_4, x_5, x_6, x_115);
if (lean_obj_tag(x_117) == 0)
{
uint8_t x_118; 
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
lean_object* x_119; uint8_t x_120; uint8_t x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_unbox(x_119);
lean_dec(x_119);
x_121 = l_Bool_toLBool(x_120);
x_122 = lean_box(x_121);
lean_ctor_set(x_117, 0, x_122);
return x_117;
}
else
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
x_123 = lean_ctor_get(x_117, 0);
x_124 = lean_ctor_get(x_117, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_117);
x_125 = lean_unbox(x_123);
lean_dec(x_123);
x_126 = l_Bool_toLBool(x_125);
x_127 = lean_box(x_126);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_124);
return x_128;
}
}
else
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_117);
if (x_129 == 0)
{
return x_117;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_117, 0);
x_131 = lean_ctor_get(x_117, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_117);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
}
else
{
uint8_t x_133; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_133 = !lean_is_exclusive(x_105);
if (x_133 == 0)
{
return x_105;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_105, 0);
x_135 = lean_ctor_get(x_105, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_105);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
else
{
uint8_t x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_137 = 2;
x_138 = lean_box(x_137);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_7);
return x_139;
}
}
}
else
{
uint8_t x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_140 = 0;
x_141 = lean_box(x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_7);
return x_142;
}
}
case 5:
{
lean_object* x_143; lean_object* x_144; 
x_143 = lean_ctor_get(x_1, 0);
lean_inc(x_143);
x_144 = l_Lean_Meta_isReadOnlyLevelMVar(x_143, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; uint8_t x_146; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_unbox(x_145);
lean_dec(x_145);
if (x_146 == 0)
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_144);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_148 = lean_ctor_get(x_144, 1);
x_149 = lean_ctor_get(x_144, 0);
lean_dec(x_149);
x_150 = l_Lean_Level_occurs(x_1, x_2);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; uint8_t x_153; 
lean_free_object(x_144);
x_151 = l_Lean_Level_mvarId_x21(x_1);
lean_dec(x_1);
x_152 = l_Lean_Meta_assignLevelMVar(x_151, x_2, x_3, x_4, x_5, x_6, x_148);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
lean_object* x_154; uint8_t x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_152, 0);
lean_dec(x_154);
x_155 = 1;
x_156 = lean_box(x_155);
lean_ctor_set(x_152, 0, x_156);
return x_152;
}
else
{
lean_object* x_157; uint8_t x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_152, 1);
lean_inc(x_157);
lean_dec(x_152);
x_158 = 1;
x_159 = lean_box(x_158);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_157);
return x_160;
}
}
else
{
uint8_t x_161; 
x_161 = l_Lean_Level_isMax(x_2);
if (x_161 == 0)
{
uint8_t x_162; lean_object* x_163; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = 2;
x_163 = lean_box(x_162);
lean_ctor_set(x_144, 0, x_163);
return x_144;
}
else
{
uint8_t x_164; 
x_164 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(x_1, x_2);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; 
lean_free_object(x_144);
x_165 = l_Lean_Level_mvarId_x21(x_1);
lean_dec(x_1);
x_166 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(x_165, x_2, x_3, x_4, x_5, x_6, x_148);
if (lean_obj_tag(x_166) == 0)
{
uint8_t x_167; 
x_167 = !lean_is_exclusive(x_166);
if (x_167 == 0)
{
lean_object* x_168; uint8_t x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_166, 0);
lean_dec(x_168);
x_169 = 1;
x_170 = lean_box(x_169);
lean_ctor_set(x_166, 0, x_170);
return x_166;
}
else
{
lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; 
x_171 = lean_ctor_get(x_166, 1);
lean_inc(x_171);
lean_dec(x_166);
x_172 = 1;
x_173 = lean_box(x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_171);
return x_174;
}
}
else
{
uint8_t x_175; 
x_175 = !lean_is_exclusive(x_166);
if (x_175 == 0)
{
return x_166;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_166, 0);
x_177 = lean_ctor_get(x_166, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_166);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; lean_object* x_180; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_179 = 2;
x_180 = lean_box(x_179);
lean_ctor_set(x_144, 0, x_180);
return x_144;
}
}
}
}
else
{
lean_object* x_181; uint8_t x_182; 
x_181 = lean_ctor_get(x_144, 1);
lean_inc(x_181);
lean_dec(x_144);
x_182 = l_Lean_Level_occurs(x_1, x_2);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; lean_object* x_188; lean_object* x_189; 
x_183 = l_Lean_Level_mvarId_x21(x_1);
lean_dec(x_1);
x_184 = l_Lean_Meta_assignLevelMVar(x_183, x_2, x_3, x_4, x_5, x_6, x_181);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_185 = lean_ctor_get(x_184, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 lean_ctor_release(x_184, 1);
 x_186 = x_184;
} else {
 lean_dec_ref(x_184);
 x_186 = lean_box(0);
}
x_187 = 1;
x_188 = lean_box(x_187);
if (lean_is_scalar(x_186)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_186;
}
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_185);
return x_189;
}
else
{
uint8_t x_190; 
x_190 = l_Lean_Level_isMax(x_2);
if (x_190 == 0)
{
uint8_t x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_191 = 2;
x_192 = lean_box(x_191);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_181);
return x_193;
}
else
{
uint8_t x_194; 
x_194 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(x_1, x_2);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; 
x_195 = l_Lean_Level_mvarId_x21(x_1);
lean_dec(x_1);
x_196 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(x_195, x_2, x_3, x_4, x_5, x_6, x_181);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; 
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
x_199 = 1;
x_200 = lean_box(x_199);
if (lean_is_scalar(x_198)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_198;
}
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_197);
return x_201;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_202 = lean_ctor_get(x_196, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_196, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_204 = x_196;
} else {
 lean_dec_ref(x_196);
 x_204 = lean_box(0);
}
if (lean_is_scalar(x_204)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_204;
}
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_203);
return x_205;
}
}
else
{
uint8_t x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_206 = 2;
x_207 = lean_box(x_206);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_181);
return x_208;
}
}
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_209 = !lean_is_exclusive(x_144);
if (x_209 == 0)
{
lean_object* x_210; uint8_t x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_144, 0);
lean_dec(x_210);
x_211 = 2;
x_212 = lean_box(x_211);
lean_ctor_set(x_144, 0, x_212);
return x_144;
}
else
{
lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; 
x_213 = lean_ctor_get(x_144, 1);
lean_inc(x_213);
lean_dec(x_144);
x_214 = 2;
x_215 = lean_box(x_214);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_213);
return x_216;
}
}
}
else
{
uint8_t x_217; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_217 = !lean_is_exclusive(x_144);
if (x_217 == 0)
{
return x_144;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_144, 0);
x_219 = lean_ctor_get(x_144, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_144);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
default: 
{
uint8_t x_221; lean_object* x_222; lean_object* x_223; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_221 = 2;
x_222 = lean_box(x_221);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_7);
return x_223;
}
}
}
}
lean_object* l_Lean_Meta_isLevelDefEqAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Level_getLevelOffset(x_1);
x_9 = l_Lean_Level_getLevelOffset(x_2);
x_10 = lean_level_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_353; lean_object* x_354; uint8_t x_355; lean_object* x_356; lean_object* x_370; lean_object* x_371; lean_object* x_372; uint8_t x_373; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Meta");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("isLevelDefEq");
x_15 = lean_name_mk_string(x_13, x_14);
x_353 = lean_mk_string("step");
lean_inc(x_15);
x_354 = lean_name_mk_string(x_15, x_353);
x_370 = lean_st_ref_get(x_6, x_7);
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_371, 3);
lean_inc(x_372);
lean_dec(x_371);
x_373 = lean_ctor_get_uint8(x_372, sizeof(void*)*1);
lean_dec(x_372);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; 
x_374 = lean_ctor_get(x_370, 1);
lean_inc(x_374);
lean_dec(x_370);
x_375 = 0;
x_355 = x_375;
x_356 = x_374;
goto block_369;
}
else
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; uint8_t x_380; 
x_376 = lean_ctor_get(x_370, 1);
lean_inc(x_376);
lean_dec(x_370);
lean_inc(x_354);
x_377 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_354, x_3, x_4, x_5, x_6, x_376);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
x_379 = lean_ctor_get(x_377, 1);
lean_inc(x_379);
lean_dec(x_377);
x_380 = lean_unbox(x_378);
lean_dec(x_378);
x_355 = x_380;
x_356 = x_379;
goto block_369;
}
block_352:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_inc(x_1);
x_17 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Level_normalize(x_18);
lean_dec(x_18);
lean_inc(x_2);
x_21 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Level_normalize(x_22);
lean_dec(x_22);
x_25 = lean_level_eq(x_1, x_20);
if (x_25 == 0)
{
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_20;
x_2 = x_24;
x_7 = x_23;
goto _start;
}
else
{
uint8_t x_27; 
x_27 = lean_level_eq(x_2, x_24);
if (x_27 == 0)
{
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_20;
x_2 = x_24;
x_7 = x_23;
goto _start;
}
else
{
lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_20);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_29 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
x_33 = 2;
x_34 = lean_unbox(x_31);
x_35 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_34, x_33);
if (x_35 == 0)
{
uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = 1;
x_37 = lean_unbox(x_31);
lean_dec(x_31);
x_38 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_37, x_36);
x_39 = lean_box(x_38);
lean_ctor_set(x_29, 0, x_39);
return x_29;
}
else
{
lean_object* x_40; 
lean_free_object(x_29);
lean_dec(x_31);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_40 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_32);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
x_44 = lean_unbox(x_42);
x_45 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_44, x_33);
if (x_45 == 0)
{
uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = 1;
x_47 = lean_unbox(x_42);
lean_dec(x_42);
x_48 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_47, x_46);
x_49 = lean_box(x_48);
lean_ctor_set(x_40, 0, x_49);
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_40);
lean_dec(x_42);
x_50 = lean_st_ref_get(x_6, x_43);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_st_ref_get(x_4, x_51);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_56);
x_57 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_56, x_1);
if (x_57 == 0)
{
uint8_t x_58; 
x_58 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_56, x_2);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_3, 0);
lean_inc(x_91);
x_92 = lean_ctor_get_uint8(x_91, 4);
lean_dec(x_91);
if (x_92 == 0)
{
uint8_t x_93; lean_object* x_94; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = 0;
x_94 = lean_box(x_93);
lean_ctor_set(x_52, 0, x_94);
return x_52;
}
else
{
uint8_t x_95; 
x_95 = l_Lean_Level_isMVar(x_1);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = l_Lean_Level_isMVar(x_2);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_97 = 0;
x_98 = lean_box(x_97);
lean_ctor_set(x_52, 0, x_98);
return x_52;
}
else
{
lean_object* x_99; 
lean_free_object(x_52);
x_99 = lean_box(0);
x_59 = x_99;
goto block_90;
}
}
else
{
lean_object* x_100; 
lean_free_object(x_52);
x_100 = lean_box(0);
x_59 = x_100;
goto block_90;
}
}
block_90:
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_59);
x_60 = lean_mk_string("stuck");
x_61 = lean_name_mk_string(x_15, x_60);
x_79 = lean_st_ref_get(x_6, x_55);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_80, 3);
lean_inc(x_81);
lean_dec(x_80);
x_82 = lean_ctor_get_uint8(x_81, sizeof(void*)*1);
lean_dec(x_81);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_ctor_get(x_79, 1);
lean_inc(x_83);
lean_dec(x_79);
x_84 = 0;
x_62 = x_84;
x_63 = x_83;
goto block_78;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_85 = lean_ctor_get(x_79, 1);
lean_inc(x_85);
lean_dec(x_79);
lean_inc(x_61);
x_86 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_61, x_3, x_4, x_5, x_6, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_unbox(x_87);
lean_dec(x_87);
x_62 = x_89;
x_63 = x_88;
goto block_78;
}
block_78:
{
if (x_62 == 0)
{
lean_object* x_64; 
lean_dec(x_61);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_63);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_65 = lean_mk_string("");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
x_67 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_67, 0, x_1);
lean_inc(x_66);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string(" =?= ");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_72, 0, x_2);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_66);
x_75 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_61, x_74, x_3, x_4, x_5, x_6, x_63);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_76);
return x_77;
}
}
}
}
else
{
lean_object* x_101; uint8_t x_102; 
lean_free_object(x_52);
lean_dec(x_15);
x_101 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_55);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_102 = !lean_is_exclusive(x_101);
if (x_102 == 0)
{
lean_object* x_103; uint8_t x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_101, 0);
lean_dec(x_103);
x_104 = 1;
x_105 = lean_box(x_104);
lean_ctor_set(x_101, 0, x_105);
return x_101;
}
else
{
lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_101, 1);
lean_inc(x_106);
lean_dec(x_101);
x_107 = 1;
x_108 = lean_box(x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_106);
return x_109;
}
}
}
else
{
lean_object* x_110; uint8_t x_111; 
lean_dec(x_56);
lean_free_object(x_52);
lean_dec(x_15);
x_110 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_55);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_111 = !lean_is_exclusive(x_110);
if (x_111 == 0)
{
lean_object* x_112; uint8_t x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_110, 0);
lean_dec(x_112);
x_113 = 1;
x_114 = lean_box(x_113);
lean_ctor_set(x_110, 0, x_114);
return x_110;
}
else
{
lean_object* x_115; uint8_t x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_110, 1);
lean_inc(x_115);
lean_dec(x_110);
x_116 = 1;
x_117 = lean_box(x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_119 = lean_ctor_get(x_52, 0);
x_120 = lean_ctor_get(x_52, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_52);
x_121 = lean_ctor_get(x_119, 0);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_121);
x_122 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_121, x_1);
if (x_122 == 0)
{
uint8_t x_123; 
x_123 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_121, x_2);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_156; uint8_t x_157; 
x_156 = lean_ctor_get(x_3, 0);
lean_inc(x_156);
x_157 = lean_ctor_get_uint8(x_156, 4);
lean_dec(x_156);
if (x_157 == 0)
{
uint8_t x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_158 = 0;
x_159 = lean_box(x_158);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_120);
return x_160;
}
else
{
uint8_t x_161; 
x_161 = l_Lean_Level_isMVar(x_1);
if (x_161 == 0)
{
uint8_t x_162; 
x_162 = l_Lean_Level_isMVar(x_2);
if (x_162 == 0)
{
uint8_t x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_163 = 0;
x_164 = lean_box(x_163);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_120);
return x_165;
}
else
{
lean_object* x_166; 
x_166 = lean_box(0);
x_124 = x_166;
goto block_155;
}
}
else
{
lean_object* x_167; 
x_167 = lean_box(0);
x_124 = x_167;
goto block_155;
}
}
block_155:
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
lean_dec(x_124);
x_125 = lean_mk_string("stuck");
x_126 = lean_name_mk_string(x_15, x_125);
x_144 = lean_st_ref_get(x_6, x_120);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_145, 3);
lean_inc(x_146);
lean_dec(x_145);
x_147 = lean_ctor_get_uint8(x_146, sizeof(void*)*1);
lean_dec(x_146);
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; 
x_148 = lean_ctor_get(x_144, 1);
lean_inc(x_148);
lean_dec(x_144);
x_149 = 0;
x_127 = x_149;
x_128 = x_148;
goto block_143;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_150 = lean_ctor_get(x_144, 1);
lean_inc(x_150);
lean_dec(x_144);
lean_inc(x_126);
x_151 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_126, x_3, x_4, x_5, x_6, x_150);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = lean_unbox(x_152);
lean_dec(x_152);
x_127 = x_154;
x_128 = x_153;
goto block_143;
}
block_143:
{
if (x_127 == 0)
{
lean_object* x_129; 
lean_dec(x_126);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_129 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_128);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_130 = lean_mk_string("");
x_131 = l_Lean_stringToMessageData(x_130);
lean_dec(x_130);
x_132 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_132, 0, x_1);
lean_inc(x_131);
x_133 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_mk_string(" =?= ");
x_135 = l_Lean_stringToMessageData(x_134);
lean_dec(x_134);
x_136 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_137, 0, x_2);
x_138 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_131);
x_140 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_126, x_139, x_3, x_4, x_5, x_6, x_128);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
lean_dec(x_140);
x_142 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_141);
return x_142;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_15);
x_168 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_120);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_170 = x_168;
} else {
 lean_dec_ref(x_168);
 x_170 = lean_box(0);
}
x_171 = 1;
x_172 = lean_box(x_171);
if (lean_is_scalar(x_170)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_170;
}
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_169);
return x_173;
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_121);
lean_dec(x_15);
x_174 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_120);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_176 = x_174;
} else {
 lean_dec_ref(x_174);
 x_176 = lean_box(0);
}
x_177 = 1;
x_178 = lean_box(x_177);
if (lean_is_scalar(x_176)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_176;
}
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_175);
return x_179;
}
}
}
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; uint8_t x_183; 
x_180 = lean_ctor_get(x_40, 0);
x_181 = lean_ctor_get(x_40, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_40);
x_182 = lean_unbox(x_180);
x_183 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_182, x_33);
if (x_183 == 0)
{
uint8_t x_184; uint8_t x_185; uint8_t x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_184 = 1;
x_185 = lean_unbox(x_180);
lean_dec(x_180);
x_186 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_185, x_184);
x_187 = lean_box(x_186);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_181);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
lean_dec(x_180);
x_189 = lean_st_ref_get(x_6, x_181);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
lean_dec(x_189);
x_191 = lean_st_ref_get(x_4, x_190);
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
x_195 = lean_ctor_get(x_192, 0);
lean_inc(x_195);
lean_dec(x_192);
lean_inc(x_195);
x_196 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_195, x_1);
if (x_196 == 0)
{
uint8_t x_197; 
x_197 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_195, x_2);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_230; uint8_t x_231; 
x_230 = lean_ctor_get(x_3, 0);
lean_inc(x_230);
x_231 = lean_ctor_get_uint8(x_230, 4);
lean_dec(x_230);
if (x_231 == 0)
{
uint8_t x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_232 = 0;
x_233 = lean_box(x_232);
if (lean_is_scalar(x_194)) {
 x_234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_234 = x_194;
}
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_193);
return x_234;
}
else
{
uint8_t x_235; 
x_235 = l_Lean_Level_isMVar(x_1);
if (x_235 == 0)
{
uint8_t x_236; 
x_236 = l_Lean_Level_isMVar(x_2);
if (x_236 == 0)
{
uint8_t x_237; lean_object* x_238; lean_object* x_239; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_237 = 0;
x_238 = lean_box(x_237);
if (lean_is_scalar(x_194)) {
 x_239 = lean_alloc_ctor(0, 2, 0);
} else {
 x_239 = x_194;
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_193);
return x_239;
}
else
{
lean_object* x_240; 
lean_dec(x_194);
x_240 = lean_box(0);
x_198 = x_240;
goto block_229;
}
}
else
{
lean_object* x_241; 
lean_dec(x_194);
x_241 = lean_box(0);
x_198 = x_241;
goto block_229;
}
}
block_229:
{
lean_object* x_199; lean_object* x_200; uint8_t x_201; lean_object* x_202; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
lean_dec(x_198);
x_199 = lean_mk_string("stuck");
x_200 = lean_name_mk_string(x_15, x_199);
x_218 = lean_st_ref_get(x_6, x_193);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_219, 3);
lean_inc(x_220);
lean_dec(x_219);
x_221 = lean_ctor_get_uint8(x_220, sizeof(void*)*1);
lean_dec(x_220);
if (x_221 == 0)
{
lean_object* x_222; uint8_t x_223; 
x_222 = lean_ctor_get(x_218, 1);
lean_inc(x_222);
lean_dec(x_218);
x_223 = 0;
x_201 = x_223;
x_202 = x_222;
goto block_217;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_224 = lean_ctor_get(x_218, 1);
lean_inc(x_224);
lean_dec(x_218);
lean_inc(x_200);
x_225 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_200, x_3, x_4, x_5, x_6, x_224);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_unbox(x_226);
lean_dec(x_226);
x_201 = x_228;
x_202 = x_227;
goto block_217;
}
block_217:
{
if (x_201 == 0)
{
lean_object* x_203; 
lean_dec(x_200);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_203 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_202);
return x_203;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_204 = lean_mk_string("");
x_205 = l_Lean_stringToMessageData(x_204);
lean_dec(x_204);
x_206 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_206, 0, x_1);
lean_inc(x_205);
x_207 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_mk_string(" =?= ");
x_209 = l_Lean_stringToMessageData(x_208);
lean_dec(x_208);
x_210 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_211, 0, x_2);
x_212 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_205);
x_214 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_200, x_213, x_3, x_4, x_5, x_6, x_202);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_215 = lean_ctor_get(x_214, 1);
lean_inc(x_215);
lean_dec(x_214);
x_216 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_215);
return x_216;
}
}
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; uint8_t x_245; lean_object* x_246; lean_object* x_247; 
lean_dec(x_194);
lean_dec(x_15);
x_242 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_193);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 lean_ctor_release(x_242, 1);
 x_244 = x_242;
} else {
 lean_dec_ref(x_242);
 x_244 = lean_box(0);
}
x_245 = 1;
x_246 = lean_box(x_245);
if (lean_is_scalar(x_244)) {
 x_247 = lean_alloc_ctor(0, 2, 0);
} else {
 x_247 = x_244;
}
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_243);
return x_247;
}
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_195);
lean_dec(x_194);
lean_dec(x_15);
x_248 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_193);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_249 = lean_ctor_get(x_248, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 x_250 = x_248;
} else {
 lean_dec_ref(x_248);
 x_250 = lean_box(0);
}
x_251 = 1;
x_252 = lean_box(x_251);
if (lean_is_scalar(x_250)) {
 x_253 = lean_alloc_ctor(0, 2, 0);
} else {
 x_253 = x_250;
}
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_249);
return x_253;
}
}
}
}
else
{
uint8_t x_254; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_254 = !lean_is_exclusive(x_40);
if (x_254 == 0)
{
return x_40;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_40, 0);
x_256 = lean_ctor_get(x_40, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_40);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
}
else
{
lean_object* x_258; lean_object* x_259; uint8_t x_260; uint8_t x_261; uint8_t x_262; 
x_258 = lean_ctor_get(x_29, 0);
x_259 = lean_ctor_get(x_29, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_29);
x_260 = 2;
x_261 = lean_unbox(x_258);
x_262 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_261, x_260);
if (x_262 == 0)
{
uint8_t x_263; uint8_t x_264; uint8_t x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_263 = 1;
x_264 = lean_unbox(x_258);
lean_dec(x_258);
x_265 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_264, x_263);
x_266 = lean_box(x_265);
x_267 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_259);
return x_267;
}
else
{
lean_object* x_268; 
lean_dec(x_258);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_268 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_259);
if (lean_obj_tag(x_268) == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; uint8_t x_273; 
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_268, 1);
lean_inc(x_270);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 x_271 = x_268;
} else {
 lean_dec_ref(x_268);
 x_271 = lean_box(0);
}
x_272 = lean_unbox(x_269);
x_273 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_272, x_260);
if (x_273 == 0)
{
uint8_t x_274; uint8_t x_275; uint8_t x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_274 = 1;
x_275 = lean_unbox(x_269);
lean_dec(x_269);
x_276 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_275, x_274);
x_277 = lean_box(x_276);
if (lean_is_scalar(x_271)) {
 x_278 = lean_alloc_ctor(0, 2, 0);
} else {
 x_278 = x_271;
}
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_270);
return x_278;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; 
lean_dec(x_271);
lean_dec(x_269);
x_279 = lean_st_ref_get(x_6, x_270);
x_280 = lean_ctor_get(x_279, 1);
lean_inc(x_280);
lean_dec(x_279);
x_281 = lean_st_ref_get(x_4, x_280);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_281)) {
 lean_ctor_release(x_281, 0);
 lean_ctor_release(x_281, 1);
 x_284 = x_281;
} else {
 lean_dec_ref(x_281);
 x_284 = lean_box(0);
}
x_285 = lean_ctor_get(x_282, 0);
lean_inc(x_285);
lean_dec(x_282);
lean_inc(x_285);
x_286 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_285, x_1);
if (x_286 == 0)
{
uint8_t x_287; 
x_287 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_285, x_2);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_320; uint8_t x_321; 
x_320 = lean_ctor_get(x_3, 0);
lean_inc(x_320);
x_321 = lean_ctor_get_uint8(x_320, 4);
lean_dec(x_320);
if (x_321 == 0)
{
uint8_t x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_322 = 0;
x_323 = lean_box(x_322);
if (lean_is_scalar(x_284)) {
 x_324 = lean_alloc_ctor(0, 2, 0);
} else {
 x_324 = x_284;
}
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_283);
return x_324;
}
else
{
uint8_t x_325; 
x_325 = l_Lean_Level_isMVar(x_1);
if (x_325 == 0)
{
uint8_t x_326; 
x_326 = l_Lean_Level_isMVar(x_2);
if (x_326 == 0)
{
uint8_t x_327; lean_object* x_328; lean_object* x_329; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_327 = 0;
x_328 = lean_box(x_327);
if (lean_is_scalar(x_284)) {
 x_329 = lean_alloc_ctor(0, 2, 0);
} else {
 x_329 = x_284;
}
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_283);
return x_329;
}
else
{
lean_object* x_330; 
lean_dec(x_284);
x_330 = lean_box(0);
x_288 = x_330;
goto block_319;
}
}
else
{
lean_object* x_331; 
lean_dec(x_284);
x_331 = lean_box(0);
x_288 = x_331;
goto block_319;
}
}
block_319:
{
lean_object* x_289; lean_object* x_290; uint8_t x_291; lean_object* x_292; lean_object* x_308; lean_object* x_309; lean_object* x_310; uint8_t x_311; 
lean_dec(x_288);
x_289 = lean_mk_string("stuck");
x_290 = lean_name_mk_string(x_15, x_289);
x_308 = lean_st_ref_get(x_6, x_283);
x_309 = lean_ctor_get(x_308, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_309, 3);
lean_inc(x_310);
lean_dec(x_309);
x_311 = lean_ctor_get_uint8(x_310, sizeof(void*)*1);
lean_dec(x_310);
if (x_311 == 0)
{
lean_object* x_312; uint8_t x_313; 
x_312 = lean_ctor_get(x_308, 1);
lean_inc(x_312);
lean_dec(x_308);
x_313 = 0;
x_291 = x_313;
x_292 = x_312;
goto block_307;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; uint8_t x_318; 
x_314 = lean_ctor_get(x_308, 1);
lean_inc(x_314);
lean_dec(x_308);
lean_inc(x_290);
x_315 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_290, x_3, x_4, x_5, x_6, x_314);
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
x_318 = lean_unbox(x_316);
lean_dec(x_316);
x_291 = x_318;
x_292 = x_317;
goto block_307;
}
block_307:
{
if (x_291 == 0)
{
lean_object* x_293; 
lean_dec(x_290);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_293 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_292);
return x_293;
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_294 = lean_mk_string("");
x_295 = l_Lean_stringToMessageData(x_294);
lean_dec(x_294);
x_296 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_296, 0, x_1);
lean_inc(x_295);
x_297 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_mk_string(" =?= ");
x_299 = l_Lean_stringToMessageData(x_298);
lean_dec(x_298);
x_300 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_301, 0, x_2);
x_302 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_301);
x_303 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_295);
x_304 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_290, x_303, x_3, x_4, x_5, x_6, x_292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_305 = lean_ctor_get(x_304, 1);
lean_inc(x_305);
lean_dec(x_304);
x_306 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_305);
return x_306;
}
}
}
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_284);
lean_dec(x_15);
x_332 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_333 = lean_ctor_get(x_332, 1);
lean_inc(x_333);
if (lean_is_exclusive(x_332)) {
 lean_ctor_release(x_332, 0);
 lean_ctor_release(x_332, 1);
 x_334 = x_332;
} else {
 lean_dec_ref(x_332);
 x_334 = lean_box(0);
}
x_335 = 1;
x_336 = lean_box(x_335);
if (lean_is_scalar(x_334)) {
 x_337 = lean_alloc_ctor(0, 2, 0);
} else {
 x_337 = x_334;
}
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_333);
return x_337;
}
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; uint8_t x_341; lean_object* x_342; lean_object* x_343; 
lean_dec(x_285);
lean_dec(x_284);
lean_dec(x_15);
x_338 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_339 = lean_ctor_get(x_338, 1);
lean_inc(x_339);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_340 = x_338;
} else {
 lean_dec_ref(x_338);
 x_340 = lean_box(0);
}
x_341 = 1;
x_342 = lean_box(x_341);
if (lean_is_scalar(x_340)) {
 x_343 = lean_alloc_ctor(0, 2, 0);
} else {
 x_343 = x_340;
}
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_339);
return x_343;
}
}
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_344 = lean_ctor_get(x_268, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_268, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 x_346 = x_268;
} else {
 lean_dec_ref(x_268);
 x_346 = lean_box(0);
}
if (lean_is_scalar(x_346)) {
 x_347 = lean_alloc_ctor(1, 2, 0);
} else {
 x_347 = x_346;
}
lean_ctor_set(x_347, 0, x_344);
lean_ctor_set(x_347, 1, x_345);
return x_347;
}
}
}
}
else
{
uint8_t x_348; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_348 = !lean_is_exclusive(x_29);
if (x_348 == 0)
{
return x_29;
}
else
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_349 = lean_ctor_get(x_29, 0);
x_350 = lean_ctor_get(x_29, 1);
lean_inc(x_350);
lean_inc(x_349);
lean_dec(x_29);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_349);
lean_ctor_set(x_351, 1, x_350);
return x_351;
}
}
}
}
}
block_369:
{
if (x_355 == 0)
{
lean_dec(x_354);
x_16 = x_356;
goto block_352;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_357 = lean_mk_string("");
x_358 = l_Lean_stringToMessageData(x_357);
lean_dec(x_357);
lean_inc(x_1);
x_359 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_359, 0, x_1);
lean_inc(x_358);
x_360 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_360, 0, x_358);
lean_ctor_set(x_360, 1, x_359);
x_361 = lean_mk_string(" =?= ");
x_362 = l_Lean_stringToMessageData(x_361);
lean_dec(x_361);
x_363 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_363, 0, x_360);
lean_ctor_set(x_363, 1, x_362);
lean_inc(x_2);
x_364 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_364, 0, x_2);
x_365 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_365, 0, x_363);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_358);
x_367 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_354, x_366, x_3, x_4, x_5, x_6, x_356);
x_368 = lean_ctor_get(x_367, 1);
lean_inc(x_368);
lean_dec(x_367);
x_16 = x_368;
goto block_352;
}
}
}
else
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; uint8_t x_384; lean_object* x_385; lean_object* x_386; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_381 = lean_unsigned_to_nat(0u);
x_382 = l_Lean_Level_getOffsetAux(x_1, x_381);
lean_dec(x_1);
x_383 = l_Lean_Level_getOffsetAux(x_2, x_381);
lean_dec(x_2);
x_384 = lean_nat_dec_eq(x_382, x_383);
lean_dec(x_383);
lean_dec(x_382);
x_385 = lean_box(x_384);
x_386 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_7);
return x_386;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_387; lean_object* x_388; uint8_t x_389; 
x_387 = l_Lean_Level_getLevelOffset(x_1);
x_388 = l_Lean_Level_getLevelOffset(x_2);
x_389 = lean_level_eq(x_387, x_388);
lean_dec(x_388);
lean_dec(x_387);
if (x_389 == 0)
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_732; lean_object* x_733; uint8_t x_734; lean_object* x_735; lean_object* x_749; lean_object* x_750; lean_object* x_751; uint8_t x_752; 
x_390 = lean_box(0);
x_391 = lean_mk_string("Meta");
x_392 = lean_name_mk_string(x_390, x_391);
x_393 = lean_mk_string("isLevelDefEq");
x_394 = lean_name_mk_string(x_392, x_393);
x_732 = lean_mk_string("step");
lean_inc(x_394);
x_733 = lean_name_mk_string(x_394, x_732);
x_749 = lean_st_ref_get(x_6, x_7);
x_750 = lean_ctor_get(x_749, 0);
lean_inc(x_750);
x_751 = lean_ctor_get(x_750, 3);
lean_inc(x_751);
lean_dec(x_750);
x_752 = lean_ctor_get_uint8(x_751, sizeof(void*)*1);
lean_dec(x_751);
if (x_752 == 0)
{
lean_object* x_753; uint8_t x_754; 
x_753 = lean_ctor_get(x_749, 1);
lean_inc(x_753);
lean_dec(x_749);
x_754 = 0;
x_734 = x_754;
x_735 = x_753;
goto block_748;
}
else
{
lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; uint8_t x_759; 
x_755 = lean_ctor_get(x_749, 1);
lean_inc(x_755);
lean_dec(x_749);
lean_inc(x_733);
x_756 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_733, x_3, x_4, x_5, x_6, x_755);
x_757 = lean_ctor_get(x_756, 0);
lean_inc(x_757);
x_758 = lean_ctor_get(x_756, 1);
lean_inc(x_758);
lean_dec(x_756);
x_759 = lean_unbox(x_757);
lean_dec(x_757);
x_734 = x_759;
x_735 = x_758;
goto block_748;
}
block_731:
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; 
lean_inc(x_1);
x_396 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_395);
x_397 = lean_ctor_get(x_396, 0);
lean_inc(x_397);
x_398 = lean_ctor_get(x_396, 1);
lean_inc(x_398);
lean_dec(x_396);
x_399 = l_Lean_Level_normalize(x_397);
lean_dec(x_397);
lean_inc(x_2);
x_400 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_398);
x_401 = lean_ctor_get(x_400, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_400, 1);
lean_inc(x_402);
lean_dec(x_400);
x_403 = l_Lean_Level_normalize(x_401);
lean_dec(x_401);
x_404 = lean_level_eq(x_1, x_399);
if (x_404 == 0)
{
lean_dec(x_394);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_399;
x_2 = x_403;
x_7 = x_402;
goto _start;
}
else
{
uint8_t x_406; 
x_406 = lean_level_eq(x_2, x_403);
if (x_406 == 0)
{
lean_dec(x_394);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_399;
x_2 = x_403;
x_7 = x_402;
goto _start;
}
else
{
lean_object* x_408; 
lean_dec(x_403);
lean_dec(x_399);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_408 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_402);
if (lean_obj_tag(x_408) == 0)
{
uint8_t x_409; 
x_409 = !lean_is_exclusive(x_408);
if (x_409 == 0)
{
lean_object* x_410; lean_object* x_411; uint8_t x_412; uint8_t x_413; uint8_t x_414; 
x_410 = lean_ctor_get(x_408, 0);
x_411 = lean_ctor_get(x_408, 1);
x_412 = 2;
x_413 = lean_unbox(x_410);
x_414 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_413, x_412);
if (x_414 == 0)
{
uint8_t x_415; uint8_t x_416; uint8_t x_417; lean_object* x_418; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_415 = 1;
x_416 = lean_unbox(x_410);
lean_dec(x_410);
x_417 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_416, x_415);
x_418 = lean_box(x_417);
lean_ctor_set(x_408, 0, x_418);
return x_408;
}
else
{
lean_object* x_419; 
lean_free_object(x_408);
lean_dec(x_410);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_419 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_411);
if (lean_obj_tag(x_419) == 0)
{
uint8_t x_420; 
x_420 = !lean_is_exclusive(x_419);
if (x_420 == 0)
{
lean_object* x_421; lean_object* x_422; uint8_t x_423; uint8_t x_424; 
x_421 = lean_ctor_get(x_419, 0);
x_422 = lean_ctor_get(x_419, 1);
x_423 = lean_unbox(x_421);
x_424 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_423, x_412);
if (x_424 == 0)
{
uint8_t x_425; uint8_t x_426; uint8_t x_427; lean_object* x_428; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_425 = 1;
x_426 = lean_unbox(x_421);
lean_dec(x_421);
x_427 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_426, x_425);
x_428 = lean_box(x_427);
lean_ctor_set(x_419, 0, x_428);
return x_419;
}
else
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; uint8_t x_432; 
lean_free_object(x_419);
lean_dec(x_421);
x_429 = lean_st_ref_get(x_6, x_422);
x_430 = lean_ctor_get(x_429, 1);
lean_inc(x_430);
lean_dec(x_429);
x_431 = lean_st_ref_get(x_4, x_430);
x_432 = !lean_is_exclusive(x_431);
if (x_432 == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; 
x_433 = lean_ctor_get(x_431, 0);
x_434 = lean_ctor_get(x_431, 1);
x_435 = lean_ctor_get(x_433, 0);
lean_inc(x_435);
lean_dec(x_433);
lean_inc(x_435);
x_436 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_435, x_1);
if (x_436 == 0)
{
uint8_t x_437; 
x_437 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_435, x_2);
if (x_437 == 0)
{
lean_object* x_438; lean_object* x_470; uint8_t x_471; 
x_470 = lean_ctor_get(x_3, 0);
lean_inc(x_470);
x_471 = lean_ctor_get_uint8(x_470, 4);
lean_dec(x_470);
if (x_471 == 0)
{
uint8_t x_472; lean_object* x_473; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_472 = 0;
x_473 = lean_box(x_472);
lean_ctor_set(x_431, 0, x_473);
return x_431;
}
else
{
uint8_t x_474; 
x_474 = l_Lean_Level_isMVar(x_1);
if (x_474 == 0)
{
uint8_t x_475; 
x_475 = l_Lean_Level_isMVar(x_2);
if (x_475 == 0)
{
uint8_t x_476; lean_object* x_477; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_476 = 0;
x_477 = lean_box(x_476);
lean_ctor_set(x_431, 0, x_477);
return x_431;
}
else
{
lean_object* x_478; 
lean_free_object(x_431);
x_478 = lean_box(0);
x_438 = x_478;
goto block_469;
}
}
else
{
lean_object* x_479; 
lean_free_object(x_431);
x_479 = lean_box(0);
x_438 = x_479;
goto block_469;
}
}
block_469:
{
lean_object* x_439; lean_object* x_440; uint8_t x_441; lean_object* x_442; lean_object* x_458; lean_object* x_459; lean_object* x_460; uint8_t x_461; 
lean_dec(x_438);
x_439 = lean_mk_string("stuck");
x_440 = lean_name_mk_string(x_394, x_439);
x_458 = lean_st_ref_get(x_6, x_434);
x_459 = lean_ctor_get(x_458, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_459, 3);
lean_inc(x_460);
lean_dec(x_459);
x_461 = lean_ctor_get_uint8(x_460, sizeof(void*)*1);
lean_dec(x_460);
if (x_461 == 0)
{
lean_object* x_462; uint8_t x_463; 
x_462 = lean_ctor_get(x_458, 1);
lean_inc(x_462);
lean_dec(x_458);
x_463 = 0;
x_441 = x_463;
x_442 = x_462;
goto block_457;
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; uint8_t x_468; 
x_464 = lean_ctor_get(x_458, 1);
lean_inc(x_464);
lean_dec(x_458);
lean_inc(x_440);
x_465 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_440, x_3, x_4, x_5, x_6, x_464);
x_466 = lean_ctor_get(x_465, 0);
lean_inc(x_466);
x_467 = lean_ctor_get(x_465, 1);
lean_inc(x_467);
lean_dec(x_465);
x_468 = lean_unbox(x_466);
lean_dec(x_466);
x_441 = x_468;
x_442 = x_467;
goto block_457;
}
block_457:
{
if (x_441 == 0)
{
lean_object* x_443; 
lean_dec(x_440);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_443 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_442);
return x_443;
}
else
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; 
x_444 = lean_mk_string("");
x_445 = l_Lean_stringToMessageData(x_444);
lean_dec(x_444);
x_446 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_446, 0, x_1);
lean_inc(x_445);
x_447 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_447, 0, x_445);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_mk_string(" =?= ");
x_449 = l_Lean_stringToMessageData(x_448);
lean_dec(x_448);
x_450 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_450, 0, x_447);
lean_ctor_set(x_450, 1, x_449);
x_451 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_451, 0, x_2);
x_452 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_452, 0, x_450);
lean_ctor_set(x_452, 1, x_451);
x_453 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_453, 0, x_452);
lean_ctor_set(x_453, 1, x_445);
x_454 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_440, x_453, x_3, x_4, x_5, x_6, x_442);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_455 = lean_ctor_get(x_454, 1);
lean_inc(x_455);
lean_dec(x_454);
x_456 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_455);
return x_456;
}
}
}
}
else
{
lean_object* x_480; uint8_t x_481; 
lean_free_object(x_431);
lean_dec(x_394);
x_480 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_434);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_481 = !lean_is_exclusive(x_480);
if (x_481 == 0)
{
lean_object* x_482; uint8_t x_483; lean_object* x_484; 
x_482 = lean_ctor_get(x_480, 0);
lean_dec(x_482);
x_483 = 1;
x_484 = lean_box(x_483);
lean_ctor_set(x_480, 0, x_484);
return x_480;
}
else
{
lean_object* x_485; uint8_t x_486; lean_object* x_487; lean_object* x_488; 
x_485 = lean_ctor_get(x_480, 1);
lean_inc(x_485);
lean_dec(x_480);
x_486 = 1;
x_487 = lean_box(x_486);
x_488 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_488, 0, x_487);
lean_ctor_set(x_488, 1, x_485);
return x_488;
}
}
}
else
{
lean_object* x_489; uint8_t x_490; 
lean_dec(x_435);
lean_free_object(x_431);
lean_dec(x_394);
x_489 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_434);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_490 = !lean_is_exclusive(x_489);
if (x_490 == 0)
{
lean_object* x_491; uint8_t x_492; lean_object* x_493; 
x_491 = lean_ctor_get(x_489, 0);
lean_dec(x_491);
x_492 = 1;
x_493 = lean_box(x_492);
lean_ctor_set(x_489, 0, x_493);
return x_489;
}
else
{
lean_object* x_494; uint8_t x_495; lean_object* x_496; lean_object* x_497; 
x_494 = lean_ctor_get(x_489, 1);
lean_inc(x_494);
lean_dec(x_489);
x_495 = 1;
x_496 = lean_box(x_495);
x_497 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_497, 0, x_496);
lean_ctor_set(x_497, 1, x_494);
return x_497;
}
}
}
else
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; uint8_t x_501; 
x_498 = lean_ctor_get(x_431, 0);
x_499 = lean_ctor_get(x_431, 1);
lean_inc(x_499);
lean_inc(x_498);
lean_dec(x_431);
x_500 = lean_ctor_get(x_498, 0);
lean_inc(x_500);
lean_dec(x_498);
lean_inc(x_500);
x_501 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_500, x_1);
if (x_501 == 0)
{
uint8_t x_502; 
x_502 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_500, x_2);
if (x_502 == 0)
{
lean_object* x_503; lean_object* x_535; uint8_t x_536; 
x_535 = lean_ctor_get(x_3, 0);
lean_inc(x_535);
x_536 = lean_ctor_get_uint8(x_535, 4);
lean_dec(x_535);
if (x_536 == 0)
{
uint8_t x_537; lean_object* x_538; lean_object* x_539; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_537 = 0;
x_538 = lean_box(x_537);
x_539 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_539, 0, x_538);
lean_ctor_set(x_539, 1, x_499);
return x_539;
}
else
{
uint8_t x_540; 
x_540 = l_Lean_Level_isMVar(x_1);
if (x_540 == 0)
{
uint8_t x_541; 
x_541 = l_Lean_Level_isMVar(x_2);
if (x_541 == 0)
{
uint8_t x_542; lean_object* x_543; lean_object* x_544; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_542 = 0;
x_543 = lean_box(x_542);
x_544 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_544, 0, x_543);
lean_ctor_set(x_544, 1, x_499);
return x_544;
}
else
{
lean_object* x_545; 
x_545 = lean_box(0);
x_503 = x_545;
goto block_534;
}
}
else
{
lean_object* x_546; 
x_546 = lean_box(0);
x_503 = x_546;
goto block_534;
}
}
block_534:
{
lean_object* x_504; lean_object* x_505; uint8_t x_506; lean_object* x_507; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; 
lean_dec(x_503);
x_504 = lean_mk_string("stuck");
x_505 = lean_name_mk_string(x_394, x_504);
x_523 = lean_st_ref_get(x_6, x_499);
x_524 = lean_ctor_get(x_523, 0);
lean_inc(x_524);
x_525 = lean_ctor_get(x_524, 3);
lean_inc(x_525);
lean_dec(x_524);
x_526 = lean_ctor_get_uint8(x_525, sizeof(void*)*1);
lean_dec(x_525);
if (x_526 == 0)
{
lean_object* x_527; uint8_t x_528; 
x_527 = lean_ctor_get(x_523, 1);
lean_inc(x_527);
lean_dec(x_523);
x_528 = 0;
x_506 = x_528;
x_507 = x_527;
goto block_522;
}
else
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; uint8_t x_533; 
x_529 = lean_ctor_get(x_523, 1);
lean_inc(x_529);
lean_dec(x_523);
lean_inc(x_505);
x_530 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_505, x_3, x_4, x_5, x_6, x_529);
x_531 = lean_ctor_get(x_530, 0);
lean_inc(x_531);
x_532 = lean_ctor_get(x_530, 1);
lean_inc(x_532);
lean_dec(x_530);
x_533 = lean_unbox(x_531);
lean_dec(x_531);
x_506 = x_533;
x_507 = x_532;
goto block_522;
}
block_522:
{
if (x_506 == 0)
{
lean_object* x_508; 
lean_dec(x_505);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_508 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_507);
return x_508;
}
else
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; 
x_509 = lean_mk_string("");
x_510 = l_Lean_stringToMessageData(x_509);
lean_dec(x_509);
x_511 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_511, 0, x_1);
lean_inc(x_510);
x_512 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_512, 0, x_510);
lean_ctor_set(x_512, 1, x_511);
x_513 = lean_mk_string(" =?= ");
x_514 = l_Lean_stringToMessageData(x_513);
lean_dec(x_513);
x_515 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_515, 0, x_512);
lean_ctor_set(x_515, 1, x_514);
x_516 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_516, 0, x_2);
x_517 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_517, 0, x_515);
lean_ctor_set(x_517, 1, x_516);
x_518 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_518, 0, x_517);
lean_ctor_set(x_518, 1, x_510);
x_519 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_505, x_518, x_3, x_4, x_5, x_6, x_507);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_520 = lean_ctor_get(x_519, 1);
lean_inc(x_520);
lean_dec(x_519);
x_521 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_520);
return x_521;
}
}
}
}
else
{
lean_object* x_547; lean_object* x_548; lean_object* x_549; uint8_t x_550; lean_object* x_551; lean_object* x_552; 
lean_dec(x_394);
x_547 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_548 = lean_ctor_get(x_547, 1);
lean_inc(x_548);
if (lean_is_exclusive(x_547)) {
 lean_ctor_release(x_547, 0);
 lean_ctor_release(x_547, 1);
 x_549 = x_547;
} else {
 lean_dec_ref(x_547);
 x_549 = lean_box(0);
}
x_550 = 1;
x_551 = lean_box(x_550);
if (lean_is_scalar(x_549)) {
 x_552 = lean_alloc_ctor(0, 2, 0);
} else {
 x_552 = x_549;
}
lean_ctor_set(x_552, 0, x_551);
lean_ctor_set(x_552, 1, x_548);
return x_552;
}
}
else
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; uint8_t x_556; lean_object* x_557; lean_object* x_558; 
lean_dec(x_500);
lean_dec(x_394);
x_553 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_554 = lean_ctor_get(x_553, 1);
lean_inc(x_554);
if (lean_is_exclusive(x_553)) {
 lean_ctor_release(x_553, 0);
 lean_ctor_release(x_553, 1);
 x_555 = x_553;
} else {
 lean_dec_ref(x_553);
 x_555 = lean_box(0);
}
x_556 = 1;
x_557 = lean_box(x_556);
if (lean_is_scalar(x_555)) {
 x_558 = lean_alloc_ctor(0, 2, 0);
} else {
 x_558 = x_555;
}
lean_ctor_set(x_558, 0, x_557);
lean_ctor_set(x_558, 1, x_554);
return x_558;
}
}
}
}
else
{
lean_object* x_559; lean_object* x_560; uint8_t x_561; uint8_t x_562; 
x_559 = lean_ctor_get(x_419, 0);
x_560 = lean_ctor_get(x_419, 1);
lean_inc(x_560);
lean_inc(x_559);
lean_dec(x_419);
x_561 = lean_unbox(x_559);
x_562 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_561, x_412);
if (x_562 == 0)
{
uint8_t x_563; uint8_t x_564; uint8_t x_565; lean_object* x_566; lean_object* x_567; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_563 = 1;
x_564 = lean_unbox(x_559);
lean_dec(x_559);
x_565 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_564, x_563);
x_566 = lean_box(x_565);
x_567 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_567, 0, x_566);
lean_ctor_set(x_567, 1, x_560);
return x_567;
}
else
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; uint8_t x_575; 
lean_dec(x_559);
x_568 = lean_st_ref_get(x_6, x_560);
x_569 = lean_ctor_get(x_568, 1);
lean_inc(x_569);
lean_dec(x_568);
x_570 = lean_st_ref_get(x_4, x_569);
x_571 = lean_ctor_get(x_570, 0);
lean_inc(x_571);
x_572 = lean_ctor_get(x_570, 1);
lean_inc(x_572);
if (lean_is_exclusive(x_570)) {
 lean_ctor_release(x_570, 0);
 lean_ctor_release(x_570, 1);
 x_573 = x_570;
} else {
 lean_dec_ref(x_570);
 x_573 = lean_box(0);
}
x_574 = lean_ctor_get(x_571, 0);
lean_inc(x_574);
lean_dec(x_571);
lean_inc(x_574);
x_575 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_574, x_1);
if (x_575 == 0)
{
uint8_t x_576; 
x_576 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_574, x_2);
if (x_576 == 0)
{
lean_object* x_577; lean_object* x_609; uint8_t x_610; 
x_609 = lean_ctor_get(x_3, 0);
lean_inc(x_609);
x_610 = lean_ctor_get_uint8(x_609, 4);
lean_dec(x_609);
if (x_610 == 0)
{
uint8_t x_611; lean_object* x_612; lean_object* x_613; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_611 = 0;
x_612 = lean_box(x_611);
if (lean_is_scalar(x_573)) {
 x_613 = lean_alloc_ctor(0, 2, 0);
} else {
 x_613 = x_573;
}
lean_ctor_set(x_613, 0, x_612);
lean_ctor_set(x_613, 1, x_572);
return x_613;
}
else
{
uint8_t x_614; 
x_614 = l_Lean_Level_isMVar(x_1);
if (x_614 == 0)
{
uint8_t x_615; 
x_615 = l_Lean_Level_isMVar(x_2);
if (x_615 == 0)
{
uint8_t x_616; lean_object* x_617; lean_object* x_618; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_616 = 0;
x_617 = lean_box(x_616);
if (lean_is_scalar(x_573)) {
 x_618 = lean_alloc_ctor(0, 2, 0);
} else {
 x_618 = x_573;
}
lean_ctor_set(x_618, 0, x_617);
lean_ctor_set(x_618, 1, x_572);
return x_618;
}
else
{
lean_object* x_619; 
lean_dec(x_573);
x_619 = lean_box(0);
x_577 = x_619;
goto block_608;
}
}
else
{
lean_object* x_620; 
lean_dec(x_573);
x_620 = lean_box(0);
x_577 = x_620;
goto block_608;
}
}
block_608:
{
lean_object* x_578; lean_object* x_579; uint8_t x_580; lean_object* x_581; lean_object* x_597; lean_object* x_598; lean_object* x_599; uint8_t x_600; 
lean_dec(x_577);
x_578 = lean_mk_string("stuck");
x_579 = lean_name_mk_string(x_394, x_578);
x_597 = lean_st_ref_get(x_6, x_572);
x_598 = lean_ctor_get(x_597, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_598, 3);
lean_inc(x_599);
lean_dec(x_598);
x_600 = lean_ctor_get_uint8(x_599, sizeof(void*)*1);
lean_dec(x_599);
if (x_600 == 0)
{
lean_object* x_601; uint8_t x_602; 
x_601 = lean_ctor_get(x_597, 1);
lean_inc(x_601);
lean_dec(x_597);
x_602 = 0;
x_580 = x_602;
x_581 = x_601;
goto block_596;
}
else
{
lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; uint8_t x_607; 
x_603 = lean_ctor_get(x_597, 1);
lean_inc(x_603);
lean_dec(x_597);
lean_inc(x_579);
x_604 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_579, x_3, x_4, x_5, x_6, x_603);
x_605 = lean_ctor_get(x_604, 0);
lean_inc(x_605);
x_606 = lean_ctor_get(x_604, 1);
lean_inc(x_606);
lean_dec(x_604);
x_607 = lean_unbox(x_605);
lean_dec(x_605);
x_580 = x_607;
x_581 = x_606;
goto block_596;
}
block_596:
{
if (x_580 == 0)
{
lean_object* x_582; 
lean_dec(x_579);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_582 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_581);
return x_582;
}
else
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; 
x_583 = lean_mk_string("");
x_584 = l_Lean_stringToMessageData(x_583);
lean_dec(x_583);
x_585 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_585, 0, x_1);
lean_inc(x_584);
x_586 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_586, 0, x_584);
lean_ctor_set(x_586, 1, x_585);
x_587 = lean_mk_string(" =?= ");
x_588 = l_Lean_stringToMessageData(x_587);
lean_dec(x_587);
x_589 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_589, 0, x_586);
lean_ctor_set(x_589, 1, x_588);
x_590 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_590, 0, x_2);
x_591 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_591, 0, x_589);
lean_ctor_set(x_591, 1, x_590);
x_592 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_592, 0, x_591);
lean_ctor_set(x_592, 1, x_584);
x_593 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_579, x_592, x_3, x_4, x_5, x_6, x_581);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_594 = lean_ctor_get(x_593, 1);
lean_inc(x_594);
lean_dec(x_593);
x_595 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_594);
return x_595;
}
}
}
}
else
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; uint8_t x_624; lean_object* x_625; lean_object* x_626; 
lean_dec(x_573);
lean_dec(x_394);
x_621 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_572);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_622 = lean_ctor_get(x_621, 1);
lean_inc(x_622);
if (lean_is_exclusive(x_621)) {
 lean_ctor_release(x_621, 0);
 lean_ctor_release(x_621, 1);
 x_623 = x_621;
} else {
 lean_dec_ref(x_621);
 x_623 = lean_box(0);
}
x_624 = 1;
x_625 = lean_box(x_624);
if (lean_is_scalar(x_623)) {
 x_626 = lean_alloc_ctor(0, 2, 0);
} else {
 x_626 = x_623;
}
lean_ctor_set(x_626, 0, x_625);
lean_ctor_set(x_626, 1, x_622);
return x_626;
}
}
else
{
lean_object* x_627; lean_object* x_628; lean_object* x_629; uint8_t x_630; lean_object* x_631; lean_object* x_632; 
lean_dec(x_574);
lean_dec(x_573);
lean_dec(x_394);
x_627 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_572);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_628 = lean_ctor_get(x_627, 1);
lean_inc(x_628);
if (lean_is_exclusive(x_627)) {
 lean_ctor_release(x_627, 0);
 lean_ctor_release(x_627, 1);
 x_629 = x_627;
} else {
 lean_dec_ref(x_627);
 x_629 = lean_box(0);
}
x_630 = 1;
x_631 = lean_box(x_630);
if (lean_is_scalar(x_629)) {
 x_632 = lean_alloc_ctor(0, 2, 0);
} else {
 x_632 = x_629;
}
lean_ctor_set(x_632, 0, x_631);
lean_ctor_set(x_632, 1, x_628);
return x_632;
}
}
}
}
else
{
uint8_t x_633; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_633 = !lean_is_exclusive(x_419);
if (x_633 == 0)
{
return x_419;
}
else
{
lean_object* x_634; lean_object* x_635; lean_object* x_636; 
x_634 = lean_ctor_get(x_419, 0);
x_635 = lean_ctor_get(x_419, 1);
lean_inc(x_635);
lean_inc(x_634);
lean_dec(x_419);
x_636 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_636, 0, x_634);
lean_ctor_set(x_636, 1, x_635);
return x_636;
}
}
}
}
else
{
lean_object* x_637; lean_object* x_638; uint8_t x_639; uint8_t x_640; uint8_t x_641; 
x_637 = lean_ctor_get(x_408, 0);
x_638 = lean_ctor_get(x_408, 1);
lean_inc(x_638);
lean_inc(x_637);
lean_dec(x_408);
x_639 = 2;
x_640 = lean_unbox(x_637);
x_641 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_640, x_639);
if (x_641 == 0)
{
uint8_t x_642; uint8_t x_643; uint8_t x_644; lean_object* x_645; lean_object* x_646; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_642 = 1;
x_643 = lean_unbox(x_637);
lean_dec(x_637);
x_644 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_643, x_642);
x_645 = lean_box(x_644);
x_646 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_646, 0, x_645);
lean_ctor_set(x_646, 1, x_638);
return x_646;
}
else
{
lean_object* x_647; 
lean_dec(x_637);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_647 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_638);
if (lean_obj_tag(x_647) == 0)
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; uint8_t x_651; uint8_t x_652; 
x_648 = lean_ctor_get(x_647, 0);
lean_inc(x_648);
x_649 = lean_ctor_get(x_647, 1);
lean_inc(x_649);
if (lean_is_exclusive(x_647)) {
 lean_ctor_release(x_647, 0);
 lean_ctor_release(x_647, 1);
 x_650 = x_647;
} else {
 lean_dec_ref(x_647);
 x_650 = lean_box(0);
}
x_651 = lean_unbox(x_648);
x_652 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_651, x_639);
if (x_652 == 0)
{
uint8_t x_653; uint8_t x_654; uint8_t x_655; lean_object* x_656; lean_object* x_657; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_653 = 1;
x_654 = lean_unbox(x_648);
lean_dec(x_648);
x_655 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_654, x_653);
x_656 = lean_box(x_655);
if (lean_is_scalar(x_650)) {
 x_657 = lean_alloc_ctor(0, 2, 0);
} else {
 x_657 = x_650;
}
lean_ctor_set(x_657, 0, x_656);
lean_ctor_set(x_657, 1, x_649);
return x_657;
}
else
{
lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; uint8_t x_665; 
lean_dec(x_650);
lean_dec(x_648);
x_658 = lean_st_ref_get(x_6, x_649);
x_659 = lean_ctor_get(x_658, 1);
lean_inc(x_659);
lean_dec(x_658);
x_660 = lean_st_ref_get(x_4, x_659);
x_661 = lean_ctor_get(x_660, 0);
lean_inc(x_661);
x_662 = lean_ctor_get(x_660, 1);
lean_inc(x_662);
if (lean_is_exclusive(x_660)) {
 lean_ctor_release(x_660, 0);
 lean_ctor_release(x_660, 1);
 x_663 = x_660;
} else {
 lean_dec_ref(x_660);
 x_663 = lean_box(0);
}
x_664 = lean_ctor_get(x_661, 0);
lean_inc(x_664);
lean_dec(x_661);
lean_inc(x_664);
x_665 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_664, x_1);
if (x_665 == 0)
{
uint8_t x_666; 
x_666 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_664, x_2);
if (x_666 == 0)
{
lean_object* x_667; lean_object* x_699; uint8_t x_700; 
x_699 = lean_ctor_get(x_3, 0);
lean_inc(x_699);
x_700 = lean_ctor_get_uint8(x_699, 4);
lean_dec(x_699);
if (x_700 == 0)
{
uint8_t x_701; lean_object* x_702; lean_object* x_703; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_701 = 0;
x_702 = lean_box(x_701);
if (lean_is_scalar(x_663)) {
 x_703 = lean_alloc_ctor(0, 2, 0);
} else {
 x_703 = x_663;
}
lean_ctor_set(x_703, 0, x_702);
lean_ctor_set(x_703, 1, x_662);
return x_703;
}
else
{
uint8_t x_704; 
x_704 = l_Lean_Level_isMVar(x_1);
if (x_704 == 0)
{
uint8_t x_705; 
x_705 = l_Lean_Level_isMVar(x_2);
if (x_705 == 0)
{
uint8_t x_706; lean_object* x_707; lean_object* x_708; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_706 = 0;
x_707 = lean_box(x_706);
if (lean_is_scalar(x_663)) {
 x_708 = lean_alloc_ctor(0, 2, 0);
} else {
 x_708 = x_663;
}
lean_ctor_set(x_708, 0, x_707);
lean_ctor_set(x_708, 1, x_662);
return x_708;
}
else
{
lean_object* x_709; 
lean_dec(x_663);
x_709 = lean_box(0);
x_667 = x_709;
goto block_698;
}
}
else
{
lean_object* x_710; 
lean_dec(x_663);
x_710 = lean_box(0);
x_667 = x_710;
goto block_698;
}
}
block_698:
{
lean_object* x_668; lean_object* x_669; uint8_t x_670; lean_object* x_671; lean_object* x_687; lean_object* x_688; lean_object* x_689; uint8_t x_690; 
lean_dec(x_667);
x_668 = lean_mk_string("stuck");
x_669 = lean_name_mk_string(x_394, x_668);
x_687 = lean_st_ref_get(x_6, x_662);
x_688 = lean_ctor_get(x_687, 0);
lean_inc(x_688);
x_689 = lean_ctor_get(x_688, 3);
lean_inc(x_689);
lean_dec(x_688);
x_690 = lean_ctor_get_uint8(x_689, sizeof(void*)*1);
lean_dec(x_689);
if (x_690 == 0)
{
lean_object* x_691; uint8_t x_692; 
x_691 = lean_ctor_get(x_687, 1);
lean_inc(x_691);
lean_dec(x_687);
x_692 = 0;
x_670 = x_692;
x_671 = x_691;
goto block_686;
}
else
{
lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; uint8_t x_697; 
x_693 = lean_ctor_get(x_687, 1);
lean_inc(x_693);
lean_dec(x_687);
lean_inc(x_669);
x_694 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_669, x_3, x_4, x_5, x_6, x_693);
x_695 = lean_ctor_get(x_694, 0);
lean_inc(x_695);
x_696 = lean_ctor_get(x_694, 1);
lean_inc(x_696);
lean_dec(x_694);
x_697 = lean_unbox(x_695);
lean_dec(x_695);
x_670 = x_697;
x_671 = x_696;
goto block_686;
}
block_686:
{
if (x_670 == 0)
{
lean_object* x_672; 
lean_dec(x_669);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_672 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_671);
return x_672;
}
else
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; 
x_673 = lean_mk_string("");
x_674 = l_Lean_stringToMessageData(x_673);
lean_dec(x_673);
x_675 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_675, 0, x_1);
lean_inc(x_674);
x_676 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_676, 0, x_674);
lean_ctor_set(x_676, 1, x_675);
x_677 = lean_mk_string(" =?= ");
x_678 = l_Lean_stringToMessageData(x_677);
lean_dec(x_677);
x_679 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_679, 0, x_676);
lean_ctor_set(x_679, 1, x_678);
x_680 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_680, 0, x_2);
x_681 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_681, 0, x_679);
lean_ctor_set(x_681, 1, x_680);
x_682 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_682, 0, x_681);
lean_ctor_set(x_682, 1, x_674);
x_683 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_669, x_682, x_3, x_4, x_5, x_6, x_671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_684 = lean_ctor_get(x_683, 1);
lean_inc(x_684);
lean_dec(x_683);
x_685 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_684);
return x_685;
}
}
}
}
else
{
lean_object* x_711; lean_object* x_712; lean_object* x_713; uint8_t x_714; lean_object* x_715; lean_object* x_716; 
lean_dec(x_663);
lean_dec(x_394);
x_711 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_662);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_712 = lean_ctor_get(x_711, 1);
lean_inc(x_712);
if (lean_is_exclusive(x_711)) {
 lean_ctor_release(x_711, 0);
 lean_ctor_release(x_711, 1);
 x_713 = x_711;
} else {
 lean_dec_ref(x_711);
 x_713 = lean_box(0);
}
x_714 = 1;
x_715 = lean_box(x_714);
if (lean_is_scalar(x_713)) {
 x_716 = lean_alloc_ctor(0, 2, 0);
} else {
 x_716 = x_713;
}
lean_ctor_set(x_716, 0, x_715);
lean_ctor_set(x_716, 1, x_712);
return x_716;
}
}
else
{
lean_object* x_717; lean_object* x_718; lean_object* x_719; uint8_t x_720; lean_object* x_721; lean_object* x_722; 
lean_dec(x_664);
lean_dec(x_663);
lean_dec(x_394);
x_717 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_662);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_718 = lean_ctor_get(x_717, 1);
lean_inc(x_718);
if (lean_is_exclusive(x_717)) {
 lean_ctor_release(x_717, 0);
 lean_ctor_release(x_717, 1);
 x_719 = x_717;
} else {
 lean_dec_ref(x_717);
 x_719 = lean_box(0);
}
x_720 = 1;
x_721 = lean_box(x_720);
if (lean_is_scalar(x_719)) {
 x_722 = lean_alloc_ctor(0, 2, 0);
} else {
 x_722 = x_719;
}
lean_ctor_set(x_722, 0, x_721);
lean_ctor_set(x_722, 1, x_718);
return x_722;
}
}
}
else
{
lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_723 = lean_ctor_get(x_647, 0);
lean_inc(x_723);
x_724 = lean_ctor_get(x_647, 1);
lean_inc(x_724);
if (lean_is_exclusive(x_647)) {
 lean_ctor_release(x_647, 0);
 lean_ctor_release(x_647, 1);
 x_725 = x_647;
} else {
 lean_dec_ref(x_647);
 x_725 = lean_box(0);
}
if (lean_is_scalar(x_725)) {
 x_726 = lean_alloc_ctor(1, 2, 0);
} else {
 x_726 = x_725;
}
lean_ctor_set(x_726, 0, x_723);
lean_ctor_set(x_726, 1, x_724);
return x_726;
}
}
}
}
else
{
uint8_t x_727; 
lean_dec(x_394);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_727 = !lean_is_exclusive(x_408);
if (x_727 == 0)
{
return x_408;
}
else
{
lean_object* x_728; lean_object* x_729; lean_object* x_730; 
x_728 = lean_ctor_get(x_408, 0);
x_729 = lean_ctor_get(x_408, 1);
lean_inc(x_729);
lean_inc(x_728);
lean_dec(x_408);
x_730 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_730, 0, x_728);
lean_ctor_set(x_730, 1, x_729);
return x_730;
}
}
}
}
}
block_748:
{
if (x_734 == 0)
{
lean_dec(x_733);
x_395 = x_735;
goto block_731;
}
else
{
lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; 
x_736 = lean_mk_string("");
x_737 = l_Lean_stringToMessageData(x_736);
lean_dec(x_736);
lean_inc(x_1);
x_738 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_738, 0, x_1);
lean_inc(x_737);
x_739 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_739, 0, x_737);
lean_ctor_set(x_739, 1, x_738);
x_740 = lean_mk_string(" =?= ");
x_741 = l_Lean_stringToMessageData(x_740);
lean_dec(x_740);
x_742 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_742, 0, x_739);
lean_ctor_set(x_742, 1, x_741);
lean_inc(x_2);
x_743 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_743, 0, x_2);
x_744 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_744, 0, x_742);
lean_ctor_set(x_744, 1, x_743);
x_745 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_745, 0, x_744);
lean_ctor_set(x_745, 1, x_737);
x_746 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_733, x_745, x_3, x_4, x_5, x_6, x_735);
x_747 = lean_ctor_get(x_746, 1);
lean_inc(x_747);
lean_dec(x_746);
x_395 = x_747;
goto block_731;
}
}
}
else
{
lean_object* x_760; lean_object* x_761; lean_object* x_762; uint8_t x_763; lean_object* x_764; lean_object* x_765; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_760 = lean_unsigned_to_nat(0u);
x_761 = l_Lean_Level_getOffsetAux(x_1, x_760);
lean_dec(x_1);
x_762 = l_Lean_Level_getOffsetAux(x_2, x_760);
lean_dec(x_2);
x_763 = lean_nat_dec_eq(x_761, x_762);
lean_dec(x_762);
lean_dec(x_761);
x_764 = lean_box(x_763);
x_765 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_765, 0, x_764);
lean_ctor_set(x_765, 1, x_7);
return x_765;
}
}
case 1:
{
lean_object* x_766; lean_object* x_767; 
x_766 = lean_ctor_get(x_1, 0);
lean_inc(x_766);
lean_dec(x_1);
x_767 = lean_ctor_get(x_2, 0);
lean_inc(x_767);
lean_dec(x_2);
x_1 = x_766;
x_2 = x_767;
goto _start;
}
case 2:
{
lean_object* x_769; lean_object* x_770; uint8_t x_771; 
x_769 = l_Lean_Level_getLevelOffset(x_1);
x_770 = l_Lean_Level_getLevelOffset(x_2);
x_771 = lean_level_eq(x_769, x_770);
lean_dec(x_770);
lean_dec(x_769);
if (x_771 == 0)
{
lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_1114; lean_object* x_1115; uint8_t x_1116; lean_object* x_1117; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; uint8_t x_1134; 
x_772 = lean_box(0);
x_773 = lean_mk_string("Meta");
x_774 = lean_name_mk_string(x_772, x_773);
x_775 = lean_mk_string("isLevelDefEq");
x_776 = lean_name_mk_string(x_774, x_775);
x_1114 = lean_mk_string("step");
lean_inc(x_776);
x_1115 = lean_name_mk_string(x_776, x_1114);
x_1131 = lean_st_ref_get(x_6, x_7);
x_1132 = lean_ctor_get(x_1131, 0);
lean_inc(x_1132);
x_1133 = lean_ctor_get(x_1132, 3);
lean_inc(x_1133);
lean_dec(x_1132);
x_1134 = lean_ctor_get_uint8(x_1133, sizeof(void*)*1);
lean_dec(x_1133);
if (x_1134 == 0)
{
lean_object* x_1135; uint8_t x_1136; 
x_1135 = lean_ctor_get(x_1131, 1);
lean_inc(x_1135);
lean_dec(x_1131);
x_1136 = 0;
x_1116 = x_1136;
x_1117 = x_1135;
goto block_1130;
}
else
{
lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; uint8_t x_1141; 
x_1137 = lean_ctor_get(x_1131, 1);
lean_inc(x_1137);
lean_dec(x_1131);
lean_inc(x_1115);
x_1138 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1115, x_3, x_4, x_5, x_6, x_1137);
x_1139 = lean_ctor_get(x_1138, 0);
lean_inc(x_1139);
x_1140 = lean_ctor_get(x_1138, 1);
lean_inc(x_1140);
lean_dec(x_1138);
x_1141 = lean_unbox(x_1139);
lean_dec(x_1139);
x_1116 = x_1141;
x_1117 = x_1140;
goto block_1130;
}
block_1113:
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; uint8_t x_786; 
lean_inc(x_1);
x_778 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_777);
x_779 = lean_ctor_get(x_778, 0);
lean_inc(x_779);
x_780 = lean_ctor_get(x_778, 1);
lean_inc(x_780);
lean_dec(x_778);
x_781 = l_Lean_Level_normalize(x_779);
lean_dec(x_779);
lean_inc(x_2);
x_782 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_780);
x_783 = lean_ctor_get(x_782, 0);
lean_inc(x_783);
x_784 = lean_ctor_get(x_782, 1);
lean_inc(x_784);
lean_dec(x_782);
x_785 = l_Lean_Level_normalize(x_783);
lean_dec(x_783);
x_786 = lean_level_eq(x_1, x_781);
if (x_786 == 0)
{
lean_dec(x_776);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_781;
x_2 = x_785;
x_7 = x_784;
goto _start;
}
else
{
uint8_t x_788; 
x_788 = lean_level_eq(x_2, x_785);
if (x_788 == 0)
{
lean_dec(x_776);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_781;
x_2 = x_785;
x_7 = x_784;
goto _start;
}
else
{
lean_object* x_790; 
lean_dec(x_785);
lean_dec(x_781);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_790 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_784);
if (lean_obj_tag(x_790) == 0)
{
uint8_t x_791; 
x_791 = !lean_is_exclusive(x_790);
if (x_791 == 0)
{
lean_object* x_792; lean_object* x_793; uint8_t x_794; uint8_t x_795; uint8_t x_796; 
x_792 = lean_ctor_get(x_790, 0);
x_793 = lean_ctor_get(x_790, 1);
x_794 = 2;
x_795 = lean_unbox(x_792);
x_796 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_795, x_794);
if (x_796 == 0)
{
uint8_t x_797; uint8_t x_798; uint8_t x_799; lean_object* x_800; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_797 = 1;
x_798 = lean_unbox(x_792);
lean_dec(x_792);
x_799 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_798, x_797);
x_800 = lean_box(x_799);
lean_ctor_set(x_790, 0, x_800);
return x_790;
}
else
{
lean_object* x_801; 
lean_free_object(x_790);
lean_dec(x_792);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_801 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_793);
if (lean_obj_tag(x_801) == 0)
{
uint8_t x_802; 
x_802 = !lean_is_exclusive(x_801);
if (x_802 == 0)
{
lean_object* x_803; lean_object* x_804; uint8_t x_805; uint8_t x_806; 
x_803 = lean_ctor_get(x_801, 0);
x_804 = lean_ctor_get(x_801, 1);
x_805 = lean_unbox(x_803);
x_806 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_805, x_794);
if (x_806 == 0)
{
uint8_t x_807; uint8_t x_808; uint8_t x_809; lean_object* x_810; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_807 = 1;
x_808 = lean_unbox(x_803);
lean_dec(x_803);
x_809 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_808, x_807);
x_810 = lean_box(x_809);
lean_ctor_set(x_801, 0, x_810);
return x_801;
}
else
{
lean_object* x_811; lean_object* x_812; lean_object* x_813; uint8_t x_814; 
lean_free_object(x_801);
lean_dec(x_803);
x_811 = lean_st_ref_get(x_6, x_804);
x_812 = lean_ctor_get(x_811, 1);
lean_inc(x_812);
lean_dec(x_811);
x_813 = lean_st_ref_get(x_4, x_812);
x_814 = !lean_is_exclusive(x_813);
if (x_814 == 0)
{
lean_object* x_815; lean_object* x_816; lean_object* x_817; uint8_t x_818; 
x_815 = lean_ctor_get(x_813, 0);
x_816 = lean_ctor_get(x_813, 1);
x_817 = lean_ctor_get(x_815, 0);
lean_inc(x_817);
lean_dec(x_815);
lean_inc(x_817);
x_818 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_817, x_1);
if (x_818 == 0)
{
uint8_t x_819; 
x_819 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_817, x_2);
if (x_819 == 0)
{
lean_object* x_820; lean_object* x_852; uint8_t x_853; 
x_852 = lean_ctor_get(x_3, 0);
lean_inc(x_852);
x_853 = lean_ctor_get_uint8(x_852, 4);
lean_dec(x_852);
if (x_853 == 0)
{
uint8_t x_854; lean_object* x_855; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_854 = 0;
x_855 = lean_box(x_854);
lean_ctor_set(x_813, 0, x_855);
return x_813;
}
else
{
uint8_t x_856; 
x_856 = l_Lean_Level_isMVar(x_1);
if (x_856 == 0)
{
uint8_t x_857; 
x_857 = l_Lean_Level_isMVar(x_2);
if (x_857 == 0)
{
uint8_t x_858; lean_object* x_859; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_858 = 0;
x_859 = lean_box(x_858);
lean_ctor_set(x_813, 0, x_859);
return x_813;
}
else
{
lean_object* x_860; 
lean_free_object(x_813);
x_860 = lean_box(0);
x_820 = x_860;
goto block_851;
}
}
else
{
lean_object* x_861; 
lean_free_object(x_813);
x_861 = lean_box(0);
x_820 = x_861;
goto block_851;
}
}
block_851:
{
lean_object* x_821; lean_object* x_822; uint8_t x_823; lean_object* x_824; lean_object* x_840; lean_object* x_841; lean_object* x_842; uint8_t x_843; 
lean_dec(x_820);
x_821 = lean_mk_string("stuck");
x_822 = lean_name_mk_string(x_776, x_821);
x_840 = lean_st_ref_get(x_6, x_816);
x_841 = lean_ctor_get(x_840, 0);
lean_inc(x_841);
x_842 = lean_ctor_get(x_841, 3);
lean_inc(x_842);
lean_dec(x_841);
x_843 = lean_ctor_get_uint8(x_842, sizeof(void*)*1);
lean_dec(x_842);
if (x_843 == 0)
{
lean_object* x_844; uint8_t x_845; 
x_844 = lean_ctor_get(x_840, 1);
lean_inc(x_844);
lean_dec(x_840);
x_845 = 0;
x_823 = x_845;
x_824 = x_844;
goto block_839;
}
else
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; uint8_t x_850; 
x_846 = lean_ctor_get(x_840, 1);
lean_inc(x_846);
lean_dec(x_840);
lean_inc(x_822);
x_847 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_822, x_3, x_4, x_5, x_6, x_846);
x_848 = lean_ctor_get(x_847, 0);
lean_inc(x_848);
x_849 = lean_ctor_get(x_847, 1);
lean_inc(x_849);
lean_dec(x_847);
x_850 = lean_unbox(x_848);
lean_dec(x_848);
x_823 = x_850;
x_824 = x_849;
goto block_839;
}
block_839:
{
if (x_823 == 0)
{
lean_object* x_825; 
lean_dec(x_822);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_825 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_824);
return x_825;
}
else
{
lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; 
x_826 = lean_mk_string("");
x_827 = l_Lean_stringToMessageData(x_826);
lean_dec(x_826);
x_828 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_828, 0, x_1);
lean_inc(x_827);
x_829 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_829, 0, x_827);
lean_ctor_set(x_829, 1, x_828);
x_830 = lean_mk_string(" =?= ");
x_831 = l_Lean_stringToMessageData(x_830);
lean_dec(x_830);
x_832 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_832, 0, x_829);
lean_ctor_set(x_832, 1, x_831);
x_833 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_833, 0, x_2);
x_834 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_834, 0, x_832);
lean_ctor_set(x_834, 1, x_833);
x_835 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_835, 0, x_834);
lean_ctor_set(x_835, 1, x_827);
x_836 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_822, x_835, x_3, x_4, x_5, x_6, x_824);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_837 = lean_ctor_get(x_836, 1);
lean_inc(x_837);
lean_dec(x_836);
x_838 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_837);
return x_838;
}
}
}
}
else
{
lean_object* x_862; uint8_t x_863; 
lean_free_object(x_813);
lean_dec(x_776);
x_862 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_816);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_863 = !lean_is_exclusive(x_862);
if (x_863 == 0)
{
lean_object* x_864; uint8_t x_865; lean_object* x_866; 
x_864 = lean_ctor_get(x_862, 0);
lean_dec(x_864);
x_865 = 1;
x_866 = lean_box(x_865);
lean_ctor_set(x_862, 0, x_866);
return x_862;
}
else
{
lean_object* x_867; uint8_t x_868; lean_object* x_869; lean_object* x_870; 
x_867 = lean_ctor_get(x_862, 1);
lean_inc(x_867);
lean_dec(x_862);
x_868 = 1;
x_869 = lean_box(x_868);
x_870 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_870, 0, x_869);
lean_ctor_set(x_870, 1, x_867);
return x_870;
}
}
}
else
{
lean_object* x_871; uint8_t x_872; 
lean_dec(x_817);
lean_free_object(x_813);
lean_dec(x_776);
x_871 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_816);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_872 = !lean_is_exclusive(x_871);
if (x_872 == 0)
{
lean_object* x_873; uint8_t x_874; lean_object* x_875; 
x_873 = lean_ctor_get(x_871, 0);
lean_dec(x_873);
x_874 = 1;
x_875 = lean_box(x_874);
lean_ctor_set(x_871, 0, x_875);
return x_871;
}
else
{
lean_object* x_876; uint8_t x_877; lean_object* x_878; lean_object* x_879; 
x_876 = lean_ctor_get(x_871, 1);
lean_inc(x_876);
lean_dec(x_871);
x_877 = 1;
x_878 = lean_box(x_877);
x_879 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_879, 0, x_878);
lean_ctor_set(x_879, 1, x_876);
return x_879;
}
}
}
else
{
lean_object* x_880; lean_object* x_881; lean_object* x_882; uint8_t x_883; 
x_880 = lean_ctor_get(x_813, 0);
x_881 = lean_ctor_get(x_813, 1);
lean_inc(x_881);
lean_inc(x_880);
lean_dec(x_813);
x_882 = lean_ctor_get(x_880, 0);
lean_inc(x_882);
lean_dec(x_880);
lean_inc(x_882);
x_883 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_882, x_1);
if (x_883 == 0)
{
uint8_t x_884; 
x_884 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_882, x_2);
if (x_884 == 0)
{
lean_object* x_885; lean_object* x_917; uint8_t x_918; 
x_917 = lean_ctor_get(x_3, 0);
lean_inc(x_917);
x_918 = lean_ctor_get_uint8(x_917, 4);
lean_dec(x_917);
if (x_918 == 0)
{
uint8_t x_919; lean_object* x_920; lean_object* x_921; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_919 = 0;
x_920 = lean_box(x_919);
x_921 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_921, 0, x_920);
lean_ctor_set(x_921, 1, x_881);
return x_921;
}
else
{
uint8_t x_922; 
x_922 = l_Lean_Level_isMVar(x_1);
if (x_922 == 0)
{
uint8_t x_923; 
x_923 = l_Lean_Level_isMVar(x_2);
if (x_923 == 0)
{
uint8_t x_924; lean_object* x_925; lean_object* x_926; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_924 = 0;
x_925 = lean_box(x_924);
x_926 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_926, 0, x_925);
lean_ctor_set(x_926, 1, x_881);
return x_926;
}
else
{
lean_object* x_927; 
x_927 = lean_box(0);
x_885 = x_927;
goto block_916;
}
}
else
{
lean_object* x_928; 
x_928 = lean_box(0);
x_885 = x_928;
goto block_916;
}
}
block_916:
{
lean_object* x_886; lean_object* x_887; uint8_t x_888; lean_object* x_889; lean_object* x_905; lean_object* x_906; lean_object* x_907; uint8_t x_908; 
lean_dec(x_885);
x_886 = lean_mk_string("stuck");
x_887 = lean_name_mk_string(x_776, x_886);
x_905 = lean_st_ref_get(x_6, x_881);
x_906 = lean_ctor_get(x_905, 0);
lean_inc(x_906);
x_907 = lean_ctor_get(x_906, 3);
lean_inc(x_907);
lean_dec(x_906);
x_908 = lean_ctor_get_uint8(x_907, sizeof(void*)*1);
lean_dec(x_907);
if (x_908 == 0)
{
lean_object* x_909; uint8_t x_910; 
x_909 = lean_ctor_get(x_905, 1);
lean_inc(x_909);
lean_dec(x_905);
x_910 = 0;
x_888 = x_910;
x_889 = x_909;
goto block_904;
}
else
{
lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; uint8_t x_915; 
x_911 = lean_ctor_get(x_905, 1);
lean_inc(x_911);
lean_dec(x_905);
lean_inc(x_887);
x_912 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_887, x_3, x_4, x_5, x_6, x_911);
x_913 = lean_ctor_get(x_912, 0);
lean_inc(x_913);
x_914 = lean_ctor_get(x_912, 1);
lean_inc(x_914);
lean_dec(x_912);
x_915 = lean_unbox(x_913);
lean_dec(x_913);
x_888 = x_915;
x_889 = x_914;
goto block_904;
}
block_904:
{
if (x_888 == 0)
{
lean_object* x_890; 
lean_dec(x_887);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_890 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_889);
return x_890;
}
else
{
lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; 
x_891 = lean_mk_string("");
x_892 = l_Lean_stringToMessageData(x_891);
lean_dec(x_891);
x_893 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_893, 0, x_1);
lean_inc(x_892);
x_894 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_894, 0, x_892);
lean_ctor_set(x_894, 1, x_893);
x_895 = lean_mk_string(" =?= ");
x_896 = l_Lean_stringToMessageData(x_895);
lean_dec(x_895);
x_897 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_897, 0, x_894);
lean_ctor_set(x_897, 1, x_896);
x_898 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_898, 0, x_2);
x_899 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_899, 0, x_897);
lean_ctor_set(x_899, 1, x_898);
x_900 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_900, 0, x_899);
lean_ctor_set(x_900, 1, x_892);
x_901 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_887, x_900, x_3, x_4, x_5, x_6, x_889);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_902 = lean_ctor_get(x_901, 1);
lean_inc(x_902);
lean_dec(x_901);
x_903 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_902);
return x_903;
}
}
}
}
else
{
lean_object* x_929; lean_object* x_930; lean_object* x_931; uint8_t x_932; lean_object* x_933; lean_object* x_934; 
lean_dec(x_776);
x_929 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_881);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_930 = lean_ctor_get(x_929, 1);
lean_inc(x_930);
if (lean_is_exclusive(x_929)) {
 lean_ctor_release(x_929, 0);
 lean_ctor_release(x_929, 1);
 x_931 = x_929;
} else {
 lean_dec_ref(x_929);
 x_931 = lean_box(0);
}
x_932 = 1;
x_933 = lean_box(x_932);
if (lean_is_scalar(x_931)) {
 x_934 = lean_alloc_ctor(0, 2, 0);
} else {
 x_934 = x_931;
}
lean_ctor_set(x_934, 0, x_933);
lean_ctor_set(x_934, 1, x_930);
return x_934;
}
}
else
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; uint8_t x_938; lean_object* x_939; lean_object* x_940; 
lean_dec(x_882);
lean_dec(x_776);
x_935 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_881);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_936 = lean_ctor_get(x_935, 1);
lean_inc(x_936);
if (lean_is_exclusive(x_935)) {
 lean_ctor_release(x_935, 0);
 lean_ctor_release(x_935, 1);
 x_937 = x_935;
} else {
 lean_dec_ref(x_935);
 x_937 = lean_box(0);
}
x_938 = 1;
x_939 = lean_box(x_938);
if (lean_is_scalar(x_937)) {
 x_940 = lean_alloc_ctor(0, 2, 0);
} else {
 x_940 = x_937;
}
lean_ctor_set(x_940, 0, x_939);
lean_ctor_set(x_940, 1, x_936);
return x_940;
}
}
}
}
else
{
lean_object* x_941; lean_object* x_942; uint8_t x_943; uint8_t x_944; 
x_941 = lean_ctor_get(x_801, 0);
x_942 = lean_ctor_get(x_801, 1);
lean_inc(x_942);
lean_inc(x_941);
lean_dec(x_801);
x_943 = lean_unbox(x_941);
x_944 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_943, x_794);
if (x_944 == 0)
{
uint8_t x_945; uint8_t x_946; uint8_t x_947; lean_object* x_948; lean_object* x_949; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_945 = 1;
x_946 = lean_unbox(x_941);
lean_dec(x_941);
x_947 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_946, x_945);
x_948 = lean_box(x_947);
x_949 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_949, 0, x_948);
lean_ctor_set(x_949, 1, x_942);
return x_949;
}
else
{
lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; uint8_t x_957; 
lean_dec(x_941);
x_950 = lean_st_ref_get(x_6, x_942);
x_951 = lean_ctor_get(x_950, 1);
lean_inc(x_951);
lean_dec(x_950);
x_952 = lean_st_ref_get(x_4, x_951);
x_953 = lean_ctor_get(x_952, 0);
lean_inc(x_953);
x_954 = lean_ctor_get(x_952, 1);
lean_inc(x_954);
if (lean_is_exclusive(x_952)) {
 lean_ctor_release(x_952, 0);
 lean_ctor_release(x_952, 1);
 x_955 = x_952;
} else {
 lean_dec_ref(x_952);
 x_955 = lean_box(0);
}
x_956 = lean_ctor_get(x_953, 0);
lean_inc(x_956);
lean_dec(x_953);
lean_inc(x_956);
x_957 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_956, x_1);
if (x_957 == 0)
{
uint8_t x_958; 
x_958 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_956, x_2);
if (x_958 == 0)
{
lean_object* x_959; lean_object* x_991; uint8_t x_992; 
x_991 = lean_ctor_get(x_3, 0);
lean_inc(x_991);
x_992 = lean_ctor_get_uint8(x_991, 4);
lean_dec(x_991);
if (x_992 == 0)
{
uint8_t x_993; lean_object* x_994; lean_object* x_995; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_993 = 0;
x_994 = lean_box(x_993);
if (lean_is_scalar(x_955)) {
 x_995 = lean_alloc_ctor(0, 2, 0);
} else {
 x_995 = x_955;
}
lean_ctor_set(x_995, 0, x_994);
lean_ctor_set(x_995, 1, x_954);
return x_995;
}
else
{
uint8_t x_996; 
x_996 = l_Lean_Level_isMVar(x_1);
if (x_996 == 0)
{
uint8_t x_997; 
x_997 = l_Lean_Level_isMVar(x_2);
if (x_997 == 0)
{
uint8_t x_998; lean_object* x_999; lean_object* x_1000; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_998 = 0;
x_999 = lean_box(x_998);
if (lean_is_scalar(x_955)) {
 x_1000 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1000 = x_955;
}
lean_ctor_set(x_1000, 0, x_999);
lean_ctor_set(x_1000, 1, x_954);
return x_1000;
}
else
{
lean_object* x_1001; 
lean_dec(x_955);
x_1001 = lean_box(0);
x_959 = x_1001;
goto block_990;
}
}
else
{
lean_object* x_1002; 
lean_dec(x_955);
x_1002 = lean_box(0);
x_959 = x_1002;
goto block_990;
}
}
block_990:
{
lean_object* x_960; lean_object* x_961; uint8_t x_962; lean_object* x_963; lean_object* x_979; lean_object* x_980; lean_object* x_981; uint8_t x_982; 
lean_dec(x_959);
x_960 = lean_mk_string("stuck");
x_961 = lean_name_mk_string(x_776, x_960);
x_979 = lean_st_ref_get(x_6, x_954);
x_980 = lean_ctor_get(x_979, 0);
lean_inc(x_980);
x_981 = lean_ctor_get(x_980, 3);
lean_inc(x_981);
lean_dec(x_980);
x_982 = lean_ctor_get_uint8(x_981, sizeof(void*)*1);
lean_dec(x_981);
if (x_982 == 0)
{
lean_object* x_983; uint8_t x_984; 
x_983 = lean_ctor_get(x_979, 1);
lean_inc(x_983);
lean_dec(x_979);
x_984 = 0;
x_962 = x_984;
x_963 = x_983;
goto block_978;
}
else
{
lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; uint8_t x_989; 
x_985 = lean_ctor_get(x_979, 1);
lean_inc(x_985);
lean_dec(x_979);
lean_inc(x_961);
x_986 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_961, x_3, x_4, x_5, x_6, x_985);
x_987 = lean_ctor_get(x_986, 0);
lean_inc(x_987);
x_988 = lean_ctor_get(x_986, 1);
lean_inc(x_988);
lean_dec(x_986);
x_989 = lean_unbox(x_987);
lean_dec(x_987);
x_962 = x_989;
x_963 = x_988;
goto block_978;
}
block_978:
{
if (x_962 == 0)
{
lean_object* x_964; 
lean_dec(x_961);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_964 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_963);
return x_964;
}
else
{
lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; 
x_965 = lean_mk_string("");
x_966 = l_Lean_stringToMessageData(x_965);
lean_dec(x_965);
x_967 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_967, 0, x_1);
lean_inc(x_966);
x_968 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_968, 0, x_966);
lean_ctor_set(x_968, 1, x_967);
x_969 = lean_mk_string(" =?= ");
x_970 = l_Lean_stringToMessageData(x_969);
lean_dec(x_969);
x_971 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_971, 0, x_968);
lean_ctor_set(x_971, 1, x_970);
x_972 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_972, 0, x_2);
x_973 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_973, 0, x_971);
lean_ctor_set(x_973, 1, x_972);
x_974 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_974, 0, x_973);
lean_ctor_set(x_974, 1, x_966);
x_975 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_961, x_974, x_3, x_4, x_5, x_6, x_963);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_976 = lean_ctor_get(x_975, 1);
lean_inc(x_976);
lean_dec(x_975);
x_977 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_976);
return x_977;
}
}
}
}
else
{
lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; uint8_t x_1006; lean_object* x_1007; lean_object* x_1008; 
lean_dec(x_955);
lean_dec(x_776);
x_1003 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_954);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1004 = lean_ctor_get(x_1003, 1);
lean_inc(x_1004);
if (lean_is_exclusive(x_1003)) {
 lean_ctor_release(x_1003, 0);
 lean_ctor_release(x_1003, 1);
 x_1005 = x_1003;
} else {
 lean_dec_ref(x_1003);
 x_1005 = lean_box(0);
}
x_1006 = 1;
x_1007 = lean_box(x_1006);
if (lean_is_scalar(x_1005)) {
 x_1008 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1008 = x_1005;
}
lean_ctor_set(x_1008, 0, x_1007);
lean_ctor_set(x_1008, 1, x_1004);
return x_1008;
}
}
else
{
lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; uint8_t x_1012; lean_object* x_1013; lean_object* x_1014; 
lean_dec(x_956);
lean_dec(x_955);
lean_dec(x_776);
x_1009 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_954);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1010 = lean_ctor_get(x_1009, 1);
lean_inc(x_1010);
if (lean_is_exclusive(x_1009)) {
 lean_ctor_release(x_1009, 0);
 lean_ctor_release(x_1009, 1);
 x_1011 = x_1009;
} else {
 lean_dec_ref(x_1009);
 x_1011 = lean_box(0);
}
x_1012 = 1;
x_1013 = lean_box(x_1012);
if (lean_is_scalar(x_1011)) {
 x_1014 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1014 = x_1011;
}
lean_ctor_set(x_1014, 0, x_1013);
lean_ctor_set(x_1014, 1, x_1010);
return x_1014;
}
}
}
}
else
{
uint8_t x_1015; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1015 = !lean_is_exclusive(x_801);
if (x_1015 == 0)
{
return x_801;
}
else
{
lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; 
x_1016 = lean_ctor_get(x_801, 0);
x_1017 = lean_ctor_get(x_801, 1);
lean_inc(x_1017);
lean_inc(x_1016);
lean_dec(x_801);
x_1018 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1018, 0, x_1016);
lean_ctor_set(x_1018, 1, x_1017);
return x_1018;
}
}
}
}
else
{
lean_object* x_1019; lean_object* x_1020; uint8_t x_1021; uint8_t x_1022; uint8_t x_1023; 
x_1019 = lean_ctor_get(x_790, 0);
x_1020 = lean_ctor_get(x_790, 1);
lean_inc(x_1020);
lean_inc(x_1019);
lean_dec(x_790);
x_1021 = 2;
x_1022 = lean_unbox(x_1019);
x_1023 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1022, x_1021);
if (x_1023 == 0)
{
uint8_t x_1024; uint8_t x_1025; uint8_t x_1026; lean_object* x_1027; lean_object* x_1028; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1024 = 1;
x_1025 = lean_unbox(x_1019);
lean_dec(x_1019);
x_1026 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1025, x_1024);
x_1027 = lean_box(x_1026);
x_1028 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1028, 0, x_1027);
lean_ctor_set(x_1028, 1, x_1020);
return x_1028;
}
else
{
lean_object* x_1029; 
lean_dec(x_1019);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_1029 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_1020);
if (lean_obj_tag(x_1029) == 0)
{
lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; uint8_t x_1033; uint8_t x_1034; 
x_1030 = lean_ctor_get(x_1029, 0);
lean_inc(x_1030);
x_1031 = lean_ctor_get(x_1029, 1);
lean_inc(x_1031);
if (lean_is_exclusive(x_1029)) {
 lean_ctor_release(x_1029, 0);
 lean_ctor_release(x_1029, 1);
 x_1032 = x_1029;
} else {
 lean_dec_ref(x_1029);
 x_1032 = lean_box(0);
}
x_1033 = lean_unbox(x_1030);
x_1034 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1033, x_1021);
if (x_1034 == 0)
{
uint8_t x_1035; uint8_t x_1036; uint8_t x_1037; lean_object* x_1038; lean_object* x_1039; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1035 = 1;
x_1036 = lean_unbox(x_1030);
lean_dec(x_1030);
x_1037 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1036, x_1035);
x_1038 = lean_box(x_1037);
if (lean_is_scalar(x_1032)) {
 x_1039 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1039 = x_1032;
}
lean_ctor_set(x_1039, 0, x_1038);
lean_ctor_set(x_1039, 1, x_1031);
return x_1039;
}
else
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; uint8_t x_1047; 
lean_dec(x_1032);
lean_dec(x_1030);
x_1040 = lean_st_ref_get(x_6, x_1031);
x_1041 = lean_ctor_get(x_1040, 1);
lean_inc(x_1041);
lean_dec(x_1040);
x_1042 = lean_st_ref_get(x_4, x_1041);
x_1043 = lean_ctor_get(x_1042, 0);
lean_inc(x_1043);
x_1044 = lean_ctor_get(x_1042, 1);
lean_inc(x_1044);
if (lean_is_exclusive(x_1042)) {
 lean_ctor_release(x_1042, 0);
 lean_ctor_release(x_1042, 1);
 x_1045 = x_1042;
} else {
 lean_dec_ref(x_1042);
 x_1045 = lean_box(0);
}
x_1046 = lean_ctor_get(x_1043, 0);
lean_inc(x_1046);
lean_dec(x_1043);
lean_inc(x_1046);
x_1047 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1046, x_1);
if (x_1047 == 0)
{
uint8_t x_1048; 
x_1048 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1046, x_2);
if (x_1048 == 0)
{
lean_object* x_1049; lean_object* x_1081; uint8_t x_1082; 
x_1081 = lean_ctor_get(x_3, 0);
lean_inc(x_1081);
x_1082 = lean_ctor_get_uint8(x_1081, 4);
lean_dec(x_1081);
if (x_1082 == 0)
{
uint8_t x_1083; lean_object* x_1084; lean_object* x_1085; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1083 = 0;
x_1084 = lean_box(x_1083);
if (lean_is_scalar(x_1045)) {
 x_1085 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1085 = x_1045;
}
lean_ctor_set(x_1085, 0, x_1084);
lean_ctor_set(x_1085, 1, x_1044);
return x_1085;
}
else
{
uint8_t x_1086; 
x_1086 = l_Lean_Level_isMVar(x_1);
if (x_1086 == 0)
{
uint8_t x_1087; 
x_1087 = l_Lean_Level_isMVar(x_2);
if (x_1087 == 0)
{
uint8_t x_1088; lean_object* x_1089; lean_object* x_1090; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1088 = 0;
x_1089 = lean_box(x_1088);
if (lean_is_scalar(x_1045)) {
 x_1090 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1090 = x_1045;
}
lean_ctor_set(x_1090, 0, x_1089);
lean_ctor_set(x_1090, 1, x_1044);
return x_1090;
}
else
{
lean_object* x_1091; 
lean_dec(x_1045);
x_1091 = lean_box(0);
x_1049 = x_1091;
goto block_1080;
}
}
else
{
lean_object* x_1092; 
lean_dec(x_1045);
x_1092 = lean_box(0);
x_1049 = x_1092;
goto block_1080;
}
}
block_1080:
{
lean_object* x_1050; lean_object* x_1051; uint8_t x_1052; lean_object* x_1053; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; uint8_t x_1072; 
lean_dec(x_1049);
x_1050 = lean_mk_string("stuck");
x_1051 = lean_name_mk_string(x_776, x_1050);
x_1069 = lean_st_ref_get(x_6, x_1044);
x_1070 = lean_ctor_get(x_1069, 0);
lean_inc(x_1070);
x_1071 = lean_ctor_get(x_1070, 3);
lean_inc(x_1071);
lean_dec(x_1070);
x_1072 = lean_ctor_get_uint8(x_1071, sizeof(void*)*1);
lean_dec(x_1071);
if (x_1072 == 0)
{
lean_object* x_1073; uint8_t x_1074; 
x_1073 = lean_ctor_get(x_1069, 1);
lean_inc(x_1073);
lean_dec(x_1069);
x_1074 = 0;
x_1052 = x_1074;
x_1053 = x_1073;
goto block_1068;
}
else
{
lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; uint8_t x_1079; 
x_1075 = lean_ctor_get(x_1069, 1);
lean_inc(x_1075);
lean_dec(x_1069);
lean_inc(x_1051);
x_1076 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1051, x_3, x_4, x_5, x_6, x_1075);
x_1077 = lean_ctor_get(x_1076, 0);
lean_inc(x_1077);
x_1078 = lean_ctor_get(x_1076, 1);
lean_inc(x_1078);
lean_dec(x_1076);
x_1079 = lean_unbox(x_1077);
lean_dec(x_1077);
x_1052 = x_1079;
x_1053 = x_1078;
goto block_1068;
}
block_1068:
{
if (x_1052 == 0)
{
lean_object* x_1054; 
lean_dec(x_1051);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1054 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1053);
return x_1054;
}
else
{
lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; 
x_1055 = lean_mk_string("");
x_1056 = l_Lean_stringToMessageData(x_1055);
lean_dec(x_1055);
x_1057 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1057, 0, x_1);
lean_inc(x_1056);
x_1058 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1058, 0, x_1056);
lean_ctor_set(x_1058, 1, x_1057);
x_1059 = lean_mk_string(" =?= ");
x_1060 = l_Lean_stringToMessageData(x_1059);
lean_dec(x_1059);
x_1061 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1061, 0, x_1058);
lean_ctor_set(x_1061, 1, x_1060);
x_1062 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1062, 0, x_2);
x_1063 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1063, 0, x_1061);
lean_ctor_set(x_1063, 1, x_1062);
x_1064 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1064, 0, x_1063);
lean_ctor_set(x_1064, 1, x_1056);
x_1065 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1051, x_1064, x_3, x_4, x_5, x_6, x_1053);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1066 = lean_ctor_get(x_1065, 1);
lean_inc(x_1066);
lean_dec(x_1065);
x_1067 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1066);
return x_1067;
}
}
}
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; uint8_t x_1096; lean_object* x_1097; lean_object* x_1098; 
lean_dec(x_1045);
lean_dec(x_776);
x_1093 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1044);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1094 = lean_ctor_get(x_1093, 1);
lean_inc(x_1094);
if (lean_is_exclusive(x_1093)) {
 lean_ctor_release(x_1093, 0);
 lean_ctor_release(x_1093, 1);
 x_1095 = x_1093;
} else {
 lean_dec_ref(x_1093);
 x_1095 = lean_box(0);
}
x_1096 = 1;
x_1097 = lean_box(x_1096);
if (lean_is_scalar(x_1095)) {
 x_1098 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1098 = x_1095;
}
lean_ctor_set(x_1098, 0, x_1097);
lean_ctor_set(x_1098, 1, x_1094);
return x_1098;
}
}
else
{
lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; uint8_t x_1102; lean_object* x_1103; lean_object* x_1104; 
lean_dec(x_1046);
lean_dec(x_1045);
lean_dec(x_776);
x_1099 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1044);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1100 = lean_ctor_get(x_1099, 1);
lean_inc(x_1100);
if (lean_is_exclusive(x_1099)) {
 lean_ctor_release(x_1099, 0);
 lean_ctor_release(x_1099, 1);
 x_1101 = x_1099;
} else {
 lean_dec_ref(x_1099);
 x_1101 = lean_box(0);
}
x_1102 = 1;
x_1103 = lean_box(x_1102);
if (lean_is_scalar(x_1101)) {
 x_1104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1104 = x_1101;
}
lean_ctor_set(x_1104, 0, x_1103);
lean_ctor_set(x_1104, 1, x_1100);
return x_1104;
}
}
}
else
{
lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1105 = lean_ctor_get(x_1029, 0);
lean_inc(x_1105);
x_1106 = lean_ctor_get(x_1029, 1);
lean_inc(x_1106);
if (lean_is_exclusive(x_1029)) {
 lean_ctor_release(x_1029, 0);
 lean_ctor_release(x_1029, 1);
 x_1107 = x_1029;
} else {
 lean_dec_ref(x_1029);
 x_1107 = lean_box(0);
}
if (lean_is_scalar(x_1107)) {
 x_1108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1108 = x_1107;
}
lean_ctor_set(x_1108, 0, x_1105);
lean_ctor_set(x_1108, 1, x_1106);
return x_1108;
}
}
}
}
else
{
uint8_t x_1109; 
lean_dec(x_776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1109 = !lean_is_exclusive(x_790);
if (x_1109 == 0)
{
return x_790;
}
else
{
lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; 
x_1110 = lean_ctor_get(x_790, 0);
x_1111 = lean_ctor_get(x_790, 1);
lean_inc(x_1111);
lean_inc(x_1110);
lean_dec(x_790);
x_1112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1112, 0, x_1110);
lean_ctor_set(x_1112, 1, x_1111);
return x_1112;
}
}
}
}
}
block_1130:
{
if (x_1116 == 0)
{
lean_dec(x_1115);
x_777 = x_1117;
goto block_1113;
}
else
{
lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; 
x_1118 = lean_mk_string("");
x_1119 = l_Lean_stringToMessageData(x_1118);
lean_dec(x_1118);
lean_inc(x_1);
x_1120 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1120, 0, x_1);
lean_inc(x_1119);
x_1121 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1121, 0, x_1119);
lean_ctor_set(x_1121, 1, x_1120);
x_1122 = lean_mk_string(" =?= ");
x_1123 = l_Lean_stringToMessageData(x_1122);
lean_dec(x_1122);
x_1124 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1124, 0, x_1121);
lean_ctor_set(x_1124, 1, x_1123);
lean_inc(x_2);
x_1125 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1125, 0, x_2);
x_1126 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1126, 0, x_1124);
lean_ctor_set(x_1126, 1, x_1125);
x_1127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1127, 0, x_1126);
lean_ctor_set(x_1127, 1, x_1119);
x_1128 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1115, x_1127, x_3, x_4, x_5, x_6, x_1117);
x_1129 = lean_ctor_get(x_1128, 1);
lean_inc(x_1129);
lean_dec(x_1128);
x_777 = x_1129;
goto block_1113;
}
}
}
else
{
lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; uint8_t x_1145; lean_object* x_1146; lean_object* x_1147; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1142 = lean_unsigned_to_nat(0u);
x_1143 = l_Lean_Level_getOffsetAux(x_1, x_1142);
lean_dec(x_1);
x_1144 = l_Lean_Level_getOffsetAux(x_2, x_1142);
lean_dec(x_2);
x_1145 = lean_nat_dec_eq(x_1143, x_1144);
lean_dec(x_1144);
lean_dec(x_1143);
x_1146 = lean_box(x_1145);
x_1147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1147, 0, x_1146);
lean_ctor_set(x_1147, 1, x_7);
return x_1147;
}
}
case 3:
{
lean_object* x_1148; lean_object* x_1149; uint8_t x_1150; 
x_1148 = l_Lean_Level_getLevelOffset(x_1);
x_1149 = l_Lean_Level_getLevelOffset(x_2);
x_1150 = lean_level_eq(x_1148, x_1149);
lean_dec(x_1149);
lean_dec(x_1148);
if (x_1150 == 0)
{
lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1493; lean_object* x_1494; uint8_t x_1495; lean_object* x_1496; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; uint8_t x_1513; 
x_1151 = lean_box(0);
x_1152 = lean_mk_string("Meta");
x_1153 = lean_name_mk_string(x_1151, x_1152);
x_1154 = lean_mk_string("isLevelDefEq");
x_1155 = lean_name_mk_string(x_1153, x_1154);
x_1493 = lean_mk_string("step");
lean_inc(x_1155);
x_1494 = lean_name_mk_string(x_1155, x_1493);
x_1510 = lean_st_ref_get(x_6, x_7);
x_1511 = lean_ctor_get(x_1510, 0);
lean_inc(x_1511);
x_1512 = lean_ctor_get(x_1511, 3);
lean_inc(x_1512);
lean_dec(x_1511);
x_1513 = lean_ctor_get_uint8(x_1512, sizeof(void*)*1);
lean_dec(x_1512);
if (x_1513 == 0)
{
lean_object* x_1514; uint8_t x_1515; 
x_1514 = lean_ctor_get(x_1510, 1);
lean_inc(x_1514);
lean_dec(x_1510);
x_1515 = 0;
x_1495 = x_1515;
x_1496 = x_1514;
goto block_1509;
}
else
{
lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; uint8_t x_1520; 
x_1516 = lean_ctor_get(x_1510, 1);
lean_inc(x_1516);
lean_dec(x_1510);
lean_inc(x_1494);
x_1517 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1494, x_3, x_4, x_5, x_6, x_1516);
x_1518 = lean_ctor_get(x_1517, 0);
lean_inc(x_1518);
x_1519 = lean_ctor_get(x_1517, 1);
lean_inc(x_1519);
lean_dec(x_1517);
x_1520 = lean_unbox(x_1518);
lean_dec(x_1518);
x_1495 = x_1520;
x_1496 = x_1519;
goto block_1509;
}
block_1492:
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; uint8_t x_1165; 
lean_inc(x_1);
x_1157 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_1156);
x_1158 = lean_ctor_get(x_1157, 0);
lean_inc(x_1158);
x_1159 = lean_ctor_get(x_1157, 1);
lean_inc(x_1159);
lean_dec(x_1157);
x_1160 = l_Lean_Level_normalize(x_1158);
lean_dec(x_1158);
lean_inc(x_2);
x_1161 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_1159);
x_1162 = lean_ctor_get(x_1161, 0);
lean_inc(x_1162);
x_1163 = lean_ctor_get(x_1161, 1);
lean_inc(x_1163);
lean_dec(x_1161);
x_1164 = l_Lean_Level_normalize(x_1162);
lean_dec(x_1162);
x_1165 = lean_level_eq(x_1, x_1160);
if (x_1165 == 0)
{
lean_dec(x_1155);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_1160;
x_2 = x_1164;
x_7 = x_1163;
goto _start;
}
else
{
uint8_t x_1167; 
x_1167 = lean_level_eq(x_2, x_1164);
if (x_1167 == 0)
{
lean_dec(x_1155);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_1160;
x_2 = x_1164;
x_7 = x_1163;
goto _start;
}
else
{
lean_object* x_1169; 
lean_dec(x_1164);
lean_dec(x_1160);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_1169 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_1163);
if (lean_obj_tag(x_1169) == 0)
{
uint8_t x_1170; 
x_1170 = !lean_is_exclusive(x_1169);
if (x_1170 == 0)
{
lean_object* x_1171; lean_object* x_1172; uint8_t x_1173; uint8_t x_1174; uint8_t x_1175; 
x_1171 = lean_ctor_get(x_1169, 0);
x_1172 = lean_ctor_get(x_1169, 1);
x_1173 = 2;
x_1174 = lean_unbox(x_1171);
x_1175 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1174, x_1173);
if (x_1175 == 0)
{
uint8_t x_1176; uint8_t x_1177; uint8_t x_1178; lean_object* x_1179; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1176 = 1;
x_1177 = lean_unbox(x_1171);
lean_dec(x_1171);
x_1178 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1177, x_1176);
x_1179 = lean_box(x_1178);
lean_ctor_set(x_1169, 0, x_1179);
return x_1169;
}
else
{
lean_object* x_1180; 
lean_free_object(x_1169);
lean_dec(x_1171);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_1180 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_1172);
if (lean_obj_tag(x_1180) == 0)
{
uint8_t x_1181; 
x_1181 = !lean_is_exclusive(x_1180);
if (x_1181 == 0)
{
lean_object* x_1182; lean_object* x_1183; uint8_t x_1184; uint8_t x_1185; 
x_1182 = lean_ctor_get(x_1180, 0);
x_1183 = lean_ctor_get(x_1180, 1);
x_1184 = lean_unbox(x_1182);
x_1185 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1184, x_1173);
if (x_1185 == 0)
{
uint8_t x_1186; uint8_t x_1187; uint8_t x_1188; lean_object* x_1189; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1186 = 1;
x_1187 = lean_unbox(x_1182);
lean_dec(x_1182);
x_1188 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1187, x_1186);
x_1189 = lean_box(x_1188);
lean_ctor_set(x_1180, 0, x_1189);
return x_1180;
}
else
{
lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; uint8_t x_1193; 
lean_free_object(x_1180);
lean_dec(x_1182);
x_1190 = lean_st_ref_get(x_6, x_1183);
x_1191 = lean_ctor_get(x_1190, 1);
lean_inc(x_1191);
lean_dec(x_1190);
x_1192 = lean_st_ref_get(x_4, x_1191);
x_1193 = !lean_is_exclusive(x_1192);
if (x_1193 == 0)
{
lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; uint8_t x_1197; 
x_1194 = lean_ctor_get(x_1192, 0);
x_1195 = lean_ctor_get(x_1192, 1);
x_1196 = lean_ctor_get(x_1194, 0);
lean_inc(x_1196);
lean_dec(x_1194);
lean_inc(x_1196);
x_1197 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1196, x_1);
if (x_1197 == 0)
{
uint8_t x_1198; 
x_1198 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1196, x_2);
if (x_1198 == 0)
{
lean_object* x_1199; lean_object* x_1231; uint8_t x_1232; 
x_1231 = lean_ctor_get(x_3, 0);
lean_inc(x_1231);
x_1232 = lean_ctor_get_uint8(x_1231, 4);
lean_dec(x_1231);
if (x_1232 == 0)
{
uint8_t x_1233; lean_object* x_1234; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1233 = 0;
x_1234 = lean_box(x_1233);
lean_ctor_set(x_1192, 0, x_1234);
return x_1192;
}
else
{
uint8_t x_1235; 
x_1235 = l_Lean_Level_isMVar(x_1);
if (x_1235 == 0)
{
uint8_t x_1236; 
x_1236 = l_Lean_Level_isMVar(x_2);
if (x_1236 == 0)
{
uint8_t x_1237; lean_object* x_1238; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1237 = 0;
x_1238 = lean_box(x_1237);
lean_ctor_set(x_1192, 0, x_1238);
return x_1192;
}
else
{
lean_object* x_1239; 
lean_free_object(x_1192);
x_1239 = lean_box(0);
x_1199 = x_1239;
goto block_1230;
}
}
else
{
lean_object* x_1240; 
lean_free_object(x_1192);
x_1240 = lean_box(0);
x_1199 = x_1240;
goto block_1230;
}
}
block_1230:
{
lean_object* x_1200; lean_object* x_1201; uint8_t x_1202; lean_object* x_1203; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; uint8_t x_1222; 
lean_dec(x_1199);
x_1200 = lean_mk_string("stuck");
x_1201 = lean_name_mk_string(x_1155, x_1200);
x_1219 = lean_st_ref_get(x_6, x_1195);
x_1220 = lean_ctor_get(x_1219, 0);
lean_inc(x_1220);
x_1221 = lean_ctor_get(x_1220, 3);
lean_inc(x_1221);
lean_dec(x_1220);
x_1222 = lean_ctor_get_uint8(x_1221, sizeof(void*)*1);
lean_dec(x_1221);
if (x_1222 == 0)
{
lean_object* x_1223; uint8_t x_1224; 
x_1223 = lean_ctor_get(x_1219, 1);
lean_inc(x_1223);
lean_dec(x_1219);
x_1224 = 0;
x_1202 = x_1224;
x_1203 = x_1223;
goto block_1218;
}
else
{
lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; uint8_t x_1229; 
x_1225 = lean_ctor_get(x_1219, 1);
lean_inc(x_1225);
lean_dec(x_1219);
lean_inc(x_1201);
x_1226 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1201, x_3, x_4, x_5, x_6, x_1225);
x_1227 = lean_ctor_get(x_1226, 0);
lean_inc(x_1227);
x_1228 = lean_ctor_get(x_1226, 1);
lean_inc(x_1228);
lean_dec(x_1226);
x_1229 = lean_unbox(x_1227);
lean_dec(x_1227);
x_1202 = x_1229;
x_1203 = x_1228;
goto block_1218;
}
block_1218:
{
if (x_1202 == 0)
{
lean_object* x_1204; 
lean_dec(x_1201);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1204 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1203);
return x_1204;
}
else
{
lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; 
x_1205 = lean_mk_string("");
x_1206 = l_Lean_stringToMessageData(x_1205);
lean_dec(x_1205);
x_1207 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1207, 0, x_1);
lean_inc(x_1206);
x_1208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1208, 0, x_1206);
lean_ctor_set(x_1208, 1, x_1207);
x_1209 = lean_mk_string(" =?= ");
x_1210 = l_Lean_stringToMessageData(x_1209);
lean_dec(x_1209);
x_1211 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1211, 0, x_1208);
lean_ctor_set(x_1211, 1, x_1210);
x_1212 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1212, 0, x_2);
x_1213 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1213, 0, x_1211);
lean_ctor_set(x_1213, 1, x_1212);
x_1214 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1214, 0, x_1213);
lean_ctor_set(x_1214, 1, x_1206);
x_1215 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1201, x_1214, x_3, x_4, x_5, x_6, x_1203);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1216 = lean_ctor_get(x_1215, 1);
lean_inc(x_1216);
lean_dec(x_1215);
x_1217 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1216);
return x_1217;
}
}
}
}
else
{
lean_object* x_1241; uint8_t x_1242; 
lean_free_object(x_1192);
lean_dec(x_1155);
x_1241 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1195);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1242 = !lean_is_exclusive(x_1241);
if (x_1242 == 0)
{
lean_object* x_1243; uint8_t x_1244; lean_object* x_1245; 
x_1243 = lean_ctor_get(x_1241, 0);
lean_dec(x_1243);
x_1244 = 1;
x_1245 = lean_box(x_1244);
lean_ctor_set(x_1241, 0, x_1245);
return x_1241;
}
else
{
lean_object* x_1246; uint8_t x_1247; lean_object* x_1248; lean_object* x_1249; 
x_1246 = lean_ctor_get(x_1241, 1);
lean_inc(x_1246);
lean_dec(x_1241);
x_1247 = 1;
x_1248 = lean_box(x_1247);
x_1249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1249, 0, x_1248);
lean_ctor_set(x_1249, 1, x_1246);
return x_1249;
}
}
}
else
{
lean_object* x_1250; uint8_t x_1251; 
lean_dec(x_1196);
lean_free_object(x_1192);
lean_dec(x_1155);
x_1250 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1195);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1251 = !lean_is_exclusive(x_1250);
if (x_1251 == 0)
{
lean_object* x_1252; uint8_t x_1253; lean_object* x_1254; 
x_1252 = lean_ctor_get(x_1250, 0);
lean_dec(x_1252);
x_1253 = 1;
x_1254 = lean_box(x_1253);
lean_ctor_set(x_1250, 0, x_1254);
return x_1250;
}
else
{
lean_object* x_1255; uint8_t x_1256; lean_object* x_1257; lean_object* x_1258; 
x_1255 = lean_ctor_get(x_1250, 1);
lean_inc(x_1255);
lean_dec(x_1250);
x_1256 = 1;
x_1257 = lean_box(x_1256);
x_1258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1258, 0, x_1257);
lean_ctor_set(x_1258, 1, x_1255);
return x_1258;
}
}
}
else
{
lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; uint8_t x_1262; 
x_1259 = lean_ctor_get(x_1192, 0);
x_1260 = lean_ctor_get(x_1192, 1);
lean_inc(x_1260);
lean_inc(x_1259);
lean_dec(x_1192);
x_1261 = lean_ctor_get(x_1259, 0);
lean_inc(x_1261);
lean_dec(x_1259);
lean_inc(x_1261);
x_1262 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1261, x_1);
if (x_1262 == 0)
{
uint8_t x_1263; 
x_1263 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1261, x_2);
if (x_1263 == 0)
{
lean_object* x_1264; lean_object* x_1296; uint8_t x_1297; 
x_1296 = lean_ctor_get(x_3, 0);
lean_inc(x_1296);
x_1297 = lean_ctor_get_uint8(x_1296, 4);
lean_dec(x_1296);
if (x_1297 == 0)
{
uint8_t x_1298; lean_object* x_1299; lean_object* x_1300; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1298 = 0;
x_1299 = lean_box(x_1298);
x_1300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1300, 0, x_1299);
lean_ctor_set(x_1300, 1, x_1260);
return x_1300;
}
else
{
uint8_t x_1301; 
x_1301 = l_Lean_Level_isMVar(x_1);
if (x_1301 == 0)
{
uint8_t x_1302; 
x_1302 = l_Lean_Level_isMVar(x_2);
if (x_1302 == 0)
{
uint8_t x_1303; lean_object* x_1304; lean_object* x_1305; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1303 = 0;
x_1304 = lean_box(x_1303);
x_1305 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1305, 0, x_1304);
lean_ctor_set(x_1305, 1, x_1260);
return x_1305;
}
else
{
lean_object* x_1306; 
x_1306 = lean_box(0);
x_1264 = x_1306;
goto block_1295;
}
}
else
{
lean_object* x_1307; 
x_1307 = lean_box(0);
x_1264 = x_1307;
goto block_1295;
}
}
block_1295:
{
lean_object* x_1265; lean_object* x_1266; uint8_t x_1267; lean_object* x_1268; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; uint8_t x_1287; 
lean_dec(x_1264);
x_1265 = lean_mk_string("stuck");
x_1266 = lean_name_mk_string(x_1155, x_1265);
x_1284 = lean_st_ref_get(x_6, x_1260);
x_1285 = lean_ctor_get(x_1284, 0);
lean_inc(x_1285);
x_1286 = lean_ctor_get(x_1285, 3);
lean_inc(x_1286);
lean_dec(x_1285);
x_1287 = lean_ctor_get_uint8(x_1286, sizeof(void*)*1);
lean_dec(x_1286);
if (x_1287 == 0)
{
lean_object* x_1288; uint8_t x_1289; 
x_1288 = lean_ctor_get(x_1284, 1);
lean_inc(x_1288);
lean_dec(x_1284);
x_1289 = 0;
x_1267 = x_1289;
x_1268 = x_1288;
goto block_1283;
}
else
{
lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; uint8_t x_1294; 
x_1290 = lean_ctor_get(x_1284, 1);
lean_inc(x_1290);
lean_dec(x_1284);
lean_inc(x_1266);
x_1291 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1266, x_3, x_4, x_5, x_6, x_1290);
x_1292 = lean_ctor_get(x_1291, 0);
lean_inc(x_1292);
x_1293 = lean_ctor_get(x_1291, 1);
lean_inc(x_1293);
lean_dec(x_1291);
x_1294 = lean_unbox(x_1292);
lean_dec(x_1292);
x_1267 = x_1294;
x_1268 = x_1293;
goto block_1283;
}
block_1283:
{
if (x_1267 == 0)
{
lean_object* x_1269; 
lean_dec(x_1266);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1269 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1268);
return x_1269;
}
else
{
lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; 
x_1270 = lean_mk_string("");
x_1271 = l_Lean_stringToMessageData(x_1270);
lean_dec(x_1270);
x_1272 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1272, 0, x_1);
lean_inc(x_1271);
x_1273 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1273, 0, x_1271);
lean_ctor_set(x_1273, 1, x_1272);
x_1274 = lean_mk_string(" =?= ");
x_1275 = l_Lean_stringToMessageData(x_1274);
lean_dec(x_1274);
x_1276 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1276, 0, x_1273);
lean_ctor_set(x_1276, 1, x_1275);
x_1277 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1277, 0, x_2);
x_1278 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1278, 0, x_1276);
lean_ctor_set(x_1278, 1, x_1277);
x_1279 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1279, 0, x_1278);
lean_ctor_set(x_1279, 1, x_1271);
x_1280 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1266, x_1279, x_3, x_4, x_5, x_6, x_1268);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1281 = lean_ctor_get(x_1280, 1);
lean_inc(x_1281);
lean_dec(x_1280);
x_1282 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1281);
return x_1282;
}
}
}
}
else
{
lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; uint8_t x_1311; lean_object* x_1312; lean_object* x_1313; 
lean_dec(x_1155);
x_1308 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1260);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1309 = lean_ctor_get(x_1308, 1);
lean_inc(x_1309);
if (lean_is_exclusive(x_1308)) {
 lean_ctor_release(x_1308, 0);
 lean_ctor_release(x_1308, 1);
 x_1310 = x_1308;
} else {
 lean_dec_ref(x_1308);
 x_1310 = lean_box(0);
}
x_1311 = 1;
x_1312 = lean_box(x_1311);
if (lean_is_scalar(x_1310)) {
 x_1313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1313 = x_1310;
}
lean_ctor_set(x_1313, 0, x_1312);
lean_ctor_set(x_1313, 1, x_1309);
return x_1313;
}
}
else
{
lean_object* x_1314; lean_object* x_1315; lean_object* x_1316; uint8_t x_1317; lean_object* x_1318; lean_object* x_1319; 
lean_dec(x_1261);
lean_dec(x_1155);
x_1314 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1260);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1315 = lean_ctor_get(x_1314, 1);
lean_inc(x_1315);
if (lean_is_exclusive(x_1314)) {
 lean_ctor_release(x_1314, 0);
 lean_ctor_release(x_1314, 1);
 x_1316 = x_1314;
} else {
 lean_dec_ref(x_1314);
 x_1316 = lean_box(0);
}
x_1317 = 1;
x_1318 = lean_box(x_1317);
if (lean_is_scalar(x_1316)) {
 x_1319 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1319 = x_1316;
}
lean_ctor_set(x_1319, 0, x_1318);
lean_ctor_set(x_1319, 1, x_1315);
return x_1319;
}
}
}
}
else
{
lean_object* x_1320; lean_object* x_1321; uint8_t x_1322; uint8_t x_1323; 
x_1320 = lean_ctor_get(x_1180, 0);
x_1321 = lean_ctor_get(x_1180, 1);
lean_inc(x_1321);
lean_inc(x_1320);
lean_dec(x_1180);
x_1322 = lean_unbox(x_1320);
x_1323 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1322, x_1173);
if (x_1323 == 0)
{
uint8_t x_1324; uint8_t x_1325; uint8_t x_1326; lean_object* x_1327; lean_object* x_1328; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1324 = 1;
x_1325 = lean_unbox(x_1320);
lean_dec(x_1320);
x_1326 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1325, x_1324);
x_1327 = lean_box(x_1326);
x_1328 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1328, 0, x_1327);
lean_ctor_set(x_1328, 1, x_1321);
return x_1328;
}
else
{
lean_object* x_1329; lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; uint8_t x_1336; 
lean_dec(x_1320);
x_1329 = lean_st_ref_get(x_6, x_1321);
x_1330 = lean_ctor_get(x_1329, 1);
lean_inc(x_1330);
lean_dec(x_1329);
x_1331 = lean_st_ref_get(x_4, x_1330);
x_1332 = lean_ctor_get(x_1331, 0);
lean_inc(x_1332);
x_1333 = lean_ctor_get(x_1331, 1);
lean_inc(x_1333);
if (lean_is_exclusive(x_1331)) {
 lean_ctor_release(x_1331, 0);
 lean_ctor_release(x_1331, 1);
 x_1334 = x_1331;
} else {
 lean_dec_ref(x_1331);
 x_1334 = lean_box(0);
}
x_1335 = lean_ctor_get(x_1332, 0);
lean_inc(x_1335);
lean_dec(x_1332);
lean_inc(x_1335);
x_1336 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1335, x_1);
if (x_1336 == 0)
{
uint8_t x_1337; 
x_1337 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1335, x_2);
if (x_1337 == 0)
{
lean_object* x_1338; lean_object* x_1370; uint8_t x_1371; 
x_1370 = lean_ctor_get(x_3, 0);
lean_inc(x_1370);
x_1371 = lean_ctor_get_uint8(x_1370, 4);
lean_dec(x_1370);
if (x_1371 == 0)
{
uint8_t x_1372; lean_object* x_1373; lean_object* x_1374; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1372 = 0;
x_1373 = lean_box(x_1372);
if (lean_is_scalar(x_1334)) {
 x_1374 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1374 = x_1334;
}
lean_ctor_set(x_1374, 0, x_1373);
lean_ctor_set(x_1374, 1, x_1333);
return x_1374;
}
else
{
uint8_t x_1375; 
x_1375 = l_Lean_Level_isMVar(x_1);
if (x_1375 == 0)
{
uint8_t x_1376; 
x_1376 = l_Lean_Level_isMVar(x_2);
if (x_1376 == 0)
{
uint8_t x_1377; lean_object* x_1378; lean_object* x_1379; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1377 = 0;
x_1378 = lean_box(x_1377);
if (lean_is_scalar(x_1334)) {
 x_1379 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1379 = x_1334;
}
lean_ctor_set(x_1379, 0, x_1378);
lean_ctor_set(x_1379, 1, x_1333);
return x_1379;
}
else
{
lean_object* x_1380; 
lean_dec(x_1334);
x_1380 = lean_box(0);
x_1338 = x_1380;
goto block_1369;
}
}
else
{
lean_object* x_1381; 
lean_dec(x_1334);
x_1381 = lean_box(0);
x_1338 = x_1381;
goto block_1369;
}
}
block_1369:
{
lean_object* x_1339; lean_object* x_1340; uint8_t x_1341; lean_object* x_1342; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; uint8_t x_1361; 
lean_dec(x_1338);
x_1339 = lean_mk_string("stuck");
x_1340 = lean_name_mk_string(x_1155, x_1339);
x_1358 = lean_st_ref_get(x_6, x_1333);
x_1359 = lean_ctor_get(x_1358, 0);
lean_inc(x_1359);
x_1360 = lean_ctor_get(x_1359, 3);
lean_inc(x_1360);
lean_dec(x_1359);
x_1361 = lean_ctor_get_uint8(x_1360, sizeof(void*)*1);
lean_dec(x_1360);
if (x_1361 == 0)
{
lean_object* x_1362; uint8_t x_1363; 
x_1362 = lean_ctor_get(x_1358, 1);
lean_inc(x_1362);
lean_dec(x_1358);
x_1363 = 0;
x_1341 = x_1363;
x_1342 = x_1362;
goto block_1357;
}
else
{
lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; uint8_t x_1368; 
x_1364 = lean_ctor_get(x_1358, 1);
lean_inc(x_1364);
lean_dec(x_1358);
lean_inc(x_1340);
x_1365 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1340, x_3, x_4, x_5, x_6, x_1364);
x_1366 = lean_ctor_get(x_1365, 0);
lean_inc(x_1366);
x_1367 = lean_ctor_get(x_1365, 1);
lean_inc(x_1367);
lean_dec(x_1365);
x_1368 = lean_unbox(x_1366);
lean_dec(x_1366);
x_1341 = x_1368;
x_1342 = x_1367;
goto block_1357;
}
block_1357:
{
if (x_1341 == 0)
{
lean_object* x_1343; 
lean_dec(x_1340);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1343 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1342);
return x_1343;
}
else
{
lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; 
x_1344 = lean_mk_string("");
x_1345 = l_Lean_stringToMessageData(x_1344);
lean_dec(x_1344);
x_1346 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1346, 0, x_1);
lean_inc(x_1345);
x_1347 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1347, 0, x_1345);
lean_ctor_set(x_1347, 1, x_1346);
x_1348 = lean_mk_string(" =?= ");
x_1349 = l_Lean_stringToMessageData(x_1348);
lean_dec(x_1348);
x_1350 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1350, 0, x_1347);
lean_ctor_set(x_1350, 1, x_1349);
x_1351 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1351, 0, x_2);
x_1352 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1352, 0, x_1350);
lean_ctor_set(x_1352, 1, x_1351);
x_1353 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1353, 0, x_1352);
lean_ctor_set(x_1353, 1, x_1345);
x_1354 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1340, x_1353, x_3, x_4, x_5, x_6, x_1342);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1355 = lean_ctor_get(x_1354, 1);
lean_inc(x_1355);
lean_dec(x_1354);
x_1356 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1355);
return x_1356;
}
}
}
}
else
{
lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; uint8_t x_1385; lean_object* x_1386; lean_object* x_1387; 
lean_dec(x_1334);
lean_dec(x_1155);
x_1382 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1333);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1383 = lean_ctor_get(x_1382, 1);
lean_inc(x_1383);
if (lean_is_exclusive(x_1382)) {
 lean_ctor_release(x_1382, 0);
 lean_ctor_release(x_1382, 1);
 x_1384 = x_1382;
} else {
 lean_dec_ref(x_1382);
 x_1384 = lean_box(0);
}
x_1385 = 1;
x_1386 = lean_box(x_1385);
if (lean_is_scalar(x_1384)) {
 x_1387 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1387 = x_1384;
}
lean_ctor_set(x_1387, 0, x_1386);
lean_ctor_set(x_1387, 1, x_1383);
return x_1387;
}
}
else
{
lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; uint8_t x_1391; lean_object* x_1392; lean_object* x_1393; 
lean_dec(x_1335);
lean_dec(x_1334);
lean_dec(x_1155);
x_1388 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1333);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1389 = lean_ctor_get(x_1388, 1);
lean_inc(x_1389);
if (lean_is_exclusive(x_1388)) {
 lean_ctor_release(x_1388, 0);
 lean_ctor_release(x_1388, 1);
 x_1390 = x_1388;
} else {
 lean_dec_ref(x_1388);
 x_1390 = lean_box(0);
}
x_1391 = 1;
x_1392 = lean_box(x_1391);
if (lean_is_scalar(x_1390)) {
 x_1393 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1393 = x_1390;
}
lean_ctor_set(x_1393, 0, x_1392);
lean_ctor_set(x_1393, 1, x_1389);
return x_1393;
}
}
}
}
else
{
uint8_t x_1394; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1394 = !lean_is_exclusive(x_1180);
if (x_1394 == 0)
{
return x_1180;
}
else
{
lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; 
x_1395 = lean_ctor_get(x_1180, 0);
x_1396 = lean_ctor_get(x_1180, 1);
lean_inc(x_1396);
lean_inc(x_1395);
lean_dec(x_1180);
x_1397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1397, 0, x_1395);
lean_ctor_set(x_1397, 1, x_1396);
return x_1397;
}
}
}
}
else
{
lean_object* x_1398; lean_object* x_1399; uint8_t x_1400; uint8_t x_1401; uint8_t x_1402; 
x_1398 = lean_ctor_get(x_1169, 0);
x_1399 = lean_ctor_get(x_1169, 1);
lean_inc(x_1399);
lean_inc(x_1398);
lean_dec(x_1169);
x_1400 = 2;
x_1401 = lean_unbox(x_1398);
x_1402 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1401, x_1400);
if (x_1402 == 0)
{
uint8_t x_1403; uint8_t x_1404; uint8_t x_1405; lean_object* x_1406; lean_object* x_1407; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1403 = 1;
x_1404 = lean_unbox(x_1398);
lean_dec(x_1398);
x_1405 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1404, x_1403);
x_1406 = lean_box(x_1405);
x_1407 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1407, 0, x_1406);
lean_ctor_set(x_1407, 1, x_1399);
return x_1407;
}
else
{
lean_object* x_1408; 
lean_dec(x_1398);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_1408 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_1399);
if (lean_obj_tag(x_1408) == 0)
{
lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; uint8_t x_1412; uint8_t x_1413; 
x_1409 = lean_ctor_get(x_1408, 0);
lean_inc(x_1409);
x_1410 = lean_ctor_get(x_1408, 1);
lean_inc(x_1410);
if (lean_is_exclusive(x_1408)) {
 lean_ctor_release(x_1408, 0);
 lean_ctor_release(x_1408, 1);
 x_1411 = x_1408;
} else {
 lean_dec_ref(x_1408);
 x_1411 = lean_box(0);
}
x_1412 = lean_unbox(x_1409);
x_1413 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1412, x_1400);
if (x_1413 == 0)
{
uint8_t x_1414; uint8_t x_1415; uint8_t x_1416; lean_object* x_1417; lean_object* x_1418; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1414 = 1;
x_1415 = lean_unbox(x_1409);
lean_dec(x_1409);
x_1416 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1415, x_1414);
x_1417 = lean_box(x_1416);
if (lean_is_scalar(x_1411)) {
 x_1418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1418 = x_1411;
}
lean_ctor_set(x_1418, 0, x_1417);
lean_ctor_set(x_1418, 1, x_1410);
return x_1418;
}
else
{
lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; uint8_t x_1426; 
lean_dec(x_1411);
lean_dec(x_1409);
x_1419 = lean_st_ref_get(x_6, x_1410);
x_1420 = lean_ctor_get(x_1419, 1);
lean_inc(x_1420);
lean_dec(x_1419);
x_1421 = lean_st_ref_get(x_4, x_1420);
x_1422 = lean_ctor_get(x_1421, 0);
lean_inc(x_1422);
x_1423 = lean_ctor_get(x_1421, 1);
lean_inc(x_1423);
if (lean_is_exclusive(x_1421)) {
 lean_ctor_release(x_1421, 0);
 lean_ctor_release(x_1421, 1);
 x_1424 = x_1421;
} else {
 lean_dec_ref(x_1421);
 x_1424 = lean_box(0);
}
x_1425 = lean_ctor_get(x_1422, 0);
lean_inc(x_1425);
lean_dec(x_1422);
lean_inc(x_1425);
x_1426 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1425, x_1);
if (x_1426 == 0)
{
uint8_t x_1427; 
x_1427 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1425, x_2);
if (x_1427 == 0)
{
lean_object* x_1428; lean_object* x_1460; uint8_t x_1461; 
x_1460 = lean_ctor_get(x_3, 0);
lean_inc(x_1460);
x_1461 = lean_ctor_get_uint8(x_1460, 4);
lean_dec(x_1460);
if (x_1461 == 0)
{
uint8_t x_1462; lean_object* x_1463; lean_object* x_1464; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1462 = 0;
x_1463 = lean_box(x_1462);
if (lean_is_scalar(x_1424)) {
 x_1464 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1464 = x_1424;
}
lean_ctor_set(x_1464, 0, x_1463);
lean_ctor_set(x_1464, 1, x_1423);
return x_1464;
}
else
{
uint8_t x_1465; 
x_1465 = l_Lean_Level_isMVar(x_1);
if (x_1465 == 0)
{
uint8_t x_1466; 
x_1466 = l_Lean_Level_isMVar(x_2);
if (x_1466 == 0)
{
uint8_t x_1467; lean_object* x_1468; lean_object* x_1469; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1467 = 0;
x_1468 = lean_box(x_1467);
if (lean_is_scalar(x_1424)) {
 x_1469 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1469 = x_1424;
}
lean_ctor_set(x_1469, 0, x_1468);
lean_ctor_set(x_1469, 1, x_1423);
return x_1469;
}
else
{
lean_object* x_1470; 
lean_dec(x_1424);
x_1470 = lean_box(0);
x_1428 = x_1470;
goto block_1459;
}
}
else
{
lean_object* x_1471; 
lean_dec(x_1424);
x_1471 = lean_box(0);
x_1428 = x_1471;
goto block_1459;
}
}
block_1459:
{
lean_object* x_1429; lean_object* x_1430; uint8_t x_1431; lean_object* x_1432; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; uint8_t x_1451; 
lean_dec(x_1428);
x_1429 = lean_mk_string("stuck");
x_1430 = lean_name_mk_string(x_1155, x_1429);
x_1448 = lean_st_ref_get(x_6, x_1423);
x_1449 = lean_ctor_get(x_1448, 0);
lean_inc(x_1449);
x_1450 = lean_ctor_get(x_1449, 3);
lean_inc(x_1450);
lean_dec(x_1449);
x_1451 = lean_ctor_get_uint8(x_1450, sizeof(void*)*1);
lean_dec(x_1450);
if (x_1451 == 0)
{
lean_object* x_1452; uint8_t x_1453; 
x_1452 = lean_ctor_get(x_1448, 1);
lean_inc(x_1452);
lean_dec(x_1448);
x_1453 = 0;
x_1431 = x_1453;
x_1432 = x_1452;
goto block_1447;
}
else
{
lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; uint8_t x_1458; 
x_1454 = lean_ctor_get(x_1448, 1);
lean_inc(x_1454);
lean_dec(x_1448);
lean_inc(x_1430);
x_1455 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1430, x_3, x_4, x_5, x_6, x_1454);
x_1456 = lean_ctor_get(x_1455, 0);
lean_inc(x_1456);
x_1457 = lean_ctor_get(x_1455, 1);
lean_inc(x_1457);
lean_dec(x_1455);
x_1458 = lean_unbox(x_1456);
lean_dec(x_1456);
x_1431 = x_1458;
x_1432 = x_1457;
goto block_1447;
}
block_1447:
{
if (x_1431 == 0)
{
lean_object* x_1433; 
lean_dec(x_1430);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1433 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1432);
return x_1433;
}
else
{
lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; 
x_1434 = lean_mk_string("");
x_1435 = l_Lean_stringToMessageData(x_1434);
lean_dec(x_1434);
x_1436 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1436, 0, x_1);
lean_inc(x_1435);
x_1437 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1437, 0, x_1435);
lean_ctor_set(x_1437, 1, x_1436);
x_1438 = lean_mk_string(" =?= ");
x_1439 = l_Lean_stringToMessageData(x_1438);
lean_dec(x_1438);
x_1440 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1440, 0, x_1437);
lean_ctor_set(x_1440, 1, x_1439);
x_1441 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1441, 0, x_2);
x_1442 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1442, 0, x_1440);
lean_ctor_set(x_1442, 1, x_1441);
x_1443 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1443, 0, x_1442);
lean_ctor_set(x_1443, 1, x_1435);
x_1444 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1430, x_1443, x_3, x_4, x_5, x_6, x_1432);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1445 = lean_ctor_get(x_1444, 1);
lean_inc(x_1445);
lean_dec(x_1444);
x_1446 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1445);
return x_1446;
}
}
}
}
else
{
lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; uint8_t x_1475; lean_object* x_1476; lean_object* x_1477; 
lean_dec(x_1424);
lean_dec(x_1155);
x_1472 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1423);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1473 = lean_ctor_get(x_1472, 1);
lean_inc(x_1473);
if (lean_is_exclusive(x_1472)) {
 lean_ctor_release(x_1472, 0);
 lean_ctor_release(x_1472, 1);
 x_1474 = x_1472;
} else {
 lean_dec_ref(x_1472);
 x_1474 = lean_box(0);
}
x_1475 = 1;
x_1476 = lean_box(x_1475);
if (lean_is_scalar(x_1474)) {
 x_1477 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1477 = x_1474;
}
lean_ctor_set(x_1477, 0, x_1476);
lean_ctor_set(x_1477, 1, x_1473);
return x_1477;
}
}
else
{
lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; uint8_t x_1481; lean_object* x_1482; lean_object* x_1483; 
lean_dec(x_1425);
lean_dec(x_1424);
lean_dec(x_1155);
x_1478 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1423);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1479 = lean_ctor_get(x_1478, 1);
lean_inc(x_1479);
if (lean_is_exclusive(x_1478)) {
 lean_ctor_release(x_1478, 0);
 lean_ctor_release(x_1478, 1);
 x_1480 = x_1478;
} else {
 lean_dec_ref(x_1478);
 x_1480 = lean_box(0);
}
x_1481 = 1;
x_1482 = lean_box(x_1481);
if (lean_is_scalar(x_1480)) {
 x_1483 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1483 = x_1480;
}
lean_ctor_set(x_1483, 0, x_1482);
lean_ctor_set(x_1483, 1, x_1479);
return x_1483;
}
}
}
else
{
lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1484 = lean_ctor_get(x_1408, 0);
lean_inc(x_1484);
x_1485 = lean_ctor_get(x_1408, 1);
lean_inc(x_1485);
if (lean_is_exclusive(x_1408)) {
 lean_ctor_release(x_1408, 0);
 lean_ctor_release(x_1408, 1);
 x_1486 = x_1408;
} else {
 lean_dec_ref(x_1408);
 x_1486 = lean_box(0);
}
if (lean_is_scalar(x_1486)) {
 x_1487 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1487 = x_1486;
}
lean_ctor_set(x_1487, 0, x_1484);
lean_ctor_set(x_1487, 1, x_1485);
return x_1487;
}
}
}
}
else
{
uint8_t x_1488; 
lean_dec(x_1155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1488 = !lean_is_exclusive(x_1169);
if (x_1488 == 0)
{
return x_1169;
}
else
{
lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; 
x_1489 = lean_ctor_get(x_1169, 0);
x_1490 = lean_ctor_get(x_1169, 1);
lean_inc(x_1490);
lean_inc(x_1489);
lean_dec(x_1169);
x_1491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1491, 0, x_1489);
lean_ctor_set(x_1491, 1, x_1490);
return x_1491;
}
}
}
}
}
block_1509:
{
if (x_1495 == 0)
{
lean_dec(x_1494);
x_1156 = x_1496;
goto block_1492;
}
else
{
lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; 
x_1497 = lean_mk_string("");
x_1498 = l_Lean_stringToMessageData(x_1497);
lean_dec(x_1497);
lean_inc(x_1);
x_1499 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1499, 0, x_1);
lean_inc(x_1498);
x_1500 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1500, 0, x_1498);
lean_ctor_set(x_1500, 1, x_1499);
x_1501 = lean_mk_string(" =?= ");
x_1502 = l_Lean_stringToMessageData(x_1501);
lean_dec(x_1501);
x_1503 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1503, 0, x_1500);
lean_ctor_set(x_1503, 1, x_1502);
lean_inc(x_2);
x_1504 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1504, 0, x_2);
x_1505 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1505, 0, x_1503);
lean_ctor_set(x_1505, 1, x_1504);
x_1506 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1506, 0, x_1505);
lean_ctor_set(x_1506, 1, x_1498);
x_1507 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1494, x_1506, x_3, x_4, x_5, x_6, x_1496);
x_1508 = lean_ctor_get(x_1507, 1);
lean_inc(x_1508);
lean_dec(x_1507);
x_1156 = x_1508;
goto block_1492;
}
}
}
else
{
lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; uint8_t x_1524; lean_object* x_1525; lean_object* x_1526; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1521 = lean_unsigned_to_nat(0u);
x_1522 = l_Lean_Level_getOffsetAux(x_1, x_1521);
lean_dec(x_1);
x_1523 = l_Lean_Level_getOffsetAux(x_2, x_1521);
lean_dec(x_2);
x_1524 = lean_nat_dec_eq(x_1522, x_1523);
lean_dec(x_1523);
lean_dec(x_1522);
x_1525 = lean_box(x_1524);
x_1526 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1526, 0, x_1525);
lean_ctor_set(x_1526, 1, x_7);
return x_1526;
}
}
case 4:
{
lean_object* x_1527; lean_object* x_1528; uint8_t x_1529; 
x_1527 = l_Lean_Level_getLevelOffset(x_1);
x_1528 = l_Lean_Level_getLevelOffset(x_2);
x_1529 = lean_level_eq(x_1527, x_1528);
lean_dec(x_1528);
lean_dec(x_1527);
if (x_1529 == 0)
{
lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1872; lean_object* x_1873; uint8_t x_1874; lean_object* x_1875; lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; uint8_t x_1892; 
x_1530 = lean_box(0);
x_1531 = lean_mk_string("Meta");
x_1532 = lean_name_mk_string(x_1530, x_1531);
x_1533 = lean_mk_string("isLevelDefEq");
x_1534 = lean_name_mk_string(x_1532, x_1533);
x_1872 = lean_mk_string("step");
lean_inc(x_1534);
x_1873 = lean_name_mk_string(x_1534, x_1872);
x_1889 = lean_st_ref_get(x_6, x_7);
x_1890 = lean_ctor_get(x_1889, 0);
lean_inc(x_1890);
x_1891 = lean_ctor_get(x_1890, 3);
lean_inc(x_1891);
lean_dec(x_1890);
x_1892 = lean_ctor_get_uint8(x_1891, sizeof(void*)*1);
lean_dec(x_1891);
if (x_1892 == 0)
{
lean_object* x_1893; uint8_t x_1894; 
x_1893 = lean_ctor_get(x_1889, 1);
lean_inc(x_1893);
lean_dec(x_1889);
x_1894 = 0;
x_1874 = x_1894;
x_1875 = x_1893;
goto block_1888;
}
else
{
lean_object* x_1895; lean_object* x_1896; lean_object* x_1897; lean_object* x_1898; uint8_t x_1899; 
x_1895 = lean_ctor_get(x_1889, 1);
lean_inc(x_1895);
lean_dec(x_1889);
lean_inc(x_1873);
x_1896 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1873, x_3, x_4, x_5, x_6, x_1895);
x_1897 = lean_ctor_get(x_1896, 0);
lean_inc(x_1897);
x_1898 = lean_ctor_get(x_1896, 1);
lean_inc(x_1898);
lean_dec(x_1896);
x_1899 = lean_unbox(x_1897);
lean_dec(x_1897);
x_1874 = x_1899;
x_1875 = x_1898;
goto block_1888;
}
block_1871:
{
lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; uint8_t x_1544; 
lean_inc(x_1);
x_1536 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_1535);
x_1537 = lean_ctor_get(x_1536, 0);
lean_inc(x_1537);
x_1538 = lean_ctor_get(x_1536, 1);
lean_inc(x_1538);
lean_dec(x_1536);
x_1539 = l_Lean_Level_normalize(x_1537);
lean_dec(x_1537);
lean_inc(x_2);
x_1540 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_1538);
x_1541 = lean_ctor_get(x_1540, 0);
lean_inc(x_1541);
x_1542 = lean_ctor_get(x_1540, 1);
lean_inc(x_1542);
lean_dec(x_1540);
x_1543 = l_Lean_Level_normalize(x_1541);
lean_dec(x_1541);
x_1544 = lean_level_eq(x_1, x_1539);
if (x_1544 == 0)
{
lean_dec(x_1534);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_1539;
x_2 = x_1543;
x_7 = x_1542;
goto _start;
}
else
{
uint8_t x_1546; 
x_1546 = lean_level_eq(x_2, x_1543);
if (x_1546 == 0)
{
lean_dec(x_1534);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_1539;
x_2 = x_1543;
x_7 = x_1542;
goto _start;
}
else
{
lean_object* x_1548; 
lean_dec(x_1543);
lean_dec(x_1539);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_1548 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_1542);
if (lean_obj_tag(x_1548) == 0)
{
uint8_t x_1549; 
x_1549 = !lean_is_exclusive(x_1548);
if (x_1549 == 0)
{
lean_object* x_1550; lean_object* x_1551; uint8_t x_1552; uint8_t x_1553; uint8_t x_1554; 
x_1550 = lean_ctor_get(x_1548, 0);
x_1551 = lean_ctor_get(x_1548, 1);
x_1552 = 2;
x_1553 = lean_unbox(x_1550);
x_1554 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1553, x_1552);
if (x_1554 == 0)
{
uint8_t x_1555; uint8_t x_1556; uint8_t x_1557; lean_object* x_1558; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1555 = 1;
x_1556 = lean_unbox(x_1550);
lean_dec(x_1550);
x_1557 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1556, x_1555);
x_1558 = lean_box(x_1557);
lean_ctor_set(x_1548, 0, x_1558);
return x_1548;
}
else
{
lean_object* x_1559; 
lean_free_object(x_1548);
lean_dec(x_1550);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_1559 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_1551);
if (lean_obj_tag(x_1559) == 0)
{
uint8_t x_1560; 
x_1560 = !lean_is_exclusive(x_1559);
if (x_1560 == 0)
{
lean_object* x_1561; lean_object* x_1562; uint8_t x_1563; uint8_t x_1564; 
x_1561 = lean_ctor_get(x_1559, 0);
x_1562 = lean_ctor_get(x_1559, 1);
x_1563 = lean_unbox(x_1561);
x_1564 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1563, x_1552);
if (x_1564 == 0)
{
uint8_t x_1565; uint8_t x_1566; uint8_t x_1567; lean_object* x_1568; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1565 = 1;
x_1566 = lean_unbox(x_1561);
lean_dec(x_1561);
x_1567 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1566, x_1565);
x_1568 = lean_box(x_1567);
lean_ctor_set(x_1559, 0, x_1568);
return x_1559;
}
else
{
lean_object* x_1569; lean_object* x_1570; lean_object* x_1571; uint8_t x_1572; 
lean_free_object(x_1559);
lean_dec(x_1561);
x_1569 = lean_st_ref_get(x_6, x_1562);
x_1570 = lean_ctor_get(x_1569, 1);
lean_inc(x_1570);
lean_dec(x_1569);
x_1571 = lean_st_ref_get(x_4, x_1570);
x_1572 = !lean_is_exclusive(x_1571);
if (x_1572 == 0)
{
lean_object* x_1573; lean_object* x_1574; lean_object* x_1575; uint8_t x_1576; 
x_1573 = lean_ctor_get(x_1571, 0);
x_1574 = lean_ctor_get(x_1571, 1);
x_1575 = lean_ctor_get(x_1573, 0);
lean_inc(x_1575);
lean_dec(x_1573);
lean_inc(x_1575);
x_1576 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1575, x_1);
if (x_1576 == 0)
{
uint8_t x_1577; 
x_1577 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1575, x_2);
if (x_1577 == 0)
{
lean_object* x_1578; lean_object* x_1610; uint8_t x_1611; 
x_1610 = lean_ctor_get(x_3, 0);
lean_inc(x_1610);
x_1611 = lean_ctor_get_uint8(x_1610, 4);
lean_dec(x_1610);
if (x_1611 == 0)
{
uint8_t x_1612; lean_object* x_1613; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1612 = 0;
x_1613 = lean_box(x_1612);
lean_ctor_set(x_1571, 0, x_1613);
return x_1571;
}
else
{
uint8_t x_1614; 
x_1614 = l_Lean_Level_isMVar(x_1);
if (x_1614 == 0)
{
uint8_t x_1615; 
x_1615 = l_Lean_Level_isMVar(x_2);
if (x_1615 == 0)
{
uint8_t x_1616; lean_object* x_1617; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1616 = 0;
x_1617 = lean_box(x_1616);
lean_ctor_set(x_1571, 0, x_1617);
return x_1571;
}
else
{
lean_object* x_1618; 
lean_free_object(x_1571);
x_1618 = lean_box(0);
x_1578 = x_1618;
goto block_1609;
}
}
else
{
lean_object* x_1619; 
lean_free_object(x_1571);
x_1619 = lean_box(0);
x_1578 = x_1619;
goto block_1609;
}
}
block_1609:
{
lean_object* x_1579; lean_object* x_1580; uint8_t x_1581; lean_object* x_1582; lean_object* x_1598; lean_object* x_1599; lean_object* x_1600; uint8_t x_1601; 
lean_dec(x_1578);
x_1579 = lean_mk_string("stuck");
x_1580 = lean_name_mk_string(x_1534, x_1579);
x_1598 = lean_st_ref_get(x_6, x_1574);
x_1599 = lean_ctor_get(x_1598, 0);
lean_inc(x_1599);
x_1600 = lean_ctor_get(x_1599, 3);
lean_inc(x_1600);
lean_dec(x_1599);
x_1601 = lean_ctor_get_uint8(x_1600, sizeof(void*)*1);
lean_dec(x_1600);
if (x_1601 == 0)
{
lean_object* x_1602; uint8_t x_1603; 
x_1602 = lean_ctor_get(x_1598, 1);
lean_inc(x_1602);
lean_dec(x_1598);
x_1603 = 0;
x_1581 = x_1603;
x_1582 = x_1602;
goto block_1597;
}
else
{
lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; uint8_t x_1608; 
x_1604 = lean_ctor_get(x_1598, 1);
lean_inc(x_1604);
lean_dec(x_1598);
lean_inc(x_1580);
x_1605 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1580, x_3, x_4, x_5, x_6, x_1604);
x_1606 = lean_ctor_get(x_1605, 0);
lean_inc(x_1606);
x_1607 = lean_ctor_get(x_1605, 1);
lean_inc(x_1607);
lean_dec(x_1605);
x_1608 = lean_unbox(x_1606);
lean_dec(x_1606);
x_1581 = x_1608;
x_1582 = x_1607;
goto block_1597;
}
block_1597:
{
if (x_1581 == 0)
{
lean_object* x_1583; 
lean_dec(x_1580);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1583 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1582);
return x_1583;
}
else
{
lean_object* x_1584; lean_object* x_1585; lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; lean_object* x_1592; lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; 
x_1584 = lean_mk_string("");
x_1585 = l_Lean_stringToMessageData(x_1584);
lean_dec(x_1584);
x_1586 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1586, 0, x_1);
lean_inc(x_1585);
x_1587 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1587, 0, x_1585);
lean_ctor_set(x_1587, 1, x_1586);
x_1588 = lean_mk_string(" =?= ");
x_1589 = l_Lean_stringToMessageData(x_1588);
lean_dec(x_1588);
x_1590 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1590, 0, x_1587);
lean_ctor_set(x_1590, 1, x_1589);
x_1591 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1591, 0, x_2);
x_1592 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1592, 0, x_1590);
lean_ctor_set(x_1592, 1, x_1591);
x_1593 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1593, 0, x_1592);
lean_ctor_set(x_1593, 1, x_1585);
x_1594 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1580, x_1593, x_3, x_4, x_5, x_6, x_1582);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1595 = lean_ctor_get(x_1594, 1);
lean_inc(x_1595);
lean_dec(x_1594);
x_1596 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1595);
return x_1596;
}
}
}
}
else
{
lean_object* x_1620; uint8_t x_1621; 
lean_free_object(x_1571);
lean_dec(x_1534);
x_1620 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1574);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1621 = !lean_is_exclusive(x_1620);
if (x_1621 == 0)
{
lean_object* x_1622; uint8_t x_1623; lean_object* x_1624; 
x_1622 = lean_ctor_get(x_1620, 0);
lean_dec(x_1622);
x_1623 = 1;
x_1624 = lean_box(x_1623);
lean_ctor_set(x_1620, 0, x_1624);
return x_1620;
}
else
{
lean_object* x_1625; uint8_t x_1626; lean_object* x_1627; lean_object* x_1628; 
x_1625 = lean_ctor_get(x_1620, 1);
lean_inc(x_1625);
lean_dec(x_1620);
x_1626 = 1;
x_1627 = lean_box(x_1626);
x_1628 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1628, 0, x_1627);
lean_ctor_set(x_1628, 1, x_1625);
return x_1628;
}
}
}
else
{
lean_object* x_1629; uint8_t x_1630; 
lean_dec(x_1575);
lean_free_object(x_1571);
lean_dec(x_1534);
x_1629 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1574);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1630 = !lean_is_exclusive(x_1629);
if (x_1630 == 0)
{
lean_object* x_1631; uint8_t x_1632; lean_object* x_1633; 
x_1631 = lean_ctor_get(x_1629, 0);
lean_dec(x_1631);
x_1632 = 1;
x_1633 = lean_box(x_1632);
lean_ctor_set(x_1629, 0, x_1633);
return x_1629;
}
else
{
lean_object* x_1634; uint8_t x_1635; lean_object* x_1636; lean_object* x_1637; 
x_1634 = lean_ctor_get(x_1629, 1);
lean_inc(x_1634);
lean_dec(x_1629);
x_1635 = 1;
x_1636 = lean_box(x_1635);
x_1637 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1637, 0, x_1636);
lean_ctor_set(x_1637, 1, x_1634);
return x_1637;
}
}
}
else
{
lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; uint8_t x_1641; 
x_1638 = lean_ctor_get(x_1571, 0);
x_1639 = lean_ctor_get(x_1571, 1);
lean_inc(x_1639);
lean_inc(x_1638);
lean_dec(x_1571);
x_1640 = lean_ctor_get(x_1638, 0);
lean_inc(x_1640);
lean_dec(x_1638);
lean_inc(x_1640);
x_1641 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1640, x_1);
if (x_1641 == 0)
{
uint8_t x_1642; 
x_1642 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1640, x_2);
if (x_1642 == 0)
{
lean_object* x_1643; lean_object* x_1675; uint8_t x_1676; 
x_1675 = lean_ctor_get(x_3, 0);
lean_inc(x_1675);
x_1676 = lean_ctor_get_uint8(x_1675, 4);
lean_dec(x_1675);
if (x_1676 == 0)
{
uint8_t x_1677; lean_object* x_1678; lean_object* x_1679; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1677 = 0;
x_1678 = lean_box(x_1677);
x_1679 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1679, 0, x_1678);
lean_ctor_set(x_1679, 1, x_1639);
return x_1679;
}
else
{
uint8_t x_1680; 
x_1680 = l_Lean_Level_isMVar(x_1);
if (x_1680 == 0)
{
uint8_t x_1681; 
x_1681 = l_Lean_Level_isMVar(x_2);
if (x_1681 == 0)
{
uint8_t x_1682; lean_object* x_1683; lean_object* x_1684; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1682 = 0;
x_1683 = lean_box(x_1682);
x_1684 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1684, 0, x_1683);
lean_ctor_set(x_1684, 1, x_1639);
return x_1684;
}
else
{
lean_object* x_1685; 
x_1685 = lean_box(0);
x_1643 = x_1685;
goto block_1674;
}
}
else
{
lean_object* x_1686; 
x_1686 = lean_box(0);
x_1643 = x_1686;
goto block_1674;
}
}
block_1674:
{
lean_object* x_1644; lean_object* x_1645; uint8_t x_1646; lean_object* x_1647; lean_object* x_1663; lean_object* x_1664; lean_object* x_1665; uint8_t x_1666; 
lean_dec(x_1643);
x_1644 = lean_mk_string("stuck");
x_1645 = lean_name_mk_string(x_1534, x_1644);
x_1663 = lean_st_ref_get(x_6, x_1639);
x_1664 = lean_ctor_get(x_1663, 0);
lean_inc(x_1664);
x_1665 = lean_ctor_get(x_1664, 3);
lean_inc(x_1665);
lean_dec(x_1664);
x_1666 = lean_ctor_get_uint8(x_1665, sizeof(void*)*1);
lean_dec(x_1665);
if (x_1666 == 0)
{
lean_object* x_1667; uint8_t x_1668; 
x_1667 = lean_ctor_get(x_1663, 1);
lean_inc(x_1667);
lean_dec(x_1663);
x_1668 = 0;
x_1646 = x_1668;
x_1647 = x_1667;
goto block_1662;
}
else
{
lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; uint8_t x_1673; 
x_1669 = lean_ctor_get(x_1663, 1);
lean_inc(x_1669);
lean_dec(x_1663);
lean_inc(x_1645);
x_1670 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1645, x_3, x_4, x_5, x_6, x_1669);
x_1671 = lean_ctor_get(x_1670, 0);
lean_inc(x_1671);
x_1672 = lean_ctor_get(x_1670, 1);
lean_inc(x_1672);
lean_dec(x_1670);
x_1673 = lean_unbox(x_1671);
lean_dec(x_1671);
x_1646 = x_1673;
x_1647 = x_1672;
goto block_1662;
}
block_1662:
{
if (x_1646 == 0)
{
lean_object* x_1648; 
lean_dec(x_1645);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1648 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1647);
return x_1648;
}
else
{
lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; 
x_1649 = lean_mk_string("");
x_1650 = l_Lean_stringToMessageData(x_1649);
lean_dec(x_1649);
x_1651 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1651, 0, x_1);
lean_inc(x_1650);
x_1652 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1652, 0, x_1650);
lean_ctor_set(x_1652, 1, x_1651);
x_1653 = lean_mk_string(" =?= ");
x_1654 = l_Lean_stringToMessageData(x_1653);
lean_dec(x_1653);
x_1655 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1655, 0, x_1652);
lean_ctor_set(x_1655, 1, x_1654);
x_1656 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1656, 0, x_2);
x_1657 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1657, 0, x_1655);
lean_ctor_set(x_1657, 1, x_1656);
x_1658 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1658, 0, x_1657);
lean_ctor_set(x_1658, 1, x_1650);
x_1659 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1645, x_1658, x_3, x_4, x_5, x_6, x_1647);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1660 = lean_ctor_get(x_1659, 1);
lean_inc(x_1660);
lean_dec(x_1659);
x_1661 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1660);
return x_1661;
}
}
}
}
else
{
lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; uint8_t x_1690; lean_object* x_1691; lean_object* x_1692; 
lean_dec(x_1534);
x_1687 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1639);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1688 = lean_ctor_get(x_1687, 1);
lean_inc(x_1688);
if (lean_is_exclusive(x_1687)) {
 lean_ctor_release(x_1687, 0);
 lean_ctor_release(x_1687, 1);
 x_1689 = x_1687;
} else {
 lean_dec_ref(x_1687);
 x_1689 = lean_box(0);
}
x_1690 = 1;
x_1691 = lean_box(x_1690);
if (lean_is_scalar(x_1689)) {
 x_1692 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1692 = x_1689;
}
lean_ctor_set(x_1692, 0, x_1691);
lean_ctor_set(x_1692, 1, x_1688);
return x_1692;
}
}
else
{
lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; uint8_t x_1696; lean_object* x_1697; lean_object* x_1698; 
lean_dec(x_1640);
lean_dec(x_1534);
x_1693 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1639);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1694 = lean_ctor_get(x_1693, 1);
lean_inc(x_1694);
if (lean_is_exclusive(x_1693)) {
 lean_ctor_release(x_1693, 0);
 lean_ctor_release(x_1693, 1);
 x_1695 = x_1693;
} else {
 lean_dec_ref(x_1693);
 x_1695 = lean_box(0);
}
x_1696 = 1;
x_1697 = lean_box(x_1696);
if (lean_is_scalar(x_1695)) {
 x_1698 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1698 = x_1695;
}
lean_ctor_set(x_1698, 0, x_1697);
lean_ctor_set(x_1698, 1, x_1694);
return x_1698;
}
}
}
}
else
{
lean_object* x_1699; lean_object* x_1700; uint8_t x_1701; uint8_t x_1702; 
x_1699 = lean_ctor_get(x_1559, 0);
x_1700 = lean_ctor_get(x_1559, 1);
lean_inc(x_1700);
lean_inc(x_1699);
lean_dec(x_1559);
x_1701 = lean_unbox(x_1699);
x_1702 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1701, x_1552);
if (x_1702 == 0)
{
uint8_t x_1703; uint8_t x_1704; uint8_t x_1705; lean_object* x_1706; lean_object* x_1707; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1703 = 1;
x_1704 = lean_unbox(x_1699);
lean_dec(x_1699);
x_1705 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1704, x_1703);
x_1706 = lean_box(x_1705);
x_1707 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1707, 0, x_1706);
lean_ctor_set(x_1707, 1, x_1700);
return x_1707;
}
else
{
lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; lean_object* x_1713; lean_object* x_1714; uint8_t x_1715; 
lean_dec(x_1699);
x_1708 = lean_st_ref_get(x_6, x_1700);
x_1709 = lean_ctor_get(x_1708, 1);
lean_inc(x_1709);
lean_dec(x_1708);
x_1710 = lean_st_ref_get(x_4, x_1709);
x_1711 = lean_ctor_get(x_1710, 0);
lean_inc(x_1711);
x_1712 = lean_ctor_get(x_1710, 1);
lean_inc(x_1712);
if (lean_is_exclusive(x_1710)) {
 lean_ctor_release(x_1710, 0);
 lean_ctor_release(x_1710, 1);
 x_1713 = x_1710;
} else {
 lean_dec_ref(x_1710);
 x_1713 = lean_box(0);
}
x_1714 = lean_ctor_get(x_1711, 0);
lean_inc(x_1714);
lean_dec(x_1711);
lean_inc(x_1714);
x_1715 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1714, x_1);
if (x_1715 == 0)
{
uint8_t x_1716; 
x_1716 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1714, x_2);
if (x_1716 == 0)
{
lean_object* x_1717; lean_object* x_1749; uint8_t x_1750; 
x_1749 = lean_ctor_get(x_3, 0);
lean_inc(x_1749);
x_1750 = lean_ctor_get_uint8(x_1749, 4);
lean_dec(x_1749);
if (x_1750 == 0)
{
uint8_t x_1751; lean_object* x_1752; lean_object* x_1753; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1751 = 0;
x_1752 = lean_box(x_1751);
if (lean_is_scalar(x_1713)) {
 x_1753 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1753 = x_1713;
}
lean_ctor_set(x_1753, 0, x_1752);
lean_ctor_set(x_1753, 1, x_1712);
return x_1753;
}
else
{
uint8_t x_1754; 
x_1754 = l_Lean_Level_isMVar(x_1);
if (x_1754 == 0)
{
uint8_t x_1755; 
x_1755 = l_Lean_Level_isMVar(x_2);
if (x_1755 == 0)
{
uint8_t x_1756; lean_object* x_1757; lean_object* x_1758; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1756 = 0;
x_1757 = lean_box(x_1756);
if (lean_is_scalar(x_1713)) {
 x_1758 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1758 = x_1713;
}
lean_ctor_set(x_1758, 0, x_1757);
lean_ctor_set(x_1758, 1, x_1712);
return x_1758;
}
else
{
lean_object* x_1759; 
lean_dec(x_1713);
x_1759 = lean_box(0);
x_1717 = x_1759;
goto block_1748;
}
}
else
{
lean_object* x_1760; 
lean_dec(x_1713);
x_1760 = lean_box(0);
x_1717 = x_1760;
goto block_1748;
}
}
block_1748:
{
lean_object* x_1718; lean_object* x_1719; uint8_t x_1720; lean_object* x_1721; lean_object* x_1737; lean_object* x_1738; lean_object* x_1739; uint8_t x_1740; 
lean_dec(x_1717);
x_1718 = lean_mk_string("stuck");
x_1719 = lean_name_mk_string(x_1534, x_1718);
x_1737 = lean_st_ref_get(x_6, x_1712);
x_1738 = lean_ctor_get(x_1737, 0);
lean_inc(x_1738);
x_1739 = lean_ctor_get(x_1738, 3);
lean_inc(x_1739);
lean_dec(x_1738);
x_1740 = lean_ctor_get_uint8(x_1739, sizeof(void*)*1);
lean_dec(x_1739);
if (x_1740 == 0)
{
lean_object* x_1741; uint8_t x_1742; 
x_1741 = lean_ctor_get(x_1737, 1);
lean_inc(x_1741);
lean_dec(x_1737);
x_1742 = 0;
x_1720 = x_1742;
x_1721 = x_1741;
goto block_1736;
}
else
{
lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; uint8_t x_1747; 
x_1743 = lean_ctor_get(x_1737, 1);
lean_inc(x_1743);
lean_dec(x_1737);
lean_inc(x_1719);
x_1744 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1719, x_3, x_4, x_5, x_6, x_1743);
x_1745 = lean_ctor_get(x_1744, 0);
lean_inc(x_1745);
x_1746 = lean_ctor_get(x_1744, 1);
lean_inc(x_1746);
lean_dec(x_1744);
x_1747 = lean_unbox(x_1745);
lean_dec(x_1745);
x_1720 = x_1747;
x_1721 = x_1746;
goto block_1736;
}
block_1736:
{
if (x_1720 == 0)
{
lean_object* x_1722; 
lean_dec(x_1719);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1722 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1721);
return x_1722;
}
else
{
lean_object* x_1723; lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; lean_object* x_1728; lean_object* x_1729; lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; 
x_1723 = lean_mk_string("");
x_1724 = l_Lean_stringToMessageData(x_1723);
lean_dec(x_1723);
x_1725 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1725, 0, x_1);
lean_inc(x_1724);
x_1726 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1726, 0, x_1724);
lean_ctor_set(x_1726, 1, x_1725);
x_1727 = lean_mk_string(" =?= ");
x_1728 = l_Lean_stringToMessageData(x_1727);
lean_dec(x_1727);
x_1729 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1729, 0, x_1726);
lean_ctor_set(x_1729, 1, x_1728);
x_1730 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1730, 0, x_2);
x_1731 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1731, 0, x_1729);
lean_ctor_set(x_1731, 1, x_1730);
x_1732 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1732, 0, x_1731);
lean_ctor_set(x_1732, 1, x_1724);
x_1733 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1719, x_1732, x_3, x_4, x_5, x_6, x_1721);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1734 = lean_ctor_get(x_1733, 1);
lean_inc(x_1734);
lean_dec(x_1733);
x_1735 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1734);
return x_1735;
}
}
}
}
else
{
lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; uint8_t x_1764; lean_object* x_1765; lean_object* x_1766; 
lean_dec(x_1713);
lean_dec(x_1534);
x_1761 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1712);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1762 = lean_ctor_get(x_1761, 1);
lean_inc(x_1762);
if (lean_is_exclusive(x_1761)) {
 lean_ctor_release(x_1761, 0);
 lean_ctor_release(x_1761, 1);
 x_1763 = x_1761;
} else {
 lean_dec_ref(x_1761);
 x_1763 = lean_box(0);
}
x_1764 = 1;
x_1765 = lean_box(x_1764);
if (lean_is_scalar(x_1763)) {
 x_1766 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1766 = x_1763;
}
lean_ctor_set(x_1766, 0, x_1765);
lean_ctor_set(x_1766, 1, x_1762);
return x_1766;
}
}
else
{
lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; uint8_t x_1770; lean_object* x_1771; lean_object* x_1772; 
lean_dec(x_1714);
lean_dec(x_1713);
lean_dec(x_1534);
x_1767 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1712);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1768 = lean_ctor_get(x_1767, 1);
lean_inc(x_1768);
if (lean_is_exclusive(x_1767)) {
 lean_ctor_release(x_1767, 0);
 lean_ctor_release(x_1767, 1);
 x_1769 = x_1767;
} else {
 lean_dec_ref(x_1767);
 x_1769 = lean_box(0);
}
x_1770 = 1;
x_1771 = lean_box(x_1770);
if (lean_is_scalar(x_1769)) {
 x_1772 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1772 = x_1769;
}
lean_ctor_set(x_1772, 0, x_1771);
lean_ctor_set(x_1772, 1, x_1768);
return x_1772;
}
}
}
}
else
{
uint8_t x_1773; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1773 = !lean_is_exclusive(x_1559);
if (x_1773 == 0)
{
return x_1559;
}
else
{
lean_object* x_1774; lean_object* x_1775; lean_object* x_1776; 
x_1774 = lean_ctor_get(x_1559, 0);
x_1775 = lean_ctor_get(x_1559, 1);
lean_inc(x_1775);
lean_inc(x_1774);
lean_dec(x_1559);
x_1776 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1776, 0, x_1774);
lean_ctor_set(x_1776, 1, x_1775);
return x_1776;
}
}
}
}
else
{
lean_object* x_1777; lean_object* x_1778; uint8_t x_1779; uint8_t x_1780; uint8_t x_1781; 
x_1777 = lean_ctor_get(x_1548, 0);
x_1778 = lean_ctor_get(x_1548, 1);
lean_inc(x_1778);
lean_inc(x_1777);
lean_dec(x_1548);
x_1779 = 2;
x_1780 = lean_unbox(x_1777);
x_1781 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1780, x_1779);
if (x_1781 == 0)
{
uint8_t x_1782; uint8_t x_1783; uint8_t x_1784; lean_object* x_1785; lean_object* x_1786; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1782 = 1;
x_1783 = lean_unbox(x_1777);
lean_dec(x_1777);
x_1784 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1783, x_1782);
x_1785 = lean_box(x_1784);
x_1786 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1786, 0, x_1785);
lean_ctor_set(x_1786, 1, x_1778);
return x_1786;
}
else
{
lean_object* x_1787; 
lean_dec(x_1777);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_1787 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_1778);
if (lean_obj_tag(x_1787) == 0)
{
lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; uint8_t x_1791; uint8_t x_1792; 
x_1788 = lean_ctor_get(x_1787, 0);
lean_inc(x_1788);
x_1789 = lean_ctor_get(x_1787, 1);
lean_inc(x_1789);
if (lean_is_exclusive(x_1787)) {
 lean_ctor_release(x_1787, 0);
 lean_ctor_release(x_1787, 1);
 x_1790 = x_1787;
} else {
 lean_dec_ref(x_1787);
 x_1790 = lean_box(0);
}
x_1791 = lean_unbox(x_1788);
x_1792 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1791, x_1779);
if (x_1792 == 0)
{
uint8_t x_1793; uint8_t x_1794; uint8_t x_1795; lean_object* x_1796; lean_object* x_1797; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1793 = 1;
x_1794 = lean_unbox(x_1788);
lean_dec(x_1788);
x_1795 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1794, x_1793);
x_1796 = lean_box(x_1795);
if (lean_is_scalar(x_1790)) {
 x_1797 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1797 = x_1790;
}
lean_ctor_set(x_1797, 0, x_1796);
lean_ctor_set(x_1797, 1, x_1789);
return x_1797;
}
else
{
lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; uint8_t x_1805; 
lean_dec(x_1790);
lean_dec(x_1788);
x_1798 = lean_st_ref_get(x_6, x_1789);
x_1799 = lean_ctor_get(x_1798, 1);
lean_inc(x_1799);
lean_dec(x_1798);
x_1800 = lean_st_ref_get(x_4, x_1799);
x_1801 = lean_ctor_get(x_1800, 0);
lean_inc(x_1801);
x_1802 = lean_ctor_get(x_1800, 1);
lean_inc(x_1802);
if (lean_is_exclusive(x_1800)) {
 lean_ctor_release(x_1800, 0);
 lean_ctor_release(x_1800, 1);
 x_1803 = x_1800;
} else {
 lean_dec_ref(x_1800);
 x_1803 = lean_box(0);
}
x_1804 = lean_ctor_get(x_1801, 0);
lean_inc(x_1804);
lean_dec(x_1801);
lean_inc(x_1804);
x_1805 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1804, x_1);
if (x_1805 == 0)
{
uint8_t x_1806; 
x_1806 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1804, x_2);
if (x_1806 == 0)
{
lean_object* x_1807; lean_object* x_1839; uint8_t x_1840; 
x_1839 = lean_ctor_get(x_3, 0);
lean_inc(x_1839);
x_1840 = lean_ctor_get_uint8(x_1839, 4);
lean_dec(x_1839);
if (x_1840 == 0)
{
uint8_t x_1841; lean_object* x_1842; lean_object* x_1843; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1841 = 0;
x_1842 = lean_box(x_1841);
if (lean_is_scalar(x_1803)) {
 x_1843 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1843 = x_1803;
}
lean_ctor_set(x_1843, 0, x_1842);
lean_ctor_set(x_1843, 1, x_1802);
return x_1843;
}
else
{
uint8_t x_1844; 
x_1844 = l_Lean_Level_isMVar(x_1);
if (x_1844 == 0)
{
uint8_t x_1845; 
x_1845 = l_Lean_Level_isMVar(x_2);
if (x_1845 == 0)
{
uint8_t x_1846; lean_object* x_1847; lean_object* x_1848; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1846 = 0;
x_1847 = lean_box(x_1846);
if (lean_is_scalar(x_1803)) {
 x_1848 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1848 = x_1803;
}
lean_ctor_set(x_1848, 0, x_1847);
lean_ctor_set(x_1848, 1, x_1802);
return x_1848;
}
else
{
lean_object* x_1849; 
lean_dec(x_1803);
x_1849 = lean_box(0);
x_1807 = x_1849;
goto block_1838;
}
}
else
{
lean_object* x_1850; 
lean_dec(x_1803);
x_1850 = lean_box(0);
x_1807 = x_1850;
goto block_1838;
}
}
block_1838:
{
lean_object* x_1808; lean_object* x_1809; uint8_t x_1810; lean_object* x_1811; lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; uint8_t x_1830; 
lean_dec(x_1807);
x_1808 = lean_mk_string("stuck");
x_1809 = lean_name_mk_string(x_1534, x_1808);
x_1827 = lean_st_ref_get(x_6, x_1802);
x_1828 = lean_ctor_get(x_1827, 0);
lean_inc(x_1828);
x_1829 = lean_ctor_get(x_1828, 3);
lean_inc(x_1829);
lean_dec(x_1828);
x_1830 = lean_ctor_get_uint8(x_1829, sizeof(void*)*1);
lean_dec(x_1829);
if (x_1830 == 0)
{
lean_object* x_1831; uint8_t x_1832; 
x_1831 = lean_ctor_get(x_1827, 1);
lean_inc(x_1831);
lean_dec(x_1827);
x_1832 = 0;
x_1810 = x_1832;
x_1811 = x_1831;
goto block_1826;
}
else
{
lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; uint8_t x_1837; 
x_1833 = lean_ctor_get(x_1827, 1);
lean_inc(x_1833);
lean_dec(x_1827);
lean_inc(x_1809);
x_1834 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1809, x_3, x_4, x_5, x_6, x_1833);
x_1835 = lean_ctor_get(x_1834, 0);
lean_inc(x_1835);
x_1836 = lean_ctor_get(x_1834, 1);
lean_inc(x_1836);
lean_dec(x_1834);
x_1837 = lean_unbox(x_1835);
lean_dec(x_1835);
x_1810 = x_1837;
x_1811 = x_1836;
goto block_1826;
}
block_1826:
{
if (x_1810 == 0)
{
lean_object* x_1812; 
lean_dec(x_1809);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1812 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1811);
return x_1812;
}
else
{
lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; 
x_1813 = lean_mk_string("");
x_1814 = l_Lean_stringToMessageData(x_1813);
lean_dec(x_1813);
x_1815 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1815, 0, x_1);
lean_inc(x_1814);
x_1816 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1816, 0, x_1814);
lean_ctor_set(x_1816, 1, x_1815);
x_1817 = lean_mk_string(" =?= ");
x_1818 = l_Lean_stringToMessageData(x_1817);
lean_dec(x_1817);
x_1819 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1819, 0, x_1816);
lean_ctor_set(x_1819, 1, x_1818);
x_1820 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1820, 0, x_2);
x_1821 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1821, 0, x_1819);
lean_ctor_set(x_1821, 1, x_1820);
x_1822 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1822, 0, x_1821);
lean_ctor_set(x_1822, 1, x_1814);
x_1823 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1809, x_1822, x_3, x_4, x_5, x_6, x_1811);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1824 = lean_ctor_get(x_1823, 1);
lean_inc(x_1824);
lean_dec(x_1823);
x_1825 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1824);
return x_1825;
}
}
}
}
else
{
lean_object* x_1851; lean_object* x_1852; lean_object* x_1853; uint8_t x_1854; lean_object* x_1855; lean_object* x_1856; 
lean_dec(x_1803);
lean_dec(x_1534);
x_1851 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1802);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1852 = lean_ctor_get(x_1851, 1);
lean_inc(x_1852);
if (lean_is_exclusive(x_1851)) {
 lean_ctor_release(x_1851, 0);
 lean_ctor_release(x_1851, 1);
 x_1853 = x_1851;
} else {
 lean_dec_ref(x_1851);
 x_1853 = lean_box(0);
}
x_1854 = 1;
x_1855 = lean_box(x_1854);
if (lean_is_scalar(x_1853)) {
 x_1856 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1856 = x_1853;
}
lean_ctor_set(x_1856, 0, x_1855);
lean_ctor_set(x_1856, 1, x_1852);
return x_1856;
}
}
else
{
lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; uint8_t x_1860; lean_object* x_1861; lean_object* x_1862; 
lean_dec(x_1804);
lean_dec(x_1803);
lean_dec(x_1534);
x_1857 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1802);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1858 = lean_ctor_get(x_1857, 1);
lean_inc(x_1858);
if (lean_is_exclusive(x_1857)) {
 lean_ctor_release(x_1857, 0);
 lean_ctor_release(x_1857, 1);
 x_1859 = x_1857;
} else {
 lean_dec_ref(x_1857);
 x_1859 = lean_box(0);
}
x_1860 = 1;
x_1861 = lean_box(x_1860);
if (lean_is_scalar(x_1859)) {
 x_1862 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1862 = x_1859;
}
lean_ctor_set(x_1862, 0, x_1861);
lean_ctor_set(x_1862, 1, x_1858);
return x_1862;
}
}
}
else
{
lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1863 = lean_ctor_get(x_1787, 0);
lean_inc(x_1863);
x_1864 = lean_ctor_get(x_1787, 1);
lean_inc(x_1864);
if (lean_is_exclusive(x_1787)) {
 lean_ctor_release(x_1787, 0);
 lean_ctor_release(x_1787, 1);
 x_1865 = x_1787;
} else {
 lean_dec_ref(x_1787);
 x_1865 = lean_box(0);
}
if (lean_is_scalar(x_1865)) {
 x_1866 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1866 = x_1865;
}
lean_ctor_set(x_1866, 0, x_1863);
lean_ctor_set(x_1866, 1, x_1864);
return x_1866;
}
}
}
}
else
{
uint8_t x_1867; 
lean_dec(x_1534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1867 = !lean_is_exclusive(x_1548);
if (x_1867 == 0)
{
return x_1548;
}
else
{
lean_object* x_1868; lean_object* x_1869; lean_object* x_1870; 
x_1868 = lean_ctor_get(x_1548, 0);
x_1869 = lean_ctor_get(x_1548, 1);
lean_inc(x_1869);
lean_inc(x_1868);
lean_dec(x_1548);
x_1870 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1870, 0, x_1868);
lean_ctor_set(x_1870, 1, x_1869);
return x_1870;
}
}
}
}
}
block_1888:
{
if (x_1874 == 0)
{
lean_dec(x_1873);
x_1535 = x_1875;
goto block_1871;
}
else
{
lean_object* x_1876; lean_object* x_1877; lean_object* x_1878; lean_object* x_1879; lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; lean_object* x_1886; lean_object* x_1887; 
x_1876 = lean_mk_string("");
x_1877 = l_Lean_stringToMessageData(x_1876);
lean_dec(x_1876);
lean_inc(x_1);
x_1878 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1878, 0, x_1);
lean_inc(x_1877);
x_1879 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1879, 0, x_1877);
lean_ctor_set(x_1879, 1, x_1878);
x_1880 = lean_mk_string(" =?= ");
x_1881 = l_Lean_stringToMessageData(x_1880);
lean_dec(x_1880);
x_1882 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1882, 0, x_1879);
lean_ctor_set(x_1882, 1, x_1881);
lean_inc(x_2);
x_1883 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1883, 0, x_2);
x_1884 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1884, 0, x_1882);
lean_ctor_set(x_1884, 1, x_1883);
x_1885 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1885, 0, x_1884);
lean_ctor_set(x_1885, 1, x_1877);
x_1886 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1873, x_1885, x_3, x_4, x_5, x_6, x_1875);
x_1887 = lean_ctor_get(x_1886, 1);
lean_inc(x_1887);
lean_dec(x_1886);
x_1535 = x_1887;
goto block_1871;
}
}
}
else
{
lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; uint8_t x_1903; lean_object* x_1904; lean_object* x_1905; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1900 = lean_unsigned_to_nat(0u);
x_1901 = l_Lean_Level_getOffsetAux(x_1, x_1900);
lean_dec(x_1);
x_1902 = l_Lean_Level_getOffsetAux(x_2, x_1900);
lean_dec(x_2);
x_1903 = lean_nat_dec_eq(x_1901, x_1902);
lean_dec(x_1902);
lean_dec(x_1901);
x_1904 = lean_box(x_1903);
x_1905 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1905, 0, x_1904);
lean_ctor_set(x_1905, 1, x_7);
return x_1905;
}
}
default: 
{
lean_object* x_1906; lean_object* x_1907; uint8_t x_1908; 
x_1906 = l_Lean_Level_getLevelOffset(x_1);
x_1907 = l_Lean_Level_getLevelOffset(x_2);
x_1908 = lean_level_eq(x_1906, x_1907);
lean_dec(x_1907);
lean_dec(x_1906);
if (x_1908 == 0)
{
lean_object* x_1909; lean_object* x_1910; lean_object* x_1911; lean_object* x_1912; lean_object* x_1913; lean_object* x_1914; lean_object* x_2251; lean_object* x_2252; uint8_t x_2253; lean_object* x_2254; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; uint8_t x_2271; 
x_1909 = lean_box(0);
x_1910 = lean_mk_string("Meta");
x_1911 = lean_name_mk_string(x_1909, x_1910);
x_1912 = lean_mk_string("isLevelDefEq");
x_1913 = lean_name_mk_string(x_1911, x_1912);
x_2251 = lean_mk_string("step");
lean_inc(x_1913);
x_2252 = lean_name_mk_string(x_1913, x_2251);
x_2268 = lean_st_ref_get(x_6, x_7);
x_2269 = lean_ctor_get(x_2268, 0);
lean_inc(x_2269);
x_2270 = lean_ctor_get(x_2269, 3);
lean_inc(x_2270);
lean_dec(x_2269);
x_2271 = lean_ctor_get_uint8(x_2270, sizeof(void*)*1);
lean_dec(x_2270);
if (x_2271 == 0)
{
lean_object* x_2272; uint8_t x_2273; 
x_2272 = lean_ctor_get(x_2268, 1);
lean_inc(x_2272);
lean_dec(x_2268);
x_2273 = 0;
x_2253 = x_2273;
x_2254 = x_2272;
goto block_2267;
}
else
{
lean_object* x_2274; lean_object* x_2275; lean_object* x_2276; lean_object* x_2277; uint8_t x_2278; 
x_2274 = lean_ctor_get(x_2268, 1);
lean_inc(x_2274);
lean_dec(x_2268);
lean_inc(x_2252);
x_2275 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2252, x_3, x_4, x_5, x_6, x_2274);
x_2276 = lean_ctor_get(x_2275, 0);
lean_inc(x_2276);
x_2277 = lean_ctor_get(x_2275, 1);
lean_inc(x_2277);
lean_dec(x_2275);
x_2278 = lean_unbox(x_2276);
lean_dec(x_2276);
x_2253 = x_2278;
x_2254 = x_2277;
goto block_2267;
}
block_2250:
{
lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; uint8_t x_1923; 
lean_inc(x_1);
x_1915 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_1914);
x_1916 = lean_ctor_get(x_1915, 0);
lean_inc(x_1916);
x_1917 = lean_ctor_get(x_1915, 1);
lean_inc(x_1917);
lean_dec(x_1915);
x_1918 = l_Lean_Level_normalize(x_1916);
lean_dec(x_1916);
lean_inc(x_2);
x_1919 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_1917);
x_1920 = lean_ctor_get(x_1919, 0);
lean_inc(x_1920);
x_1921 = lean_ctor_get(x_1919, 1);
lean_inc(x_1921);
lean_dec(x_1919);
x_1922 = l_Lean_Level_normalize(x_1920);
lean_dec(x_1920);
x_1923 = lean_level_eq(x_1, x_1918);
if (x_1923 == 0)
{
lean_dec(x_1913);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_1918;
x_2 = x_1922;
x_7 = x_1921;
goto _start;
}
else
{
uint8_t x_1925; 
x_1925 = lean_level_eq(x_2, x_1922);
if (x_1925 == 0)
{
lean_dec(x_1913);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_1918;
x_2 = x_1922;
x_7 = x_1921;
goto _start;
}
else
{
lean_object* x_1927; 
lean_dec(x_1922);
lean_dec(x_1918);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_1927 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_1921);
if (lean_obj_tag(x_1927) == 0)
{
uint8_t x_1928; 
x_1928 = !lean_is_exclusive(x_1927);
if (x_1928 == 0)
{
lean_object* x_1929; lean_object* x_1930; uint8_t x_1931; uint8_t x_1932; uint8_t x_1933; 
x_1929 = lean_ctor_get(x_1927, 0);
x_1930 = lean_ctor_get(x_1927, 1);
x_1931 = 2;
x_1932 = lean_unbox(x_1929);
x_1933 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1932, x_1931);
if (x_1933 == 0)
{
uint8_t x_1934; uint8_t x_1935; uint8_t x_1936; lean_object* x_1937; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1934 = 1;
x_1935 = lean_unbox(x_1929);
lean_dec(x_1929);
x_1936 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1935, x_1934);
x_1937 = lean_box(x_1936);
lean_ctor_set(x_1927, 0, x_1937);
return x_1927;
}
else
{
lean_object* x_1938; 
lean_free_object(x_1927);
lean_dec(x_1929);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_1938 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_1930);
if (lean_obj_tag(x_1938) == 0)
{
uint8_t x_1939; 
x_1939 = !lean_is_exclusive(x_1938);
if (x_1939 == 0)
{
lean_object* x_1940; lean_object* x_1941; uint8_t x_1942; uint8_t x_1943; 
x_1940 = lean_ctor_get(x_1938, 0);
x_1941 = lean_ctor_get(x_1938, 1);
x_1942 = lean_unbox(x_1940);
x_1943 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1942, x_1931);
if (x_1943 == 0)
{
uint8_t x_1944; uint8_t x_1945; uint8_t x_1946; lean_object* x_1947; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1944 = 1;
x_1945 = lean_unbox(x_1940);
lean_dec(x_1940);
x_1946 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_1945, x_1944);
x_1947 = lean_box(x_1946);
lean_ctor_set(x_1938, 0, x_1947);
return x_1938;
}
else
{
lean_object* x_1948; lean_object* x_1949; lean_object* x_1950; uint8_t x_1951; 
lean_free_object(x_1938);
lean_dec(x_1940);
x_1948 = lean_st_ref_get(x_6, x_1941);
x_1949 = lean_ctor_get(x_1948, 1);
lean_inc(x_1949);
lean_dec(x_1948);
x_1950 = lean_st_ref_get(x_4, x_1949);
x_1951 = !lean_is_exclusive(x_1950);
if (x_1951 == 0)
{
lean_object* x_1952; lean_object* x_1953; lean_object* x_1954; uint8_t x_1955; 
x_1952 = lean_ctor_get(x_1950, 0);
x_1953 = lean_ctor_get(x_1950, 1);
x_1954 = lean_ctor_get(x_1952, 0);
lean_inc(x_1954);
lean_dec(x_1952);
lean_inc(x_1954);
x_1955 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1954, x_1);
if (x_1955 == 0)
{
uint8_t x_1956; 
x_1956 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_1954, x_2);
if (x_1956 == 0)
{
lean_object* x_1957; lean_object* x_1989; uint8_t x_1990; 
x_1989 = lean_ctor_get(x_3, 0);
lean_inc(x_1989);
x_1990 = lean_ctor_get_uint8(x_1989, 4);
lean_dec(x_1989);
if (x_1990 == 0)
{
uint8_t x_1991; lean_object* x_1992; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1991 = 0;
x_1992 = lean_box(x_1991);
lean_ctor_set(x_1950, 0, x_1992);
return x_1950;
}
else
{
uint8_t x_1993; 
x_1993 = l_Lean_Level_isMVar(x_1);
if (x_1993 == 0)
{
uint8_t x_1994; 
x_1994 = l_Lean_Level_isMVar(x_2);
if (x_1994 == 0)
{
uint8_t x_1995; lean_object* x_1996; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1995 = 0;
x_1996 = lean_box(x_1995);
lean_ctor_set(x_1950, 0, x_1996);
return x_1950;
}
else
{
lean_object* x_1997; 
lean_free_object(x_1950);
x_1997 = lean_box(0);
x_1957 = x_1997;
goto block_1988;
}
}
else
{
lean_object* x_1998; 
lean_free_object(x_1950);
x_1998 = lean_box(0);
x_1957 = x_1998;
goto block_1988;
}
}
block_1988:
{
lean_object* x_1958; lean_object* x_1959; uint8_t x_1960; lean_object* x_1961; lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; uint8_t x_1980; 
lean_dec(x_1957);
x_1958 = lean_mk_string("stuck");
x_1959 = lean_name_mk_string(x_1913, x_1958);
x_1977 = lean_st_ref_get(x_6, x_1953);
x_1978 = lean_ctor_get(x_1977, 0);
lean_inc(x_1978);
x_1979 = lean_ctor_get(x_1978, 3);
lean_inc(x_1979);
lean_dec(x_1978);
x_1980 = lean_ctor_get_uint8(x_1979, sizeof(void*)*1);
lean_dec(x_1979);
if (x_1980 == 0)
{
lean_object* x_1981; uint8_t x_1982; 
x_1981 = lean_ctor_get(x_1977, 1);
lean_inc(x_1981);
lean_dec(x_1977);
x_1982 = 0;
x_1960 = x_1982;
x_1961 = x_1981;
goto block_1976;
}
else
{
lean_object* x_1983; lean_object* x_1984; lean_object* x_1985; lean_object* x_1986; uint8_t x_1987; 
x_1983 = lean_ctor_get(x_1977, 1);
lean_inc(x_1983);
lean_dec(x_1977);
lean_inc(x_1959);
x_1984 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_1959, x_3, x_4, x_5, x_6, x_1983);
x_1985 = lean_ctor_get(x_1984, 0);
lean_inc(x_1985);
x_1986 = lean_ctor_get(x_1984, 1);
lean_inc(x_1986);
lean_dec(x_1984);
x_1987 = lean_unbox(x_1985);
lean_dec(x_1985);
x_1960 = x_1987;
x_1961 = x_1986;
goto block_1976;
}
block_1976:
{
if (x_1960 == 0)
{
lean_object* x_1962; 
lean_dec(x_1959);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_1962 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1961);
return x_1962;
}
else
{
lean_object* x_1963; lean_object* x_1964; lean_object* x_1965; lean_object* x_1966; lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; lean_object* x_1975; 
x_1963 = lean_mk_string("");
x_1964 = l_Lean_stringToMessageData(x_1963);
lean_dec(x_1963);
x_1965 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1965, 0, x_1);
lean_inc(x_1964);
x_1966 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1966, 0, x_1964);
lean_ctor_set(x_1966, 1, x_1965);
x_1967 = lean_mk_string(" =?= ");
x_1968 = l_Lean_stringToMessageData(x_1967);
lean_dec(x_1967);
x_1969 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1969, 0, x_1966);
lean_ctor_set(x_1969, 1, x_1968);
x_1970 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_1970, 0, x_2);
x_1971 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1971, 0, x_1969);
lean_ctor_set(x_1971, 1, x_1970);
x_1972 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1972, 0, x_1971);
lean_ctor_set(x_1972, 1, x_1964);
x_1973 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_1959, x_1972, x_3, x_4, x_5, x_6, x_1961);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1974 = lean_ctor_get(x_1973, 1);
lean_inc(x_1974);
lean_dec(x_1973);
x_1975 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_1974);
return x_1975;
}
}
}
}
else
{
lean_object* x_1999; uint8_t x_2000; 
lean_free_object(x_1950);
lean_dec(x_1913);
x_1999 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1953);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2000 = !lean_is_exclusive(x_1999);
if (x_2000 == 0)
{
lean_object* x_2001; uint8_t x_2002; lean_object* x_2003; 
x_2001 = lean_ctor_get(x_1999, 0);
lean_dec(x_2001);
x_2002 = 1;
x_2003 = lean_box(x_2002);
lean_ctor_set(x_1999, 0, x_2003);
return x_1999;
}
else
{
lean_object* x_2004; uint8_t x_2005; lean_object* x_2006; lean_object* x_2007; 
x_2004 = lean_ctor_get(x_1999, 1);
lean_inc(x_2004);
lean_dec(x_1999);
x_2005 = 1;
x_2006 = lean_box(x_2005);
x_2007 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2007, 0, x_2006);
lean_ctor_set(x_2007, 1, x_2004);
return x_2007;
}
}
}
else
{
lean_object* x_2008; uint8_t x_2009; 
lean_dec(x_1954);
lean_free_object(x_1950);
lean_dec(x_1913);
x_2008 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_1953);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2009 = !lean_is_exclusive(x_2008);
if (x_2009 == 0)
{
lean_object* x_2010; uint8_t x_2011; lean_object* x_2012; 
x_2010 = lean_ctor_get(x_2008, 0);
lean_dec(x_2010);
x_2011 = 1;
x_2012 = lean_box(x_2011);
lean_ctor_set(x_2008, 0, x_2012);
return x_2008;
}
else
{
lean_object* x_2013; uint8_t x_2014; lean_object* x_2015; lean_object* x_2016; 
x_2013 = lean_ctor_get(x_2008, 1);
lean_inc(x_2013);
lean_dec(x_2008);
x_2014 = 1;
x_2015 = lean_box(x_2014);
x_2016 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2016, 0, x_2015);
lean_ctor_set(x_2016, 1, x_2013);
return x_2016;
}
}
}
else
{
lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; uint8_t x_2020; 
x_2017 = lean_ctor_get(x_1950, 0);
x_2018 = lean_ctor_get(x_1950, 1);
lean_inc(x_2018);
lean_inc(x_2017);
lean_dec(x_1950);
x_2019 = lean_ctor_get(x_2017, 0);
lean_inc(x_2019);
lean_dec(x_2017);
lean_inc(x_2019);
x_2020 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2019, x_1);
if (x_2020 == 0)
{
uint8_t x_2021; 
x_2021 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2019, x_2);
if (x_2021 == 0)
{
lean_object* x_2022; lean_object* x_2054; uint8_t x_2055; 
x_2054 = lean_ctor_get(x_3, 0);
lean_inc(x_2054);
x_2055 = lean_ctor_get_uint8(x_2054, 4);
lean_dec(x_2054);
if (x_2055 == 0)
{
uint8_t x_2056; lean_object* x_2057; lean_object* x_2058; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2056 = 0;
x_2057 = lean_box(x_2056);
x_2058 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2058, 0, x_2057);
lean_ctor_set(x_2058, 1, x_2018);
return x_2058;
}
else
{
uint8_t x_2059; 
x_2059 = l_Lean_Level_isMVar(x_1);
if (x_2059 == 0)
{
uint8_t x_2060; 
x_2060 = l_Lean_Level_isMVar(x_2);
if (x_2060 == 0)
{
uint8_t x_2061; lean_object* x_2062; lean_object* x_2063; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2061 = 0;
x_2062 = lean_box(x_2061);
x_2063 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2063, 0, x_2062);
lean_ctor_set(x_2063, 1, x_2018);
return x_2063;
}
else
{
lean_object* x_2064; 
x_2064 = lean_box(0);
x_2022 = x_2064;
goto block_2053;
}
}
else
{
lean_object* x_2065; 
x_2065 = lean_box(0);
x_2022 = x_2065;
goto block_2053;
}
}
block_2053:
{
lean_object* x_2023; lean_object* x_2024; uint8_t x_2025; lean_object* x_2026; lean_object* x_2042; lean_object* x_2043; lean_object* x_2044; uint8_t x_2045; 
lean_dec(x_2022);
x_2023 = lean_mk_string("stuck");
x_2024 = lean_name_mk_string(x_1913, x_2023);
x_2042 = lean_st_ref_get(x_6, x_2018);
x_2043 = lean_ctor_get(x_2042, 0);
lean_inc(x_2043);
x_2044 = lean_ctor_get(x_2043, 3);
lean_inc(x_2044);
lean_dec(x_2043);
x_2045 = lean_ctor_get_uint8(x_2044, sizeof(void*)*1);
lean_dec(x_2044);
if (x_2045 == 0)
{
lean_object* x_2046; uint8_t x_2047; 
x_2046 = lean_ctor_get(x_2042, 1);
lean_inc(x_2046);
lean_dec(x_2042);
x_2047 = 0;
x_2025 = x_2047;
x_2026 = x_2046;
goto block_2041;
}
else
{
lean_object* x_2048; lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; uint8_t x_2052; 
x_2048 = lean_ctor_get(x_2042, 1);
lean_inc(x_2048);
lean_dec(x_2042);
lean_inc(x_2024);
x_2049 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2024, x_3, x_4, x_5, x_6, x_2048);
x_2050 = lean_ctor_get(x_2049, 0);
lean_inc(x_2050);
x_2051 = lean_ctor_get(x_2049, 1);
lean_inc(x_2051);
lean_dec(x_2049);
x_2052 = lean_unbox(x_2050);
lean_dec(x_2050);
x_2025 = x_2052;
x_2026 = x_2051;
goto block_2041;
}
block_2041:
{
if (x_2025 == 0)
{
lean_object* x_2027; 
lean_dec(x_2024);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2027 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2026);
return x_2027;
}
else
{
lean_object* x_2028; lean_object* x_2029; lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; lean_object* x_2039; lean_object* x_2040; 
x_2028 = lean_mk_string("");
x_2029 = l_Lean_stringToMessageData(x_2028);
lean_dec(x_2028);
x_2030 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2030, 0, x_1);
lean_inc(x_2029);
x_2031 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2031, 0, x_2029);
lean_ctor_set(x_2031, 1, x_2030);
x_2032 = lean_mk_string(" =?= ");
x_2033 = l_Lean_stringToMessageData(x_2032);
lean_dec(x_2032);
x_2034 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2034, 0, x_2031);
lean_ctor_set(x_2034, 1, x_2033);
x_2035 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2035, 0, x_2);
x_2036 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2036, 0, x_2034);
lean_ctor_set(x_2036, 1, x_2035);
x_2037 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2037, 0, x_2036);
lean_ctor_set(x_2037, 1, x_2029);
x_2038 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2024, x_2037, x_3, x_4, x_5, x_6, x_2026);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2039 = lean_ctor_get(x_2038, 1);
lean_inc(x_2039);
lean_dec(x_2038);
x_2040 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2039);
return x_2040;
}
}
}
}
else
{
lean_object* x_2066; lean_object* x_2067; lean_object* x_2068; uint8_t x_2069; lean_object* x_2070; lean_object* x_2071; 
lean_dec(x_1913);
x_2066 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2018);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2067 = lean_ctor_get(x_2066, 1);
lean_inc(x_2067);
if (lean_is_exclusive(x_2066)) {
 lean_ctor_release(x_2066, 0);
 lean_ctor_release(x_2066, 1);
 x_2068 = x_2066;
} else {
 lean_dec_ref(x_2066);
 x_2068 = lean_box(0);
}
x_2069 = 1;
x_2070 = lean_box(x_2069);
if (lean_is_scalar(x_2068)) {
 x_2071 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2071 = x_2068;
}
lean_ctor_set(x_2071, 0, x_2070);
lean_ctor_set(x_2071, 1, x_2067);
return x_2071;
}
}
else
{
lean_object* x_2072; lean_object* x_2073; lean_object* x_2074; uint8_t x_2075; lean_object* x_2076; lean_object* x_2077; 
lean_dec(x_2019);
lean_dec(x_1913);
x_2072 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2018);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2073 = lean_ctor_get(x_2072, 1);
lean_inc(x_2073);
if (lean_is_exclusive(x_2072)) {
 lean_ctor_release(x_2072, 0);
 lean_ctor_release(x_2072, 1);
 x_2074 = x_2072;
} else {
 lean_dec_ref(x_2072);
 x_2074 = lean_box(0);
}
x_2075 = 1;
x_2076 = lean_box(x_2075);
if (lean_is_scalar(x_2074)) {
 x_2077 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2077 = x_2074;
}
lean_ctor_set(x_2077, 0, x_2076);
lean_ctor_set(x_2077, 1, x_2073);
return x_2077;
}
}
}
}
else
{
lean_object* x_2078; lean_object* x_2079; uint8_t x_2080; uint8_t x_2081; 
x_2078 = lean_ctor_get(x_1938, 0);
x_2079 = lean_ctor_get(x_1938, 1);
lean_inc(x_2079);
lean_inc(x_2078);
lean_dec(x_1938);
x_2080 = lean_unbox(x_2078);
x_2081 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2080, x_1931);
if (x_2081 == 0)
{
uint8_t x_2082; uint8_t x_2083; uint8_t x_2084; lean_object* x_2085; lean_object* x_2086; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2082 = 1;
x_2083 = lean_unbox(x_2078);
lean_dec(x_2078);
x_2084 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2083, x_2082);
x_2085 = lean_box(x_2084);
x_2086 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2086, 0, x_2085);
lean_ctor_set(x_2086, 1, x_2079);
return x_2086;
}
else
{
lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; lean_object* x_2093; uint8_t x_2094; 
lean_dec(x_2078);
x_2087 = lean_st_ref_get(x_6, x_2079);
x_2088 = lean_ctor_get(x_2087, 1);
lean_inc(x_2088);
lean_dec(x_2087);
x_2089 = lean_st_ref_get(x_4, x_2088);
x_2090 = lean_ctor_get(x_2089, 0);
lean_inc(x_2090);
x_2091 = lean_ctor_get(x_2089, 1);
lean_inc(x_2091);
if (lean_is_exclusive(x_2089)) {
 lean_ctor_release(x_2089, 0);
 lean_ctor_release(x_2089, 1);
 x_2092 = x_2089;
} else {
 lean_dec_ref(x_2089);
 x_2092 = lean_box(0);
}
x_2093 = lean_ctor_get(x_2090, 0);
lean_inc(x_2093);
lean_dec(x_2090);
lean_inc(x_2093);
x_2094 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2093, x_1);
if (x_2094 == 0)
{
uint8_t x_2095; 
x_2095 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2093, x_2);
if (x_2095 == 0)
{
lean_object* x_2096; lean_object* x_2128; uint8_t x_2129; 
x_2128 = lean_ctor_get(x_3, 0);
lean_inc(x_2128);
x_2129 = lean_ctor_get_uint8(x_2128, 4);
lean_dec(x_2128);
if (x_2129 == 0)
{
uint8_t x_2130; lean_object* x_2131; lean_object* x_2132; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2130 = 0;
x_2131 = lean_box(x_2130);
if (lean_is_scalar(x_2092)) {
 x_2132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2132 = x_2092;
}
lean_ctor_set(x_2132, 0, x_2131);
lean_ctor_set(x_2132, 1, x_2091);
return x_2132;
}
else
{
uint8_t x_2133; 
x_2133 = l_Lean_Level_isMVar(x_1);
if (x_2133 == 0)
{
uint8_t x_2134; 
x_2134 = l_Lean_Level_isMVar(x_2);
if (x_2134 == 0)
{
uint8_t x_2135; lean_object* x_2136; lean_object* x_2137; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2135 = 0;
x_2136 = lean_box(x_2135);
if (lean_is_scalar(x_2092)) {
 x_2137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2137 = x_2092;
}
lean_ctor_set(x_2137, 0, x_2136);
lean_ctor_set(x_2137, 1, x_2091);
return x_2137;
}
else
{
lean_object* x_2138; 
lean_dec(x_2092);
x_2138 = lean_box(0);
x_2096 = x_2138;
goto block_2127;
}
}
else
{
lean_object* x_2139; 
lean_dec(x_2092);
x_2139 = lean_box(0);
x_2096 = x_2139;
goto block_2127;
}
}
block_2127:
{
lean_object* x_2097; lean_object* x_2098; uint8_t x_2099; lean_object* x_2100; lean_object* x_2116; lean_object* x_2117; lean_object* x_2118; uint8_t x_2119; 
lean_dec(x_2096);
x_2097 = lean_mk_string("stuck");
x_2098 = lean_name_mk_string(x_1913, x_2097);
x_2116 = lean_st_ref_get(x_6, x_2091);
x_2117 = lean_ctor_get(x_2116, 0);
lean_inc(x_2117);
x_2118 = lean_ctor_get(x_2117, 3);
lean_inc(x_2118);
lean_dec(x_2117);
x_2119 = lean_ctor_get_uint8(x_2118, sizeof(void*)*1);
lean_dec(x_2118);
if (x_2119 == 0)
{
lean_object* x_2120; uint8_t x_2121; 
x_2120 = lean_ctor_get(x_2116, 1);
lean_inc(x_2120);
lean_dec(x_2116);
x_2121 = 0;
x_2099 = x_2121;
x_2100 = x_2120;
goto block_2115;
}
else
{
lean_object* x_2122; lean_object* x_2123; lean_object* x_2124; lean_object* x_2125; uint8_t x_2126; 
x_2122 = lean_ctor_get(x_2116, 1);
lean_inc(x_2122);
lean_dec(x_2116);
lean_inc(x_2098);
x_2123 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2098, x_3, x_4, x_5, x_6, x_2122);
x_2124 = lean_ctor_get(x_2123, 0);
lean_inc(x_2124);
x_2125 = lean_ctor_get(x_2123, 1);
lean_inc(x_2125);
lean_dec(x_2123);
x_2126 = lean_unbox(x_2124);
lean_dec(x_2124);
x_2099 = x_2126;
x_2100 = x_2125;
goto block_2115;
}
block_2115:
{
if (x_2099 == 0)
{
lean_object* x_2101; 
lean_dec(x_2098);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2101 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2100);
return x_2101;
}
else
{
lean_object* x_2102; lean_object* x_2103; lean_object* x_2104; lean_object* x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; lean_object* x_2109; lean_object* x_2110; lean_object* x_2111; lean_object* x_2112; lean_object* x_2113; lean_object* x_2114; 
x_2102 = lean_mk_string("");
x_2103 = l_Lean_stringToMessageData(x_2102);
lean_dec(x_2102);
x_2104 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2104, 0, x_1);
lean_inc(x_2103);
x_2105 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2105, 0, x_2103);
lean_ctor_set(x_2105, 1, x_2104);
x_2106 = lean_mk_string(" =?= ");
x_2107 = l_Lean_stringToMessageData(x_2106);
lean_dec(x_2106);
x_2108 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2108, 0, x_2105);
lean_ctor_set(x_2108, 1, x_2107);
x_2109 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2109, 0, x_2);
x_2110 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2110, 0, x_2108);
lean_ctor_set(x_2110, 1, x_2109);
x_2111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2111, 0, x_2110);
lean_ctor_set(x_2111, 1, x_2103);
x_2112 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2098, x_2111, x_3, x_4, x_5, x_6, x_2100);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2113 = lean_ctor_get(x_2112, 1);
lean_inc(x_2113);
lean_dec(x_2112);
x_2114 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2113);
return x_2114;
}
}
}
}
else
{
lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; uint8_t x_2143; lean_object* x_2144; lean_object* x_2145; 
lean_dec(x_2092);
lean_dec(x_1913);
x_2140 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2091);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2141 = lean_ctor_get(x_2140, 1);
lean_inc(x_2141);
if (lean_is_exclusive(x_2140)) {
 lean_ctor_release(x_2140, 0);
 lean_ctor_release(x_2140, 1);
 x_2142 = x_2140;
} else {
 lean_dec_ref(x_2140);
 x_2142 = lean_box(0);
}
x_2143 = 1;
x_2144 = lean_box(x_2143);
if (lean_is_scalar(x_2142)) {
 x_2145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2145 = x_2142;
}
lean_ctor_set(x_2145, 0, x_2144);
lean_ctor_set(x_2145, 1, x_2141);
return x_2145;
}
}
else
{
lean_object* x_2146; lean_object* x_2147; lean_object* x_2148; uint8_t x_2149; lean_object* x_2150; lean_object* x_2151; 
lean_dec(x_2093);
lean_dec(x_2092);
lean_dec(x_1913);
x_2146 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2091);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2147 = lean_ctor_get(x_2146, 1);
lean_inc(x_2147);
if (lean_is_exclusive(x_2146)) {
 lean_ctor_release(x_2146, 0);
 lean_ctor_release(x_2146, 1);
 x_2148 = x_2146;
} else {
 lean_dec_ref(x_2146);
 x_2148 = lean_box(0);
}
x_2149 = 1;
x_2150 = lean_box(x_2149);
if (lean_is_scalar(x_2148)) {
 x_2151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2151 = x_2148;
}
lean_ctor_set(x_2151, 0, x_2150);
lean_ctor_set(x_2151, 1, x_2147);
return x_2151;
}
}
}
}
else
{
uint8_t x_2152; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2152 = !lean_is_exclusive(x_1938);
if (x_2152 == 0)
{
return x_1938;
}
else
{
lean_object* x_2153; lean_object* x_2154; lean_object* x_2155; 
x_2153 = lean_ctor_get(x_1938, 0);
x_2154 = lean_ctor_get(x_1938, 1);
lean_inc(x_2154);
lean_inc(x_2153);
lean_dec(x_1938);
x_2155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2155, 0, x_2153);
lean_ctor_set(x_2155, 1, x_2154);
return x_2155;
}
}
}
}
else
{
lean_object* x_2156; lean_object* x_2157; uint8_t x_2158; uint8_t x_2159; uint8_t x_2160; 
x_2156 = lean_ctor_get(x_1927, 0);
x_2157 = lean_ctor_get(x_1927, 1);
lean_inc(x_2157);
lean_inc(x_2156);
lean_dec(x_1927);
x_2158 = 2;
x_2159 = lean_unbox(x_2156);
x_2160 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2159, x_2158);
if (x_2160 == 0)
{
uint8_t x_2161; uint8_t x_2162; uint8_t x_2163; lean_object* x_2164; lean_object* x_2165; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2161 = 1;
x_2162 = lean_unbox(x_2156);
lean_dec(x_2156);
x_2163 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2162, x_2161);
x_2164 = lean_box(x_2163);
x_2165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2165, 0, x_2164);
lean_ctor_set(x_2165, 1, x_2157);
return x_2165;
}
else
{
lean_object* x_2166; 
lean_dec(x_2156);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_2166 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_2157);
if (lean_obj_tag(x_2166) == 0)
{
lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; uint8_t x_2170; uint8_t x_2171; 
x_2167 = lean_ctor_get(x_2166, 0);
lean_inc(x_2167);
x_2168 = lean_ctor_get(x_2166, 1);
lean_inc(x_2168);
if (lean_is_exclusive(x_2166)) {
 lean_ctor_release(x_2166, 0);
 lean_ctor_release(x_2166, 1);
 x_2169 = x_2166;
} else {
 lean_dec_ref(x_2166);
 x_2169 = lean_box(0);
}
x_2170 = lean_unbox(x_2167);
x_2171 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2170, x_2158);
if (x_2171 == 0)
{
uint8_t x_2172; uint8_t x_2173; uint8_t x_2174; lean_object* x_2175; lean_object* x_2176; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2172 = 1;
x_2173 = lean_unbox(x_2167);
lean_dec(x_2167);
x_2174 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2173, x_2172);
x_2175 = lean_box(x_2174);
if (lean_is_scalar(x_2169)) {
 x_2176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2176 = x_2169;
}
lean_ctor_set(x_2176, 0, x_2175);
lean_ctor_set(x_2176, 1, x_2168);
return x_2176;
}
else
{
lean_object* x_2177; lean_object* x_2178; lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; lean_object* x_2182; lean_object* x_2183; uint8_t x_2184; 
lean_dec(x_2169);
lean_dec(x_2167);
x_2177 = lean_st_ref_get(x_6, x_2168);
x_2178 = lean_ctor_get(x_2177, 1);
lean_inc(x_2178);
lean_dec(x_2177);
x_2179 = lean_st_ref_get(x_4, x_2178);
x_2180 = lean_ctor_get(x_2179, 0);
lean_inc(x_2180);
x_2181 = lean_ctor_get(x_2179, 1);
lean_inc(x_2181);
if (lean_is_exclusive(x_2179)) {
 lean_ctor_release(x_2179, 0);
 lean_ctor_release(x_2179, 1);
 x_2182 = x_2179;
} else {
 lean_dec_ref(x_2179);
 x_2182 = lean_box(0);
}
x_2183 = lean_ctor_get(x_2180, 0);
lean_inc(x_2183);
lean_dec(x_2180);
lean_inc(x_2183);
x_2184 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2183, x_1);
if (x_2184 == 0)
{
uint8_t x_2185; 
x_2185 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2183, x_2);
if (x_2185 == 0)
{
lean_object* x_2186; lean_object* x_2218; uint8_t x_2219; 
x_2218 = lean_ctor_get(x_3, 0);
lean_inc(x_2218);
x_2219 = lean_ctor_get_uint8(x_2218, 4);
lean_dec(x_2218);
if (x_2219 == 0)
{
uint8_t x_2220; lean_object* x_2221; lean_object* x_2222; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2220 = 0;
x_2221 = lean_box(x_2220);
if (lean_is_scalar(x_2182)) {
 x_2222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2222 = x_2182;
}
lean_ctor_set(x_2222, 0, x_2221);
lean_ctor_set(x_2222, 1, x_2181);
return x_2222;
}
else
{
uint8_t x_2223; 
x_2223 = l_Lean_Level_isMVar(x_1);
if (x_2223 == 0)
{
uint8_t x_2224; 
x_2224 = l_Lean_Level_isMVar(x_2);
if (x_2224 == 0)
{
uint8_t x_2225; lean_object* x_2226; lean_object* x_2227; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2225 = 0;
x_2226 = lean_box(x_2225);
if (lean_is_scalar(x_2182)) {
 x_2227 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2227 = x_2182;
}
lean_ctor_set(x_2227, 0, x_2226);
lean_ctor_set(x_2227, 1, x_2181);
return x_2227;
}
else
{
lean_object* x_2228; 
lean_dec(x_2182);
x_2228 = lean_box(0);
x_2186 = x_2228;
goto block_2217;
}
}
else
{
lean_object* x_2229; 
lean_dec(x_2182);
x_2229 = lean_box(0);
x_2186 = x_2229;
goto block_2217;
}
}
block_2217:
{
lean_object* x_2187; lean_object* x_2188; uint8_t x_2189; lean_object* x_2190; lean_object* x_2206; lean_object* x_2207; lean_object* x_2208; uint8_t x_2209; 
lean_dec(x_2186);
x_2187 = lean_mk_string("stuck");
x_2188 = lean_name_mk_string(x_1913, x_2187);
x_2206 = lean_st_ref_get(x_6, x_2181);
x_2207 = lean_ctor_get(x_2206, 0);
lean_inc(x_2207);
x_2208 = lean_ctor_get(x_2207, 3);
lean_inc(x_2208);
lean_dec(x_2207);
x_2209 = lean_ctor_get_uint8(x_2208, sizeof(void*)*1);
lean_dec(x_2208);
if (x_2209 == 0)
{
lean_object* x_2210; uint8_t x_2211; 
x_2210 = lean_ctor_get(x_2206, 1);
lean_inc(x_2210);
lean_dec(x_2206);
x_2211 = 0;
x_2189 = x_2211;
x_2190 = x_2210;
goto block_2205;
}
else
{
lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; uint8_t x_2216; 
x_2212 = lean_ctor_get(x_2206, 1);
lean_inc(x_2212);
lean_dec(x_2206);
lean_inc(x_2188);
x_2213 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2188, x_3, x_4, x_5, x_6, x_2212);
x_2214 = lean_ctor_get(x_2213, 0);
lean_inc(x_2214);
x_2215 = lean_ctor_get(x_2213, 1);
lean_inc(x_2215);
lean_dec(x_2213);
x_2216 = lean_unbox(x_2214);
lean_dec(x_2214);
x_2189 = x_2216;
x_2190 = x_2215;
goto block_2205;
}
block_2205:
{
if (x_2189 == 0)
{
lean_object* x_2191; 
lean_dec(x_2188);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2191 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2190);
return x_2191;
}
else
{
lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; lean_object* x_2198; lean_object* x_2199; lean_object* x_2200; lean_object* x_2201; lean_object* x_2202; lean_object* x_2203; lean_object* x_2204; 
x_2192 = lean_mk_string("");
x_2193 = l_Lean_stringToMessageData(x_2192);
lean_dec(x_2192);
x_2194 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2194, 0, x_1);
lean_inc(x_2193);
x_2195 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2195, 0, x_2193);
lean_ctor_set(x_2195, 1, x_2194);
x_2196 = lean_mk_string(" =?= ");
x_2197 = l_Lean_stringToMessageData(x_2196);
lean_dec(x_2196);
x_2198 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2198, 0, x_2195);
lean_ctor_set(x_2198, 1, x_2197);
x_2199 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2199, 0, x_2);
x_2200 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2200, 0, x_2198);
lean_ctor_set(x_2200, 1, x_2199);
x_2201 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2201, 0, x_2200);
lean_ctor_set(x_2201, 1, x_2193);
x_2202 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2188, x_2201, x_3, x_4, x_5, x_6, x_2190);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2203 = lean_ctor_get(x_2202, 1);
lean_inc(x_2203);
lean_dec(x_2202);
x_2204 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2203);
return x_2204;
}
}
}
}
else
{
lean_object* x_2230; lean_object* x_2231; lean_object* x_2232; uint8_t x_2233; lean_object* x_2234; lean_object* x_2235; 
lean_dec(x_2182);
lean_dec(x_1913);
x_2230 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2181);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2231 = lean_ctor_get(x_2230, 1);
lean_inc(x_2231);
if (lean_is_exclusive(x_2230)) {
 lean_ctor_release(x_2230, 0);
 lean_ctor_release(x_2230, 1);
 x_2232 = x_2230;
} else {
 lean_dec_ref(x_2230);
 x_2232 = lean_box(0);
}
x_2233 = 1;
x_2234 = lean_box(x_2233);
if (lean_is_scalar(x_2232)) {
 x_2235 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2235 = x_2232;
}
lean_ctor_set(x_2235, 0, x_2234);
lean_ctor_set(x_2235, 1, x_2231);
return x_2235;
}
}
else
{
lean_object* x_2236; lean_object* x_2237; lean_object* x_2238; uint8_t x_2239; lean_object* x_2240; lean_object* x_2241; 
lean_dec(x_2183);
lean_dec(x_2182);
lean_dec(x_1913);
x_2236 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2181);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2237 = lean_ctor_get(x_2236, 1);
lean_inc(x_2237);
if (lean_is_exclusive(x_2236)) {
 lean_ctor_release(x_2236, 0);
 lean_ctor_release(x_2236, 1);
 x_2238 = x_2236;
} else {
 lean_dec_ref(x_2236);
 x_2238 = lean_box(0);
}
x_2239 = 1;
x_2240 = lean_box(x_2239);
if (lean_is_scalar(x_2238)) {
 x_2241 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2241 = x_2238;
}
lean_ctor_set(x_2241, 0, x_2240);
lean_ctor_set(x_2241, 1, x_2237);
return x_2241;
}
}
}
else
{
lean_object* x_2242; lean_object* x_2243; lean_object* x_2244; lean_object* x_2245; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2242 = lean_ctor_get(x_2166, 0);
lean_inc(x_2242);
x_2243 = lean_ctor_get(x_2166, 1);
lean_inc(x_2243);
if (lean_is_exclusive(x_2166)) {
 lean_ctor_release(x_2166, 0);
 lean_ctor_release(x_2166, 1);
 x_2244 = x_2166;
} else {
 lean_dec_ref(x_2166);
 x_2244 = lean_box(0);
}
if (lean_is_scalar(x_2244)) {
 x_2245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2245 = x_2244;
}
lean_ctor_set(x_2245, 0, x_2242);
lean_ctor_set(x_2245, 1, x_2243);
return x_2245;
}
}
}
}
else
{
uint8_t x_2246; 
lean_dec(x_1913);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2246 = !lean_is_exclusive(x_1927);
if (x_2246 == 0)
{
return x_1927;
}
else
{
lean_object* x_2247; lean_object* x_2248; lean_object* x_2249; 
x_2247 = lean_ctor_get(x_1927, 0);
x_2248 = lean_ctor_get(x_1927, 1);
lean_inc(x_2248);
lean_inc(x_2247);
lean_dec(x_1927);
x_2249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2249, 0, x_2247);
lean_ctor_set(x_2249, 1, x_2248);
return x_2249;
}
}
}
}
}
block_2267:
{
if (x_2253 == 0)
{
lean_dec(x_2252);
x_1914 = x_2254;
goto block_2250;
}
else
{
lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; 
x_2255 = lean_mk_string("");
x_2256 = l_Lean_stringToMessageData(x_2255);
lean_dec(x_2255);
lean_inc(x_1);
x_2257 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2257, 0, x_1);
lean_inc(x_2256);
x_2258 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2258, 0, x_2256);
lean_ctor_set(x_2258, 1, x_2257);
x_2259 = lean_mk_string(" =?= ");
x_2260 = l_Lean_stringToMessageData(x_2259);
lean_dec(x_2259);
x_2261 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2261, 0, x_2258);
lean_ctor_set(x_2261, 1, x_2260);
lean_inc(x_2);
x_2262 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2262, 0, x_2);
x_2263 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2263, 0, x_2261);
lean_ctor_set(x_2263, 1, x_2262);
x_2264 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2264, 0, x_2263);
lean_ctor_set(x_2264, 1, x_2256);
x_2265 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2252, x_2264, x_3, x_4, x_5, x_6, x_2254);
x_2266 = lean_ctor_get(x_2265, 1);
lean_inc(x_2266);
lean_dec(x_2265);
x_1914 = x_2266;
goto block_2250;
}
}
}
else
{
lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; uint8_t x_2282; lean_object* x_2283; lean_object* x_2284; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2279 = lean_unsigned_to_nat(0u);
x_2280 = l_Lean_Level_getOffsetAux(x_1, x_2279);
lean_dec(x_1);
x_2281 = l_Lean_Level_getOffsetAux(x_2, x_2279);
lean_dec(x_2);
x_2282 = lean_nat_dec_eq(x_2280, x_2281);
lean_dec(x_2281);
lean_dec(x_2280);
x_2283 = lean_box(x_2282);
x_2284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2284, 0, x_2283);
lean_ctor_set(x_2284, 1, x_7);
return x_2284;
}
}
}
}
case 2:
{
lean_object* x_2285; lean_object* x_2286; uint8_t x_2287; 
x_2285 = l_Lean_Level_getLevelOffset(x_1);
x_2286 = l_Lean_Level_getLevelOffset(x_2);
x_2287 = lean_level_eq(x_2285, x_2286);
lean_dec(x_2286);
lean_dec(x_2285);
if (x_2287 == 0)
{
lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; lean_object* x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2630; lean_object* x_2631; uint8_t x_2632; lean_object* x_2633; lean_object* x_2647; lean_object* x_2648; lean_object* x_2649; uint8_t x_2650; 
x_2288 = lean_box(0);
x_2289 = lean_mk_string("Meta");
x_2290 = lean_name_mk_string(x_2288, x_2289);
x_2291 = lean_mk_string("isLevelDefEq");
x_2292 = lean_name_mk_string(x_2290, x_2291);
x_2630 = lean_mk_string("step");
lean_inc(x_2292);
x_2631 = lean_name_mk_string(x_2292, x_2630);
x_2647 = lean_st_ref_get(x_6, x_7);
x_2648 = lean_ctor_get(x_2647, 0);
lean_inc(x_2648);
x_2649 = lean_ctor_get(x_2648, 3);
lean_inc(x_2649);
lean_dec(x_2648);
x_2650 = lean_ctor_get_uint8(x_2649, sizeof(void*)*1);
lean_dec(x_2649);
if (x_2650 == 0)
{
lean_object* x_2651; uint8_t x_2652; 
x_2651 = lean_ctor_get(x_2647, 1);
lean_inc(x_2651);
lean_dec(x_2647);
x_2652 = 0;
x_2632 = x_2652;
x_2633 = x_2651;
goto block_2646;
}
else
{
lean_object* x_2653; lean_object* x_2654; lean_object* x_2655; lean_object* x_2656; uint8_t x_2657; 
x_2653 = lean_ctor_get(x_2647, 1);
lean_inc(x_2653);
lean_dec(x_2647);
lean_inc(x_2631);
x_2654 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2631, x_3, x_4, x_5, x_6, x_2653);
x_2655 = lean_ctor_get(x_2654, 0);
lean_inc(x_2655);
x_2656 = lean_ctor_get(x_2654, 1);
lean_inc(x_2656);
lean_dec(x_2654);
x_2657 = lean_unbox(x_2655);
lean_dec(x_2655);
x_2632 = x_2657;
x_2633 = x_2656;
goto block_2646;
}
block_2629:
{
lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; lean_object* x_2297; lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; uint8_t x_2302; 
lean_inc(x_1);
x_2294 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_2293);
x_2295 = lean_ctor_get(x_2294, 0);
lean_inc(x_2295);
x_2296 = lean_ctor_get(x_2294, 1);
lean_inc(x_2296);
lean_dec(x_2294);
x_2297 = l_Lean_Level_normalize(x_2295);
lean_dec(x_2295);
lean_inc(x_2);
x_2298 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_2296);
x_2299 = lean_ctor_get(x_2298, 0);
lean_inc(x_2299);
x_2300 = lean_ctor_get(x_2298, 1);
lean_inc(x_2300);
lean_dec(x_2298);
x_2301 = l_Lean_Level_normalize(x_2299);
lean_dec(x_2299);
x_2302 = lean_level_eq(x_1, x_2297);
if (x_2302 == 0)
{
lean_dec(x_2292);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_2297;
x_2 = x_2301;
x_7 = x_2300;
goto _start;
}
else
{
uint8_t x_2304; 
x_2304 = lean_level_eq(x_2, x_2301);
if (x_2304 == 0)
{
lean_dec(x_2292);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_2297;
x_2 = x_2301;
x_7 = x_2300;
goto _start;
}
else
{
lean_object* x_2306; 
lean_dec(x_2301);
lean_dec(x_2297);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_2306 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_2300);
if (lean_obj_tag(x_2306) == 0)
{
uint8_t x_2307; 
x_2307 = !lean_is_exclusive(x_2306);
if (x_2307 == 0)
{
lean_object* x_2308; lean_object* x_2309; uint8_t x_2310; uint8_t x_2311; uint8_t x_2312; 
x_2308 = lean_ctor_get(x_2306, 0);
x_2309 = lean_ctor_get(x_2306, 1);
x_2310 = 2;
x_2311 = lean_unbox(x_2308);
x_2312 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2311, x_2310);
if (x_2312 == 0)
{
uint8_t x_2313; uint8_t x_2314; uint8_t x_2315; lean_object* x_2316; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2313 = 1;
x_2314 = lean_unbox(x_2308);
lean_dec(x_2308);
x_2315 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2314, x_2313);
x_2316 = lean_box(x_2315);
lean_ctor_set(x_2306, 0, x_2316);
return x_2306;
}
else
{
lean_object* x_2317; 
lean_free_object(x_2306);
lean_dec(x_2308);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_2317 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_2309);
if (lean_obj_tag(x_2317) == 0)
{
uint8_t x_2318; 
x_2318 = !lean_is_exclusive(x_2317);
if (x_2318 == 0)
{
lean_object* x_2319; lean_object* x_2320; uint8_t x_2321; uint8_t x_2322; 
x_2319 = lean_ctor_get(x_2317, 0);
x_2320 = lean_ctor_get(x_2317, 1);
x_2321 = lean_unbox(x_2319);
x_2322 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2321, x_2310);
if (x_2322 == 0)
{
uint8_t x_2323; uint8_t x_2324; uint8_t x_2325; lean_object* x_2326; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2323 = 1;
x_2324 = lean_unbox(x_2319);
lean_dec(x_2319);
x_2325 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2324, x_2323);
x_2326 = lean_box(x_2325);
lean_ctor_set(x_2317, 0, x_2326);
return x_2317;
}
else
{
lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; uint8_t x_2330; 
lean_free_object(x_2317);
lean_dec(x_2319);
x_2327 = lean_st_ref_get(x_6, x_2320);
x_2328 = lean_ctor_get(x_2327, 1);
lean_inc(x_2328);
lean_dec(x_2327);
x_2329 = lean_st_ref_get(x_4, x_2328);
x_2330 = !lean_is_exclusive(x_2329);
if (x_2330 == 0)
{
lean_object* x_2331; lean_object* x_2332; lean_object* x_2333; uint8_t x_2334; 
x_2331 = lean_ctor_get(x_2329, 0);
x_2332 = lean_ctor_get(x_2329, 1);
x_2333 = lean_ctor_get(x_2331, 0);
lean_inc(x_2333);
lean_dec(x_2331);
lean_inc(x_2333);
x_2334 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2333, x_1);
if (x_2334 == 0)
{
uint8_t x_2335; 
x_2335 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2333, x_2);
if (x_2335 == 0)
{
lean_object* x_2336; lean_object* x_2368; uint8_t x_2369; 
x_2368 = lean_ctor_get(x_3, 0);
lean_inc(x_2368);
x_2369 = lean_ctor_get_uint8(x_2368, 4);
lean_dec(x_2368);
if (x_2369 == 0)
{
uint8_t x_2370; lean_object* x_2371; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2370 = 0;
x_2371 = lean_box(x_2370);
lean_ctor_set(x_2329, 0, x_2371);
return x_2329;
}
else
{
uint8_t x_2372; 
x_2372 = l_Lean_Level_isMVar(x_1);
if (x_2372 == 0)
{
uint8_t x_2373; 
x_2373 = l_Lean_Level_isMVar(x_2);
if (x_2373 == 0)
{
uint8_t x_2374; lean_object* x_2375; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2374 = 0;
x_2375 = lean_box(x_2374);
lean_ctor_set(x_2329, 0, x_2375);
return x_2329;
}
else
{
lean_object* x_2376; 
lean_free_object(x_2329);
x_2376 = lean_box(0);
x_2336 = x_2376;
goto block_2367;
}
}
else
{
lean_object* x_2377; 
lean_free_object(x_2329);
x_2377 = lean_box(0);
x_2336 = x_2377;
goto block_2367;
}
}
block_2367:
{
lean_object* x_2337; lean_object* x_2338; uint8_t x_2339; lean_object* x_2340; lean_object* x_2356; lean_object* x_2357; lean_object* x_2358; uint8_t x_2359; 
lean_dec(x_2336);
x_2337 = lean_mk_string("stuck");
x_2338 = lean_name_mk_string(x_2292, x_2337);
x_2356 = lean_st_ref_get(x_6, x_2332);
x_2357 = lean_ctor_get(x_2356, 0);
lean_inc(x_2357);
x_2358 = lean_ctor_get(x_2357, 3);
lean_inc(x_2358);
lean_dec(x_2357);
x_2359 = lean_ctor_get_uint8(x_2358, sizeof(void*)*1);
lean_dec(x_2358);
if (x_2359 == 0)
{
lean_object* x_2360; uint8_t x_2361; 
x_2360 = lean_ctor_get(x_2356, 1);
lean_inc(x_2360);
lean_dec(x_2356);
x_2361 = 0;
x_2339 = x_2361;
x_2340 = x_2360;
goto block_2355;
}
else
{
lean_object* x_2362; lean_object* x_2363; lean_object* x_2364; lean_object* x_2365; uint8_t x_2366; 
x_2362 = lean_ctor_get(x_2356, 1);
lean_inc(x_2362);
lean_dec(x_2356);
lean_inc(x_2338);
x_2363 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2338, x_3, x_4, x_5, x_6, x_2362);
x_2364 = lean_ctor_get(x_2363, 0);
lean_inc(x_2364);
x_2365 = lean_ctor_get(x_2363, 1);
lean_inc(x_2365);
lean_dec(x_2363);
x_2366 = lean_unbox(x_2364);
lean_dec(x_2364);
x_2339 = x_2366;
x_2340 = x_2365;
goto block_2355;
}
block_2355:
{
if (x_2339 == 0)
{
lean_object* x_2341; 
lean_dec(x_2338);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2341 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2340);
return x_2341;
}
else
{
lean_object* x_2342; lean_object* x_2343; lean_object* x_2344; lean_object* x_2345; lean_object* x_2346; lean_object* x_2347; lean_object* x_2348; lean_object* x_2349; lean_object* x_2350; lean_object* x_2351; lean_object* x_2352; lean_object* x_2353; lean_object* x_2354; 
x_2342 = lean_mk_string("");
x_2343 = l_Lean_stringToMessageData(x_2342);
lean_dec(x_2342);
x_2344 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2344, 0, x_1);
lean_inc(x_2343);
x_2345 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2345, 0, x_2343);
lean_ctor_set(x_2345, 1, x_2344);
x_2346 = lean_mk_string(" =?= ");
x_2347 = l_Lean_stringToMessageData(x_2346);
lean_dec(x_2346);
x_2348 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2348, 0, x_2345);
lean_ctor_set(x_2348, 1, x_2347);
x_2349 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2349, 0, x_2);
x_2350 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2350, 0, x_2348);
lean_ctor_set(x_2350, 1, x_2349);
x_2351 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2351, 0, x_2350);
lean_ctor_set(x_2351, 1, x_2343);
x_2352 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2338, x_2351, x_3, x_4, x_5, x_6, x_2340);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2353 = lean_ctor_get(x_2352, 1);
lean_inc(x_2353);
lean_dec(x_2352);
x_2354 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2353);
return x_2354;
}
}
}
}
else
{
lean_object* x_2378; uint8_t x_2379; 
lean_free_object(x_2329);
lean_dec(x_2292);
x_2378 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2332);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2379 = !lean_is_exclusive(x_2378);
if (x_2379 == 0)
{
lean_object* x_2380; uint8_t x_2381; lean_object* x_2382; 
x_2380 = lean_ctor_get(x_2378, 0);
lean_dec(x_2380);
x_2381 = 1;
x_2382 = lean_box(x_2381);
lean_ctor_set(x_2378, 0, x_2382);
return x_2378;
}
else
{
lean_object* x_2383; uint8_t x_2384; lean_object* x_2385; lean_object* x_2386; 
x_2383 = lean_ctor_get(x_2378, 1);
lean_inc(x_2383);
lean_dec(x_2378);
x_2384 = 1;
x_2385 = lean_box(x_2384);
x_2386 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2386, 0, x_2385);
lean_ctor_set(x_2386, 1, x_2383);
return x_2386;
}
}
}
else
{
lean_object* x_2387; uint8_t x_2388; 
lean_dec(x_2333);
lean_free_object(x_2329);
lean_dec(x_2292);
x_2387 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2332);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2388 = !lean_is_exclusive(x_2387);
if (x_2388 == 0)
{
lean_object* x_2389; uint8_t x_2390; lean_object* x_2391; 
x_2389 = lean_ctor_get(x_2387, 0);
lean_dec(x_2389);
x_2390 = 1;
x_2391 = lean_box(x_2390);
lean_ctor_set(x_2387, 0, x_2391);
return x_2387;
}
else
{
lean_object* x_2392; uint8_t x_2393; lean_object* x_2394; lean_object* x_2395; 
x_2392 = lean_ctor_get(x_2387, 1);
lean_inc(x_2392);
lean_dec(x_2387);
x_2393 = 1;
x_2394 = lean_box(x_2393);
x_2395 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2395, 0, x_2394);
lean_ctor_set(x_2395, 1, x_2392);
return x_2395;
}
}
}
else
{
lean_object* x_2396; lean_object* x_2397; lean_object* x_2398; uint8_t x_2399; 
x_2396 = lean_ctor_get(x_2329, 0);
x_2397 = lean_ctor_get(x_2329, 1);
lean_inc(x_2397);
lean_inc(x_2396);
lean_dec(x_2329);
x_2398 = lean_ctor_get(x_2396, 0);
lean_inc(x_2398);
lean_dec(x_2396);
lean_inc(x_2398);
x_2399 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2398, x_1);
if (x_2399 == 0)
{
uint8_t x_2400; 
x_2400 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2398, x_2);
if (x_2400 == 0)
{
lean_object* x_2401; lean_object* x_2433; uint8_t x_2434; 
x_2433 = lean_ctor_get(x_3, 0);
lean_inc(x_2433);
x_2434 = lean_ctor_get_uint8(x_2433, 4);
lean_dec(x_2433);
if (x_2434 == 0)
{
uint8_t x_2435; lean_object* x_2436; lean_object* x_2437; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2435 = 0;
x_2436 = lean_box(x_2435);
x_2437 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2437, 0, x_2436);
lean_ctor_set(x_2437, 1, x_2397);
return x_2437;
}
else
{
uint8_t x_2438; 
x_2438 = l_Lean_Level_isMVar(x_1);
if (x_2438 == 0)
{
uint8_t x_2439; 
x_2439 = l_Lean_Level_isMVar(x_2);
if (x_2439 == 0)
{
uint8_t x_2440; lean_object* x_2441; lean_object* x_2442; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2440 = 0;
x_2441 = lean_box(x_2440);
x_2442 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2442, 0, x_2441);
lean_ctor_set(x_2442, 1, x_2397);
return x_2442;
}
else
{
lean_object* x_2443; 
x_2443 = lean_box(0);
x_2401 = x_2443;
goto block_2432;
}
}
else
{
lean_object* x_2444; 
x_2444 = lean_box(0);
x_2401 = x_2444;
goto block_2432;
}
}
block_2432:
{
lean_object* x_2402; lean_object* x_2403; uint8_t x_2404; lean_object* x_2405; lean_object* x_2421; lean_object* x_2422; lean_object* x_2423; uint8_t x_2424; 
lean_dec(x_2401);
x_2402 = lean_mk_string("stuck");
x_2403 = lean_name_mk_string(x_2292, x_2402);
x_2421 = lean_st_ref_get(x_6, x_2397);
x_2422 = lean_ctor_get(x_2421, 0);
lean_inc(x_2422);
x_2423 = lean_ctor_get(x_2422, 3);
lean_inc(x_2423);
lean_dec(x_2422);
x_2424 = lean_ctor_get_uint8(x_2423, sizeof(void*)*1);
lean_dec(x_2423);
if (x_2424 == 0)
{
lean_object* x_2425; uint8_t x_2426; 
x_2425 = lean_ctor_get(x_2421, 1);
lean_inc(x_2425);
lean_dec(x_2421);
x_2426 = 0;
x_2404 = x_2426;
x_2405 = x_2425;
goto block_2420;
}
else
{
lean_object* x_2427; lean_object* x_2428; lean_object* x_2429; lean_object* x_2430; uint8_t x_2431; 
x_2427 = lean_ctor_get(x_2421, 1);
lean_inc(x_2427);
lean_dec(x_2421);
lean_inc(x_2403);
x_2428 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2403, x_3, x_4, x_5, x_6, x_2427);
x_2429 = lean_ctor_get(x_2428, 0);
lean_inc(x_2429);
x_2430 = lean_ctor_get(x_2428, 1);
lean_inc(x_2430);
lean_dec(x_2428);
x_2431 = lean_unbox(x_2429);
lean_dec(x_2429);
x_2404 = x_2431;
x_2405 = x_2430;
goto block_2420;
}
block_2420:
{
if (x_2404 == 0)
{
lean_object* x_2406; 
lean_dec(x_2403);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2406 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2405);
return x_2406;
}
else
{
lean_object* x_2407; lean_object* x_2408; lean_object* x_2409; lean_object* x_2410; lean_object* x_2411; lean_object* x_2412; lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; lean_object* x_2417; lean_object* x_2418; lean_object* x_2419; 
x_2407 = lean_mk_string("");
x_2408 = l_Lean_stringToMessageData(x_2407);
lean_dec(x_2407);
x_2409 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2409, 0, x_1);
lean_inc(x_2408);
x_2410 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2410, 0, x_2408);
lean_ctor_set(x_2410, 1, x_2409);
x_2411 = lean_mk_string(" =?= ");
x_2412 = l_Lean_stringToMessageData(x_2411);
lean_dec(x_2411);
x_2413 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2413, 0, x_2410);
lean_ctor_set(x_2413, 1, x_2412);
x_2414 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2414, 0, x_2);
x_2415 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2415, 0, x_2413);
lean_ctor_set(x_2415, 1, x_2414);
x_2416 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2416, 0, x_2415);
lean_ctor_set(x_2416, 1, x_2408);
x_2417 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2403, x_2416, x_3, x_4, x_5, x_6, x_2405);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2418 = lean_ctor_get(x_2417, 1);
lean_inc(x_2418);
lean_dec(x_2417);
x_2419 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2418);
return x_2419;
}
}
}
}
else
{
lean_object* x_2445; lean_object* x_2446; lean_object* x_2447; uint8_t x_2448; lean_object* x_2449; lean_object* x_2450; 
lean_dec(x_2292);
x_2445 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2397);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2446 = lean_ctor_get(x_2445, 1);
lean_inc(x_2446);
if (lean_is_exclusive(x_2445)) {
 lean_ctor_release(x_2445, 0);
 lean_ctor_release(x_2445, 1);
 x_2447 = x_2445;
} else {
 lean_dec_ref(x_2445);
 x_2447 = lean_box(0);
}
x_2448 = 1;
x_2449 = lean_box(x_2448);
if (lean_is_scalar(x_2447)) {
 x_2450 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2450 = x_2447;
}
lean_ctor_set(x_2450, 0, x_2449);
lean_ctor_set(x_2450, 1, x_2446);
return x_2450;
}
}
else
{
lean_object* x_2451; lean_object* x_2452; lean_object* x_2453; uint8_t x_2454; lean_object* x_2455; lean_object* x_2456; 
lean_dec(x_2398);
lean_dec(x_2292);
x_2451 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2397);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2452 = lean_ctor_get(x_2451, 1);
lean_inc(x_2452);
if (lean_is_exclusive(x_2451)) {
 lean_ctor_release(x_2451, 0);
 lean_ctor_release(x_2451, 1);
 x_2453 = x_2451;
} else {
 lean_dec_ref(x_2451);
 x_2453 = lean_box(0);
}
x_2454 = 1;
x_2455 = lean_box(x_2454);
if (lean_is_scalar(x_2453)) {
 x_2456 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2456 = x_2453;
}
lean_ctor_set(x_2456, 0, x_2455);
lean_ctor_set(x_2456, 1, x_2452);
return x_2456;
}
}
}
}
else
{
lean_object* x_2457; lean_object* x_2458; uint8_t x_2459; uint8_t x_2460; 
x_2457 = lean_ctor_get(x_2317, 0);
x_2458 = lean_ctor_get(x_2317, 1);
lean_inc(x_2458);
lean_inc(x_2457);
lean_dec(x_2317);
x_2459 = lean_unbox(x_2457);
x_2460 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2459, x_2310);
if (x_2460 == 0)
{
uint8_t x_2461; uint8_t x_2462; uint8_t x_2463; lean_object* x_2464; lean_object* x_2465; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2461 = 1;
x_2462 = lean_unbox(x_2457);
lean_dec(x_2457);
x_2463 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2462, x_2461);
x_2464 = lean_box(x_2463);
x_2465 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2465, 0, x_2464);
lean_ctor_set(x_2465, 1, x_2458);
return x_2465;
}
else
{
lean_object* x_2466; lean_object* x_2467; lean_object* x_2468; lean_object* x_2469; lean_object* x_2470; lean_object* x_2471; lean_object* x_2472; uint8_t x_2473; 
lean_dec(x_2457);
x_2466 = lean_st_ref_get(x_6, x_2458);
x_2467 = lean_ctor_get(x_2466, 1);
lean_inc(x_2467);
lean_dec(x_2466);
x_2468 = lean_st_ref_get(x_4, x_2467);
x_2469 = lean_ctor_get(x_2468, 0);
lean_inc(x_2469);
x_2470 = lean_ctor_get(x_2468, 1);
lean_inc(x_2470);
if (lean_is_exclusive(x_2468)) {
 lean_ctor_release(x_2468, 0);
 lean_ctor_release(x_2468, 1);
 x_2471 = x_2468;
} else {
 lean_dec_ref(x_2468);
 x_2471 = lean_box(0);
}
x_2472 = lean_ctor_get(x_2469, 0);
lean_inc(x_2472);
lean_dec(x_2469);
lean_inc(x_2472);
x_2473 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2472, x_1);
if (x_2473 == 0)
{
uint8_t x_2474; 
x_2474 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2472, x_2);
if (x_2474 == 0)
{
lean_object* x_2475; lean_object* x_2507; uint8_t x_2508; 
x_2507 = lean_ctor_get(x_3, 0);
lean_inc(x_2507);
x_2508 = lean_ctor_get_uint8(x_2507, 4);
lean_dec(x_2507);
if (x_2508 == 0)
{
uint8_t x_2509; lean_object* x_2510; lean_object* x_2511; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2509 = 0;
x_2510 = lean_box(x_2509);
if (lean_is_scalar(x_2471)) {
 x_2511 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2511 = x_2471;
}
lean_ctor_set(x_2511, 0, x_2510);
lean_ctor_set(x_2511, 1, x_2470);
return x_2511;
}
else
{
uint8_t x_2512; 
x_2512 = l_Lean_Level_isMVar(x_1);
if (x_2512 == 0)
{
uint8_t x_2513; 
x_2513 = l_Lean_Level_isMVar(x_2);
if (x_2513 == 0)
{
uint8_t x_2514; lean_object* x_2515; lean_object* x_2516; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2514 = 0;
x_2515 = lean_box(x_2514);
if (lean_is_scalar(x_2471)) {
 x_2516 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2516 = x_2471;
}
lean_ctor_set(x_2516, 0, x_2515);
lean_ctor_set(x_2516, 1, x_2470);
return x_2516;
}
else
{
lean_object* x_2517; 
lean_dec(x_2471);
x_2517 = lean_box(0);
x_2475 = x_2517;
goto block_2506;
}
}
else
{
lean_object* x_2518; 
lean_dec(x_2471);
x_2518 = lean_box(0);
x_2475 = x_2518;
goto block_2506;
}
}
block_2506:
{
lean_object* x_2476; lean_object* x_2477; uint8_t x_2478; lean_object* x_2479; lean_object* x_2495; lean_object* x_2496; lean_object* x_2497; uint8_t x_2498; 
lean_dec(x_2475);
x_2476 = lean_mk_string("stuck");
x_2477 = lean_name_mk_string(x_2292, x_2476);
x_2495 = lean_st_ref_get(x_6, x_2470);
x_2496 = lean_ctor_get(x_2495, 0);
lean_inc(x_2496);
x_2497 = lean_ctor_get(x_2496, 3);
lean_inc(x_2497);
lean_dec(x_2496);
x_2498 = lean_ctor_get_uint8(x_2497, sizeof(void*)*1);
lean_dec(x_2497);
if (x_2498 == 0)
{
lean_object* x_2499; uint8_t x_2500; 
x_2499 = lean_ctor_get(x_2495, 1);
lean_inc(x_2499);
lean_dec(x_2495);
x_2500 = 0;
x_2478 = x_2500;
x_2479 = x_2499;
goto block_2494;
}
else
{
lean_object* x_2501; lean_object* x_2502; lean_object* x_2503; lean_object* x_2504; uint8_t x_2505; 
x_2501 = lean_ctor_get(x_2495, 1);
lean_inc(x_2501);
lean_dec(x_2495);
lean_inc(x_2477);
x_2502 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2477, x_3, x_4, x_5, x_6, x_2501);
x_2503 = lean_ctor_get(x_2502, 0);
lean_inc(x_2503);
x_2504 = lean_ctor_get(x_2502, 1);
lean_inc(x_2504);
lean_dec(x_2502);
x_2505 = lean_unbox(x_2503);
lean_dec(x_2503);
x_2478 = x_2505;
x_2479 = x_2504;
goto block_2494;
}
block_2494:
{
if (x_2478 == 0)
{
lean_object* x_2480; 
lean_dec(x_2477);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2480 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2479);
return x_2480;
}
else
{
lean_object* x_2481; lean_object* x_2482; lean_object* x_2483; lean_object* x_2484; lean_object* x_2485; lean_object* x_2486; lean_object* x_2487; lean_object* x_2488; lean_object* x_2489; lean_object* x_2490; lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; 
x_2481 = lean_mk_string("");
x_2482 = l_Lean_stringToMessageData(x_2481);
lean_dec(x_2481);
x_2483 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2483, 0, x_1);
lean_inc(x_2482);
x_2484 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2484, 0, x_2482);
lean_ctor_set(x_2484, 1, x_2483);
x_2485 = lean_mk_string(" =?= ");
x_2486 = l_Lean_stringToMessageData(x_2485);
lean_dec(x_2485);
x_2487 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2487, 0, x_2484);
lean_ctor_set(x_2487, 1, x_2486);
x_2488 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2488, 0, x_2);
x_2489 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2489, 0, x_2487);
lean_ctor_set(x_2489, 1, x_2488);
x_2490 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2490, 0, x_2489);
lean_ctor_set(x_2490, 1, x_2482);
x_2491 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2477, x_2490, x_3, x_4, x_5, x_6, x_2479);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2492 = lean_ctor_get(x_2491, 1);
lean_inc(x_2492);
lean_dec(x_2491);
x_2493 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2492);
return x_2493;
}
}
}
}
else
{
lean_object* x_2519; lean_object* x_2520; lean_object* x_2521; uint8_t x_2522; lean_object* x_2523; lean_object* x_2524; 
lean_dec(x_2471);
lean_dec(x_2292);
x_2519 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2470);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2520 = lean_ctor_get(x_2519, 1);
lean_inc(x_2520);
if (lean_is_exclusive(x_2519)) {
 lean_ctor_release(x_2519, 0);
 lean_ctor_release(x_2519, 1);
 x_2521 = x_2519;
} else {
 lean_dec_ref(x_2519);
 x_2521 = lean_box(0);
}
x_2522 = 1;
x_2523 = lean_box(x_2522);
if (lean_is_scalar(x_2521)) {
 x_2524 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2524 = x_2521;
}
lean_ctor_set(x_2524, 0, x_2523);
lean_ctor_set(x_2524, 1, x_2520);
return x_2524;
}
}
else
{
lean_object* x_2525; lean_object* x_2526; lean_object* x_2527; uint8_t x_2528; lean_object* x_2529; lean_object* x_2530; 
lean_dec(x_2472);
lean_dec(x_2471);
lean_dec(x_2292);
x_2525 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2470);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2526 = lean_ctor_get(x_2525, 1);
lean_inc(x_2526);
if (lean_is_exclusive(x_2525)) {
 lean_ctor_release(x_2525, 0);
 lean_ctor_release(x_2525, 1);
 x_2527 = x_2525;
} else {
 lean_dec_ref(x_2525);
 x_2527 = lean_box(0);
}
x_2528 = 1;
x_2529 = lean_box(x_2528);
if (lean_is_scalar(x_2527)) {
 x_2530 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2530 = x_2527;
}
lean_ctor_set(x_2530, 0, x_2529);
lean_ctor_set(x_2530, 1, x_2526);
return x_2530;
}
}
}
}
else
{
uint8_t x_2531; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2531 = !lean_is_exclusive(x_2317);
if (x_2531 == 0)
{
return x_2317;
}
else
{
lean_object* x_2532; lean_object* x_2533; lean_object* x_2534; 
x_2532 = lean_ctor_get(x_2317, 0);
x_2533 = lean_ctor_get(x_2317, 1);
lean_inc(x_2533);
lean_inc(x_2532);
lean_dec(x_2317);
x_2534 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2534, 0, x_2532);
lean_ctor_set(x_2534, 1, x_2533);
return x_2534;
}
}
}
}
else
{
lean_object* x_2535; lean_object* x_2536; uint8_t x_2537; uint8_t x_2538; uint8_t x_2539; 
x_2535 = lean_ctor_get(x_2306, 0);
x_2536 = lean_ctor_get(x_2306, 1);
lean_inc(x_2536);
lean_inc(x_2535);
lean_dec(x_2306);
x_2537 = 2;
x_2538 = lean_unbox(x_2535);
x_2539 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2538, x_2537);
if (x_2539 == 0)
{
uint8_t x_2540; uint8_t x_2541; uint8_t x_2542; lean_object* x_2543; lean_object* x_2544; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2540 = 1;
x_2541 = lean_unbox(x_2535);
lean_dec(x_2535);
x_2542 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2541, x_2540);
x_2543 = lean_box(x_2542);
x_2544 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2544, 0, x_2543);
lean_ctor_set(x_2544, 1, x_2536);
return x_2544;
}
else
{
lean_object* x_2545; 
lean_dec(x_2535);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_2545 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_2536);
if (lean_obj_tag(x_2545) == 0)
{
lean_object* x_2546; lean_object* x_2547; lean_object* x_2548; uint8_t x_2549; uint8_t x_2550; 
x_2546 = lean_ctor_get(x_2545, 0);
lean_inc(x_2546);
x_2547 = lean_ctor_get(x_2545, 1);
lean_inc(x_2547);
if (lean_is_exclusive(x_2545)) {
 lean_ctor_release(x_2545, 0);
 lean_ctor_release(x_2545, 1);
 x_2548 = x_2545;
} else {
 lean_dec_ref(x_2545);
 x_2548 = lean_box(0);
}
x_2549 = lean_unbox(x_2546);
x_2550 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2549, x_2537);
if (x_2550 == 0)
{
uint8_t x_2551; uint8_t x_2552; uint8_t x_2553; lean_object* x_2554; lean_object* x_2555; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2551 = 1;
x_2552 = lean_unbox(x_2546);
lean_dec(x_2546);
x_2553 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2552, x_2551);
x_2554 = lean_box(x_2553);
if (lean_is_scalar(x_2548)) {
 x_2555 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2555 = x_2548;
}
lean_ctor_set(x_2555, 0, x_2554);
lean_ctor_set(x_2555, 1, x_2547);
return x_2555;
}
else
{
lean_object* x_2556; lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; lean_object* x_2561; lean_object* x_2562; uint8_t x_2563; 
lean_dec(x_2548);
lean_dec(x_2546);
x_2556 = lean_st_ref_get(x_6, x_2547);
x_2557 = lean_ctor_get(x_2556, 1);
lean_inc(x_2557);
lean_dec(x_2556);
x_2558 = lean_st_ref_get(x_4, x_2557);
x_2559 = lean_ctor_get(x_2558, 0);
lean_inc(x_2559);
x_2560 = lean_ctor_get(x_2558, 1);
lean_inc(x_2560);
if (lean_is_exclusive(x_2558)) {
 lean_ctor_release(x_2558, 0);
 lean_ctor_release(x_2558, 1);
 x_2561 = x_2558;
} else {
 lean_dec_ref(x_2558);
 x_2561 = lean_box(0);
}
x_2562 = lean_ctor_get(x_2559, 0);
lean_inc(x_2562);
lean_dec(x_2559);
lean_inc(x_2562);
x_2563 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2562, x_1);
if (x_2563 == 0)
{
uint8_t x_2564; 
x_2564 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2562, x_2);
if (x_2564 == 0)
{
lean_object* x_2565; lean_object* x_2597; uint8_t x_2598; 
x_2597 = lean_ctor_get(x_3, 0);
lean_inc(x_2597);
x_2598 = lean_ctor_get_uint8(x_2597, 4);
lean_dec(x_2597);
if (x_2598 == 0)
{
uint8_t x_2599; lean_object* x_2600; lean_object* x_2601; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2599 = 0;
x_2600 = lean_box(x_2599);
if (lean_is_scalar(x_2561)) {
 x_2601 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2601 = x_2561;
}
lean_ctor_set(x_2601, 0, x_2600);
lean_ctor_set(x_2601, 1, x_2560);
return x_2601;
}
else
{
uint8_t x_2602; 
x_2602 = l_Lean_Level_isMVar(x_1);
if (x_2602 == 0)
{
uint8_t x_2603; 
x_2603 = l_Lean_Level_isMVar(x_2);
if (x_2603 == 0)
{
uint8_t x_2604; lean_object* x_2605; lean_object* x_2606; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2604 = 0;
x_2605 = lean_box(x_2604);
if (lean_is_scalar(x_2561)) {
 x_2606 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2606 = x_2561;
}
lean_ctor_set(x_2606, 0, x_2605);
lean_ctor_set(x_2606, 1, x_2560);
return x_2606;
}
else
{
lean_object* x_2607; 
lean_dec(x_2561);
x_2607 = lean_box(0);
x_2565 = x_2607;
goto block_2596;
}
}
else
{
lean_object* x_2608; 
lean_dec(x_2561);
x_2608 = lean_box(0);
x_2565 = x_2608;
goto block_2596;
}
}
block_2596:
{
lean_object* x_2566; lean_object* x_2567; uint8_t x_2568; lean_object* x_2569; lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; uint8_t x_2588; 
lean_dec(x_2565);
x_2566 = lean_mk_string("stuck");
x_2567 = lean_name_mk_string(x_2292, x_2566);
x_2585 = lean_st_ref_get(x_6, x_2560);
x_2586 = lean_ctor_get(x_2585, 0);
lean_inc(x_2586);
x_2587 = lean_ctor_get(x_2586, 3);
lean_inc(x_2587);
lean_dec(x_2586);
x_2588 = lean_ctor_get_uint8(x_2587, sizeof(void*)*1);
lean_dec(x_2587);
if (x_2588 == 0)
{
lean_object* x_2589; uint8_t x_2590; 
x_2589 = lean_ctor_get(x_2585, 1);
lean_inc(x_2589);
lean_dec(x_2585);
x_2590 = 0;
x_2568 = x_2590;
x_2569 = x_2589;
goto block_2584;
}
else
{
lean_object* x_2591; lean_object* x_2592; lean_object* x_2593; lean_object* x_2594; uint8_t x_2595; 
x_2591 = lean_ctor_get(x_2585, 1);
lean_inc(x_2591);
lean_dec(x_2585);
lean_inc(x_2567);
x_2592 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2567, x_3, x_4, x_5, x_6, x_2591);
x_2593 = lean_ctor_get(x_2592, 0);
lean_inc(x_2593);
x_2594 = lean_ctor_get(x_2592, 1);
lean_inc(x_2594);
lean_dec(x_2592);
x_2595 = lean_unbox(x_2593);
lean_dec(x_2593);
x_2568 = x_2595;
x_2569 = x_2594;
goto block_2584;
}
block_2584:
{
if (x_2568 == 0)
{
lean_object* x_2570; 
lean_dec(x_2567);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2570 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2569);
return x_2570;
}
else
{
lean_object* x_2571; lean_object* x_2572; lean_object* x_2573; lean_object* x_2574; lean_object* x_2575; lean_object* x_2576; lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; lean_object* x_2580; lean_object* x_2581; lean_object* x_2582; lean_object* x_2583; 
x_2571 = lean_mk_string("");
x_2572 = l_Lean_stringToMessageData(x_2571);
lean_dec(x_2571);
x_2573 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2573, 0, x_1);
lean_inc(x_2572);
x_2574 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2574, 0, x_2572);
lean_ctor_set(x_2574, 1, x_2573);
x_2575 = lean_mk_string(" =?= ");
x_2576 = l_Lean_stringToMessageData(x_2575);
lean_dec(x_2575);
x_2577 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2577, 0, x_2574);
lean_ctor_set(x_2577, 1, x_2576);
x_2578 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2578, 0, x_2);
x_2579 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2579, 0, x_2577);
lean_ctor_set(x_2579, 1, x_2578);
x_2580 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2580, 0, x_2579);
lean_ctor_set(x_2580, 1, x_2572);
x_2581 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2567, x_2580, x_3, x_4, x_5, x_6, x_2569);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2582 = lean_ctor_get(x_2581, 1);
lean_inc(x_2582);
lean_dec(x_2581);
x_2583 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2582);
return x_2583;
}
}
}
}
else
{
lean_object* x_2609; lean_object* x_2610; lean_object* x_2611; uint8_t x_2612; lean_object* x_2613; lean_object* x_2614; 
lean_dec(x_2561);
lean_dec(x_2292);
x_2609 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2560);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2610 = lean_ctor_get(x_2609, 1);
lean_inc(x_2610);
if (lean_is_exclusive(x_2609)) {
 lean_ctor_release(x_2609, 0);
 lean_ctor_release(x_2609, 1);
 x_2611 = x_2609;
} else {
 lean_dec_ref(x_2609);
 x_2611 = lean_box(0);
}
x_2612 = 1;
x_2613 = lean_box(x_2612);
if (lean_is_scalar(x_2611)) {
 x_2614 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2614 = x_2611;
}
lean_ctor_set(x_2614, 0, x_2613);
lean_ctor_set(x_2614, 1, x_2610);
return x_2614;
}
}
else
{
lean_object* x_2615; lean_object* x_2616; lean_object* x_2617; uint8_t x_2618; lean_object* x_2619; lean_object* x_2620; 
lean_dec(x_2562);
lean_dec(x_2561);
lean_dec(x_2292);
x_2615 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2560);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2616 = lean_ctor_get(x_2615, 1);
lean_inc(x_2616);
if (lean_is_exclusive(x_2615)) {
 lean_ctor_release(x_2615, 0);
 lean_ctor_release(x_2615, 1);
 x_2617 = x_2615;
} else {
 lean_dec_ref(x_2615);
 x_2617 = lean_box(0);
}
x_2618 = 1;
x_2619 = lean_box(x_2618);
if (lean_is_scalar(x_2617)) {
 x_2620 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2620 = x_2617;
}
lean_ctor_set(x_2620, 0, x_2619);
lean_ctor_set(x_2620, 1, x_2616);
return x_2620;
}
}
}
else
{
lean_object* x_2621; lean_object* x_2622; lean_object* x_2623; lean_object* x_2624; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2621 = lean_ctor_get(x_2545, 0);
lean_inc(x_2621);
x_2622 = lean_ctor_get(x_2545, 1);
lean_inc(x_2622);
if (lean_is_exclusive(x_2545)) {
 lean_ctor_release(x_2545, 0);
 lean_ctor_release(x_2545, 1);
 x_2623 = x_2545;
} else {
 lean_dec_ref(x_2545);
 x_2623 = lean_box(0);
}
if (lean_is_scalar(x_2623)) {
 x_2624 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2624 = x_2623;
}
lean_ctor_set(x_2624, 0, x_2621);
lean_ctor_set(x_2624, 1, x_2622);
return x_2624;
}
}
}
}
else
{
uint8_t x_2625; 
lean_dec(x_2292);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2625 = !lean_is_exclusive(x_2306);
if (x_2625 == 0)
{
return x_2306;
}
else
{
lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; 
x_2626 = lean_ctor_get(x_2306, 0);
x_2627 = lean_ctor_get(x_2306, 1);
lean_inc(x_2627);
lean_inc(x_2626);
lean_dec(x_2306);
x_2628 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2628, 0, x_2626);
lean_ctor_set(x_2628, 1, x_2627);
return x_2628;
}
}
}
}
}
block_2646:
{
if (x_2632 == 0)
{
lean_dec(x_2631);
x_2293 = x_2633;
goto block_2629;
}
else
{
lean_object* x_2634; lean_object* x_2635; lean_object* x_2636; lean_object* x_2637; lean_object* x_2638; lean_object* x_2639; lean_object* x_2640; lean_object* x_2641; lean_object* x_2642; lean_object* x_2643; lean_object* x_2644; lean_object* x_2645; 
x_2634 = lean_mk_string("");
x_2635 = l_Lean_stringToMessageData(x_2634);
lean_dec(x_2634);
lean_inc(x_1);
x_2636 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2636, 0, x_1);
lean_inc(x_2635);
x_2637 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2637, 0, x_2635);
lean_ctor_set(x_2637, 1, x_2636);
x_2638 = lean_mk_string(" =?= ");
x_2639 = l_Lean_stringToMessageData(x_2638);
lean_dec(x_2638);
x_2640 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2640, 0, x_2637);
lean_ctor_set(x_2640, 1, x_2639);
lean_inc(x_2);
x_2641 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2641, 0, x_2);
x_2642 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2642, 0, x_2640);
lean_ctor_set(x_2642, 1, x_2641);
x_2643 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2643, 0, x_2642);
lean_ctor_set(x_2643, 1, x_2635);
x_2644 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2631, x_2643, x_3, x_4, x_5, x_6, x_2633);
x_2645 = lean_ctor_get(x_2644, 1);
lean_inc(x_2645);
lean_dec(x_2644);
x_2293 = x_2645;
goto block_2629;
}
}
}
else
{
lean_object* x_2658; lean_object* x_2659; lean_object* x_2660; uint8_t x_2661; lean_object* x_2662; lean_object* x_2663; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2658 = lean_unsigned_to_nat(0u);
x_2659 = l_Lean_Level_getOffsetAux(x_1, x_2658);
lean_dec(x_1);
x_2660 = l_Lean_Level_getOffsetAux(x_2, x_2658);
lean_dec(x_2);
x_2661 = lean_nat_dec_eq(x_2659, x_2660);
lean_dec(x_2660);
lean_dec(x_2659);
x_2662 = lean_box(x_2661);
x_2663 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2663, 0, x_2662);
lean_ctor_set(x_2663, 1, x_7);
return x_2663;
}
}
case 3:
{
lean_object* x_2664; lean_object* x_2665; uint8_t x_2666; 
x_2664 = l_Lean_Level_getLevelOffset(x_1);
x_2665 = l_Lean_Level_getLevelOffset(x_2);
x_2666 = lean_level_eq(x_2664, x_2665);
lean_dec(x_2665);
lean_dec(x_2664);
if (x_2666 == 0)
{
lean_object* x_2667; lean_object* x_2668; lean_object* x_2669; lean_object* x_2670; lean_object* x_2671; lean_object* x_2672; lean_object* x_3009; lean_object* x_3010; uint8_t x_3011; lean_object* x_3012; lean_object* x_3026; lean_object* x_3027; lean_object* x_3028; uint8_t x_3029; 
x_2667 = lean_box(0);
x_2668 = lean_mk_string("Meta");
x_2669 = lean_name_mk_string(x_2667, x_2668);
x_2670 = lean_mk_string("isLevelDefEq");
x_2671 = lean_name_mk_string(x_2669, x_2670);
x_3009 = lean_mk_string("step");
lean_inc(x_2671);
x_3010 = lean_name_mk_string(x_2671, x_3009);
x_3026 = lean_st_ref_get(x_6, x_7);
x_3027 = lean_ctor_get(x_3026, 0);
lean_inc(x_3027);
x_3028 = lean_ctor_get(x_3027, 3);
lean_inc(x_3028);
lean_dec(x_3027);
x_3029 = lean_ctor_get_uint8(x_3028, sizeof(void*)*1);
lean_dec(x_3028);
if (x_3029 == 0)
{
lean_object* x_3030; uint8_t x_3031; 
x_3030 = lean_ctor_get(x_3026, 1);
lean_inc(x_3030);
lean_dec(x_3026);
x_3031 = 0;
x_3011 = x_3031;
x_3012 = x_3030;
goto block_3025;
}
else
{
lean_object* x_3032; lean_object* x_3033; lean_object* x_3034; lean_object* x_3035; uint8_t x_3036; 
x_3032 = lean_ctor_get(x_3026, 1);
lean_inc(x_3032);
lean_dec(x_3026);
lean_inc(x_3010);
x_3033 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3010, x_3, x_4, x_5, x_6, x_3032);
x_3034 = lean_ctor_get(x_3033, 0);
lean_inc(x_3034);
x_3035 = lean_ctor_get(x_3033, 1);
lean_inc(x_3035);
lean_dec(x_3033);
x_3036 = lean_unbox(x_3034);
lean_dec(x_3034);
x_3011 = x_3036;
x_3012 = x_3035;
goto block_3025;
}
block_3008:
{
lean_object* x_2673; lean_object* x_2674; lean_object* x_2675; lean_object* x_2676; lean_object* x_2677; lean_object* x_2678; lean_object* x_2679; lean_object* x_2680; uint8_t x_2681; 
lean_inc(x_1);
x_2673 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_2672);
x_2674 = lean_ctor_get(x_2673, 0);
lean_inc(x_2674);
x_2675 = lean_ctor_get(x_2673, 1);
lean_inc(x_2675);
lean_dec(x_2673);
x_2676 = l_Lean_Level_normalize(x_2674);
lean_dec(x_2674);
lean_inc(x_2);
x_2677 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_2675);
x_2678 = lean_ctor_get(x_2677, 0);
lean_inc(x_2678);
x_2679 = lean_ctor_get(x_2677, 1);
lean_inc(x_2679);
lean_dec(x_2677);
x_2680 = l_Lean_Level_normalize(x_2678);
lean_dec(x_2678);
x_2681 = lean_level_eq(x_1, x_2676);
if (x_2681 == 0)
{
lean_dec(x_2671);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_2676;
x_2 = x_2680;
x_7 = x_2679;
goto _start;
}
else
{
uint8_t x_2683; 
x_2683 = lean_level_eq(x_2, x_2680);
if (x_2683 == 0)
{
lean_dec(x_2671);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_2676;
x_2 = x_2680;
x_7 = x_2679;
goto _start;
}
else
{
lean_object* x_2685; 
lean_dec(x_2680);
lean_dec(x_2676);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_2685 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_2679);
if (lean_obj_tag(x_2685) == 0)
{
uint8_t x_2686; 
x_2686 = !lean_is_exclusive(x_2685);
if (x_2686 == 0)
{
lean_object* x_2687; lean_object* x_2688; uint8_t x_2689; uint8_t x_2690; uint8_t x_2691; 
x_2687 = lean_ctor_get(x_2685, 0);
x_2688 = lean_ctor_get(x_2685, 1);
x_2689 = 2;
x_2690 = lean_unbox(x_2687);
x_2691 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2690, x_2689);
if (x_2691 == 0)
{
uint8_t x_2692; uint8_t x_2693; uint8_t x_2694; lean_object* x_2695; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2692 = 1;
x_2693 = lean_unbox(x_2687);
lean_dec(x_2687);
x_2694 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2693, x_2692);
x_2695 = lean_box(x_2694);
lean_ctor_set(x_2685, 0, x_2695);
return x_2685;
}
else
{
lean_object* x_2696; 
lean_free_object(x_2685);
lean_dec(x_2687);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_2696 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_2688);
if (lean_obj_tag(x_2696) == 0)
{
uint8_t x_2697; 
x_2697 = !lean_is_exclusive(x_2696);
if (x_2697 == 0)
{
lean_object* x_2698; lean_object* x_2699; uint8_t x_2700; uint8_t x_2701; 
x_2698 = lean_ctor_get(x_2696, 0);
x_2699 = lean_ctor_get(x_2696, 1);
x_2700 = lean_unbox(x_2698);
x_2701 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2700, x_2689);
if (x_2701 == 0)
{
uint8_t x_2702; uint8_t x_2703; uint8_t x_2704; lean_object* x_2705; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2702 = 1;
x_2703 = lean_unbox(x_2698);
lean_dec(x_2698);
x_2704 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2703, x_2702);
x_2705 = lean_box(x_2704);
lean_ctor_set(x_2696, 0, x_2705);
return x_2696;
}
else
{
lean_object* x_2706; lean_object* x_2707; lean_object* x_2708; uint8_t x_2709; 
lean_free_object(x_2696);
lean_dec(x_2698);
x_2706 = lean_st_ref_get(x_6, x_2699);
x_2707 = lean_ctor_get(x_2706, 1);
lean_inc(x_2707);
lean_dec(x_2706);
x_2708 = lean_st_ref_get(x_4, x_2707);
x_2709 = !lean_is_exclusive(x_2708);
if (x_2709 == 0)
{
lean_object* x_2710; lean_object* x_2711; lean_object* x_2712; uint8_t x_2713; 
x_2710 = lean_ctor_get(x_2708, 0);
x_2711 = lean_ctor_get(x_2708, 1);
x_2712 = lean_ctor_get(x_2710, 0);
lean_inc(x_2712);
lean_dec(x_2710);
lean_inc(x_2712);
x_2713 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2712, x_1);
if (x_2713 == 0)
{
uint8_t x_2714; 
x_2714 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2712, x_2);
if (x_2714 == 0)
{
lean_object* x_2715; lean_object* x_2747; uint8_t x_2748; 
x_2747 = lean_ctor_get(x_3, 0);
lean_inc(x_2747);
x_2748 = lean_ctor_get_uint8(x_2747, 4);
lean_dec(x_2747);
if (x_2748 == 0)
{
uint8_t x_2749; lean_object* x_2750; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2749 = 0;
x_2750 = lean_box(x_2749);
lean_ctor_set(x_2708, 0, x_2750);
return x_2708;
}
else
{
uint8_t x_2751; 
x_2751 = l_Lean_Level_isMVar(x_1);
if (x_2751 == 0)
{
uint8_t x_2752; 
x_2752 = l_Lean_Level_isMVar(x_2);
if (x_2752 == 0)
{
uint8_t x_2753; lean_object* x_2754; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2753 = 0;
x_2754 = lean_box(x_2753);
lean_ctor_set(x_2708, 0, x_2754);
return x_2708;
}
else
{
lean_object* x_2755; 
lean_free_object(x_2708);
x_2755 = lean_box(0);
x_2715 = x_2755;
goto block_2746;
}
}
else
{
lean_object* x_2756; 
lean_free_object(x_2708);
x_2756 = lean_box(0);
x_2715 = x_2756;
goto block_2746;
}
}
block_2746:
{
lean_object* x_2716; lean_object* x_2717; uint8_t x_2718; lean_object* x_2719; lean_object* x_2735; lean_object* x_2736; lean_object* x_2737; uint8_t x_2738; 
lean_dec(x_2715);
x_2716 = lean_mk_string("stuck");
x_2717 = lean_name_mk_string(x_2671, x_2716);
x_2735 = lean_st_ref_get(x_6, x_2711);
x_2736 = lean_ctor_get(x_2735, 0);
lean_inc(x_2736);
x_2737 = lean_ctor_get(x_2736, 3);
lean_inc(x_2737);
lean_dec(x_2736);
x_2738 = lean_ctor_get_uint8(x_2737, sizeof(void*)*1);
lean_dec(x_2737);
if (x_2738 == 0)
{
lean_object* x_2739; uint8_t x_2740; 
x_2739 = lean_ctor_get(x_2735, 1);
lean_inc(x_2739);
lean_dec(x_2735);
x_2740 = 0;
x_2718 = x_2740;
x_2719 = x_2739;
goto block_2734;
}
else
{
lean_object* x_2741; lean_object* x_2742; lean_object* x_2743; lean_object* x_2744; uint8_t x_2745; 
x_2741 = lean_ctor_get(x_2735, 1);
lean_inc(x_2741);
lean_dec(x_2735);
lean_inc(x_2717);
x_2742 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2717, x_3, x_4, x_5, x_6, x_2741);
x_2743 = lean_ctor_get(x_2742, 0);
lean_inc(x_2743);
x_2744 = lean_ctor_get(x_2742, 1);
lean_inc(x_2744);
lean_dec(x_2742);
x_2745 = lean_unbox(x_2743);
lean_dec(x_2743);
x_2718 = x_2745;
x_2719 = x_2744;
goto block_2734;
}
block_2734:
{
if (x_2718 == 0)
{
lean_object* x_2720; 
lean_dec(x_2717);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2720 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2719);
return x_2720;
}
else
{
lean_object* x_2721; lean_object* x_2722; lean_object* x_2723; lean_object* x_2724; lean_object* x_2725; lean_object* x_2726; lean_object* x_2727; lean_object* x_2728; lean_object* x_2729; lean_object* x_2730; lean_object* x_2731; lean_object* x_2732; lean_object* x_2733; 
x_2721 = lean_mk_string("");
x_2722 = l_Lean_stringToMessageData(x_2721);
lean_dec(x_2721);
x_2723 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2723, 0, x_1);
lean_inc(x_2722);
x_2724 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2724, 0, x_2722);
lean_ctor_set(x_2724, 1, x_2723);
x_2725 = lean_mk_string(" =?= ");
x_2726 = l_Lean_stringToMessageData(x_2725);
lean_dec(x_2725);
x_2727 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2727, 0, x_2724);
lean_ctor_set(x_2727, 1, x_2726);
x_2728 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2728, 0, x_2);
x_2729 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2729, 0, x_2727);
lean_ctor_set(x_2729, 1, x_2728);
x_2730 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2730, 0, x_2729);
lean_ctor_set(x_2730, 1, x_2722);
x_2731 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2717, x_2730, x_3, x_4, x_5, x_6, x_2719);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2732 = lean_ctor_get(x_2731, 1);
lean_inc(x_2732);
lean_dec(x_2731);
x_2733 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2732);
return x_2733;
}
}
}
}
else
{
lean_object* x_2757; uint8_t x_2758; 
lean_free_object(x_2708);
lean_dec(x_2671);
x_2757 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2711);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2758 = !lean_is_exclusive(x_2757);
if (x_2758 == 0)
{
lean_object* x_2759; uint8_t x_2760; lean_object* x_2761; 
x_2759 = lean_ctor_get(x_2757, 0);
lean_dec(x_2759);
x_2760 = 1;
x_2761 = lean_box(x_2760);
lean_ctor_set(x_2757, 0, x_2761);
return x_2757;
}
else
{
lean_object* x_2762; uint8_t x_2763; lean_object* x_2764; lean_object* x_2765; 
x_2762 = lean_ctor_get(x_2757, 1);
lean_inc(x_2762);
lean_dec(x_2757);
x_2763 = 1;
x_2764 = lean_box(x_2763);
x_2765 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2765, 0, x_2764);
lean_ctor_set(x_2765, 1, x_2762);
return x_2765;
}
}
}
else
{
lean_object* x_2766; uint8_t x_2767; 
lean_dec(x_2712);
lean_free_object(x_2708);
lean_dec(x_2671);
x_2766 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2711);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2767 = !lean_is_exclusive(x_2766);
if (x_2767 == 0)
{
lean_object* x_2768; uint8_t x_2769; lean_object* x_2770; 
x_2768 = lean_ctor_get(x_2766, 0);
lean_dec(x_2768);
x_2769 = 1;
x_2770 = lean_box(x_2769);
lean_ctor_set(x_2766, 0, x_2770);
return x_2766;
}
else
{
lean_object* x_2771; uint8_t x_2772; lean_object* x_2773; lean_object* x_2774; 
x_2771 = lean_ctor_get(x_2766, 1);
lean_inc(x_2771);
lean_dec(x_2766);
x_2772 = 1;
x_2773 = lean_box(x_2772);
x_2774 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2774, 0, x_2773);
lean_ctor_set(x_2774, 1, x_2771);
return x_2774;
}
}
}
else
{
lean_object* x_2775; lean_object* x_2776; lean_object* x_2777; uint8_t x_2778; 
x_2775 = lean_ctor_get(x_2708, 0);
x_2776 = lean_ctor_get(x_2708, 1);
lean_inc(x_2776);
lean_inc(x_2775);
lean_dec(x_2708);
x_2777 = lean_ctor_get(x_2775, 0);
lean_inc(x_2777);
lean_dec(x_2775);
lean_inc(x_2777);
x_2778 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2777, x_1);
if (x_2778 == 0)
{
uint8_t x_2779; 
x_2779 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2777, x_2);
if (x_2779 == 0)
{
lean_object* x_2780; lean_object* x_2812; uint8_t x_2813; 
x_2812 = lean_ctor_get(x_3, 0);
lean_inc(x_2812);
x_2813 = lean_ctor_get_uint8(x_2812, 4);
lean_dec(x_2812);
if (x_2813 == 0)
{
uint8_t x_2814; lean_object* x_2815; lean_object* x_2816; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2814 = 0;
x_2815 = lean_box(x_2814);
x_2816 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2816, 0, x_2815);
lean_ctor_set(x_2816, 1, x_2776);
return x_2816;
}
else
{
uint8_t x_2817; 
x_2817 = l_Lean_Level_isMVar(x_1);
if (x_2817 == 0)
{
uint8_t x_2818; 
x_2818 = l_Lean_Level_isMVar(x_2);
if (x_2818 == 0)
{
uint8_t x_2819; lean_object* x_2820; lean_object* x_2821; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2819 = 0;
x_2820 = lean_box(x_2819);
x_2821 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2821, 0, x_2820);
lean_ctor_set(x_2821, 1, x_2776);
return x_2821;
}
else
{
lean_object* x_2822; 
x_2822 = lean_box(0);
x_2780 = x_2822;
goto block_2811;
}
}
else
{
lean_object* x_2823; 
x_2823 = lean_box(0);
x_2780 = x_2823;
goto block_2811;
}
}
block_2811:
{
lean_object* x_2781; lean_object* x_2782; uint8_t x_2783; lean_object* x_2784; lean_object* x_2800; lean_object* x_2801; lean_object* x_2802; uint8_t x_2803; 
lean_dec(x_2780);
x_2781 = lean_mk_string("stuck");
x_2782 = lean_name_mk_string(x_2671, x_2781);
x_2800 = lean_st_ref_get(x_6, x_2776);
x_2801 = lean_ctor_get(x_2800, 0);
lean_inc(x_2801);
x_2802 = lean_ctor_get(x_2801, 3);
lean_inc(x_2802);
lean_dec(x_2801);
x_2803 = lean_ctor_get_uint8(x_2802, sizeof(void*)*1);
lean_dec(x_2802);
if (x_2803 == 0)
{
lean_object* x_2804; uint8_t x_2805; 
x_2804 = lean_ctor_get(x_2800, 1);
lean_inc(x_2804);
lean_dec(x_2800);
x_2805 = 0;
x_2783 = x_2805;
x_2784 = x_2804;
goto block_2799;
}
else
{
lean_object* x_2806; lean_object* x_2807; lean_object* x_2808; lean_object* x_2809; uint8_t x_2810; 
x_2806 = lean_ctor_get(x_2800, 1);
lean_inc(x_2806);
lean_dec(x_2800);
lean_inc(x_2782);
x_2807 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2782, x_3, x_4, x_5, x_6, x_2806);
x_2808 = lean_ctor_get(x_2807, 0);
lean_inc(x_2808);
x_2809 = lean_ctor_get(x_2807, 1);
lean_inc(x_2809);
lean_dec(x_2807);
x_2810 = lean_unbox(x_2808);
lean_dec(x_2808);
x_2783 = x_2810;
x_2784 = x_2809;
goto block_2799;
}
block_2799:
{
if (x_2783 == 0)
{
lean_object* x_2785; 
lean_dec(x_2782);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2785 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2784);
return x_2785;
}
else
{
lean_object* x_2786; lean_object* x_2787; lean_object* x_2788; lean_object* x_2789; lean_object* x_2790; lean_object* x_2791; lean_object* x_2792; lean_object* x_2793; lean_object* x_2794; lean_object* x_2795; lean_object* x_2796; lean_object* x_2797; lean_object* x_2798; 
x_2786 = lean_mk_string("");
x_2787 = l_Lean_stringToMessageData(x_2786);
lean_dec(x_2786);
x_2788 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2788, 0, x_1);
lean_inc(x_2787);
x_2789 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2789, 0, x_2787);
lean_ctor_set(x_2789, 1, x_2788);
x_2790 = lean_mk_string(" =?= ");
x_2791 = l_Lean_stringToMessageData(x_2790);
lean_dec(x_2790);
x_2792 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2792, 0, x_2789);
lean_ctor_set(x_2792, 1, x_2791);
x_2793 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2793, 0, x_2);
x_2794 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2794, 0, x_2792);
lean_ctor_set(x_2794, 1, x_2793);
x_2795 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2795, 0, x_2794);
lean_ctor_set(x_2795, 1, x_2787);
x_2796 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2782, x_2795, x_3, x_4, x_5, x_6, x_2784);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2797 = lean_ctor_get(x_2796, 1);
lean_inc(x_2797);
lean_dec(x_2796);
x_2798 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2797);
return x_2798;
}
}
}
}
else
{
lean_object* x_2824; lean_object* x_2825; lean_object* x_2826; uint8_t x_2827; lean_object* x_2828; lean_object* x_2829; 
lean_dec(x_2671);
x_2824 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2825 = lean_ctor_get(x_2824, 1);
lean_inc(x_2825);
if (lean_is_exclusive(x_2824)) {
 lean_ctor_release(x_2824, 0);
 lean_ctor_release(x_2824, 1);
 x_2826 = x_2824;
} else {
 lean_dec_ref(x_2824);
 x_2826 = lean_box(0);
}
x_2827 = 1;
x_2828 = lean_box(x_2827);
if (lean_is_scalar(x_2826)) {
 x_2829 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2829 = x_2826;
}
lean_ctor_set(x_2829, 0, x_2828);
lean_ctor_set(x_2829, 1, x_2825);
return x_2829;
}
}
else
{
lean_object* x_2830; lean_object* x_2831; lean_object* x_2832; uint8_t x_2833; lean_object* x_2834; lean_object* x_2835; 
lean_dec(x_2777);
lean_dec(x_2671);
x_2830 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2776);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2831 = lean_ctor_get(x_2830, 1);
lean_inc(x_2831);
if (lean_is_exclusive(x_2830)) {
 lean_ctor_release(x_2830, 0);
 lean_ctor_release(x_2830, 1);
 x_2832 = x_2830;
} else {
 lean_dec_ref(x_2830);
 x_2832 = lean_box(0);
}
x_2833 = 1;
x_2834 = lean_box(x_2833);
if (lean_is_scalar(x_2832)) {
 x_2835 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2835 = x_2832;
}
lean_ctor_set(x_2835, 0, x_2834);
lean_ctor_set(x_2835, 1, x_2831);
return x_2835;
}
}
}
}
else
{
lean_object* x_2836; lean_object* x_2837; uint8_t x_2838; uint8_t x_2839; 
x_2836 = lean_ctor_get(x_2696, 0);
x_2837 = lean_ctor_get(x_2696, 1);
lean_inc(x_2837);
lean_inc(x_2836);
lean_dec(x_2696);
x_2838 = lean_unbox(x_2836);
x_2839 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2838, x_2689);
if (x_2839 == 0)
{
uint8_t x_2840; uint8_t x_2841; uint8_t x_2842; lean_object* x_2843; lean_object* x_2844; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2840 = 1;
x_2841 = lean_unbox(x_2836);
lean_dec(x_2836);
x_2842 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2841, x_2840);
x_2843 = lean_box(x_2842);
x_2844 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2844, 0, x_2843);
lean_ctor_set(x_2844, 1, x_2837);
return x_2844;
}
else
{
lean_object* x_2845; lean_object* x_2846; lean_object* x_2847; lean_object* x_2848; lean_object* x_2849; lean_object* x_2850; lean_object* x_2851; uint8_t x_2852; 
lean_dec(x_2836);
x_2845 = lean_st_ref_get(x_6, x_2837);
x_2846 = lean_ctor_get(x_2845, 1);
lean_inc(x_2846);
lean_dec(x_2845);
x_2847 = lean_st_ref_get(x_4, x_2846);
x_2848 = lean_ctor_get(x_2847, 0);
lean_inc(x_2848);
x_2849 = lean_ctor_get(x_2847, 1);
lean_inc(x_2849);
if (lean_is_exclusive(x_2847)) {
 lean_ctor_release(x_2847, 0);
 lean_ctor_release(x_2847, 1);
 x_2850 = x_2847;
} else {
 lean_dec_ref(x_2847);
 x_2850 = lean_box(0);
}
x_2851 = lean_ctor_get(x_2848, 0);
lean_inc(x_2851);
lean_dec(x_2848);
lean_inc(x_2851);
x_2852 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2851, x_1);
if (x_2852 == 0)
{
uint8_t x_2853; 
x_2853 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2851, x_2);
if (x_2853 == 0)
{
lean_object* x_2854; lean_object* x_2886; uint8_t x_2887; 
x_2886 = lean_ctor_get(x_3, 0);
lean_inc(x_2886);
x_2887 = lean_ctor_get_uint8(x_2886, 4);
lean_dec(x_2886);
if (x_2887 == 0)
{
uint8_t x_2888; lean_object* x_2889; lean_object* x_2890; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2888 = 0;
x_2889 = lean_box(x_2888);
if (lean_is_scalar(x_2850)) {
 x_2890 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2890 = x_2850;
}
lean_ctor_set(x_2890, 0, x_2889);
lean_ctor_set(x_2890, 1, x_2849);
return x_2890;
}
else
{
uint8_t x_2891; 
x_2891 = l_Lean_Level_isMVar(x_1);
if (x_2891 == 0)
{
uint8_t x_2892; 
x_2892 = l_Lean_Level_isMVar(x_2);
if (x_2892 == 0)
{
uint8_t x_2893; lean_object* x_2894; lean_object* x_2895; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2893 = 0;
x_2894 = lean_box(x_2893);
if (lean_is_scalar(x_2850)) {
 x_2895 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2895 = x_2850;
}
lean_ctor_set(x_2895, 0, x_2894);
lean_ctor_set(x_2895, 1, x_2849);
return x_2895;
}
else
{
lean_object* x_2896; 
lean_dec(x_2850);
x_2896 = lean_box(0);
x_2854 = x_2896;
goto block_2885;
}
}
else
{
lean_object* x_2897; 
lean_dec(x_2850);
x_2897 = lean_box(0);
x_2854 = x_2897;
goto block_2885;
}
}
block_2885:
{
lean_object* x_2855; lean_object* x_2856; uint8_t x_2857; lean_object* x_2858; lean_object* x_2874; lean_object* x_2875; lean_object* x_2876; uint8_t x_2877; 
lean_dec(x_2854);
x_2855 = lean_mk_string("stuck");
x_2856 = lean_name_mk_string(x_2671, x_2855);
x_2874 = lean_st_ref_get(x_6, x_2849);
x_2875 = lean_ctor_get(x_2874, 0);
lean_inc(x_2875);
x_2876 = lean_ctor_get(x_2875, 3);
lean_inc(x_2876);
lean_dec(x_2875);
x_2877 = lean_ctor_get_uint8(x_2876, sizeof(void*)*1);
lean_dec(x_2876);
if (x_2877 == 0)
{
lean_object* x_2878; uint8_t x_2879; 
x_2878 = lean_ctor_get(x_2874, 1);
lean_inc(x_2878);
lean_dec(x_2874);
x_2879 = 0;
x_2857 = x_2879;
x_2858 = x_2878;
goto block_2873;
}
else
{
lean_object* x_2880; lean_object* x_2881; lean_object* x_2882; lean_object* x_2883; uint8_t x_2884; 
x_2880 = lean_ctor_get(x_2874, 1);
lean_inc(x_2880);
lean_dec(x_2874);
lean_inc(x_2856);
x_2881 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2856, x_3, x_4, x_5, x_6, x_2880);
x_2882 = lean_ctor_get(x_2881, 0);
lean_inc(x_2882);
x_2883 = lean_ctor_get(x_2881, 1);
lean_inc(x_2883);
lean_dec(x_2881);
x_2884 = lean_unbox(x_2882);
lean_dec(x_2882);
x_2857 = x_2884;
x_2858 = x_2883;
goto block_2873;
}
block_2873:
{
if (x_2857 == 0)
{
lean_object* x_2859; 
lean_dec(x_2856);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2859 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2858);
return x_2859;
}
else
{
lean_object* x_2860; lean_object* x_2861; lean_object* x_2862; lean_object* x_2863; lean_object* x_2864; lean_object* x_2865; lean_object* x_2866; lean_object* x_2867; lean_object* x_2868; lean_object* x_2869; lean_object* x_2870; lean_object* x_2871; lean_object* x_2872; 
x_2860 = lean_mk_string("");
x_2861 = l_Lean_stringToMessageData(x_2860);
lean_dec(x_2860);
x_2862 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2862, 0, x_1);
lean_inc(x_2861);
x_2863 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2863, 0, x_2861);
lean_ctor_set(x_2863, 1, x_2862);
x_2864 = lean_mk_string(" =?= ");
x_2865 = l_Lean_stringToMessageData(x_2864);
lean_dec(x_2864);
x_2866 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2866, 0, x_2863);
lean_ctor_set(x_2866, 1, x_2865);
x_2867 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2867, 0, x_2);
x_2868 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2868, 0, x_2866);
lean_ctor_set(x_2868, 1, x_2867);
x_2869 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2869, 0, x_2868);
lean_ctor_set(x_2869, 1, x_2861);
x_2870 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2856, x_2869, x_3, x_4, x_5, x_6, x_2858);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2871 = lean_ctor_get(x_2870, 1);
lean_inc(x_2871);
lean_dec(x_2870);
x_2872 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2871);
return x_2872;
}
}
}
}
else
{
lean_object* x_2898; lean_object* x_2899; lean_object* x_2900; uint8_t x_2901; lean_object* x_2902; lean_object* x_2903; 
lean_dec(x_2850);
lean_dec(x_2671);
x_2898 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2849);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2899 = lean_ctor_get(x_2898, 1);
lean_inc(x_2899);
if (lean_is_exclusive(x_2898)) {
 lean_ctor_release(x_2898, 0);
 lean_ctor_release(x_2898, 1);
 x_2900 = x_2898;
} else {
 lean_dec_ref(x_2898);
 x_2900 = lean_box(0);
}
x_2901 = 1;
x_2902 = lean_box(x_2901);
if (lean_is_scalar(x_2900)) {
 x_2903 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2903 = x_2900;
}
lean_ctor_set(x_2903, 0, x_2902);
lean_ctor_set(x_2903, 1, x_2899);
return x_2903;
}
}
else
{
lean_object* x_2904; lean_object* x_2905; lean_object* x_2906; uint8_t x_2907; lean_object* x_2908; lean_object* x_2909; 
lean_dec(x_2851);
lean_dec(x_2850);
lean_dec(x_2671);
x_2904 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2849);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2905 = lean_ctor_get(x_2904, 1);
lean_inc(x_2905);
if (lean_is_exclusive(x_2904)) {
 lean_ctor_release(x_2904, 0);
 lean_ctor_release(x_2904, 1);
 x_2906 = x_2904;
} else {
 lean_dec_ref(x_2904);
 x_2906 = lean_box(0);
}
x_2907 = 1;
x_2908 = lean_box(x_2907);
if (lean_is_scalar(x_2906)) {
 x_2909 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2909 = x_2906;
}
lean_ctor_set(x_2909, 0, x_2908);
lean_ctor_set(x_2909, 1, x_2905);
return x_2909;
}
}
}
}
else
{
uint8_t x_2910; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2910 = !lean_is_exclusive(x_2696);
if (x_2910 == 0)
{
return x_2696;
}
else
{
lean_object* x_2911; lean_object* x_2912; lean_object* x_2913; 
x_2911 = lean_ctor_get(x_2696, 0);
x_2912 = lean_ctor_get(x_2696, 1);
lean_inc(x_2912);
lean_inc(x_2911);
lean_dec(x_2696);
x_2913 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2913, 0, x_2911);
lean_ctor_set(x_2913, 1, x_2912);
return x_2913;
}
}
}
}
else
{
lean_object* x_2914; lean_object* x_2915; uint8_t x_2916; uint8_t x_2917; uint8_t x_2918; 
x_2914 = lean_ctor_get(x_2685, 0);
x_2915 = lean_ctor_get(x_2685, 1);
lean_inc(x_2915);
lean_inc(x_2914);
lean_dec(x_2685);
x_2916 = 2;
x_2917 = lean_unbox(x_2914);
x_2918 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2917, x_2916);
if (x_2918 == 0)
{
uint8_t x_2919; uint8_t x_2920; uint8_t x_2921; lean_object* x_2922; lean_object* x_2923; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2919 = 1;
x_2920 = lean_unbox(x_2914);
lean_dec(x_2914);
x_2921 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2920, x_2919);
x_2922 = lean_box(x_2921);
x_2923 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2923, 0, x_2922);
lean_ctor_set(x_2923, 1, x_2915);
return x_2923;
}
else
{
lean_object* x_2924; 
lean_dec(x_2914);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_2924 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_2915);
if (lean_obj_tag(x_2924) == 0)
{
lean_object* x_2925; lean_object* x_2926; lean_object* x_2927; uint8_t x_2928; uint8_t x_2929; 
x_2925 = lean_ctor_get(x_2924, 0);
lean_inc(x_2925);
x_2926 = lean_ctor_get(x_2924, 1);
lean_inc(x_2926);
if (lean_is_exclusive(x_2924)) {
 lean_ctor_release(x_2924, 0);
 lean_ctor_release(x_2924, 1);
 x_2927 = x_2924;
} else {
 lean_dec_ref(x_2924);
 x_2927 = lean_box(0);
}
x_2928 = lean_unbox(x_2925);
x_2929 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2928, x_2916);
if (x_2929 == 0)
{
uint8_t x_2930; uint8_t x_2931; uint8_t x_2932; lean_object* x_2933; lean_object* x_2934; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2930 = 1;
x_2931 = lean_unbox(x_2925);
lean_dec(x_2925);
x_2932 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_2931, x_2930);
x_2933 = lean_box(x_2932);
if (lean_is_scalar(x_2927)) {
 x_2934 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2934 = x_2927;
}
lean_ctor_set(x_2934, 0, x_2933);
lean_ctor_set(x_2934, 1, x_2926);
return x_2934;
}
else
{
lean_object* x_2935; lean_object* x_2936; lean_object* x_2937; lean_object* x_2938; lean_object* x_2939; lean_object* x_2940; lean_object* x_2941; uint8_t x_2942; 
lean_dec(x_2927);
lean_dec(x_2925);
x_2935 = lean_st_ref_get(x_6, x_2926);
x_2936 = lean_ctor_get(x_2935, 1);
lean_inc(x_2936);
lean_dec(x_2935);
x_2937 = lean_st_ref_get(x_4, x_2936);
x_2938 = lean_ctor_get(x_2937, 0);
lean_inc(x_2938);
x_2939 = lean_ctor_get(x_2937, 1);
lean_inc(x_2939);
if (lean_is_exclusive(x_2937)) {
 lean_ctor_release(x_2937, 0);
 lean_ctor_release(x_2937, 1);
 x_2940 = x_2937;
} else {
 lean_dec_ref(x_2937);
 x_2940 = lean_box(0);
}
x_2941 = lean_ctor_get(x_2938, 0);
lean_inc(x_2941);
lean_dec(x_2938);
lean_inc(x_2941);
x_2942 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2941, x_1);
if (x_2942 == 0)
{
uint8_t x_2943; 
x_2943 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_2941, x_2);
if (x_2943 == 0)
{
lean_object* x_2944; lean_object* x_2976; uint8_t x_2977; 
x_2976 = lean_ctor_get(x_3, 0);
lean_inc(x_2976);
x_2977 = lean_ctor_get_uint8(x_2976, 4);
lean_dec(x_2976);
if (x_2977 == 0)
{
uint8_t x_2978; lean_object* x_2979; lean_object* x_2980; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2978 = 0;
x_2979 = lean_box(x_2978);
if (lean_is_scalar(x_2940)) {
 x_2980 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2980 = x_2940;
}
lean_ctor_set(x_2980, 0, x_2979);
lean_ctor_set(x_2980, 1, x_2939);
return x_2980;
}
else
{
uint8_t x_2981; 
x_2981 = l_Lean_Level_isMVar(x_1);
if (x_2981 == 0)
{
uint8_t x_2982; 
x_2982 = l_Lean_Level_isMVar(x_2);
if (x_2982 == 0)
{
uint8_t x_2983; lean_object* x_2984; lean_object* x_2985; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2983 = 0;
x_2984 = lean_box(x_2983);
if (lean_is_scalar(x_2940)) {
 x_2985 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2985 = x_2940;
}
lean_ctor_set(x_2985, 0, x_2984);
lean_ctor_set(x_2985, 1, x_2939);
return x_2985;
}
else
{
lean_object* x_2986; 
lean_dec(x_2940);
x_2986 = lean_box(0);
x_2944 = x_2986;
goto block_2975;
}
}
else
{
lean_object* x_2987; 
lean_dec(x_2940);
x_2987 = lean_box(0);
x_2944 = x_2987;
goto block_2975;
}
}
block_2975:
{
lean_object* x_2945; lean_object* x_2946; uint8_t x_2947; lean_object* x_2948; lean_object* x_2964; lean_object* x_2965; lean_object* x_2966; uint8_t x_2967; 
lean_dec(x_2944);
x_2945 = lean_mk_string("stuck");
x_2946 = lean_name_mk_string(x_2671, x_2945);
x_2964 = lean_st_ref_get(x_6, x_2939);
x_2965 = lean_ctor_get(x_2964, 0);
lean_inc(x_2965);
x_2966 = lean_ctor_get(x_2965, 3);
lean_inc(x_2966);
lean_dec(x_2965);
x_2967 = lean_ctor_get_uint8(x_2966, sizeof(void*)*1);
lean_dec(x_2966);
if (x_2967 == 0)
{
lean_object* x_2968; uint8_t x_2969; 
x_2968 = lean_ctor_get(x_2964, 1);
lean_inc(x_2968);
lean_dec(x_2964);
x_2969 = 0;
x_2947 = x_2969;
x_2948 = x_2968;
goto block_2963;
}
else
{
lean_object* x_2970; lean_object* x_2971; lean_object* x_2972; lean_object* x_2973; uint8_t x_2974; 
x_2970 = lean_ctor_get(x_2964, 1);
lean_inc(x_2970);
lean_dec(x_2964);
lean_inc(x_2946);
x_2971 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_2946, x_3, x_4, x_5, x_6, x_2970);
x_2972 = lean_ctor_get(x_2971, 0);
lean_inc(x_2972);
x_2973 = lean_ctor_get(x_2971, 1);
lean_inc(x_2973);
lean_dec(x_2971);
x_2974 = lean_unbox(x_2972);
lean_dec(x_2972);
x_2947 = x_2974;
x_2948 = x_2973;
goto block_2963;
}
block_2963:
{
if (x_2947 == 0)
{
lean_object* x_2949; 
lean_dec(x_2946);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_2949 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2948);
return x_2949;
}
else
{
lean_object* x_2950; lean_object* x_2951; lean_object* x_2952; lean_object* x_2953; lean_object* x_2954; lean_object* x_2955; lean_object* x_2956; lean_object* x_2957; lean_object* x_2958; lean_object* x_2959; lean_object* x_2960; lean_object* x_2961; lean_object* x_2962; 
x_2950 = lean_mk_string("");
x_2951 = l_Lean_stringToMessageData(x_2950);
lean_dec(x_2950);
x_2952 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2952, 0, x_1);
lean_inc(x_2951);
x_2953 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2953, 0, x_2951);
lean_ctor_set(x_2953, 1, x_2952);
x_2954 = lean_mk_string(" =?= ");
x_2955 = l_Lean_stringToMessageData(x_2954);
lean_dec(x_2954);
x_2956 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2956, 0, x_2953);
lean_ctor_set(x_2956, 1, x_2955);
x_2957 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2957, 0, x_2);
x_2958 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2958, 0, x_2956);
lean_ctor_set(x_2958, 1, x_2957);
x_2959 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2959, 0, x_2958);
lean_ctor_set(x_2959, 1, x_2951);
x_2960 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_2946, x_2959, x_3, x_4, x_5, x_6, x_2948);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2961 = lean_ctor_get(x_2960, 1);
lean_inc(x_2961);
lean_dec(x_2960);
x_2962 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_2961);
return x_2962;
}
}
}
}
else
{
lean_object* x_2988; lean_object* x_2989; lean_object* x_2990; uint8_t x_2991; lean_object* x_2992; lean_object* x_2993; 
lean_dec(x_2940);
lean_dec(x_2671);
x_2988 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2939);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2989 = lean_ctor_get(x_2988, 1);
lean_inc(x_2989);
if (lean_is_exclusive(x_2988)) {
 lean_ctor_release(x_2988, 0);
 lean_ctor_release(x_2988, 1);
 x_2990 = x_2988;
} else {
 lean_dec_ref(x_2988);
 x_2990 = lean_box(0);
}
x_2991 = 1;
x_2992 = lean_box(x_2991);
if (lean_is_scalar(x_2990)) {
 x_2993 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2993 = x_2990;
}
lean_ctor_set(x_2993, 0, x_2992);
lean_ctor_set(x_2993, 1, x_2989);
return x_2993;
}
}
else
{
lean_object* x_2994; lean_object* x_2995; lean_object* x_2996; uint8_t x_2997; lean_object* x_2998; lean_object* x_2999; 
lean_dec(x_2941);
lean_dec(x_2940);
lean_dec(x_2671);
x_2994 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_2939);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_2995 = lean_ctor_get(x_2994, 1);
lean_inc(x_2995);
if (lean_is_exclusive(x_2994)) {
 lean_ctor_release(x_2994, 0);
 lean_ctor_release(x_2994, 1);
 x_2996 = x_2994;
} else {
 lean_dec_ref(x_2994);
 x_2996 = lean_box(0);
}
x_2997 = 1;
x_2998 = lean_box(x_2997);
if (lean_is_scalar(x_2996)) {
 x_2999 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2999 = x_2996;
}
lean_ctor_set(x_2999, 0, x_2998);
lean_ctor_set(x_2999, 1, x_2995);
return x_2999;
}
}
}
else
{
lean_object* x_3000; lean_object* x_3001; lean_object* x_3002; lean_object* x_3003; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3000 = lean_ctor_get(x_2924, 0);
lean_inc(x_3000);
x_3001 = lean_ctor_get(x_2924, 1);
lean_inc(x_3001);
if (lean_is_exclusive(x_2924)) {
 lean_ctor_release(x_2924, 0);
 lean_ctor_release(x_2924, 1);
 x_3002 = x_2924;
} else {
 lean_dec_ref(x_2924);
 x_3002 = lean_box(0);
}
if (lean_is_scalar(x_3002)) {
 x_3003 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3003 = x_3002;
}
lean_ctor_set(x_3003, 0, x_3000);
lean_ctor_set(x_3003, 1, x_3001);
return x_3003;
}
}
}
}
else
{
uint8_t x_3004; 
lean_dec(x_2671);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3004 = !lean_is_exclusive(x_2685);
if (x_3004 == 0)
{
return x_2685;
}
else
{
lean_object* x_3005; lean_object* x_3006; lean_object* x_3007; 
x_3005 = lean_ctor_get(x_2685, 0);
x_3006 = lean_ctor_get(x_2685, 1);
lean_inc(x_3006);
lean_inc(x_3005);
lean_dec(x_2685);
x_3007 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3007, 0, x_3005);
lean_ctor_set(x_3007, 1, x_3006);
return x_3007;
}
}
}
}
}
block_3025:
{
if (x_3011 == 0)
{
lean_dec(x_3010);
x_2672 = x_3012;
goto block_3008;
}
else
{
lean_object* x_3013; lean_object* x_3014; lean_object* x_3015; lean_object* x_3016; lean_object* x_3017; lean_object* x_3018; lean_object* x_3019; lean_object* x_3020; lean_object* x_3021; lean_object* x_3022; lean_object* x_3023; lean_object* x_3024; 
x_3013 = lean_mk_string("");
x_3014 = l_Lean_stringToMessageData(x_3013);
lean_dec(x_3013);
lean_inc(x_1);
x_3015 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3015, 0, x_1);
lean_inc(x_3014);
x_3016 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3016, 0, x_3014);
lean_ctor_set(x_3016, 1, x_3015);
x_3017 = lean_mk_string(" =?= ");
x_3018 = l_Lean_stringToMessageData(x_3017);
lean_dec(x_3017);
x_3019 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3019, 0, x_3016);
lean_ctor_set(x_3019, 1, x_3018);
lean_inc(x_2);
x_3020 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3020, 0, x_2);
x_3021 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3021, 0, x_3019);
lean_ctor_set(x_3021, 1, x_3020);
x_3022 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3022, 0, x_3021);
lean_ctor_set(x_3022, 1, x_3014);
x_3023 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3010, x_3022, x_3, x_4, x_5, x_6, x_3012);
x_3024 = lean_ctor_get(x_3023, 1);
lean_inc(x_3024);
lean_dec(x_3023);
x_2672 = x_3024;
goto block_3008;
}
}
}
else
{
lean_object* x_3037; lean_object* x_3038; lean_object* x_3039; uint8_t x_3040; lean_object* x_3041; lean_object* x_3042; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3037 = lean_unsigned_to_nat(0u);
x_3038 = l_Lean_Level_getOffsetAux(x_1, x_3037);
lean_dec(x_1);
x_3039 = l_Lean_Level_getOffsetAux(x_2, x_3037);
lean_dec(x_2);
x_3040 = lean_nat_dec_eq(x_3038, x_3039);
lean_dec(x_3039);
lean_dec(x_3038);
x_3041 = lean_box(x_3040);
x_3042 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3042, 0, x_3041);
lean_ctor_set(x_3042, 1, x_7);
return x_3042;
}
}
case 4:
{
lean_object* x_3043; lean_object* x_3044; uint8_t x_3045; 
x_3043 = l_Lean_Level_getLevelOffset(x_1);
x_3044 = l_Lean_Level_getLevelOffset(x_2);
x_3045 = lean_level_eq(x_3043, x_3044);
lean_dec(x_3044);
lean_dec(x_3043);
if (x_3045 == 0)
{
lean_object* x_3046; lean_object* x_3047; lean_object* x_3048; lean_object* x_3049; lean_object* x_3050; lean_object* x_3051; lean_object* x_3388; lean_object* x_3389; uint8_t x_3390; lean_object* x_3391; lean_object* x_3405; lean_object* x_3406; lean_object* x_3407; uint8_t x_3408; 
x_3046 = lean_box(0);
x_3047 = lean_mk_string("Meta");
x_3048 = lean_name_mk_string(x_3046, x_3047);
x_3049 = lean_mk_string("isLevelDefEq");
x_3050 = lean_name_mk_string(x_3048, x_3049);
x_3388 = lean_mk_string("step");
lean_inc(x_3050);
x_3389 = lean_name_mk_string(x_3050, x_3388);
x_3405 = lean_st_ref_get(x_6, x_7);
x_3406 = lean_ctor_get(x_3405, 0);
lean_inc(x_3406);
x_3407 = lean_ctor_get(x_3406, 3);
lean_inc(x_3407);
lean_dec(x_3406);
x_3408 = lean_ctor_get_uint8(x_3407, sizeof(void*)*1);
lean_dec(x_3407);
if (x_3408 == 0)
{
lean_object* x_3409; uint8_t x_3410; 
x_3409 = lean_ctor_get(x_3405, 1);
lean_inc(x_3409);
lean_dec(x_3405);
x_3410 = 0;
x_3390 = x_3410;
x_3391 = x_3409;
goto block_3404;
}
else
{
lean_object* x_3411; lean_object* x_3412; lean_object* x_3413; lean_object* x_3414; uint8_t x_3415; 
x_3411 = lean_ctor_get(x_3405, 1);
lean_inc(x_3411);
lean_dec(x_3405);
lean_inc(x_3389);
x_3412 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3389, x_3, x_4, x_5, x_6, x_3411);
x_3413 = lean_ctor_get(x_3412, 0);
lean_inc(x_3413);
x_3414 = lean_ctor_get(x_3412, 1);
lean_inc(x_3414);
lean_dec(x_3412);
x_3415 = lean_unbox(x_3413);
lean_dec(x_3413);
x_3390 = x_3415;
x_3391 = x_3414;
goto block_3404;
}
block_3387:
{
lean_object* x_3052; lean_object* x_3053; lean_object* x_3054; lean_object* x_3055; lean_object* x_3056; lean_object* x_3057; lean_object* x_3058; lean_object* x_3059; uint8_t x_3060; 
lean_inc(x_1);
x_3052 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_3051);
x_3053 = lean_ctor_get(x_3052, 0);
lean_inc(x_3053);
x_3054 = lean_ctor_get(x_3052, 1);
lean_inc(x_3054);
lean_dec(x_3052);
x_3055 = l_Lean_Level_normalize(x_3053);
lean_dec(x_3053);
lean_inc(x_2);
x_3056 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_3054);
x_3057 = lean_ctor_get(x_3056, 0);
lean_inc(x_3057);
x_3058 = lean_ctor_get(x_3056, 1);
lean_inc(x_3058);
lean_dec(x_3056);
x_3059 = l_Lean_Level_normalize(x_3057);
lean_dec(x_3057);
x_3060 = lean_level_eq(x_1, x_3055);
if (x_3060 == 0)
{
lean_dec(x_3050);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_3055;
x_2 = x_3059;
x_7 = x_3058;
goto _start;
}
else
{
uint8_t x_3062; 
x_3062 = lean_level_eq(x_2, x_3059);
if (x_3062 == 0)
{
lean_dec(x_3050);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_3055;
x_2 = x_3059;
x_7 = x_3058;
goto _start;
}
else
{
lean_object* x_3064; 
lean_dec(x_3059);
lean_dec(x_3055);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_3064 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_3058);
if (lean_obj_tag(x_3064) == 0)
{
uint8_t x_3065; 
x_3065 = !lean_is_exclusive(x_3064);
if (x_3065 == 0)
{
lean_object* x_3066; lean_object* x_3067; uint8_t x_3068; uint8_t x_3069; uint8_t x_3070; 
x_3066 = lean_ctor_get(x_3064, 0);
x_3067 = lean_ctor_get(x_3064, 1);
x_3068 = 2;
x_3069 = lean_unbox(x_3066);
x_3070 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3069, x_3068);
if (x_3070 == 0)
{
uint8_t x_3071; uint8_t x_3072; uint8_t x_3073; lean_object* x_3074; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3071 = 1;
x_3072 = lean_unbox(x_3066);
lean_dec(x_3066);
x_3073 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3072, x_3071);
x_3074 = lean_box(x_3073);
lean_ctor_set(x_3064, 0, x_3074);
return x_3064;
}
else
{
lean_object* x_3075; 
lean_free_object(x_3064);
lean_dec(x_3066);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_3075 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_3067);
if (lean_obj_tag(x_3075) == 0)
{
uint8_t x_3076; 
x_3076 = !lean_is_exclusive(x_3075);
if (x_3076 == 0)
{
lean_object* x_3077; lean_object* x_3078; uint8_t x_3079; uint8_t x_3080; 
x_3077 = lean_ctor_get(x_3075, 0);
x_3078 = lean_ctor_get(x_3075, 1);
x_3079 = lean_unbox(x_3077);
x_3080 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3079, x_3068);
if (x_3080 == 0)
{
uint8_t x_3081; uint8_t x_3082; uint8_t x_3083; lean_object* x_3084; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3081 = 1;
x_3082 = lean_unbox(x_3077);
lean_dec(x_3077);
x_3083 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3082, x_3081);
x_3084 = lean_box(x_3083);
lean_ctor_set(x_3075, 0, x_3084);
return x_3075;
}
else
{
lean_object* x_3085; lean_object* x_3086; lean_object* x_3087; uint8_t x_3088; 
lean_free_object(x_3075);
lean_dec(x_3077);
x_3085 = lean_st_ref_get(x_6, x_3078);
x_3086 = lean_ctor_get(x_3085, 1);
lean_inc(x_3086);
lean_dec(x_3085);
x_3087 = lean_st_ref_get(x_4, x_3086);
x_3088 = !lean_is_exclusive(x_3087);
if (x_3088 == 0)
{
lean_object* x_3089; lean_object* x_3090; lean_object* x_3091; uint8_t x_3092; 
x_3089 = lean_ctor_get(x_3087, 0);
x_3090 = lean_ctor_get(x_3087, 1);
x_3091 = lean_ctor_get(x_3089, 0);
lean_inc(x_3091);
lean_dec(x_3089);
lean_inc(x_3091);
x_3092 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3091, x_1);
if (x_3092 == 0)
{
uint8_t x_3093; 
x_3093 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3091, x_2);
if (x_3093 == 0)
{
lean_object* x_3094; lean_object* x_3126; uint8_t x_3127; 
x_3126 = lean_ctor_get(x_3, 0);
lean_inc(x_3126);
x_3127 = lean_ctor_get_uint8(x_3126, 4);
lean_dec(x_3126);
if (x_3127 == 0)
{
uint8_t x_3128; lean_object* x_3129; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3128 = 0;
x_3129 = lean_box(x_3128);
lean_ctor_set(x_3087, 0, x_3129);
return x_3087;
}
else
{
uint8_t x_3130; 
x_3130 = l_Lean_Level_isMVar(x_1);
if (x_3130 == 0)
{
uint8_t x_3131; 
x_3131 = l_Lean_Level_isMVar(x_2);
if (x_3131 == 0)
{
uint8_t x_3132; lean_object* x_3133; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3132 = 0;
x_3133 = lean_box(x_3132);
lean_ctor_set(x_3087, 0, x_3133);
return x_3087;
}
else
{
lean_object* x_3134; 
lean_free_object(x_3087);
x_3134 = lean_box(0);
x_3094 = x_3134;
goto block_3125;
}
}
else
{
lean_object* x_3135; 
lean_free_object(x_3087);
x_3135 = lean_box(0);
x_3094 = x_3135;
goto block_3125;
}
}
block_3125:
{
lean_object* x_3095; lean_object* x_3096; uint8_t x_3097; lean_object* x_3098; lean_object* x_3114; lean_object* x_3115; lean_object* x_3116; uint8_t x_3117; 
lean_dec(x_3094);
x_3095 = lean_mk_string("stuck");
x_3096 = lean_name_mk_string(x_3050, x_3095);
x_3114 = lean_st_ref_get(x_6, x_3090);
x_3115 = lean_ctor_get(x_3114, 0);
lean_inc(x_3115);
x_3116 = lean_ctor_get(x_3115, 3);
lean_inc(x_3116);
lean_dec(x_3115);
x_3117 = lean_ctor_get_uint8(x_3116, sizeof(void*)*1);
lean_dec(x_3116);
if (x_3117 == 0)
{
lean_object* x_3118; uint8_t x_3119; 
x_3118 = lean_ctor_get(x_3114, 1);
lean_inc(x_3118);
lean_dec(x_3114);
x_3119 = 0;
x_3097 = x_3119;
x_3098 = x_3118;
goto block_3113;
}
else
{
lean_object* x_3120; lean_object* x_3121; lean_object* x_3122; lean_object* x_3123; uint8_t x_3124; 
x_3120 = lean_ctor_get(x_3114, 1);
lean_inc(x_3120);
lean_dec(x_3114);
lean_inc(x_3096);
x_3121 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3096, x_3, x_4, x_5, x_6, x_3120);
x_3122 = lean_ctor_get(x_3121, 0);
lean_inc(x_3122);
x_3123 = lean_ctor_get(x_3121, 1);
lean_inc(x_3123);
lean_dec(x_3121);
x_3124 = lean_unbox(x_3122);
lean_dec(x_3122);
x_3097 = x_3124;
x_3098 = x_3123;
goto block_3113;
}
block_3113:
{
if (x_3097 == 0)
{
lean_object* x_3099; 
lean_dec(x_3096);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3099 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3098);
return x_3099;
}
else
{
lean_object* x_3100; lean_object* x_3101; lean_object* x_3102; lean_object* x_3103; lean_object* x_3104; lean_object* x_3105; lean_object* x_3106; lean_object* x_3107; lean_object* x_3108; lean_object* x_3109; lean_object* x_3110; lean_object* x_3111; lean_object* x_3112; 
x_3100 = lean_mk_string("");
x_3101 = l_Lean_stringToMessageData(x_3100);
lean_dec(x_3100);
x_3102 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3102, 0, x_1);
lean_inc(x_3101);
x_3103 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3103, 0, x_3101);
lean_ctor_set(x_3103, 1, x_3102);
x_3104 = lean_mk_string(" =?= ");
x_3105 = l_Lean_stringToMessageData(x_3104);
lean_dec(x_3104);
x_3106 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3106, 0, x_3103);
lean_ctor_set(x_3106, 1, x_3105);
x_3107 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3107, 0, x_2);
x_3108 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3108, 0, x_3106);
lean_ctor_set(x_3108, 1, x_3107);
x_3109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3109, 0, x_3108);
lean_ctor_set(x_3109, 1, x_3101);
x_3110 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3096, x_3109, x_3, x_4, x_5, x_6, x_3098);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3111 = lean_ctor_get(x_3110, 1);
lean_inc(x_3111);
lean_dec(x_3110);
x_3112 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3111);
return x_3112;
}
}
}
}
else
{
lean_object* x_3136; uint8_t x_3137; 
lean_free_object(x_3087);
lean_dec(x_3050);
x_3136 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3090);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3137 = !lean_is_exclusive(x_3136);
if (x_3137 == 0)
{
lean_object* x_3138; uint8_t x_3139; lean_object* x_3140; 
x_3138 = lean_ctor_get(x_3136, 0);
lean_dec(x_3138);
x_3139 = 1;
x_3140 = lean_box(x_3139);
lean_ctor_set(x_3136, 0, x_3140);
return x_3136;
}
else
{
lean_object* x_3141; uint8_t x_3142; lean_object* x_3143; lean_object* x_3144; 
x_3141 = lean_ctor_get(x_3136, 1);
lean_inc(x_3141);
lean_dec(x_3136);
x_3142 = 1;
x_3143 = lean_box(x_3142);
x_3144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3144, 0, x_3143);
lean_ctor_set(x_3144, 1, x_3141);
return x_3144;
}
}
}
else
{
lean_object* x_3145; uint8_t x_3146; 
lean_dec(x_3091);
lean_free_object(x_3087);
lean_dec(x_3050);
x_3145 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3090);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3146 = !lean_is_exclusive(x_3145);
if (x_3146 == 0)
{
lean_object* x_3147; uint8_t x_3148; lean_object* x_3149; 
x_3147 = lean_ctor_get(x_3145, 0);
lean_dec(x_3147);
x_3148 = 1;
x_3149 = lean_box(x_3148);
lean_ctor_set(x_3145, 0, x_3149);
return x_3145;
}
else
{
lean_object* x_3150; uint8_t x_3151; lean_object* x_3152; lean_object* x_3153; 
x_3150 = lean_ctor_get(x_3145, 1);
lean_inc(x_3150);
lean_dec(x_3145);
x_3151 = 1;
x_3152 = lean_box(x_3151);
x_3153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3153, 0, x_3152);
lean_ctor_set(x_3153, 1, x_3150);
return x_3153;
}
}
}
else
{
lean_object* x_3154; lean_object* x_3155; lean_object* x_3156; uint8_t x_3157; 
x_3154 = lean_ctor_get(x_3087, 0);
x_3155 = lean_ctor_get(x_3087, 1);
lean_inc(x_3155);
lean_inc(x_3154);
lean_dec(x_3087);
x_3156 = lean_ctor_get(x_3154, 0);
lean_inc(x_3156);
lean_dec(x_3154);
lean_inc(x_3156);
x_3157 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3156, x_1);
if (x_3157 == 0)
{
uint8_t x_3158; 
x_3158 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3156, x_2);
if (x_3158 == 0)
{
lean_object* x_3159; lean_object* x_3191; uint8_t x_3192; 
x_3191 = lean_ctor_get(x_3, 0);
lean_inc(x_3191);
x_3192 = lean_ctor_get_uint8(x_3191, 4);
lean_dec(x_3191);
if (x_3192 == 0)
{
uint8_t x_3193; lean_object* x_3194; lean_object* x_3195; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3193 = 0;
x_3194 = lean_box(x_3193);
x_3195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3195, 0, x_3194);
lean_ctor_set(x_3195, 1, x_3155);
return x_3195;
}
else
{
uint8_t x_3196; 
x_3196 = l_Lean_Level_isMVar(x_1);
if (x_3196 == 0)
{
uint8_t x_3197; 
x_3197 = l_Lean_Level_isMVar(x_2);
if (x_3197 == 0)
{
uint8_t x_3198; lean_object* x_3199; lean_object* x_3200; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3198 = 0;
x_3199 = lean_box(x_3198);
x_3200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3200, 0, x_3199);
lean_ctor_set(x_3200, 1, x_3155);
return x_3200;
}
else
{
lean_object* x_3201; 
x_3201 = lean_box(0);
x_3159 = x_3201;
goto block_3190;
}
}
else
{
lean_object* x_3202; 
x_3202 = lean_box(0);
x_3159 = x_3202;
goto block_3190;
}
}
block_3190:
{
lean_object* x_3160; lean_object* x_3161; uint8_t x_3162; lean_object* x_3163; lean_object* x_3179; lean_object* x_3180; lean_object* x_3181; uint8_t x_3182; 
lean_dec(x_3159);
x_3160 = lean_mk_string("stuck");
x_3161 = lean_name_mk_string(x_3050, x_3160);
x_3179 = lean_st_ref_get(x_6, x_3155);
x_3180 = lean_ctor_get(x_3179, 0);
lean_inc(x_3180);
x_3181 = lean_ctor_get(x_3180, 3);
lean_inc(x_3181);
lean_dec(x_3180);
x_3182 = lean_ctor_get_uint8(x_3181, sizeof(void*)*1);
lean_dec(x_3181);
if (x_3182 == 0)
{
lean_object* x_3183; uint8_t x_3184; 
x_3183 = lean_ctor_get(x_3179, 1);
lean_inc(x_3183);
lean_dec(x_3179);
x_3184 = 0;
x_3162 = x_3184;
x_3163 = x_3183;
goto block_3178;
}
else
{
lean_object* x_3185; lean_object* x_3186; lean_object* x_3187; lean_object* x_3188; uint8_t x_3189; 
x_3185 = lean_ctor_get(x_3179, 1);
lean_inc(x_3185);
lean_dec(x_3179);
lean_inc(x_3161);
x_3186 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3161, x_3, x_4, x_5, x_6, x_3185);
x_3187 = lean_ctor_get(x_3186, 0);
lean_inc(x_3187);
x_3188 = lean_ctor_get(x_3186, 1);
lean_inc(x_3188);
lean_dec(x_3186);
x_3189 = lean_unbox(x_3187);
lean_dec(x_3187);
x_3162 = x_3189;
x_3163 = x_3188;
goto block_3178;
}
block_3178:
{
if (x_3162 == 0)
{
lean_object* x_3164; 
lean_dec(x_3161);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3164 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3163);
return x_3164;
}
else
{
lean_object* x_3165; lean_object* x_3166; lean_object* x_3167; lean_object* x_3168; lean_object* x_3169; lean_object* x_3170; lean_object* x_3171; lean_object* x_3172; lean_object* x_3173; lean_object* x_3174; lean_object* x_3175; lean_object* x_3176; lean_object* x_3177; 
x_3165 = lean_mk_string("");
x_3166 = l_Lean_stringToMessageData(x_3165);
lean_dec(x_3165);
x_3167 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3167, 0, x_1);
lean_inc(x_3166);
x_3168 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3168, 0, x_3166);
lean_ctor_set(x_3168, 1, x_3167);
x_3169 = lean_mk_string(" =?= ");
x_3170 = l_Lean_stringToMessageData(x_3169);
lean_dec(x_3169);
x_3171 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3171, 0, x_3168);
lean_ctor_set(x_3171, 1, x_3170);
x_3172 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3172, 0, x_2);
x_3173 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3173, 0, x_3171);
lean_ctor_set(x_3173, 1, x_3172);
x_3174 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3174, 0, x_3173);
lean_ctor_set(x_3174, 1, x_3166);
x_3175 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3161, x_3174, x_3, x_4, x_5, x_6, x_3163);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3176 = lean_ctor_get(x_3175, 1);
lean_inc(x_3176);
lean_dec(x_3175);
x_3177 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3176);
return x_3177;
}
}
}
}
else
{
lean_object* x_3203; lean_object* x_3204; lean_object* x_3205; uint8_t x_3206; lean_object* x_3207; lean_object* x_3208; 
lean_dec(x_3050);
x_3203 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3204 = lean_ctor_get(x_3203, 1);
lean_inc(x_3204);
if (lean_is_exclusive(x_3203)) {
 lean_ctor_release(x_3203, 0);
 lean_ctor_release(x_3203, 1);
 x_3205 = x_3203;
} else {
 lean_dec_ref(x_3203);
 x_3205 = lean_box(0);
}
x_3206 = 1;
x_3207 = lean_box(x_3206);
if (lean_is_scalar(x_3205)) {
 x_3208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3208 = x_3205;
}
lean_ctor_set(x_3208, 0, x_3207);
lean_ctor_set(x_3208, 1, x_3204);
return x_3208;
}
}
else
{
lean_object* x_3209; lean_object* x_3210; lean_object* x_3211; uint8_t x_3212; lean_object* x_3213; lean_object* x_3214; 
lean_dec(x_3156);
lean_dec(x_3050);
x_3209 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3155);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3210 = lean_ctor_get(x_3209, 1);
lean_inc(x_3210);
if (lean_is_exclusive(x_3209)) {
 lean_ctor_release(x_3209, 0);
 lean_ctor_release(x_3209, 1);
 x_3211 = x_3209;
} else {
 lean_dec_ref(x_3209);
 x_3211 = lean_box(0);
}
x_3212 = 1;
x_3213 = lean_box(x_3212);
if (lean_is_scalar(x_3211)) {
 x_3214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3214 = x_3211;
}
lean_ctor_set(x_3214, 0, x_3213);
lean_ctor_set(x_3214, 1, x_3210);
return x_3214;
}
}
}
}
else
{
lean_object* x_3215; lean_object* x_3216; uint8_t x_3217; uint8_t x_3218; 
x_3215 = lean_ctor_get(x_3075, 0);
x_3216 = lean_ctor_get(x_3075, 1);
lean_inc(x_3216);
lean_inc(x_3215);
lean_dec(x_3075);
x_3217 = lean_unbox(x_3215);
x_3218 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3217, x_3068);
if (x_3218 == 0)
{
uint8_t x_3219; uint8_t x_3220; uint8_t x_3221; lean_object* x_3222; lean_object* x_3223; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3219 = 1;
x_3220 = lean_unbox(x_3215);
lean_dec(x_3215);
x_3221 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3220, x_3219);
x_3222 = lean_box(x_3221);
x_3223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3223, 0, x_3222);
lean_ctor_set(x_3223, 1, x_3216);
return x_3223;
}
else
{
lean_object* x_3224; lean_object* x_3225; lean_object* x_3226; lean_object* x_3227; lean_object* x_3228; lean_object* x_3229; lean_object* x_3230; uint8_t x_3231; 
lean_dec(x_3215);
x_3224 = lean_st_ref_get(x_6, x_3216);
x_3225 = lean_ctor_get(x_3224, 1);
lean_inc(x_3225);
lean_dec(x_3224);
x_3226 = lean_st_ref_get(x_4, x_3225);
x_3227 = lean_ctor_get(x_3226, 0);
lean_inc(x_3227);
x_3228 = lean_ctor_get(x_3226, 1);
lean_inc(x_3228);
if (lean_is_exclusive(x_3226)) {
 lean_ctor_release(x_3226, 0);
 lean_ctor_release(x_3226, 1);
 x_3229 = x_3226;
} else {
 lean_dec_ref(x_3226);
 x_3229 = lean_box(0);
}
x_3230 = lean_ctor_get(x_3227, 0);
lean_inc(x_3230);
lean_dec(x_3227);
lean_inc(x_3230);
x_3231 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3230, x_1);
if (x_3231 == 0)
{
uint8_t x_3232; 
x_3232 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3230, x_2);
if (x_3232 == 0)
{
lean_object* x_3233; lean_object* x_3265; uint8_t x_3266; 
x_3265 = lean_ctor_get(x_3, 0);
lean_inc(x_3265);
x_3266 = lean_ctor_get_uint8(x_3265, 4);
lean_dec(x_3265);
if (x_3266 == 0)
{
uint8_t x_3267; lean_object* x_3268; lean_object* x_3269; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3267 = 0;
x_3268 = lean_box(x_3267);
if (lean_is_scalar(x_3229)) {
 x_3269 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3269 = x_3229;
}
lean_ctor_set(x_3269, 0, x_3268);
lean_ctor_set(x_3269, 1, x_3228);
return x_3269;
}
else
{
uint8_t x_3270; 
x_3270 = l_Lean_Level_isMVar(x_1);
if (x_3270 == 0)
{
uint8_t x_3271; 
x_3271 = l_Lean_Level_isMVar(x_2);
if (x_3271 == 0)
{
uint8_t x_3272; lean_object* x_3273; lean_object* x_3274; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3272 = 0;
x_3273 = lean_box(x_3272);
if (lean_is_scalar(x_3229)) {
 x_3274 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3274 = x_3229;
}
lean_ctor_set(x_3274, 0, x_3273);
lean_ctor_set(x_3274, 1, x_3228);
return x_3274;
}
else
{
lean_object* x_3275; 
lean_dec(x_3229);
x_3275 = lean_box(0);
x_3233 = x_3275;
goto block_3264;
}
}
else
{
lean_object* x_3276; 
lean_dec(x_3229);
x_3276 = lean_box(0);
x_3233 = x_3276;
goto block_3264;
}
}
block_3264:
{
lean_object* x_3234; lean_object* x_3235; uint8_t x_3236; lean_object* x_3237; lean_object* x_3253; lean_object* x_3254; lean_object* x_3255; uint8_t x_3256; 
lean_dec(x_3233);
x_3234 = lean_mk_string("stuck");
x_3235 = lean_name_mk_string(x_3050, x_3234);
x_3253 = lean_st_ref_get(x_6, x_3228);
x_3254 = lean_ctor_get(x_3253, 0);
lean_inc(x_3254);
x_3255 = lean_ctor_get(x_3254, 3);
lean_inc(x_3255);
lean_dec(x_3254);
x_3256 = lean_ctor_get_uint8(x_3255, sizeof(void*)*1);
lean_dec(x_3255);
if (x_3256 == 0)
{
lean_object* x_3257; uint8_t x_3258; 
x_3257 = lean_ctor_get(x_3253, 1);
lean_inc(x_3257);
lean_dec(x_3253);
x_3258 = 0;
x_3236 = x_3258;
x_3237 = x_3257;
goto block_3252;
}
else
{
lean_object* x_3259; lean_object* x_3260; lean_object* x_3261; lean_object* x_3262; uint8_t x_3263; 
x_3259 = lean_ctor_get(x_3253, 1);
lean_inc(x_3259);
lean_dec(x_3253);
lean_inc(x_3235);
x_3260 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3235, x_3, x_4, x_5, x_6, x_3259);
x_3261 = lean_ctor_get(x_3260, 0);
lean_inc(x_3261);
x_3262 = lean_ctor_get(x_3260, 1);
lean_inc(x_3262);
lean_dec(x_3260);
x_3263 = lean_unbox(x_3261);
lean_dec(x_3261);
x_3236 = x_3263;
x_3237 = x_3262;
goto block_3252;
}
block_3252:
{
if (x_3236 == 0)
{
lean_object* x_3238; 
lean_dec(x_3235);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3238 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3237);
return x_3238;
}
else
{
lean_object* x_3239; lean_object* x_3240; lean_object* x_3241; lean_object* x_3242; lean_object* x_3243; lean_object* x_3244; lean_object* x_3245; lean_object* x_3246; lean_object* x_3247; lean_object* x_3248; lean_object* x_3249; lean_object* x_3250; lean_object* x_3251; 
x_3239 = lean_mk_string("");
x_3240 = l_Lean_stringToMessageData(x_3239);
lean_dec(x_3239);
x_3241 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3241, 0, x_1);
lean_inc(x_3240);
x_3242 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3242, 0, x_3240);
lean_ctor_set(x_3242, 1, x_3241);
x_3243 = lean_mk_string(" =?= ");
x_3244 = l_Lean_stringToMessageData(x_3243);
lean_dec(x_3243);
x_3245 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3245, 0, x_3242);
lean_ctor_set(x_3245, 1, x_3244);
x_3246 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3246, 0, x_2);
x_3247 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3247, 0, x_3245);
lean_ctor_set(x_3247, 1, x_3246);
x_3248 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3248, 0, x_3247);
lean_ctor_set(x_3248, 1, x_3240);
x_3249 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3235, x_3248, x_3, x_4, x_5, x_6, x_3237);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3250 = lean_ctor_get(x_3249, 1);
lean_inc(x_3250);
lean_dec(x_3249);
x_3251 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3250);
return x_3251;
}
}
}
}
else
{
lean_object* x_3277; lean_object* x_3278; lean_object* x_3279; uint8_t x_3280; lean_object* x_3281; lean_object* x_3282; 
lean_dec(x_3229);
lean_dec(x_3050);
x_3277 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3228);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3278 = lean_ctor_get(x_3277, 1);
lean_inc(x_3278);
if (lean_is_exclusive(x_3277)) {
 lean_ctor_release(x_3277, 0);
 lean_ctor_release(x_3277, 1);
 x_3279 = x_3277;
} else {
 lean_dec_ref(x_3277);
 x_3279 = lean_box(0);
}
x_3280 = 1;
x_3281 = lean_box(x_3280);
if (lean_is_scalar(x_3279)) {
 x_3282 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3282 = x_3279;
}
lean_ctor_set(x_3282, 0, x_3281);
lean_ctor_set(x_3282, 1, x_3278);
return x_3282;
}
}
else
{
lean_object* x_3283; lean_object* x_3284; lean_object* x_3285; uint8_t x_3286; lean_object* x_3287; lean_object* x_3288; 
lean_dec(x_3230);
lean_dec(x_3229);
lean_dec(x_3050);
x_3283 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3228);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3284 = lean_ctor_get(x_3283, 1);
lean_inc(x_3284);
if (lean_is_exclusive(x_3283)) {
 lean_ctor_release(x_3283, 0);
 lean_ctor_release(x_3283, 1);
 x_3285 = x_3283;
} else {
 lean_dec_ref(x_3283);
 x_3285 = lean_box(0);
}
x_3286 = 1;
x_3287 = lean_box(x_3286);
if (lean_is_scalar(x_3285)) {
 x_3288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3288 = x_3285;
}
lean_ctor_set(x_3288, 0, x_3287);
lean_ctor_set(x_3288, 1, x_3284);
return x_3288;
}
}
}
}
else
{
uint8_t x_3289; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3289 = !lean_is_exclusive(x_3075);
if (x_3289 == 0)
{
return x_3075;
}
else
{
lean_object* x_3290; lean_object* x_3291; lean_object* x_3292; 
x_3290 = lean_ctor_get(x_3075, 0);
x_3291 = lean_ctor_get(x_3075, 1);
lean_inc(x_3291);
lean_inc(x_3290);
lean_dec(x_3075);
x_3292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3292, 0, x_3290);
lean_ctor_set(x_3292, 1, x_3291);
return x_3292;
}
}
}
}
else
{
lean_object* x_3293; lean_object* x_3294; uint8_t x_3295; uint8_t x_3296; uint8_t x_3297; 
x_3293 = lean_ctor_get(x_3064, 0);
x_3294 = lean_ctor_get(x_3064, 1);
lean_inc(x_3294);
lean_inc(x_3293);
lean_dec(x_3064);
x_3295 = 2;
x_3296 = lean_unbox(x_3293);
x_3297 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3296, x_3295);
if (x_3297 == 0)
{
uint8_t x_3298; uint8_t x_3299; uint8_t x_3300; lean_object* x_3301; lean_object* x_3302; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3298 = 1;
x_3299 = lean_unbox(x_3293);
lean_dec(x_3293);
x_3300 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3299, x_3298);
x_3301 = lean_box(x_3300);
x_3302 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3302, 0, x_3301);
lean_ctor_set(x_3302, 1, x_3294);
return x_3302;
}
else
{
lean_object* x_3303; 
lean_dec(x_3293);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_3303 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_3294);
if (lean_obj_tag(x_3303) == 0)
{
lean_object* x_3304; lean_object* x_3305; lean_object* x_3306; uint8_t x_3307; uint8_t x_3308; 
x_3304 = lean_ctor_get(x_3303, 0);
lean_inc(x_3304);
x_3305 = lean_ctor_get(x_3303, 1);
lean_inc(x_3305);
if (lean_is_exclusive(x_3303)) {
 lean_ctor_release(x_3303, 0);
 lean_ctor_release(x_3303, 1);
 x_3306 = x_3303;
} else {
 lean_dec_ref(x_3303);
 x_3306 = lean_box(0);
}
x_3307 = lean_unbox(x_3304);
x_3308 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3307, x_3295);
if (x_3308 == 0)
{
uint8_t x_3309; uint8_t x_3310; uint8_t x_3311; lean_object* x_3312; lean_object* x_3313; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3309 = 1;
x_3310 = lean_unbox(x_3304);
lean_dec(x_3304);
x_3311 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3310, x_3309);
x_3312 = lean_box(x_3311);
if (lean_is_scalar(x_3306)) {
 x_3313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3313 = x_3306;
}
lean_ctor_set(x_3313, 0, x_3312);
lean_ctor_set(x_3313, 1, x_3305);
return x_3313;
}
else
{
lean_object* x_3314; lean_object* x_3315; lean_object* x_3316; lean_object* x_3317; lean_object* x_3318; lean_object* x_3319; lean_object* x_3320; uint8_t x_3321; 
lean_dec(x_3306);
lean_dec(x_3304);
x_3314 = lean_st_ref_get(x_6, x_3305);
x_3315 = lean_ctor_get(x_3314, 1);
lean_inc(x_3315);
lean_dec(x_3314);
x_3316 = lean_st_ref_get(x_4, x_3315);
x_3317 = lean_ctor_get(x_3316, 0);
lean_inc(x_3317);
x_3318 = lean_ctor_get(x_3316, 1);
lean_inc(x_3318);
if (lean_is_exclusive(x_3316)) {
 lean_ctor_release(x_3316, 0);
 lean_ctor_release(x_3316, 1);
 x_3319 = x_3316;
} else {
 lean_dec_ref(x_3316);
 x_3319 = lean_box(0);
}
x_3320 = lean_ctor_get(x_3317, 0);
lean_inc(x_3320);
lean_dec(x_3317);
lean_inc(x_3320);
x_3321 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3320, x_1);
if (x_3321 == 0)
{
uint8_t x_3322; 
x_3322 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3320, x_2);
if (x_3322 == 0)
{
lean_object* x_3323; lean_object* x_3355; uint8_t x_3356; 
x_3355 = lean_ctor_get(x_3, 0);
lean_inc(x_3355);
x_3356 = lean_ctor_get_uint8(x_3355, 4);
lean_dec(x_3355);
if (x_3356 == 0)
{
uint8_t x_3357; lean_object* x_3358; lean_object* x_3359; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3357 = 0;
x_3358 = lean_box(x_3357);
if (lean_is_scalar(x_3319)) {
 x_3359 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3359 = x_3319;
}
lean_ctor_set(x_3359, 0, x_3358);
lean_ctor_set(x_3359, 1, x_3318);
return x_3359;
}
else
{
uint8_t x_3360; 
x_3360 = l_Lean_Level_isMVar(x_1);
if (x_3360 == 0)
{
uint8_t x_3361; 
x_3361 = l_Lean_Level_isMVar(x_2);
if (x_3361 == 0)
{
uint8_t x_3362; lean_object* x_3363; lean_object* x_3364; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3362 = 0;
x_3363 = lean_box(x_3362);
if (lean_is_scalar(x_3319)) {
 x_3364 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3364 = x_3319;
}
lean_ctor_set(x_3364, 0, x_3363);
lean_ctor_set(x_3364, 1, x_3318);
return x_3364;
}
else
{
lean_object* x_3365; 
lean_dec(x_3319);
x_3365 = lean_box(0);
x_3323 = x_3365;
goto block_3354;
}
}
else
{
lean_object* x_3366; 
lean_dec(x_3319);
x_3366 = lean_box(0);
x_3323 = x_3366;
goto block_3354;
}
}
block_3354:
{
lean_object* x_3324; lean_object* x_3325; uint8_t x_3326; lean_object* x_3327; lean_object* x_3343; lean_object* x_3344; lean_object* x_3345; uint8_t x_3346; 
lean_dec(x_3323);
x_3324 = lean_mk_string("stuck");
x_3325 = lean_name_mk_string(x_3050, x_3324);
x_3343 = lean_st_ref_get(x_6, x_3318);
x_3344 = lean_ctor_get(x_3343, 0);
lean_inc(x_3344);
x_3345 = lean_ctor_get(x_3344, 3);
lean_inc(x_3345);
lean_dec(x_3344);
x_3346 = lean_ctor_get_uint8(x_3345, sizeof(void*)*1);
lean_dec(x_3345);
if (x_3346 == 0)
{
lean_object* x_3347; uint8_t x_3348; 
x_3347 = lean_ctor_get(x_3343, 1);
lean_inc(x_3347);
lean_dec(x_3343);
x_3348 = 0;
x_3326 = x_3348;
x_3327 = x_3347;
goto block_3342;
}
else
{
lean_object* x_3349; lean_object* x_3350; lean_object* x_3351; lean_object* x_3352; uint8_t x_3353; 
x_3349 = lean_ctor_get(x_3343, 1);
lean_inc(x_3349);
lean_dec(x_3343);
lean_inc(x_3325);
x_3350 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3325, x_3, x_4, x_5, x_6, x_3349);
x_3351 = lean_ctor_get(x_3350, 0);
lean_inc(x_3351);
x_3352 = lean_ctor_get(x_3350, 1);
lean_inc(x_3352);
lean_dec(x_3350);
x_3353 = lean_unbox(x_3351);
lean_dec(x_3351);
x_3326 = x_3353;
x_3327 = x_3352;
goto block_3342;
}
block_3342:
{
if (x_3326 == 0)
{
lean_object* x_3328; 
lean_dec(x_3325);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3328 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3327);
return x_3328;
}
else
{
lean_object* x_3329; lean_object* x_3330; lean_object* x_3331; lean_object* x_3332; lean_object* x_3333; lean_object* x_3334; lean_object* x_3335; lean_object* x_3336; lean_object* x_3337; lean_object* x_3338; lean_object* x_3339; lean_object* x_3340; lean_object* x_3341; 
x_3329 = lean_mk_string("");
x_3330 = l_Lean_stringToMessageData(x_3329);
lean_dec(x_3329);
x_3331 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3331, 0, x_1);
lean_inc(x_3330);
x_3332 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3332, 0, x_3330);
lean_ctor_set(x_3332, 1, x_3331);
x_3333 = lean_mk_string(" =?= ");
x_3334 = l_Lean_stringToMessageData(x_3333);
lean_dec(x_3333);
x_3335 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3335, 0, x_3332);
lean_ctor_set(x_3335, 1, x_3334);
x_3336 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3336, 0, x_2);
x_3337 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3337, 0, x_3335);
lean_ctor_set(x_3337, 1, x_3336);
x_3338 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3338, 0, x_3337);
lean_ctor_set(x_3338, 1, x_3330);
x_3339 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3325, x_3338, x_3, x_4, x_5, x_6, x_3327);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3340 = lean_ctor_get(x_3339, 1);
lean_inc(x_3340);
lean_dec(x_3339);
x_3341 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3340);
return x_3341;
}
}
}
}
else
{
lean_object* x_3367; lean_object* x_3368; lean_object* x_3369; uint8_t x_3370; lean_object* x_3371; lean_object* x_3372; 
lean_dec(x_3319);
lean_dec(x_3050);
x_3367 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3318);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3368 = lean_ctor_get(x_3367, 1);
lean_inc(x_3368);
if (lean_is_exclusive(x_3367)) {
 lean_ctor_release(x_3367, 0);
 lean_ctor_release(x_3367, 1);
 x_3369 = x_3367;
} else {
 lean_dec_ref(x_3367);
 x_3369 = lean_box(0);
}
x_3370 = 1;
x_3371 = lean_box(x_3370);
if (lean_is_scalar(x_3369)) {
 x_3372 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3372 = x_3369;
}
lean_ctor_set(x_3372, 0, x_3371);
lean_ctor_set(x_3372, 1, x_3368);
return x_3372;
}
}
else
{
lean_object* x_3373; lean_object* x_3374; lean_object* x_3375; uint8_t x_3376; lean_object* x_3377; lean_object* x_3378; 
lean_dec(x_3320);
lean_dec(x_3319);
lean_dec(x_3050);
x_3373 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3318);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3374 = lean_ctor_get(x_3373, 1);
lean_inc(x_3374);
if (lean_is_exclusive(x_3373)) {
 lean_ctor_release(x_3373, 0);
 lean_ctor_release(x_3373, 1);
 x_3375 = x_3373;
} else {
 lean_dec_ref(x_3373);
 x_3375 = lean_box(0);
}
x_3376 = 1;
x_3377 = lean_box(x_3376);
if (lean_is_scalar(x_3375)) {
 x_3378 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3378 = x_3375;
}
lean_ctor_set(x_3378, 0, x_3377);
lean_ctor_set(x_3378, 1, x_3374);
return x_3378;
}
}
}
else
{
lean_object* x_3379; lean_object* x_3380; lean_object* x_3381; lean_object* x_3382; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3379 = lean_ctor_get(x_3303, 0);
lean_inc(x_3379);
x_3380 = lean_ctor_get(x_3303, 1);
lean_inc(x_3380);
if (lean_is_exclusive(x_3303)) {
 lean_ctor_release(x_3303, 0);
 lean_ctor_release(x_3303, 1);
 x_3381 = x_3303;
} else {
 lean_dec_ref(x_3303);
 x_3381 = lean_box(0);
}
if (lean_is_scalar(x_3381)) {
 x_3382 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3382 = x_3381;
}
lean_ctor_set(x_3382, 0, x_3379);
lean_ctor_set(x_3382, 1, x_3380);
return x_3382;
}
}
}
}
else
{
uint8_t x_3383; 
lean_dec(x_3050);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3383 = !lean_is_exclusive(x_3064);
if (x_3383 == 0)
{
return x_3064;
}
else
{
lean_object* x_3384; lean_object* x_3385; lean_object* x_3386; 
x_3384 = lean_ctor_get(x_3064, 0);
x_3385 = lean_ctor_get(x_3064, 1);
lean_inc(x_3385);
lean_inc(x_3384);
lean_dec(x_3064);
x_3386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3386, 0, x_3384);
lean_ctor_set(x_3386, 1, x_3385);
return x_3386;
}
}
}
}
}
block_3404:
{
if (x_3390 == 0)
{
lean_dec(x_3389);
x_3051 = x_3391;
goto block_3387;
}
else
{
lean_object* x_3392; lean_object* x_3393; lean_object* x_3394; lean_object* x_3395; lean_object* x_3396; lean_object* x_3397; lean_object* x_3398; lean_object* x_3399; lean_object* x_3400; lean_object* x_3401; lean_object* x_3402; lean_object* x_3403; 
x_3392 = lean_mk_string("");
x_3393 = l_Lean_stringToMessageData(x_3392);
lean_dec(x_3392);
lean_inc(x_1);
x_3394 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3394, 0, x_1);
lean_inc(x_3393);
x_3395 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3395, 0, x_3393);
lean_ctor_set(x_3395, 1, x_3394);
x_3396 = lean_mk_string(" =?= ");
x_3397 = l_Lean_stringToMessageData(x_3396);
lean_dec(x_3396);
x_3398 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3398, 0, x_3395);
lean_ctor_set(x_3398, 1, x_3397);
lean_inc(x_2);
x_3399 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3399, 0, x_2);
x_3400 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3400, 0, x_3398);
lean_ctor_set(x_3400, 1, x_3399);
x_3401 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3401, 0, x_3400);
lean_ctor_set(x_3401, 1, x_3393);
x_3402 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3389, x_3401, x_3, x_4, x_5, x_6, x_3391);
x_3403 = lean_ctor_get(x_3402, 1);
lean_inc(x_3403);
lean_dec(x_3402);
x_3051 = x_3403;
goto block_3387;
}
}
}
else
{
lean_object* x_3416; lean_object* x_3417; lean_object* x_3418; uint8_t x_3419; lean_object* x_3420; lean_object* x_3421; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3416 = lean_unsigned_to_nat(0u);
x_3417 = l_Lean_Level_getOffsetAux(x_1, x_3416);
lean_dec(x_1);
x_3418 = l_Lean_Level_getOffsetAux(x_2, x_3416);
lean_dec(x_2);
x_3419 = lean_nat_dec_eq(x_3417, x_3418);
lean_dec(x_3418);
lean_dec(x_3417);
x_3420 = lean_box(x_3419);
x_3421 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3421, 0, x_3420);
lean_ctor_set(x_3421, 1, x_7);
return x_3421;
}
}
default: 
{
lean_object* x_3422; lean_object* x_3423; uint8_t x_3424; 
x_3422 = l_Lean_Level_getLevelOffset(x_1);
x_3423 = l_Lean_Level_getLevelOffset(x_2);
x_3424 = lean_level_eq(x_3422, x_3423);
lean_dec(x_3423);
lean_dec(x_3422);
if (x_3424 == 0)
{
lean_object* x_3425; lean_object* x_3426; lean_object* x_3427; lean_object* x_3428; lean_object* x_3429; lean_object* x_3430; lean_object* x_3767; lean_object* x_3768; uint8_t x_3769; lean_object* x_3770; lean_object* x_3784; lean_object* x_3785; lean_object* x_3786; uint8_t x_3787; 
x_3425 = lean_box(0);
x_3426 = lean_mk_string("Meta");
x_3427 = lean_name_mk_string(x_3425, x_3426);
x_3428 = lean_mk_string("isLevelDefEq");
x_3429 = lean_name_mk_string(x_3427, x_3428);
x_3767 = lean_mk_string("step");
lean_inc(x_3429);
x_3768 = lean_name_mk_string(x_3429, x_3767);
x_3784 = lean_st_ref_get(x_6, x_7);
x_3785 = lean_ctor_get(x_3784, 0);
lean_inc(x_3785);
x_3786 = lean_ctor_get(x_3785, 3);
lean_inc(x_3786);
lean_dec(x_3785);
x_3787 = lean_ctor_get_uint8(x_3786, sizeof(void*)*1);
lean_dec(x_3786);
if (x_3787 == 0)
{
lean_object* x_3788; uint8_t x_3789; 
x_3788 = lean_ctor_get(x_3784, 1);
lean_inc(x_3788);
lean_dec(x_3784);
x_3789 = 0;
x_3769 = x_3789;
x_3770 = x_3788;
goto block_3783;
}
else
{
lean_object* x_3790; lean_object* x_3791; lean_object* x_3792; lean_object* x_3793; uint8_t x_3794; 
x_3790 = lean_ctor_get(x_3784, 1);
lean_inc(x_3790);
lean_dec(x_3784);
lean_inc(x_3768);
x_3791 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3768, x_3, x_4, x_5, x_6, x_3790);
x_3792 = lean_ctor_get(x_3791, 0);
lean_inc(x_3792);
x_3793 = lean_ctor_get(x_3791, 1);
lean_inc(x_3793);
lean_dec(x_3791);
x_3794 = lean_unbox(x_3792);
lean_dec(x_3792);
x_3769 = x_3794;
x_3770 = x_3793;
goto block_3783;
}
block_3766:
{
lean_object* x_3431; lean_object* x_3432; lean_object* x_3433; lean_object* x_3434; lean_object* x_3435; lean_object* x_3436; lean_object* x_3437; lean_object* x_3438; uint8_t x_3439; 
lean_inc(x_1);
x_3431 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_3430);
x_3432 = lean_ctor_get(x_3431, 0);
lean_inc(x_3432);
x_3433 = lean_ctor_get(x_3431, 1);
lean_inc(x_3433);
lean_dec(x_3431);
x_3434 = l_Lean_Level_normalize(x_3432);
lean_dec(x_3432);
lean_inc(x_2);
x_3435 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_2, x_3, x_4, x_5, x_6, x_3433);
x_3436 = lean_ctor_get(x_3435, 0);
lean_inc(x_3436);
x_3437 = lean_ctor_get(x_3435, 1);
lean_inc(x_3437);
lean_dec(x_3435);
x_3438 = l_Lean_Level_normalize(x_3436);
lean_dec(x_3436);
x_3439 = lean_level_eq(x_1, x_3434);
if (x_3439 == 0)
{
lean_dec(x_3429);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_3434;
x_2 = x_3438;
x_7 = x_3437;
goto _start;
}
else
{
uint8_t x_3441; 
x_3441 = lean_level_eq(x_2, x_3438);
if (x_3441 == 0)
{
lean_dec(x_3429);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_3434;
x_2 = x_3438;
x_7 = x_3437;
goto _start;
}
else
{
lean_object* x_3443; 
lean_dec(x_3438);
lean_dec(x_3434);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_3443 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_1, x_2, x_3, x_4, x_5, x_6, x_3437);
if (lean_obj_tag(x_3443) == 0)
{
uint8_t x_3444; 
x_3444 = !lean_is_exclusive(x_3443);
if (x_3444 == 0)
{
lean_object* x_3445; lean_object* x_3446; uint8_t x_3447; uint8_t x_3448; uint8_t x_3449; 
x_3445 = lean_ctor_get(x_3443, 0);
x_3446 = lean_ctor_get(x_3443, 1);
x_3447 = 2;
x_3448 = lean_unbox(x_3445);
x_3449 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3448, x_3447);
if (x_3449 == 0)
{
uint8_t x_3450; uint8_t x_3451; uint8_t x_3452; lean_object* x_3453; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3450 = 1;
x_3451 = lean_unbox(x_3445);
lean_dec(x_3445);
x_3452 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3451, x_3450);
x_3453 = lean_box(x_3452);
lean_ctor_set(x_3443, 0, x_3453);
return x_3443;
}
else
{
lean_object* x_3454; 
lean_free_object(x_3443);
lean_dec(x_3445);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_3454 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_3446);
if (lean_obj_tag(x_3454) == 0)
{
uint8_t x_3455; 
x_3455 = !lean_is_exclusive(x_3454);
if (x_3455 == 0)
{
lean_object* x_3456; lean_object* x_3457; uint8_t x_3458; uint8_t x_3459; 
x_3456 = lean_ctor_get(x_3454, 0);
x_3457 = lean_ctor_get(x_3454, 1);
x_3458 = lean_unbox(x_3456);
x_3459 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3458, x_3447);
if (x_3459 == 0)
{
uint8_t x_3460; uint8_t x_3461; uint8_t x_3462; lean_object* x_3463; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3460 = 1;
x_3461 = lean_unbox(x_3456);
lean_dec(x_3456);
x_3462 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3461, x_3460);
x_3463 = lean_box(x_3462);
lean_ctor_set(x_3454, 0, x_3463);
return x_3454;
}
else
{
lean_object* x_3464; lean_object* x_3465; lean_object* x_3466; uint8_t x_3467; 
lean_free_object(x_3454);
lean_dec(x_3456);
x_3464 = lean_st_ref_get(x_6, x_3457);
x_3465 = lean_ctor_get(x_3464, 1);
lean_inc(x_3465);
lean_dec(x_3464);
x_3466 = lean_st_ref_get(x_4, x_3465);
x_3467 = !lean_is_exclusive(x_3466);
if (x_3467 == 0)
{
lean_object* x_3468; lean_object* x_3469; lean_object* x_3470; uint8_t x_3471; 
x_3468 = lean_ctor_get(x_3466, 0);
x_3469 = lean_ctor_get(x_3466, 1);
x_3470 = lean_ctor_get(x_3468, 0);
lean_inc(x_3470);
lean_dec(x_3468);
lean_inc(x_3470);
x_3471 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3470, x_1);
if (x_3471 == 0)
{
uint8_t x_3472; 
x_3472 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3470, x_2);
if (x_3472 == 0)
{
lean_object* x_3473; lean_object* x_3505; uint8_t x_3506; 
x_3505 = lean_ctor_get(x_3, 0);
lean_inc(x_3505);
x_3506 = lean_ctor_get_uint8(x_3505, 4);
lean_dec(x_3505);
if (x_3506 == 0)
{
uint8_t x_3507; lean_object* x_3508; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3507 = 0;
x_3508 = lean_box(x_3507);
lean_ctor_set(x_3466, 0, x_3508);
return x_3466;
}
else
{
uint8_t x_3509; 
x_3509 = l_Lean_Level_isMVar(x_1);
if (x_3509 == 0)
{
uint8_t x_3510; 
x_3510 = l_Lean_Level_isMVar(x_2);
if (x_3510 == 0)
{
uint8_t x_3511; lean_object* x_3512; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3511 = 0;
x_3512 = lean_box(x_3511);
lean_ctor_set(x_3466, 0, x_3512);
return x_3466;
}
else
{
lean_object* x_3513; 
lean_free_object(x_3466);
x_3513 = lean_box(0);
x_3473 = x_3513;
goto block_3504;
}
}
else
{
lean_object* x_3514; 
lean_free_object(x_3466);
x_3514 = lean_box(0);
x_3473 = x_3514;
goto block_3504;
}
}
block_3504:
{
lean_object* x_3474; lean_object* x_3475; uint8_t x_3476; lean_object* x_3477; lean_object* x_3493; lean_object* x_3494; lean_object* x_3495; uint8_t x_3496; 
lean_dec(x_3473);
x_3474 = lean_mk_string("stuck");
x_3475 = lean_name_mk_string(x_3429, x_3474);
x_3493 = lean_st_ref_get(x_6, x_3469);
x_3494 = lean_ctor_get(x_3493, 0);
lean_inc(x_3494);
x_3495 = lean_ctor_get(x_3494, 3);
lean_inc(x_3495);
lean_dec(x_3494);
x_3496 = lean_ctor_get_uint8(x_3495, sizeof(void*)*1);
lean_dec(x_3495);
if (x_3496 == 0)
{
lean_object* x_3497; uint8_t x_3498; 
x_3497 = lean_ctor_get(x_3493, 1);
lean_inc(x_3497);
lean_dec(x_3493);
x_3498 = 0;
x_3476 = x_3498;
x_3477 = x_3497;
goto block_3492;
}
else
{
lean_object* x_3499; lean_object* x_3500; lean_object* x_3501; lean_object* x_3502; uint8_t x_3503; 
x_3499 = lean_ctor_get(x_3493, 1);
lean_inc(x_3499);
lean_dec(x_3493);
lean_inc(x_3475);
x_3500 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3475, x_3, x_4, x_5, x_6, x_3499);
x_3501 = lean_ctor_get(x_3500, 0);
lean_inc(x_3501);
x_3502 = lean_ctor_get(x_3500, 1);
lean_inc(x_3502);
lean_dec(x_3500);
x_3503 = lean_unbox(x_3501);
lean_dec(x_3501);
x_3476 = x_3503;
x_3477 = x_3502;
goto block_3492;
}
block_3492:
{
if (x_3476 == 0)
{
lean_object* x_3478; 
lean_dec(x_3475);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3478 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3477);
return x_3478;
}
else
{
lean_object* x_3479; lean_object* x_3480; lean_object* x_3481; lean_object* x_3482; lean_object* x_3483; lean_object* x_3484; lean_object* x_3485; lean_object* x_3486; lean_object* x_3487; lean_object* x_3488; lean_object* x_3489; lean_object* x_3490; lean_object* x_3491; 
x_3479 = lean_mk_string("");
x_3480 = l_Lean_stringToMessageData(x_3479);
lean_dec(x_3479);
x_3481 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3481, 0, x_1);
lean_inc(x_3480);
x_3482 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3482, 0, x_3480);
lean_ctor_set(x_3482, 1, x_3481);
x_3483 = lean_mk_string(" =?= ");
x_3484 = l_Lean_stringToMessageData(x_3483);
lean_dec(x_3483);
x_3485 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3485, 0, x_3482);
lean_ctor_set(x_3485, 1, x_3484);
x_3486 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3486, 0, x_2);
x_3487 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3487, 0, x_3485);
lean_ctor_set(x_3487, 1, x_3486);
x_3488 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3488, 0, x_3487);
lean_ctor_set(x_3488, 1, x_3480);
x_3489 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3475, x_3488, x_3, x_4, x_5, x_6, x_3477);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3490 = lean_ctor_get(x_3489, 1);
lean_inc(x_3490);
lean_dec(x_3489);
x_3491 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3490);
return x_3491;
}
}
}
}
else
{
lean_object* x_3515; uint8_t x_3516; 
lean_free_object(x_3466);
lean_dec(x_3429);
x_3515 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3469);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3516 = !lean_is_exclusive(x_3515);
if (x_3516 == 0)
{
lean_object* x_3517; uint8_t x_3518; lean_object* x_3519; 
x_3517 = lean_ctor_get(x_3515, 0);
lean_dec(x_3517);
x_3518 = 1;
x_3519 = lean_box(x_3518);
lean_ctor_set(x_3515, 0, x_3519);
return x_3515;
}
else
{
lean_object* x_3520; uint8_t x_3521; lean_object* x_3522; lean_object* x_3523; 
x_3520 = lean_ctor_get(x_3515, 1);
lean_inc(x_3520);
lean_dec(x_3515);
x_3521 = 1;
x_3522 = lean_box(x_3521);
x_3523 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3523, 0, x_3522);
lean_ctor_set(x_3523, 1, x_3520);
return x_3523;
}
}
}
else
{
lean_object* x_3524; uint8_t x_3525; 
lean_dec(x_3470);
lean_free_object(x_3466);
lean_dec(x_3429);
x_3524 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3469);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3525 = !lean_is_exclusive(x_3524);
if (x_3525 == 0)
{
lean_object* x_3526; uint8_t x_3527; lean_object* x_3528; 
x_3526 = lean_ctor_get(x_3524, 0);
lean_dec(x_3526);
x_3527 = 1;
x_3528 = lean_box(x_3527);
lean_ctor_set(x_3524, 0, x_3528);
return x_3524;
}
else
{
lean_object* x_3529; uint8_t x_3530; lean_object* x_3531; lean_object* x_3532; 
x_3529 = lean_ctor_get(x_3524, 1);
lean_inc(x_3529);
lean_dec(x_3524);
x_3530 = 1;
x_3531 = lean_box(x_3530);
x_3532 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3532, 0, x_3531);
lean_ctor_set(x_3532, 1, x_3529);
return x_3532;
}
}
}
else
{
lean_object* x_3533; lean_object* x_3534; lean_object* x_3535; uint8_t x_3536; 
x_3533 = lean_ctor_get(x_3466, 0);
x_3534 = lean_ctor_get(x_3466, 1);
lean_inc(x_3534);
lean_inc(x_3533);
lean_dec(x_3466);
x_3535 = lean_ctor_get(x_3533, 0);
lean_inc(x_3535);
lean_dec(x_3533);
lean_inc(x_3535);
x_3536 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3535, x_1);
if (x_3536 == 0)
{
uint8_t x_3537; 
x_3537 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3535, x_2);
if (x_3537 == 0)
{
lean_object* x_3538; lean_object* x_3570; uint8_t x_3571; 
x_3570 = lean_ctor_get(x_3, 0);
lean_inc(x_3570);
x_3571 = lean_ctor_get_uint8(x_3570, 4);
lean_dec(x_3570);
if (x_3571 == 0)
{
uint8_t x_3572; lean_object* x_3573; lean_object* x_3574; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3572 = 0;
x_3573 = lean_box(x_3572);
x_3574 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3574, 0, x_3573);
lean_ctor_set(x_3574, 1, x_3534);
return x_3574;
}
else
{
uint8_t x_3575; 
x_3575 = l_Lean_Level_isMVar(x_1);
if (x_3575 == 0)
{
uint8_t x_3576; 
x_3576 = l_Lean_Level_isMVar(x_2);
if (x_3576 == 0)
{
uint8_t x_3577; lean_object* x_3578; lean_object* x_3579; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3577 = 0;
x_3578 = lean_box(x_3577);
x_3579 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3579, 0, x_3578);
lean_ctor_set(x_3579, 1, x_3534);
return x_3579;
}
else
{
lean_object* x_3580; 
x_3580 = lean_box(0);
x_3538 = x_3580;
goto block_3569;
}
}
else
{
lean_object* x_3581; 
x_3581 = lean_box(0);
x_3538 = x_3581;
goto block_3569;
}
}
block_3569:
{
lean_object* x_3539; lean_object* x_3540; uint8_t x_3541; lean_object* x_3542; lean_object* x_3558; lean_object* x_3559; lean_object* x_3560; uint8_t x_3561; 
lean_dec(x_3538);
x_3539 = lean_mk_string("stuck");
x_3540 = lean_name_mk_string(x_3429, x_3539);
x_3558 = lean_st_ref_get(x_6, x_3534);
x_3559 = lean_ctor_get(x_3558, 0);
lean_inc(x_3559);
x_3560 = lean_ctor_get(x_3559, 3);
lean_inc(x_3560);
lean_dec(x_3559);
x_3561 = lean_ctor_get_uint8(x_3560, sizeof(void*)*1);
lean_dec(x_3560);
if (x_3561 == 0)
{
lean_object* x_3562; uint8_t x_3563; 
x_3562 = lean_ctor_get(x_3558, 1);
lean_inc(x_3562);
lean_dec(x_3558);
x_3563 = 0;
x_3541 = x_3563;
x_3542 = x_3562;
goto block_3557;
}
else
{
lean_object* x_3564; lean_object* x_3565; lean_object* x_3566; lean_object* x_3567; uint8_t x_3568; 
x_3564 = lean_ctor_get(x_3558, 1);
lean_inc(x_3564);
lean_dec(x_3558);
lean_inc(x_3540);
x_3565 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3540, x_3, x_4, x_5, x_6, x_3564);
x_3566 = lean_ctor_get(x_3565, 0);
lean_inc(x_3566);
x_3567 = lean_ctor_get(x_3565, 1);
lean_inc(x_3567);
lean_dec(x_3565);
x_3568 = lean_unbox(x_3566);
lean_dec(x_3566);
x_3541 = x_3568;
x_3542 = x_3567;
goto block_3557;
}
block_3557:
{
if (x_3541 == 0)
{
lean_object* x_3543; 
lean_dec(x_3540);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3543 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3542);
return x_3543;
}
else
{
lean_object* x_3544; lean_object* x_3545; lean_object* x_3546; lean_object* x_3547; lean_object* x_3548; lean_object* x_3549; lean_object* x_3550; lean_object* x_3551; lean_object* x_3552; lean_object* x_3553; lean_object* x_3554; lean_object* x_3555; lean_object* x_3556; 
x_3544 = lean_mk_string("");
x_3545 = l_Lean_stringToMessageData(x_3544);
lean_dec(x_3544);
x_3546 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3546, 0, x_1);
lean_inc(x_3545);
x_3547 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3547, 0, x_3545);
lean_ctor_set(x_3547, 1, x_3546);
x_3548 = lean_mk_string(" =?= ");
x_3549 = l_Lean_stringToMessageData(x_3548);
lean_dec(x_3548);
x_3550 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3550, 0, x_3547);
lean_ctor_set(x_3550, 1, x_3549);
x_3551 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3551, 0, x_2);
x_3552 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3552, 0, x_3550);
lean_ctor_set(x_3552, 1, x_3551);
x_3553 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3553, 0, x_3552);
lean_ctor_set(x_3553, 1, x_3545);
x_3554 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3540, x_3553, x_3, x_4, x_5, x_6, x_3542);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3555 = lean_ctor_get(x_3554, 1);
lean_inc(x_3555);
lean_dec(x_3554);
x_3556 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3555);
return x_3556;
}
}
}
}
else
{
lean_object* x_3582; lean_object* x_3583; lean_object* x_3584; uint8_t x_3585; lean_object* x_3586; lean_object* x_3587; 
lean_dec(x_3429);
x_3582 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3583 = lean_ctor_get(x_3582, 1);
lean_inc(x_3583);
if (lean_is_exclusive(x_3582)) {
 lean_ctor_release(x_3582, 0);
 lean_ctor_release(x_3582, 1);
 x_3584 = x_3582;
} else {
 lean_dec_ref(x_3582);
 x_3584 = lean_box(0);
}
x_3585 = 1;
x_3586 = lean_box(x_3585);
if (lean_is_scalar(x_3584)) {
 x_3587 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3587 = x_3584;
}
lean_ctor_set(x_3587, 0, x_3586);
lean_ctor_set(x_3587, 1, x_3583);
return x_3587;
}
}
else
{
lean_object* x_3588; lean_object* x_3589; lean_object* x_3590; uint8_t x_3591; lean_object* x_3592; lean_object* x_3593; 
lean_dec(x_3535);
lean_dec(x_3429);
x_3588 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3534);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3589 = lean_ctor_get(x_3588, 1);
lean_inc(x_3589);
if (lean_is_exclusive(x_3588)) {
 lean_ctor_release(x_3588, 0);
 lean_ctor_release(x_3588, 1);
 x_3590 = x_3588;
} else {
 lean_dec_ref(x_3588);
 x_3590 = lean_box(0);
}
x_3591 = 1;
x_3592 = lean_box(x_3591);
if (lean_is_scalar(x_3590)) {
 x_3593 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3593 = x_3590;
}
lean_ctor_set(x_3593, 0, x_3592);
lean_ctor_set(x_3593, 1, x_3589);
return x_3593;
}
}
}
}
else
{
lean_object* x_3594; lean_object* x_3595; uint8_t x_3596; uint8_t x_3597; 
x_3594 = lean_ctor_get(x_3454, 0);
x_3595 = lean_ctor_get(x_3454, 1);
lean_inc(x_3595);
lean_inc(x_3594);
lean_dec(x_3454);
x_3596 = lean_unbox(x_3594);
x_3597 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3596, x_3447);
if (x_3597 == 0)
{
uint8_t x_3598; uint8_t x_3599; uint8_t x_3600; lean_object* x_3601; lean_object* x_3602; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3598 = 1;
x_3599 = lean_unbox(x_3594);
lean_dec(x_3594);
x_3600 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3599, x_3598);
x_3601 = lean_box(x_3600);
x_3602 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3602, 0, x_3601);
lean_ctor_set(x_3602, 1, x_3595);
return x_3602;
}
else
{
lean_object* x_3603; lean_object* x_3604; lean_object* x_3605; lean_object* x_3606; lean_object* x_3607; lean_object* x_3608; lean_object* x_3609; uint8_t x_3610; 
lean_dec(x_3594);
x_3603 = lean_st_ref_get(x_6, x_3595);
x_3604 = lean_ctor_get(x_3603, 1);
lean_inc(x_3604);
lean_dec(x_3603);
x_3605 = lean_st_ref_get(x_4, x_3604);
x_3606 = lean_ctor_get(x_3605, 0);
lean_inc(x_3606);
x_3607 = lean_ctor_get(x_3605, 1);
lean_inc(x_3607);
if (lean_is_exclusive(x_3605)) {
 lean_ctor_release(x_3605, 0);
 lean_ctor_release(x_3605, 1);
 x_3608 = x_3605;
} else {
 lean_dec_ref(x_3605);
 x_3608 = lean_box(0);
}
x_3609 = lean_ctor_get(x_3606, 0);
lean_inc(x_3609);
lean_dec(x_3606);
lean_inc(x_3609);
x_3610 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3609, x_1);
if (x_3610 == 0)
{
uint8_t x_3611; 
x_3611 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3609, x_2);
if (x_3611 == 0)
{
lean_object* x_3612; lean_object* x_3644; uint8_t x_3645; 
x_3644 = lean_ctor_get(x_3, 0);
lean_inc(x_3644);
x_3645 = lean_ctor_get_uint8(x_3644, 4);
lean_dec(x_3644);
if (x_3645 == 0)
{
uint8_t x_3646; lean_object* x_3647; lean_object* x_3648; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3646 = 0;
x_3647 = lean_box(x_3646);
if (lean_is_scalar(x_3608)) {
 x_3648 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3648 = x_3608;
}
lean_ctor_set(x_3648, 0, x_3647);
lean_ctor_set(x_3648, 1, x_3607);
return x_3648;
}
else
{
uint8_t x_3649; 
x_3649 = l_Lean_Level_isMVar(x_1);
if (x_3649 == 0)
{
uint8_t x_3650; 
x_3650 = l_Lean_Level_isMVar(x_2);
if (x_3650 == 0)
{
uint8_t x_3651; lean_object* x_3652; lean_object* x_3653; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3651 = 0;
x_3652 = lean_box(x_3651);
if (lean_is_scalar(x_3608)) {
 x_3653 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3653 = x_3608;
}
lean_ctor_set(x_3653, 0, x_3652);
lean_ctor_set(x_3653, 1, x_3607);
return x_3653;
}
else
{
lean_object* x_3654; 
lean_dec(x_3608);
x_3654 = lean_box(0);
x_3612 = x_3654;
goto block_3643;
}
}
else
{
lean_object* x_3655; 
lean_dec(x_3608);
x_3655 = lean_box(0);
x_3612 = x_3655;
goto block_3643;
}
}
block_3643:
{
lean_object* x_3613; lean_object* x_3614; uint8_t x_3615; lean_object* x_3616; lean_object* x_3632; lean_object* x_3633; lean_object* x_3634; uint8_t x_3635; 
lean_dec(x_3612);
x_3613 = lean_mk_string("stuck");
x_3614 = lean_name_mk_string(x_3429, x_3613);
x_3632 = lean_st_ref_get(x_6, x_3607);
x_3633 = lean_ctor_get(x_3632, 0);
lean_inc(x_3633);
x_3634 = lean_ctor_get(x_3633, 3);
lean_inc(x_3634);
lean_dec(x_3633);
x_3635 = lean_ctor_get_uint8(x_3634, sizeof(void*)*1);
lean_dec(x_3634);
if (x_3635 == 0)
{
lean_object* x_3636; uint8_t x_3637; 
x_3636 = lean_ctor_get(x_3632, 1);
lean_inc(x_3636);
lean_dec(x_3632);
x_3637 = 0;
x_3615 = x_3637;
x_3616 = x_3636;
goto block_3631;
}
else
{
lean_object* x_3638; lean_object* x_3639; lean_object* x_3640; lean_object* x_3641; uint8_t x_3642; 
x_3638 = lean_ctor_get(x_3632, 1);
lean_inc(x_3638);
lean_dec(x_3632);
lean_inc(x_3614);
x_3639 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3614, x_3, x_4, x_5, x_6, x_3638);
x_3640 = lean_ctor_get(x_3639, 0);
lean_inc(x_3640);
x_3641 = lean_ctor_get(x_3639, 1);
lean_inc(x_3641);
lean_dec(x_3639);
x_3642 = lean_unbox(x_3640);
lean_dec(x_3640);
x_3615 = x_3642;
x_3616 = x_3641;
goto block_3631;
}
block_3631:
{
if (x_3615 == 0)
{
lean_object* x_3617; 
lean_dec(x_3614);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3617 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3616);
return x_3617;
}
else
{
lean_object* x_3618; lean_object* x_3619; lean_object* x_3620; lean_object* x_3621; lean_object* x_3622; lean_object* x_3623; lean_object* x_3624; lean_object* x_3625; lean_object* x_3626; lean_object* x_3627; lean_object* x_3628; lean_object* x_3629; lean_object* x_3630; 
x_3618 = lean_mk_string("");
x_3619 = l_Lean_stringToMessageData(x_3618);
lean_dec(x_3618);
x_3620 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3620, 0, x_1);
lean_inc(x_3619);
x_3621 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3621, 0, x_3619);
lean_ctor_set(x_3621, 1, x_3620);
x_3622 = lean_mk_string(" =?= ");
x_3623 = l_Lean_stringToMessageData(x_3622);
lean_dec(x_3622);
x_3624 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3624, 0, x_3621);
lean_ctor_set(x_3624, 1, x_3623);
x_3625 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3625, 0, x_2);
x_3626 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3626, 0, x_3624);
lean_ctor_set(x_3626, 1, x_3625);
x_3627 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3627, 0, x_3626);
lean_ctor_set(x_3627, 1, x_3619);
x_3628 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3614, x_3627, x_3, x_4, x_5, x_6, x_3616);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3629 = lean_ctor_get(x_3628, 1);
lean_inc(x_3629);
lean_dec(x_3628);
x_3630 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3629);
return x_3630;
}
}
}
}
else
{
lean_object* x_3656; lean_object* x_3657; lean_object* x_3658; uint8_t x_3659; lean_object* x_3660; lean_object* x_3661; 
lean_dec(x_3608);
lean_dec(x_3429);
x_3656 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3607);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3657 = lean_ctor_get(x_3656, 1);
lean_inc(x_3657);
if (lean_is_exclusive(x_3656)) {
 lean_ctor_release(x_3656, 0);
 lean_ctor_release(x_3656, 1);
 x_3658 = x_3656;
} else {
 lean_dec_ref(x_3656);
 x_3658 = lean_box(0);
}
x_3659 = 1;
x_3660 = lean_box(x_3659);
if (lean_is_scalar(x_3658)) {
 x_3661 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3661 = x_3658;
}
lean_ctor_set(x_3661, 0, x_3660);
lean_ctor_set(x_3661, 1, x_3657);
return x_3661;
}
}
else
{
lean_object* x_3662; lean_object* x_3663; lean_object* x_3664; uint8_t x_3665; lean_object* x_3666; lean_object* x_3667; 
lean_dec(x_3609);
lean_dec(x_3608);
lean_dec(x_3429);
x_3662 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3607);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3663 = lean_ctor_get(x_3662, 1);
lean_inc(x_3663);
if (lean_is_exclusive(x_3662)) {
 lean_ctor_release(x_3662, 0);
 lean_ctor_release(x_3662, 1);
 x_3664 = x_3662;
} else {
 lean_dec_ref(x_3662);
 x_3664 = lean_box(0);
}
x_3665 = 1;
x_3666 = lean_box(x_3665);
if (lean_is_scalar(x_3664)) {
 x_3667 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3667 = x_3664;
}
lean_ctor_set(x_3667, 0, x_3666);
lean_ctor_set(x_3667, 1, x_3663);
return x_3667;
}
}
}
}
else
{
uint8_t x_3668; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3668 = !lean_is_exclusive(x_3454);
if (x_3668 == 0)
{
return x_3454;
}
else
{
lean_object* x_3669; lean_object* x_3670; lean_object* x_3671; 
x_3669 = lean_ctor_get(x_3454, 0);
x_3670 = lean_ctor_get(x_3454, 1);
lean_inc(x_3670);
lean_inc(x_3669);
lean_dec(x_3454);
x_3671 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3671, 0, x_3669);
lean_ctor_set(x_3671, 1, x_3670);
return x_3671;
}
}
}
}
else
{
lean_object* x_3672; lean_object* x_3673; uint8_t x_3674; uint8_t x_3675; uint8_t x_3676; 
x_3672 = lean_ctor_get(x_3443, 0);
x_3673 = lean_ctor_get(x_3443, 1);
lean_inc(x_3673);
lean_inc(x_3672);
lean_dec(x_3443);
x_3674 = 2;
x_3675 = lean_unbox(x_3672);
x_3676 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3675, x_3674);
if (x_3676 == 0)
{
uint8_t x_3677; uint8_t x_3678; uint8_t x_3679; lean_object* x_3680; lean_object* x_3681; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3677 = 1;
x_3678 = lean_unbox(x_3672);
lean_dec(x_3672);
x_3679 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3678, x_3677);
x_3680 = lean_box(x_3679);
x_3681 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3681, 0, x_3680);
lean_ctor_set(x_3681, 1, x_3673);
return x_3681;
}
else
{
lean_object* x_3682; 
lean_dec(x_3672);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_3682 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(x_2, x_1, x_3, x_4, x_5, x_6, x_3673);
if (lean_obj_tag(x_3682) == 0)
{
lean_object* x_3683; lean_object* x_3684; lean_object* x_3685; uint8_t x_3686; uint8_t x_3687; 
x_3683 = lean_ctor_get(x_3682, 0);
lean_inc(x_3683);
x_3684 = lean_ctor_get(x_3682, 1);
lean_inc(x_3684);
if (lean_is_exclusive(x_3682)) {
 lean_ctor_release(x_3682, 0);
 lean_ctor_release(x_3682, 1);
 x_3685 = x_3682;
} else {
 lean_dec_ref(x_3682);
 x_3685 = lean_box(0);
}
x_3686 = lean_unbox(x_3683);
x_3687 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3686, x_3674);
if (x_3687 == 0)
{
uint8_t x_3688; uint8_t x_3689; uint8_t x_3690; lean_object* x_3691; lean_object* x_3692; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3688 = 1;
x_3689 = lean_unbox(x_3683);
lean_dec(x_3683);
x_3690 = l___private_Lean_Data_LBool_0__Lean_beqLBool____x40_Lean_Data_LBool___hyg_11_(x_3689, x_3688);
x_3691 = lean_box(x_3690);
if (lean_is_scalar(x_3685)) {
 x_3692 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3692 = x_3685;
}
lean_ctor_set(x_3692, 0, x_3691);
lean_ctor_set(x_3692, 1, x_3684);
return x_3692;
}
else
{
lean_object* x_3693; lean_object* x_3694; lean_object* x_3695; lean_object* x_3696; lean_object* x_3697; lean_object* x_3698; lean_object* x_3699; uint8_t x_3700; 
lean_dec(x_3685);
lean_dec(x_3683);
x_3693 = lean_st_ref_get(x_6, x_3684);
x_3694 = lean_ctor_get(x_3693, 1);
lean_inc(x_3694);
lean_dec(x_3693);
x_3695 = lean_st_ref_get(x_4, x_3694);
x_3696 = lean_ctor_get(x_3695, 0);
lean_inc(x_3696);
x_3697 = lean_ctor_get(x_3695, 1);
lean_inc(x_3697);
if (lean_is_exclusive(x_3695)) {
 lean_ctor_release(x_3695, 0);
 lean_ctor_release(x_3695, 1);
 x_3698 = x_3695;
} else {
 lean_dec_ref(x_3695);
 x_3698 = lean_box(0);
}
x_3699 = lean_ctor_get(x_3696, 0);
lean_inc(x_3699);
lean_dec(x_3696);
lean_inc(x_3699);
x_3700 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3699, x_1);
if (x_3700 == 0)
{
uint8_t x_3701; 
x_3701 = l_Lean_MetavarContext_hasAssignableLevelMVar(x_3699, x_2);
if (x_3701 == 0)
{
lean_object* x_3702; lean_object* x_3734; uint8_t x_3735; 
x_3734 = lean_ctor_get(x_3, 0);
lean_inc(x_3734);
x_3735 = lean_ctor_get_uint8(x_3734, 4);
lean_dec(x_3734);
if (x_3735 == 0)
{
uint8_t x_3736; lean_object* x_3737; lean_object* x_3738; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3736 = 0;
x_3737 = lean_box(x_3736);
if (lean_is_scalar(x_3698)) {
 x_3738 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3738 = x_3698;
}
lean_ctor_set(x_3738, 0, x_3737);
lean_ctor_set(x_3738, 1, x_3697);
return x_3738;
}
else
{
uint8_t x_3739; 
x_3739 = l_Lean_Level_isMVar(x_1);
if (x_3739 == 0)
{
uint8_t x_3740; 
x_3740 = l_Lean_Level_isMVar(x_2);
if (x_3740 == 0)
{
uint8_t x_3741; lean_object* x_3742; lean_object* x_3743; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3741 = 0;
x_3742 = lean_box(x_3741);
if (lean_is_scalar(x_3698)) {
 x_3743 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3743 = x_3698;
}
lean_ctor_set(x_3743, 0, x_3742);
lean_ctor_set(x_3743, 1, x_3697);
return x_3743;
}
else
{
lean_object* x_3744; 
lean_dec(x_3698);
x_3744 = lean_box(0);
x_3702 = x_3744;
goto block_3733;
}
}
else
{
lean_object* x_3745; 
lean_dec(x_3698);
x_3745 = lean_box(0);
x_3702 = x_3745;
goto block_3733;
}
}
block_3733:
{
lean_object* x_3703; lean_object* x_3704; uint8_t x_3705; lean_object* x_3706; lean_object* x_3722; lean_object* x_3723; lean_object* x_3724; uint8_t x_3725; 
lean_dec(x_3702);
x_3703 = lean_mk_string("stuck");
x_3704 = lean_name_mk_string(x_3429, x_3703);
x_3722 = lean_st_ref_get(x_6, x_3697);
x_3723 = lean_ctor_get(x_3722, 0);
lean_inc(x_3723);
x_3724 = lean_ctor_get(x_3723, 3);
lean_inc(x_3724);
lean_dec(x_3723);
x_3725 = lean_ctor_get_uint8(x_3724, sizeof(void*)*1);
lean_dec(x_3724);
if (x_3725 == 0)
{
lean_object* x_3726; uint8_t x_3727; 
x_3726 = lean_ctor_get(x_3722, 1);
lean_inc(x_3726);
lean_dec(x_3722);
x_3727 = 0;
x_3705 = x_3727;
x_3706 = x_3726;
goto block_3721;
}
else
{
lean_object* x_3728; lean_object* x_3729; lean_object* x_3730; lean_object* x_3731; uint8_t x_3732; 
x_3728 = lean_ctor_get(x_3722, 1);
lean_inc(x_3728);
lean_dec(x_3722);
lean_inc(x_3704);
x_3729 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_3704, x_3, x_4, x_5, x_6, x_3728);
x_3730 = lean_ctor_get(x_3729, 0);
lean_inc(x_3730);
x_3731 = lean_ctor_get(x_3729, 1);
lean_inc(x_3731);
lean_dec(x_3729);
x_3732 = lean_unbox(x_3730);
lean_dec(x_3730);
x_3705 = x_3732;
x_3706 = x_3731;
goto block_3721;
}
block_3721:
{
if (x_3705 == 0)
{
lean_object* x_3707; 
lean_dec(x_3704);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3707 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3706);
return x_3707;
}
else
{
lean_object* x_3708; lean_object* x_3709; lean_object* x_3710; lean_object* x_3711; lean_object* x_3712; lean_object* x_3713; lean_object* x_3714; lean_object* x_3715; lean_object* x_3716; lean_object* x_3717; lean_object* x_3718; lean_object* x_3719; lean_object* x_3720; 
x_3708 = lean_mk_string("");
x_3709 = l_Lean_stringToMessageData(x_3708);
lean_dec(x_3708);
x_3710 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3710, 0, x_1);
lean_inc(x_3709);
x_3711 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3711, 0, x_3709);
lean_ctor_set(x_3711, 1, x_3710);
x_3712 = lean_mk_string(" =?= ");
x_3713 = l_Lean_stringToMessageData(x_3712);
lean_dec(x_3712);
x_3714 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3714, 0, x_3711);
lean_ctor_set(x_3714, 1, x_3713);
x_3715 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3715, 0, x_2);
x_3716 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3716, 0, x_3714);
lean_ctor_set(x_3716, 1, x_3715);
x_3717 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3717, 0, x_3716);
lean_ctor_set(x_3717, 1, x_3709);
x_3718 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3704, x_3717, x_3, x_4, x_5, x_6, x_3706);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3719 = lean_ctor_get(x_3718, 1);
lean_inc(x_3719);
lean_dec(x_3718);
x_3720 = l_Lean_Meta_throwIsDefEqStuck___rarg(x_3719);
return x_3720;
}
}
}
}
else
{
lean_object* x_3746; lean_object* x_3747; lean_object* x_3748; uint8_t x_3749; lean_object* x_3750; lean_object* x_3751; 
lean_dec(x_3698);
lean_dec(x_3429);
x_3746 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3697);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3747 = lean_ctor_get(x_3746, 1);
lean_inc(x_3747);
if (lean_is_exclusive(x_3746)) {
 lean_ctor_release(x_3746, 0);
 lean_ctor_release(x_3746, 1);
 x_3748 = x_3746;
} else {
 lean_dec_ref(x_3746);
 x_3748 = lean_box(0);
}
x_3749 = 1;
x_3750 = lean_box(x_3749);
if (lean_is_scalar(x_3748)) {
 x_3751 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3751 = x_3748;
}
lean_ctor_set(x_3751, 0, x_3750);
lean_ctor_set(x_3751, 1, x_3747);
return x_3751;
}
}
else
{
lean_object* x_3752; lean_object* x_3753; lean_object* x_3754; uint8_t x_3755; lean_object* x_3756; lean_object* x_3757; 
lean_dec(x_3699);
lean_dec(x_3698);
lean_dec(x_3429);
x_3752 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_3697);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3753 = lean_ctor_get(x_3752, 1);
lean_inc(x_3753);
if (lean_is_exclusive(x_3752)) {
 lean_ctor_release(x_3752, 0);
 lean_ctor_release(x_3752, 1);
 x_3754 = x_3752;
} else {
 lean_dec_ref(x_3752);
 x_3754 = lean_box(0);
}
x_3755 = 1;
x_3756 = lean_box(x_3755);
if (lean_is_scalar(x_3754)) {
 x_3757 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3757 = x_3754;
}
lean_ctor_set(x_3757, 0, x_3756);
lean_ctor_set(x_3757, 1, x_3753);
return x_3757;
}
}
}
else
{
lean_object* x_3758; lean_object* x_3759; lean_object* x_3760; lean_object* x_3761; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3758 = lean_ctor_get(x_3682, 0);
lean_inc(x_3758);
x_3759 = lean_ctor_get(x_3682, 1);
lean_inc(x_3759);
if (lean_is_exclusive(x_3682)) {
 lean_ctor_release(x_3682, 0);
 lean_ctor_release(x_3682, 1);
 x_3760 = x_3682;
} else {
 lean_dec_ref(x_3682);
 x_3760 = lean_box(0);
}
if (lean_is_scalar(x_3760)) {
 x_3761 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3761 = x_3760;
}
lean_ctor_set(x_3761, 0, x_3758);
lean_ctor_set(x_3761, 1, x_3759);
return x_3761;
}
}
}
}
else
{
uint8_t x_3762; 
lean_dec(x_3429);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_3762 = !lean_is_exclusive(x_3443);
if (x_3762 == 0)
{
return x_3443;
}
else
{
lean_object* x_3763; lean_object* x_3764; lean_object* x_3765; 
x_3763 = lean_ctor_get(x_3443, 0);
x_3764 = lean_ctor_get(x_3443, 1);
lean_inc(x_3764);
lean_inc(x_3763);
lean_dec(x_3443);
x_3765 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3765, 0, x_3763);
lean_ctor_set(x_3765, 1, x_3764);
return x_3765;
}
}
}
}
}
block_3783:
{
if (x_3769 == 0)
{
lean_dec(x_3768);
x_3430 = x_3770;
goto block_3766;
}
else
{
lean_object* x_3771; lean_object* x_3772; lean_object* x_3773; lean_object* x_3774; lean_object* x_3775; lean_object* x_3776; lean_object* x_3777; lean_object* x_3778; lean_object* x_3779; lean_object* x_3780; lean_object* x_3781; lean_object* x_3782; 
x_3771 = lean_mk_string("");
x_3772 = l_Lean_stringToMessageData(x_3771);
lean_dec(x_3771);
lean_inc(x_1);
x_3773 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3773, 0, x_1);
lean_inc(x_3772);
x_3774 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3774, 0, x_3772);
lean_ctor_set(x_3774, 1, x_3773);
x_3775 = lean_mk_string(" =?= ");
x_3776 = l_Lean_stringToMessageData(x_3775);
lean_dec(x_3775);
x_3777 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3777, 0, x_3774);
lean_ctor_set(x_3777, 1, x_3776);
lean_inc(x_2);
x_3778 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3778, 0, x_2);
x_3779 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3779, 0, x_3777);
lean_ctor_set(x_3779, 1, x_3778);
x_3780 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3780, 0, x_3779);
lean_ctor_set(x_3780, 1, x_3772);
x_3781 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_3768, x_3780, x_3, x_4, x_5, x_6, x_3770);
x_3782 = lean_ctor_get(x_3781, 1);
lean_inc(x_3782);
lean_dec(x_3781);
x_3430 = x_3782;
goto block_3766;
}
}
}
else
{
lean_object* x_3795; lean_object* x_3796; lean_object* x_3797; uint8_t x_3798; lean_object* x_3799; lean_object* x_3800; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_3795 = lean_unsigned_to_nat(0u);
x_3796 = l_Lean_Level_getOffsetAux(x_1, x_3795);
lean_dec(x_1);
x_3797 = l_Lean_Level_getOffsetAux(x_2, x_3795);
lean_dec(x_2);
x_3798 = lean_nat_dec_eq(x_3796, x_3797);
lean_dec(x_3797);
lean_dec(x_3796);
x_3799 = lean_box(x_3798);
x_3800 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3800, 0, x_3799);
lean_ctor_set(x_3800, 1, x_7);
return x_3800;
}
}
}
}
}
lean_object* l_Lean_Meta_isListLevelDefEqAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = lean_apply_2(x_5, x_1, x_2);
return x_8;
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_apply_2(x_5, x_1, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_4(x_4, x_10, x_11, x_12, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Meta_isListLevelDefEqAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isListLevelDefEqAux_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isListLevelDefEqAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 1;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_Meta_isLevelDefEqAux(x_17, x_19, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_21, 0);
lean_dec(x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_22);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
x_1 = x_18;
x_2 = x_20;
x_7 = x_28;
goto _start;
}
}
else
{
uint8_t x_30; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_30 = !lean_is_exclusive(x_21);
if (x_30 == 0)
{
return x_21;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_21, 0);
x_32 = lean_ctor_get(x_21, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_21);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Meta_getPostponed___rarg(x_1, x_2, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_getResetPostponed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_6 = l_Lean_Meta_getPostponed___rarg(x_2, x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(32u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_10);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = 5;
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_13);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set_usize(x_14, 4, x_12);
x_15 = l_Lean_Meta_setPostponed(x_14, x_1, x_2, x_3, x_4, x_8);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_7);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_7);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_Lean_Meta_getResetPostponed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_getResetPostponed(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_3, x_5, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_2, x_9, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_1);
x_6 = l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1(x_1, x_2, x_5);
x_7 = lean_apply_1(x_1, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
return x_6;
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_215; lean_object* x_229; lean_object* x_230; size_t x_231; uint8_t x_232; 
x_6 = lean_ptr_addr(x_4);
x_7 = x_3 == 0 ? x_6 : x_6 % x_3;
x_229 = lean_ctor_get(x_5, 0);
lean_inc(x_229);
x_230 = lean_array_uget(x_229, x_7);
lean_dec(x_229);
x_231 = lean_ptr_addr(x_230);
lean_dec(x_230);
x_232 = x_231 == x_6;
if (x_232 == 0)
{
switch (lean_obj_tag(x_4)) {
case 3:
{
lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_233 = lean_ctor_get(x_4, 0);
lean_inc(x_233);
lean_inc(x_2);
x_234 = lean_apply_1(x_2, x_233);
x_235 = lean_unbox(x_234);
lean_dec(x_234);
if (x_235 == 0)
{
lean_object* x_236; 
x_236 = lean_box(0);
x_8 = x_236;
goto block_214;
}
else
{
uint8_t x_237; lean_object* x_238; 
lean_dec(x_2);
x_237 = 1;
x_238 = l_Lean_Expr_setPPUniverses(x_1, x_237);
x_215 = x_238;
goto block_228;
}
}
case 4:
{
lean_object* x_239; uint8_t x_240; uint8_t x_241; 
x_239 = lean_ctor_get(x_4, 1);
lean_inc(x_239);
x_240 = 0;
lean_inc(x_2);
x_241 = l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1(x_2, x_240, x_239);
if (x_241 == 0)
{
lean_object* x_242; 
x_242 = lean_box(0);
x_8 = x_242;
goto block_214;
}
else
{
uint8_t x_243; lean_object* x_244; 
lean_dec(x_2);
x_243 = 1;
x_244 = l_Lean_Expr_setPPUniverses(x_1, x_243);
x_215 = x_244;
goto block_228;
}
}
default: 
{
lean_object* x_245; 
x_245 = lean_box(0);
x_8 = x_245;
goto block_214;
}
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_246 = lean_ctor_get(x_5, 1);
lean_inc(x_246);
x_247 = lean_array_uget(x_246, x_7);
lean_dec(x_246);
x_248 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_5);
return x_248;
}
block_214:
{
lean_dec(x_8);
switch (lean_obj_tag(x_4)) {
case 5:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_9, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
x_15 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_10, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set_uint64(x_19, sizeof(void*)*2, x_11);
x_20 = lean_expr_update_app(x_19, x_13, x_17);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
x_24 = lean_array_uset(x_22, x_7, x_4);
lean_inc(x_20);
x_25 = lean_array_uset(x_23, x_7, x_20);
lean_ctor_set(x_18, 1, x_25);
lean_ctor_set(x_18, 0, x_24);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_array_uset(x_26, x_7, x_4);
lean_inc(x_20);
x_29 = lean_array_uset(x_27, x_7, x_20);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_15, 1, x_30);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_10);
lean_ctor_set_uint64(x_33, sizeof(void*)*2, x_11);
x_34 = lean_expr_update_app(x_33, x_13, x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_37 = x_32;
} else {
 lean_dec_ref(x_32);
 x_37 = lean_box(0);
}
x_38 = lean_array_uset(x_35, x_7, x_4);
lean_inc(x_34);
x_39 = lean_array_uset(x_36, x_7, x_34);
if (lean_is_scalar(x_37)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_37;
}
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
case 6:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_42 = lean_ctor_get(x_4, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_4, 2);
lean_inc(x_44);
x_45 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_43);
lean_inc(x_2);
lean_inc(x_1);
x_46 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_43, x_5);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_44);
x_49 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_44, x_48);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
x_53 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_43);
lean_ctor_set(x_53, 2, x_44);
lean_ctor_set_uint64(x_53, sizeof(void*)*3, x_45);
x_54 = (uint8_t)((x_45 << 24) >> 61);
x_55 = lean_expr_update_lambda(x_53, x_54, x_47, x_51);
x_56 = !lean_is_exclusive(x_52);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
x_59 = lean_array_uset(x_57, x_7, x_4);
lean_inc(x_55);
x_60 = lean_array_uset(x_58, x_7, x_55);
lean_ctor_set(x_52, 1, x_60);
lean_ctor_set(x_52, 0, x_59);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_52, 0);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_52);
x_63 = lean_array_uset(x_61, x_7, x_4);
lean_inc(x_55);
x_64 = lean_array_uset(x_62, x_7, x_55);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_49, 1, x_65);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_66 = lean_ctor_get(x_49, 0);
x_67 = lean_ctor_get(x_49, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_49);
x_68 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_68, 0, x_42);
lean_ctor_set(x_68, 1, x_43);
lean_ctor_set(x_68, 2, x_44);
lean_ctor_set_uint64(x_68, sizeof(void*)*3, x_45);
x_69 = (uint8_t)((x_45 << 24) >> 61);
x_70 = lean_expr_update_lambda(x_68, x_69, x_47, x_66);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_73 = x_67;
} else {
 lean_dec_ref(x_67);
 x_73 = lean_box(0);
}
x_74 = lean_array_uset(x_71, x_7, x_4);
lean_inc(x_70);
x_75 = lean_array_uset(x_72, x_7, x_70);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
case 7:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint64_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_78 = lean_ctor_get(x_4, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_4, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_4, 2);
lean_inc(x_80);
x_81 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_79);
lean_inc(x_2);
lean_inc(x_1);
x_82 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_79, x_5);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_80);
x_85 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_80, x_84);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; uint8_t x_92; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_ctor_get(x_85, 1);
x_89 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_89, 0, x_78);
lean_ctor_set(x_89, 1, x_79);
lean_ctor_set(x_89, 2, x_80);
lean_ctor_set_uint64(x_89, sizeof(void*)*3, x_81);
x_90 = (uint8_t)((x_81 << 24) >> 61);
x_91 = lean_expr_update_forall(x_89, x_90, x_83, x_87);
x_92 = !lean_is_exclusive(x_88);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_88, 0);
x_94 = lean_ctor_get(x_88, 1);
x_95 = lean_array_uset(x_93, x_7, x_4);
lean_inc(x_91);
x_96 = lean_array_uset(x_94, x_7, x_91);
lean_ctor_set(x_88, 1, x_96);
lean_ctor_set(x_88, 0, x_95);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_88, 0);
x_98 = lean_ctor_get(x_88, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_88);
x_99 = lean_array_uset(x_97, x_7, x_4);
lean_inc(x_91);
x_100 = lean_array_uset(x_98, x_7, x_91);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_85, 1, x_101);
lean_ctor_set(x_85, 0, x_91);
return x_85;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_102 = lean_ctor_get(x_85, 0);
x_103 = lean_ctor_get(x_85, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_85);
x_104 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_104, 0, x_78);
lean_ctor_set(x_104, 1, x_79);
lean_ctor_set(x_104, 2, x_80);
lean_ctor_set_uint64(x_104, sizeof(void*)*3, x_81);
x_105 = (uint8_t)((x_81 << 24) >> 61);
x_106 = lean_expr_update_forall(x_104, x_105, x_83, x_102);
x_107 = lean_ctor_get(x_103, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
x_110 = lean_array_uset(x_107, x_7, x_4);
lean_inc(x_106);
x_111 = lean_array_uset(x_108, x_7, x_106);
if (lean_is_scalar(x_109)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_109;
}
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_106);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
case 8:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint64_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_114 = lean_ctor_get(x_4, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_4, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_4, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_4, 3);
lean_inc(x_117);
x_118 = lean_ctor_get_uint64(x_4, sizeof(void*)*4);
lean_inc(x_115);
lean_inc(x_2);
lean_inc(x_1);
x_119 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_115, x_5);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_116);
lean_inc(x_2);
lean_inc(x_1);
x_122 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_116, x_121);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
lean_inc(x_117);
x_125 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_117, x_124);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = lean_ctor_get(x_125, 1);
x_129 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_115);
lean_ctor_set(x_129, 2, x_116);
lean_ctor_set(x_129, 3, x_117);
lean_ctor_set_uint64(x_129, sizeof(void*)*4, x_118);
x_130 = lean_expr_update_let(x_129, x_120, x_123, x_127);
x_131 = !lean_is_exclusive(x_128);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_128, 0);
x_133 = lean_ctor_get(x_128, 1);
x_134 = lean_array_uset(x_132, x_7, x_4);
lean_inc(x_130);
x_135 = lean_array_uset(x_133, x_7, x_130);
lean_ctor_set(x_128, 1, x_135);
lean_ctor_set(x_128, 0, x_134);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_136 = lean_ctor_get(x_128, 0);
x_137 = lean_ctor_get(x_128, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_128);
x_138 = lean_array_uset(x_136, x_7, x_4);
lean_inc(x_130);
x_139 = lean_array_uset(x_137, x_7, x_130);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_125, 1, x_140);
lean_ctor_set(x_125, 0, x_130);
return x_125;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_141 = lean_ctor_get(x_125, 0);
x_142 = lean_ctor_get(x_125, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_125);
x_143 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_143, 0, x_114);
lean_ctor_set(x_143, 1, x_115);
lean_ctor_set(x_143, 2, x_116);
lean_ctor_set(x_143, 3, x_117);
lean_ctor_set_uint64(x_143, sizeof(void*)*4, x_118);
x_144 = lean_expr_update_let(x_143, x_120, x_123, x_141);
x_145 = lean_ctor_get(x_142, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_142, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_147 = x_142;
} else {
 lean_dec_ref(x_142);
 x_147 = lean_box(0);
}
x_148 = lean_array_uset(x_145, x_7, x_4);
lean_inc(x_144);
x_149 = lean_array_uset(x_146, x_7, x_144);
if (lean_is_scalar(x_147)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_147;
}
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
case 10:
{
lean_object* x_152; lean_object* x_153; uint64_t x_154; lean_object* x_155; uint8_t x_156; 
x_152 = lean_ctor_get(x_4, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_4, 1);
lean_inc(x_153);
x_154 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_153);
x_155 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_153, x_5);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_ctor_get(x_155, 1);
x_159 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_159, 0, x_152);
lean_ctor_set(x_159, 1, x_153);
lean_ctor_set_uint64(x_159, sizeof(void*)*2, x_154);
x_160 = lean_expr_update_mdata(x_159, x_157);
x_161 = !lean_is_exclusive(x_158);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_158, 0);
x_163 = lean_ctor_get(x_158, 1);
x_164 = lean_array_uset(x_162, x_7, x_4);
lean_inc(x_160);
x_165 = lean_array_uset(x_163, x_7, x_160);
lean_ctor_set(x_158, 1, x_165);
lean_ctor_set(x_158, 0, x_164);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_166 = lean_ctor_get(x_158, 0);
x_167 = lean_ctor_get(x_158, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_158);
x_168 = lean_array_uset(x_166, x_7, x_4);
lean_inc(x_160);
x_169 = lean_array_uset(x_167, x_7, x_160);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set(x_155, 1, x_170);
lean_ctor_set(x_155, 0, x_160);
return x_155;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_171 = lean_ctor_get(x_155, 0);
x_172 = lean_ctor_get(x_155, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_155);
x_173 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_173, 0, x_152);
lean_ctor_set(x_173, 1, x_153);
lean_ctor_set_uint64(x_173, sizeof(void*)*2, x_154);
x_174 = lean_expr_update_mdata(x_173, x_171);
x_175 = lean_ctor_get(x_172, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_177 = x_172;
} else {
 lean_dec_ref(x_172);
 x_177 = lean_box(0);
}
x_178 = lean_array_uset(x_175, x_7, x_4);
lean_inc(x_174);
x_179 = lean_array_uset(x_176, x_7, x_174);
if (lean_is_scalar(x_177)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_177;
}
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_174);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
case 11:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; uint64_t x_185; lean_object* x_186; uint8_t x_187; 
x_182 = lean_ctor_get(x_4, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_4, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_4, 2);
lean_inc(x_184);
x_185 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_inc(x_184);
x_186 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_184, x_5);
x_187 = !lean_is_exclusive(x_186);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_188 = lean_ctor_get(x_186, 0);
x_189 = lean_ctor_get(x_186, 1);
x_190 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_190, 0, x_182);
lean_ctor_set(x_190, 1, x_183);
lean_ctor_set(x_190, 2, x_184);
lean_ctor_set_uint64(x_190, sizeof(void*)*3, x_185);
x_191 = lean_expr_update_proj(x_190, x_188);
x_192 = !lean_is_exclusive(x_189);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_193 = lean_ctor_get(x_189, 0);
x_194 = lean_ctor_get(x_189, 1);
x_195 = lean_array_uset(x_193, x_7, x_4);
lean_inc(x_191);
x_196 = lean_array_uset(x_194, x_7, x_191);
lean_ctor_set(x_189, 1, x_196);
lean_ctor_set(x_189, 0, x_195);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_189, 0);
x_198 = lean_ctor_get(x_189, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_189);
x_199 = lean_array_uset(x_197, x_7, x_4);
lean_inc(x_191);
x_200 = lean_array_uset(x_198, x_7, x_191);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
lean_ctor_set(x_186, 1, x_201);
lean_ctor_set(x_186, 0, x_191);
return x_186;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_202 = lean_ctor_get(x_186, 0);
x_203 = lean_ctor_get(x_186, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_186);
x_204 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_204, 0, x_182);
lean_ctor_set(x_204, 1, x_183);
lean_ctor_set(x_204, 2, x_184);
lean_ctor_set_uint64(x_204, sizeof(void*)*3, x_185);
x_205 = lean_expr_update_proj(x_204, x_202);
x_206 = lean_ctor_get(x_203, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_203, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_208 = x_203;
} else {
 lean_dec_ref(x_203);
 x_208 = lean_box(0);
}
x_209 = lean_array_uset(x_206, x_7, x_4);
lean_inc(x_205);
x_210 = lean_array_uset(x_207, x_7, x_205);
if (lean_is_scalar(x_208)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_208;
}
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_205);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
default: 
{
lean_object* x_213; 
lean_dec(x_2);
lean_dec(x_1);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_4);
lean_ctor_set(x_213, 1, x_5);
return x_213;
}
}
}
block_228:
{
uint8_t x_216; 
x_216 = !lean_is_exclusive(x_5);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_217 = lean_ctor_get(x_5, 0);
x_218 = lean_ctor_get(x_5, 1);
x_219 = lean_array_uset(x_217, x_7, x_4);
lean_inc(x_215);
x_220 = lean_array_uset(x_218, x_7, x_215);
lean_ctor_set(x_5, 1, x_220);
lean_ctor_set(x_5, 0, x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_215);
lean_ctor_set(x_221, 1, x_5);
return x_221;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_222 = lean_ctor_get(x_5, 0);
x_223 = lean_ctor_get(x_5, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_5);
x_224 = lean_array_uset(x_222, x_7, x_4);
lean_inc(x_215);
x_225 = lean_array_uset(x_223, x_7, x_215);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_215);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = 8192;
x_4 = l_Lean_Expr_ReplaceImpl_initCache;
lean_inc(x_1);
x_5 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_3, x_1, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__1(x_1, x_4, x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses___spec__2(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
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
lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___spec__1___rarg), 8, 0);
return x_2;
}
}
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 5)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_Lean_NameSet_contains(x_1, x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Lean_Level_any(x_2, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_12 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses(x_6, x_1);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l_Lean_Meta_instantiateMVars(x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_49; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_exposeRelevantUniverses(x_15, x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_12);
x_49 = l_Lean_Meta_inferType(x_12, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_17);
x_52 = l_Lean_Meta_inferType(x_17, x_7, x_8, x_9, x_10, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_mk_string("");
x_56 = l_Lean_stringToMessageData(x_55);
lean_dec(x_55);
x_57 = l_Lean_stringToMessageData(x_3);
lean_inc(x_56);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_inc(x_56);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
x_60 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_60, 0, x_4);
lean_inc(x_56);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string(" =?= ");
x_63 = l_Lean_stringToMessageData(x_62);
lean_dec(x_62);
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_65, 0, x_5);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_56);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_56);
x_68 = l_Lean_indentD(x_67);
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_59);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_string("\nwhile trying to unify");
x_71 = l_Lean_stringToMessageData(x_70);
lean_dec(x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_12);
lean_inc(x_56);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_56);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string(" : ");
x_76 = l_Lean_stringToMessageData(x_75);
lean_dec(x_75);
lean_inc(x_76);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_78, 0, x_50);
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
lean_inc(x_56);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_56);
x_81 = l_Lean_indentD(x_80);
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_72);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_mk_string("\nwith");
x_84 = l_Lean_stringToMessageData(x_83);
lean_dec(x_83);
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_86, 0, x_17);
lean_inc(x_56);
x_87 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_87, 0, x_56);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_76);
x_89 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_89, 0, x_53);
x_90 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
lean_inc(x_56);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_56);
x_92 = l_Lean_indentD(x_91);
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_85);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_56);
x_95 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_94, x_7, x_8, x_9, x_10, x_54);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_95;
}
else
{
lean_object* x_96; 
lean_dec(x_50);
x_96 = lean_ctor_get(x_52, 1);
lean_inc(x_96);
lean_dec(x_52);
x_18 = x_96;
goto block_48;
}
}
else
{
lean_object* x_97; 
x_97 = lean_ctor_get(x_49, 1);
lean_inc(x_97);
lean_dec(x_49);
x_18 = x_97;
goto block_48;
}
block_48:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_19 = lean_mk_string("");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = l_Lean_stringToMessageData(x_3);
lean_inc(x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_inc(x_20);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
x_24 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_24, 0, x_4);
lean_inc(x_20);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string(" =?= ");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_29, 0, x_5);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_inc(x_20);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_20);
x_32 = l_Lean_indentD(x_31);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_23);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_string("\nwhile trying to unify");
x_35 = l_Lean_stringToMessageData(x_34);
lean_dec(x_34);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_12);
x_38 = l_Lean_indentD(x_37);
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("\nwith");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_17);
x_44 = l_Lean_indentD(x_43);
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_20);
x_47 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_46, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_47;
}
}
else
{
uint8_t x_98; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_14);
if (x_98 == 0)
{
return x_14;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_14, 0);
x_100 = lean_ctor_get(x_14, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_14);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_mk_string("");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = l_Lean_stringToMessageData(x_1);
lean_dec(x_1);
lean_inc(x_10);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_inc(x_10);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_inc(x_10);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string(" =?= ");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
lean_inc(x_10);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_10);
x_24 = l_Lean_indentD(x_23);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_10);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_7);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_28 = lean_ctor_get(x_8, 0);
lean_inc(x_28);
lean_dec(x_8);
x_29 = lean_ctor_get(x_28, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_2, 2);
lean_inc(x_32);
lean_dec(x_2);
x_33 = l_Lean_NameSet_empty;
lean_inc(x_32);
x_34 = l_Lean_Level_collectMVars(x_32, x_33);
lean_inc(x_31);
x_35 = l_Lean_Level_collectMVars(x_31, x_34);
x_36 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__2___boxed), 2, 1);
lean_closure_set(x_36, 0, x_35);
x_37 = lean_ctor_get(x_28, 0);
lean_inc(x_37);
x_38 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVars), 6, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3___boxed), 11, 5);
lean_closure_set(x_39, 0, x_36);
lean_closure_set(x_39, 1, x_28);
lean_closure_set(x_39, 2, x_1);
lean_closure_set(x_39, 3, x_31);
lean_closure_set(x_39, 4, x_32);
x_40 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_40, 0, x_38);
lean_closure_set(x_40, 1, x_39);
x_41 = l_Lean_Meta_withLCtx___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___spec__1___rarg(x_29, x_30, x_40, x_3, x_4, x_5, x_6, x_7);
return x_41;
}
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__2(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Meta_mkLevelStuckErrorMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_mk_string("stuck at solving universe constraint");
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_mkLevelErrorMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_mk_string("failed to solve universe constraint");
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_7 < x_6;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_uget(x_5, x_7);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 1);
x_19 = lean_ctor_get(x_8, 0);
lean_dec(x_19);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_18);
lean_inc(x_2);
x_20 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2(x_1, x_2, x_3, x_16, x_18, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_8, 0, x_24);
lean_ctor_set(x_20, 0, x_8);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_8, 0, x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_8);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; 
lean_dec(x_18);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_dec(x_20);
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
lean_dec(x_21);
lean_inc(x_4);
lean_ctor_set(x_8, 1, x_29);
lean_ctor_set(x_8, 0, x_4);
x_30 = 1;
x_31 = x_7 + x_30;
x_7 = x_31;
x_13 = x_28;
goto _start;
}
}
else
{
uint8_t x_33; 
lean_free_object(x_8);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_20);
if (x_33 == 0)
{
return x_20;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_20, 0);
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_20);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_8, 1);
lean_inc(x_37);
lean_dec(x_8);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_37);
lean_inc(x_2);
x_38 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2(x_1, x_2, x_3, x_16, x_37, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_16);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_41 = x_38;
} else {
 lean_dec_ref(x_38);
 x_41 = lean_box(0);
}
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_37);
if (lean_is_scalar(x_41)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_41;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_40);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; 
lean_dec(x_37);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_dec(x_38);
x_46 = lean_ctor_get(x_39, 0);
lean_inc(x_46);
lean_dec(x_39);
lean_inc(x_4);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_46);
x_48 = 1;
x_49 = x_7 + x_48;
x_7 = x_49;
x_8 = x_47;
x_13 = x_45;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_51 = lean_ctor_get(x_38, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_38, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_53 = x_38;
} else {
 lean_dec_ref(x_38);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_6 < x_5;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_15 = lean_array_uget(x_4, x_6);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_17 = x_7;
} else {
 lean_dec_ref(x_7);
 x_17 = lean_box(0);
}
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_15, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_15, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_8, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_8, 2);
lean_inc(x_34);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_31);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_36 = l_Lean_Meta_isLevelDefEqAux(x_29, x_30, x_35, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
if (x_1 == 0)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_15);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = 0;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_18 = x_45;
x_19 = x_39;
goto block_28;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_ctor_get(x_36, 1);
lean_inc(x_46);
lean_dec(x_36);
x_47 = lean_mk_string("failed to solve universe constraint");
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_48 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(x_47, x_15, x_8, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_49, x_8, x_9, x_10, x_11, x_50);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
return x_51;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
else
{
uint8_t x_56; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_56 = !lean_is_exclusive(x_48);
if (x_56 == 0)
{
return x_48;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_48, 0);
x_58 = lean_ctor_get(x_48, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_48);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_15);
x_60 = lean_ctor_get(x_36, 1);
lean_inc(x_60);
lean_dec(x_36);
lean_inc(x_2);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_2);
x_18 = x_61;
x_19 = x_60;
goto block_28;
}
}
else
{
uint8_t x_62; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_36);
if (x_62 == 0)
{
return x_36;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_36, 0);
x_64 = lean_ctor_get(x_36, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_36);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
block_28:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_18);
if (lean_is_scalar(x_17)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_17;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
lean_dec(x_16);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
lean_inc(x_3);
if (lean_is_scalar(x_17)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_17;
}
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_23);
x_25 = 1;
x_26 = x_6 + x_25;
x_6 = x_26;
x_7 = x_24;
x_12 = x_19;
goto _start;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
x_14 = lean_array_get_size(x_11);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__3(x_1, x_2, x_3, x_12, x_11, x_15, x_16, x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_box(0);
x_23 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(x_21, x_22, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_dec(x_17);
x_28 = lean_ctor_get(x_19, 0);
lean_inc(x_28);
lean_dec(x_19);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; size_t x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_4, 0);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_5);
x_37 = lean_array_get_size(x_34);
x_38 = lean_usize_of_nat(x_37);
lean_dec(x_37);
x_39 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_40 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4(x_1, x_2, x_35, x_34, x_38, x_39, x_36, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_box(0);
x_46 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(x_44, x_45, x_6, x_7, x_8, x_9, x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_46;
}
else
{
uint8_t x_47; 
lean_dec(x_41);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_47 = !lean_is_exclusive(x_40);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_40, 0);
lean_dec(x_48);
x_49 = lean_ctor_get(x_42, 0);
lean_inc(x_49);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_49);
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_40, 1);
lean_inc(x_50);
lean_dec(x_40);
x_51 = lean_ctor_get(x_42, 0);
lean_inc(x_51);
lean_dec(x_42);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_40);
if (x_53 == 0)
{
return x_40;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_40, 0);
x_55 = lean_ctor_get(x_40, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_40);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__5(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_6 < x_5;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_15 = lean_array_uget(x_4, x_6);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_17 = x_7;
} else {
 lean_dec_ref(x_7);
 x_17 = lean_box(0);
}
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_15, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_15, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_8, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_8, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_8, 2);
lean_inc(x_35);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_36, 3, x_32);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_37 = l_Lean_Meta_isLevelDefEqAux(x_30, x_31, x_36, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
if (x_1 == 0)
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_18 = x_46;
x_19 = x_40;
goto block_29;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_dec(x_37);
x_48 = lean_mk_string("failed to solve universe constraint");
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_49 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(x_48, x_15, x_8, x_9, x_10, x_11, x_47);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_50, x_8, x_9, x_10, x_11, x_51);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
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
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_57 = !lean_is_exclusive(x_49);
if (x_57 == 0)
{
return x_49;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_49, 0);
x_59 = lean_ctor_get(x_49, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_49);
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
lean_object* x_61; lean_object* x_62; 
lean_dec(x_15);
x_61 = lean_ctor_get(x_37, 1);
lean_inc(x_61);
lean_dec(x_37);
lean_inc(x_2);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_2);
x_18 = x_62;
x_19 = x_61;
goto block_29;
}
}
else
{
uint8_t x_63; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_37);
if (x_63 == 0)
{
return x_37;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_37, 0);
x_65 = lean_ctor_get(x_37, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_37);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
block_29:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
if (lean_is_scalar(x_17)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_17;
}
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; 
lean_dec(x_16);
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
lean_dec(x_18);
lean_inc(x_3);
if (lean_is_scalar(x_17)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_17;
}
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_24);
x_26 = 1;
x_27 = x_6 + x_26;
x_6 = x_27;
x_7 = x_25;
x_12 = x_19;
goto _start;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2(x_1, x_2, x_4, x_10, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_3, 1);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
x_24 = lean_array_get_size(x_21);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = 0;
x_27 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__5(x_1, x_2, x_22, x_21, x_25, x_26, x_23, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_27, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_28);
x_36 = !lean_is_exclusive(x_27);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_27, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_29, 0);
lean_inc(x_38);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_38);
return x_27;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_27, 1);
lean_inc(x_39);
lean_dec(x_27);
x_40 = lean_ctor_get(x_29, 0);
lean_inc(x_40);
lean_dec(x_29);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_27);
if (x_42 == 0)
{
return x_27;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_27, 0);
x_44 = lean_ctor_get(x_27, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_27);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg___boxed), 2, 0);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__9(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_7 < x_6;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_uget(x_5, x_7);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 1);
x_19 = lean_ctor_get(x_8, 0);
lean_dec(x_19);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_18);
lean_inc(x_2);
x_20 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8(x_1, x_2, x_3, x_16, x_18, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_8, 0, x_24);
lean_ctor_set(x_20, 0, x_8);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_8, 0, x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_8);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; 
lean_dec(x_18);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_dec(x_20);
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
lean_dec(x_21);
lean_inc(x_4);
lean_ctor_set(x_8, 1, x_29);
lean_ctor_set(x_8, 0, x_4);
x_30 = 1;
x_31 = x_7 + x_30;
x_7 = x_31;
x_13 = x_28;
goto _start;
}
}
else
{
uint8_t x_33; 
lean_free_object(x_8);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_20);
if (x_33 == 0)
{
return x_20;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_20, 0);
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_20);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_8, 1);
lean_inc(x_37);
lean_dec(x_8);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_37);
lean_inc(x_2);
x_38 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8(x_1, x_2, x_3, x_16, x_37, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_16);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_41 = x_38;
} else {
 lean_dec_ref(x_38);
 x_41 = lean_box(0);
}
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_37);
if (lean_is_scalar(x_41)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_41;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_40);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; 
lean_dec(x_37);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_dec(x_38);
x_46 = lean_ctor_get(x_39, 0);
lean_inc(x_46);
lean_dec(x_39);
lean_inc(x_4);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_46);
x_48 = 1;
x_49 = x_7 + x_48;
x_7 = x_49;
x_8 = x_47;
x_13 = x_45;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_51 = lean_ctor_get(x_38, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_38, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_53 = x_38;
} else {
 lean_dec_ref(x_38);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__10(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_6 < x_5;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_15 = lean_array_uget(x_4, x_6);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_17 = x_7;
} else {
 lean_dec_ref(x_7);
 x_17 = lean_box(0);
}
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_15, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_15, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_8, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_8, 2);
lean_inc(x_34);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_31);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_36 = l_Lean_Meta_isLevelDefEqAux(x_29, x_30, x_35, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
if (x_1 == 0)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_15);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = 0;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_18 = x_45;
x_19 = x_39;
goto block_28;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_ctor_get(x_36, 1);
lean_inc(x_46);
lean_dec(x_36);
x_47 = lean_mk_string("failed to solve universe constraint");
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_48 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(x_47, x_15, x_8, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_49, x_8, x_9, x_10, x_11, x_50);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
return x_51;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
else
{
uint8_t x_56; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_56 = !lean_is_exclusive(x_48);
if (x_56 == 0)
{
return x_48;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_48, 0);
x_58 = lean_ctor_get(x_48, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_48);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_15);
x_60 = lean_ctor_get(x_36, 1);
lean_inc(x_60);
lean_dec(x_36);
lean_inc(x_2);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_2);
x_18 = x_61;
x_19 = x_60;
goto block_28;
}
}
else
{
uint8_t x_62; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_36);
if (x_62 == 0)
{
return x_36;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_36, 0);
x_64 = lean_ctor_get(x_36, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_36);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
block_28:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_18);
if (lean_is_scalar(x_17)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_17;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
lean_dec(x_16);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
lean_inc(x_3);
if (lean_is_scalar(x_17)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_17;
}
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_23);
x_25 = 1;
x_26 = x_6 + x_25;
x_6 = x_26;
x_7 = x_24;
x_12 = x_19;
goto _start;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
x_14 = lean_array_get_size(x_11);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__9(x_1, x_2, x_3, x_12, x_11, x_15, x_16, x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_box(0);
x_23 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(x_21, x_22, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_dec(x_17);
x_28 = lean_ctor_get(x_19, 0);
lean_inc(x_28);
lean_dec(x_19);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; size_t x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_4, 0);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_5);
x_37 = lean_array_get_size(x_34);
x_38 = lean_usize_of_nat(x_37);
lean_dec(x_37);
x_39 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_40 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__10(x_1, x_2, x_35, x_34, x_38, x_39, x_36, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_box(0);
x_46 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(x_44, x_45, x_6, x_7, x_8, x_9, x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_46;
}
else
{
uint8_t x_47; 
lean_dec(x_41);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_47 = !lean_is_exclusive(x_40);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_40, 0);
lean_dec(x_48);
x_49 = lean_ctor_get(x_42, 0);
lean_inc(x_49);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_49);
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_40, 1);
lean_inc(x_50);
lean_dec(x_40);
x_51 = lean_ctor_get(x_42, 0);
lean_inc(x_51);
lean_dec(x_42);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_40);
if (x_53 == 0)
{
return x_40;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_40, 0);
x_55 = lean_ctor_get(x_40, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_40);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__11(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_6 < x_5;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_15 = lean_array_uget(x_4, x_6);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_17 = x_7;
} else {
 lean_dec_ref(x_7);
 x_17 = lean_box(0);
}
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_15, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_15, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_8, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_8, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_8, 2);
lean_inc(x_35);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_36, 3, x_32);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_37 = l_Lean_Meta_isLevelDefEqAux(x_30, x_31, x_36, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
if (x_1 == 0)
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_18 = x_46;
x_19 = x_40;
goto block_29;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_dec(x_37);
x_48 = lean_mk_string("failed to solve universe constraint");
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_49 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore(x_48, x_15, x_8, x_9, x_10, x_11, x_47);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_50, x_8, x_9, x_10, x_11, x_51);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
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
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_57 = !lean_is_exclusive(x_49);
if (x_57 == 0)
{
return x_49;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_49, 0);
x_59 = lean_ctor_get(x_49, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_49);
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
lean_object* x_61; lean_object* x_62; 
lean_dec(x_15);
x_61 = lean_ctor_get(x_37, 1);
lean_inc(x_61);
lean_dec(x_37);
lean_inc(x_2);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_2);
x_18 = x_62;
x_19 = x_61;
goto block_29;
}
}
else
{
uint8_t x_63; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_37);
if (x_63 == 0)
{
return x_37;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_37, 0);
x_65 = lean_ctor_get(x_37, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_37);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
block_29:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
if (lean_is_scalar(x_17)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_17;
}
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; 
lean_dec(x_16);
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
lean_dec(x_18);
lean_inc(x_3);
if (lean_is_scalar(x_17)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_17;
}
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_24);
x_26 = 1;
x_27 = x_6 + x_26;
x_6 = x_27;
x_7 = x_25;
x_12 = x_19;
goto _start;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__7(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8(x_1, x_2, x_4, x_10, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_3, 1);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
x_24 = lean_array_get_size(x_21);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = 0;
x_27 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__11(x_1, x_2, x_22, x_21, x_25, x_26, x_23, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_27, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_28);
x_36 = !lean_is_exclusive(x_27);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_27, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_29, 0);
lean_inc(x_38);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_38);
return x_27;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_27, 1);
lean_inc(x_39);
lean_dec(x_27);
x_40 = lean_ctor_get(x_29, 0);
lean_inc(x_40);
lean_dec(x_29);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_27);
if (x_42 == 0)
{
return x_27;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_27, 0);
x_44 = lean_ctor_get(x_27, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_27);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
return x_11;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_11);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_take(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_10, 3);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = l_Std_PersistentArray_isEmpty___rarg(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_18 = lean_mk_string("[");
x_19 = l_Lean_stringToMessageData(x_18);
lean_dec(x_18);
lean_inc(x_2);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_2);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_mk_string("] ");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Std_PersistentArray_toArray___rarg(x_16);
lean_dec(x_16);
x_26 = lean_array_get_size(x_25);
x_27 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_28 = 0;
x_29 = x_25;
x_30 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_27, x_28, x_29);
x_31 = x_30;
x_32 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_24);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_string("");
x_35 = l_Lean_stringToMessageData(x_34);
lean_dec(x_34);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Std_PersistentArray_push___rarg(x_1, x_38);
lean_ctor_set(x_11, 0, x_39);
x_40 = lean_st_ref_set(x_7, x_10, x_12);
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
else
{
lean_object* x_47; uint8_t x_48; 
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_11, 0, x_1);
x_47 = lean_st_ref_set(x_7, x_10, x_12);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
x_50 = lean_box(0);
lean_ctor_set(x_47, 0, x_50);
return x_47;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_dec(x_47);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
else
{
uint8_t x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
x_55 = lean_ctor_get(x_11, 0);
lean_inc(x_55);
lean_dec(x_11);
x_56 = l_Std_PersistentArray_isEmpty___rarg(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; size_t x_66; size_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_57 = lean_mk_string("[");
x_58 = l_Lean_stringToMessageData(x_57);
lean_dec(x_57);
lean_inc(x_2);
x_59 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_59, 0, x_2);
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string("] ");
x_62 = l_Lean_stringToMessageData(x_61);
lean_dec(x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Std_PersistentArray_toArray___rarg(x_55);
lean_dec(x_55);
x_65 = lean_array_get_size(x_64);
x_66 = lean_usize_of_nat(x_65);
lean_dec(x_65);
x_67 = 0;
x_68 = x_64;
x_69 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_66, x_67, x_68);
x_70 = x_69;
x_71 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_63);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("");
x_74 = l_Lean_stringToMessageData(x_73);
lean_dec(x_73);
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_76, 0, x_2);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_3);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Std_PersistentArray_push___rarg(x_1, x_77);
x_79 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set_uint8(x_79, sizeof(void*)*1, x_54);
lean_ctor_set(x_10, 3, x_79);
x_80 = lean_st_ref_set(x_7, x_10, x_12);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
x_83 = lean_box(0);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_55);
lean_dec(x_3);
lean_dec(x_2);
x_85 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set_uint8(x_85, sizeof(void*)*1, x_54);
lean_ctor_set(x_10, 3, x_85);
x_86 = lean_st_ref_set(x_7, x_10, x_12);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_88 = x_86;
} else {
 lean_dec_ref(x_86);
 x_88 = lean_box(0);
}
x_89 = lean_box(0);
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_88;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_91 = lean_ctor_get(x_10, 0);
x_92 = lean_ctor_get(x_10, 1);
x_93 = lean_ctor_get(x_10, 2);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_10);
x_94 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
x_95 = lean_ctor_get(x_11, 0);
lean_inc(x_95);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_96 = x_11;
} else {
 lean_dec_ref(x_11);
 x_96 = lean_box(0);
}
x_97 = l_Std_PersistentArray_isEmpty___rarg(x_95);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; size_t x_107; size_t x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_98 = lean_mk_string("[");
x_99 = l_Lean_stringToMessageData(x_98);
lean_dec(x_98);
lean_inc(x_2);
x_100 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_100, 0, x_2);
x_101 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_string("] ");
x_103 = l_Lean_stringToMessageData(x_102);
lean_dec(x_102);
x_104 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_Std_PersistentArray_toArray___rarg(x_95);
lean_dec(x_95);
x_106 = lean_array_get_size(x_105);
x_107 = lean_usize_of_nat(x_106);
lean_dec(x_106);
x_108 = 0;
x_109 = x_105;
x_110 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_107, x_108, x_109);
x_111 = x_110;
x_112 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_112, 0, x_111);
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_104);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_mk_string("");
x_115 = l_Lean_stringToMessageData(x_114);
lean_dec(x_114);
x_116 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_117, 0, x_2);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_3);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Std_PersistentArray_push___rarg(x_1, x_118);
if (lean_is_scalar(x_96)) {
 x_120 = lean_alloc_ctor(0, 1, 1);
} else {
 x_120 = x_96;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set_uint8(x_120, sizeof(void*)*1, x_94);
x_121 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_121, 0, x_91);
lean_ctor_set(x_121, 1, x_92);
lean_ctor_set(x_121, 2, x_93);
lean_ctor_set(x_121, 3, x_120);
x_122 = lean_st_ref_set(x_7, x_121, x_12);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_124 = x_122;
} else {
 lean_dec_ref(x_122);
 x_124 = lean_box(0);
}
x_125 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_124;
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_123);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_95);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_96)) {
 x_127 = lean_alloc_ctor(0, 1, 1);
} else {
 x_127 = x_96;
}
lean_ctor_set(x_127, 0, x_1);
lean_ctor_set_uint8(x_127, sizeof(void*)*1, x_94);
x_128 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_128, 0, x_91);
lean_ctor_set(x_128, 1, x_92);
lean_ctor_set(x_128, 2, x_93);
lean_ctor_set(x_128, 3, x_127);
x_129 = lean_st_ref_set(x_7, x_128, x_12);
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
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 1;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_292; lean_object* x_293; lean_object* x_294; uint8_t x_295; 
x_7 = lean_box(0);
x_8 = lean_mk_string("Meta");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("isLevelDefEq");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("postponed");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("step");
x_15 = lean_name_mk_string(x_13, x_14);
x_292 = lean_st_ref_get(x_5, x_6);
x_293 = lean_ctor_get(x_292, 0);
lean_inc(x_293);
x_294 = lean_ctor_get(x_293, 3);
lean_inc(x_294);
lean_dec(x_293);
x_295 = lean_ctor_get_uint8(x_294, sizeof(void*)*1);
lean_dec(x_294);
if (x_295 == 0)
{
lean_object* x_296; uint8_t x_297; 
x_296 = lean_ctor_get(x_292, 1);
lean_inc(x_296);
lean_dec(x_292);
x_297 = 0;
x_16 = x_297;
x_17 = x_296;
goto block_291;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; uint8_t x_302; 
x_298 = lean_ctor_get(x_292, 1);
lean_inc(x_298);
lean_dec(x_292);
lean_inc(x_15);
x_299 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_15, x_2, x_3, x_4, x_5, x_298);
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec(x_299);
x_302 = lean_unbox(x_300);
lean_dec(x_300);
x_16 = x_302;
x_17 = x_301;
goto block_291;
}
block_291:
{
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_15);
x_18 = lean_st_ref_get(x_5, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 3);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get_uint8(x_20, sizeof(void*)*1);
lean_dec(x_20);
x_23 = lean_st_ref_take(x_5, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 3);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_24, 3);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_71; lean_object* x_72; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_30 = 0;
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_30);
x_31 = lean_st_ref_set(x_5, x_24, x_26);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_105 = l_Lean_Meta_getResetPostponed(x_2, x_3, x_4, x_5, x_32);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = lean_box(0);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_5);
lean_inc(x_110);
x_111 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1(x_1, x_110, x_106, x_110, x_2, x_3, x_4, x_5, x_107);
lean_dec(x_106);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
lean_dec(x_112);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_dec(x_111);
x_115 = 1;
x_33 = x_115;
x_34 = x_114;
goto block_70;
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
lean_dec(x_111);
x_117 = lean_ctor_get(x_113, 0);
lean_inc(x_117);
lean_dec(x_113);
x_118 = lean_unbox(x_117);
lean_dec(x_117);
x_33 = x_118;
x_34 = x_116;
goto block_70;
}
}
else
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_111, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_111, 1);
lean_inc(x_120);
lean_dec(x_111);
x_71 = x_119;
x_72 = x_120;
goto block_104;
}
block_70:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_35 = lean_st_ref_get(x_5, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_st_ref_take(x_5, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 3);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_38, 3);
lean_dec(x_42);
x_43 = !lean_is_exclusive(x_39);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
lean_ctor_set_uint8(x_39, sizeof(void*)*1, x_22);
x_44 = lean_st_ref_set(x_5, x_38, x_40);
lean_dec(x_5);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
x_47 = lean_box(x_33);
lean_ctor_set(x_44, 0, x_47);
return x_44;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_dec(x_44);
x_49 = lean_box(x_33);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_39, 0);
lean_inc(x_51);
lean_dec(x_39);
x_52 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_22);
lean_ctor_set(x_38, 3, x_52);
x_53 = lean_st_ref_set(x_5, x_38, x_40);
lean_dec(x_5);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
x_56 = lean_box(x_33);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_58 = lean_ctor_get(x_38, 0);
x_59 = lean_ctor_get(x_38, 1);
x_60 = lean_ctor_get(x_38, 2);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_38);
x_61 = lean_ctor_get(x_39, 0);
lean_inc(x_61);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 x_62 = x_39;
} else {
 lean_dec_ref(x_39);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(0, 1, 1);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_22);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_58);
lean_ctor_set(x_64, 1, x_59);
lean_ctor_set(x_64, 2, x_60);
lean_ctor_set(x_64, 3, x_63);
x_65 = lean_st_ref_set(x_5, x_64, x_40);
lean_dec(x_5);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
x_68 = lean_box(x_33);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
block_104:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_73 = lean_st_ref_get(x_5, x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_st_ref_take(x_5, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_76, 3);
lean_inc(x_77);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_dec(x_75);
x_79 = !lean_is_exclusive(x_76);
if (x_79 == 0)
{
lean_object* x_80; uint8_t x_81; 
x_80 = lean_ctor_get(x_76, 3);
lean_dec(x_80);
x_81 = !lean_is_exclusive(x_77);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
lean_ctor_set_uint8(x_77, sizeof(void*)*1, x_22);
x_82 = lean_st_ref_set(x_5, x_76, x_78);
lean_dec(x_5);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
lean_ctor_set_tag(x_82, 1);
lean_ctor_set(x_82, 0, x_71);
return x_82;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_71);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_77, 0);
lean_inc(x_87);
lean_dec(x_77);
x_88 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set_uint8(x_88, sizeof(void*)*1, x_22);
lean_ctor_set(x_76, 3, x_88);
x_89 = lean_st_ref_set(x_5, x_76, x_78);
lean_dec(x_5);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_91 = x_89;
} else {
 lean_dec_ref(x_89);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
 lean_ctor_set_tag(x_92, 1);
}
lean_ctor_set(x_92, 0, x_71);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_93 = lean_ctor_get(x_76, 0);
x_94 = lean_ctor_get(x_76, 1);
x_95 = lean_ctor_get(x_76, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_76);
x_96 = lean_ctor_get(x_77, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 x_97 = x_77;
} else {
 lean_dec_ref(x_77);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 1, 1);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set_uint8(x_98, sizeof(void*)*1, x_22);
x_99 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_99, 0, x_93);
lean_ctor_set(x_99, 1, x_94);
lean_ctor_set(x_99, 2, x_95);
lean_ctor_set(x_99, 3, x_98);
x_100 = lean_st_ref_set(x_5, x_99, x_78);
lean_dec(x_5);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_102 = x_100;
} else {
 lean_dec_ref(x_100);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
 lean_ctor_set_tag(x_103, 1);
}
lean_ctor_set(x_103, 0, x_71);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
}
else
{
lean_object* x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_148; lean_object* x_149; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_121 = lean_ctor_get(x_25, 0);
lean_inc(x_121);
lean_dec(x_25);
x_122 = 0;
x_123 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set_uint8(x_123, sizeof(void*)*1, x_122);
lean_ctor_set(x_24, 3, x_123);
x_124 = lean_st_ref_set(x_5, x_24, x_26);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_169 = l_Lean_Meta_getResetPostponed(x_2, x_3, x_4, x_5, x_125);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
x_172 = lean_box(0);
x_173 = lean_box(0);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
lean_inc(x_5);
lean_inc(x_174);
x_175 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1(x_1, x_174, x_170, x_174, x_2, x_3, x_4, x_5, x_171);
lean_dec(x_170);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
lean_dec(x_176);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; uint8_t x_179; 
x_178 = lean_ctor_get(x_175, 1);
lean_inc(x_178);
lean_dec(x_175);
x_179 = 1;
x_126 = x_179;
x_127 = x_178;
goto block_147;
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_175, 1);
lean_inc(x_180);
lean_dec(x_175);
x_181 = lean_ctor_get(x_177, 0);
lean_inc(x_181);
lean_dec(x_177);
x_182 = lean_unbox(x_181);
lean_dec(x_181);
x_126 = x_182;
x_127 = x_180;
goto block_147;
}
}
else
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_ctor_get(x_175, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_175, 1);
lean_inc(x_184);
lean_dec(x_175);
x_148 = x_183;
x_149 = x_184;
goto block_168;
}
block_147:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_128 = lean_st_ref_get(x_5, x_127);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
lean_dec(x_128);
x_130 = lean_st_ref_take(x_5, x_129);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_131, 3);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_131, 1);
lean_inc(x_135);
x_136 = lean_ctor_get(x_131, 2);
lean_inc(x_136);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 lean_ctor_release(x_131, 2);
 lean_ctor_release(x_131, 3);
 x_137 = x_131;
} else {
 lean_dec_ref(x_131);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_132, 0);
lean_inc(x_138);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 x_139 = x_132;
} else {
 lean_dec_ref(x_132);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(0, 1, 1);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set_uint8(x_140, sizeof(void*)*1, x_22);
if (lean_is_scalar(x_137)) {
 x_141 = lean_alloc_ctor(0, 4, 0);
} else {
 x_141 = x_137;
}
lean_ctor_set(x_141, 0, x_134);
lean_ctor_set(x_141, 1, x_135);
lean_ctor_set(x_141, 2, x_136);
lean_ctor_set(x_141, 3, x_140);
x_142 = lean_st_ref_set(x_5, x_141, x_133);
lean_dec(x_5);
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_144 = x_142;
} else {
 lean_dec_ref(x_142);
 x_144 = lean_box(0);
}
x_145 = lean_box(x_126);
if (lean_is_scalar(x_144)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_144;
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_143);
return x_146;
}
block_168:
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_150 = lean_st_ref_get(x_5, x_149);
x_151 = lean_ctor_get(x_150, 1);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_st_ref_take(x_5, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_153, 3);
lean_inc(x_154);
x_155 = lean_ctor_get(x_152, 1);
lean_inc(x_155);
lean_dec(x_152);
x_156 = lean_ctor_get(x_153, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
x_158 = lean_ctor_get(x_153, 2);
lean_inc(x_158);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 lean_ctor_release(x_153, 2);
 lean_ctor_release(x_153, 3);
 x_159 = x_153;
} else {
 lean_dec_ref(x_153);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_154, 0);
lean_inc(x_160);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 x_161 = x_154;
} else {
 lean_dec_ref(x_154);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(0, 1, 1);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set_uint8(x_162, sizeof(void*)*1, x_22);
if (lean_is_scalar(x_159)) {
 x_163 = lean_alloc_ctor(0, 4, 0);
} else {
 x_163 = x_159;
}
lean_ctor_set(x_163, 0, x_156);
lean_ctor_set(x_163, 1, x_157);
lean_ctor_set(x_163, 2, x_158);
lean_ctor_set(x_163, 3, x_162);
x_164 = lean_st_ref_set(x_5, x_163, x_155);
lean_dec(x_5);
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_166 = x_164;
} else {
 lean_dec_ref(x_164);
 x_166 = lean_box(0);
}
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(1, 2, 0);
} else {
 x_167 = x_166;
 lean_ctor_set_tag(x_167, 1);
}
lean_ctor_set(x_167, 0, x_148);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; lean_object* x_196; lean_object* x_217; lean_object* x_218; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_185 = lean_ctor_get(x_24, 0);
x_186 = lean_ctor_get(x_24, 1);
x_187 = lean_ctor_get(x_24, 2);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_24);
x_188 = lean_ctor_get(x_25, 0);
lean_inc(x_188);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 x_189 = x_25;
} else {
 lean_dec_ref(x_25);
 x_189 = lean_box(0);
}
x_190 = 0;
if (lean_is_scalar(x_189)) {
 x_191 = lean_alloc_ctor(0, 1, 1);
} else {
 x_191 = x_189;
}
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set_uint8(x_191, sizeof(void*)*1, x_190);
x_192 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_192, 0, x_185);
lean_ctor_set(x_192, 1, x_186);
lean_ctor_set(x_192, 2, x_187);
lean_ctor_set(x_192, 3, x_191);
x_193 = lean_st_ref_set(x_5, x_192, x_26);
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
lean_dec(x_193);
x_238 = l_Lean_Meta_getResetPostponed(x_2, x_3, x_4, x_5, x_194);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_box(0);
x_242 = lean_box(0);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
lean_inc(x_5);
lean_inc(x_243);
x_244 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1(x_1, x_243, x_239, x_243, x_2, x_3, x_4, x_5, x_240);
lean_dec(x_239);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
lean_dec(x_245);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; uint8_t x_248; 
x_247 = lean_ctor_get(x_244, 1);
lean_inc(x_247);
lean_dec(x_244);
x_248 = 1;
x_195 = x_248;
x_196 = x_247;
goto block_216;
}
else
{
lean_object* x_249; lean_object* x_250; uint8_t x_251; 
x_249 = lean_ctor_get(x_244, 1);
lean_inc(x_249);
lean_dec(x_244);
x_250 = lean_ctor_get(x_246, 0);
lean_inc(x_250);
lean_dec(x_246);
x_251 = lean_unbox(x_250);
lean_dec(x_250);
x_195 = x_251;
x_196 = x_249;
goto block_216;
}
}
else
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_244, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_244, 1);
lean_inc(x_253);
lean_dec(x_244);
x_217 = x_252;
x_218 = x_253;
goto block_237;
}
block_216:
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_197 = lean_st_ref_get(x_5, x_196);
x_198 = lean_ctor_get(x_197, 1);
lean_inc(x_198);
lean_dec(x_197);
x_199 = lean_st_ref_take(x_5, x_198);
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_200, 3);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 1);
lean_inc(x_202);
lean_dec(x_199);
x_203 = lean_ctor_get(x_200, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_200, 1);
lean_inc(x_204);
x_205 = lean_ctor_get(x_200, 2);
lean_inc(x_205);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 lean_ctor_release(x_200, 2);
 lean_ctor_release(x_200, 3);
 x_206 = x_200;
} else {
 lean_dec_ref(x_200);
 x_206 = lean_box(0);
}
x_207 = lean_ctor_get(x_201, 0);
lean_inc(x_207);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 x_208 = x_201;
} else {
 lean_dec_ref(x_201);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(0, 1, 1);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set_uint8(x_209, sizeof(void*)*1, x_22);
if (lean_is_scalar(x_206)) {
 x_210 = lean_alloc_ctor(0, 4, 0);
} else {
 x_210 = x_206;
}
lean_ctor_set(x_210, 0, x_203);
lean_ctor_set(x_210, 1, x_204);
lean_ctor_set(x_210, 2, x_205);
lean_ctor_set(x_210, 3, x_209);
x_211 = lean_st_ref_set(x_5, x_210, x_202);
lean_dec(x_5);
x_212 = lean_ctor_get(x_211, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 x_213 = x_211;
} else {
 lean_dec_ref(x_211);
 x_213 = lean_box(0);
}
x_214 = lean_box(x_195);
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(0, 2, 0);
} else {
 x_215 = x_213;
}
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_212);
return x_215;
}
block_237:
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_219 = lean_st_ref_get(x_5, x_218);
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
lean_dec(x_219);
x_221 = lean_st_ref_take(x_5, x_220);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_222, 3);
lean_inc(x_223);
x_224 = lean_ctor_get(x_221, 1);
lean_inc(x_224);
lean_dec(x_221);
x_225 = lean_ctor_get(x_222, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_222, 1);
lean_inc(x_226);
x_227 = lean_ctor_get(x_222, 2);
lean_inc(x_227);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 lean_ctor_release(x_222, 2);
 lean_ctor_release(x_222, 3);
 x_228 = x_222;
} else {
 lean_dec_ref(x_222);
 x_228 = lean_box(0);
}
x_229 = lean_ctor_get(x_223, 0);
lean_inc(x_229);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 x_230 = x_223;
} else {
 lean_dec_ref(x_223);
 x_230 = lean_box(0);
}
if (lean_is_scalar(x_230)) {
 x_231 = lean_alloc_ctor(0, 1, 1);
} else {
 x_231 = x_230;
}
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set_uint8(x_231, sizeof(void*)*1, x_22);
if (lean_is_scalar(x_228)) {
 x_232 = lean_alloc_ctor(0, 4, 0);
} else {
 x_232 = x_228;
}
lean_ctor_set(x_232, 0, x_225);
lean_ctor_set(x_232, 1, x_226);
lean_ctor_set(x_232, 2, x_227);
lean_ctor_set(x_232, 3, x_231);
x_233 = lean_st_ref_set(x_5, x_232, x_224);
lean_dec(x_5);
x_234 = lean_ctor_get(x_233, 1);
lean_inc(x_234);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_235 = x_233;
} else {
 lean_dec_ref(x_233);
 x_235 = lean_box(0);
}
if (lean_is_scalar(x_235)) {
 x_236 = lean_alloc_ctor(1, 2, 0);
} else {
 x_236 = x_235;
 lean_ctor_set_tag(x_236, 1);
}
lean_ctor_set(x_236, 0, x_217);
lean_ctor_set(x_236, 1, x_234);
return x_236;
}
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_254 = lean_ctor_get(x_4, 3);
lean_inc(x_254);
x_255 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_5, x_17);
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = l_Lean_Meta_getResetPostponed(x_2, x_3, x_4, x_5, x_257);
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_258, 1);
lean_inc(x_260);
lean_dec(x_258);
x_261 = lean_box(0);
x_262 = lean_box(0);
x_263 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_263);
x_264 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__7(x_1, x_263, x_259, x_263, x_2, x_3, x_4, x_5, x_260);
lean_dec(x_259);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; 
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
lean_dec(x_265);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; lean_object* x_268; uint8_t x_269; 
x_267 = lean_ctor_get(x_264, 1);
lean_inc(x_267);
lean_dec(x_264);
x_268 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_256, x_15, x_254, x_2, x_3, x_4, x_5, x_267);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_269 = !lean_is_exclusive(x_268);
if (x_269 == 0)
{
lean_object* x_270; uint8_t x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_268, 0);
lean_dec(x_270);
x_271 = 1;
x_272 = lean_box(x_271);
lean_ctor_set(x_268, 0, x_272);
return x_268;
}
else
{
lean_object* x_273; uint8_t x_274; lean_object* x_275; lean_object* x_276; 
x_273 = lean_ctor_get(x_268, 1);
lean_inc(x_273);
lean_dec(x_268);
x_274 = 1;
x_275 = lean_box(x_274);
x_276 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_273);
return x_276;
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; uint8_t x_280; 
x_277 = lean_ctor_get(x_264, 1);
lean_inc(x_277);
lean_dec(x_264);
x_278 = lean_ctor_get(x_266, 0);
lean_inc(x_278);
lean_dec(x_266);
x_279 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_256, x_15, x_254, x_2, x_3, x_4, x_5, x_277);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_280 = !lean_is_exclusive(x_279);
if (x_280 == 0)
{
lean_object* x_281; 
x_281 = lean_ctor_get(x_279, 0);
lean_dec(x_281);
lean_ctor_set(x_279, 0, x_278);
return x_279;
}
else
{
lean_object* x_282; lean_object* x_283; 
x_282 = lean_ctor_get(x_279, 1);
lean_inc(x_282);
lean_dec(x_279);
x_283 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_283, 0, x_278);
lean_ctor_set(x_283, 1, x_282);
return x_283;
}
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_284 = lean_ctor_get(x_264, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_264, 1);
lean_inc(x_285);
lean_dec(x_264);
x_286 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_256, x_15, x_254, x_2, x_3, x_4, x_5, x_285);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_287 = !lean_is_exclusive(x_286);
if (x_287 == 0)
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_286, 0);
lean_dec(x_288);
lean_ctor_set_tag(x_286, 1);
lean_ctor_set(x_286, 0, x_284);
return x_286;
}
else
{
lean_object* x_289; lean_object* x_290; 
x_289 = lean_ctor_get(x_286, 1);
lean_inc(x_289);
lean_dec(x_286);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_284);
lean_ctor_set(x_290, 1, x_289);
return x_290;
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__3(x_14, x_2, x_3, x_4, x_5, x_15, x_16, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_3);
return x_17;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4(x_13, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__5(x_13, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__9(x_14, x_2, x_3, x_4, x_5, x_15, x_16, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_3);
return x_17;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__10(x_13, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Std_PersistentArray_forInAux___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__8(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__11(x_13, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Std_PersistentArray_forIn___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__7(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_processPostponed_loop(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(x_4, x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_10, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_110; lean_object* x_111; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
lean_free_object(x_8);
x_14 = lean_box(0);
x_15 = lean_mk_string("Meta");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("isLevelDefEq");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("postponed");
x_20 = lean_name_mk_string(x_18, x_19);
x_123 = lean_st_ref_get(x_6, x_11);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_124, 3);
lean_inc(x_125);
lean_dec(x_124);
x_126 = lean_ctor_get_uint8(x_125, sizeof(void*)*1);
lean_dec(x_125);
if (x_126 == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_123, 1);
lean_inc(x_127);
lean_dec(x_123);
x_128 = 0;
x_110 = x_128;
x_111 = x_127;
goto block_122;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_129 = lean_ctor_get(x_123, 1);
lean_inc(x_129);
lean_dec(x_123);
lean_inc(x_20);
x_130 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_20, x_3, x_4, x_5, x_6, x_129);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_unbox(x_131);
lean_dec(x_131);
x_110 = x_133;
x_111 = x_132;
goto block_122;
}
block_109:
{
lean_object* x_22; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep(x_2, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
uint8_t x_25; 
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 0);
lean_dec(x_26);
x_27 = 0;
x_28 = lean_box(x_27);
lean_ctor_set(x_22, 0, x_28);
return x_22;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_dec(x_22);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_dec(x_22);
x_34 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(x_4, x_5, x_6, x_33);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
x_38 = lean_nat_dec_eq(x_36, x_12);
if (x_38 == 0)
{
uint8_t x_39; 
lean_free_object(x_34);
x_39 = lean_nat_dec_lt(x_36, x_10);
lean_dec(x_10);
lean_dec(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_st_ref_get(x_6, x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_41, 3);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get_uint8(x_42, sizeof(void*)*1);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_40);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_40, 0);
lean_dec(x_45);
x_46 = lean_box(x_1);
lean_ctor_set(x_40, 0, x_46);
return x_40;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_dec(x_40);
x_48 = lean_box(x_1);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_40, 1);
lean_inc(x_50);
lean_dec(x_40);
lean_inc(x_20);
x_51 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_20, x_3, x_4, x_5, x_6, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
if (x_53 == 0)
{
uint8_t x_54; 
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_51, 0);
lean_dec(x_55);
x_56 = lean_box(x_1);
lean_ctor_set(x_51, 0, x_56);
return x_51;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_51, 1);
lean_inc(x_57);
lean_dec(x_51);
x_58 = lean_box(x_1);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_51, 1);
lean_inc(x_60);
lean_dec(x_51);
x_61 = lean_mk_string("no progress solving pending is-def-eq level constraints");
x_62 = l_Lean_stringToMessageData(x_61);
lean_dec(x_61);
x_63 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_20, x_62, x_3, x_4, x_5, x_6, x_60);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_63, 0);
lean_dec(x_65);
x_66 = lean_box(x_1);
lean_ctor_set(x_63, 0, x_66);
return x_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
lean_dec(x_63);
x_68 = lean_box(x_1);
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
lean_dec(x_20);
x_7 = x_37;
goto _start;
}
}
else
{
uint8_t x_71; lean_object* x_72; 
lean_dec(x_36);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_71 = 1;
x_72 = lean_box(x_71);
lean_ctor_set(x_34, 0, x_72);
return x_34;
}
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_ctor_get(x_34, 0);
x_74 = lean_ctor_get(x_34, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_34);
x_75 = lean_nat_dec_eq(x_73, x_12);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_nat_dec_lt(x_73, x_10);
lean_dec(x_10);
lean_dec(x_73);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_77 = lean_st_ref_get(x_6, x_74);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 3);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_ctor_get_uint8(x_79, sizeof(void*)*1);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_81 = lean_ctor_get(x_77, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_82 = x_77;
} else {
 lean_dec_ref(x_77);
 x_82 = lean_box(0);
}
x_83 = lean_box(x_1);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_85 = lean_ctor_get(x_77, 1);
lean_inc(x_85);
lean_dec(x_77);
lean_inc(x_20);
x_86 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_20, x_3, x_4, x_5, x_6, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_90 = x_86;
} else {
 lean_dec_ref(x_86);
 x_90 = lean_box(0);
}
x_91 = lean_box(x_1);
if (lean_is_scalar(x_90)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_90;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_89);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_94 = lean_mk_string("no progress solving pending is-def-eq level constraints");
x_95 = l_Lean_stringToMessageData(x_94);
lean_dec(x_94);
x_96 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_20, x_95, x_3, x_4, x_5, x_6, x_93);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_98 = x_96;
} else {
 lean_dec_ref(x_96);
 x_98 = lean_box(0);
}
x_99 = lean_box(x_1);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
}
}
else
{
lean_dec(x_20);
x_7 = x_74;
goto _start;
}
}
else
{
uint8_t x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_73);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_102 = 1;
x_103 = lean_box(x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_74);
return x_104;
}
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_105 = !lean_is_exclusive(x_22);
if (x_105 == 0)
{
return x_22;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_22, 0);
x_107 = lean_ctor_get(x_22, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_22);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
block_122:
{
if (x_110 == 0)
{
x_21 = x_111;
goto block_109;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_112 = lean_mk_string("processing #");
x_113 = l_Lean_stringToMessageData(x_112);
lean_dec(x_112);
lean_inc(x_10);
x_114 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_10);
x_115 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_115, 0, x_114);
x_116 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_mk_string(" postponed is-def-eq level constraints");
x_118 = l_Lean_stringToMessageData(x_117);
lean_dec(x_117);
x_119 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_118);
lean_inc(x_20);
x_120 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_20, x_119, x_3, x_4, x_5, x_6, x_111);
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
lean_dec(x_120);
x_21 = x_121;
goto block_109;
}
}
}
else
{
uint8_t x_134; lean_object* x_135; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_134 = 1;
x_135 = lean_box(x_134);
lean_ctor_set(x_8, 0, x_135);
return x_8;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_136 = lean_ctor_get(x_8, 0);
x_137 = lean_ctor_get(x_8, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_8);
x_138 = lean_unsigned_to_nat(0u);
x_139 = lean_nat_dec_eq(x_136, x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_196; lean_object* x_197; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_140 = lean_box(0);
x_141 = lean_mk_string("Meta");
x_142 = lean_name_mk_string(x_140, x_141);
x_143 = lean_mk_string("isLevelDefEq");
x_144 = lean_name_mk_string(x_142, x_143);
x_145 = lean_mk_string("postponed");
x_146 = lean_name_mk_string(x_144, x_145);
x_209 = lean_st_ref_get(x_6, x_137);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_210, 3);
lean_inc(x_211);
lean_dec(x_210);
x_212 = lean_ctor_get_uint8(x_211, sizeof(void*)*1);
lean_dec(x_211);
if (x_212 == 0)
{
lean_object* x_213; uint8_t x_214; 
x_213 = lean_ctor_get(x_209, 1);
lean_inc(x_213);
lean_dec(x_209);
x_214 = 0;
x_196 = x_214;
x_197 = x_213;
goto block_208;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_dec(x_209);
lean_inc(x_146);
x_216 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_146, x_3, x_4, x_5, x_6, x_215);
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_unbox(x_217);
lean_dec(x_217);
x_196 = x_219;
x_197 = x_218;
goto block_208;
}
block_195:
{
lean_object* x_148; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_148 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep(x_2, x_3, x_4, x_5, x_6, x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; uint8_t x_150; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_unbox(x_149);
lean_dec(x_149);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; uint8_t x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_146);
lean_dec(x_136);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_151 = lean_ctor_get(x_148, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_152 = x_148;
} else {
 lean_dec_ref(x_148);
 x_152 = lean_box(0);
}
x_153 = 0;
x_154 = lean_box(x_153);
if (lean_is_scalar(x_152)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_152;
}
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_151);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_156 = lean_ctor_get(x_148, 1);
lean_inc(x_156);
lean_dec(x_148);
x_157 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(x_4, x_5, x_6, x_156);
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
x_161 = lean_nat_dec_eq(x_158, x_138);
if (x_161 == 0)
{
uint8_t x_162; 
lean_dec(x_160);
x_162 = lean_nat_dec_lt(x_158, x_136);
lean_dec(x_136);
lean_dec(x_158);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_163 = lean_st_ref_get(x_6, x_159);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_164, 3);
lean_inc(x_165);
lean_dec(x_164);
x_166 = lean_ctor_get_uint8(x_165, sizeof(void*)*1);
lean_dec(x_165);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_146);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_167 = lean_ctor_get(x_163, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_168 = x_163;
} else {
 lean_dec_ref(x_163);
 x_168 = lean_box(0);
}
x_169 = lean_box(x_1);
if (lean_is_scalar(x_168)) {
 x_170 = lean_alloc_ctor(0, 2, 0);
} else {
 x_170 = x_168;
}
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_167);
return x_170;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_171 = lean_ctor_get(x_163, 1);
lean_inc(x_171);
lean_dec(x_163);
lean_inc(x_146);
x_172 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_146, x_3, x_4, x_5, x_6, x_171);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_unbox(x_173);
lean_dec(x_173);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_146);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_176 = x_172;
} else {
 lean_dec_ref(x_172);
 x_176 = lean_box(0);
}
x_177 = lean_box(x_1);
if (lean_is_scalar(x_176)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_176;
}
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_175);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_179 = lean_ctor_get(x_172, 1);
lean_inc(x_179);
lean_dec(x_172);
x_180 = lean_mk_string("no progress solving pending is-def-eq level constraints");
x_181 = l_Lean_stringToMessageData(x_180);
lean_dec(x_180);
x_182 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_146, x_181, x_3, x_4, x_5, x_6, x_179);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_183 = lean_ctor_get(x_182, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_184 = x_182;
} else {
 lean_dec_ref(x_182);
 x_184 = lean_box(0);
}
x_185 = lean_box(x_1);
if (lean_is_scalar(x_184)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_184;
}
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_183);
return x_186;
}
}
}
else
{
lean_dec(x_146);
x_7 = x_159;
goto _start;
}
}
else
{
uint8_t x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_158);
lean_dec(x_146);
lean_dec(x_136);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_188 = 1;
x_189 = lean_box(x_188);
if (lean_is_scalar(x_160)) {
 x_190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_190 = x_160;
}
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_159);
return x_190;
}
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_146);
lean_dec(x_136);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_191 = lean_ctor_get(x_148, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_148, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_193 = x_148;
} else {
 lean_dec_ref(x_148);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
return x_194;
}
}
block_208:
{
if (x_196 == 0)
{
x_147 = x_197;
goto block_195;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_198 = lean_mk_string("processing #");
x_199 = l_Lean_stringToMessageData(x_198);
lean_dec(x_198);
lean_inc(x_136);
x_200 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_136);
x_201 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_201, 0, x_200);
x_202 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_201);
x_203 = lean_mk_string(" postponed is-def-eq level constraints");
x_204 = l_Lean_stringToMessageData(x_203);
lean_dec(x_203);
x_205 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_204);
lean_inc(x_146);
x_206 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_146, x_205, x_3, x_4, x_5, x_6, x_197);
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
lean_dec(x_206);
x_147 = x_207;
goto block_195;
}
}
}
else
{
uint8_t x_220; lean_object* x_221; lean_object* x_222; 
lean_dec(x_136);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_220 = 1;
x_221 = lean_box(x_220);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_137);
return x_222;
}
}
}
}
lean_object* l_Lean_Meta_processPostponed_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Lean_Meta_processPostponed_loop(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_processPostponed(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_getNumPostponed___rarg(x_4, x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_10, x_12);
lean_dec(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
lean_free_object(x_8);
x_14 = lean_box(0);
x_15 = lean_mk_string("Meta");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("isLevelDefEq");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("postponed");
x_20 = lean_name_mk_string(x_18, x_19);
x_222 = lean_st_ref_get(x_6, x_11);
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_223, 3);
lean_inc(x_224);
lean_dec(x_223);
x_225 = lean_ctor_get_uint8(x_224, sizeof(void*)*1);
lean_dec(x_224);
if (x_225 == 0)
{
lean_object* x_226; uint8_t x_227; 
x_226 = lean_ctor_get(x_222, 1);
lean_inc(x_226);
lean_dec(x_222);
x_227 = 0;
x_21 = x_227;
x_22 = x_226;
goto block_221;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_228 = lean_ctor_get(x_222, 1);
lean_inc(x_228);
lean_dec(x_222);
lean_inc(x_20);
x_229 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_20, x_3, x_4, x_5, x_6, x_228);
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = lean_unbox(x_230);
lean_dec(x_230);
x_21 = x_232;
x_22 = x_231;
goto block_221;
}
block_221:
{
if (x_21 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_20);
x_23 = lean_st_ref_get(x_6, x_22);
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
x_28 = lean_st_ref_take(x_6, x_26);
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
uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = 0;
lean_ctor_set_uint8(x_30, sizeof(void*)*1, x_35);
x_36 = lean_st_ref_set(x_6, x_29, x_31);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
lean_inc(x_6);
x_38 = l_Lean_Meta_processPostponed_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_st_ref_get(x_6, x_40);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_st_ref_take(x_6, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_44, 3);
lean_inc(x_45);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = !lean_is_exclusive(x_44);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_44, 3);
lean_dec(x_48);
x_49 = !lean_is_exclusive(x_45);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_27);
x_50 = lean_st_ref_set(x_6, x_44, x_46);
lean_dec(x_6);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_39);
return x_50;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_39);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_45, 0);
lean_inc(x_55);
lean_dec(x_45);
x_56 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_27);
lean_ctor_set(x_44, 3, x_56);
x_57 = lean_st_ref_set(x_6, x_44, x_46);
lean_dec(x_6);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_59 = x_57;
} else {
 lean_dec_ref(x_57);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_39);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_61 = lean_ctor_get(x_44, 0);
x_62 = lean_ctor_get(x_44, 1);
x_63 = lean_ctor_get(x_44, 2);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_44);
x_64 = lean_ctor_get(x_45, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 x_65 = x_45;
} else {
 lean_dec_ref(x_45);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(0, 1, 1);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set_uint8(x_66, sizeof(void*)*1, x_27);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set(x_67, 1, x_62);
lean_ctor_set(x_67, 2, x_63);
lean_ctor_set(x_67, 3, x_66);
x_68 = lean_st_ref_set(x_6, x_67, x_46);
lean_dec(x_6);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_70 = x_68;
} else {
 lean_dec_ref(x_68);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_39);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_72 = lean_ctor_get(x_38, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_38, 1);
lean_inc(x_73);
lean_dec(x_38);
x_74 = lean_st_ref_get(x_6, x_73);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_st_ref_take(x_6, x_75);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_77, 3);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = !lean_is_exclusive(x_77);
if (x_80 == 0)
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_77, 3);
lean_dec(x_81);
x_82 = !lean_is_exclusive(x_78);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; 
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_27);
x_83 = lean_st_ref_set(x_6, x_77, x_79);
lean_dec(x_6);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_83, 0);
lean_dec(x_85);
lean_ctor_set_tag(x_83, 1);
lean_ctor_set(x_83, 0, x_72);
return x_83;
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_72);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_88 = lean_ctor_get(x_78, 0);
lean_inc(x_88);
lean_dec(x_78);
x_89 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set_uint8(x_89, sizeof(void*)*1, x_27);
lean_ctor_set(x_77, 3, x_89);
x_90 = lean_st_ref_set(x_6, x_77, x_79);
lean_dec(x_6);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_92 = x_90;
} else {
 lean_dec_ref(x_90);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
 lean_ctor_set_tag(x_93, 1);
}
lean_ctor_set(x_93, 0, x_72);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_94 = lean_ctor_get(x_77, 0);
x_95 = lean_ctor_get(x_77, 1);
x_96 = lean_ctor_get(x_77, 2);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_77);
x_97 = lean_ctor_get(x_78, 0);
lean_inc(x_97);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 x_98 = x_78;
} else {
 lean_dec_ref(x_78);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(0, 1, 1);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set_uint8(x_99, sizeof(void*)*1, x_27);
x_100 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_100, 0, x_94);
lean_ctor_set(x_100, 1, x_95);
lean_ctor_set(x_100, 2, x_96);
lean_ctor_set(x_100, 3, x_99);
x_101 = lean_st_ref_set(x_6, x_100, x_79);
lean_dec(x_6);
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
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
 lean_ctor_set_tag(x_104, 1);
}
lean_ctor_set(x_104, 0, x_72);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
else
{
lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_105 = lean_ctor_get(x_30, 0);
lean_inc(x_105);
lean_dec(x_30);
x_106 = 0;
x_107 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set_uint8(x_107, sizeof(void*)*1, x_106);
lean_ctor_set(x_29, 3, x_107);
x_108 = lean_st_ref_set(x_6, x_29, x_31);
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
lean_dec(x_108);
lean_inc(x_6);
x_110 = l_Lean_Meta_processPostponed_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_109);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_st_ref_get(x_6, x_112);
x_114 = lean_ctor_get(x_113, 1);
lean_inc(x_114);
lean_dec(x_113);
x_115 = lean_st_ref_take(x_6, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_116, 3);
lean_inc(x_117);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
x_119 = lean_ctor_get(x_116, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_116, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_116, 2);
lean_inc(x_121);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 lean_ctor_release(x_116, 2);
 lean_ctor_release(x_116, 3);
 x_122 = x_116;
} else {
 lean_dec_ref(x_116);
 x_122 = lean_box(0);
}
x_123 = lean_ctor_get(x_117, 0);
lean_inc(x_123);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 x_124 = x_117;
} else {
 lean_dec_ref(x_117);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(0, 1, 1);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set_uint8(x_125, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_122)) {
 x_126 = lean_alloc_ctor(0, 4, 0);
} else {
 x_126 = x_122;
}
lean_ctor_set(x_126, 0, x_119);
lean_ctor_set(x_126, 1, x_120);
lean_ctor_set(x_126, 2, x_121);
lean_ctor_set(x_126, 3, x_125);
x_127 = lean_st_ref_set(x_6, x_126, x_118);
lean_dec(x_6);
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_129 = x_127;
} else {
 lean_dec_ref(x_127);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_111);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_131 = lean_ctor_get(x_110, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_110, 1);
lean_inc(x_132);
lean_dec(x_110);
x_133 = lean_st_ref_get(x_6, x_132);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_st_ref_take(x_6, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_136, 3);
lean_inc(x_137);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
lean_dec(x_135);
x_139 = lean_ctor_get(x_136, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_136, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_136, 2);
lean_inc(x_141);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 lean_ctor_release(x_136, 3);
 x_142 = x_136;
} else {
 lean_dec_ref(x_136);
 x_142 = lean_box(0);
}
x_143 = lean_ctor_get(x_137, 0);
lean_inc(x_143);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 x_144 = x_137;
} else {
 lean_dec_ref(x_137);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(0, 1, 1);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set_uint8(x_145, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_142)) {
 x_146 = lean_alloc_ctor(0, 4, 0);
} else {
 x_146 = x_142;
}
lean_ctor_set(x_146, 0, x_139);
lean_ctor_set(x_146, 1, x_140);
lean_ctor_set(x_146, 2, x_141);
lean_ctor_set(x_146, 3, x_145);
x_147 = lean_st_ref_set(x_6, x_146, x_138);
lean_dec(x_6);
x_148 = lean_ctor_get(x_147, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_149 = x_147;
} else {
 lean_dec_ref(x_147);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
 lean_ctor_set_tag(x_150, 1);
}
lean_ctor_set(x_150, 0, x_131);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_151 = lean_ctor_get(x_29, 0);
x_152 = lean_ctor_get(x_29, 1);
x_153 = lean_ctor_get(x_29, 2);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_29);
x_154 = lean_ctor_get(x_30, 0);
lean_inc(x_154);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_155 = x_30;
} else {
 lean_dec_ref(x_30);
 x_155 = lean_box(0);
}
x_156 = 0;
if (lean_is_scalar(x_155)) {
 x_157 = lean_alloc_ctor(0, 1, 1);
} else {
 x_157 = x_155;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set_uint8(x_157, sizeof(void*)*1, x_156);
x_158 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_158, 0, x_151);
lean_ctor_set(x_158, 1, x_152);
lean_ctor_set(x_158, 2, x_153);
lean_ctor_set(x_158, 3, x_157);
x_159 = lean_st_ref_set(x_6, x_158, x_31);
x_160 = lean_ctor_get(x_159, 1);
lean_inc(x_160);
lean_dec(x_159);
lean_inc(x_6);
x_161 = l_Lean_Meta_processPostponed_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_160);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_164 = lean_st_ref_get(x_6, x_163);
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
lean_dec(x_164);
x_166 = lean_st_ref_take(x_6, x_165);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_167, 3);
lean_inc(x_168);
x_169 = lean_ctor_get(x_166, 1);
lean_inc(x_169);
lean_dec(x_166);
x_170 = lean_ctor_get(x_167, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_167, 1);
lean_inc(x_171);
x_172 = lean_ctor_get(x_167, 2);
lean_inc(x_172);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 lean_ctor_release(x_167, 2);
 lean_ctor_release(x_167, 3);
 x_173 = x_167;
} else {
 lean_dec_ref(x_167);
 x_173 = lean_box(0);
}
x_174 = lean_ctor_get(x_168, 0);
lean_inc(x_174);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 x_175 = x_168;
} else {
 lean_dec_ref(x_168);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(0, 1, 1);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set_uint8(x_176, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_173)) {
 x_177 = lean_alloc_ctor(0, 4, 0);
} else {
 x_177 = x_173;
}
lean_ctor_set(x_177, 0, x_170);
lean_ctor_set(x_177, 1, x_171);
lean_ctor_set(x_177, 2, x_172);
lean_ctor_set(x_177, 3, x_176);
x_178 = lean_st_ref_set(x_6, x_177, x_169);
lean_dec(x_6);
x_179 = lean_ctor_get(x_178, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_180 = x_178;
} else {
 lean_dec_ref(x_178);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_162);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_182 = lean_ctor_get(x_161, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_161, 1);
lean_inc(x_183);
lean_dec(x_161);
x_184 = lean_st_ref_get(x_6, x_183);
x_185 = lean_ctor_get(x_184, 1);
lean_inc(x_185);
lean_dec(x_184);
x_186 = lean_st_ref_take(x_6, x_185);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_187, 3);
lean_inc(x_188);
x_189 = lean_ctor_get(x_186, 1);
lean_inc(x_189);
lean_dec(x_186);
x_190 = lean_ctor_get(x_187, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_187, 1);
lean_inc(x_191);
x_192 = lean_ctor_get(x_187, 2);
lean_inc(x_192);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 lean_ctor_release(x_187, 2);
 lean_ctor_release(x_187, 3);
 x_193 = x_187;
} else {
 lean_dec_ref(x_187);
 x_193 = lean_box(0);
}
x_194 = lean_ctor_get(x_188, 0);
lean_inc(x_194);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 x_195 = x_188;
} else {
 lean_dec_ref(x_188);
 x_195 = lean_box(0);
}
if (lean_is_scalar(x_195)) {
 x_196 = lean_alloc_ctor(0, 1, 1);
} else {
 x_196 = x_195;
}
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set_uint8(x_196, sizeof(void*)*1, x_27);
if (lean_is_scalar(x_193)) {
 x_197 = lean_alloc_ctor(0, 4, 0);
} else {
 x_197 = x_193;
}
lean_ctor_set(x_197, 0, x_190);
lean_ctor_set(x_197, 1, x_191);
lean_ctor_set(x_197, 2, x_192);
lean_ctor_set(x_197, 3, x_196);
x_198 = lean_st_ref_set(x_6, x_197, x_189);
lean_dec(x_6);
x_199 = lean_ctor_get(x_198, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 x_200 = x_198;
} else {
 lean_dec_ref(x_198);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_201 = x_200;
 lean_ctor_set_tag(x_201, 1);
}
lean_ctor_set(x_201, 0, x_182);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_202 = lean_ctor_get(x_5, 3);
lean_inc(x_202);
x_203 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_6, x_22);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_206 = l_Lean_Meta_processPostponed_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_205);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
lean_dec(x_206);
x_209 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_204, x_20, x_202, x_3, x_4, x_5, x_6, x_208);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_210 = !lean_is_exclusive(x_209);
if (x_210 == 0)
{
lean_object* x_211; 
x_211 = lean_ctor_get(x_209, 0);
lean_dec(x_211);
lean_ctor_set(x_209, 0, x_207);
return x_209;
}
else
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_209, 1);
lean_inc(x_212);
lean_dec(x_209);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_207);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_214 = lean_ctor_get(x_206, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_206, 1);
lean_inc(x_215);
lean_dec(x_206);
x_216 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_204, x_20, x_202, x_3, x_4, x_5, x_6, x_215);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
lean_object* x_218; 
x_218 = lean_ctor_get(x_216, 0);
lean_dec(x_218);
lean_ctor_set_tag(x_216, 1);
lean_ctor_set(x_216, 0, x_214);
return x_216;
}
else
{
lean_object* x_219; lean_object* x_220; 
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
lean_dec(x_216);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_214);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
}
}
else
{
uint8_t x_233; lean_object* x_234; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_233 = 1;
x_234 = lean_box(x_233);
lean_ctor_set(x_8, 0, x_234);
return x_8;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_235 = lean_ctor_get(x_8, 0);
x_236 = lean_ctor_get(x_8, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_8);
x_237 = lean_unsigned_to_nat(0u);
x_238 = lean_nat_dec_eq(x_235, x_237);
lean_dec(x_235);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; 
x_239 = lean_box(0);
x_240 = lean_mk_string("Meta");
x_241 = lean_name_mk_string(x_239, x_240);
x_242 = lean_mk_string("isLevelDefEq");
x_243 = lean_name_mk_string(x_241, x_242);
x_244 = lean_mk_string("postponed");
x_245 = lean_name_mk_string(x_243, x_244);
x_327 = lean_st_ref_get(x_6, x_236);
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_328, 3);
lean_inc(x_329);
lean_dec(x_328);
x_330 = lean_ctor_get_uint8(x_329, sizeof(void*)*1);
lean_dec(x_329);
if (x_330 == 0)
{
lean_object* x_331; uint8_t x_332; 
x_331 = lean_ctor_get(x_327, 1);
lean_inc(x_331);
lean_dec(x_327);
x_332 = 0;
x_246 = x_332;
x_247 = x_331;
goto block_326;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_333 = lean_ctor_get(x_327, 1);
lean_inc(x_333);
lean_dec(x_327);
lean_inc(x_245);
x_334 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_245, x_3, x_4, x_5, x_6, x_333);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
x_337 = lean_unbox(x_335);
lean_dec(x_335);
x_246 = x_337;
x_247 = x_336;
goto block_326;
}
block_326:
{
if (x_246 == 0)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; uint8_t x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_245);
x_248 = lean_st_ref_get(x_6, x_247);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_249, 3);
lean_inc(x_250);
lean_dec(x_249);
x_251 = lean_ctor_get(x_248, 1);
lean_inc(x_251);
lean_dec(x_248);
x_252 = lean_ctor_get_uint8(x_250, sizeof(void*)*1);
lean_dec(x_250);
x_253 = lean_st_ref_take(x_6, x_251);
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_254, 3);
lean_inc(x_255);
x_256 = lean_ctor_get(x_253, 1);
lean_inc(x_256);
lean_dec(x_253);
x_257 = lean_ctor_get(x_254, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_254, 1);
lean_inc(x_258);
x_259 = lean_ctor_get(x_254, 2);
lean_inc(x_259);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 lean_ctor_release(x_254, 2);
 lean_ctor_release(x_254, 3);
 x_260 = x_254;
} else {
 lean_dec_ref(x_254);
 x_260 = lean_box(0);
}
x_261 = lean_ctor_get(x_255, 0);
lean_inc(x_261);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 x_262 = x_255;
} else {
 lean_dec_ref(x_255);
 x_262 = lean_box(0);
}
x_263 = 0;
if (lean_is_scalar(x_262)) {
 x_264 = lean_alloc_ctor(0, 1, 1);
} else {
 x_264 = x_262;
}
lean_ctor_set(x_264, 0, x_261);
lean_ctor_set_uint8(x_264, sizeof(void*)*1, x_263);
if (lean_is_scalar(x_260)) {
 x_265 = lean_alloc_ctor(0, 4, 0);
} else {
 x_265 = x_260;
}
lean_ctor_set(x_265, 0, x_257);
lean_ctor_set(x_265, 1, x_258);
lean_ctor_set(x_265, 2, x_259);
lean_ctor_set(x_265, 3, x_264);
x_266 = lean_st_ref_set(x_6, x_265, x_256);
x_267 = lean_ctor_get(x_266, 1);
lean_inc(x_267);
lean_dec(x_266);
lean_inc(x_6);
x_268 = l_Lean_Meta_processPostponed_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_267);
if (lean_obj_tag(x_268) == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_268, 1);
lean_inc(x_270);
lean_dec(x_268);
x_271 = lean_st_ref_get(x_6, x_270);
x_272 = lean_ctor_get(x_271, 1);
lean_inc(x_272);
lean_dec(x_271);
x_273 = lean_st_ref_take(x_6, x_272);
x_274 = lean_ctor_get(x_273, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_274, 3);
lean_inc(x_275);
x_276 = lean_ctor_get(x_273, 1);
lean_inc(x_276);
lean_dec(x_273);
x_277 = lean_ctor_get(x_274, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_274, 1);
lean_inc(x_278);
x_279 = lean_ctor_get(x_274, 2);
lean_inc(x_279);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 lean_ctor_release(x_274, 1);
 lean_ctor_release(x_274, 2);
 lean_ctor_release(x_274, 3);
 x_280 = x_274;
} else {
 lean_dec_ref(x_274);
 x_280 = lean_box(0);
}
x_281 = lean_ctor_get(x_275, 0);
lean_inc(x_281);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 x_282 = x_275;
} else {
 lean_dec_ref(x_275);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(0, 1, 1);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_281);
lean_ctor_set_uint8(x_283, sizeof(void*)*1, x_252);
if (lean_is_scalar(x_280)) {
 x_284 = lean_alloc_ctor(0, 4, 0);
} else {
 x_284 = x_280;
}
lean_ctor_set(x_284, 0, x_277);
lean_ctor_set(x_284, 1, x_278);
lean_ctor_set(x_284, 2, x_279);
lean_ctor_set(x_284, 3, x_283);
x_285 = lean_st_ref_set(x_6, x_284, x_276);
lean_dec(x_6);
x_286 = lean_ctor_get(x_285, 1);
lean_inc(x_286);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_287 = x_285;
} else {
 lean_dec_ref(x_285);
 x_287 = lean_box(0);
}
if (lean_is_scalar(x_287)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_287;
}
lean_ctor_set(x_288, 0, x_269);
lean_ctor_set(x_288, 1, x_286);
return x_288;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_289 = lean_ctor_get(x_268, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_268, 1);
lean_inc(x_290);
lean_dec(x_268);
x_291 = lean_st_ref_get(x_6, x_290);
x_292 = lean_ctor_get(x_291, 1);
lean_inc(x_292);
lean_dec(x_291);
x_293 = lean_st_ref_take(x_6, x_292);
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_294, 3);
lean_inc(x_295);
x_296 = lean_ctor_get(x_293, 1);
lean_inc(x_296);
lean_dec(x_293);
x_297 = lean_ctor_get(x_294, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_294, 1);
lean_inc(x_298);
x_299 = lean_ctor_get(x_294, 2);
lean_inc(x_299);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 lean_ctor_release(x_294, 1);
 lean_ctor_release(x_294, 2);
 lean_ctor_release(x_294, 3);
 x_300 = x_294;
} else {
 lean_dec_ref(x_294);
 x_300 = lean_box(0);
}
x_301 = lean_ctor_get(x_295, 0);
lean_inc(x_301);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 x_302 = x_295;
} else {
 lean_dec_ref(x_295);
 x_302 = lean_box(0);
}
if (lean_is_scalar(x_302)) {
 x_303 = lean_alloc_ctor(0, 1, 1);
} else {
 x_303 = x_302;
}
lean_ctor_set(x_303, 0, x_301);
lean_ctor_set_uint8(x_303, sizeof(void*)*1, x_252);
if (lean_is_scalar(x_300)) {
 x_304 = lean_alloc_ctor(0, 4, 0);
} else {
 x_304 = x_300;
}
lean_ctor_set(x_304, 0, x_297);
lean_ctor_set(x_304, 1, x_298);
lean_ctor_set(x_304, 2, x_299);
lean_ctor_set(x_304, 3, x_303);
x_305 = lean_st_ref_set(x_6, x_304, x_296);
lean_dec(x_6);
x_306 = lean_ctor_get(x_305, 1);
lean_inc(x_306);
if (lean_is_exclusive(x_305)) {
 lean_ctor_release(x_305, 0);
 lean_ctor_release(x_305, 1);
 x_307 = x_305;
} else {
 lean_dec_ref(x_305);
 x_307 = lean_box(0);
}
if (lean_is_scalar(x_307)) {
 x_308 = lean_alloc_ctor(1, 2, 0);
} else {
 x_308 = x_307;
 lean_ctor_set_tag(x_308, 1);
}
lean_ctor_set(x_308, 0, x_289);
lean_ctor_set(x_308, 1, x_306);
return x_308;
}
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_309 = lean_ctor_get(x_5, 3);
lean_inc(x_309);
x_310 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_6, x_247);
x_311 = lean_ctor_get(x_310, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_310, 1);
lean_inc(x_312);
lean_dec(x_310);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_313 = l_Lean_Meta_processPostponed_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_312);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_311, x_245, x_309, x_3, x_4, x_5, x_6, x_315);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_317 = lean_ctor_get(x_316, 1);
lean_inc(x_317);
if (lean_is_exclusive(x_316)) {
 lean_ctor_release(x_316, 0);
 lean_ctor_release(x_316, 1);
 x_318 = x_316;
} else {
 lean_dec_ref(x_316);
 x_318 = lean_box(0);
}
if (lean_is_scalar(x_318)) {
 x_319 = lean_alloc_ctor(0, 2, 0);
} else {
 x_319 = x_318;
}
lean_ctor_set(x_319, 0, x_314);
lean_ctor_set(x_319, 1, x_317);
return x_319;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_320 = lean_ctor_get(x_313, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_313, 1);
lean_inc(x_321);
lean_dec(x_313);
x_322 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_311, x_245, x_309, x_3, x_4, x_5, x_6, x_321);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_323 = lean_ctor_get(x_322, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_322)) {
 lean_ctor_release(x_322, 0);
 lean_ctor_release(x_322, 1);
 x_324 = x_322;
} else {
 lean_dec_ref(x_322);
 x_324 = lean_box(0);
}
if (lean_is_scalar(x_324)) {
 x_325 = lean_alloc_ctor(1, 2, 0);
} else {
 x_325 = x_324;
 lean_ctor_set_tag(x_325, 1);
}
lean_ctor_set(x_325, 0, x_320);
lean_ctor_set(x_325, 1, x_323);
return x_325;
}
}
}
}
else
{
uint8_t x_338; lean_object* x_339; lean_object* x_340; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_338 = 1;
x_339 = lean_box(x_338);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_236);
return x_340;
}
}
}
}
lean_object* l_Lean_Meta_processPostponed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Lean_Meta_processPostponed(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_checkpointDefEq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_checkpointDefEq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_checkpointDefEq_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_checkpointDefEq(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_8 = l_Lean_Meta_saveState___rarg(x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_19 = l_Lean_Meta_getResetPostponed(x_3, x_4, x_5, x_6, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = lean_apply_5(x_1, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_20);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_Meta_SavedState_restore(x_9, x_3, x_4, x_5, x_6, x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_9);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = 0;
x_30 = lean_box(x_29);
lean_ctor_set(x_26, 0, x_30);
return x_26;
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_dec(x_26);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_22, 1);
lean_inc(x_35);
lean_dec(x_22);
x_36 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_37 = l_Lean_Meta_processPostponed(x_2, x_36, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_20);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = l_Lean_Meta_SavedState_restore(x_9, x_3, x_4, x_5, x_6, x_40);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_9);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = lean_box(x_36);
lean_ctor_set(x_41, 0, x_44);
return x_41;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_box(x_36);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_9);
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_dec(x_37);
x_49 = l_Lean_Meta_getPostponed___rarg(x_4, x_5, x_6, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Std_PersistentArray_append___rarg(x_20, x_50);
lean_dec(x_50);
x_53 = l_Lean_Meta_setPostponed(x_52, x_3, x_4, x_5, x_6, x_51);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
x_56 = 1;
x_57 = lean_box(x_56);
lean_ctor_set(x_53, 0, x_57);
return x_53;
}
else
{
lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_dec(x_53);
x_59 = 1;
x_60 = lean_box(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_20);
x_62 = lean_ctor_get(x_37, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_37, 1);
lean_inc(x_63);
lean_dec(x_37);
x_11 = x_62;
x_12 = x_63;
goto block_18;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_20);
x_64 = lean_ctor_get(x_22, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_dec(x_22);
x_11 = x_64;
x_12 = x_65;
goto block_18;
}
block_18:
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_Meta_SavedState_restore(x_9, x_3, x_4, x_5, x_6, x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_checkpointDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_checkpointDefEq(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_9 = l_Lean_Meta_saveState___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_20 = l_Lean_Meta_getResetPostponed(x_4, x_5, x_6, x_7, x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Meta_isLevelDefEqAux(x_1, x_2, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_21);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = 0;
x_31 = lean_box(x_30);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_23, 1);
lean_inc(x_36);
lean_dec(x_23);
x_37 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Lean_Meta_processPostponed(x_3, x_37, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_21);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(x_37);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(x_37);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_10);
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
lean_dec(x_38);
x_50 = l_Lean_Meta_getPostponed___rarg(x_5, x_6, x_7, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Std_PersistentArray_append___rarg(x_21, x_51);
lean_dec(x_51);
x_54 = l_Lean_Meta_setPostponed(x_53, x_4, x_5, x_6, x_7, x_52);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = 1;
x_61 = lean_box(x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_21);
x_63 = lean_ctor_get(x_38, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_38, 1);
lean_inc(x_64);
lean_dec(x_38);
x_12 = x_63;
x_13 = x_64;
goto block_19;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_21);
x_65 = lean_ctor_get(x_23, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_23, 1);
lean_inc(x_66);
lean_dec(x_23);
x_12 = x_65;
x_13 = x_66;
goto block_19;
}
block_19:
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_9 = l_Lean_Meta_saveState___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_20 = l_Lean_Meta_getResetPostponed(x_4, x_5, x_6, x_7, x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Meta_isLevelDefEqAux(x_1, x_2, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_21);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = 0;
x_31 = lean_box(x_30);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_23, 1);
lean_inc(x_36);
lean_dec(x_23);
x_37 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Lean_Meta_processPostponed(x_3, x_37, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_21);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(x_37);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(x_37);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_10);
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
lean_dec(x_38);
x_50 = l_Lean_Meta_getPostponed___rarg(x_5, x_6, x_7, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Std_PersistentArray_append___rarg(x_21, x_51);
lean_dec(x_51);
x_54 = l_Lean_Meta_setPostponed(x_53, x_4, x_5, x_6, x_7, x_52);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = 1;
x_61 = lean_box(x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_21);
x_63 = lean_ctor_get(x_38, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_38, 1);
lean_inc(x_64);
lean_dec(x_38);
x_12 = x_63;
x_13 = x_64;
goto block_19;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_21);
x_65 = lean_ctor_get(x_23, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_23, 1);
lean_inc(x_66);
lean_dec(x_23);
x_12 = x_65;
x_13 = x_66;
goto block_19;
}
block_19:
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_isLevelDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; 
x_17 = lean_box(0);
x_18 = lean_mk_string("Meta");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("isLevelDefEq");
x_21 = lean_name_mk_string(x_19, x_20);
x_433 = lean_st_ref_get(x_6, x_7);
x_434 = lean_ctor_get(x_433, 0);
lean_inc(x_434);
x_435 = lean_ctor_get(x_434, 3);
lean_inc(x_435);
lean_dec(x_434);
x_436 = lean_ctor_get_uint8(x_435, sizeof(void*)*1);
lean_dec(x_435);
if (x_436 == 0)
{
lean_object* x_437; uint8_t x_438; 
x_437 = lean_ctor_get(x_433, 1);
lean_inc(x_437);
lean_dec(x_433);
x_438 = 0;
x_22 = x_438;
x_23 = x_437;
goto block_432;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; uint8_t x_443; 
x_439 = lean_ctor_get(x_433, 1);
lean_inc(x_439);
lean_dec(x_433);
lean_inc(x_21);
x_440 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_439);
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
lean_dec(x_440);
x_443 = lean_unbox(x_441);
lean_dec(x_441);
x_22 = x_443;
x_23 = x_442;
goto block_432;
}
block_16:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
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
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
block_432:
{
if (x_22 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_24 = lean_st_ref_get(x_6, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 3);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get_uint8(x_26, sizeof(void*)*1);
lean_dec(x_26);
x_29 = lean_st_ref_take(x_6, x_27);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_30, 3);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; uint8_t x_88; lean_object* x_89; 
x_36 = 0;
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_36);
x_37 = lean_st_ref_set(x_6, x_30, x_32);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_88 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_89 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(x_1, x_2, x_88, x_3, x_4, x_5, x_6, x_38);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; lean_object* x_93; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_123 = lean_st_ref_get(x_6, x_91);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_124, 3);
lean_inc(x_125);
lean_dec(x_124);
x_126 = lean_ctor_get_uint8(x_125, sizeof(void*)*1);
lean_dec(x_125);
if (x_126 == 0)
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_123, 1);
lean_inc(x_127);
lean_dec(x_123);
x_92 = x_36;
x_93 = x_127;
goto block_122;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_128 = lean_ctor_get(x_123, 1);
lean_inc(x_128);
lean_dec(x_123);
lean_inc(x_21);
x_129 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_128);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_unbox(x_130);
lean_dec(x_130);
x_92 = x_132;
x_93 = x_131;
goto block_122;
}
block_122:
{
if (x_92 == 0)
{
uint8_t x_94; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = lean_unbox(x_90);
lean_dec(x_90);
x_39 = x_94;
x_40 = x_93;
goto block_87;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_95 = lean_mk_string("");
x_96 = l_Lean_stringToMessageData(x_95);
lean_dec(x_95);
x_97 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_97, 0, x_1);
lean_inc(x_96);
x_98 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_mk_string(" =?= ");
x_100 = l_Lean_stringToMessageData(x_99);
lean_dec(x_99);
x_101 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_102, 0, x_2);
x_103 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string(" ... ");
x_105 = l_Lean_stringToMessageData(x_104);
lean_dec(x_104);
x_106 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_unbox(x_90);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_108 = lean_mk_string("failure");
x_109 = l_Lean_stringToMessageData(x_108);
lean_dec(x_108);
x_110 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_110, 0, x_106);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_96);
x_112 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_111, x_3, x_4, x_5, x_6, x_93);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
lean_dec(x_112);
x_114 = lean_unbox(x_90);
lean_dec(x_90);
x_39 = x_114;
x_40 = x_113;
goto block_87;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_115 = lean_mk_string("success");
x_116 = l_Lean_stringToMessageData(x_115);
lean_dec(x_115);
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_106);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_96);
x_119 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_118, x_3, x_4, x_5, x_6, x_93);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_unbox(x_90);
lean_dec(x_90);
x_39 = x_121;
x_40 = x_120;
goto block_87;
}
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_133 = lean_ctor_get(x_89, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_89, 1);
lean_inc(x_134);
lean_dec(x_89);
x_135 = lean_st_ref_get(x_6, x_134);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
lean_dec(x_135);
x_137 = lean_st_ref_take(x_6, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_138, 3);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
x_141 = !lean_is_exclusive(x_138);
if (x_141 == 0)
{
lean_object* x_142; uint8_t x_143; 
x_142 = lean_ctor_get(x_138, 3);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_139);
if (x_143 == 0)
{
lean_object* x_144; uint8_t x_145; 
lean_ctor_set_uint8(x_139, sizeof(void*)*1, x_28);
x_144 = lean_st_ref_set(x_6, x_138, x_140);
lean_dec(x_6);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_144, 0);
lean_dec(x_146);
lean_ctor_set_tag(x_144, 1);
lean_ctor_set(x_144, 0, x_133);
return x_144;
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_144, 1);
lean_inc(x_147);
lean_dec(x_144);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_133);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_149 = lean_ctor_get(x_139, 0);
lean_inc(x_149);
lean_dec(x_139);
x_150 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set_uint8(x_150, sizeof(void*)*1, x_28);
lean_ctor_set(x_138, 3, x_150);
x_151 = lean_st_ref_set(x_6, x_138, x_140);
lean_dec(x_6);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_153 = x_151;
} else {
 lean_dec_ref(x_151);
 x_153 = lean_box(0);
}
if (lean_is_scalar(x_153)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_153;
 lean_ctor_set_tag(x_154, 1);
}
lean_ctor_set(x_154, 0, x_133);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_155 = lean_ctor_get(x_138, 0);
x_156 = lean_ctor_get(x_138, 1);
x_157 = lean_ctor_get(x_138, 2);
lean_inc(x_157);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_138);
x_158 = lean_ctor_get(x_139, 0);
lean_inc(x_158);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 x_159 = x_139;
} else {
 lean_dec_ref(x_139);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(0, 1, 1);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set_uint8(x_160, sizeof(void*)*1, x_28);
x_161 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_161, 0, x_155);
lean_ctor_set(x_161, 1, x_156);
lean_ctor_set(x_161, 2, x_157);
lean_ctor_set(x_161, 3, x_160);
x_162 = lean_st_ref_set(x_6, x_161, x_140);
lean_dec(x_6);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_164 = x_162;
} else {
 lean_dec_ref(x_162);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
 lean_ctor_set_tag(x_165, 1);
}
lean_ctor_set(x_165, 0, x_133);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
block_87:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_41 = lean_st_ref_get(x_6, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_42, 3);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get_uint8(x_44, sizeof(void*)*1);
lean_dec(x_44);
x_46 = lean_st_ref_take(x_6, x_43);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_47, 3);
lean_inc(x_48);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = !lean_is_exclusive(x_47);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_47, 3);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_28);
x_53 = lean_st_ref_set(x_6, x_47, x_49);
lean_dec(x_6);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
x_56 = lean_box(x_39);
x_57 = lean_box(x_45);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_53, 0, x_58);
x_8 = x_53;
goto block_16;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
x_60 = lean_box(x_39);
x_61 = lean_box(x_45);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_59);
x_8 = x_63;
goto block_16;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_48, 0);
lean_inc(x_64);
lean_dec(x_48);
x_65 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*1, x_28);
lean_ctor_set(x_47, 3, x_65);
x_66 = lean_st_ref_set(x_6, x_47, x_49);
lean_dec(x_6);
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
x_69 = lean_box(x_39);
x_70 = lean_box(x_45);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
if (lean_is_scalar(x_68)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_68;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_67);
x_8 = x_72;
goto block_16;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_73 = lean_ctor_get(x_47, 0);
x_74 = lean_ctor_get(x_47, 1);
x_75 = lean_ctor_get(x_47, 2);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_47);
x_76 = lean_ctor_get(x_48, 0);
lean_inc(x_76);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_77 = x_48;
} else {
 lean_dec_ref(x_48);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 1, 1);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_28);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_73);
lean_ctor_set(x_79, 1, x_74);
lean_ctor_set(x_79, 2, x_75);
lean_ctor_set(x_79, 3, x_78);
x_80 = lean_st_ref_set(x_6, x_79, x_49);
lean_dec(x_6);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
x_83 = lean_box(x_39);
x_84 = lean_box(x_45);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
if (lean_is_scalar(x_82)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_82;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_81);
x_8 = x_86;
goto block_16;
}
}
}
else
{
lean_object* x_166; uint8_t x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; uint8_t x_198; lean_object* x_199; 
x_166 = lean_ctor_get(x_31, 0);
lean_inc(x_166);
lean_dec(x_31);
x_167 = 0;
x_168 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set_uint8(x_168, sizeof(void*)*1, x_167);
lean_ctor_set(x_30, 3, x_168);
x_169 = lean_st_ref_set(x_6, x_30, x_32);
x_170 = lean_ctor_get(x_169, 1);
lean_inc(x_170);
lean_dec(x_169);
x_198 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_199 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(x_1, x_2, x_198, x_3, x_4, x_5, x_6, x_170);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; uint8_t x_202; lean_object* x_203; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_233 = lean_st_ref_get(x_6, x_201);
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_234, 3);
lean_inc(x_235);
lean_dec(x_234);
x_236 = lean_ctor_get_uint8(x_235, sizeof(void*)*1);
lean_dec(x_235);
if (x_236 == 0)
{
lean_object* x_237; 
x_237 = lean_ctor_get(x_233, 1);
lean_inc(x_237);
lean_dec(x_233);
x_202 = x_167;
x_203 = x_237;
goto block_232;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_238 = lean_ctor_get(x_233, 1);
lean_inc(x_238);
lean_dec(x_233);
lean_inc(x_21);
x_239 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_238);
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
lean_dec(x_239);
x_242 = lean_unbox(x_240);
lean_dec(x_240);
x_202 = x_242;
x_203 = x_241;
goto block_232;
}
block_232:
{
if (x_202 == 0)
{
uint8_t x_204; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_204 = lean_unbox(x_200);
lean_dec(x_200);
x_171 = x_204;
x_172 = x_203;
goto block_197;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_205 = lean_mk_string("");
x_206 = l_Lean_stringToMessageData(x_205);
lean_dec(x_205);
x_207 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_207, 0, x_1);
lean_inc(x_206);
x_208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_mk_string(" =?= ");
x_210 = l_Lean_stringToMessageData(x_209);
lean_dec(x_209);
x_211 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_212, 0, x_2);
x_213 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_mk_string(" ... ");
x_215 = l_Lean_stringToMessageData(x_214);
lean_dec(x_214);
x_216 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_unbox(x_200);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
x_218 = lean_mk_string("failure");
x_219 = l_Lean_stringToMessageData(x_218);
lean_dec(x_218);
x_220 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_220, 0, x_216);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_206);
x_222 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_221, x_3, x_4, x_5, x_6, x_203);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_223 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
lean_dec(x_222);
x_224 = lean_unbox(x_200);
lean_dec(x_200);
x_171 = x_224;
x_172 = x_223;
goto block_197;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_225 = lean_mk_string("success");
x_226 = l_Lean_stringToMessageData(x_225);
lean_dec(x_225);
x_227 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_227, 0, x_216);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_206);
x_229 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_228, x_3, x_4, x_5, x_6, x_203);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_230 = lean_ctor_get(x_229, 1);
lean_inc(x_230);
lean_dec(x_229);
x_231 = lean_unbox(x_200);
lean_dec(x_200);
x_171 = x_231;
x_172 = x_230;
goto block_197;
}
}
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_243 = lean_ctor_get(x_199, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_199, 1);
lean_inc(x_244);
lean_dec(x_199);
x_245 = lean_st_ref_get(x_6, x_244);
x_246 = lean_ctor_get(x_245, 1);
lean_inc(x_246);
lean_dec(x_245);
x_247 = lean_st_ref_take(x_6, x_246);
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_248, 3);
lean_inc(x_249);
x_250 = lean_ctor_get(x_247, 1);
lean_inc(x_250);
lean_dec(x_247);
x_251 = lean_ctor_get(x_248, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_248, 1);
lean_inc(x_252);
x_253 = lean_ctor_get(x_248, 2);
lean_inc(x_253);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 lean_ctor_release(x_248, 2);
 lean_ctor_release(x_248, 3);
 x_254 = x_248;
} else {
 lean_dec_ref(x_248);
 x_254 = lean_box(0);
}
x_255 = lean_ctor_get(x_249, 0);
lean_inc(x_255);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 x_256 = x_249;
} else {
 lean_dec_ref(x_249);
 x_256 = lean_box(0);
}
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(0, 1, 1);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set_uint8(x_257, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_254)) {
 x_258 = lean_alloc_ctor(0, 4, 0);
} else {
 x_258 = x_254;
}
lean_ctor_set(x_258, 0, x_251);
lean_ctor_set(x_258, 1, x_252);
lean_ctor_set(x_258, 2, x_253);
lean_ctor_set(x_258, 3, x_257);
x_259 = lean_st_ref_set(x_6, x_258, x_250);
lean_dec(x_6);
x_260 = lean_ctor_get(x_259, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 x_261 = x_259;
} else {
 lean_dec_ref(x_259);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_261;
 lean_ctor_set_tag(x_262, 1);
}
lean_ctor_set(x_262, 0, x_243);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
block_197:
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_173 = lean_st_ref_get(x_6, x_172);
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
lean_dec(x_173);
x_176 = lean_ctor_get(x_174, 3);
lean_inc(x_176);
lean_dec(x_174);
x_177 = lean_ctor_get_uint8(x_176, sizeof(void*)*1);
lean_dec(x_176);
x_178 = lean_st_ref_take(x_6, x_175);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_179, 3);
lean_inc(x_180);
x_181 = lean_ctor_get(x_178, 1);
lean_inc(x_181);
lean_dec(x_178);
x_182 = lean_ctor_get(x_179, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_179, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_179, 2);
lean_inc(x_184);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 lean_ctor_release(x_179, 2);
 lean_ctor_release(x_179, 3);
 x_185 = x_179;
} else {
 lean_dec_ref(x_179);
 x_185 = lean_box(0);
}
x_186 = lean_ctor_get(x_180, 0);
lean_inc(x_186);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 x_187 = x_180;
} else {
 lean_dec_ref(x_180);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(0, 1, 1);
} else {
 x_188 = x_187;
}
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set_uint8(x_188, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_185)) {
 x_189 = lean_alloc_ctor(0, 4, 0);
} else {
 x_189 = x_185;
}
lean_ctor_set(x_189, 0, x_182);
lean_ctor_set(x_189, 1, x_183);
lean_ctor_set(x_189, 2, x_184);
lean_ctor_set(x_189, 3, x_188);
x_190 = lean_st_ref_set(x_6, x_189, x_181);
lean_dec(x_6);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_192 = x_190;
} else {
 lean_dec_ref(x_190);
 x_192 = lean_box(0);
}
x_193 = lean_box(x_171);
x_194 = lean_box(x_177);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
if (lean_is_scalar(x_192)) {
 x_196 = lean_alloc_ctor(0, 2, 0);
} else {
 x_196 = x_192;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_191);
x_8 = x_196;
goto block_16;
}
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; uint8_t x_300; lean_object* x_301; 
x_263 = lean_ctor_get(x_30, 0);
x_264 = lean_ctor_get(x_30, 1);
x_265 = lean_ctor_get(x_30, 2);
lean_inc(x_265);
lean_inc(x_264);
lean_inc(x_263);
lean_dec(x_30);
x_266 = lean_ctor_get(x_31, 0);
lean_inc(x_266);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_267 = x_31;
} else {
 lean_dec_ref(x_31);
 x_267 = lean_box(0);
}
x_268 = 0;
if (lean_is_scalar(x_267)) {
 x_269 = lean_alloc_ctor(0, 1, 1);
} else {
 x_269 = x_267;
}
lean_ctor_set(x_269, 0, x_266);
lean_ctor_set_uint8(x_269, sizeof(void*)*1, x_268);
x_270 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_270, 0, x_263);
lean_ctor_set(x_270, 1, x_264);
lean_ctor_set(x_270, 2, x_265);
lean_ctor_set(x_270, 3, x_269);
x_271 = lean_st_ref_set(x_6, x_270, x_32);
x_272 = lean_ctor_get(x_271, 1);
lean_inc(x_272);
lean_dec(x_271);
x_300 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_301 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(x_1, x_2, x_300, x_3, x_4, x_5, x_6, x_272);
if (lean_obj_tag(x_301) == 0)
{
lean_object* x_302; lean_object* x_303; uint8_t x_304; lean_object* x_305; lean_object* x_335; lean_object* x_336; lean_object* x_337; uint8_t x_338; 
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
lean_dec(x_301);
x_335 = lean_st_ref_get(x_6, x_303);
x_336 = lean_ctor_get(x_335, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_336, 3);
lean_inc(x_337);
lean_dec(x_336);
x_338 = lean_ctor_get_uint8(x_337, sizeof(void*)*1);
lean_dec(x_337);
if (x_338 == 0)
{
lean_object* x_339; 
x_339 = lean_ctor_get(x_335, 1);
lean_inc(x_339);
lean_dec(x_335);
x_304 = x_268;
x_305 = x_339;
goto block_334;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_340 = lean_ctor_get(x_335, 1);
lean_inc(x_340);
lean_dec(x_335);
lean_inc(x_21);
x_341 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_340);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_unbox(x_342);
lean_dec(x_342);
x_304 = x_344;
x_305 = x_343;
goto block_334;
}
block_334:
{
if (x_304 == 0)
{
uint8_t x_306; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_306 = lean_unbox(x_302);
lean_dec(x_302);
x_273 = x_306;
x_274 = x_305;
goto block_299;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
x_307 = lean_mk_string("");
x_308 = l_Lean_stringToMessageData(x_307);
lean_dec(x_307);
x_309 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_309, 0, x_1);
lean_inc(x_308);
x_310 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_mk_string(" =?= ");
x_312 = l_Lean_stringToMessageData(x_311);
lean_dec(x_311);
x_313 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_312);
x_314 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_314, 0, x_2);
x_315 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
x_316 = lean_mk_string(" ... ");
x_317 = l_Lean_stringToMessageData(x_316);
lean_dec(x_316);
x_318 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_318, 0, x_315);
lean_ctor_set(x_318, 1, x_317);
x_319 = lean_unbox(x_302);
if (x_319 == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_320 = lean_mk_string("failure");
x_321 = l_Lean_stringToMessageData(x_320);
lean_dec(x_320);
x_322 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_322, 0, x_318);
lean_ctor_set(x_322, 1, x_321);
x_323 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_308);
x_324 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_323, x_3, x_4, x_5, x_6, x_305);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_325 = lean_ctor_get(x_324, 1);
lean_inc(x_325);
lean_dec(x_324);
x_326 = lean_unbox(x_302);
lean_dec(x_302);
x_273 = x_326;
x_274 = x_325;
goto block_299;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_327 = lean_mk_string("success");
x_328 = l_Lean_stringToMessageData(x_327);
lean_dec(x_327);
x_329 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_329, 0, x_318);
lean_ctor_set(x_329, 1, x_328);
x_330 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_308);
x_331 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_330, x_3, x_4, x_5, x_6, x_305);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_332 = lean_ctor_get(x_331, 1);
lean_inc(x_332);
lean_dec(x_331);
x_333 = lean_unbox(x_302);
lean_dec(x_302);
x_273 = x_333;
x_274 = x_332;
goto block_299;
}
}
}
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_345 = lean_ctor_get(x_301, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_301, 1);
lean_inc(x_346);
lean_dec(x_301);
x_347 = lean_st_ref_get(x_6, x_346);
x_348 = lean_ctor_get(x_347, 1);
lean_inc(x_348);
lean_dec(x_347);
x_349 = lean_st_ref_take(x_6, x_348);
x_350 = lean_ctor_get(x_349, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_350, 3);
lean_inc(x_351);
x_352 = lean_ctor_get(x_349, 1);
lean_inc(x_352);
lean_dec(x_349);
x_353 = lean_ctor_get(x_350, 0);
lean_inc(x_353);
x_354 = lean_ctor_get(x_350, 1);
lean_inc(x_354);
x_355 = lean_ctor_get(x_350, 2);
lean_inc(x_355);
if (lean_is_exclusive(x_350)) {
 lean_ctor_release(x_350, 0);
 lean_ctor_release(x_350, 1);
 lean_ctor_release(x_350, 2);
 lean_ctor_release(x_350, 3);
 x_356 = x_350;
} else {
 lean_dec_ref(x_350);
 x_356 = lean_box(0);
}
x_357 = lean_ctor_get(x_351, 0);
lean_inc(x_357);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 x_358 = x_351;
} else {
 lean_dec_ref(x_351);
 x_358 = lean_box(0);
}
if (lean_is_scalar(x_358)) {
 x_359 = lean_alloc_ctor(0, 1, 1);
} else {
 x_359 = x_358;
}
lean_ctor_set(x_359, 0, x_357);
lean_ctor_set_uint8(x_359, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_356)) {
 x_360 = lean_alloc_ctor(0, 4, 0);
} else {
 x_360 = x_356;
}
lean_ctor_set(x_360, 0, x_353);
lean_ctor_set(x_360, 1, x_354);
lean_ctor_set(x_360, 2, x_355);
lean_ctor_set(x_360, 3, x_359);
x_361 = lean_st_ref_set(x_6, x_360, x_352);
lean_dec(x_6);
x_362 = lean_ctor_get(x_361, 1);
lean_inc(x_362);
if (lean_is_exclusive(x_361)) {
 lean_ctor_release(x_361, 0);
 lean_ctor_release(x_361, 1);
 x_363 = x_361;
} else {
 lean_dec_ref(x_361);
 x_363 = lean_box(0);
}
if (lean_is_scalar(x_363)) {
 x_364 = lean_alloc_ctor(1, 2, 0);
} else {
 x_364 = x_363;
 lean_ctor_set_tag(x_364, 1);
}
lean_ctor_set(x_364, 0, x_345);
lean_ctor_set(x_364, 1, x_362);
return x_364;
}
block_299:
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; uint8_t x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_275 = lean_st_ref_get(x_6, x_274);
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
x_278 = lean_ctor_get(x_276, 3);
lean_inc(x_278);
lean_dec(x_276);
x_279 = lean_ctor_get_uint8(x_278, sizeof(void*)*1);
lean_dec(x_278);
x_280 = lean_st_ref_take(x_6, x_277);
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_281, 3);
lean_inc(x_282);
x_283 = lean_ctor_get(x_280, 1);
lean_inc(x_283);
lean_dec(x_280);
x_284 = lean_ctor_get(x_281, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_281, 1);
lean_inc(x_285);
x_286 = lean_ctor_get(x_281, 2);
lean_inc(x_286);
if (lean_is_exclusive(x_281)) {
 lean_ctor_release(x_281, 0);
 lean_ctor_release(x_281, 1);
 lean_ctor_release(x_281, 2);
 lean_ctor_release(x_281, 3);
 x_287 = x_281;
} else {
 lean_dec_ref(x_281);
 x_287 = lean_box(0);
}
x_288 = lean_ctor_get(x_282, 0);
lean_inc(x_288);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 x_289 = x_282;
} else {
 lean_dec_ref(x_282);
 x_289 = lean_box(0);
}
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(0, 1, 1);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set_uint8(x_290, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_287)) {
 x_291 = lean_alloc_ctor(0, 4, 0);
} else {
 x_291 = x_287;
}
lean_ctor_set(x_291, 0, x_284);
lean_ctor_set(x_291, 1, x_285);
lean_ctor_set(x_291, 2, x_286);
lean_ctor_set(x_291, 3, x_290);
x_292 = lean_st_ref_set(x_6, x_291, x_283);
lean_dec(x_6);
x_293 = lean_ctor_get(x_292, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_292)) {
 lean_ctor_release(x_292, 0);
 lean_ctor_release(x_292, 1);
 x_294 = x_292;
} else {
 lean_dec_ref(x_292);
 x_294 = lean_box(0);
}
x_295 = lean_box(x_273);
x_296 = lean_box(x_279);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_296);
if (lean_is_scalar(x_294)) {
 x_298 = lean_alloc_ctor(0, 2, 0);
} else {
 x_298 = x_294;
}
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_293);
x_8 = x_298;
goto block_16;
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; lean_object* x_370; uint8_t x_379; lean_object* x_380; 
x_365 = lean_ctor_get(x_5, 3);
lean_inc(x_365);
x_366 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_6, x_23);
x_367 = lean_ctor_get(x_366, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_366, 1);
lean_inc(x_368);
lean_dec(x_366);
x_379 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_380 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__2(x_1, x_2, x_379, x_3, x_4, x_5, x_6, x_368);
if (lean_obj_tag(x_380) == 0)
{
lean_object* x_381; lean_object* x_382; uint8_t x_383; lean_object* x_384; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; 
x_381 = lean_ctor_get(x_380, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_380, 1);
lean_inc(x_382);
lean_dec(x_380);
x_414 = lean_st_ref_get(x_6, x_382);
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_415, 3);
lean_inc(x_416);
lean_dec(x_415);
x_417 = lean_ctor_get_uint8(x_416, sizeof(void*)*1);
lean_dec(x_416);
if (x_417 == 0)
{
lean_object* x_418; uint8_t x_419; 
x_418 = lean_ctor_get(x_414, 1);
lean_inc(x_418);
lean_dec(x_414);
x_419 = 0;
x_383 = x_419;
x_384 = x_418;
goto block_413;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; uint8_t x_424; 
x_420 = lean_ctor_get(x_414, 1);
lean_inc(x_420);
lean_dec(x_414);
lean_inc(x_21);
x_421 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_420);
x_422 = lean_ctor_get(x_421, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_421, 1);
lean_inc(x_423);
lean_dec(x_421);
x_424 = lean_unbox(x_422);
lean_dec(x_422);
x_383 = x_424;
x_384 = x_423;
goto block_413;
}
block_413:
{
if (x_383 == 0)
{
uint8_t x_385; 
lean_dec(x_2);
lean_dec(x_1);
x_385 = lean_unbox(x_381);
lean_dec(x_381);
x_369 = x_385;
x_370 = x_384;
goto block_378;
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; uint8_t x_398; 
x_386 = lean_mk_string("");
x_387 = l_Lean_stringToMessageData(x_386);
lean_dec(x_386);
x_388 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_388, 0, x_1);
lean_inc(x_387);
x_389 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_389, 0, x_387);
lean_ctor_set(x_389, 1, x_388);
x_390 = lean_mk_string(" =?= ");
x_391 = l_Lean_stringToMessageData(x_390);
lean_dec(x_390);
x_392 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_392, 0, x_389);
lean_ctor_set(x_392, 1, x_391);
x_393 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_393, 0, x_2);
x_394 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_394, 0, x_392);
lean_ctor_set(x_394, 1, x_393);
x_395 = lean_mk_string(" ... ");
x_396 = l_Lean_stringToMessageData(x_395);
lean_dec(x_395);
x_397 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_397, 0, x_394);
lean_ctor_set(x_397, 1, x_396);
x_398 = lean_unbox(x_381);
if (x_398 == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; uint8_t x_405; 
x_399 = lean_mk_string("failure");
x_400 = l_Lean_stringToMessageData(x_399);
lean_dec(x_399);
x_401 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_401, 0, x_397);
lean_ctor_set(x_401, 1, x_400);
x_402 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_387);
lean_inc(x_21);
x_403 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_402, x_3, x_4, x_5, x_6, x_384);
x_404 = lean_ctor_get(x_403, 1);
lean_inc(x_404);
lean_dec(x_403);
x_405 = lean_unbox(x_381);
lean_dec(x_381);
x_369 = x_405;
x_370 = x_404;
goto block_378;
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; uint8_t x_412; 
x_406 = lean_mk_string("success");
x_407 = l_Lean_stringToMessageData(x_406);
lean_dec(x_406);
x_408 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_408, 0, x_397);
lean_ctor_set(x_408, 1, x_407);
x_409 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_409, 0, x_408);
lean_ctor_set(x_409, 1, x_387);
lean_inc(x_21);
x_410 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_409, x_3, x_4, x_5, x_6, x_384);
x_411 = lean_ctor_get(x_410, 1);
lean_inc(x_411);
lean_dec(x_410);
x_412 = lean_unbox(x_381);
lean_dec(x_381);
x_369 = x_412;
x_370 = x_411;
goto block_378;
}
}
}
}
else
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; uint8_t x_428; 
lean_dec(x_2);
lean_dec(x_1);
x_425 = lean_ctor_get(x_380, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_380, 1);
lean_inc(x_426);
lean_dec(x_380);
x_427 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_367, x_21, x_365, x_3, x_4, x_5, x_6, x_426);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_428 = !lean_is_exclusive(x_427);
if (x_428 == 0)
{
lean_object* x_429; 
x_429 = lean_ctor_get(x_427, 0);
lean_dec(x_429);
lean_ctor_set_tag(x_427, 1);
lean_ctor_set(x_427, 0, x_425);
return x_427;
}
else
{
lean_object* x_430; lean_object* x_431; 
x_430 = lean_ctor_get(x_427, 1);
lean_inc(x_430);
lean_dec(x_427);
x_431 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_431, 0, x_425);
lean_ctor_set(x_431, 1, x_430);
return x_431;
}
}
block_378:
{
lean_object* x_371; uint8_t x_372; 
x_371 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_367, x_21, x_365, x_3, x_4, x_5, x_6, x_370);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_372 = !lean_is_exclusive(x_371);
if (x_372 == 0)
{
lean_object* x_373; lean_object* x_374; 
x_373 = lean_ctor_get(x_371, 0);
lean_dec(x_373);
x_374 = lean_box(x_369);
lean_ctor_set(x_371, 0, x_374);
return x_371;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_375 = lean_ctor_get(x_371, 1);
lean_inc(x_375);
lean_dec(x_371);
x_376 = lean_box(x_369);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_377, 1, x_375);
return x_377;
}
}
}
}
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__2(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_9 = l_Lean_Meta_saveState___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_20 = l_Lean_Meta_getResetPostponed(x_4, x_5, x_6, x_7, x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Meta_isExprDefEqAux(x_1, x_2, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_21);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = 0;
x_31 = lean_box(x_30);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_23, 1);
lean_inc(x_36);
lean_dec(x_23);
x_37 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Lean_Meta_processPostponed(x_3, x_37, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_21);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(x_37);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(x_37);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_10);
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
lean_dec(x_38);
x_50 = l_Lean_Meta_getPostponed___rarg(x_5, x_6, x_7, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Std_PersistentArray_append___rarg(x_21, x_51);
lean_dec(x_51);
x_54 = l_Lean_Meta_setPostponed(x_53, x_4, x_5, x_6, x_7, x_52);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = 1;
x_61 = lean_box(x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_21);
x_63 = lean_ctor_get(x_38, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_38, 1);
lean_inc(x_64);
lean_dec(x_38);
x_12 = x_63;
x_13 = x_64;
goto block_19;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_21);
x_65 = lean_ctor_get(x_23, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_23, 1);
lean_inc(x_66);
lean_dec(x_23);
x_12 = x_65;
x_13 = x_66;
goto block_19;
}
block_19:
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_9 = l_Lean_Meta_saveState___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_20 = l_Lean_Meta_getResetPostponed(x_4, x_5, x_6, x_7, x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Meta_isExprDefEqAux(x_1, x_2, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_21);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = 0;
x_31 = lean_box(x_30);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_23, 1);
lean_inc(x_36);
lean_dec(x_23);
x_37 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Lean_Meta_processPostponed(x_3, x_37, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_21);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(x_37);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(x_37);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_10);
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
lean_dec(x_38);
x_50 = l_Lean_Meta_getPostponed___rarg(x_5, x_6, x_7, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Std_PersistentArray_append___rarg(x_21, x_51);
lean_dec(x_51);
x_54 = l_Lean_Meta_setPostponed(x_53, x_4, x_5, x_6, x_7, x_52);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = 1;
x_61 = lean_box(x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_21);
x_63 = lean_ctor_get(x_38, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_38, 1);
lean_inc(x_64);
lean_dec(x_38);
x_12 = x_63;
x_13 = x_64;
goto block_19;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_21);
x_65 = lean_ctor_get(x_23, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_23, 1);
lean_inc(x_66);
lean_dec(x_23);
x_12 = x_65;
x_13 = x_66;
goto block_19;
}
block_19:
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Meta_SavedState_restore(x_10, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_isExprDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_530; lean_object* x_531; lean_object* x_532; uint8_t x_533; 
x_17 = lean_box(0);
x_18 = lean_mk_string("Meta");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("isDefEq");
x_21 = lean_name_mk_string(x_19, x_20);
x_530 = lean_st_ref_get(x_6, x_7);
x_531 = lean_ctor_get(x_530, 0);
lean_inc(x_531);
x_532 = lean_ctor_get(x_531, 3);
lean_inc(x_532);
lean_dec(x_531);
x_533 = lean_ctor_get_uint8(x_532, sizeof(void*)*1);
lean_dec(x_532);
if (x_533 == 0)
{
lean_object* x_534; uint8_t x_535; 
x_534 = lean_ctor_get(x_530, 1);
lean_inc(x_534);
lean_dec(x_530);
x_535 = 0;
x_22 = x_535;
x_23 = x_534;
goto block_529;
}
else
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; uint8_t x_540; 
x_536 = lean_ctor_get(x_530, 1);
lean_inc(x_536);
lean_dec(x_530);
lean_inc(x_21);
x_537 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_536);
x_538 = lean_ctor_get(x_537, 0);
lean_inc(x_538);
x_539 = lean_ctor_get(x_537, 1);
lean_inc(x_539);
lean_dec(x_537);
x_540 = lean_unbox(x_538);
lean_dec(x_538);
x_22 = x_540;
x_23 = x_539;
goto block_529;
}
block_16:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
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
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
block_529:
{
if (x_22 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_24 = lean_st_ref_get(x_6, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 3);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get_uint8(x_26, sizeof(void*)*1);
lean_dec(x_26);
x_29 = lean_st_ref_take(x_6, x_27);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_30, 3);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; uint8_t x_88; 
x_36 = 0;
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_36);
x_37 = lean_st_ref_set(x_6, x_30, x_32);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_88 = !lean_is_exclusive(x_3);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; lean_object* x_95; 
x_89 = lean_ctor_get(x_3, 1);
x_90 = lean_ctor_get(x_3, 2);
x_91 = lean_ctor_get(x_3, 3);
lean_dec(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_2);
lean_inc(x_1);
x_92 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_92, 0, x_1);
lean_ctor_set(x_92, 1, x_2);
lean_ctor_set(x_92, 2, x_89);
lean_ctor_set(x_92, 3, x_90);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_3, 3, x_93);
x_94 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_95 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(x_1, x_2, x_94, x_3, x_4, x_5, x_6, x_38);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_129 = lean_st_ref_get(x_6, x_97);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_130, 3);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_ctor_get_uint8(x_131, sizeof(void*)*1);
lean_dec(x_131);
if (x_132 == 0)
{
lean_object* x_133; 
x_133 = lean_ctor_get(x_129, 1);
lean_inc(x_133);
lean_dec(x_129);
x_98 = x_36;
x_99 = x_133;
goto block_128;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_129, 1);
lean_inc(x_134);
lean_dec(x_129);
lean_inc(x_21);
x_135 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_3, x_4, x_5, x_6, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_unbox(x_136);
lean_dec(x_136);
x_98 = x_138;
x_99 = x_137;
goto block_128;
}
block_128:
{
if (x_98 == 0)
{
uint8_t x_100; 
lean_dec(x_3);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_100 = lean_unbox(x_96);
lean_dec(x_96);
x_39 = x_100;
x_40 = x_99;
goto block_87;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_101 = lean_mk_string("");
x_102 = l_Lean_stringToMessageData(x_101);
lean_dec(x_101);
x_103 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_103, 0, x_1);
lean_inc(x_102);
x_104 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_mk_string(" =?= ");
x_106 = l_Lean_stringToMessageData(x_105);
lean_dec(x_105);
x_107 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_108, 0, x_2);
x_109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_mk_string(" ... ");
x_111 = l_Lean_stringToMessageData(x_110);
lean_dec(x_110);
x_112 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_unbox(x_96);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_114 = lean_mk_string("failure");
x_115 = l_Lean_stringToMessageData(x_114);
lean_dec(x_114);
x_116 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_116, 0, x_112);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_102);
x_118 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_117, x_3, x_4, x_5, x_6, x_99);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_120 = lean_unbox(x_96);
lean_dec(x_96);
x_39 = x_120;
x_40 = x_119;
goto block_87;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_121 = lean_mk_string("success");
x_122 = l_Lean_stringToMessageData(x_121);
lean_dec(x_121);
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_112);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_102);
x_125 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_124, x_3, x_4, x_5, x_6, x_99);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
lean_dec(x_125);
x_127 = lean_unbox(x_96);
lean_dec(x_96);
x_39 = x_127;
x_40 = x_126;
goto block_87;
}
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
lean_dec(x_3);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_139 = lean_ctor_get(x_95, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_95, 1);
lean_inc(x_140);
lean_dec(x_95);
x_141 = lean_st_ref_get(x_6, x_140);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
x_143 = lean_st_ref_take(x_6, x_142);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_144, 3);
lean_inc(x_145);
x_146 = lean_ctor_get(x_143, 1);
lean_inc(x_146);
lean_dec(x_143);
x_147 = !lean_is_exclusive(x_144);
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; 
x_148 = lean_ctor_get(x_144, 3);
lean_dec(x_148);
x_149 = !lean_is_exclusive(x_145);
if (x_149 == 0)
{
lean_object* x_150; uint8_t x_151; 
lean_ctor_set_uint8(x_145, sizeof(void*)*1, x_28);
x_150 = lean_st_ref_set(x_6, x_144, x_146);
lean_dec(x_6);
x_151 = !lean_is_exclusive(x_150);
if (x_151 == 0)
{
lean_object* x_152; 
x_152 = lean_ctor_get(x_150, 0);
lean_dec(x_152);
lean_ctor_set_tag(x_150, 1);
lean_ctor_set(x_150, 0, x_139);
return x_150;
}
else
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
lean_dec(x_150);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_139);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_155 = lean_ctor_get(x_145, 0);
lean_inc(x_155);
lean_dec(x_145);
x_156 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set_uint8(x_156, sizeof(void*)*1, x_28);
lean_ctor_set(x_144, 3, x_156);
x_157 = lean_st_ref_set(x_6, x_144, x_146);
lean_dec(x_6);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_159 = x_157;
} else {
 lean_dec_ref(x_157);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
 lean_ctor_set_tag(x_160, 1);
}
lean_ctor_set(x_160, 0, x_139);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_161 = lean_ctor_get(x_144, 0);
x_162 = lean_ctor_get(x_144, 1);
x_163 = lean_ctor_get(x_144, 2);
lean_inc(x_163);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_144);
x_164 = lean_ctor_get(x_145, 0);
lean_inc(x_164);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 x_165 = x_145;
} else {
 lean_dec_ref(x_145);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(0, 1, 1);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set_uint8(x_166, sizeof(void*)*1, x_28);
x_167 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_167, 0, x_161);
lean_ctor_set(x_167, 1, x_162);
lean_ctor_set(x_167, 2, x_163);
lean_ctor_set(x_167, 3, x_166);
x_168 = lean_st_ref_set(x_6, x_167, x_146);
lean_dec(x_6);
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_170 = x_168;
} else {
 lean_dec_ref(x_168);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 2, 0);
} else {
 x_171 = x_170;
 lean_ctor_set_tag(x_171, 1);
}
lean_ctor_set(x_171, 0, x_139);
lean_ctor_set(x_171, 1, x_169);
return x_171;
}
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; lean_object* x_179; 
x_172 = lean_ctor_get(x_3, 0);
x_173 = lean_ctor_get(x_3, 1);
x_174 = lean_ctor_get(x_3, 2);
lean_inc(x_174);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_3);
lean_inc(x_174);
lean_inc(x_173);
lean_inc(x_2);
lean_inc(x_1);
x_175 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_175, 0, x_1);
lean_ctor_set(x_175, 1, x_2);
lean_ctor_set(x_175, 2, x_173);
lean_ctor_set(x_175, 3, x_174);
x_176 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_177 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_177, 0, x_172);
lean_ctor_set(x_177, 1, x_173);
lean_ctor_set(x_177, 2, x_174);
lean_ctor_set(x_177, 3, x_176);
x_178 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_177);
lean_inc(x_2);
lean_inc(x_1);
x_179 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(x_1, x_2, x_178, x_177, x_4, x_5, x_6, x_38);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; lean_object* x_183; lean_object* x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
x_213 = lean_st_ref_get(x_6, x_181);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_214, 3);
lean_inc(x_215);
lean_dec(x_214);
x_216 = lean_ctor_get_uint8(x_215, sizeof(void*)*1);
lean_dec(x_215);
if (x_216 == 0)
{
lean_object* x_217; 
x_217 = lean_ctor_get(x_213, 1);
lean_inc(x_217);
lean_dec(x_213);
x_182 = x_36;
x_183 = x_217;
goto block_212;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; 
x_218 = lean_ctor_get(x_213, 1);
lean_inc(x_218);
lean_dec(x_213);
lean_inc(x_21);
x_219 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_177, x_4, x_5, x_6, x_218);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_unbox(x_220);
lean_dec(x_220);
x_182 = x_222;
x_183 = x_221;
goto block_212;
}
block_212:
{
if (x_182 == 0)
{
uint8_t x_184; 
lean_dec(x_177);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_184 = lean_unbox(x_180);
lean_dec(x_180);
x_39 = x_184;
x_40 = x_183;
goto block_87;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; uint8_t x_197; 
x_185 = lean_mk_string("");
x_186 = l_Lean_stringToMessageData(x_185);
lean_dec(x_185);
x_187 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_187, 0, x_1);
lean_inc(x_186);
x_188 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_mk_string(" =?= ");
x_190 = l_Lean_stringToMessageData(x_189);
lean_dec(x_189);
x_191 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_192, 0, x_2);
x_193 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_mk_string(" ... ");
x_195 = l_Lean_stringToMessageData(x_194);
lean_dec(x_194);
x_196 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_unbox(x_180);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_198 = lean_mk_string("failure");
x_199 = l_Lean_stringToMessageData(x_198);
lean_dec(x_198);
x_200 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_200, 0, x_196);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_186);
x_202 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_201, x_177, x_4, x_5, x_6, x_183);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_177);
x_203 = lean_ctor_get(x_202, 1);
lean_inc(x_203);
lean_dec(x_202);
x_204 = lean_unbox(x_180);
lean_dec(x_180);
x_39 = x_204;
x_40 = x_203;
goto block_87;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_205 = lean_mk_string("success");
x_206 = l_Lean_stringToMessageData(x_205);
lean_dec(x_205);
x_207 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_207, 0, x_196);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_186);
x_209 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_208, x_177, x_4, x_5, x_6, x_183);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_177);
x_210 = lean_ctor_get(x_209, 1);
lean_inc(x_210);
lean_dec(x_209);
x_211 = lean_unbox(x_180);
lean_dec(x_180);
x_39 = x_211;
x_40 = x_210;
goto block_87;
}
}
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_177);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_223 = lean_ctor_get(x_179, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_179, 1);
lean_inc(x_224);
lean_dec(x_179);
x_225 = lean_st_ref_get(x_6, x_224);
x_226 = lean_ctor_get(x_225, 1);
lean_inc(x_226);
lean_dec(x_225);
x_227 = lean_st_ref_take(x_6, x_226);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_228, 3);
lean_inc(x_229);
x_230 = lean_ctor_get(x_227, 1);
lean_inc(x_230);
lean_dec(x_227);
x_231 = lean_ctor_get(x_228, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_228, 1);
lean_inc(x_232);
x_233 = lean_ctor_get(x_228, 2);
lean_inc(x_233);
if (lean_is_exclusive(x_228)) {
 lean_ctor_release(x_228, 0);
 lean_ctor_release(x_228, 1);
 lean_ctor_release(x_228, 2);
 lean_ctor_release(x_228, 3);
 x_234 = x_228;
} else {
 lean_dec_ref(x_228);
 x_234 = lean_box(0);
}
x_235 = lean_ctor_get(x_229, 0);
lean_inc(x_235);
if (lean_is_exclusive(x_229)) {
 lean_ctor_release(x_229, 0);
 x_236 = x_229;
} else {
 lean_dec_ref(x_229);
 x_236 = lean_box(0);
}
if (lean_is_scalar(x_236)) {
 x_237 = lean_alloc_ctor(0, 1, 1);
} else {
 x_237 = x_236;
}
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set_uint8(x_237, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_234)) {
 x_238 = lean_alloc_ctor(0, 4, 0);
} else {
 x_238 = x_234;
}
lean_ctor_set(x_238, 0, x_231);
lean_ctor_set(x_238, 1, x_232);
lean_ctor_set(x_238, 2, x_233);
lean_ctor_set(x_238, 3, x_237);
x_239 = lean_st_ref_set(x_6, x_238, x_230);
lean_dec(x_6);
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_241 = x_239;
} else {
 lean_dec_ref(x_239);
 x_241 = lean_box(0);
}
if (lean_is_scalar(x_241)) {
 x_242 = lean_alloc_ctor(1, 2, 0);
} else {
 x_242 = x_241;
 lean_ctor_set_tag(x_242, 1);
}
lean_ctor_set(x_242, 0, x_223);
lean_ctor_set(x_242, 1, x_240);
return x_242;
}
}
block_87:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_41 = lean_st_ref_get(x_6, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_42, 3);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get_uint8(x_44, sizeof(void*)*1);
lean_dec(x_44);
x_46 = lean_st_ref_take(x_6, x_43);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_47, 3);
lean_inc(x_48);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = !lean_is_exclusive(x_47);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_47, 3);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_28);
x_53 = lean_st_ref_set(x_6, x_47, x_49);
lean_dec(x_6);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
x_56 = lean_box(x_39);
x_57 = lean_box(x_45);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_53, 0, x_58);
x_8 = x_53;
goto block_16;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
x_60 = lean_box(x_39);
x_61 = lean_box(x_45);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_59);
x_8 = x_63;
goto block_16;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_48, 0);
lean_inc(x_64);
lean_dec(x_48);
x_65 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*1, x_28);
lean_ctor_set(x_47, 3, x_65);
x_66 = lean_st_ref_set(x_6, x_47, x_49);
lean_dec(x_6);
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
x_69 = lean_box(x_39);
x_70 = lean_box(x_45);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
if (lean_is_scalar(x_68)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_68;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_67);
x_8 = x_72;
goto block_16;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_73 = lean_ctor_get(x_47, 0);
x_74 = lean_ctor_get(x_47, 1);
x_75 = lean_ctor_get(x_47, 2);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_47);
x_76 = lean_ctor_get(x_48, 0);
lean_inc(x_76);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_77 = x_48;
} else {
 lean_dec_ref(x_48);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 1, 1);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_28);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_73);
lean_ctor_set(x_79, 1, x_74);
lean_ctor_set(x_79, 2, x_75);
lean_ctor_set(x_79, 3, x_78);
x_80 = lean_st_ref_set(x_6, x_79, x_49);
lean_dec(x_6);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
x_83 = lean_box(x_39);
x_84 = lean_box(x_45);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
if (lean_is_scalar(x_82)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_82;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_81);
x_8 = x_86;
goto block_16;
}
}
}
else
{
lean_object* x_243; uint8_t x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; lean_object* x_249; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; uint8_t x_282; lean_object* x_283; 
x_243 = lean_ctor_get(x_31, 0);
lean_inc(x_243);
lean_dec(x_31);
x_244 = 0;
x_245 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set_uint8(x_245, sizeof(void*)*1, x_244);
lean_ctor_set(x_30, 3, x_245);
x_246 = lean_st_ref_set(x_6, x_30, x_32);
x_247 = lean_ctor_get(x_246, 1);
lean_inc(x_247);
lean_dec(x_246);
x_275 = lean_ctor_get(x_3, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_3, 1);
lean_inc(x_276);
x_277 = lean_ctor_get(x_3, 2);
lean_inc(x_277);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_278 = x_3;
} else {
 lean_dec_ref(x_3);
 x_278 = lean_box(0);
}
lean_inc(x_277);
lean_inc(x_276);
lean_inc(x_2);
lean_inc(x_1);
x_279 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_279, 0, x_1);
lean_ctor_set(x_279, 1, x_2);
lean_ctor_set(x_279, 2, x_276);
lean_ctor_set(x_279, 3, x_277);
x_280 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_280, 0, x_279);
if (lean_is_scalar(x_278)) {
 x_281 = lean_alloc_ctor(0, 4, 0);
} else {
 x_281 = x_278;
}
lean_ctor_set(x_281, 0, x_275);
lean_ctor_set(x_281, 1, x_276);
lean_ctor_set(x_281, 2, x_277);
lean_ctor_set(x_281, 3, x_280);
x_282 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_281);
lean_inc(x_2);
lean_inc(x_1);
x_283 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(x_1, x_2, x_282, x_281, x_4, x_5, x_6, x_247);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; lean_object* x_285; uint8_t x_286; lean_object* x_287; lean_object* x_317; lean_object* x_318; lean_object* x_319; uint8_t x_320; 
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_283, 1);
lean_inc(x_285);
lean_dec(x_283);
x_317 = lean_st_ref_get(x_6, x_285);
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_318, 3);
lean_inc(x_319);
lean_dec(x_318);
x_320 = lean_ctor_get_uint8(x_319, sizeof(void*)*1);
lean_dec(x_319);
if (x_320 == 0)
{
lean_object* x_321; 
x_321 = lean_ctor_get(x_317, 1);
lean_inc(x_321);
lean_dec(x_317);
x_286 = x_244;
x_287 = x_321;
goto block_316;
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_322 = lean_ctor_get(x_317, 1);
lean_inc(x_322);
lean_dec(x_317);
lean_inc(x_21);
x_323 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_281, x_4, x_5, x_6, x_322);
x_324 = lean_ctor_get(x_323, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_323, 1);
lean_inc(x_325);
lean_dec(x_323);
x_326 = lean_unbox(x_324);
lean_dec(x_324);
x_286 = x_326;
x_287 = x_325;
goto block_316;
}
block_316:
{
if (x_286 == 0)
{
uint8_t x_288; 
lean_dec(x_281);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_288 = lean_unbox(x_284);
lean_dec(x_284);
x_248 = x_288;
x_249 = x_287;
goto block_274;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_289 = lean_mk_string("");
x_290 = l_Lean_stringToMessageData(x_289);
lean_dec(x_289);
x_291 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_291, 0, x_1);
lean_inc(x_290);
x_292 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_mk_string(" =?= ");
x_294 = l_Lean_stringToMessageData(x_293);
lean_dec(x_293);
x_295 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_295, 0, x_292);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_296, 0, x_2);
x_297 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_mk_string(" ... ");
x_299 = l_Lean_stringToMessageData(x_298);
lean_dec(x_298);
x_300 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_unbox(x_284);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_302 = lean_mk_string("failure");
x_303 = l_Lean_stringToMessageData(x_302);
lean_dec(x_302);
x_304 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_304, 0, x_300);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_290);
x_306 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_305, x_281, x_4, x_5, x_6, x_287);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_281);
x_307 = lean_ctor_get(x_306, 1);
lean_inc(x_307);
lean_dec(x_306);
x_308 = lean_unbox(x_284);
lean_dec(x_284);
x_248 = x_308;
x_249 = x_307;
goto block_274;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; uint8_t x_315; 
x_309 = lean_mk_string("success");
x_310 = l_Lean_stringToMessageData(x_309);
lean_dec(x_309);
x_311 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_311, 0, x_300);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_312, 0, x_311);
lean_ctor_set(x_312, 1, x_290);
x_313 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_312, x_281, x_4, x_5, x_6, x_287);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_281);
x_314 = lean_ctor_get(x_313, 1);
lean_inc(x_314);
lean_dec(x_313);
x_315 = lean_unbox(x_284);
lean_dec(x_284);
x_248 = x_315;
x_249 = x_314;
goto block_274;
}
}
}
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
lean_dec(x_281);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_327 = lean_ctor_get(x_283, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_283, 1);
lean_inc(x_328);
lean_dec(x_283);
x_329 = lean_st_ref_get(x_6, x_328);
x_330 = lean_ctor_get(x_329, 1);
lean_inc(x_330);
lean_dec(x_329);
x_331 = lean_st_ref_take(x_6, x_330);
x_332 = lean_ctor_get(x_331, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_332, 3);
lean_inc(x_333);
x_334 = lean_ctor_get(x_331, 1);
lean_inc(x_334);
lean_dec(x_331);
x_335 = lean_ctor_get(x_332, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_332, 1);
lean_inc(x_336);
x_337 = lean_ctor_get(x_332, 2);
lean_inc(x_337);
if (lean_is_exclusive(x_332)) {
 lean_ctor_release(x_332, 0);
 lean_ctor_release(x_332, 1);
 lean_ctor_release(x_332, 2);
 lean_ctor_release(x_332, 3);
 x_338 = x_332;
} else {
 lean_dec_ref(x_332);
 x_338 = lean_box(0);
}
x_339 = lean_ctor_get(x_333, 0);
lean_inc(x_339);
if (lean_is_exclusive(x_333)) {
 lean_ctor_release(x_333, 0);
 x_340 = x_333;
} else {
 lean_dec_ref(x_333);
 x_340 = lean_box(0);
}
if (lean_is_scalar(x_340)) {
 x_341 = lean_alloc_ctor(0, 1, 1);
} else {
 x_341 = x_340;
}
lean_ctor_set(x_341, 0, x_339);
lean_ctor_set_uint8(x_341, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_338)) {
 x_342 = lean_alloc_ctor(0, 4, 0);
} else {
 x_342 = x_338;
}
lean_ctor_set(x_342, 0, x_335);
lean_ctor_set(x_342, 1, x_336);
lean_ctor_set(x_342, 2, x_337);
lean_ctor_set(x_342, 3, x_341);
x_343 = lean_st_ref_set(x_6, x_342, x_334);
lean_dec(x_6);
x_344 = lean_ctor_get(x_343, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_345 = x_343;
} else {
 lean_dec_ref(x_343);
 x_345 = lean_box(0);
}
if (lean_is_scalar(x_345)) {
 x_346 = lean_alloc_ctor(1, 2, 0);
} else {
 x_346 = x_345;
 lean_ctor_set_tag(x_346, 1);
}
lean_ctor_set(x_346, 0, x_327);
lean_ctor_set(x_346, 1, x_344);
return x_346;
}
block_274:
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; uint8_t x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_250 = lean_st_ref_get(x_6, x_249);
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
lean_dec(x_250);
x_253 = lean_ctor_get(x_251, 3);
lean_inc(x_253);
lean_dec(x_251);
x_254 = lean_ctor_get_uint8(x_253, sizeof(void*)*1);
lean_dec(x_253);
x_255 = lean_st_ref_take(x_6, x_252);
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_256, 3);
lean_inc(x_257);
x_258 = lean_ctor_get(x_255, 1);
lean_inc(x_258);
lean_dec(x_255);
x_259 = lean_ctor_get(x_256, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_256, 1);
lean_inc(x_260);
x_261 = lean_ctor_get(x_256, 2);
lean_inc(x_261);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 lean_ctor_release(x_256, 2);
 lean_ctor_release(x_256, 3);
 x_262 = x_256;
} else {
 lean_dec_ref(x_256);
 x_262 = lean_box(0);
}
x_263 = lean_ctor_get(x_257, 0);
lean_inc(x_263);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 x_264 = x_257;
} else {
 lean_dec_ref(x_257);
 x_264 = lean_box(0);
}
if (lean_is_scalar(x_264)) {
 x_265 = lean_alloc_ctor(0, 1, 1);
} else {
 x_265 = x_264;
}
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set_uint8(x_265, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_262)) {
 x_266 = lean_alloc_ctor(0, 4, 0);
} else {
 x_266 = x_262;
}
lean_ctor_set(x_266, 0, x_259);
lean_ctor_set(x_266, 1, x_260);
lean_ctor_set(x_266, 2, x_261);
lean_ctor_set(x_266, 3, x_265);
x_267 = lean_st_ref_set(x_6, x_266, x_258);
lean_dec(x_6);
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_269 = x_267;
} else {
 lean_dec_ref(x_267);
 x_269 = lean_box(0);
}
x_270 = lean_box(x_248);
x_271 = lean_box(x_254);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
if (lean_is_scalar(x_269)) {
 x_273 = lean_alloc_ctor(0, 2, 0);
} else {
 x_273 = x_269;
}
lean_ctor_set(x_273, 0, x_272);
lean_ctor_set(x_273, 1, x_268);
x_8 = x_273;
goto block_16;
}
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; uint8_t x_357; lean_object* x_358; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; uint8_t x_391; lean_object* x_392; 
x_347 = lean_ctor_get(x_30, 0);
x_348 = lean_ctor_get(x_30, 1);
x_349 = lean_ctor_get(x_30, 2);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_30);
x_350 = lean_ctor_get(x_31, 0);
lean_inc(x_350);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_351 = x_31;
} else {
 lean_dec_ref(x_31);
 x_351 = lean_box(0);
}
x_352 = 0;
if (lean_is_scalar(x_351)) {
 x_353 = lean_alloc_ctor(0, 1, 1);
} else {
 x_353 = x_351;
}
lean_ctor_set(x_353, 0, x_350);
lean_ctor_set_uint8(x_353, sizeof(void*)*1, x_352);
x_354 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_354, 0, x_347);
lean_ctor_set(x_354, 1, x_348);
lean_ctor_set(x_354, 2, x_349);
lean_ctor_set(x_354, 3, x_353);
x_355 = lean_st_ref_set(x_6, x_354, x_32);
x_356 = lean_ctor_get(x_355, 1);
lean_inc(x_356);
lean_dec(x_355);
x_384 = lean_ctor_get(x_3, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_3, 1);
lean_inc(x_385);
x_386 = lean_ctor_get(x_3, 2);
lean_inc(x_386);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_387 = x_3;
} else {
 lean_dec_ref(x_3);
 x_387 = lean_box(0);
}
lean_inc(x_386);
lean_inc(x_385);
lean_inc(x_2);
lean_inc(x_1);
x_388 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_388, 0, x_1);
lean_ctor_set(x_388, 1, x_2);
lean_ctor_set(x_388, 2, x_385);
lean_ctor_set(x_388, 3, x_386);
x_389 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_389, 0, x_388);
if (lean_is_scalar(x_387)) {
 x_390 = lean_alloc_ctor(0, 4, 0);
} else {
 x_390 = x_387;
}
lean_ctor_set(x_390, 0, x_384);
lean_ctor_set(x_390, 1, x_385);
lean_ctor_set(x_390, 2, x_386);
lean_ctor_set(x_390, 3, x_389);
x_391 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_390);
lean_inc(x_2);
lean_inc(x_1);
x_392 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(x_1, x_2, x_391, x_390, x_4, x_5, x_6, x_356);
if (lean_obj_tag(x_392) == 0)
{
lean_object* x_393; lean_object* x_394; uint8_t x_395; lean_object* x_396; lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
lean_dec(x_392);
x_426 = lean_st_ref_get(x_6, x_394);
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_427, 3);
lean_inc(x_428);
lean_dec(x_427);
x_429 = lean_ctor_get_uint8(x_428, sizeof(void*)*1);
lean_dec(x_428);
if (x_429 == 0)
{
lean_object* x_430; 
x_430 = lean_ctor_get(x_426, 1);
lean_inc(x_430);
lean_dec(x_426);
x_395 = x_352;
x_396 = x_430;
goto block_425;
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; uint8_t x_435; 
x_431 = lean_ctor_get(x_426, 1);
lean_inc(x_431);
lean_dec(x_426);
lean_inc(x_21);
x_432 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_390, x_4, x_5, x_6, x_431);
x_433 = lean_ctor_get(x_432, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_432, 1);
lean_inc(x_434);
lean_dec(x_432);
x_435 = lean_unbox(x_433);
lean_dec(x_433);
x_395 = x_435;
x_396 = x_434;
goto block_425;
}
block_425:
{
if (x_395 == 0)
{
uint8_t x_397; 
lean_dec(x_390);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_397 = lean_unbox(x_393);
lean_dec(x_393);
x_357 = x_397;
x_358 = x_396;
goto block_383;
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; uint8_t x_410; 
x_398 = lean_mk_string("");
x_399 = l_Lean_stringToMessageData(x_398);
lean_dec(x_398);
x_400 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_400, 0, x_1);
lean_inc(x_399);
x_401 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_401, 0, x_399);
lean_ctor_set(x_401, 1, x_400);
x_402 = lean_mk_string(" =?= ");
x_403 = l_Lean_stringToMessageData(x_402);
lean_dec(x_402);
x_404 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_404, 0, x_401);
lean_ctor_set(x_404, 1, x_403);
x_405 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_405, 0, x_2);
x_406 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_406, 0, x_404);
lean_ctor_set(x_406, 1, x_405);
x_407 = lean_mk_string(" ... ");
x_408 = l_Lean_stringToMessageData(x_407);
lean_dec(x_407);
x_409 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_409, 0, x_406);
lean_ctor_set(x_409, 1, x_408);
x_410 = lean_unbox(x_393);
if (x_410 == 0)
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; 
x_411 = lean_mk_string("failure");
x_412 = l_Lean_stringToMessageData(x_411);
lean_dec(x_411);
x_413 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_413, 0, x_409);
lean_ctor_set(x_413, 1, x_412);
x_414 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_399);
x_415 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_414, x_390, x_4, x_5, x_6, x_396);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_390);
x_416 = lean_ctor_get(x_415, 1);
lean_inc(x_416);
lean_dec(x_415);
x_417 = lean_unbox(x_393);
lean_dec(x_393);
x_357 = x_417;
x_358 = x_416;
goto block_383;
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; uint8_t x_424; 
x_418 = lean_mk_string("success");
x_419 = l_Lean_stringToMessageData(x_418);
lean_dec(x_418);
x_420 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_420, 0, x_409);
lean_ctor_set(x_420, 1, x_419);
x_421 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_399);
x_422 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_421, x_390, x_4, x_5, x_6, x_396);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_390);
x_423 = lean_ctor_get(x_422, 1);
lean_inc(x_423);
lean_dec(x_422);
x_424 = lean_unbox(x_393);
lean_dec(x_393);
x_357 = x_424;
x_358 = x_423;
goto block_383;
}
}
}
}
else
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; 
lean_dec(x_390);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_436 = lean_ctor_get(x_392, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_392, 1);
lean_inc(x_437);
lean_dec(x_392);
x_438 = lean_st_ref_get(x_6, x_437);
x_439 = lean_ctor_get(x_438, 1);
lean_inc(x_439);
lean_dec(x_438);
x_440 = lean_st_ref_take(x_6, x_439);
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_441, 3);
lean_inc(x_442);
x_443 = lean_ctor_get(x_440, 1);
lean_inc(x_443);
lean_dec(x_440);
x_444 = lean_ctor_get(x_441, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_441, 1);
lean_inc(x_445);
x_446 = lean_ctor_get(x_441, 2);
lean_inc(x_446);
if (lean_is_exclusive(x_441)) {
 lean_ctor_release(x_441, 0);
 lean_ctor_release(x_441, 1);
 lean_ctor_release(x_441, 2);
 lean_ctor_release(x_441, 3);
 x_447 = x_441;
} else {
 lean_dec_ref(x_441);
 x_447 = lean_box(0);
}
x_448 = lean_ctor_get(x_442, 0);
lean_inc(x_448);
if (lean_is_exclusive(x_442)) {
 lean_ctor_release(x_442, 0);
 x_449 = x_442;
} else {
 lean_dec_ref(x_442);
 x_449 = lean_box(0);
}
if (lean_is_scalar(x_449)) {
 x_450 = lean_alloc_ctor(0, 1, 1);
} else {
 x_450 = x_449;
}
lean_ctor_set(x_450, 0, x_448);
lean_ctor_set_uint8(x_450, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_447)) {
 x_451 = lean_alloc_ctor(0, 4, 0);
} else {
 x_451 = x_447;
}
lean_ctor_set(x_451, 0, x_444);
lean_ctor_set(x_451, 1, x_445);
lean_ctor_set(x_451, 2, x_446);
lean_ctor_set(x_451, 3, x_450);
x_452 = lean_st_ref_set(x_6, x_451, x_443);
lean_dec(x_6);
x_453 = lean_ctor_get(x_452, 1);
lean_inc(x_453);
if (lean_is_exclusive(x_452)) {
 lean_ctor_release(x_452, 0);
 lean_ctor_release(x_452, 1);
 x_454 = x_452;
} else {
 lean_dec_ref(x_452);
 x_454 = lean_box(0);
}
if (lean_is_scalar(x_454)) {
 x_455 = lean_alloc_ctor(1, 2, 0);
} else {
 x_455 = x_454;
 lean_ctor_set_tag(x_455, 1);
}
lean_ctor_set(x_455, 0, x_436);
lean_ctor_set(x_455, 1, x_453);
return x_455;
}
block_383:
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; uint8_t x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_359 = lean_st_ref_get(x_6, x_358);
x_360 = lean_ctor_get(x_359, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 1);
lean_inc(x_361);
lean_dec(x_359);
x_362 = lean_ctor_get(x_360, 3);
lean_inc(x_362);
lean_dec(x_360);
x_363 = lean_ctor_get_uint8(x_362, sizeof(void*)*1);
lean_dec(x_362);
x_364 = lean_st_ref_take(x_6, x_361);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_365, 3);
lean_inc(x_366);
x_367 = lean_ctor_get(x_364, 1);
lean_inc(x_367);
lean_dec(x_364);
x_368 = lean_ctor_get(x_365, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_365, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_365, 2);
lean_inc(x_370);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 lean_ctor_release(x_365, 2);
 lean_ctor_release(x_365, 3);
 x_371 = x_365;
} else {
 lean_dec_ref(x_365);
 x_371 = lean_box(0);
}
x_372 = lean_ctor_get(x_366, 0);
lean_inc(x_372);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 x_373 = x_366;
} else {
 lean_dec_ref(x_366);
 x_373 = lean_box(0);
}
if (lean_is_scalar(x_373)) {
 x_374 = lean_alloc_ctor(0, 1, 1);
} else {
 x_374 = x_373;
}
lean_ctor_set(x_374, 0, x_372);
lean_ctor_set_uint8(x_374, sizeof(void*)*1, x_28);
if (lean_is_scalar(x_371)) {
 x_375 = lean_alloc_ctor(0, 4, 0);
} else {
 x_375 = x_371;
}
lean_ctor_set(x_375, 0, x_368);
lean_ctor_set(x_375, 1, x_369);
lean_ctor_set(x_375, 2, x_370);
lean_ctor_set(x_375, 3, x_374);
x_376 = lean_st_ref_set(x_6, x_375, x_367);
lean_dec(x_6);
x_377 = lean_ctor_get(x_376, 1);
lean_inc(x_377);
if (lean_is_exclusive(x_376)) {
 lean_ctor_release(x_376, 0);
 lean_ctor_release(x_376, 1);
 x_378 = x_376;
} else {
 lean_dec_ref(x_376);
 x_378 = lean_box(0);
}
x_379 = lean_box(x_357);
x_380 = lean_box(x_363);
x_381 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_381, 0, x_379);
lean_ctor_set(x_381, 1, x_380);
if (lean_is_scalar(x_378)) {
 x_382 = lean_alloc_ctor(0, 2, 0);
} else {
 x_382 = x_378;
}
lean_ctor_set(x_382, 0, x_381);
lean_ctor_set(x_382, 1, x_377);
x_8 = x_382;
goto block_16;
}
}
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; uint8_t x_460; lean_object* x_461; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; uint8_t x_476; lean_object* x_477; 
x_456 = lean_ctor_get(x_5, 3);
lean_inc(x_456);
x_457 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__6___rarg(x_6, x_23);
x_458 = lean_ctor_get(x_457, 0);
lean_inc(x_458);
x_459 = lean_ctor_get(x_457, 1);
lean_inc(x_459);
lean_dec(x_457);
x_470 = lean_ctor_get(x_3, 0);
lean_inc(x_470);
x_471 = lean_ctor_get(x_3, 1);
lean_inc(x_471);
x_472 = lean_ctor_get(x_3, 2);
lean_inc(x_472);
lean_inc(x_472);
lean_inc(x_471);
lean_inc(x_2);
lean_inc(x_1);
x_473 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_473, 0, x_1);
lean_ctor_set(x_473, 1, x_2);
lean_ctor_set(x_473, 2, x_471);
lean_ctor_set(x_473, 3, x_472);
x_474 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_474, 0, x_473);
x_475 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_475, 0, x_470);
lean_ctor_set(x_475, 1, x_471);
lean_ctor_set(x_475, 2, x_472);
lean_ctor_set(x_475, 3, x_474);
x_476 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_475);
lean_inc(x_2);
lean_inc(x_1);
x_477 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__2(x_1, x_2, x_476, x_475, x_4, x_5, x_6, x_459);
if (lean_obj_tag(x_477) == 0)
{
lean_object* x_478; lean_object* x_479; uint8_t x_480; lean_object* x_481; lean_object* x_511; lean_object* x_512; lean_object* x_513; uint8_t x_514; 
x_478 = lean_ctor_get(x_477, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_477, 1);
lean_inc(x_479);
lean_dec(x_477);
x_511 = lean_st_ref_get(x_6, x_479);
x_512 = lean_ctor_get(x_511, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_512, 3);
lean_inc(x_513);
lean_dec(x_512);
x_514 = lean_ctor_get_uint8(x_513, sizeof(void*)*1);
lean_dec(x_513);
if (x_514 == 0)
{
lean_object* x_515; uint8_t x_516; 
x_515 = lean_ctor_get(x_511, 1);
lean_inc(x_515);
lean_dec(x_511);
x_516 = 0;
x_480 = x_516;
x_481 = x_515;
goto block_510;
}
else
{
lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; uint8_t x_521; 
x_517 = lean_ctor_get(x_511, 1);
lean_inc(x_517);
lean_dec(x_511);
lean_inc(x_21);
x_518 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_21, x_475, x_4, x_5, x_6, x_517);
x_519 = lean_ctor_get(x_518, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_518, 1);
lean_inc(x_520);
lean_dec(x_518);
x_521 = lean_unbox(x_519);
lean_dec(x_519);
x_480 = x_521;
x_481 = x_520;
goto block_510;
}
block_510:
{
if (x_480 == 0)
{
uint8_t x_482; 
lean_dec(x_475);
lean_dec(x_2);
lean_dec(x_1);
x_482 = lean_unbox(x_478);
lean_dec(x_478);
x_460 = x_482;
x_461 = x_481;
goto block_469;
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; uint8_t x_495; 
x_483 = lean_mk_string("");
x_484 = l_Lean_stringToMessageData(x_483);
lean_dec(x_483);
x_485 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_485, 0, x_1);
lean_inc(x_484);
x_486 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_486, 0, x_484);
lean_ctor_set(x_486, 1, x_485);
x_487 = lean_mk_string(" =?= ");
x_488 = l_Lean_stringToMessageData(x_487);
lean_dec(x_487);
x_489 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_489, 0, x_486);
lean_ctor_set(x_489, 1, x_488);
x_490 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_490, 0, x_2);
x_491 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_491, 0, x_489);
lean_ctor_set(x_491, 1, x_490);
x_492 = lean_mk_string(" ... ");
x_493 = l_Lean_stringToMessageData(x_492);
lean_dec(x_492);
x_494 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_494, 0, x_491);
lean_ctor_set(x_494, 1, x_493);
x_495 = lean_unbox(x_478);
if (x_495 == 0)
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; uint8_t x_502; 
x_496 = lean_mk_string("failure");
x_497 = l_Lean_stringToMessageData(x_496);
lean_dec(x_496);
x_498 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_498, 0, x_494);
lean_ctor_set(x_498, 1, x_497);
x_499 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_499, 0, x_498);
lean_ctor_set(x_499, 1, x_484);
lean_inc(x_21);
x_500 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_499, x_475, x_4, x_5, x_6, x_481);
lean_dec(x_475);
x_501 = lean_ctor_get(x_500, 1);
lean_inc(x_501);
lean_dec(x_500);
x_502 = lean_unbox(x_478);
lean_dec(x_478);
x_460 = x_502;
x_461 = x_501;
goto block_469;
}
else
{
lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; uint8_t x_509; 
x_503 = lean_mk_string("success");
x_504 = l_Lean_stringToMessageData(x_503);
lean_dec(x_503);
x_505 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_505, 0, x_494);
lean_ctor_set(x_505, 1, x_504);
x_506 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_506, 0, x_505);
lean_ctor_set(x_506, 1, x_484);
lean_inc(x_21);
x_507 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_21, x_506, x_475, x_4, x_5, x_6, x_481);
lean_dec(x_475);
x_508 = lean_ctor_get(x_507, 1);
lean_inc(x_508);
lean_dec(x_507);
x_509 = lean_unbox(x_478);
lean_dec(x_478);
x_460 = x_509;
x_461 = x_508;
goto block_469;
}
}
}
}
else
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; uint8_t x_525; 
lean_dec(x_475);
lean_dec(x_2);
lean_dec(x_1);
x_522 = lean_ctor_get(x_477, 0);
lean_inc(x_522);
x_523 = lean_ctor_get(x_477, 1);
lean_inc(x_523);
lean_dec(x_477);
x_524 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_458, x_21, x_456, x_3, x_4, x_5, x_6, x_523);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_525 = !lean_is_exclusive(x_524);
if (x_525 == 0)
{
lean_object* x_526; 
x_526 = lean_ctor_get(x_524, 0);
lean_dec(x_526);
lean_ctor_set_tag(x_524, 1);
lean_ctor_set(x_524, 0, x_522);
return x_524;
}
else
{
lean_object* x_527; lean_object* x_528; 
x_527 = lean_ctor_get(x_524, 1);
lean_inc(x_527);
lean_dec(x_524);
x_528 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_528, 0, x_522);
lean_ctor_set(x_528, 1, x_527);
return x_528;
}
}
block_469:
{
lean_object* x_462; uint8_t x_463; 
x_462 = l___private_Lean_Util_Trace_0__Lean_addNode___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__12(x_458, x_21, x_456, x_3, x_4, x_5, x_6, x_461);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_463 = !lean_is_exclusive(x_462);
if (x_463 == 0)
{
lean_object* x_464; lean_object* x_465; 
x_464 = lean_ctor_get(x_462, 0);
lean_dec(x_464);
x_465 = lean_box(x_460);
lean_ctor_set(x_462, 0, x_465);
return x_462;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_466 = lean_ctor_get(x_462, 1);
lean_inc(x_466);
lean_dec(x_462);
x_467 = lean_box(x_460);
x_468 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_468, 0, x_467);
lean_ctor_set(x_468, 1, x_466);
return x_468;
}
}
}
}
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isExprDefEq___spec__2(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_isDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
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
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
lean_dec(x_14);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set_tag(x_8, 0);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_isDefEqGuarded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isExprDefEqGuarded(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_isDefEqNoConstantApprox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
lean_ctor_set_uint8(x_9, 0, x_11);
lean_ctor_set_uint8(x_9, 1, x_11);
lean_ctor_set_uint8(x_9, 2, x_11);
x_12 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get_uint8(x_9, 3);
x_22 = lean_ctor_get_uint8(x_9, 4);
x_23 = lean_ctor_get_uint8(x_9, 5);
x_24 = lean_ctor_get_uint8(x_9, 6);
x_25 = lean_ctor_get_uint8(x_9, 7);
x_26 = lean_ctor_get_uint8(x_9, 8);
x_27 = lean_ctor_get_uint8(x_9, 9);
lean_dec(x_9);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_29, 0, x_28);
lean_ctor_set_uint8(x_29, 1, x_28);
lean_ctor_set_uint8(x_29, 2, x_28);
lean_ctor_set_uint8(x_29, 3, x_21);
lean_ctor_set_uint8(x_29, 4, x_22);
lean_ctor_set_uint8(x_29, 5, x_23);
lean_ctor_set_uint8(x_29, 6, x_24);
lean_ctor_set_uint8(x_29, 7, x_25);
lean_ctor_set_uint8(x_29, 8, x_26);
lean_ctor_set_uint8(x_29, 9, x_27);
lean_ctor_set(x_3, 0, x_29);
x_30 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_37 = x_30;
} else {
 lean_dec_ref(x_30);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_ctor_get(x_3, 2);
x_42 = lean_ctor_get(x_3, 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_3);
x_43 = lean_ctor_get_uint8(x_39, 3);
x_44 = lean_ctor_get_uint8(x_39, 4);
x_45 = lean_ctor_get_uint8(x_39, 5);
x_46 = lean_ctor_get_uint8(x_39, 6);
x_47 = lean_ctor_get_uint8(x_39, 7);
x_48 = lean_ctor_get_uint8(x_39, 8);
x_49 = lean_ctor_get_uint8(x_39, 9);
if (lean_is_exclusive(x_39)) {
 x_50 = x_39;
} else {
 lean_dec_ref(x_39);
 x_50 = lean_box(0);
}
x_51 = 1;
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 0, 10);
} else {
 x_52 = x_50;
}
lean_ctor_set_uint8(x_52, 0, x_51);
lean_ctor_set_uint8(x_52, 1, x_51);
lean_ctor_set_uint8(x_52, 2, x_51);
lean_ctor_set_uint8(x_52, 3, x_43);
lean_ctor_set_uint8(x_52, 4, x_44);
lean_ctor_set_uint8(x_52, 5, x_45);
lean_ctor_set_uint8(x_52, 6, x_46);
lean_ctor_set_uint8(x_52, 7, x_47);
lean_ctor_set_uint8(x_52, 8, x_48);
lean_ctor_set_uint8(x_52, 9, x_49);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_40);
lean_ctor_set(x_53, 2, x_41);
lean_ctor_set(x_53, 3, x_42);
x_54 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_53, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_54, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_61 = x_54;
} else {
 lean_dec_ref(x_54);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_LevelDefEq___hyg_2791_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Meta");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("isLevelDefEq");
x_6 = lean_name_mk_string(x_4, x_5);
lean_inc(x_6);
x_7 = l_Lean_registerTraceClass(x_6, x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_mk_string("step");
lean_inc(x_6);
x_10 = lean_name_mk_string(x_6, x_9);
x_11 = l_Lean_registerTraceClass(x_10, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_mk_string("postponed");
x_14 = lean_name_mk_string(x_6, x_13);
x_15 = l_Lean_registerTraceClass(x_14, x_12);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_6);
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
else
{
uint8_t x_20; 
lean_dec(x_6);
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
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_CollectMVars(lean_object*);
lean_object* initialize_Lean_Util_ReplaceExpr(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ReplaceExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_initFn____x40_Lean_Meta_LevelDefEq___hyg_2791_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
