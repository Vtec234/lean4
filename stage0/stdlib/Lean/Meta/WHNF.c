// Lean compiler output
// Module: Lean.Meta.WHNF
// Imports: Init Lean.ToExpr Lean.AuxRecursor Lean.ProjFns Lean.Meta.Basic Lean.Meta.LevelDefEq Lean.Meta.GetConst Lean.Meta.Match.MatcherInfo
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
lean_object* lean_string_data(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp___boxed(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_whnfImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfHeadPred___at_Lean_Meta_whnfUntil___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_sub___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__2(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__2(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNatValue(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor(lean_object*, lean_object*);
lean_object* l_Nat_div___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_noConfusionExt;
lean_object* l_Nat_beq___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11_(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConstNoEx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNatValue___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cached_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isQuotRecStuck_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___lambda__1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__1(lean_object*);
lean_object* l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec(lean_object*);
lean_object* l_Lean_Meta_getConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfUntil___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNative___rarg(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_auxRecExt;
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_toCtorIfLit_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNative___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_smartUnfoldingSuffix;
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs_match__1(lean_object*);
lean_object* l_Lean_Meta_project_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isAuxDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3(lean_object*);
lean_object* l_Lean_Meta_reduceBoolNative___rarg(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isRecStuck_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RecursorVal_getMajorIdx(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_updateFn(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setWHNFRef(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfHeadPred___at_Lean_Meta_whnfUntil___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor_match__1(lean_object*);
lean_object* l_Lean_Meta_withNatValue_match__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isRecStuck_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfHeadPred___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isQuotRecStuck_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_49____spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_toCtorIfLit(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cached_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceUnaryNatOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at_Lean_ppExpr___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2(lean_object*);
lean_object* l_Lean_Meta_getDelayedAssignment_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_project_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_mod___boxed(lean_object*, lean_object*);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*);
lean_object* l_Lean_Meta_whnfCore_match__2(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__3(lean_object*);
lean_object* l_Lean_Core_checkMaxHeartbeats(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition(lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__2(lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f_match__1(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1(lean_object*);
extern lean_object* l_Lean_projectionFnInfoExt;
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_WHNF___hyg_5565_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_WHNF___hyg_13_(lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RecursorVal_getInduct(lean_object*);
lean_object* l_Lean_Meta_whnfHeadPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore_match__1(lean_object*);
lean_object* l_Lean_Meta_smartUnfolding;
lean_object* l_Lean_Meta_reduceNative_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f_match__1(lean_object*);
lean_object* lean_instantiate_value_lparams(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__4(lean_object*);
lean_object* l_List_find_x3f___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec_match__1(lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__1(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNative(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_toCtorIfLit_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNativeUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_whnfRef;
lean_object* l_Lean_Meta_synthPending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBoolNative___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBinNatOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f_match__1(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore_match__3(lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__2(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1___boxed(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNative_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK_match__1(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1(lean_object*, size_t, size_t);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
lean_object* l_Lean_Meta_withNatValue_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__2(lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isAuxDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__2(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSmartUnfoldingNameFor(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_reduceBoolNative(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_whnfCore_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__2(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceNatNativeUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_ble___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__3(lean_object*);
lean_object* l_Lean_Meta_whnfCore_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor_match__1(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfUntil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_smartUnfoldingSuffix() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_sunfold");
return x_1;
}
}
lean_object* l_Lean_Meta_mkSmartUnfoldingNameFor(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_smartUnfoldingSuffix;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_WHNF___hyg_13_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_box(0);
x_3 = lean_mk_string("smartUnfolding");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = 1;
x_6 = lean_mk_string("");
x_7 = lean_mk_string("when computing weak head normal form, use auxiliary definition created for functions defined by structural recursion");
x_8 = lean_box(x_5);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
x_10 = l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_49____spec__1(x_4, x_9, x_1);
lean_dec(x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_isAuxDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_auxRecExt;
x_12 = l_Lean_TagDeclarationExtension_isTagged(x_11, x_10, x_1);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = l_Lean_noConfusionExt;
x_14 = l_Lean_TagDeclarationExtension_isTagged(x_13, x_10, x_1);
lean_dec(x_10);
x_15 = lean_box(x_14);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
else
{
uint8_t x_16; lean_object* x_17; 
lean_dec(x_10);
x_16 = 1;
x_17 = lean_box(x_16);
lean_ctor_set(x_7, 0, x_17);
return x_7;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_auxRecExt;
x_22 = l_Lean_TagDeclarationExtension_isTagged(x_21, x_20, x_1);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_23 = l_Lean_noConfusionExt;
x_24 = l_Lean_TagDeclarationExtension_isTagged(x_23, x_20, x_1);
lean_dec(x_20);
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_20);
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_isAuxDef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isAuxDef(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Meta_getConst_x3f(x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_3);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = lean_apply_6(x_2, x_14, x_4, x_5, x_6, x_7, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_apply_7(x_3, x_17, x_10, x_4, x_5, x_6, x_7, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_box(0);
x_24 = lean_apply_6(x_2, x_23, x_4, x_5, x_6, x_7, x_8);
return x_24;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_matchConstAux___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 4);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 3);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_6, sizeof(void*)*5);
x_14 = lean_ctor_get_uint8(x_6, sizeof(void*)*5 + 1);
x_15 = lean_ctor_get_uint8(x_6, sizeof(void*)*5 + 2);
x_16 = lean_ctor_get_uint8(x_6, sizeof(void*)*5 + 3);
lean_dec(x_6);
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 2);
lean_inc(x_19);
lean_dec(x_7);
x_20 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_dec(x_8);
x_22 = lean_box(x_13);
x_23 = lean_box(x_14);
x_24 = lean_box(x_15);
x_25 = lean_box(x_16);
x_26 = lean_apply_12(x_2, x_20, x_21, x_17, x_18, x_19, x_10, x_11, x_12, x_22, x_23, x_24, x_25);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_2);
x_27 = lean_apply_1(x_3, x_1);
return x_27;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Meta_getConstNoEx_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_8, 0);
if (lean_obj_tag(x_16) == 5)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 4);
lean_inc(x_18);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
lean_free_object(x_8);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_7, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_dec(x_7);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_7, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_18, 0);
lean_inc(x_27);
lean_dec(x_18);
lean_ctor_set(x_8, 0, x_27);
return x_7;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_dec(x_7);
x_29 = lean_ctor_get(x_18, 0);
lean_inc(x_29);
lean_dec(x_18);
lean_ctor_set(x_8, 0, x_29);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_8);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_free_object(x_8);
lean_dec(x_16);
x_31 = !lean_is_exclusive(x_7);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_7, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_7, 0, x_33);
return x_7;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_7, 1);
lean_inc(x_34);
lean_dec(x_7);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_8, 0);
lean_inc(x_37);
lean_dec(x_8);
if (lean_obj_tag(x_37) == 5)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
lean_dec(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_7, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_41 = x_7;
} else {
 lean_dec_ref(x_7);
 x_41 = lean_box(0);
}
x_42 = lean_box(0);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_7, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_45 = x_7;
} else {
 lean_dec_ref(x_7);
 x_45 = lean_box(0);
}
x_46 = lean_ctor_get(x_39, 0);
lean_inc(x_46);
lean_dec(x_39);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
if (lean_is_scalar(x_45)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_45;
}
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_37);
x_49 = lean_ctor_get(x_7, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_50 = x_7;
} else {
 lean_dec_ref(x_7);
 x_50 = lean_box(0);
}
x_51 = lean_box(0);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_8) == 4)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l___private_Lean_Meta_WHNF_0__Lean_Meta_getFirstCtor(x_9, x_3, x_4, x_5, x_6, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_10);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
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
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_11, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = l_Lean_mkConst(x_22, x_10);
x_24 = l_Lean_levelZero;
x_25 = l_Lean_mkSort(x_24);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Expr_getAppNumArgsAux(x_1, x_26);
lean_inc(x_27);
x_28 = lean_mk_array(x_27, x_25);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_27, x_29);
lean_dec(x_27);
x_31 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_28, x_30);
x_32 = l_Array_shrink___rarg(x_31, x_2);
x_33 = l_Lean_mkAppN(x_23, x_32);
lean_dec(x_32);
lean_ctor_set(x_12, 0, x_33);
return x_11;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_34 = lean_ctor_get(x_12, 0);
lean_inc(x_34);
lean_dec(x_12);
x_35 = l_Lean_mkConst(x_34, x_10);
x_36 = l_Lean_levelZero;
x_37 = l_Lean_mkSort(x_36);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Expr_getAppNumArgsAux(x_1, x_38);
lean_inc(x_39);
x_40 = lean_mk_array(x_39, x_37);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_sub(x_39, x_41);
lean_dec(x_39);
x_43 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_40, x_42);
x_44 = l_Array_shrink___rarg(x_43, x_2);
x_45 = l_Lean_mkAppN(x_35, x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_11, 0, x_46);
return x_11;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_47 = lean_ctor_get(x_11, 1);
lean_inc(x_47);
lean_dec(x_11);
x_48 = lean_ctor_get(x_12, 0);
lean_inc(x_48);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 x_49 = x_12;
} else {
 lean_dec_ref(x_12);
 x_49 = lean_box(0);
}
x_50 = l_Lean_mkConst(x_48, x_10);
x_51 = l_Lean_levelZero;
x_52 = l_Lean_mkSort(x_51);
x_53 = lean_unsigned_to_nat(0u);
x_54 = l_Lean_Expr_getAppNumArgsAux(x_1, x_53);
lean_inc(x_54);
x_55 = lean_mk_array(x_54, x_52);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_sub(x_54, x_56);
lean_dec(x_54);
x_58 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_55, x_57);
x_59 = l_Array_shrink___rarg(x_58, x_2);
x_60 = l_Lean_mkAppN(x_50, x_59);
lean_dec(x_59);
if (lean_is_scalar(x_49)) {
 x_61 = lean_alloc_ctor(1, 1, 0);
} else {
 x_61 = x_49;
}
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_47);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_8);
lean_dec(x_1);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_7);
return x_64;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_toCtorIfLit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 9)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint64_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box_uint64(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
else
{
uint64_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_10 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_box_uint64(x_10);
x_13 = lean_apply_2(x_3, x_11, x_12);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
lean_object* l_Lean_Meta_toCtorIfLit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_toCtorIfLit_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint32_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_string("Char");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("ofNat");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_14 = lean_uint32_to_nat(x_13);
x_15 = l_Lean_mkNatLit(x_14);
x_16 = l_Lean_mkApp(x_12, x_15);
lean_inc(x_2);
x_17 = l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1(x_1, x_2, x_5);
x_18 = l_Lean_mkAppB(x_2, x_16, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Meta_toCtorIfLit(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 9)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_box(0);
x_7 = lean_mk_string("Nat");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("succ");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_3, x_13);
lean_dec(x_3);
x_15 = l_Lean_mkNatLit(x_14);
x_16 = l_Lean_mkApp(x_12, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
x_17 = lean_box(0);
x_18 = lean_mk_string("Nat");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("zero");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_box(0);
x_23 = l_Lean_mkConst(x_21, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_box(0);
x_26 = lean_mk_string("String");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("mk");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_box(0);
x_31 = l_Lean_mkConst(x_29, x_30);
x_32 = lean_mk_string("Char");
x_33 = lean_name_mk_string(x_25, x_32);
x_34 = l_Lean_mkConst(x_33, x_30);
x_35 = lean_mk_string("List");
x_36 = lean_name_mk_string(x_25, x_35);
x_37 = lean_mk_string("nil");
lean_inc(x_36);
x_38 = lean_name_mk_string(x_36, x_37);
x_39 = l_Lean_levelZero;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_30);
lean_inc(x_40);
x_41 = l_Lean_mkConst(x_38, x_40);
lean_inc(x_34);
x_42 = l_Lean_mkApp(x_41, x_34);
x_43 = lean_mk_string("cons");
x_44 = lean_name_mk_string(x_36, x_43);
x_45 = l_Lean_mkConst(x_44, x_40);
x_46 = l_Lean_mkApp(x_45, x_34);
x_47 = lean_string_data(x_24);
x_48 = l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1(x_42, x_46, x_47);
lean_dec(x_42);
x_49 = l_Lean_mkApp(x_31, x_48);
return x_49;
}
}
else
{
return x_1;
}
}
}
lean_object* l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_List_toExprAux___at_Lean_Meta_toCtorIfLit___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
uint8_t l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_name_eq(x_3, x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_ctor_get(x_1, 6);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_List_find_x3f___rarg(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = l_Lean_Expr_hasExprMVar(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
size_t x_7; size_t x_8; 
x_7 = 1;
x_8 = x_2 + x_7;
x_2 = x_8;
goto _start;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
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
x_11 = l_Lean_Meta_whnf(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_Meta_instantiateMVars(x_12, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_79 = l_Lean_Expr_getAppFn(x_16);
x_80 = l_Lean_RecursorVal_getInduct(x_1);
x_81 = l_Lean_Expr_isConstOf(x_79, x_80);
lean_dec(x_80);
lean_dec(x_79);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_82 = lean_box(0);
lean_ctor_set(x_14, 0, x_82);
return x_14;
}
else
{
uint8_t x_83; 
x_83 = l_Lean_Expr_hasExprMVar(x_16);
if (x_83 == 0)
{
lean_object* x_84; 
lean_free_object(x_14);
x_84 = lean_box(0);
x_18 = x_84;
goto block_78;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_85 = l_Lean_levelZero;
x_86 = l_Lean_mkSort(x_85);
x_87 = lean_unsigned_to_nat(0u);
x_88 = l_Lean_Expr_getAppNumArgsAux(x_16, x_87);
lean_inc(x_88);
x_89 = lean_mk_array(x_88, x_86);
x_90 = lean_unsigned_to_nat(1u);
x_91 = lean_nat_sub(x_88, x_90);
lean_dec(x_88);
lean_inc(x_16);
x_92 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_16, x_89, x_91);
x_93 = lean_ctor_get(x_1, 2);
lean_inc(x_93);
x_94 = lean_array_get_size(x_92);
x_95 = l_Array_toSubarray___rarg(x_92, x_93, x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_95, 2);
lean_inc(x_98);
lean_dec(x_95);
x_99 = lean_nat_dec_lt(x_97, x_98);
if (x_99 == 0)
{
lean_object* x_100; 
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_free_object(x_14);
x_100 = lean_box(0);
x_18 = x_100;
goto block_78;
}
else
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_array_get_size(x_96);
x_102 = lean_nat_dec_le(x_98, x_101);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; 
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_free_object(x_14);
x_103 = lean_box(0);
x_18 = x_103;
goto block_78;
}
else
{
size_t x_104; size_t x_105; uint8_t x_106; 
x_104 = lean_usize_of_nat(x_97);
lean_dec(x_97);
x_105 = lean_usize_of_nat(x_98);
lean_dec(x_98);
x_106 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1(x_96, x_104, x_105);
lean_dec(x_96);
if (x_106 == 0)
{
lean_object* x_107; 
lean_free_object(x_14);
x_107 = lean_box(0);
x_18 = x_107;
goto block_78;
}
else
{
lean_object* x_108; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_108 = lean_box(0);
lean_ctor_set(x_14, 0, x_108);
return x_14;
}
}
}
}
}
block_78:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
lean_dec(x_1);
lean_inc(x_16);
x_20 = l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor(x_16, x_19, x_3, x_4, x_5, x_6, x_17);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_dec(x_20);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_21, 0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_30);
x_31 = l_Lean_Meta_inferType(x_30, x_3, x_4, x_5, x_6, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Meta_isExprDefEq(x_16, x_32, x_3, x_4, x_5, x_6, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
lean_dec(x_35);
if (x_36 == 0)
{
uint8_t x_37; 
lean_free_object(x_21);
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_34, 0);
lean_dec(x_38);
x_39 = lean_box(0);
lean_ctor_set(x_34, 0, x_39);
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_dec(x_34);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_34);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_34, 0);
lean_dec(x_44);
lean_ctor_set(x_34, 0, x_21);
return x_34;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_34, 1);
lean_inc(x_45);
lean_dec(x_34);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_21);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_free_object(x_21);
lean_dec(x_30);
x_47 = !lean_is_exclusive(x_34);
if (x_47 == 0)
{
return x_34;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_34, 0);
x_49 = lean_ctor_get(x_34, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_34);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_free_object(x_21);
lean_dec(x_30);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_51 = !lean_is_exclusive(x_31);
if (x_51 == 0)
{
return x_31;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_31, 0);
x_53 = lean_ctor_get(x_31, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_31);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_21, 0);
lean_inc(x_55);
lean_dec(x_21);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_55);
x_56 = l_Lean_Meta_inferType(x_55, x_3, x_4, x_5, x_6, x_28);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Meta_isExprDefEq(x_16, x_57, x_3, x_4, x_5, x_6, x_58);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_55);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_63 = x_59;
} else {
 lean_dec_ref(x_59);
 x_63 = lean_box(0);
}
x_64 = lean_box(0);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_55);
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
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_55);
x_70 = lean_ctor_get(x_59, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_59, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_72 = x_59;
} else {
 lean_dec_ref(x_59);
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
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_55);
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_74 = lean_ctor_get(x_56, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_56, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_76 = x_56;
} else {
 lean_dec_ref(x_56);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
}
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_109 = lean_ctor_get(x_14, 0);
x_110 = lean_ctor_get(x_14, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_14);
x_145 = l_Lean_Expr_getAppFn(x_109);
x_146 = l_Lean_RecursorVal_getInduct(x_1);
x_147 = l_Lean_Expr_isConstOf(x_145, x_146);
lean_dec(x_146);
lean_dec(x_145);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_109);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_148 = lean_box(0);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_110);
return x_149;
}
else
{
uint8_t x_150; 
x_150 = l_Lean_Expr_hasExprMVar(x_109);
if (x_150 == 0)
{
lean_object* x_151; 
x_151 = lean_box(0);
x_111 = x_151;
goto block_144;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_152 = l_Lean_levelZero;
x_153 = l_Lean_mkSort(x_152);
x_154 = lean_unsigned_to_nat(0u);
x_155 = l_Lean_Expr_getAppNumArgsAux(x_109, x_154);
lean_inc(x_155);
x_156 = lean_mk_array(x_155, x_153);
x_157 = lean_unsigned_to_nat(1u);
x_158 = lean_nat_sub(x_155, x_157);
lean_dec(x_155);
lean_inc(x_109);
x_159 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_109, x_156, x_158);
x_160 = lean_ctor_get(x_1, 2);
lean_inc(x_160);
x_161 = lean_array_get_size(x_159);
x_162 = l_Array_toSubarray___rarg(x_159, x_160, x_161);
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
x_165 = lean_ctor_get(x_162, 2);
lean_inc(x_165);
lean_dec(x_162);
x_166 = lean_nat_dec_lt(x_164, x_165);
if (x_166 == 0)
{
lean_object* x_167; 
lean_dec(x_165);
lean_dec(x_164);
lean_dec(x_163);
x_167 = lean_box(0);
x_111 = x_167;
goto block_144;
}
else
{
lean_object* x_168; uint8_t x_169; 
x_168 = lean_array_get_size(x_163);
x_169 = lean_nat_dec_le(x_165, x_168);
lean_dec(x_168);
if (x_169 == 0)
{
lean_object* x_170; 
lean_dec(x_165);
lean_dec(x_164);
lean_dec(x_163);
x_170 = lean_box(0);
x_111 = x_170;
goto block_144;
}
else
{
size_t x_171; size_t x_172; uint8_t x_173; 
x_171 = lean_usize_of_nat(x_164);
lean_dec(x_164);
x_172 = lean_usize_of_nat(x_165);
lean_dec(x_165);
x_173 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1(x_163, x_171, x_172);
lean_dec(x_163);
if (x_173 == 0)
{
lean_object* x_174; 
x_174 = lean_box(0);
x_111 = x_174;
goto block_144;
}
else
{
lean_object* x_175; lean_object* x_176; 
lean_dec(x_109);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_175 = lean_box(0);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_110);
return x_176;
}
}
}
}
}
block_144:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_111);
x_112 = lean_ctor_get(x_1, 2);
lean_inc(x_112);
lean_dec(x_1);
lean_inc(x_109);
x_113 = l___private_Lean_Meta_WHNF_0__Lean_Meta_mkNullaryCtor(x_109, x_112, x_3, x_4, x_5, x_6, x_110);
lean_dec(x_112);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_109);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_116 = x_113;
} else {
 lean_dec_ref(x_113);
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
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_113, 1);
lean_inc(x_119);
lean_dec(x_113);
x_120 = lean_ctor_get(x_114, 0);
lean_inc(x_120);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 x_121 = x_114;
} else {
 lean_dec_ref(x_114);
 x_121 = lean_box(0);
}
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_120);
x_122 = l_Lean_Meta_inferType(x_120, x_3, x_4, x_5, x_6, x_119);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = l_Lean_Meta_isExprDefEq(x_109, x_123, x_3, x_4, x_5, x_6, x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; uint8_t x_127; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_unbox(x_126);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_121);
lean_dec(x_120);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_box(0);
if (lean_is_scalar(x_129)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_129;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_128);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_125, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_133 = x_125;
} else {
 lean_dec_ref(x_125);
 x_133 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_134 = lean_alloc_ctor(1, 1, 0);
} else {
 x_134 = x_121;
}
lean_ctor_set(x_134, 0, x_120);
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
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_121);
lean_dec(x_120);
x_136 = lean_ctor_get(x_125, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_125, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_138 = x_125;
} else {
 lean_dec_ref(x_125);
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
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_109);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_140 = lean_ctor_get(x_122, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_122, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_142 = x_122;
} else {
 lean_dec_ref(x_122);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
}
}
}
else
{
uint8_t x_177; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_177 = !lean_is_exclusive(x_14);
if (x_177 == 0)
{
return x_14;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_14, 0);
x_179 = lean_ctor_get(x_14, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_14);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
else
{
uint8_t x_181; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_181 = !lean_is_exclusive(x_11);
if (x_181 == 0)
{
return x_11;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_11, 0);
x_183 = lean_ctor_get(x_11, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_11);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
else
{
uint8_t x_185; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_185 = !lean_is_exclusive(x_8);
if (x_185 == 0)
{
return x_8;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_8, 0);
x_187 = lean_ctor_get(x_8, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_8);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Meta_toCtorIfLit(x_8);
lean_inc(x_1);
x_16 = l___private_Lean_Meta_WHNF_0__Lean_Meta_getRecRuleFor(x_1, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = lean_apply_6(x_2, x_17, x_10, x_11, x_12, x_13, x_14);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_levelZero;
x_21 = l_Lean_mkSort(x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Expr_getAppNumArgsAux(x_15, x_22);
lean_inc(x_23);
x_24 = lean_mk_array(x_23, x_21);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_23, x_25);
lean_dec(x_23);
x_27 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_15, x_24, x_26);
x_28 = l_List_lengthAux___rarg(x_3, x_22);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_List_lengthAux___rarg(x_30, x_22);
x_32 = lean_nat_dec_eq(x_28, x_31);
lean_dec(x_31);
lean_dec(x_28);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_1);
x_33 = lean_box(0);
x_34 = lean_apply_6(x_2, x_33, x_10, x_11, x_12, x_13, x_14);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_2);
x_35 = lean_ctor_get(x_19, 2);
lean_inc(x_35);
x_36 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParams___spec__1(x_30, x_3, x_35);
lean_dec(x_30);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 4);
lean_inc(x_38);
x_39 = lean_nat_add(x_37, x_38);
lean_dec(x_38);
lean_dec(x_37);
x_40 = lean_ctor_get(x_1, 5);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_nat_add(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
x_42 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_41, x_4, x_22, x_36);
lean_dec(x_41);
x_43 = lean_array_get_size(x_27);
x_44 = lean_ctor_get(x_19, 1);
lean_inc(x_44);
lean_dec(x_19);
x_45 = lean_nat_sub(x_43, x_44);
lean_dec(x_44);
x_46 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_43, x_27, x_45, x_42);
lean_dec(x_27);
lean_dec(x_43);
x_47 = lean_nat_add(x_5, x_25);
x_48 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_6, x_4, x_47, x_46);
x_49 = lean_apply_6(x_7, x_48, x_10, x_11, x_12, x_13, x_14);
return x_49;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_RecursorVal_getMajorIdx(x_1);
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_apply_6(x_4, x_14, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_array_fget(x_3, x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Lean_Meta_whnf(x_16, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_box(0);
x_22 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1(x_1, x_4, x_2, x_3, x_11, x_12, x_5, x_19, x_21, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_12);
lean_dec(x_11);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_23);
lean_inc(x_1);
x_25 = l___private_Lean_Meta_WHNF_0__Lean_Meta_toCtorWhenK(x_1, x_23, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_box(0);
x_29 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1(x_1, x_4, x_2, x_3, x_11, x_12, x_5, x_23, x_28, x_6, x_7, x_8, x_9, x_27);
lean_dec(x_12);
lean_dec(x_11);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_ctor_get(x_26, 0);
lean_inc(x_31);
lean_dec(x_26);
x_32 = lean_box(0);
x_33 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1(x_1, x_4, x_2, x_3, x_11, x_12, x_5, x_31, x_32, x_6, x_7, x_8, x_9, x_30);
lean_dec(x_12);
lean_dec(x_11);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_23);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
return x_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_25);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_17);
if (x_38 == 0)
{
return x_17;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 4)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
x_9 = lean_box(x_8);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 2);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_3(x_2, x_10, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 5)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 4)
{
lean_object* x_7; uint64_t x_8; lean_object* x_9; uint64_t x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_dec(x_4);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
lean_dec(x_5);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 1);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
lean_dec(x_6);
x_16 = lean_box_uint64(x_15);
x_17 = lean_box_uint64(x_12);
x_18 = lean_box_uint64(x_10);
x_19 = lean_box_uint64(x_8);
x_20 = lean_apply_9(x_2, x_13, x_14, x_16, x_11, x_17, x_9, x_18, x_7, x_19);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_21 = lean_apply_1(x_3, x_1);
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_22 = lean_apply_1(x_3, x_1);
return x_22;
}
}
else
{
lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_2);
x_23 = lean_apply_1(x_3, x_1);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_2);
x_24 = lean_apply_1(x_3, x_1);
return x_24;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(x_1);
switch (lean_obj_tag(x_5)) {
case 2:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 3:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(x_1);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec_match__3___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_12 = lean_box(x_11);
switch (lean_obj_tag(x_12)) {
case 2:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get_size(x_3);
x_14 = lean_unsigned_to_nat(5u);
x_15 = lean_nat_dec_lt(x_14, x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_5);
x_16 = lean_box(0);
x_17 = lean_apply_6(x_4, x_16, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_array_fget(x_3, x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_whnf(x_18, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 5)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 5)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 5)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 4)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Lean_Meta_getConstNoEx_x3f(x_26, x_6, x_7, x_8, x_9, x_24);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
lean_dec(x_13);
lean_dec(x_5);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_box(0);
x_31 = lean_apply_6(x_4, x_30, x_6, x_7, x_8, x_9, x_29);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_28, 0);
lean_inc(x_32);
lean_dec(x_28);
if (lean_obj_tag(x_32) == 4)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_ctor_get_uint8(x_33, sizeof(void*)*1);
lean_dec(x_33);
x_35 = lean_box(x_34);
if (lean_obj_tag(x_35) == 1)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_4);
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_dec(x_27);
x_37 = l_Lean_instInhabitedExpr;
x_38 = lean_unsigned_to_nat(3u);
x_39 = lean_array_get(x_37, x_3, x_38);
x_40 = l_Lean_mkApp(x_39, x_25);
x_41 = lean_unsigned_to_nat(6u);
x_42 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_13, x_3, x_41, x_40);
lean_dec(x_13);
x_43 = lean_apply_6(x_5, x_42, x_6, x_7, x_8, x_9, x_36);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_13);
lean_dec(x_5);
x_44 = lean_ctor_get(x_27, 1);
lean_inc(x_44);
lean_dec(x_27);
x_45 = lean_box(0);
x_46 = lean_apply_6(x_4, x_45, x_6, x_7, x_8, x_9, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_32);
lean_dec(x_25);
lean_dec(x_13);
lean_dec(x_5);
x_47 = lean_ctor_get(x_27, 1);
lean_inc(x_47);
lean_dec(x_27);
x_48 = lean_box(0);
x_49 = lean_apply_6(x_4, x_48, x_6, x_7, x_8, x_9, x_47);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_5);
x_50 = lean_ctor_get(x_19, 1);
lean_inc(x_50);
lean_dec(x_19);
x_51 = lean_box(0);
x_52 = lean_apply_6(x_4, x_51, x_6, x_7, x_8, x_9, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_5);
x_53 = lean_ctor_get(x_19, 1);
lean_inc(x_53);
lean_dec(x_19);
x_54 = lean_box(0);
x_55 = lean_apply_6(x_4, x_54, x_6, x_7, x_8, x_9, x_53);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_5);
x_56 = lean_ctor_get(x_19, 1);
lean_inc(x_56);
lean_dec(x_19);
x_57 = lean_box(0);
x_58 = lean_apply_6(x_4, x_57, x_6, x_7, x_8, x_9, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_5);
x_59 = lean_ctor_get(x_19, 1);
lean_inc(x_59);
lean_dec(x_19);
x_60 = lean_box(0);
x_61 = lean_apply_6(x_4, x_60, x_6, x_7, x_8, x_9, x_59);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_62 = !lean_is_exclusive(x_19);
if (x_62 == 0)
{
return x_19;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_19, 0);
x_64 = lean_ctor_get(x_19, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_19);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
case 3:
{
lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_66 = lean_array_get_size(x_3);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_dec_lt(x_67, x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_66);
lean_dec(x_5);
x_69 = lean_box(0);
x_70 = lean_apply_6(x_4, x_69, x_6, x_7, x_8, x_9, x_10);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_array_fget(x_3, x_67);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_72 = l_Lean_Meta_whnf(x_71, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
if (lean_obj_tag(x_73) == 5)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 5)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
lean_dec(x_74);
if (lean_obj_tag(x_75) == 5)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
lean_dec(x_75);
if (lean_obj_tag(x_76) == 4)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_dec(x_72);
x_78 = lean_ctor_get(x_73, 1);
lean_inc(x_78);
lean_dec(x_73);
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec(x_76);
x_80 = l_Lean_Meta_getConstNoEx_x3f(x_79, x_6, x_7, x_8, x_9, x_77);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_78);
lean_dec(x_66);
lean_dec(x_5);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_box(0);
x_84 = lean_apply_6(x_4, x_83, x_6, x_7, x_8, x_9, x_82);
return x_84;
}
else
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_81, 0);
lean_inc(x_85);
lean_dec(x_81);
if (lean_obj_tag(x_85) == 4)
{
lean_object* x_86; uint8_t x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_ctor_get_uint8(x_86, sizeof(void*)*1);
lean_dec(x_86);
x_88 = lean_box(x_87);
if (lean_obj_tag(x_88) == 1)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_4);
x_89 = lean_ctor_get(x_80, 1);
lean_inc(x_89);
lean_dec(x_80);
x_90 = l_Lean_instInhabitedExpr;
x_91 = lean_unsigned_to_nat(3u);
x_92 = lean_array_get(x_90, x_3, x_91);
x_93 = l_Lean_mkApp(x_92, x_78);
x_94 = lean_unsigned_to_nat(5u);
x_95 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_66, x_3, x_94, x_93);
lean_dec(x_66);
x_96 = lean_apply_6(x_5, x_95, x_6, x_7, x_8, x_9, x_89);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_88);
lean_dec(x_78);
lean_dec(x_66);
lean_dec(x_5);
x_97 = lean_ctor_get(x_80, 1);
lean_inc(x_97);
lean_dec(x_80);
x_98 = lean_box(0);
x_99 = lean_apply_6(x_4, x_98, x_6, x_7, x_8, x_9, x_97);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_85);
lean_dec(x_78);
lean_dec(x_66);
lean_dec(x_5);
x_100 = lean_ctor_get(x_80, 1);
lean_inc(x_100);
lean_dec(x_80);
x_101 = lean_box(0);
x_102 = lean_apply_6(x_4, x_101, x_6, x_7, x_8, x_9, x_100);
return x_102;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_76);
lean_dec(x_73);
lean_dec(x_66);
lean_dec(x_5);
x_103 = lean_ctor_get(x_72, 1);
lean_inc(x_103);
lean_dec(x_72);
x_104 = lean_box(0);
x_105 = lean_apply_6(x_4, x_104, x_6, x_7, x_8, x_9, x_103);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_75);
lean_dec(x_73);
lean_dec(x_66);
lean_dec(x_5);
x_106 = lean_ctor_get(x_72, 1);
lean_inc(x_106);
lean_dec(x_72);
x_107 = lean_box(0);
x_108 = lean_apply_6(x_4, x_107, x_6, x_7, x_8, x_9, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_66);
lean_dec(x_5);
x_109 = lean_ctor_get(x_72, 1);
lean_inc(x_109);
lean_dec(x_72);
x_110 = lean_box(0);
x_111 = lean_apply_6(x_4, x_110, x_6, x_7, x_8, x_9, x_109);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_73);
lean_dec(x_66);
lean_dec(x_5);
x_112 = lean_ctor_get(x_72, 1);
lean_inc(x_112);
lean_dec(x_72);
x_113 = lean_box(0);
x_114 = lean_apply_6(x_4, x_113, x_6, x_7, x_8, x_9, x_112);
return x_114;
}
}
else
{
uint8_t x_115; 
lean_dec(x_66);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_115 = !lean_is_exclusive(x_72);
if (x_115 == 0)
{
return x_72;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_72, 0);
x_117 = lean_ctor_get(x_72, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_72);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
default: 
{
lean_object* x_119; lean_object* x_120; 
lean_dec(x_12);
lean_dec(x_5);
x_119 = lean_box(0);
x_120 = lean_apply_6(x_4, x_119, x_6, x_7, x_8, x_9, x_10);
return x_120;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
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
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getStuckMVar_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 4:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
case 7:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_apply_1(x_4, x_1);
return x_11;
}
}
}
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getStuckMVar_x3f_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_2, x_5, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_9, x_10, x_12);
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
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getStuckMVar_x3f_match__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_3(x_4, x_1, x_7, x_9);
return x_10;
}
case 5:
{
lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_4(x_5, x_1, x_11, x_12, x_14);
return x_15;
}
case 10:
{
lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_19 = lean_box_uint64(x_18);
x_20 = lean_apply_3(x_2, x_16, x_17, x_19);
return x_20;
}
case 11:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
x_26 = lean_apply_4(x_3, x_21, x_22, x_23, x_25);
return x_26;
}
default: 
{
lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_apply_1(x_6, x_1);
return x_27;
}
}
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getStuckMVar_x3f_match__4___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isRecStuck_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_RecursorVal_getMajorIdx(x_1);
x_11 = lean_array_get_size(x_3);
x_12 = lean_nat_dec_lt(x_10, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_3, x_10);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Meta_whnf(x_15, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_getStuckMVar_x3f(x_17, x_4, x_5, x_6, x_7, x_18);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
}
}
lean_object* l_Lean_Meta_getStuckMVar_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_instantiateMVars(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 2)
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_dec(x_7);
x_1 = x_8;
x_6 = x_17;
goto _start;
}
}
else
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
case 5:
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = l_Lean_Expr_getAppFn(x_23);
lean_dec(x_23);
switch (lean_obj_tag(x_24)) {
case 2:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_6);
return x_27;
}
case 4:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_24, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Lean_Meta_getConstNoEx_x3f(x_28, x_2, x_3, x_4, x_5, x_6);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set(x_30, 0, x_34);
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_dec(x_30);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_31, 0);
lean_inc(x_38);
lean_dec(x_31);
switch (lean_obj_tag(x_38)) {
case 4:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_dec(x_30);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_levelZero;
x_42 = l_Lean_mkSort(x_41);
x_43 = lean_unsigned_to_nat(0u);
x_44 = l_Lean_Expr_getAppNumArgsAux(x_1, x_43);
lean_inc(x_44);
x_45 = lean_mk_array(x_44, x_42);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_sub(x_44, x_46);
lean_dec(x_44);
x_48 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_45, x_47);
x_49 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isQuotRecStuck_x3f(x_40, x_29, x_48, x_2, x_3, x_4, x_5, x_39);
lean_dec(x_48);
lean_dec(x_29);
lean_dec(x_40);
return x_49;
}
case 7:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_50 = lean_ctor_get(x_30, 1);
lean_inc(x_50);
lean_dec(x_30);
x_51 = lean_ctor_get(x_38, 0);
lean_inc(x_51);
lean_dec(x_38);
x_52 = l_Lean_levelZero;
x_53 = l_Lean_mkSort(x_52);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Lean_Expr_getAppNumArgsAux(x_1, x_54);
lean_inc(x_55);
x_56 = lean_mk_array(x_55, x_53);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_sub(x_55, x_57);
lean_dec(x_55);
x_59 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_56, x_58);
x_60 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isRecStuck_x3f(x_51, x_29, x_59, x_2, x_3, x_4, x_5, x_50);
lean_dec(x_59);
lean_dec(x_29);
lean_dec(x_51);
return x_60;
}
default: 
{
uint8_t x_61; 
lean_dec(x_38);
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_30);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_30, 0);
lean_dec(x_62);
x_63 = lean_box(0);
lean_ctor_set(x_30, 0, x_63);
return x_30;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_30, 1);
lean_inc(x_64);
lean_dec(x_30);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
}
default: 
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_24);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_6);
return x_68;
}
}
}
case 10:
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
lean_dec(x_1);
x_1 = x_69;
goto _start;
}
case 11:
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_1, 2);
lean_inc(x_71);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_72 = l_Lean_Meta_whnf(x_71, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_1 = x_73;
x_6 = x_74;
goto _start;
}
else
{
uint8_t x_76; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_72);
if (x_76 == 0)
{
return x_72;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_72, 0);
x_78 = lean_ctor_get(x_72, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_72);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
default: 
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_6);
return x_81;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isQuotRecStuck_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_10 = lean_box(x_9);
switch (lean_obj_tag(x_10)) {
case 2:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_unsigned_to_nat(5u);
x_13 = lean_nat_dec_lt(x_12, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_array_fget(x_3, x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_whnf(x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_getStuckMVar_x3f(x_18, x_4, x_5, x_6, x_7, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
case 3:
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_array_get_size(x_3);
x_26 = lean_unsigned_to_nat(4u);
x_27 = lean_nat_dec_lt(x_26, x_25);
lean_dec(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_8);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_array_fget(x_3, x_26);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Meta_whnf(x_30, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Meta_getStuckMVar_x3f(x_32, x_4, x_5, x_6, x_7, x_33);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
default: 
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_8);
return x_40;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isRecStuck_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isRecStuck_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isQuotRecStuck_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isQuotRecStuck_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_9 = lean_box(x_8);
x_10 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
lean_dec(x_1);
x_17 = lean_box(x_16);
x_18 = lean_apply_6(x_3, x_11, x_12, x_13, x_14, x_15, x_17);
return x_18;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_16 = lean_box_uint64(x_15);
x_17 = lean_apply_2(x_6, x_14, x_16);
return x_17;
}
case 1:
{
lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_20 = lean_box_uint64(x_19);
x_21 = lean_apply_2(x_12, x_18, x_20);
return x_21;
}
case 2:
{
lean_object* x_22; uint64_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_24 = lean_box_uint64(x_23);
x_25 = lean_apply_2(x_13, x_22, x_24);
return x_25;
}
case 3:
{
lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_28 = lean_box_uint64(x_27);
x_29 = lean_apply_2(x_4, x_26, x_28);
return x_29;
}
case 4:
{
lean_object* x_30; lean_object* x_31; uint64_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_13);
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
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_33 = lean_box_uint64(x_32);
x_34 = lean_apply_3(x_8, x_30, x_31, x_33);
return x_34;
}
case 5:
{
lean_object* x_35; lean_object* x_36; uint64_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_38 = lean_box_uint64(x_37);
x_39 = lean_apply_3(x_9, x_35, x_36, x_38);
return x_39;
}
case 6:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint64_t x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_44 = lean_box_uint64(x_43);
x_45 = lean_apply_4(x_3, x_40, x_41, x_42, x_44);
return x_45;
}
case 7:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = lean_ctor_get(x_1, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 2);
lean_inc(x_48);
x_49 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_50 = lean_box_uint64(x_49);
x_51 = lean_apply_4(x_2, x_46, x_47, x_48, x_50);
return x_51;
}
case 8:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint64_t x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 3);
lean_inc(x_55);
x_56 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_57 = lean_box_uint64(x_56);
x_58 = lean_apply_5(x_7, x_52, x_53, x_54, x_55, x_57);
return x_58;
}
case 9:
{
lean_object* x_59; uint64_t x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
x_60 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_61 = lean_box_uint64(x_60);
x_62 = lean_apply_2(x_5, x_59, x_61);
return x_62;
}
case 10:
{
lean_object* x_63; lean_object* x_64; uint64_t x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
x_65 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_66 = lean_box_uint64(x_65);
x_67 = lean_apply_3(x_11, x_63, x_64, x_66);
return x_67;
}
default: 
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint64_t x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 2);
lean_inc(x_70);
x_71 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_72 = lean_box_uint64(x_71);
x_73 = lean_apply_4(x_10, x_68, x_69, x_70, x_72);
return x_73;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases_match__3___rarg), 13, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_8, 0, lean_box(0));
x_9 = lean_mk_string("Lean.Meta.WHNF");
x_10 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.whnfEasyCases");
x_11 = lean_unsigned_to_nat(209u);
x_12 = lean_unsigned_to_nat(26u);
x_13 = lean_mk_string("unreachable code has been reached");
x_14 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
x_15 = lean_panic_fn(x_8, x_14);
x_16 = lean_apply_5(x_15, x_3, x_4, x_5, x_6, x_7);
return x_16;
}
case 1:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_inc(x_3);
lean_inc(x_17);
x_18 = l_Lean_Meta_getLocalDecl(x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_ctor_get(x_19, 4);
lean_inc(x_25);
x_26 = lean_ctor_get_uint8(x_19, sizeof(void*)*5);
lean_dec(x_19);
x_27 = l_Lean_Meta_getConfig(x_3, x_4, x_5, x_6, x_24);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
if (x_26 == 0)
{
lean_object* x_57; 
lean_free_object(x_27);
lean_dec(x_1);
x_57 = lean_box(0);
x_31 = x_57;
goto block_56;
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_29, 6);
if (x_58 == 0)
{
lean_dec(x_29);
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
else
{
lean_object* x_59; 
lean_free_object(x_27);
lean_dec(x_1);
x_59 = lean_box(0);
x_31 = x_59;
goto block_56;
}
}
block_56:
{
uint8_t x_32; 
lean_dec(x_31);
x_32 = lean_ctor_get_uint8(x_29, 7);
lean_dec(x_29);
if (x_32 == 0)
{
lean_dec(x_17);
x_1 = x_25;
x_7 = x_30;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_st_ref_get(x_6, x_30);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_take(x_4, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_37, 2);
x_41 = lean_box(0);
x_42 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_40, x_17, x_41);
lean_ctor_set(x_37, 2, x_42);
x_43 = lean_st_ref_set(x_4, x_37, x_38);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_1 = x_25;
x_7 = x_44;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
x_48 = lean_ctor_get(x_37, 2);
x_49 = lean_ctor_get(x_37, 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_50 = lean_box(0);
x_51 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_48, x_17, x_50);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_47);
lean_ctor_set(x_52, 2, x_51);
lean_ctor_set(x_52, 3, x_49);
x_53 = lean_st_ref_set(x_4, x_52, x_38);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_1 = x_25;
x_7 = x_54;
goto _start;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_27, 0);
x_61 = lean_ctor_get(x_27, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_27);
if (x_26 == 0)
{
lean_object* x_82; 
lean_dec(x_1);
x_82 = lean_box(0);
x_62 = x_82;
goto block_81;
}
else
{
uint8_t x_83; 
x_83 = lean_ctor_get_uint8(x_60, 6);
if (x_83 == 0)
{
lean_object* x_84; 
lean_dec(x_60);
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_61);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_1);
x_85 = lean_box(0);
x_62 = x_85;
goto block_81;
}
}
block_81:
{
uint8_t x_63; 
lean_dec(x_62);
x_63 = lean_ctor_get_uint8(x_60, 7);
lean_dec(x_60);
if (x_63 == 0)
{
lean_dec(x_17);
x_1 = x_25;
x_7 = x_61;
goto _start;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_65 = lean_st_ref_get(x_6, x_61);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_take(x_4, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_68, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_68, 3);
lean_inc(x_73);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 lean_ctor_release(x_68, 2);
 lean_ctor_release(x_68, 3);
 x_74 = x_68;
} else {
 lean_dec_ref(x_68);
 x_74 = lean_box(0);
}
x_75 = lean_box(0);
x_76 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_72, x_17, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 4, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_71);
lean_ctor_set(x_77, 2, x_76);
lean_ctor_set(x_77, 3, x_73);
x_78 = lean_st_ref_set(x_4, x_77, x_69);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_1 = x_25;
x_7 = x_79;
goto _start;
}
}
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_18);
if (x_86 == 0)
{
return x_18;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_18, 0);
x_88 = lean_ctor_get(x_18, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_18);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
case 2:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_1, 0);
lean_inc(x_90);
x_91 = l_Lean_Meta_getExprMVarAssignment_x3f(x_90, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
uint8_t x_93; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_91);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_91, 0);
lean_dec(x_94);
lean_ctor_set(x_91, 0, x_1);
return x_91;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_91, 1);
lean_inc(x_95);
lean_dec(x_91);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_1);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_1);
x_97 = lean_ctor_get(x_91, 1);
lean_inc(x_97);
lean_dec(x_91);
x_98 = lean_ctor_get(x_92, 0);
lean_inc(x_98);
lean_dec(x_92);
x_1 = x_98;
x_7 = x_97;
goto _start;
}
}
case 4:
{
lean_object* x_100; 
x_100 = lean_apply_6(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
return x_100;
}
case 5:
{
lean_object* x_101; 
x_101 = lean_apply_6(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
return x_101;
}
case 8:
{
lean_object* x_102; 
x_102 = lean_apply_6(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
return x_102;
}
case 10:
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_1, 1);
lean_inc(x_103);
lean_dec(x_1);
x_1 = x_103;
goto _start;
}
case 11:
{
lean_object* x_105; 
x_105 = lean_apply_6(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
return x_105;
}
default: 
{
lean_object* x_106; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_1);
lean_ctor_set(x_106, 1, x_7);
return x_106;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
uint8_t l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("idRhs");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_Expr_isAppOf(x_1, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = l_Lean_levelZero;
x_4 = l_Lean_mkSort(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Expr_getAppNumArgsAux(x_1, x_5);
lean_inc(x_6);
x_7 = lean_mk_array(x_6, x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_6, x_8);
lean_dec(x_6);
lean_inc(x_1);
x_10 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_7, x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_dec_lt(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = l_Lean_instInhabitedExpr;
x_15 = lean_array_get(x_14, x_10, x_8);
x_16 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_11, x_10, x_12, x_15);
lean_dec(x_10);
lean_dec(x_11);
return x_16;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_1;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Lean_ConstantInfo_levelParams(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthAux___rarg(x_5, x_6);
lean_dec(x_5);
x_8 = l_List_lengthAux___rarg(x_2, x_6);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_12 = lean_instantiate_value_lparams(x_1, x_2);
x_13 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_12);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_ConstantInfo_levelParams(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthAux___rarg(x_6, x_7);
lean_dec(x_6);
x_9 = l_List_lengthAux___rarg(x_2, x_7);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_13 = lean_instantiate_value_lparams(x_1, x_2);
x_14 = l_Lean_Expr_betaRev(x_13, x_3);
lean_dec(x_13);
x_15 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_14);
x_16 = lean_apply_1(x_5, x_15);
return x_16;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceMatcher_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_reduceMatcher_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceMatcher_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, size_t x_9, size_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_10 < x_9;
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_array_uget(x_8, x_10);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_11, 1);
x_22 = lean_ctor_get(x_11, 0);
lean_dec(x_22);
x_23 = lean_expr_eqv(x_6, x_19);
lean_dec(x_19);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; 
lean_free_object(x_11);
x_24 = lean_box(0);
lean_inc(x_7);
x_25 = l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1(x_7, x_21, x_24, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_21);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 1;
x_30 = x_10 + x_29;
x_10 = x_30;
x_11 = x_28;
x_16 = x_27;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_7);
x_32 = l_Lean_instInhabitedExpr;
x_33 = lean_array_get(x_32, x_2, x_21);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l_Lean_Expr_getAppNumArgsAux(x_5, x_34);
lean_inc(x_35);
x_36 = lean_mk_array(x_35, x_1);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_sub(x_35, x_37);
lean_dec(x_35);
x_39 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_5, x_36, x_38);
x_40 = l_Lean_mkAppN(x_33, x_39);
lean_dec(x_39);
x_41 = l_Array_toSubarray___rarg(x_2, x_4, x_3);
x_42 = l_Array_ofSubarray___rarg(x_41);
lean_dec(x_41);
x_43 = l_Lean_mkAppN(x_40, x_42);
lean_dec(x_42);
x_44 = l_Lean_Expr_headBeta(x_43);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_11, 0, x_46);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_11);
lean_ctor_set(x_47, 1, x_16);
return x_47;
}
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_11, 1);
lean_inc(x_48);
lean_dec(x_11);
x_49 = lean_expr_eqv(x_6, x_19);
lean_dec(x_19);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; size_t x_55; size_t x_56; 
x_50 = lean_box(0);
lean_inc(x_7);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1(x_7, x_48, x_50, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_48);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec(x_52);
x_55 = 1;
x_56 = x_10 + x_55;
x_10 = x_56;
x_11 = x_54;
x_16 = x_53;
goto _start;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_7);
x_58 = l_Lean_instInhabitedExpr;
x_59 = lean_array_get(x_58, x_2, x_48);
x_60 = lean_unsigned_to_nat(0u);
x_61 = l_Lean_Expr_getAppNumArgsAux(x_5, x_60);
lean_inc(x_61);
x_62 = lean_mk_array(x_61, x_1);
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_sub(x_61, x_63);
lean_dec(x_61);
x_65 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_5, x_62, x_64);
x_66 = l_Lean_mkAppN(x_59, x_65);
lean_dec(x_65);
x_67 = l_Array_toSubarray___rarg(x_2, x_4, x_3);
x_68 = l_Array_ofSubarray___rarg(x_67);
lean_dec(x_67);
x_69 = l_Lean_mkAppN(x_66, x_68);
lean_dec(x_68);
x_70 = l_Lean_Expr_headBeta(x_69);
x_71 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_48);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_16);
return x_74;
}
}
}
}
}
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_mkAppN(x_1, x_7);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_15 = l_Lean_Meta_whnf(x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Expr_getAppFn(x_16);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_2);
x_21 = lean_array_get_size(x_7);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
lean_inc(x_16);
x_24 = l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1(x_3, x_4, x_5, x_6, x_16, x_18, x_19, x_7, x_22, x_23, x_20, x_9, x_10, x_11, x_12, x_17);
lean_dec(x_18);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_box(0);
x_29 = l_Lean_Meta_reduceMatcher_x3f___lambda__1(x_16, x_28, x_9, x_10, x_11, x_12, x_27);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_30 = !lean_is_exclusive(x_24);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_24, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_32);
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 1);
lean_inc(x_33);
lean_dec(x_24);
x_34 = lean_ctor_get(x_26, 0);
lean_inc(x_34);
lean_dec(x_26);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
}
lean_object* l_Lean_Meta_reduceMatcher_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_7) == 4)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Meta_getMatcherInfo_x3f(x_8, x_2, x_3, x_4, x_5, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(2);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(2);
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
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_10, 1);
x_20 = lean_ctor_get(x_10, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = l_Lean_levelZero;
x_24 = l_Lean_mkSort(x_23);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_Expr_getAppNumArgsAux(x_1, x_25);
lean_inc(x_24);
lean_inc(x_26);
x_27 = lean_mk_array(x_26, x_24);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_26, x_28);
lean_dec(x_26);
x_30 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_27, x_29);
x_31 = lean_ctor_get(x_22, 0);
lean_inc(x_31);
x_32 = lean_nat_add(x_31, x_28);
lean_dec(x_31);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
x_34 = lean_nat_add(x_32, x_33);
lean_dec(x_33);
lean_dec(x_32);
x_35 = lean_array_get_size(x_30);
x_36 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_22);
lean_dec(x_22);
x_37 = lean_nat_add(x_34, x_36);
x_38 = lean_nat_dec_lt(x_35, x_37);
if (x_38 == 0)
{
lean_object* x_39; 
lean_free_object(x_10);
x_39 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_8, x_2, x_3, x_4, x_5, x_19);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_instantiate_value_lparams(x_40, x_9);
lean_dec(x_9);
lean_dec(x_40);
lean_inc(x_34);
lean_inc(x_30);
x_43 = l_Array_toSubarray___rarg(x_30, x_25, x_34);
x_44 = l_Array_ofSubarray___rarg(x_43);
lean_dec(x_43);
x_45 = l_Lean_mkAppN(x_42, x_44);
lean_dec(x_44);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_45);
x_46 = l_Lean_Meta_inferType(x_45, x_2, x_3, x_4, x_5, x_41);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_ctor_set(x_11, 0, x_36);
x_49 = lean_alloc_closure((void*)(l_Lean_Meta_reduceMatcher_x3f___lambda__2___boxed), 13, 6);
lean_closure_set(x_49, 0, x_45);
lean_closure_set(x_49, 1, x_34);
lean_closure_set(x_49, 2, x_24);
lean_closure_set(x_49, 3, x_30);
lean_closure_set(x_49, 4, x_35);
lean_closure_set(x_49, 5, x_37);
x_50 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_47, x_11, x_49, x_2, x_3, x_4, x_5, x_48);
return x_50;
}
else
{
uint8_t x_51; 
lean_dec(x_45);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_30);
lean_dec(x_24);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_46);
if (x_51 == 0)
{
return x_46;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_46, 0);
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_46);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_30);
lean_dec(x_24);
lean_free_object(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_39);
if (x_55 == 0)
{
return x_39;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_39, 0);
x_57 = lean_ctor_get(x_39, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_39);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_30);
lean_dec(x_24);
lean_free_object(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = lean_box(3);
lean_ctor_set(x_10, 0, x_59);
return x_10;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_60 = lean_ctor_get(x_11, 0);
lean_inc(x_60);
lean_dec(x_11);
x_61 = l_Lean_levelZero;
x_62 = l_Lean_mkSort(x_61);
x_63 = lean_unsigned_to_nat(0u);
x_64 = l_Lean_Expr_getAppNumArgsAux(x_1, x_63);
lean_inc(x_62);
lean_inc(x_64);
x_65 = lean_mk_array(x_64, x_62);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_sub(x_64, x_66);
lean_dec(x_64);
x_68 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_65, x_67);
x_69 = lean_ctor_get(x_60, 0);
lean_inc(x_69);
x_70 = lean_nat_add(x_69, x_66);
lean_dec(x_69);
x_71 = lean_ctor_get(x_60, 1);
lean_inc(x_71);
x_72 = lean_nat_add(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
x_73 = lean_array_get_size(x_68);
x_74 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_60);
lean_dec(x_60);
x_75 = lean_nat_add(x_72, x_74);
x_76 = lean_nat_dec_lt(x_73, x_75);
if (x_76 == 0)
{
lean_object* x_77; 
lean_free_object(x_10);
x_77 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_8, x_2, x_3, x_4, x_5, x_19);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_instantiate_value_lparams(x_78, x_9);
lean_dec(x_9);
lean_dec(x_78);
lean_inc(x_72);
lean_inc(x_68);
x_81 = l_Array_toSubarray___rarg(x_68, x_63, x_72);
x_82 = l_Array_ofSubarray___rarg(x_81);
lean_dec(x_81);
x_83 = l_Lean_mkAppN(x_80, x_82);
lean_dec(x_82);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_83);
x_84 = l_Lean_Meta_inferType(x_83, x_2, x_3, x_4, x_5, x_79);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_74);
x_88 = lean_alloc_closure((void*)(l_Lean_Meta_reduceMatcher_x3f___lambda__2___boxed), 13, 6);
lean_closure_set(x_88, 0, x_83);
lean_closure_set(x_88, 1, x_72);
lean_closure_set(x_88, 2, x_62);
lean_closure_set(x_88, 3, x_68);
lean_closure_set(x_88, 4, x_73);
lean_closure_set(x_88, 5, x_75);
x_89 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_85, x_87, x_88, x_2, x_3, x_4, x_5, x_86);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_83);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_68);
lean_dec(x_62);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_92 = x_84;
} else {
 lean_dec_ref(x_84);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_68);
lean_dec(x_62);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_94 = lean_ctor_get(x_77, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_77, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_96 = x_77;
} else {
 lean_dec_ref(x_77);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
lean_object* x_98; 
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_68);
lean_dec(x_62);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_98 = lean_box(3);
lean_ctor_set(x_10, 0, x_98);
return x_10;
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_99 = lean_ctor_get(x_10, 1);
lean_inc(x_99);
lean_dec(x_10);
x_100 = lean_ctor_get(x_11, 0);
lean_inc(x_100);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_101 = x_11;
} else {
 lean_dec_ref(x_11);
 x_101 = lean_box(0);
}
x_102 = l_Lean_levelZero;
x_103 = l_Lean_mkSort(x_102);
x_104 = lean_unsigned_to_nat(0u);
x_105 = l_Lean_Expr_getAppNumArgsAux(x_1, x_104);
lean_inc(x_103);
lean_inc(x_105);
x_106 = lean_mk_array(x_105, x_103);
x_107 = lean_unsigned_to_nat(1u);
x_108 = lean_nat_sub(x_105, x_107);
lean_dec(x_105);
x_109 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_106, x_108);
x_110 = lean_ctor_get(x_100, 0);
lean_inc(x_110);
x_111 = lean_nat_add(x_110, x_107);
lean_dec(x_110);
x_112 = lean_ctor_get(x_100, 1);
lean_inc(x_112);
x_113 = lean_nat_add(x_111, x_112);
lean_dec(x_112);
lean_dec(x_111);
x_114 = lean_array_get_size(x_109);
x_115 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_100);
lean_dec(x_100);
x_116 = lean_nat_add(x_113, x_115);
x_117 = lean_nat_dec_lt(x_114, x_116);
if (x_117 == 0)
{
lean_object* x_118; 
x_118 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_8, x_2, x_3, x_4, x_5, x_99);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = lean_instantiate_value_lparams(x_119, x_9);
lean_dec(x_9);
lean_dec(x_119);
lean_inc(x_113);
lean_inc(x_109);
x_122 = l_Array_toSubarray___rarg(x_109, x_104, x_113);
x_123 = l_Array_ofSubarray___rarg(x_122);
lean_dec(x_122);
x_124 = l_Lean_mkAppN(x_121, x_123);
lean_dec(x_123);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_124);
x_125 = l_Lean_Meta_inferType(x_124, x_2, x_3, x_4, x_5, x_120);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
if (lean_is_scalar(x_101)) {
 x_128 = lean_alloc_ctor(1, 1, 0);
} else {
 x_128 = x_101;
}
lean_ctor_set(x_128, 0, x_115);
x_129 = lean_alloc_closure((void*)(l_Lean_Meta_reduceMatcher_x3f___lambda__2___boxed), 13, 6);
lean_closure_set(x_129, 0, x_124);
lean_closure_set(x_129, 1, x_113);
lean_closure_set(x_129, 2, x_103);
lean_closure_set(x_129, 3, x_109);
lean_closure_set(x_129, 4, x_114);
lean_closure_set(x_129, 5, x_116);
x_130 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_126, x_128, x_129, x_2, x_3, x_4, x_5, x_127);
return x_130;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_109);
lean_dec(x_103);
lean_dec(x_101);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_131 = lean_ctor_get(x_125, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_125, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_133 = x_125;
} else {
 lean_dec_ref(x_125);
 x_133 = lean_box(0);
}
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_109);
lean_dec(x_103);
lean_dec(x_101);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_135 = lean_ctor_get(x_118, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_118, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_137 = x_118;
} else {
 lean_dec_ref(x_118);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; 
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_109);
lean_dec(x_103);
lean_dec(x_101);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_139 = lean_box(3);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_99);
return x_140;
}
}
}
}
else
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = lean_box(2);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_6);
return x_142;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_18 = lean_unbox_usize(x_10);
lean_dec(x_10);
x_19 = l_Array_forInUnsafe_loop___at_Lean_Meta_reduceMatcher_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17, x_18, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
return x_19;
}
}
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_reduceMatcher_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_reduceMatcher_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_reduceMatcher_x3f___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
return x_14;
}
}
lean_object* l_Lean_Meta_project_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
x_8 = l_Lean_Meta_whnf(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Meta_toCtorIfLit(x_10);
x_13 = l_Lean_Expr_getAppFn(x_12);
if (lean_obj_tag(x_13) == 4)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_free_object(x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_6, x_11);
lean_dec(x_6);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_environment_find(x_18, x_14);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
lean_dec(x_12);
x_20 = lean_box(0);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_19, 0);
if (lean_obj_tag(x_22) == 6)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_Expr_getAppNumArgsAux(x_12, x_24);
x_26 = lean_ctor_get(x_23, 3);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_nat_add(x_26, x_2);
lean_dec(x_26);
x_28 = lean_nat_dec_lt(x_27, x_25);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_27);
lean_dec(x_25);
lean_free_object(x_19);
lean_dec(x_12);
x_29 = lean_box(0);
lean_ctor_set(x_15, 0, x_29);
return x_15;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_nat_sub(x_25, x_27);
lean_dec(x_27);
lean_dec(x_25);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_sub(x_30, x_31);
lean_dec(x_30);
x_33 = l_Lean_Expr_getRevArg_x21(x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_19, 0, x_33);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
}
else
{
lean_object* x_34; 
lean_free_object(x_19);
lean_dec(x_22);
lean_dec(x_12);
x_34 = lean_box(0);
lean_ctor_set(x_15, 0, x_34);
return x_15;
}
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_19, 0);
lean_inc(x_35);
lean_dec(x_19);
if (lean_obj_tag(x_35) == 6)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Lean_Expr_getAppNumArgsAux(x_12, x_37);
x_39 = lean_ctor_get(x_36, 3);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_nat_add(x_39, x_2);
lean_dec(x_39);
x_41 = lean_nat_dec_lt(x_40, x_38);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_12);
x_42 = lean_box(0);
lean_ctor_set(x_15, 0, x_42);
return x_15;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_nat_sub(x_38, x_40);
lean_dec(x_40);
lean_dec(x_38);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_sub(x_43, x_44);
lean_dec(x_43);
x_46 = l_Lean_Expr_getRevArg_x21(x_12, x_45);
lean_dec(x_12);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_15, 0, x_47);
return x_15;
}
}
else
{
lean_object* x_48; 
lean_dec(x_35);
lean_dec(x_12);
x_48 = lean_box(0);
lean_ctor_set(x_15, 0, x_48);
return x_15;
}
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_15, 0);
x_50 = lean_ctor_get(x_15, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_15);
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_environment_find(x_51, x_14);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_12);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 x_56 = x_52;
} else {
 lean_dec_ref(x_52);
 x_56 = lean_box(0);
}
if (lean_obj_tag(x_55) == 6)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_unsigned_to_nat(0u);
x_59 = l_Lean_Expr_getAppNumArgsAux(x_12, x_58);
x_60 = lean_ctor_get(x_57, 3);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_nat_add(x_60, x_2);
lean_dec(x_60);
x_62 = lean_nat_dec_lt(x_61, x_59);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_12);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_50);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_nat_sub(x_59, x_61);
lean_dec(x_61);
lean_dec(x_59);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_sub(x_65, x_66);
lean_dec(x_65);
x_68 = l_Lean_Expr_getRevArg_x21(x_12, x_67);
lean_dec(x_12);
if (lean_is_scalar(x_56)) {
 x_69 = lean_alloc_ctor(1, 1, 0);
} else {
 x_69 = x_56;
}
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_50);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_12);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_50);
return x_72;
}
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_6);
x_73 = lean_box(0);
lean_ctor_set(x_8, 0, x_73);
return x_8;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_74 = lean_ctor_get(x_8, 0);
x_75 = lean_ctor_get(x_8, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_8);
x_76 = l_Lean_Meta_toCtorIfLit(x_74);
x_77 = l_Lean_Expr_getAppFn(x_76);
if (lean_obj_tag(x_77) == 4)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_st_ref_get(x_6, x_75);
lean_dec(x_6);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_82 = x_79;
} else {
 lean_dec_ref(x_79);
 x_82 = lean_box(0);
}
x_83 = lean_ctor_get(x_80, 0);
lean_inc(x_83);
lean_dec(x_80);
x_84 = lean_environment_find(x_83, x_78);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_76);
x_85 = lean_box(0);
if (lean_is_scalar(x_82)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_82;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_81);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_84, 0);
lean_inc(x_87);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 x_88 = x_84;
} else {
 lean_dec_ref(x_84);
 x_88 = lean_box(0);
}
if (lean_obj_tag(x_87) == 6)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_89 = lean_ctor_get(x_87, 0);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_unsigned_to_nat(0u);
x_91 = l_Lean_Expr_getAppNumArgsAux(x_76, x_90);
x_92 = lean_ctor_get(x_89, 3);
lean_inc(x_92);
lean_dec(x_89);
x_93 = lean_nat_add(x_92, x_2);
lean_dec(x_92);
x_94 = lean_nat_dec_lt(x_93, x_91);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_88);
lean_dec(x_76);
x_95 = lean_box(0);
if (lean_is_scalar(x_82)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_82;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_81);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_97 = lean_nat_sub(x_91, x_93);
lean_dec(x_93);
lean_dec(x_91);
x_98 = lean_unsigned_to_nat(1u);
x_99 = lean_nat_sub(x_97, x_98);
lean_dec(x_97);
x_100 = l_Lean_Expr_getRevArg_x21(x_76, x_99);
lean_dec(x_76);
if (lean_is_scalar(x_88)) {
 x_101 = lean_alloc_ctor(1, 1, 0);
} else {
 x_101 = x_88;
}
lean_ctor_set(x_101, 0, x_100);
if (lean_is_scalar(x_82)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_82;
}
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_81);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_76);
x_103 = lean_box(0);
if (lean_is_scalar(x_82)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_82;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_81);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_6);
x_105 = lean_box(0);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_75);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_6);
x_107 = !lean_is_exclusive(x_8);
if (x_107 == 0)
{
return x_8;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_8, 0);
x_109 = lean_ctor_get(x_8, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_8);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
lean_object* l_Lean_Meta_project_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_project_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_reduceProj_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 11)
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
lean_object* l_Lean_Meta_reduceProj_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceProj_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 11)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Meta_project_x3f(x_8, x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_3(x_3, x_8, x_9, x_7);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_isMVar(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_mvarId_x21(x_1);
x_12 = l_Lean_Meta_getDelayedAssignment_x3f(x_11, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_12, 1);
x_24 = lean_ctor_get(x_12, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_22, 2);
lean_inc(x_26);
lean_dec(x_22);
x_27 = l_Lean_levelZero;
x_28 = l_Lean_mkSort(x_27);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Lean_Expr_getAppNumArgsAux(x_2, x_29);
lean_inc(x_30);
x_31 = lean_mk_array(x_30, x_28);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_sub(x_30, x_32);
lean_dec(x_30);
x_34 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_31, x_33);
x_35 = lean_array_get_size(x_34);
x_36 = lean_array_get_size(x_25);
x_37 = lean_nat_dec_lt(x_35, x_36);
if (x_37 == 0)
{
lean_object* x_38; 
lean_free_object(x_12);
x_38 = l_Lean_Meta_instantiateMVars(x_26, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = l_Lean_Expr_hasExprMVar(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_expr_abstract(x_40, x_25);
lean_dec(x_25);
lean_dec(x_40);
x_43 = lean_expr_instantiate_rev_range(x_42, x_29, x_36, x_34);
lean_dec(x_42);
x_44 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_35, x_34, x_36, x_43);
lean_dec(x_34);
lean_dec(x_35);
lean_ctor_set(x_13, 0, x_44);
lean_ctor_set(x_38, 0, x_13);
return x_38;
}
else
{
lean_object* x_45; 
lean_dec(x_40);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_25);
lean_free_object(x_13);
x_45 = lean_box(0);
lean_ctor_set(x_38, 0, x_45);
return x_38;
}
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_38, 0);
x_47 = lean_ctor_get(x_38, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_38);
x_48 = l_Lean_Expr_hasExprMVar(x_46);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_expr_abstract(x_46, x_25);
lean_dec(x_25);
lean_dec(x_46);
x_50 = lean_expr_instantiate_rev_range(x_49, x_29, x_36, x_34);
lean_dec(x_49);
x_51 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_35, x_34, x_36, x_50);
lean_dec(x_34);
lean_dec(x_35);
lean_ctor_set(x_13, 0, x_51);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_13);
lean_ctor_set(x_52, 1, x_47);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_46);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_25);
lean_free_object(x_13);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_47);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_25);
lean_free_object(x_13);
x_55 = !lean_is_exclusive(x_38);
if (x_55 == 0)
{
return x_38;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_38, 0);
x_57 = lean_ctor_get(x_38, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_38);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_26);
lean_dec(x_25);
lean_free_object(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_59 = lean_box(0);
lean_ctor_set(x_12, 0, x_59);
return x_12;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_60 = lean_ctor_get(x_13, 0);
x_61 = lean_ctor_get(x_12, 1);
lean_inc(x_61);
lean_dec(x_12);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_60, 2);
lean_inc(x_63);
lean_dec(x_60);
x_64 = l_Lean_levelZero;
x_65 = l_Lean_mkSort(x_64);
x_66 = lean_unsigned_to_nat(0u);
x_67 = l_Lean_Expr_getAppNumArgsAux(x_2, x_66);
lean_inc(x_67);
x_68 = lean_mk_array(x_67, x_65);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_sub(x_67, x_69);
lean_dec(x_67);
x_71 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_68, x_70);
x_72 = lean_array_get_size(x_71);
x_73 = lean_array_get_size(x_62);
x_74 = lean_nat_dec_lt(x_72, x_73);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = l_Lean_Meta_instantiateMVars(x_63, x_3, x_4, x_5, x_6, x_61);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
x_79 = l_Lean_Expr_hasExprMVar(x_76);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_expr_abstract(x_76, x_62);
lean_dec(x_62);
lean_dec(x_76);
x_81 = lean_expr_instantiate_rev_range(x_80, x_66, x_73, x_71);
lean_dec(x_80);
x_82 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_72, x_71, x_73, x_81);
lean_dec(x_71);
lean_dec(x_72);
lean_ctor_set(x_13, 0, x_82);
if (lean_is_scalar(x_78)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_78;
}
lean_ctor_set(x_83, 0, x_13);
lean_ctor_set(x_83, 1, x_77);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; 
lean_dec(x_76);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_62);
lean_free_object(x_13);
x_84 = lean_box(0);
if (lean_is_scalar(x_78)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_78;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_77);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_62);
lean_free_object(x_13);
x_86 = lean_ctor_get(x_75, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_75, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_88 = x_75;
} else {
 lean_dec_ref(x_75);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_63);
lean_dec(x_62);
lean_free_object(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_61);
return x_91;
}
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_92 = lean_ctor_get(x_13, 0);
lean_inc(x_92);
lean_dec(x_13);
x_93 = lean_ctor_get(x_12, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_94 = x_12;
} else {
 lean_dec_ref(x_12);
 x_94 = lean_box(0);
}
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
x_96 = lean_ctor_get(x_92, 2);
lean_inc(x_96);
lean_dec(x_92);
x_97 = l_Lean_levelZero;
x_98 = l_Lean_mkSort(x_97);
x_99 = lean_unsigned_to_nat(0u);
x_100 = l_Lean_Expr_getAppNumArgsAux(x_2, x_99);
lean_inc(x_100);
x_101 = lean_mk_array(x_100, x_98);
x_102 = lean_unsigned_to_nat(1u);
x_103 = lean_nat_sub(x_100, x_102);
lean_dec(x_100);
x_104 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_101, x_103);
x_105 = lean_array_get_size(x_104);
x_106 = lean_array_get_size(x_95);
x_107 = lean_nat_dec_lt(x_105, x_106);
if (x_107 == 0)
{
lean_object* x_108; 
lean_dec(x_94);
x_108 = l_Lean_Meta_instantiateMVars(x_96, x_3, x_4, x_5, x_6, x_93);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_111 = x_108;
} else {
 lean_dec_ref(x_108);
 x_111 = lean_box(0);
}
x_112 = l_Lean_Expr_hasExprMVar(x_109);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_113 = lean_expr_abstract(x_109, x_95);
lean_dec(x_95);
lean_dec(x_109);
x_114 = lean_expr_instantiate_rev_range(x_113, x_99, x_106, x_104);
lean_dec(x_113);
x_115 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_105, x_104, x_106, x_114);
lean_dec(x_104);
lean_dec(x_105);
x_116 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_116, 0, x_115);
if (lean_is_scalar(x_111)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_111;
}
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_110);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_109);
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_95);
x_118 = lean_box(0);
if (lean_is_scalar(x_111)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_111;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_110);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_95);
x_120 = lean_ctor_get(x_108, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_108, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_122 = x_108;
} else {
 lean_dec_ref(x_108);
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
else
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_124 = lean_box(0);
if (lean_is_scalar(x_94)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_94;
}
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_93);
return x_125;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_whnfCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_apply_2(x_4, x_1, x_6);
return x_7;
}
case 4:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 7:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_2, x_10);
return x_11;
}
default: 
{
lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_apply_1(x_5, x_1);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_whnfCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_whnfCore_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_4, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_5, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_3, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_whnfCore_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_whnfCore_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_3(x_2, x_7, x_8, x_10);
return x_11;
}
case 5:
{
lean_object* x_12; lean_object* x_13; uint64_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_15 = lean_box_uint64(x_14);
x_16 = lean_apply_3(x_4, x_12, x_13, x_15);
return x_16;
}
case 8:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
x_21 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_22 = lean_box_uint64(x_21);
x_23 = lean_apply_5(x_3, x_17, x_18, x_19, x_20, x_22);
return x_23;
}
case 11:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_28 = lean_box_uint64(x_27);
x_29 = lean_apply_4(x_5, x_24, x_25, x_26, x_28);
return x_29;
}
default: 
{
lean_object* x_30; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_apply_1(x_6, x_1);
return x_30;
}
}
}
}
lean_object* l_Lean_Meta_whnfCore_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore_match__3___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = l_Lean_ConstantInfo_levelParams(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_List_lengthAux___rarg(x_10, x_11);
lean_dec(x_10);
x_13 = l_List_lengthAux___rarg(x_3, x_11);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_16 = lean_instantiate_value_lparams(x_2, x_3);
x_17 = l_Lean_Expr_betaRev(x_16, x_4);
lean_dec(x_16);
x_18 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_17);
x_19 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_18, x_5, x_6, x_7, x_8, x_9);
return x_19;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_7, 0, lean_box(0));
x_8 = lean_mk_string("Lean.Meta.WHNF");
x_9 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.whnfEasyCases");
x_10 = lean_unsigned_to_nat(209u);
x_11 = lean_unsigned_to_nat(26u);
x_12 = lean_mk_string("unreachable code has been reached");
x_13 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_panic_fn(x_7, x_13);
x_15 = lean_apply_5(x_14, x_2, x_3, x_4, x_5, x_6);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_inc(x_2);
lean_inc(x_16);
x_17 = l_Lean_Meta_getLocalDecl(x_16, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 4);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_18, sizeof(void*)*5);
lean_dec(x_18);
x_26 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_23);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
if (x_25 == 0)
{
lean_object* x_56; 
lean_free_object(x_26);
lean_dec(x_1);
x_56 = lean_box(0);
x_30 = x_56;
goto block_55;
}
else
{
uint8_t x_57; 
x_57 = lean_ctor_get_uint8(x_28, 6);
if (x_57 == 0)
{
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_26, 0, x_1);
return x_26;
}
else
{
lean_object* x_58; 
lean_free_object(x_26);
lean_dec(x_1);
x_58 = lean_box(0);
x_30 = x_58;
goto block_55;
}
}
block_55:
{
uint8_t x_31; 
lean_dec(x_30);
x_31 = lean_ctor_get_uint8(x_28, 7);
lean_dec(x_28);
if (x_31 == 0)
{
lean_dec(x_16);
x_1 = x_24;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_st_ref_get(x_5, x_29);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_st_ref_take(x_3, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_36, 2);
x_40 = lean_box(0);
x_41 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_39, x_16, x_40);
lean_ctor_set(x_36, 2, x_41);
x_42 = lean_st_ref_set(x_3, x_36, x_37);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_1 = x_24;
x_6 = x_43;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_45 = lean_ctor_get(x_36, 0);
x_46 = lean_ctor_get(x_36, 1);
x_47 = lean_ctor_get(x_36, 2);
x_48 = lean_ctor_get(x_36, 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_49 = lean_box(0);
x_50 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_47, x_16, x_49);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_46);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set(x_51, 3, x_48);
x_52 = lean_st_ref_set(x_3, x_51, x_37);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_1 = x_24;
x_6 = x_53;
goto _start;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_26, 0);
x_60 = lean_ctor_get(x_26, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_26);
if (x_25 == 0)
{
lean_object* x_81; 
lean_dec(x_1);
x_81 = lean_box(0);
x_61 = x_81;
goto block_80;
}
else
{
uint8_t x_82; 
x_82 = lean_ctor_get_uint8(x_59, 6);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_59);
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_1);
lean_ctor_set(x_83, 1, x_60);
return x_83;
}
else
{
lean_object* x_84; 
lean_dec(x_1);
x_84 = lean_box(0);
x_61 = x_84;
goto block_80;
}
}
block_80:
{
uint8_t x_62; 
lean_dec(x_61);
x_62 = lean_ctor_get_uint8(x_59, 7);
lean_dec(x_59);
if (x_62 == 0)
{
lean_dec(x_16);
x_1 = x_24;
x_6 = x_60;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_64 = lean_st_ref_get(x_5, x_60);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_take(x_3, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_67, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 lean_ctor_release(x_67, 2);
 lean_ctor_release(x_67, 3);
 x_73 = x_67;
} else {
 lean_dec_ref(x_67);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
x_75 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_71, x_16, x_74);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 4, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_75);
lean_ctor_set(x_76, 3, x_72);
x_77 = lean_st_ref_set(x_3, x_76, x_68);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_1 = x_24;
x_6 = x_78;
goto _start;
}
}
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_17);
if (x_85 == 0)
{
return x_17;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_17, 0);
x_87 = lean_ctor_get(x_17, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_17);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
case 2:
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_1, 0);
lean_inc(x_89);
x_90 = l_Lean_Meta_getExprMVarAssignment_x3f(x_89, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_92 = !lean_is_exclusive(x_90);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_90, 0);
lean_dec(x_93);
lean_ctor_set(x_90, 0, x_1);
return x_90;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_90, 1);
lean_inc(x_94);
lean_dec(x_90);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_1);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_1);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_dec(x_90);
x_97 = lean_ctor_get(x_91, 0);
lean_inc(x_97);
lean_dec(x_91);
x_1 = x_97;
x_6 = x_96;
goto _start;
}
}
case 4:
{
lean_object* x_99; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; uint8_t x_240; 
x_232 = lean_box(0);
x_233 = lean_mk_string("Meta");
x_234 = lean_name_mk_string(x_232, x_233);
x_235 = lean_mk_string("whnf");
x_236 = lean_name_mk_string(x_234, x_235);
x_237 = lean_st_ref_get(x_5, x_6);
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_238, 3);
lean_inc(x_239);
lean_dec(x_238);
x_240 = lean_ctor_get_uint8(x_239, sizeof(void*)*1);
lean_dec(x_239);
if (x_240 == 0)
{
lean_object* x_241; 
lean_dec(x_236);
x_241 = lean_ctor_get(x_237, 1);
lean_inc(x_241);
lean_dec(x_237);
x_99 = x_241;
goto block_231;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; uint8_t x_245; 
x_242 = lean_ctor_get(x_237, 1);
lean_inc(x_242);
lean_dec(x_237);
lean_inc(x_236);
x_243 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_236, x_2, x_3, x_4, x_5, x_242);
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_unbox(x_244);
lean_dec(x_244);
if (x_245 == 0)
{
lean_object* x_246; 
lean_dec(x_236);
x_246 = lean_ctor_get(x_243, 1);
lean_inc(x_246);
lean_dec(x_243);
x_99 = x_246;
goto block_231;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_247 = lean_ctor_get(x_243, 1);
lean_inc(x_247);
lean_dec(x_243);
lean_inc(x_1);
x_248 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_248, 0, x_1);
x_249 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_236, x_248, x_2, x_3, x_4, x_5, x_247);
x_250 = lean_ctor_get(x_249, 1);
lean_inc(x_250);
lean_dec(x_249);
x_99 = x_250;
goto block_231;
}
}
block_231:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_100; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_1);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
case 5:
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_1, 0);
lean_inc(x_101);
x_102 = l_Lean_Expr_getAppFn(x_101);
lean_dec(x_101);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_102);
x_103 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_102, x_2, x_3, x_4, x_5, x_99);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Lean_Expr_isLambda(x_104);
if (x_106 == 0)
{
lean_object* x_107; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_107 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(x_104, x_1, x_2, x_3, x_4, x_5, x_105);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
if (lean_obj_tag(x_108) == 0)
{
uint8_t x_187; 
x_187 = lean_expr_eqv(x_102, x_104);
lean_dec(x_102);
if (x_187 == 0)
{
lean_object* x_188; 
x_188 = l_Lean_Expr_updateFn(x_1, x_104);
x_110 = x_188;
goto block_186;
}
else
{
x_110 = x_1;
goto block_186;
}
}
else
{
lean_object* x_189; 
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_1);
x_189 = lean_ctor_get(x_108, 0);
lean_inc(x_189);
lean_dec(x_108);
x_1 = x_189;
x_6 = x_109;
goto _start;
}
block_186:
{
lean_object* x_111; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_110);
x_111 = l_Lean_Meta_reduceMatcher_x3f(x_110, x_2, x_3, x_4, x_5, x_109);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
switch (lean_obj_tag(x_112)) {
case 0:
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_110);
lean_dec(x_104);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_ctor_get(x_112, 0);
lean_inc(x_114);
lean_dec(x_112);
x_1 = x_114;
x_6 = x_113;
goto _start;
}
case 2:
{
if (lean_obj_tag(x_104) == 4)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
lean_dec(x_111);
x_117 = lean_ctor_get(x_104, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_104, 1);
lean_inc(x_118);
lean_dec(x_104);
lean_inc(x_110);
x_119 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed), 7, 1);
lean_closure_set(x_119, 0, x_110);
x_120 = l_Lean_Meta_getConst_x3f(x_117, x_2, x_3, x_4, x_5, x_116);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
if (lean_obj_tag(x_121) == 0)
{
uint8_t x_122; 
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_120);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_120, 0);
lean_dec(x_123);
lean_ctor_set(x_120, 0, x_110);
return x_120;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_120, 1);
lean_inc(x_124);
lean_dec(x_120);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_110);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_121, 0);
lean_inc(x_126);
lean_dec(x_121);
switch (lean_obj_tag(x_126)) {
case 1:
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
lean_dec(x_119);
x_127 = lean_ctor_get(x_120, 1);
lean_inc(x_127);
lean_dec(x_120);
x_128 = l_Lean_ConstantInfo_name(x_126);
x_129 = l_Lean_Meta_isAuxDef(x_128, x_2, x_3, x_4, x_5, x_127);
lean_dec(x_128);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_unbox(x_130);
lean_dec(x_130);
if (x_131 == 0)
{
uint8_t x_132; 
lean_dec(x_126);
lean_dec(x_118);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_132 = !lean_is_exclusive(x_129);
if (x_132 == 0)
{
lean_object* x_133; 
x_133 = lean_ctor_get(x_129, 0);
lean_dec(x_133);
lean_ctor_set(x_129, 0, x_110);
return x_129;
}
else
{
lean_object* x_134; lean_object* x_135; 
x_134 = lean_ctor_get(x_129, 1);
lean_inc(x_134);
lean_dec(x_129);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_110);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_136 = lean_ctor_get(x_129, 1);
lean_inc(x_136);
lean_dec(x_129);
x_137 = lean_unsigned_to_nat(0u);
x_138 = l_Lean_Expr_getAppNumArgsAux(x_110, x_137);
x_139 = lean_mk_empty_array_with_capacity(x_138);
lean_dec(x_138);
lean_inc(x_110);
x_140 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_110, x_139);
x_141 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(x_110, x_126, x_118, x_140, x_2, x_3, x_4, x_5, x_136);
lean_dec(x_140);
lean_dec(x_118);
lean_dec(x_126);
return x_141;
}
}
case 4:
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_142 = lean_ctor_get(x_120, 1);
lean_inc(x_142);
lean_dec(x_120);
x_143 = lean_ctor_get(x_126, 0);
lean_inc(x_143);
lean_dec(x_126);
x_144 = l_Lean_levelZero;
x_145 = l_Lean_mkSort(x_144);
x_146 = lean_unsigned_to_nat(0u);
x_147 = l_Lean_Expr_getAppNumArgsAux(x_110, x_146);
lean_inc(x_147);
x_148 = lean_mk_array(x_147, x_145);
x_149 = lean_unsigned_to_nat(1u);
x_150 = lean_nat_sub(x_147, x_149);
lean_dec(x_147);
x_151 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_110, x_148, x_150);
x_152 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_153 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_143, x_118, x_151, x_119, x_152, x_2, x_3, x_4, x_5, x_142);
lean_dec(x_151);
lean_dec(x_118);
lean_dec(x_143);
return x_153;
}
case 7:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_154 = lean_ctor_get(x_120, 1);
lean_inc(x_154);
lean_dec(x_120);
x_155 = lean_ctor_get(x_126, 0);
lean_inc(x_155);
lean_dec(x_126);
x_156 = l_Lean_levelZero;
x_157 = l_Lean_mkSort(x_156);
x_158 = lean_unsigned_to_nat(0u);
x_159 = l_Lean_Expr_getAppNumArgsAux(x_110, x_158);
lean_inc(x_159);
x_160 = lean_mk_array(x_159, x_157);
x_161 = lean_unsigned_to_nat(1u);
x_162 = lean_nat_sub(x_159, x_161);
lean_dec(x_159);
x_163 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_110, x_160, x_162);
x_164 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_165 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_155, x_118, x_163, x_119, x_164, x_2, x_3, x_4, x_5, x_154);
lean_dec(x_163);
lean_dec(x_118);
return x_165;
}
default: 
{
uint8_t x_166; 
lean_dec(x_126);
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_166 = !lean_is_exclusive(x_120);
if (x_166 == 0)
{
lean_object* x_167; 
x_167 = lean_ctor_get(x_120, 0);
lean_dec(x_167);
lean_ctor_set(x_120, 0, x_110);
return x_120;
}
else
{
lean_object* x_168; lean_object* x_169; 
x_168 = lean_ctor_get(x_120, 1);
lean_inc(x_168);
lean_dec(x_120);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_110);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
}
}
else
{
uint8_t x_170; 
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_110);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_170 = !lean_is_exclusive(x_120);
if (x_170 == 0)
{
return x_120;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_120, 0);
x_172 = lean_ctor_get(x_120, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_120);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
else
{
uint8_t x_174; 
lean_dec(x_104);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_174 = !lean_is_exclusive(x_111);
if (x_174 == 0)
{
lean_object* x_175; 
x_175 = lean_ctor_get(x_111, 0);
lean_dec(x_175);
lean_ctor_set(x_111, 0, x_110);
return x_111;
}
else
{
lean_object* x_176; lean_object* x_177; 
x_176 = lean_ctor_get(x_111, 1);
lean_inc(x_176);
lean_dec(x_111);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_110);
lean_ctor_set(x_177, 1, x_176);
return x_177;
}
}
}
default: 
{
uint8_t x_178; 
lean_dec(x_112);
lean_dec(x_104);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_178 = !lean_is_exclusive(x_111);
if (x_178 == 0)
{
lean_object* x_179; 
x_179 = lean_ctor_get(x_111, 0);
lean_dec(x_179);
lean_ctor_set(x_111, 0, x_110);
return x_111;
}
else
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_111, 1);
lean_inc(x_180);
lean_dec(x_111);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_110);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
}
}
else
{
uint8_t x_182; 
lean_dec(x_110);
lean_dec(x_104);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_182 = !lean_is_exclusive(x_111);
if (x_182 == 0)
{
return x_111;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_111, 0);
x_184 = lean_ctor_get(x_111, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_111);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
}
}
else
{
uint8_t x_191; 
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_191 = !lean_is_exclusive(x_107);
if (x_191 == 0)
{
return x_107;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_107, 0);
x_193 = lean_ctor_get(x_107, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_107);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_102);
x_195 = lean_unsigned_to_nat(0u);
x_196 = l_Lean_Expr_getAppNumArgsAux(x_1, x_195);
x_197 = lean_mk_empty_array_with_capacity(x_196);
lean_dec(x_196);
x_198 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_197);
x_199 = l_Lean_Expr_betaRev(x_104, x_198);
lean_dec(x_198);
lean_dec(x_104);
x_1 = x_199;
x_6 = x_105;
goto _start;
}
}
else
{
uint8_t x_201; 
lean_dec(x_102);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_201 = !lean_is_exclusive(x_103);
if (x_201 == 0)
{
return x_103;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_103, 0);
x_203 = lean_ctor_get(x_103, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_103);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
}
case 8:
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_1, 2);
lean_inc(x_205);
x_206 = lean_ctor_get(x_1, 3);
lean_inc(x_206);
lean_dec(x_1);
x_207 = lean_expr_instantiate1(x_206, x_205);
lean_dec(x_205);
lean_dec(x_206);
x_1 = x_207;
x_6 = x_99;
goto _start;
}
case 11:
{
lean_object* x_209; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_209 = l_Lean_Meta_reduceProj_x3f(x_1, x_2, x_3, x_4, x_5, x_99);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; 
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
if (lean_obj_tag(x_210) == 0)
{
uint8_t x_211; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_211 = !lean_is_exclusive(x_209);
if (x_211 == 0)
{
lean_object* x_212; 
x_212 = lean_ctor_get(x_209, 0);
lean_dec(x_212);
lean_ctor_set(x_209, 0, x_1);
return x_209;
}
else
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_ctor_get(x_209, 1);
lean_inc(x_213);
lean_dec(x_209);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_1);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
else
{
lean_object* x_215; lean_object* x_216; 
lean_dec(x_1);
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_dec(x_209);
x_216 = lean_ctor_get(x_210, 0);
lean_inc(x_216);
lean_dec(x_210);
x_1 = x_216;
x_6 = x_215;
goto _start;
}
}
else
{
uint8_t x_218; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_218 = !lean_is_exclusive(x_209);
if (x_218 == 0)
{
return x_209;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_219 = lean_ctor_get(x_209, 0);
x_220 = lean_ctor_get(x_209, 1);
lean_inc(x_220);
lean_inc(x_219);
lean_dec(x_209);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_219);
lean_ctor_set(x_221, 1, x_220);
return x_221;
}
}
}
default: 
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_1);
x_222 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_222, 0, lean_box(0));
x_223 = lean_mk_string("Lean.Meta.WHNF");
x_224 = lean_mk_string("Lean.Meta.whnfCore");
x_225 = lean_unsigned_to_nat(373u);
x_226 = lean_unsigned_to_nat(11u);
x_227 = lean_mk_string("unreachable code has been reached");
x_228 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_223, x_224, x_225, x_226, x_227);
lean_dec(x_227);
lean_dec(x_224);
lean_dec(x_223);
x_229 = lean_panic_fn(x_222, x_228);
x_230 = lean_apply_5(x_229, x_2, x_3, x_4, x_5, x_99);
return x_230;
}
}
}
}
case 5:
{
lean_object* x_251; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; uint8_t x_392; 
x_384 = lean_box(0);
x_385 = lean_mk_string("Meta");
x_386 = lean_name_mk_string(x_384, x_385);
x_387 = lean_mk_string("whnf");
x_388 = lean_name_mk_string(x_386, x_387);
x_389 = lean_st_ref_get(x_5, x_6);
x_390 = lean_ctor_get(x_389, 0);
lean_inc(x_390);
x_391 = lean_ctor_get(x_390, 3);
lean_inc(x_391);
lean_dec(x_390);
x_392 = lean_ctor_get_uint8(x_391, sizeof(void*)*1);
lean_dec(x_391);
if (x_392 == 0)
{
lean_object* x_393; 
lean_dec(x_388);
x_393 = lean_ctor_get(x_389, 1);
lean_inc(x_393);
lean_dec(x_389);
x_251 = x_393;
goto block_383;
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; 
x_394 = lean_ctor_get(x_389, 1);
lean_inc(x_394);
lean_dec(x_389);
lean_inc(x_388);
x_395 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_388, x_2, x_3, x_4, x_5, x_394);
x_396 = lean_ctor_get(x_395, 0);
lean_inc(x_396);
x_397 = lean_unbox(x_396);
lean_dec(x_396);
if (x_397 == 0)
{
lean_object* x_398; 
lean_dec(x_388);
x_398 = lean_ctor_get(x_395, 1);
lean_inc(x_398);
lean_dec(x_395);
x_251 = x_398;
goto block_383;
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_399 = lean_ctor_get(x_395, 1);
lean_inc(x_399);
lean_dec(x_395);
lean_inc(x_1);
x_400 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_400, 0, x_1);
x_401 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_388, x_400, x_2, x_3, x_4, x_5, x_399);
x_402 = lean_ctor_get(x_401, 1);
lean_inc(x_402);
lean_dec(x_401);
x_251 = x_402;
goto block_383;
}
}
block_383:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_252; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_1);
lean_ctor_set(x_252, 1, x_251);
return x_252;
}
case 5:
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_1, 0);
lean_inc(x_253);
x_254 = l_Lean_Expr_getAppFn(x_253);
lean_dec(x_253);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_254);
x_255 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_254, x_2, x_3, x_4, x_5, x_251);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; uint8_t x_258; 
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = l_Lean_Expr_isLambda(x_256);
if (x_258 == 0)
{
lean_object* x_259; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_259 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(x_256, x_1, x_2, x_3, x_4, x_5, x_257);
if (lean_obj_tag(x_259) == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_259, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
lean_dec(x_259);
if (lean_obj_tag(x_260) == 0)
{
uint8_t x_339; 
x_339 = lean_expr_eqv(x_254, x_256);
lean_dec(x_254);
if (x_339 == 0)
{
lean_object* x_340; 
x_340 = l_Lean_Expr_updateFn(x_1, x_256);
x_262 = x_340;
goto block_338;
}
else
{
x_262 = x_1;
goto block_338;
}
}
else
{
lean_object* x_341; 
lean_dec(x_256);
lean_dec(x_254);
lean_dec(x_1);
x_341 = lean_ctor_get(x_260, 0);
lean_inc(x_341);
lean_dec(x_260);
x_1 = x_341;
x_6 = x_261;
goto _start;
}
block_338:
{
lean_object* x_263; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_262);
x_263 = l_Lean_Meta_reduceMatcher_x3f(x_262, x_2, x_3, x_4, x_5, x_261);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; 
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
switch (lean_obj_tag(x_264)) {
case 0:
{
lean_object* x_265; lean_object* x_266; 
lean_dec(x_262);
lean_dec(x_256);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
lean_dec(x_263);
x_266 = lean_ctor_get(x_264, 0);
lean_inc(x_266);
lean_dec(x_264);
x_1 = x_266;
x_6 = x_265;
goto _start;
}
case 2:
{
if (lean_obj_tag(x_256) == 4)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_268 = lean_ctor_get(x_263, 1);
lean_inc(x_268);
lean_dec(x_263);
x_269 = lean_ctor_get(x_256, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_256, 1);
lean_inc(x_270);
lean_dec(x_256);
lean_inc(x_262);
x_271 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed), 7, 1);
lean_closure_set(x_271, 0, x_262);
x_272 = l_Lean_Meta_getConst_x3f(x_269, x_2, x_3, x_4, x_5, x_268);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; 
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
if (lean_obj_tag(x_273) == 0)
{
uint8_t x_274; 
lean_dec(x_271);
lean_dec(x_270);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_274 = !lean_is_exclusive(x_272);
if (x_274 == 0)
{
lean_object* x_275; 
x_275 = lean_ctor_get(x_272, 0);
lean_dec(x_275);
lean_ctor_set(x_272, 0, x_262);
return x_272;
}
else
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_272, 1);
lean_inc(x_276);
lean_dec(x_272);
x_277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_277, 0, x_262);
lean_ctor_set(x_277, 1, x_276);
return x_277;
}
}
else
{
lean_object* x_278; 
x_278 = lean_ctor_get(x_273, 0);
lean_inc(x_278);
lean_dec(x_273);
switch (lean_obj_tag(x_278)) {
case 1:
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; uint8_t x_283; 
lean_dec(x_271);
x_279 = lean_ctor_get(x_272, 1);
lean_inc(x_279);
lean_dec(x_272);
x_280 = l_Lean_ConstantInfo_name(x_278);
x_281 = l_Lean_Meta_isAuxDef(x_280, x_2, x_3, x_4, x_5, x_279);
lean_dec(x_280);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_unbox(x_282);
lean_dec(x_282);
if (x_283 == 0)
{
uint8_t x_284; 
lean_dec(x_278);
lean_dec(x_270);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_284 = !lean_is_exclusive(x_281);
if (x_284 == 0)
{
lean_object* x_285; 
x_285 = lean_ctor_get(x_281, 0);
lean_dec(x_285);
lean_ctor_set(x_281, 0, x_262);
return x_281;
}
else
{
lean_object* x_286; lean_object* x_287; 
x_286 = lean_ctor_get(x_281, 1);
lean_inc(x_286);
lean_dec(x_281);
x_287 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_287, 0, x_262);
lean_ctor_set(x_287, 1, x_286);
return x_287;
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_288 = lean_ctor_get(x_281, 1);
lean_inc(x_288);
lean_dec(x_281);
x_289 = lean_unsigned_to_nat(0u);
x_290 = l_Lean_Expr_getAppNumArgsAux(x_262, x_289);
x_291 = lean_mk_empty_array_with_capacity(x_290);
lean_dec(x_290);
lean_inc(x_262);
x_292 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_262, x_291);
x_293 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(x_262, x_278, x_270, x_292, x_2, x_3, x_4, x_5, x_288);
lean_dec(x_292);
lean_dec(x_270);
lean_dec(x_278);
return x_293;
}
}
case 4:
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_294 = lean_ctor_get(x_272, 1);
lean_inc(x_294);
lean_dec(x_272);
x_295 = lean_ctor_get(x_278, 0);
lean_inc(x_295);
lean_dec(x_278);
x_296 = l_Lean_levelZero;
x_297 = l_Lean_mkSort(x_296);
x_298 = lean_unsigned_to_nat(0u);
x_299 = l_Lean_Expr_getAppNumArgsAux(x_262, x_298);
lean_inc(x_299);
x_300 = lean_mk_array(x_299, x_297);
x_301 = lean_unsigned_to_nat(1u);
x_302 = lean_nat_sub(x_299, x_301);
lean_dec(x_299);
x_303 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_262, x_300, x_302);
x_304 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_305 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_295, x_270, x_303, x_271, x_304, x_2, x_3, x_4, x_5, x_294);
lean_dec(x_303);
lean_dec(x_270);
lean_dec(x_295);
return x_305;
}
case 7:
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_306 = lean_ctor_get(x_272, 1);
lean_inc(x_306);
lean_dec(x_272);
x_307 = lean_ctor_get(x_278, 0);
lean_inc(x_307);
lean_dec(x_278);
x_308 = l_Lean_levelZero;
x_309 = l_Lean_mkSort(x_308);
x_310 = lean_unsigned_to_nat(0u);
x_311 = l_Lean_Expr_getAppNumArgsAux(x_262, x_310);
lean_inc(x_311);
x_312 = lean_mk_array(x_311, x_309);
x_313 = lean_unsigned_to_nat(1u);
x_314 = lean_nat_sub(x_311, x_313);
lean_dec(x_311);
x_315 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_262, x_312, x_314);
x_316 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_317 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_307, x_270, x_315, x_271, x_316, x_2, x_3, x_4, x_5, x_306);
lean_dec(x_315);
lean_dec(x_270);
return x_317;
}
default: 
{
uint8_t x_318; 
lean_dec(x_278);
lean_dec(x_271);
lean_dec(x_270);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_318 = !lean_is_exclusive(x_272);
if (x_318 == 0)
{
lean_object* x_319; 
x_319 = lean_ctor_get(x_272, 0);
lean_dec(x_319);
lean_ctor_set(x_272, 0, x_262);
return x_272;
}
else
{
lean_object* x_320; lean_object* x_321; 
x_320 = lean_ctor_get(x_272, 1);
lean_inc(x_320);
lean_dec(x_272);
x_321 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_321, 0, x_262);
lean_ctor_set(x_321, 1, x_320);
return x_321;
}
}
}
}
}
else
{
uint8_t x_322; 
lean_dec(x_271);
lean_dec(x_270);
lean_dec(x_262);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_322 = !lean_is_exclusive(x_272);
if (x_322 == 0)
{
return x_272;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_323 = lean_ctor_get(x_272, 0);
x_324 = lean_ctor_get(x_272, 1);
lean_inc(x_324);
lean_inc(x_323);
lean_dec(x_272);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
return x_325;
}
}
}
else
{
uint8_t x_326; 
lean_dec(x_256);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_326 = !lean_is_exclusive(x_263);
if (x_326 == 0)
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_263, 0);
lean_dec(x_327);
lean_ctor_set(x_263, 0, x_262);
return x_263;
}
else
{
lean_object* x_328; lean_object* x_329; 
x_328 = lean_ctor_get(x_263, 1);
lean_inc(x_328);
lean_dec(x_263);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_262);
lean_ctor_set(x_329, 1, x_328);
return x_329;
}
}
}
default: 
{
uint8_t x_330; 
lean_dec(x_264);
lean_dec(x_256);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_330 = !lean_is_exclusive(x_263);
if (x_330 == 0)
{
lean_object* x_331; 
x_331 = lean_ctor_get(x_263, 0);
lean_dec(x_331);
lean_ctor_set(x_263, 0, x_262);
return x_263;
}
else
{
lean_object* x_332; lean_object* x_333; 
x_332 = lean_ctor_get(x_263, 1);
lean_inc(x_332);
lean_dec(x_263);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_262);
lean_ctor_set(x_333, 1, x_332);
return x_333;
}
}
}
}
else
{
uint8_t x_334; 
lean_dec(x_262);
lean_dec(x_256);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_334 = !lean_is_exclusive(x_263);
if (x_334 == 0)
{
return x_263;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_335 = lean_ctor_get(x_263, 0);
x_336 = lean_ctor_get(x_263, 1);
lean_inc(x_336);
lean_inc(x_335);
lean_dec(x_263);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_335);
lean_ctor_set(x_337, 1, x_336);
return x_337;
}
}
}
}
else
{
uint8_t x_343; 
lean_dec(x_256);
lean_dec(x_254);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_343 = !lean_is_exclusive(x_259);
if (x_343 == 0)
{
return x_259;
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_344 = lean_ctor_get(x_259, 0);
x_345 = lean_ctor_get(x_259, 1);
lean_inc(x_345);
lean_inc(x_344);
lean_dec(x_259);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_344);
lean_ctor_set(x_346, 1, x_345);
return x_346;
}
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
lean_dec(x_254);
x_347 = lean_unsigned_to_nat(0u);
x_348 = l_Lean_Expr_getAppNumArgsAux(x_1, x_347);
x_349 = lean_mk_empty_array_with_capacity(x_348);
lean_dec(x_348);
x_350 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_349);
x_351 = l_Lean_Expr_betaRev(x_256, x_350);
lean_dec(x_350);
lean_dec(x_256);
x_1 = x_351;
x_6 = x_257;
goto _start;
}
}
else
{
uint8_t x_353; 
lean_dec(x_254);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_353 = !lean_is_exclusive(x_255);
if (x_353 == 0)
{
return x_255;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_354 = lean_ctor_get(x_255, 0);
x_355 = lean_ctor_get(x_255, 1);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_255);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_355);
return x_356;
}
}
}
case 8:
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_357 = lean_ctor_get(x_1, 2);
lean_inc(x_357);
x_358 = lean_ctor_get(x_1, 3);
lean_inc(x_358);
lean_dec(x_1);
x_359 = lean_expr_instantiate1(x_358, x_357);
lean_dec(x_357);
lean_dec(x_358);
x_1 = x_359;
x_6 = x_251;
goto _start;
}
case 11:
{
lean_object* x_361; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_361 = l_Lean_Meta_reduceProj_x3f(x_1, x_2, x_3, x_4, x_5, x_251);
if (lean_obj_tag(x_361) == 0)
{
lean_object* x_362; 
x_362 = lean_ctor_get(x_361, 0);
lean_inc(x_362);
if (lean_obj_tag(x_362) == 0)
{
uint8_t x_363; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_363 = !lean_is_exclusive(x_361);
if (x_363 == 0)
{
lean_object* x_364; 
x_364 = lean_ctor_get(x_361, 0);
lean_dec(x_364);
lean_ctor_set(x_361, 0, x_1);
return x_361;
}
else
{
lean_object* x_365; lean_object* x_366; 
x_365 = lean_ctor_get(x_361, 1);
lean_inc(x_365);
lean_dec(x_361);
x_366 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_366, 0, x_1);
lean_ctor_set(x_366, 1, x_365);
return x_366;
}
}
else
{
lean_object* x_367; lean_object* x_368; 
lean_dec(x_1);
x_367 = lean_ctor_get(x_361, 1);
lean_inc(x_367);
lean_dec(x_361);
x_368 = lean_ctor_get(x_362, 0);
lean_inc(x_368);
lean_dec(x_362);
x_1 = x_368;
x_6 = x_367;
goto _start;
}
}
else
{
uint8_t x_370; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_370 = !lean_is_exclusive(x_361);
if (x_370 == 0)
{
return x_361;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_371 = lean_ctor_get(x_361, 0);
x_372 = lean_ctor_get(x_361, 1);
lean_inc(x_372);
lean_inc(x_371);
lean_dec(x_361);
x_373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_372);
return x_373;
}
}
}
default: 
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
lean_dec(x_1);
x_374 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_374, 0, lean_box(0));
x_375 = lean_mk_string("Lean.Meta.WHNF");
x_376 = lean_mk_string("Lean.Meta.whnfCore");
x_377 = lean_unsigned_to_nat(373u);
x_378 = lean_unsigned_to_nat(11u);
x_379 = lean_mk_string("unreachable code has been reached");
x_380 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_375, x_376, x_377, x_378, x_379);
lean_dec(x_379);
lean_dec(x_376);
lean_dec(x_375);
x_381 = lean_panic_fn(x_374, x_380);
x_382 = lean_apply_5(x_381, x_2, x_3, x_4, x_5, x_251);
return x_382;
}
}
}
}
case 8:
{
lean_object* x_403; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; uint8_t x_544; 
x_536 = lean_box(0);
x_537 = lean_mk_string("Meta");
x_538 = lean_name_mk_string(x_536, x_537);
x_539 = lean_mk_string("whnf");
x_540 = lean_name_mk_string(x_538, x_539);
x_541 = lean_st_ref_get(x_5, x_6);
x_542 = lean_ctor_get(x_541, 0);
lean_inc(x_542);
x_543 = lean_ctor_get(x_542, 3);
lean_inc(x_543);
lean_dec(x_542);
x_544 = lean_ctor_get_uint8(x_543, sizeof(void*)*1);
lean_dec(x_543);
if (x_544 == 0)
{
lean_object* x_545; 
lean_dec(x_540);
x_545 = lean_ctor_get(x_541, 1);
lean_inc(x_545);
lean_dec(x_541);
x_403 = x_545;
goto block_535;
}
else
{
lean_object* x_546; lean_object* x_547; lean_object* x_548; uint8_t x_549; 
x_546 = lean_ctor_get(x_541, 1);
lean_inc(x_546);
lean_dec(x_541);
lean_inc(x_540);
x_547 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_540, x_2, x_3, x_4, x_5, x_546);
x_548 = lean_ctor_get(x_547, 0);
lean_inc(x_548);
x_549 = lean_unbox(x_548);
lean_dec(x_548);
if (x_549 == 0)
{
lean_object* x_550; 
lean_dec(x_540);
x_550 = lean_ctor_get(x_547, 1);
lean_inc(x_550);
lean_dec(x_547);
x_403 = x_550;
goto block_535;
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; 
x_551 = lean_ctor_get(x_547, 1);
lean_inc(x_551);
lean_dec(x_547);
lean_inc(x_1);
x_552 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_552, 0, x_1);
x_553 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_540, x_552, x_2, x_3, x_4, x_5, x_551);
x_554 = lean_ctor_get(x_553, 1);
lean_inc(x_554);
lean_dec(x_553);
x_403 = x_554;
goto block_535;
}
}
block_535:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_404; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_404 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_404, 0, x_1);
lean_ctor_set(x_404, 1, x_403);
return x_404;
}
case 5:
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_405 = lean_ctor_get(x_1, 0);
lean_inc(x_405);
x_406 = l_Lean_Expr_getAppFn(x_405);
lean_dec(x_405);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_406);
x_407 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_406, x_2, x_3, x_4, x_5, x_403);
if (lean_obj_tag(x_407) == 0)
{
lean_object* x_408; lean_object* x_409; uint8_t x_410; 
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_407, 1);
lean_inc(x_409);
lean_dec(x_407);
x_410 = l_Lean_Expr_isLambda(x_408);
if (x_410 == 0)
{
lean_object* x_411; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_411 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(x_408, x_1, x_2, x_3, x_4, x_5, x_409);
if (lean_obj_tag(x_411) == 0)
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_412 = lean_ctor_get(x_411, 0);
lean_inc(x_412);
x_413 = lean_ctor_get(x_411, 1);
lean_inc(x_413);
lean_dec(x_411);
if (lean_obj_tag(x_412) == 0)
{
uint8_t x_491; 
x_491 = lean_expr_eqv(x_406, x_408);
lean_dec(x_406);
if (x_491 == 0)
{
lean_object* x_492; 
x_492 = l_Lean_Expr_updateFn(x_1, x_408);
x_414 = x_492;
goto block_490;
}
else
{
x_414 = x_1;
goto block_490;
}
}
else
{
lean_object* x_493; 
lean_dec(x_408);
lean_dec(x_406);
lean_dec(x_1);
x_493 = lean_ctor_get(x_412, 0);
lean_inc(x_493);
lean_dec(x_412);
x_1 = x_493;
x_6 = x_413;
goto _start;
}
block_490:
{
lean_object* x_415; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_414);
x_415 = l_Lean_Meta_reduceMatcher_x3f(x_414, x_2, x_3, x_4, x_5, x_413);
if (lean_obj_tag(x_415) == 0)
{
lean_object* x_416; 
x_416 = lean_ctor_get(x_415, 0);
lean_inc(x_416);
switch (lean_obj_tag(x_416)) {
case 0:
{
lean_object* x_417; lean_object* x_418; 
lean_dec(x_414);
lean_dec(x_408);
x_417 = lean_ctor_get(x_415, 1);
lean_inc(x_417);
lean_dec(x_415);
x_418 = lean_ctor_get(x_416, 0);
lean_inc(x_418);
lean_dec(x_416);
x_1 = x_418;
x_6 = x_417;
goto _start;
}
case 2:
{
if (lean_obj_tag(x_408) == 4)
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; 
x_420 = lean_ctor_get(x_415, 1);
lean_inc(x_420);
lean_dec(x_415);
x_421 = lean_ctor_get(x_408, 0);
lean_inc(x_421);
x_422 = lean_ctor_get(x_408, 1);
lean_inc(x_422);
lean_dec(x_408);
lean_inc(x_414);
x_423 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed), 7, 1);
lean_closure_set(x_423, 0, x_414);
x_424 = l_Lean_Meta_getConst_x3f(x_421, x_2, x_3, x_4, x_5, x_420);
if (lean_obj_tag(x_424) == 0)
{
lean_object* x_425; 
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
if (lean_obj_tag(x_425) == 0)
{
uint8_t x_426; 
lean_dec(x_423);
lean_dec(x_422);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_426 = !lean_is_exclusive(x_424);
if (x_426 == 0)
{
lean_object* x_427; 
x_427 = lean_ctor_get(x_424, 0);
lean_dec(x_427);
lean_ctor_set(x_424, 0, x_414);
return x_424;
}
else
{
lean_object* x_428; lean_object* x_429; 
x_428 = lean_ctor_get(x_424, 1);
lean_inc(x_428);
lean_dec(x_424);
x_429 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_429, 0, x_414);
lean_ctor_set(x_429, 1, x_428);
return x_429;
}
}
else
{
lean_object* x_430; 
x_430 = lean_ctor_get(x_425, 0);
lean_inc(x_430);
lean_dec(x_425);
switch (lean_obj_tag(x_430)) {
case 1:
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; uint8_t x_435; 
lean_dec(x_423);
x_431 = lean_ctor_get(x_424, 1);
lean_inc(x_431);
lean_dec(x_424);
x_432 = l_Lean_ConstantInfo_name(x_430);
x_433 = l_Lean_Meta_isAuxDef(x_432, x_2, x_3, x_4, x_5, x_431);
lean_dec(x_432);
x_434 = lean_ctor_get(x_433, 0);
lean_inc(x_434);
x_435 = lean_unbox(x_434);
lean_dec(x_434);
if (x_435 == 0)
{
uint8_t x_436; 
lean_dec(x_430);
lean_dec(x_422);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_436 = !lean_is_exclusive(x_433);
if (x_436 == 0)
{
lean_object* x_437; 
x_437 = lean_ctor_get(x_433, 0);
lean_dec(x_437);
lean_ctor_set(x_433, 0, x_414);
return x_433;
}
else
{
lean_object* x_438; lean_object* x_439; 
x_438 = lean_ctor_get(x_433, 1);
lean_inc(x_438);
lean_dec(x_433);
x_439 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_439, 0, x_414);
lean_ctor_set(x_439, 1, x_438);
return x_439;
}
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_440 = lean_ctor_get(x_433, 1);
lean_inc(x_440);
lean_dec(x_433);
x_441 = lean_unsigned_to_nat(0u);
x_442 = l_Lean_Expr_getAppNumArgsAux(x_414, x_441);
x_443 = lean_mk_empty_array_with_capacity(x_442);
lean_dec(x_442);
lean_inc(x_414);
x_444 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_414, x_443);
x_445 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(x_414, x_430, x_422, x_444, x_2, x_3, x_4, x_5, x_440);
lean_dec(x_444);
lean_dec(x_422);
lean_dec(x_430);
return x_445;
}
}
case 4:
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; 
x_446 = lean_ctor_get(x_424, 1);
lean_inc(x_446);
lean_dec(x_424);
x_447 = lean_ctor_get(x_430, 0);
lean_inc(x_447);
lean_dec(x_430);
x_448 = l_Lean_levelZero;
x_449 = l_Lean_mkSort(x_448);
x_450 = lean_unsigned_to_nat(0u);
x_451 = l_Lean_Expr_getAppNumArgsAux(x_414, x_450);
lean_inc(x_451);
x_452 = lean_mk_array(x_451, x_449);
x_453 = lean_unsigned_to_nat(1u);
x_454 = lean_nat_sub(x_451, x_453);
lean_dec(x_451);
x_455 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_414, x_452, x_454);
x_456 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_457 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_447, x_422, x_455, x_423, x_456, x_2, x_3, x_4, x_5, x_446);
lean_dec(x_455);
lean_dec(x_422);
lean_dec(x_447);
return x_457;
}
case 7:
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; 
x_458 = lean_ctor_get(x_424, 1);
lean_inc(x_458);
lean_dec(x_424);
x_459 = lean_ctor_get(x_430, 0);
lean_inc(x_459);
lean_dec(x_430);
x_460 = l_Lean_levelZero;
x_461 = l_Lean_mkSort(x_460);
x_462 = lean_unsigned_to_nat(0u);
x_463 = l_Lean_Expr_getAppNumArgsAux(x_414, x_462);
lean_inc(x_463);
x_464 = lean_mk_array(x_463, x_461);
x_465 = lean_unsigned_to_nat(1u);
x_466 = lean_nat_sub(x_463, x_465);
lean_dec(x_463);
x_467 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_414, x_464, x_466);
x_468 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_469 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_459, x_422, x_467, x_423, x_468, x_2, x_3, x_4, x_5, x_458);
lean_dec(x_467);
lean_dec(x_422);
return x_469;
}
default: 
{
uint8_t x_470; 
lean_dec(x_430);
lean_dec(x_423);
lean_dec(x_422);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_470 = !lean_is_exclusive(x_424);
if (x_470 == 0)
{
lean_object* x_471; 
x_471 = lean_ctor_get(x_424, 0);
lean_dec(x_471);
lean_ctor_set(x_424, 0, x_414);
return x_424;
}
else
{
lean_object* x_472; lean_object* x_473; 
x_472 = lean_ctor_get(x_424, 1);
lean_inc(x_472);
lean_dec(x_424);
x_473 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_473, 0, x_414);
lean_ctor_set(x_473, 1, x_472);
return x_473;
}
}
}
}
}
else
{
uint8_t x_474; 
lean_dec(x_423);
lean_dec(x_422);
lean_dec(x_414);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_474 = !lean_is_exclusive(x_424);
if (x_474 == 0)
{
return x_424;
}
else
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_475 = lean_ctor_get(x_424, 0);
x_476 = lean_ctor_get(x_424, 1);
lean_inc(x_476);
lean_inc(x_475);
lean_dec(x_424);
x_477 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_477, 0, x_475);
lean_ctor_set(x_477, 1, x_476);
return x_477;
}
}
}
else
{
uint8_t x_478; 
lean_dec(x_408);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_478 = !lean_is_exclusive(x_415);
if (x_478 == 0)
{
lean_object* x_479; 
x_479 = lean_ctor_get(x_415, 0);
lean_dec(x_479);
lean_ctor_set(x_415, 0, x_414);
return x_415;
}
else
{
lean_object* x_480; lean_object* x_481; 
x_480 = lean_ctor_get(x_415, 1);
lean_inc(x_480);
lean_dec(x_415);
x_481 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_481, 0, x_414);
lean_ctor_set(x_481, 1, x_480);
return x_481;
}
}
}
default: 
{
uint8_t x_482; 
lean_dec(x_416);
lean_dec(x_408);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_482 = !lean_is_exclusive(x_415);
if (x_482 == 0)
{
lean_object* x_483; 
x_483 = lean_ctor_get(x_415, 0);
lean_dec(x_483);
lean_ctor_set(x_415, 0, x_414);
return x_415;
}
else
{
lean_object* x_484; lean_object* x_485; 
x_484 = lean_ctor_get(x_415, 1);
lean_inc(x_484);
lean_dec(x_415);
x_485 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_485, 0, x_414);
lean_ctor_set(x_485, 1, x_484);
return x_485;
}
}
}
}
else
{
uint8_t x_486; 
lean_dec(x_414);
lean_dec(x_408);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_486 = !lean_is_exclusive(x_415);
if (x_486 == 0)
{
return x_415;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_487 = lean_ctor_get(x_415, 0);
x_488 = lean_ctor_get(x_415, 1);
lean_inc(x_488);
lean_inc(x_487);
lean_dec(x_415);
x_489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_489, 0, x_487);
lean_ctor_set(x_489, 1, x_488);
return x_489;
}
}
}
}
else
{
uint8_t x_495; 
lean_dec(x_408);
lean_dec(x_406);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_495 = !lean_is_exclusive(x_411);
if (x_495 == 0)
{
return x_411;
}
else
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; 
x_496 = lean_ctor_get(x_411, 0);
x_497 = lean_ctor_get(x_411, 1);
lean_inc(x_497);
lean_inc(x_496);
lean_dec(x_411);
x_498 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_498, 0, x_496);
lean_ctor_set(x_498, 1, x_497);
return x_498;
}
}
}
else
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; 
lean_dec(x_406);
x_499 = lean_unsigned_to_nat(0u);
x_500 = l_Lean_Expr_getAppNumArgsAux(x_1, x_499);
x_501 = lean_mk_empty_array_with_capacity(x_500);
lean_dec(x_500);
x_502 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_501);
x_503 = l_Lean_Expr_betaRev(x_408, x_502);
lean_dec(x_502);
lean_dec(x_408);
x_1 = x_503;
x_6 = x_409;
goto _start;
}
}
else
{
uint8_t x_505; 
lean_dec(x_406);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_505 = !lean_is_exclusive(x_407);
if (x_505 == 0)
{
return x_407;
}
else
{
lean_object* x_506; lean_object* x_507; lean_object* x_508; 
x_506 = lean_ctor_get(x_407, 0);
x_507 = lean_ctor_get(x_407, 1);
lean_inc(x_507);
lean_inc(x_506);
lean_dec(x_407);
x_508 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_508, 0, x_506);
lean_ctor_set(x_508, 1, x_507);
return x_508;
}
}
}
case 8:
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; 
x_509 = lean_ctor_get(x_1, 2);
lean_inc(x_509);
x_510 = lean_ctor_get(x_1, 3);
lean_inc(x_510);
lean_dec(x_1);
x_511 = lean_expr_instantiate1(x_510, x_509);
lean_dec(x_509);
lean_dec(x_510);
x_1 = x_511;
x_6 = x_403;
goto _start;
}
case 11:
{
lean_object* x_513; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_513 = l_Lean_Meta_reduceProj_x3f(x_1, x_2, x_3, x_4, x_5, x_403);
if (lean_obj_tag(x_513) == 0)
{
lean_object* x_514; 
x_514 = lean_ctor_get(x_513, 0);
lean_inc(x_514);
if (lean_obj_tag(x_514) == 0)
{
uint8_t x_515; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_515 = !lean_is_exclusive(x_513);
if (x_515 == 0)
{
lean_object* x_516; 
x_516 = lean_ctor_get(x_513, 0);
lean_dec(x_516);
lean_ctor_set(x_513, 0, x_1);
return x_513;
}
else
{
lean_object* x_517; lean_object* x_518; 
x_517 = lean_ctor_get(x_513, 1);
lean_inc(x_517);
lean_dec(x_513);
x_518 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_518, 0, x_1);
lean_ctor_set(x_518, 1, x_517);
return x_518;
}
}
else
{
lean_object* x_519; lean_object* x_520; 
lean_dec(x_1);
x_519 = lean_ctor_get(x_513, 1);
lean_inc(x_519);
lean_dec(x_513);
x_520 = lean_ctor_get(x_514, 0);
lean_inc(x_520);
lean_dec(x_514);
x_1 = x_520;
x_6 = x_519;
goto _start;
}
}
else
{
uint8_t x_522; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_522 = !lean_is_exclusive(x_513);
if (x_522 == 0)
{
return x_513;
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; 
x_523 = lean_ctor_get(x_513, 0);
x_524 = lean_ctor_get(x_513, 1);
lean_inc(x_524);
lean_inc(x_523);
lean_dec(x_513);
x_525 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_525, 0, x_523);
lean_ctor_set(x_525, 1, x_524);
return x_525;
}
}
}
default: 
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; 
lean_dec(x_1);
x_526 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_526, 0, lean_box(0));
x_527 = lean_mk_string("Lean.Meta.WHNF");
x_528 = lean_mk_string("Lean.Meta.whnfCore");
x_529 = lean_unsigned_to_nat(373u);
x_530 = lean_unsigned_to_nat(11u);
x_531 = lean_mk_string("unreachable code has been reached");
x_532 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_527, x_528, x_529, x_530, x_531);
lean_dec(x_531);
lean_dec(x_528);
lean_dec(x_527);
x_533 = lean_panic_fn(x_526, x_532);
x_534 = lean_apply_5(x_533, x_2, x_3, x_4, x_5, x_403);
return x_534;
}
}
}
}
case 10:
{
lean_object* x_555; 
x_555 = lean_ctor_get(x_1, 1);
lean_inc(x_555);
lean_dec(x_1);
x_1 = x_555;
goto _start;
}
case 11:
{
lean_object* x_557; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; uint8_t x_698; 
x_690 = lean_box(0);
x_691 = lean_mk_string("Meta");
x_692 = lean_name_mk_string(x_690, x_691);
x_693 = lean_mk_string("whnf");
x_694 = lean_name_mk_string(x_692, x_693);
x_695 = lean_st_ref_get(x_5, x_6);
x_696 = lean_ctor_get(x_695, 0);
lean_inc(x_696);
x_697 = lean_ctor_get(x_696, 3);
lean_inc(x_697);
lean_dec(x_696);
x_698 = lean_ctor_get_uint8(x_697, sizeof(void*)*1);
lean_dec(x_697);
if (x_698 == 0)
{
lean_object* x_699; 
lean_dec(x_694);
x_699 = lean_ctor_get(x_695, 1);
lean_inc(x_699);
lean_dec(x_695);
x_557 = x_699;
goto block_689;
}
else
{
lean_object* x_700; lean_object* x_701; lean_object* x_702; uint8_t x_703; 
x_700 = lean_ctor_get(x_695, 1);
lean_inc(x_700);
lean_dec(x_695);
lean_inc(x_694);
x_701 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_694, x_2, x_3, x_4, x_5, x_700);
x_702 = lean_ctor_get(x_701, 0);
lean_inc(x_702);
x_703 = lean_unbox(x_702);
lean_dec(x_702);
if (x_703 == 0)
{
lean_object* x_704; 
lean_dec(x_694);
x_704 = lean_ctor_get(x_701, 1);
lean_inc(x_704);
lean_dec(x_701);
x_557 = x_704;
goto block_689;
}
else
{
lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; 
x_705 = lean_ctor_get(x_701, 1);
lean_inc(x_705);
lean_dec(x_701);
lean_inc(x_1);
x_706 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_706, 0, x_1);
x_707 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_694, x_706, x_2, x_3, x_4, x_5, x_705);
x_708 = lean_ctor_get(x_707, 1);
lean_inc(x_708);
lean_dec(x_707);
x_557 = x_708;
goto block_689;
}
}
block_689:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_558; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_558 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_558, 0, x_1);
lean_ctor_set(x_558, 1, x_557);
return x_558;
}
case 5:
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; 
x_559 = lean_ctor_get(x_1, 0);
lean_inc(x_559);
x_560 = l_Lean_Expr_getAppFn(x_559);
lean_dec(x_559);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_560);
x_561 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_560, x_2, x_3, x_4, x_5, x_557);
if (lean_obj_tag(x_561) == 0)
{
lean_object* x_562; lean_object* x_563; uint8_t x_564; 
x_562 = lean_ctor_get(x_561, 0);
lean_inc(x_562);
x_563 = lean_ctor_get(x_561, 1);
lean_inc(x_563);
lean_dec(x_561);
x_564 = l_Lean_Expr_isLambda(x_562);
if (x_564 == 0)
{
lean_object* x_565; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_565 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfDelayedAssigned_x3f(x_562, x_1, x_2, x_3, x_4, x_5, x_563);
if (lean_obj_tag(x_565) == 0)
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; 
x_566 = lean_ctor_get(x_565, 0);
lean_inc(x_566);
x_567 = lean_ctor_get(x_565, 1);
lean_inc(x_567);
lean_dec(x_565);
if (lean_obj_tag(x_566) == 0)
{
uint8_t x_645; 
x_645 = lean_expr_eqv(x_560, x_562);
lean_dec(x_560);
if (x_645 == 0)
{
lean_object* x_646; 
x_646 = l_Lean_Expr_updateFn(x_1, x_562);
x_568 = x_646;
goto block_644;
}
else
{
x_568 = x_1;
goto block_644;
}
}
else
{
lean_object* x_647; 
lean_dec(x_562);
lean_dec(x_560);
lean_dec(x_1);
x_647 = lean_ctor_get(x_566, 0);
lean_inc(x_647);
lean_dec(x_566);
x_1 = x_647;
x_6 = x_567;
goto _start;
}
block_644:
{
lean_object* x_569; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_568);
x_569 = l_Lean_Meta_reduceMatcher_x3f(x_568, x_2, x_3, x_4, x_5, x_567);
if (lean_obj_tag(x_569) == 0)
{
lean_object* x_570; 
x_570 = lean_ctor_get(x_569, 0);
lean_inc(x_570);
switch (lean_obj_tag(x_570)) {
case 0:
{
lean_object* x_571; lean_object* x_572; 
lean_dec(x_568);
lean_dec(x_562);
x_571 = lean_ctor_get(x_569, 1);
lean_inc(x_571);
lean_dec(x_569);
x_572 = lean_ctor_get(x_570, 0);
lean_inc(x_572);
lean_dec(x_570);
x_1 = x_572;
x_6 = x_571;
goto _start;
}
case 2:
{
if (lean_obj_tag(x_562) == 4)
{
lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; 
x_574 = lean_ctor_get(x_569, 1);
lean_inc(x_574);
lean_dec(x_569);
x_575 = lean_ctor_get(x_562, 0);
lean_inc(x_575);
x_576 = lean_ctor_get(x_562, 1);
lean_inc(x_576);
lean_dec(x_562);
lean_inc(x_568);
x_577 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed), 7, 1);
lean_closure_set(x_577, 0, x_568);
x_578 = l_Lean_Meta_getConst_x3f(x_575, x_2, x_3, x_4, x_5, x_574);
if (lean_obj_tag(x_578) == 0)
{
lean_object* x_579; 
x_579 = lean_ctor_get(x_578, 0);
lean_inc(x_579);
if (lean_obj_tag(x_579) == 0)
{
uint8_t x_580; 
lean_dec(x_577);
lean_dec(x_576);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_580 = !lean_is_exclusive(x_578);
if (x_580 == 0)
{
lean_object* x_581; 
x_581 = lean_ctor_get(x_578, 0);
lean_dec(x_581);
lean_ctor_set(x_578, 0, x_568);
return x_578;
}
else
{
lean_object* x_582; lean_object* x_583; 
x_582 = lean_ctor_get(x_578, 1);
lean_inc(x_582);
lean_dec(x_578);
x_583 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_583, 0, x_568);
lean_ctor_set(x_583, 1, x_582);
return x_583;
}
}
else
{
lean_object* x_584; 
x_584 = lean_ctor_get(x_579, 0);
lean_inc(x_584);
lean_dec(x_579);
switch (lean_obj_tag(x_584)) {
case 1:
{
lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; uint8_t x_589; 
lean_dec(x_577);
x_585 = lean_ctor_get(x_578, 1);
lean_inc(x_585);
lean_dec(x_578);
x_586 = l_Lean_ConstantInfo_name(x_584);
x_587 = l_Lean_Meta_isAuxDef(x_586, x_2, x_3, x_4, x_5, x_585);
lean_dec(x_586);
x_588 = lean_ctor_get(x_587, 0);
lean_inc(x_588);
x_589 = lean_unbox(x_588);
lean_dec(x_588);
if (x_589 == 0)
{
uint8_t x_590; 
lean_dec(x_584);
lean_dec(x_576);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_590 = !lean_is_exclusive(x_587);
if (x_590 == 0)
{
lean_object* x_591; 
x_591 = lean_ctor_get(x_587, 0);
lean_dec(x_591);
lean_ctor_set(x_587, 0, x_568);
return x_587;
}
else
{
lean_object* x_592; lean_object* x_593; 
x_592 = lean_ctor_get(x_587, 1);
lean_inc(x_592);
lean_dec(x_587);
x_593 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_593, 0, x_568);
lean_ctor_set(x_593, 1, x_592);
return x_593;
}
}
else
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; 
x_594 = lean_ctor_get(x_587, 1);
lean_inc(x_594);
lean_dec(x_587);
x_595 = lean_unsigned_to_nat(0u);
x_596 = l_Lean_Expr_getAppNumArgsAux(x_568, x_595);
x_597 = lean_mk_empty_array_with_capacity(x_596);
lean_dec(x_596);
lean_inc(x_568);
x_598 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_568, x_597);
x_599 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(x_568, x_584, x_576, x_598, x_2, x_3, x_4, x_5, x_594);
lean_dec(x_598);
lean_dec(x_576);
lean_dec(x_584);
return x_599;
}
}
case 4:
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; 
x_600 = lean_ctor_get(x_578, 1);
lean_inc(x_600);
lean_dec(x_578);
x_601 = lean_ctor_get(x_584, 0);
lean_inc(x_601);
lean_dec(x_584);
x_602 = l_Lean_levelZero;
x_603 = l_Lean_mkSort(x_602);
x_604 = lean_unsigned_to_nat(0u);
x_605 = l_Lean_Expr_getAppNumArgsAux(x_568, x_604);
lean_inc(x_605);
x_606 = lean_mk_array(x_605, x_603);
x_607 = lean_unsigned_to_nat(1u);
x_608 = lean_nat_sub(x_605, x_607);
lean_dec(x_605);
x_609 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_568, x_606, x_608);
x_610 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_611 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_601, x_576, x_609, x_577, x_610, x_2, x_3, x_4, x_5, x_600);
lean_dec(x_609);
lean_dec(x_576);
lean_dec(x_601);
return x_611;
}
case 7:
{
lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; 
x_612 = lean_ctor_get(x_578, 1);
lean_inc(x_612);
lean_dec(x_578);
x_613 = lean_ctor_get(x_584, 0);
lean_inc(x_613);
lean_dec(x_584);
x_614 = l_Lean_levelZero;
x_615 = l_Lean_mkSort(x_614);
x_616 = lean_unsigned_to_nat(0u);
x_617 = l_Lean_Expr_getAppNumArgsAux(x_568, x_616);
lean_inc(x_617);
x_618 = lean_mk_array(x_617, x_615);
x_619 = lean_unsigned_to_nat(1u);
x_620 = lean_nat_sub(x_617, x_619);
lean_dec(x_617);
x_621 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_568, x_618, x_620);
x_622 = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore), 6, 0);
x_623 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_613, x_576, x_621, x_577, x_622, x_2, x_3, x_4, x_5, x_612);
lean_dec(x_621);
lean_dec(x_576);
return x_623;
}
default: 
{
uint8_t x_624; 
lean_dec(x_584);
lean_dec(x_577);
lean_dec(x_576);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_624 = !lean_is_exclusive(x_578);
if (x_624 == 0)
{
lean_object* x_625; 
x_625 = lean_ctor_get(x_578, 0);
lean_dec(x_625);
lean_ctor_set(x_578, 0, x_568);
return x_578;
}
else
{
lean_object* x_626; lean_object* x_627; 
x_626 = lean_ctor_get(x_578, 1);
lean_inc(x_626);
lean_dec(x_578);
x_627 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_627, 0, x_568);
lean_ctor_set(x_627, 1, x_626);
return x_627;
}
}
}
}
}
else
{
uint8_t x_628; 
lean_dec(x_577);
lean_dec(x_576);
lean_dec(x_568);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_628 = !lean_is_exclusive(x_578);
if (x_628 == 0)
{
return x_578;
}
else
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; 
x_629 = lean_ctor_get(x_578, 0);
x_630 = lean_ctor_get(x_578, 1);
lean_inc(x_630);
lean_inc(x_629);
lean_dec(x_578);
x_631 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_631, 0, x_629);
lean_ctor_set(x_631, 1, x_630);
return x_631;
}
}
}
else
{
uint8_t x_632; 
lean_dec(x_562);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_632 = !lean_is_exclusive(x_569);
if (x_632 == 0)
{
lean_object* x_633; 
x_633 = lean_ctor_get(x_569, 0);
lean_dec(x_633);
lean_ctor_set(x_569, 0, x_568);
return x_569;
}
else
{
lean_object* x_634; lean_object* x_635; 
x_634 = lean_ctor_get(x_569, 1);
lean_inc(x_634);
lean_dec(x_569);
x_635 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_635, 0, x_568);
lean_ctor_set(x_635, 1, x_634);
return x_635;
}
}
}
default: 
{
uint8_t x_636; 
lean_dec(x_570);
lean_dec(x_562);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_636 = !lean_is_exclusive(x_569);
if (x_636 == 0)
{
lean_object* x_637; 
x_637 = lean_ctor_get(x_569, 0);
lean_dec(x_637);
lean_ctor_set(x_569, 0, x_568);
return x_569;
}
else
{
lean_object* x_638; lean_object* x_639; 
x_638 = lean_ctor_get(x_569, 1);
lean_inc(x_638);
lean_dec(x_569);
x_639 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_639, 0, x_568);
lean_ctor_set(x_639, 1, x_638);
return x_639;
}
}
}
}
else
{
uint8_t x_640; 
lean_dec(x_568);
lean_dec(x_562);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_640 = !lean_is_exclusive(x_569);
if (x_640 == 0)
{
return x_569;
}
else
{
lean_object* x_641; lean_object* x_642; lean_object* x_643; 
x_641 = lean_ctor_get(x_569, 0);
x_642 = lean_ctor_get(x_569, 1);
lean_inc(x_642);
lean_inc(x_641);
lean_dec(x_569);
x_643 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_643, 0, x_641);
lean_ctor_set(x_643, 1, x_642);
return x_643;
}
}
}
}
else
{
uint8_t x_649; 
lean_dec(x_562);
lean_dec(x_560);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_649 = !lean_is_exclusive(x_565);
if (x_649 == 0)
{
return x_565;
}
else
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; 
x_650 = lean_ctor_get(x_565, 0);
x_651 = lean_ctor_get(x_565, 1);
lean_inc(x_651);
lean_inc(x_650);
lean_dec(x_565);
x_652 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_652, 0, x_650);
lean_ctor_set(x_652, 1, x_651);
return x_652;
}
}
}
else
{
lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; 
lean_dec(x_560);
x_653 = lean_unsigned_to_nat(0u);
x_654 = l_Lean_Expr_getAppNumArgsAux(x_1, x_653);
x_655 = lean_mk_empty_array_with_capacity(x_654);
lean_dec(x_654);
x_656 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_655);
x_657 = l_Lean_Expr_betaRev(x_562, x_656);
lean_dec(x_656);
lean_dec(x_562);
x_1 = x_657;
x_6 = x_563;
goto _start;
}
}
else
{
uint8_t x_659; 
lean_dec(x_560);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_659 = !lean_is_exclusive(x_561);
if (x_659 == 0)
{
return x_561;
}
else
{
lean_object* x_660; lean_object* x_661; lean_object* x_662; 
x_660 = lean_ctor_get(x_561, 0);
x_661 = lean_ctor_get(x_561, 1);
lean_inc(x_661);
lean_inc(x_660);
lean_dec(x_561);
x_662 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_662, 0, x_660);
lean_ctor_set(x_662, 1, x_661);
return x_662;
}
}
}
case 8:
{
lean_object* x_663; lean_object* x_664; lean_object* x_665; 
x_663 = lean_ctor_get(x_1, 2);
lean_inc(x_663);
x_664 = lean_ctor_get(x_1, 3);
lean_inc(x_664);
lean_dec(x_1);
x_665 = lean_expr_instantiate1(x_664, x_663);
lean_dec(x_663);
lean_dec(x_664);
x_1 = x_665;
x_6 = x_557;
goto _start;
}
case 11:
{
lean_object* x_667; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_667 = l_Lean_Meta_reduceProj_x3f(x_1, x_2, x_3, x_4, x_5, x_557);
if (lean_obj_tag(x_667) == 0)
{
lean_object* x_668; 
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
if (lean_obj_tag(x_668) == 0)
{
uint8_t x_669; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_669 = !lean_is_exclusive(x_667);
if (x_669 == 0)
{
lean_object* x_670; 
x_670 = lean_ctor_get(x_667, 0);
lean_dec(x_670);
lean_ctor_set(x_667, 0, x_1);
return x_667;
}
else
{
lean_object* x_671; lean_object* x_672; 
x_671 = lean_ctor_get(x_667, 1);
lean_inc(x_671);
lean_dec(x_667);
x_672 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_672, 0, x_1);
lean_ctor_set(x_672, 1, x_671);
return x_672;
}
}
else
{
lean_object* x_673; lean_object* x_674; 
lean_dec(x_1);
x_673 = lean_ctor_get(x_667, 1);
lean_inc(x_673);
lean_dec(x_667);
x_674 = lean_ctor_get(x_668, 0);
lean_inc(x_674);
lean_dec(x_668);
x_1 = x_674;
x_6 = x_673;
goto _start;
}
}
else
{
uint8_t x_676; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_676 = !lean_is_exclusive(x_667);
if (x_676 == 0)
{
return x_667;
}
else
{
lean_object* x_677; lean_object* x_678; lean_object* x_679; 
x_677 = lean_ctor_get(x_667, 0);
x_678 = lean_ctor_get(x_667, 1);
lean_inc(x_678);
lean_inc(x_677);
lean_dec(x_667);
x_679 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_679, 0, x_677);
lean_ctor_set(x_679, 1, x_678);
return x_679;
}
}
}
default: 
{
lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; 
lean_dec(x_1);
x_680 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_680, 0, lean_box(0));
x_681 = lean_mk_string("Lean.Meta.WHNF");
x_682 = lean_mk_string("Lean.Meta.whnfCore");
x_683 = lean_unsigned_to_nat(373u);
x_684 = lean_unsigned_to_nat(11u);
x_685 = lean_mk_string("unreachable code has been reached");
x_686 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_681, x_682, x_683, x_684, x_685);
lean_dec(x_685);
lean_dec(x_682);
lean_dec(x_681);
x_687 = lean_panic_fn(x_680, x_686);
x_688 = lean_apply_5(x_687, x_2, x_3, x_4, x_5, x_557);
return x_688;
}
}
}
}
default: 
{
lean_object* x_709; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_709 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_709, 0, x_1);
lean_ctor_set(x_709, 1, x_6);
return x_709;
}
}
}
}
lean_object* l_Lean_Meta_whnfCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_whnfCore___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 2);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_apply_3(x_2, x_8, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDefinition_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_3(x_3, x_5, x_6, x_8);
return x_9;
}
case 5:
{
lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_3(x_2, x_10, x_11, x_13);
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
lean_object* l_Lean_Meta_unfoldDefinition_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDefinition_x3f_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
x_10 = l_Lean_Meta_getStuckMVar_x3f(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(x_8);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
x_16 = l_Lean_Meta_unfoldDefinition_x3f(x_8, x_2, x_3, x_4, x_5, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
lean_ctor_set(x_16, 0, x_8);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_8);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_8);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_1 = x_23;
x_6 = x_22;
goto _start;
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_dec(x_10);
x_30 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(x_8);
if (x_30 == 0)
{
lean_object* x_31; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
x_31 = l_Lean_Meta_unfoldDefinition_x3f(x_8, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_8);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_8);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_ctor_get(x_32, 0);
lean_inc(x_37);
lean_dec(x_32);
x_1 = x_37;
x_6 = x_36;
goto _start;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_41 = x_31;
} else {
 lean_dec_ref(x_31);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(1, 2, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_8);
lean_ctor_set(x_43, 1, x_29);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_10, 1);
lean_inc(x_44);
lean_dec(x_10);
x_45 = lean_ctor_get(x_11, 0);
lean_inc(x_45);
lean_dec(x_11);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_46 = l_Lean_Meta_synthPending(x_45, x_2, x_3, x_4, x_5, x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_unbox(x_47);
lean_dec(x_47);
if (x_48 == 0)
{
uint8_t x_49; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_46);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_46, 0);
lean_dec(x_50);
lean_ctor_set(x_46, 0, x_8);
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_dec(x_46);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_8);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_dec(x_46);
x_1 = x_8;
x_6 = x_53;
goto _start;
}
}
else
{
uint8_t x_55; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_46);
if (x_55 == 0)
{
return x_46;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_46, 0);
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_46);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_10);
if (x_59 == 0)
{
return x_10;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_10, 0);
x_61 = lean_ctor_get(x_10, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_10);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_7);
if (x_63 == 0)
{
return x_7;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_7, 0);
x_65 = lean_ctor_get(x_7, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_7);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = l_Lean_ConstantInfo_levelParams(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthAux___rarg(x_8, x_9);
lean_dec(x_8);
x_11 = l_List_lengthAux___rarg(x_2, x_9);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_instantiate_value_lparams(x_1, x_2);
x_16 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_7);
return x_18;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_ConstantInfo_levelParams(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthAux___rarg(x_9, x_10);
lean_dec(x_9);
x_12 = l_List_lengthAux___rarg(x_2, x_10);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_instantiate_value_lparams(x_1, x_2);
x_17 = l_Lean_Expr_betaRev(x_16, x_3);
lean_dec(x_16);
x_18 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_8);
return x_20;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_ConstantInfo_levelParams(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthAux___rarg(x_9, x_10);
lean_dec(x_9);
x_12 = l_List_lengthAux___rarg(x_2, x_10);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_instantiate_value_lparams(x_1, x_2);
x_17 = l_Lean_Expr_betaRev(x_16, x_3);
lean_dec(x_16);
x_18 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_17);
x_19 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfUntilIdRhs(x_18, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_21);
x_23 = lean_box(0);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_21);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_19, 0, x_25);
return x_19;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = l___private_Lean_Meta_WHNF_0__Lean_Meta_isIdRhsApp(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_26);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l___private_Lean_Meta_WHNF_0__Lean_Meta_extractIdRhs(x_26);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_19);
if (x_34 == 0)
{
return x_19;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_19, 0);
x_36 = lean_ctor_get(x_19, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_19);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_st_ref_get(x_5, x_6);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_34; uint8_t x_35; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_34 = l_Lean_Meta_smartUnfolding;
x_35 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_9, x_34);
lean_dec(x_9);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_14);
lean_free_object(x_10);
x_36 = lean_box(0);
x_15 = x_36;
goto block_33;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = l_Lean_Meta_smartUnfoldingSuffix;
lean_inc(x_7);
x_38 = lean_name_mk_string(x_7, x_37);
x_39 = l_Lean_Environment_contains(x_14, x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
lean_free_object(x_10);
x_40 = lean_box(0);
x_15 = x_40;
goto block_33;
}
else
{
lean_object* x_41; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_box(0);
lean_ctor_set(x_10, 0, x_41);
return x_10;
}
}
block_33:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_15);
x_16 = l_Lean_Meta_getConstNoEx_x3f(x_7, x_2, x_3, x_4, x_5, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
lean_dec(x_17);
if (lean_obj_tag(x_24) == 1)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_24, x_8, x_2, x_3, x_4, x_5, x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
lean_dec(x_24);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_16);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_16, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_16, 0, x_29);
return x_16;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_dec(x_16);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_60; uint8_t x_61; 
x_42 = lean_ctor_get(x_10, 0);
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_10);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
lean_dec(x_42);
x_60 = l_Lean_Meta_smartUnfolding;
x_61 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_9, x_60);
lean_dec(x_9);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_44);
x_62 = lean_box(0);
x_45 = x_62;
goto block_59;
}
else
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_63 = l_Lean_Meta_smartUnfoldingSuffix;
lean_inc(x_7);
x_64 = lean_name_mk_string(x_7, x_63);
x_65 = l_Lean_Environment_contains(x_44, x_64);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; 
x_66 = lean_box(0);
x_45 = x_66;
goto block_59;
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_43);
return x_68;
}
}
block_59:
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_45);
x_46 = l_Lean_Meta_getConstNoEx_x3f(x_7, x_2, x_3, x_4, x_5, x_43);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
x_50 = lean_box(0);
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_49;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
else
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_47, 0);
lean_inc(x_52);
lean_dec(x_47);
if (lean_obj_tag(x_52) == 1)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_dec(x_46);
x_54 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_52, x_8, x_2, x_3, x_4, x_5, x_53);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
lean_dec(x_52);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_52);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = lean_ctor_get(x_46, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_56 = x_46;
} else {
 lean_dec_ref(x_46);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
}
}
case 5:
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
x_70 = l_Lean_Expr_getAppFn(x_69);
lean_dec(x_69);
if (lean_obj_tag(x_70) == 4)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Meta_getConst_x3f(x_71, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_72);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst(x_1, x_2, x_3, x_4, x_5, x_75);
return x_76;
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_73);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_78 = lean_ctor_get(x_73, 1);
x_79 = lean_ctor_get(x_73, 0);
lean_dec(x_79);
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
lean_dec(x_74);
x_81 = l_Lean_ConstantInfo_levelParams(x_80);
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_List_lengthAux___rarg(x_81, x_82);
lean_dec(x_81);
x_84 = l_List_lengthAux___rarg(x_72, x_82);
x_85 = lean_nat_dec_eq(x_83, x_84);
lean_dec(x_84);
lean_dec(x_83);
if (x_85 == 0)
{
lean_object* x_86; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = lean_box(0);
lean_ctor_set(x_73, 0, x_86);
return x_73;
}
else
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = lean_ctor_get(x_4, 0);
lean_inc(x_87);
x_88 = l_Lean_Meta_smartUnfolding;
x_89 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
uint8_t x_90; 
x_90 = l_Lean_ConstantInfo_hasValue(x_80);
if (x_90 == 0)
{
lean_object* x_91; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_91 = lean_box(0);
lean_ctor_set(x_73, 0, x_91);
return x_73;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_free_object(x_73);
x_92 = l_Lean_Expr_getAppNumArgsAux(x_1, x_82);
x_93 = lean_mk_empty_array_with_capacity(x_92);
lean_dec(x_92);
x_94 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_93);
x_95 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_80, x_72, x_94, x_2, x_3, x_4, x_5, x_78);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_94);
lean_dec(x_72);
lean_dec(x_80);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_free_object(x_73);
x_96 = l_Lean_ConstantInfo_name(x_80);
x_97 = l_Lean_Meta_smartUnfoldingSuffix;
x_98 = lean_name_mk_string(x_96, x_97);
x_99 = l_Lean_Meta_getConstNoEx_x3f(x_98, x_2, x_3, x_4, x_5, x_78);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
if (lean_obj_tag(x_100) == 0)
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_99);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_102 = lean_ctor_get(x_99, 1);
x_103 = lean_ctor_get(x_99, 0);
lean_dec(x_103);
x_104 = l_Lean_ConstantInfo_hasValue(x_80);
if (x_104 == 0)
{
lean_object* x_105; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_105 = lean_box(0);
lean_ctor_set(x_99, 0, x_105);
return x_99;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_free_object(x_99);
x_106 = l_Lean_Expr_getAppNumArgsAux(x_1, x_82);
x_107 = lean_mk_empty_array_with_capacity(x_106);
lean_dec(x_106);
x_108 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_107);
x_109 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_80, x_72, x_108, x_2, x_3, x_4, x_5, x_102);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_108);
lean_dec(x_72);
lean_dec(x_80);
return x_109;
}
}
else
{
lean_object* x_110; uint8_t x_111; 
x_110 = lean_ctor_get(x_99, 1);
lean_inc(x_110);
lean_dec(x_99);
x_111 = l_Lean_ConstantInfo_hasValue(x_80);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_110);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = l_Lean_Expr_getAppNumArgsAux(x_1, x_82);
x_115 = lean_mk_empty_array_with_capacity(x_114);
lean_dec(x_114);
x_116 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_115);
x_117 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_80, x_72, x_116, x_2, x_3, x_4, x_5, x_110);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_116);
lean_dec(x_72);
lean_dec(x_80);
return x_117;
}
}
}
else
{
lean_object* x_118; 
x_118 = lean_ctor_get(x_100, 0);
lean_inc(x_118);
lean_dec(x_100);
if (lean_obj_tag(x_118) == 1)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_80);
x_119 = lean_ctor_get(x_99, 1);
lean_inc(x_119);
lean_dec(x_99);
x_120 = l_Lean_Expr_getAppNumArgsAux(x_1, x_82);
x_121 = lean_mk_empty_array_with_capacity(x_120);
lean_dec(x_120);
x_122 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_121);
x_123 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_118, x_72, x_122, x_2, x_3, x_4, x_5, x_119);
lean_dec(x_122);
lean_dec(x_72);
lean_dec(x_118);
return x_123;
}
else
{
uint8_t x_124; 
lean_dec(x_118);
x_124 = !lean_is_exclusive(x_99);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_125 = lean_ctor_get(x_99, 1);
x_126 = lean_ctor_get(x_99, 0);
lean_dec(x_126);
x_127 = l_Lean_ConstantInfo_hasValue(x_80);
if (x_127 == 0)
{
lean_object* x_128; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_128 = lean_box(0);
lean_ctor_set(x_99, 0, x_128);
return x_99;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_free_object(x_99);
x_129 = l_Lean_Expr_getAppNumArgsAux(x_1, x_82);
x_130 = lean_mk_empty_array_with_capacity(x_129);
lean_dec(x_129);
x_131 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_130);
x_132 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_80, x_72, x_131, x_2, x_3, x_4, x_5, x_125);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_131);
lean_dec(x_72);
lean_dec(x_80);
return x_132;
}
}
else
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_99, 1);
lean_inc(x_133);
lean_dec(x_99);
x_134 = l_Lean_ConstantInfo_hasValue(x_80);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
lean_dec(x_80);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_135 = lean_box(0);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_133);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = l_Lean_Expr_getAppNumArgsAux(x_1, x_82);
x_138 = lean_mk_empty_array_with_capacity(x_137);
lean_dec(x_137);
x_139 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_138);
x_140 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_80, x_72, x_139, x_2, x_3, x_4, x_5, x_133);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_139);
lean_dec(x_72);
lean_dec(x_80);
return x_140;
}
}
}
}
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_141 = lean_ctor_get(x_73, 1);
lean_inc(x_141);
lean_dec(x_73);
x_142 = lean_ctor_get(x_74, 0);
lean_inc(x_142);
lean_dec(x_74);
x_143 = l_Lean_ConstantInfo_levelParams(x_142);
x_144 = lean_unsigned_to_nat(0u);
x_145 = l_List_lengthAux___rarg(x_143, x_144);
lean_dec(x_143);
x_146 = l_List_lengthAux___rarg(x_72, x_144);
x_147 = lean_nat_dec_eq(x_145, x_146);
lean_dec(x_146);
lean_dec(x_145);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_142);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_148 = lean_box(0);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_141);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_4, 0);
lean_inc(x_150);
x_151 = l_Lean_Meta_smartUnfolding;
x_152 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_150, x_151);
lean_dec(x_150);
if (x_152 == 0)
{
uint8_t x_153; 
x_153 = l_Lean_ConstantInfo_hasValue(x_142);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; 
lean_dec(x_142);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_154 = lean_box(0);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_141);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_156 = l_Lean_Expr_getAppNumArgsAux(x_1, x_144);
x_157 = lean_mk_empty_array_with_capacity(x_156);
lean_dec(x_156);
x_158 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_157);
x_159 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_142, x_72, x_158, x_2, x_3, x_4, x_5, x_141);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_158);
lean_dec(x_72);
lean_dec(x_142);
return x_159;
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_160 = l_Lean_ConstantInfo_name(x_142);
x_161 = l_Lean_Meta_smartUnfoldingSuffix;
x_162 = lean_name_mk_string(x_160, x_161);
x_163 = l_Lean_Meta_getConstNoEx_x3f(x_162, x_2, x_3, x_4, x_5, x_141);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_166 = x_163;
} else {
 lean_dec_ref(x_163);
 x_166 = lean_box(0);
}
x_167 = l_Lean_ConstantInfo_hasValue(x_142);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_142);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_168 = lean_box(0);
if (lean_is_scalar(x_166)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_166;
}
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_165);
return x_169;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_166);
x_170 = l_Lean_Expr_getAppNumArgsAux(x_1, x_144);
x_171 = lean_mk_empty_array_with_capacity(x_170);
lean_dec(x_170);
x_172 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_171);
x_173 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_142, x_72, x_172, x_2, x_3, x_4, x_5, x_165);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_172);
lean_dec(x_72);
lean_dec(x_142);
return x_173;
}
}
else
{
lean_object* x_174; 
x_174 = lean_ctor_get(x_164, 0);
lean_inc(x_174);
lean_dec(x_164);
if (lean_obj_tag(x_174) == 1)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_142);
x_175 = lean_ctor_get(x_163, 1);
lean_inc(x_175);
lean_dec(x_163);
x_176 = l_Lean_Expr_getAppNumArgsAux(x_1, x_144);
x_177 = lean_mk_empty_array_with_capacity(x_176);
lean_dec(x_176);
x_178 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_177);
x_179 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_174, x_72, x_178, x_2, x_3, x_4, x_5, x_175);
lean_dec(x_178);
lean_dec(x_72);
lean_dec(x_174);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
lean_dec(x_174);
x_180 = lean_ctor_get(x_163, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_181 = x_163;
} else {
 lean_dec_ref(x_163);
 x_181 = lean_box(0);
}
x_182 = l_Lean_ConstantInfo_hasValue(x_142);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; 
lean_dec(x_142);
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_183 = lean_box(0);
if (lean_is_scalar(x_181)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_181;
}
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_180);
return x_184;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_181);
x_185 = l_Lean_Expr_getAppNumArgsAux(x_1, x_144);
x_186 = lean_mk_empty_array_with_capacity(x_185);
lean_dec(x_185);
x_187 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_186);
x_188 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_142, x_72, x_187, x_2, x_3, x_4, x_5, x_180);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_187);
lean_dec(x_72);
lean_dec(x_142);
return x_188;
}
}
}
}
}
}
}
}
else
{
uint8_t x_189; 
lean_dec(x_72);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_189 = !lean_is_exclusive(x_73);
if (x_189 == 0)
{
return x_73;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_73, 0);
x_191 = lean_ctor_get(x_73, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_73);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
return x_192;
}
}
}
else
{
lean_object* x_193; 
lean_dec(x_70);
x_193 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst(x_1, x_2, x_3, x_4, x_5, x_6);
return x_193;
}
}
default: 
{
lean_object* x_194; lean_object* x_195; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_194 = lean_box(0);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_6);
return x_195;
}
}
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_projectionFnInfoExt;
x_12 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_11, x_10, x_1);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_projectionFnInfoExt;
x_17 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_16, x_15, x_1);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Meta_getTransparency(x_2, x_3, x_4, x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = 3;
x_12 = lean_unbox(x_9);
lean_dec(x_9);
x_13 = l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11_(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_7, 0, x_14);
return x_7;
}
else
{
lean_object* x_15; 
x_15 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_15) == 4)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_free_object(x_7);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1(x_16, x_2, x_3, x_4, x_5, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_18, 0);
lean_inc(x_25);
lean_dec(x_18);
x_26 = lean_ctor_get_uint8(x_25, sizeof(void*)*3);
lean_dec(x_25);
if (x_26 == 0)
{
uint8_t x_27; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_17, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_17, 0, x_29);
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_17, 1);
lean_inc(x_34);
lean_dec(x_17);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_2, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_2, 3);
lean_inc(x_37);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_39 = 1;
lean_ctor_set_uint8(x_33, 5, x_39);
x_40 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_35);
lean_ctor_set(x_40, 2, x_36);
lean_ctor_set(x_40, 3, x_37);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_41 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_40, x_3, x_4, x_5, x_34);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 0);
lean_dec(x_44);
x_45 = lean_box(0);
lean_ctor_set(x_41, 0, x_45);
return x_41;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
lean_dec(x_41);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_ctor_get(x_42, 0);
lean_inc(x_50);
lean_dec(x_42);
x_51 = l_Lean_Expr_getAppFn(x_50);
x_52 = l_Lean_Meta_reduceProj_x3f(x_51, x_2, x_3, x_4, x_5, x_49);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
lean_dec(x_50);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_52, 0);
lean_dec(x_55);
x_56 = lean_box(0);
lean_ctor_set(x_52, 0, x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_52);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_52, 0);
lean_dec(x_61);
x_62 = !lean_is_exclusive(x_53);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_63 = lean_ctor_get(x_53, 0);
x_64 = l_Lean_levelZero;
x_65 = l_Lean_mkSort(x_64);
x_66 = lean_unsigned_to_nat(0u);
x_67 = l_Lean_Expr_getAppNumArgsAux(x_50, x_66);
lean_inc(x_67);
x_68 = lean_mk_array(x_67, x_65);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_sub(x_67, x_69);
lean_dec(x_67);
x_71 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_50, x_68, x_70);
x_72 = l_Lean_mkAppN(x_63, x_71);
lean_dec(x_71);
x_73 = l_Lean_Expr_headBeta(x_72);
lean_ctor_set(x_53, 0, x_73);
return x_52;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_74 = lean_ctor_get(x_53, 0);
lean_inc(x_74);
lean_dec(x_53);
x_75 = l_Lean_levelZero;
x_76 = l_Lean_mkSort(x_75);
x_77 = lean_unsigned_to_nat(0u);
x_78 = l_Lean_Expr_getAppNumArgsAux(x_50, x_77);
lean_inc(x_78);
x_79 = lean_mk_array(x_78, x_76);
x_80 = lean_unsigned_to_nat(1u);
x_81 = lean_nat_sub(x_78, x_80);
lean_dec(x_78);
x_82 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_50, x_79, x_81);
x_83 = l_Lean_mkAppN(x_74, x_82);
lean_dec(x_82);
x_84 = l_Lean_Expr_headBeta(x_83);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_52, 0, x_85);
return x_52;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_86 = lean_ctor_get(x_52, 1);
lean_inc(x_86);
lean_dec(x_52);
x_87 = lean_ctor_get(x_53, 0);
lean_inc(x_87);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 x_88 = x_53;
} else {
 lean_dec_ref(x_53);
 x_88 = lean_box(0);
}
x_89 = l_Lean_levelZero;
x_90 = l_Lean_mkSort(x_89);
x_91 = lean_unsigned_to_nat(0u);
x_92 = l_Lean_Expr_getAppNumArgsAux(x_50, x_91);
lean_inc(x_92);
x_93 = lean_mk_array(x_92, x_90);
x_94 = lean_unsigned_to_nat(1u);
x_95 = lean_nat_sub(x_92, x_94);
lean_dec(x_92);
x_96 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_50, x_93, x_95);
x_97 = l_Lean_mkAppN(x_87, x_96);
lean_dec(x_96);
x_98 = l_Lean_Expr_headBeta(x_97);
if (lean_is_scalar(x_88)) {
 x_99 = lean_alloc_ctor(1, 1, 0);
} else {
 x_99 = x_88;
}
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_86);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_50);
x_101 = !lean_is_exclusive(x_52);
if (x_101 == 0)
{
return x_52;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_52, 0);
x_103 = lean_ctor_get(x_52, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_52);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_41);
if (x_105 == 0)
{
return x_41;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_41, 0);
x_107 = lean_ctor_get(x_41, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_41);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_109 = lean_ctor_get_uint8(x_33, 0);
x_110 = lean_ctor_get_uint8(x_33, 1);
x_111 = lean_ctor_get_uint8(x_33, 2);
x_112 = lean_ctor_get_uint8(x_33, 3);
x_113 = lean_ctor_get_uint8(x_33, 4);
x_114 = lean_ctor_get_uint8(x_33, 6);
x_115 = lean_ctor_get_uint8(x_33, 7);
x_116 = lean_ctor_get_uint8(x_33, 8);
x_117 = lean_ctor_get_uint8(x_33, 9);
lean_dec(x_33);
x_118 = 1;
x_119 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_119, 0, x_109);
lean_ctor_set_uint8(x_119, 1, x_110);
lean_ctor_set_uint8(x_119, 2, x_111);
lean_ctor_set_uint8(x_119, 3, x_112);
lean_ctor_set_uint8(x_119, 4, x_113);
lean_ctor_set_uint8(x_119, 5, x_118);
lean_ctor_set_uint8(x_119, 6, x_114);
lean_ctor_set_uint8(x_119, 7, x_115);
lean_ctor_set_uint8(x_119, 8, x_116);
lean_ctor_set_uint8(x_119, 9, x_117);
x_120 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_35);
lean_ctor_set(x_120, 2, x_36);
lean_ctor_set(x_120, 3, x_37);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_121 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_120, x_3, x_4, x_5, x_34);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
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
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_127 = lean_ctor_get(x_121, 1);
lean_inc(x_127);
lean_dec(x_121);
x_128 = lean_ctor_get(x_122, 0);
lean_inc(x_128);
lean_dec(x_122);
x_129 = l_Lean_Expr_getAppFn(x_128);
x_130 = l_Lean_Meta_reduceProj_x3f(x_129, x_2, x_3, x_4, x_5, x_127);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_128);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_133 = x_130;
} else {
 lean_dec_ref(x_130);
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
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_136 = lean_ctor_get(x_130, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_137 = x_130;
} else {
 lean_dec_ref(x_130);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_131, 0);
lean_inc(x_138);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 x_139 = x_131;
} else {
 lean_dec_ref(x_131);
 x_139 = lean_box(0);
}
x_140 = l_Lean_levelZero;
x_141 = l_Lean_mkSort(x_140);
x_142 = lean_unsigned_to_nat(0u);
x_143 = l_Lean_Expr_getAppNumArgsAux(x_128, x_142);
lean_inc(x_143);
x_144 = lean_mk_array(x_143, x_141);
x_145 = lean_unsigned_to_nat(1u);
x_146 = lean_nat_sub(x_143, x_145);
lean_dec(x_143);
x_147 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_128, x_144, x_146);
x_148 = l_Lean_mkAppN(x_138, x_147);
lean_dec(x_147);
x_149 = l_Lean_Expr_headBeta(x_148);
if (lean_is_scalar(x_139)) {
 x_150 = lean_alloc_ctor(1, 1, 0);
} else {
 x_150 = x_139;
}
lean_ctor_set(x_150, 0, x_149);
if (lean_is_scalar(x_137)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_137;
}
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_136);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_128);
x_152 = lean_ctor_get(x_130, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_130, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_154 = x_130;
} else {
 lean_dec_ref(x_130);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_156 = lean_ctor_get(x_121, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_121, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_158 = x_121;
} else {
 lean_dec_ref(x_121);
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
}
else
{
lean_object* x_160; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_160 = lean_box(0);
lean_ctor_set(x_7, 0, x_160);
return x_7;
}
}
}
else
{
lean_object* x_161; lean_object* x_162; uint8_t x_163; uint8_t x_164; uint8_t x_165; 
x_161 = lean_ctor_get(x_7, 0);
x_162 = lean_ctor_get(x_7, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_7);
x_163 = 3;
x_164 = lean_unbox(x_161);
lean_dec(x_161);
x_165 = l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11_(x_164, x_163);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_166 = lean_box(0);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_162);
return x_167;
}
else
{
lean_object* x_168; 
x_168 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_168) == 4)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
lean_dec(x_168);
x_170 = l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1(x_169, x_2, x_3, x_4, x_5, x_162);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
x_174 = lean_box(0);
if (lean_is_scalar(x_173)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_173;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_172);
return x_175;
}
else
{
lean_object* x_176; uint8_t x_177; 
x_176 = lean_ctor_get(x_171, 0);
lean_inc(x_176);
lean_dec(x_171);
x_177 = lean_ctor_get_uint8(x_176, sizeof(void*)*3);
lean_dec(x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_178 = lean_ctor_get(x_170, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_179 = x_170;
} else {
 lean_dec_ref(x_170);
 x_179 = lean_box(0);
}
x_180 = lean_box(0);
if (lean_is_scalar(x_179)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_179;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_178);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; uint8_t x_190; uint8_t x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; uint8_t x_195; lean_object* x_196; uint8_t x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_182 = lean_ctor_get(x_2, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_170, 1);
lean_inc(x_183);
lean_dec(x_170);
x_184 = lean_ctor_get(x_2, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_2, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_2, 3);
lean_inc(x_186);
x_187 = lean_ctor_get_uint8(x_182, 0);
x_188 = lean_ctor_get_uint8(x_182, 1);
x_189 = lean_ctor_get_uint8(x_182, 2);
x_190 = lean_ctor_get_uint8(x_182, 3);
x_191 = lean_ctor_get_uint8(x_182, 4);
x_192 = lean_ctor_get_uint8(x_182, 6);
x_193 = lean_ctor_get_uint8(x_182, 7);
x_194 = lean_ctor_get_uint8(x_182, 8);
x_195 = lean_ctor_get_uint8(x_182, 9);
if (lean_is_exclusive(x_182)) {
 x_196 = x_182;
} else {
 lean_dec_ref(x_182);
 x_196 = lean_box(0);
}
x_197 = 1;
if (lean_is_scalar(x_196)) {
 x_198 = lean_alloc_ctor(0, 0, 10);
} else {
 x_198 = x_196;
}
lean_ctor_set_uint8(x_198, 0, x_187);
lean_ctor_set_uint8(x_198, 1, x_188);
lean_ctor_set_uint8(x_198, 2, x_189);
lean_ctor_set_uint8(x_198, 3, x_190);
lean_ctor_set_uint8(x_198, 4, x_191);
lean_ctor_set_uint8(x_198, 5, x_197);
lean_ctor_set_uint8(x_198, 6, x_192);
lean_ctor_set_uint8(x_198, 7, x_193);
lean_ctor_set_uint8(x_198, 8, x_194);
lean_ctor_set_uint8(x_198, 9, x_195);
x_199 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_199, 0, x_198);
lean_ctor_set(x_199, 1, x_184);
lean_ctor_set(x_199, 2, x_185);
lean_ctor_set(x_199, 3, x_186);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_200 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_199, x_3, x_4, x_5, x_183);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_203 = x_200;
} else {
 lean_dec_ref(x_200);
 x_203 = lean_box(0);
}
x_204 = lean_box(0);
if (lean_is_scalar(x_203)) {
 x_205 = lean_alloc_ctor(0, 2, 0);
} else {
 x_205 = x_203;
}
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_202);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_206 = lean_ctor_get(x_200, 1);
lean_inc(x_206);
lean_dec(x_200);
x_207 = lean_ctor_get(x_201, 0);
lean_inc(x_207);
lean_dec(x_201);
x_208 = l_Lean_Expr_getAppFn(x_207);
x_209 = l_Lean_Meta_reduceProj_x3f(x_208, x_2, x_3, x_4, x_5, x_206);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; 
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_207);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_212 = x_209;
} else {
 lean_dec_ref(x_209);
 x_212 = lean_box(0);
}
x_213 = lean_box(0);
if (lean_is_scalar(x_212)) {
 x_214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_214 = x_212;
}
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_211);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_216 = x_209;
} else {
 lean_dec_ref(x_209);
 x_216 = lean_box(0);
}
x_217 = lean_ctor_get(x_210, 0);
lean_inc(x_217);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 x_218 = x_210;
} else {
 lean_dec_ref(x_210);
 x_218 = lean_box(0);
}
x_219 = l_Lean_levelZero;
x_220 = l_Lean_mkSort(x_219);
x_221 = lean_unsigned_to_nat(0u);
x_222 = l_Lean_Expr_getAppNumArgsAux(x_207, x_221);
lean_inc(x_222);
x_223 = lean_mk_array(x_222, x_220);
x_224 = lean_unsigned_to_nat(1u);
x_225 = lean_nat_sub(x_222, x_224);
lean_dec(x_222);
x_226 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_207, x_223, x_225);
x_227 = l_Lean_mkAppN(x_217, x_226);
lean_dec(x_226);
x_228 = l_Lean_Expr_headBeta(x_227);
if (lean_is_scalar(x_218)) {
 x_229 = lean_alloc_ctor(1, 1, 0);
} else {
 x_229 = x_218;
}
lean_ctor_set(x_229, 0, x_228);
if (lean_is_scalar(x_216)) {
 x_230 = lean_alloc_ctor(0, 2, 0);
} else {
 x_230 = x_216;
}
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_215);
return x_230;
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_207);
x_231 = lean_ctor_get(x_209, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_209, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_233 = x_209;
} else {
 lean_dec_ref(x_209);
 x_233 = lean_box(0);
}
if (lean_is_scalar(x_233)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_233;
}
lean_ctor_set(x_234, 0, x_231);
lean_ctor_set(x_234, 1, x_232);
return x_234;
}
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_235 = lean_ctor_get(x_200, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_200, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_237 = x_200;
} else {
 lean_dec_ref(x_200);
 x_237 = lean_box(0);
}
if (lean_is_scalar(x_237)) {
 x_238 = lean_alloc_ctor(1, 2, 0);
} else {
 x_238 = x_237;
}
lean_ctor_set(x_238, 0, x_235);
lean_ctor_set(x_238, 1, x_236);
return x_238;
}
}
}
}
else
{
lean_object* x_239; lean_object* x_240; 
lean_dec(x_168);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_239 = lean_box(0);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_162);
return x_240;
}
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldProjInst___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_unfoldDefinition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
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
x_10 = lean_mk_string("failed to unfold definition");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
x_12 = l_Lean_indentExpr(x_1);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string("");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(x_16, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_object* l_Lean_Meta_whnfHeadPred___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_9);
x_11 = lean_apply_6(x_1, x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
lean_ctor_set(x_11, 0, x_9);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_9);
x_19 = l_Lean_Meta_unfoldDefinition_x3f(x_9, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
lean_ctor_set(x_19, 0, x_9);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_9);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_9);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
lean_dec(x_20);
x_27 = l_Lean_Meta_whnfHeadPred(x_26, x_1, x_3, x_4, x_5, x_6, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_19);
if (x_28 == 0)
{
return x_19;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_19, 0);
x_30 = lean_ctor_get(x_19, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_19);
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
uint8_t x_32; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
return x_11;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_8);
if (x_36 == 0)
{
return x_8;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_8, 0);
x_38 = lean_ctor_get(x_8, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_8);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Meta_whnfHeadPred(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_whnfHeadPred___lambda__1), 7, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_8, 0, lean_box(0));
x_9 = lean_mk_string("Lean.Meta.WHNF");
x_10 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.whnfEasyCases");
x_11 = lean_unsigned_to_nat(209u);
x_12 = lean_unsigned_to_nat(26u);
x_13 = lean_mk_string("unreachable code has been reached");
x_14 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_9, x_10, x_11, x_12, x_13);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
x_15 = lean_panic_fn(x_8, x_14);
x_16 = lean_apply_5(x_15, x_3, x_4, x_5, x_6, x_7);
return x_16;
}
case 1:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_inc(x_3);
lean_inc(x_17);
x_18 = l_Lean_Meta_getLocalDecl(x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
lean_ctor_set(x_18, 0, x_2);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_2);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_ctor_get(x_19, 4);
lean_inc(x_25);
x_26 = lean_ctor_get_uint8(x_19, sizeof(void*)*5);
lean_dec(x_19);
x_27 = l_Lean_Meta_getConfig(x_3, x_4, x_5, x_6, x_24);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
if (x_26 == 0)
{
lean_object* x_57; 
lean_free_object(x_27);
lean_dec(x_2);
x_57 = lean_box(0);
x_31 = x_57;
goto block_56;
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_29, 6);
if (x_58 == 0)
{
lean_dec(x_29);
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
else
{
lean_object* x_59; 
lean_free_object(x_27);
lean_dec(x_2);
x_59 = lean_box(0);
x_31 = x_59;
goto block_56;
}
}
block_56:
{
uint8_t x_32; 
lean_dec(x_31);
x_32 = lean_ctor_get_uint8(x_29, 7);
lean_dec(x_29);
if (x_32 == 0)
{
lean_dec(x_17);
x_2 = x_25;
x_7 = x_30;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_st_ref_get(x_6, x_30);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_take(x_4, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_37, 2);
x_41 = lean_box(0);
x_42 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_40, x_17, x_41);
lean_ctor_set(x_37, 2, x_42);
x_43 = lean_st_ref_set(x_4, x_37, x_38);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_2 = x_25;
x_7 = x_44;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
x_48 = lean_ctor_get(x_37, 2);
x_49 = lean_ctor_get(x_37, 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_50 = lean_box(0);
x_51 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_48, x_17, x_50);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_47);
lean_ctor_set(x_52, 2, x_51);
lean_ctor_set(x_52, 3, x_49);
x_53 = lean_st_ref_set(x_4, x_52, x_38);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_2 = x_25;
x_7 = x_54;
goto _start;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_27, 0);
x_61 = lean_ctor_get(x_27, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_27);
if (x_26 == 0)
{
lean_object* x_82; 
lean_dec(x_2);
x_82 = lean_box(0);
x_62 = x_82;
goto block_81;
}
else
{
uint8_t x_83; 
x_83 = lean_ctor_get_uint8(x_60, 6);
if (x_83 == 0)
{
lean_object* x_84; 
lean_dec(x_60);
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_2);
lean_ctor_set(x_84, 1, x_61);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_2);
x_85 = lean_box(0);
x_62 = x_85;
goto block_81;
}
}
block_81:
{
uint8_t x_63; 
lean_dec(x_62);
x_63 = lean_ctor_get_uint8(x_60, 7);
lean_dec(x_60);
if (x_63 == 0)
{
lean_dec(x_17);
x_2 = x_25;
x_7 = x_61;
goto _start;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_65 = lean_st_ref_get(x_6, x_61);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_take(x_4, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_68, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_68, 3);
lean_inc(x_73);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 lean_ctor_release(x_68, 2);
 lean_ctor_release(x_68, 3);
 x_74 = x_68;
} else {
 lean_dec_ref(x_68);
 x_74 = lean_box(0);
}
x_75 = lean_box(0);
x_76 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_72, x_17, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 4, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_71);
lean_ctor_set(x_77, 2, x_76);
lean_ctor_set(x_77, 3, x_73);
x_78 = lean_st_ref_set(x_4, x_77, x_69);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_2 = x_25;
x_7 = x_79;
goto _start;
}
}
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_86 = !lean_is_exclusive(x_18);
if (x_86 == 0)
{
return x_18;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_18, 0);
x_88 = lean_ctor_get(x_18, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_18);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
case 2:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_2, 0);
lean_inc(x_90);
x_91 = l_Lean_Meta_getExprMVarAssignment_x3f(x_90, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
uint8_t x_93; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_93 = !lean_is_exclusive(x_91);
if (x_93 == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_91, 0);
lean_dec(x_94);
lean_ctor_set(x_91, 0, x_2);
return x_91;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_91, 1);
lean_inc(x_95);
lean_dec(x_91);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_2);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_2);
x_97 = lean_ctor_get(x_91, 1);
lean_inc(x_97);
lean_dec(x_91);
x_98 = lean_ctor_get(x_92, 0);
lean_inc(x_98);
lean_dec(x_92);
x_2 = x_98;
x_7 = x_97;
goto _start;
}
}
case 4:
{
lean_object* x_100; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_100 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_100) == 0)
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_102 = lean_ctor_get(x_100, 0);
x_103 = lean_ctor_get(x_100, 1);
x_104 = l_Lean_Expr_isAppOf(x_102, x_1);
if (x_104 == 0)
{
lean_object* x_105; 
lean_free_object(x_100);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_102);
x_105 = l_Lean_Meta_unfoldDefinition_x3f(x_102, x_3, x_4, x_5, x_6, x_103);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
if (lean_obj_tag(x_106) == 0)
{
uint8_t x_107; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_107 = !lean_is_exclusive(x_105);
if (x_107 == 0)
{
lean_object* x_108; 
x_108 = lean_ctor_get(x_105, 0);
lean_dec(x_108);
lean_ctor_set(x_105, 0, x_102);
return x_105;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_105, 1);
lean_inc(x_109);
lean_dec(x_105);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_102);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_102);
x_111 = lean_ctor_get(x_105, 1);
lean_inc(x_111);
lean_dec(x_105);
x_112 = lean_ctor_get(x_106, 0);
lean_inc(x_112);
lean_dec(x_106);
x_2 = x_112;
x_7 = x_111;
goto _start;
}
}
else
{
uint8_t x_114; 
lean_dec(x_102);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_114 = !lean_is_exclusive(x_105);
if (x_114 == 0)
{
return x_105;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_105, 0);
x_116 = lean_ctor_get(x_105, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_105);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_100;
}
}
else
{
lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_118 = lean_ctor_get(x_100, 0);
x_119 = lean_ctor_get(x_100, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_100);
x_120 = l_Lean_Expr_isAppOf(x_118, x_1);
if (x_120 == 0)
{
lean_object* x_121; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_118);
x_121 = l_Lean_Meta_unfoldDefinition_x3f(x_118, x_3, x_4, x_5, x_6, x_119);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_118);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
else
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_118);
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
lean_dec(x_121);
x_127 = lean_ctor_get(x_122, 0);
lean_inc(x_127);
lean_dec(x_122);
x_2 = x_127;
x_7 = x_126;
goto _start;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_118);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_129 = lean_ctor_get(x_121, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_121, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_131 = x_121;
} else {
 lean_dec_ref(x_121);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(1, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
}
else
{
lean_object* x_133; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_118);
lean_ctor_set(x_133, 1, x_119);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_134 = !lean_is_exclusive(x_100);
if (x_134 == 0)
{
return x_100;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_100, 0);
x_136 = lean_ctor_get(x_100, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_100);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
case 5:
{
lean_object* x_138; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_138 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_138) == 0)
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_140 = lean_ctor_get(x_138, 0);
x_141 = lean_ctor_get(x_138, 1);
x_142 = l_Lean_Expr_isAppOf(x_140, x_1);
if (x_142 == 0)
{
lean_object* x_143; 
lean_free_object(x_138);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_140);
x_143 = l_Lean_Meta_unfoldDefinition_x3f(x_140, x_3, x_4, x_5, x_6, x_141);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; 
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
if (lean_obj_tag(x_144) == 0)
{
uint8_t x_145; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_145 = !lean_is_exclusive(x_143);
if (x_145 == 0)
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_143, 0);
lean_dec(x_146);
lean_ctor_set(x_143, 0, x_140);
return x_143;
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_143, 1);
lean_inc(x_147);
lean_dec(x_143);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_140);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_140);
x_149 = lean_ctor_get(x_143, 1);
lean_inc(x_149);
lean_dec(x_143);
x_150 = lean_ctor_get(x_144, 0);
lean_inc(x_150);
lean_dec(x_144);
x_2 = x_150;
x_7 = x_149;
goto _start;
}
}
else
{
uint8_t x_152; 
lean_dec(x_140);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_152 = !lean_is_exclusive(x_143);
if (x_152 == 0)
{
return x_143;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_143, 0);
x_154 = lean_ctor_get(x_143, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_143);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_138;
}
}
else
{
lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_156 = lean_ctor_get(x_138, 0);
x_157 = lean_ctor_get(x_138, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_138);
x_158 = l_Lean_Expr_isAppOf(x_156, x_1);
if (x_158 == 0)
{
lean_object* x_159; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_156);
x_159 = l_Lean_Meta_unfoldDefinition_x3f(x_156, x_3, x_4, x_5, x_6, x_157);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_162 = x_159;
} else {
 lean_dec_ref(x_159);
 x_162 = lean_box(0);
}
if (lean_is_scalar(x_162)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_162;
}
lean_ctor_set(x_163, 0, x_156);
lean_ctor_set(x_163, 1, x_161);
return x_163;
}
else
{
lean_object* x_164; lean_object* x_165; 
lean_dec(x_156);
x_164 = lean_ctor_get(x_159, 1);
lean_inc(x_164);
lean_dec(x_159);
x_165 = lean_ctor_get(x_160, 0);
lean_inc(x_165);
lean_dec(x_160);
x_2 = x_165;
x_7 = x_164;
goto _start;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_156);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_167 = lean_ctor_get(x_159, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_159, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_169 = x_159;
} else {
 lean_dec_ref(x_159);
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
lean_object* x_171; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_156);
lean_ctor_set(x_171, 1, x_157);
return x_171;
}
}
}
else
{
uint8_t x_172; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_172 = !lean_is_exclusive(x_138);
if (x_172 == 0)
{
return x_138;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_138, 0);
x_174 = lean_ctor_get(x_138, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_138);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
return x_175;
}
}
}
case 8:
{
lean_object* x_176; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_176 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_176) == 0)
{
uint8_t x_177; 
x_177 = !lean_is_exclusive(x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; uint8_t x_180; 
x_178 = lean_ctor_get(x_176, 0);
x_179 = lean_ctor_get(x_176, 1);
x_180 = l_Lean_Expr_isAppOf(x_178, x_1);
if (x_180 == 0)
{
lean_object* x_181; 
lean_free_object(x_176);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_178);
x_181 = l_Lean_Meta_unfoldDefinition_x3f(x_178, x_3, x_4, x_5, x_6, x_179);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
if (lean_obj_tag(x_182) == 0)
{
uint8_t x_183; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_183 = !lean_is_exclusive(x_181);
if (x_183 == 0)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_181, 0);
lean_dec(x_184);
lean_ctor_set(x_181, 0, x_178);
return x_181;
}
else
{
lean_object* x_185; lean_object* x_186; 
x_185 = lean_ctor_get(x_181, 1);
lean_inc(x_185);
lean_dec(x_181);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_178);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
else
{
lean_object* x_187; lean_object* x_188; 
lean_dec(x_178);
x_187 = lean_ctor_get(x_181, 1);
lean_inc(x_187);
lean_dec(x_181);
x_188 = lean_ctor_get(x_182, 0);
lean_inc(x_188);
lean_dec(x_182);
x_2 = x_188;
x_7 = x_187;
goto _start;
}
}
else
{
uint8_t x_190; 
lean_dec(x_178);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_190 = !lean_is_exclusive(x_181);
if (x_190 == 0)
{
return x_181;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_181, 0);
x_192 = lean_ctor_get(x_181, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_181);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_176;
}
}
else
{
lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_194 = lean_ctor_get(x_176, 0);
x_195 = lean_ctor_get(x_176, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_176);
x_196 = l_Lean_Expr_isAppOf(x_194, x_1);
if (x_196 == 0)
{
lean_object* x_197; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_194);
x_197 = l_Lean_Meta_unfoldDefinition_x3f(x_194, x_3, x_4, x_5, x_6, x_195);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_194);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
else
{
lean_object* x_202; lean_object* x_203; 
lean_dec(x_194);
x_202 = lean_ctor_get(x_197, 1);
lean_inc(x_202);
lean_dec(x_197);
x_203 = lean_ctor_get(x_198, 0);
lean_inc(x_203);
lean_dec(x_198);
x_2 = x_203;
x_7 = x_202;
goto _start;
}
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_194);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_205 = lean_ctor_get(x_197, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_197, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_207 = x_197;
} else {
 lean_dec_ref(x_197);
 x_207 = lean_box(0);
}
if (lean_is_scalar(x_207)) {
 x_208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_208 = x_207;
}
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_206);
return x_208;
}
}
else
{
lean_object* x_209; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_194);
lean_ctor_set(x_209, 1, x_195);
return x_209;
}
}
}
else
{
uint8_t x_210; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_210 = !lean_is_exclusive(x_176);
if (x_210 == 0)
{
return x_176;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_176, 0);
x_212 = lean_ctor_get(x_176, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_176);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
case 10:
{
lean_object* x_214; 
x_214 = lean_ctor_get(x_2, 1);
lean_inc(x_214);
lean_dec(x_2);
x_2 = x_214;
goto _start;
}
case 11:
{
lean_object* x_216; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_216 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_216) == 0)
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_216, 0);
x_219 = lean_ctor_get(x_216, 1);
x_220 = l_Lean_Expr_isAppOf(x_218, x_1);
if (x_220 == 0)
{
lean_object* x_221; 
lean_free_object(x_216);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_218);
x_221 = l_Lean_Meta_unfoldDefinition_x3f(x_218, x_3, x_4, x_5, x_6, x_219);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
if (lean_obj_tag(x_222) == 0)
{
uint8_t x_223; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_223 = !lean_is_exclusive(x_221);
if (x_223 == 0)
{
lean_object* x_224; 
x_224 = lean_ctor_get(x_221, 0);
lean_dec(x_224);
lean_ctor_set(x_221, 0, x_218);
return x_221;
}
else
{
lean_object* x_225; lean_object* x_226; 
x_225 = lean_ctor_get(x_221, 1);
lean_inc(x_225);
lean_dec(x_221);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_218);
lean_ctor_set(x_226, 1, x_225);
return x_226;
}
}
else
{
lean_object* x_227; lean_object* x_228; 
lean_dec(x_218);
x_227 = lean_ctor_get(x_221, 1);
lean_inc(x_227);
lean_dec(x_221);
x_228 = lean_ctor_get(x_222, 0);
lean_inc(x_228);
lean_dec(x_222);
x_2 = x_228;
x_7 = x_227;
goto _start;
}
}
else
{
uint8_t x_230; 
lean_dec(x_218);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_230 = !lean_is_exclusive(x_221);
if (x_230 == 0)
{
return x_221;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_221, 0);
x_232 = lean_ctor_get(x_221, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_221);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_216;
}
}
else
{
lean_object* x_234; lean_object* x_235; uint8_t x_236; 
x_234 = lean_ctor_get(x_216, 0);
x_235 = lean_ctor_get(x_216, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_216);
x_236 = l_Lean_Expr_isAppOf(x_234, x_1);
if (x_236 == 0)
{
lean_object* x_237; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_234);
x_237 = l_Lean_Meta_unfoldDefinition_x3f(x_234, x_3, x_4, x_5, x_6, x_235);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
lean_ctor_set(x_241, 0, x_234);
lean_ctor_set(x_241, 1, x_239);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; 
lean_dec(x_234);
x_242 = lean_ctor_get(x_237, 1);
lean_inc(x_242);
lean_dec(x_237);
x_243 = lean_ctor_get(x_238, 0);
lean_inc(x_243);
lean_dec(x_238);
x_2 = x_243;
x_7 = x_242;
goto _start;
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_234);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_245 = lean_ctor_get(x_237, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_237, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_247 = x_237;
} else {
 lean_dec_ref(x_237);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
lean_object* x_249; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_234);
lean_ctor_set(x_249, 1, x_235);
return x_249;
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_250 = !lean_is_exclusive(x_216);
if (x_250 == 0)
{
return x_216;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_216, 0);
x_252 = lean_ctor_get(x_216, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_216);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
default: 
{
lean_object* x_254; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_2);
lean_ctor_set(x_254, 1, x_7);
return x_254;
}
}
}
}
lean_object* l_Lean_Meta_whnfHeadPred___at_Lean_Meta_whnfUntil___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_whnfUntil(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Expr_isAppOf(x_10, x_2);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = l_Lean_Expr_isAppOf(x_14, x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
return x_20;
}
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
return x_8;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfUntil___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_whnfHeadPred___at_Lean_Meta_whnfUntil___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_whnfHeadPred___at_Lean_Meta_whnfUntil___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_whnfUntil___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_whnfUntil(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_isApp(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Meta_reduceMatcher_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_11);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 1);
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
x_23 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_23) == 4)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_free_object(x_10);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_getConst_x3f(x_24, x_2, x_3, x_4, x_5, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_26, 0, x_30);
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_dec(x_26);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_27, 0);
lean_inc(x_34);
lean_dec(x_27);
switch (lean_obj_tag(x_34)) {
case 1:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_dec(x_26);
x_36 = l_Lean_ConstantInfo_name(x_34);
x_37 = l_Lean_Meta_isAuxDef(x_36, x_2, x_3, x_4, x_5, x_35);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
uint8_t x_40; 
lean_dec(x_34);
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_37, 0);
lean_dec(x_41);
x_42 = lean_box(0);
lean_ctor_set(x_37, 0, x_42);
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_dec(x_37);
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Lean_Expr_getAppNumArgsAux(x_1, x_47);
x_49 = lean_mk_empty_array_with_capacity(x_48);
lean_dec(x_48);
x_50 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_49);
x_51 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_34, x_25, x_50, x_2, x_3, x_4, x_5, x_46);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_50);
lean_dec(x_25);
lean_dec(x_34);
return x_51;
}
}
case 4:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_52 = lean_ctor_get(x_26, 1);
lean_inc(x_52);
lean_dec(x_26);
x_53 = lean_ctor_get(x_34, 0);
lean_inc(x_53);
lean_dec(x_34);
x_54 = l_Lean_levelZero;
x_55 = l_Lean_mkSort(x_54);
x_56 = lean_unsigned_to_nat(0u);
x_57 = l_Lean_Expr_getAppNumArgsAux(x_1, x_56);
lean_inc(x_57);
x_58 = lean_mk_array(x_57, x_55);
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_nat_sub(x_57, x_59);
lean_dec(x_57);
x_61 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_58, x_60);
x_62 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__2___boxed), 6, 0);
x_63 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__1___boxed), 6, 0);
x_64 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_53, x_25, x_61, x_62, x_63, x_2, x_3, x_4, x_5, x_52);
lean_dec(x_61);
lean_dec(x_25);
lean_dec(x_53);
return x_64;
}
case 7:
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_65 = lean_ctor_get(x_26, 1);
lean_inc(x_65);
lean_dec(x_26);
x_66 = lean_ctor_get(x_34, 0);
lean_inc(x_66);
lean_dec(x_34);
x_67 = l_Lean_levelZero;
x_68 = l_Lean_mkSort(x_67);
x_69 = lean_unsigned_to_nat(0u);
x_70 = l_Lean_Expr_getAppNumArgsAux(x_1, x_69);
lean_inc(x_70);
x_71 = lean_mk_array(x_70, x_68);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_sub(x_70, x_72);
lean_dec(x_70);
x_74 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_71, x_73);
x_75 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__2___boxed), 6, 0);
x_76 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__1___boxed), 6, 0);
x_77 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_66, x_25, x_74, x_75, x_76, x_2, x_3, x_4, x_5, x_65);
lean_dec(x_74);
lean_dec(x_25);
return x_77;
}
default: 
{
uint8_t x_78; 
lean_dec(x_34);
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_26);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_26, 0);
lean_dec(x_79);
x_80 = lean_box(0);
lean_ctor_set(x_26, 0, x_80);
return x_26;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_26, 1);
lean_inc(x_81);
lean_dec(x_26);
x_82 = lean_box(0);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_26);
if (x_84 == 0)
{
return x_26;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_26, 0);
x_86 = lean_ctor_get(x_26, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_26);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
lean_object* x_88; 
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = lean_box(0);
lean_ctor_set(x_10, 0, x_88);
return x_10;
}
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_10, 1);
lean_inc(x_89);
lean_dec(x_10);
x_90 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_90) == 4)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = l_Lean_Meta_getConst_x3f(x_91, x_2, x_3, x_4, x_5, x_89);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_92);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
x_97 = lean_box(0);
if (lean_is_scalar(x_96)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_96;
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_95);
return x_98;
}
else
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_94, 0);
lean_inc(x_99);
lean_dec(x_94);
switch (lean_obj_tag(x_99)) {
case 1:
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_100 = lean_ctor_get(x_93, 1);
lean_inc(x_100);
lean_dec(x_93);
x_101 = l_Lean_ConstantInfo_name(x_99);
x_102 = l_Lean_Meta_isAuxDef(x_101, x_2, x_3, x_4, x_5, x_100);
lean_dec(x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_99);
lean_dec(x_92);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_106 = x_102;
} else {
 lean_dec_ref(x_102);
 x_106 = lean_box(0);
}
x_107 = lean_box(0);
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_105);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_109 = lean_ctor_get(x_102, 1);
lean_inc(x_109);
lean_dec(x_102);
x_110 = lean_unsigned_to_nat(0u);
x_111 = l_Lean_Expr_getAppNumArgsAux(x_1, x_110);
x_112 = lean_mk_empty_array_with_capacity(x_111);
lean_dec(x_111);
x_113 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_1, x_112);
x_114 = l___private_Lean_Meta_WHNF_0__Lean_Meta_deltaBetaDefinition___at_Lean_Meta_unfoldDefinition_x3f___spec__2(x_99, x_92, x_113, x_2, x_3, x_4, x_5, x_109);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_113);
lean_dec(x_92);
lean_dec(x_99);
return x_114;
}
}
case 4:
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_115 = lean_ctor_get(x_93, 1);
lean_inc(x_115);
lean_dec(x_93);
x_116 = lean_ctor_get(x_99, 0);
lean_inc(x_116);
lean_dec(x_99);
x_117 = l_Lean_levelZero;
x_118 = l_Lean_mkSort(x_117);
x_119 = lean_unsigned_to_nat(0u);
x_120 = l_Lean_Expr_getAppNumArgsAux(x_1, x_119);
lean_inc(x_120);
x_121 = lean_mk_array(x_120, x_118);
x_122 = lean_unsigned_to_nat(1u);
x_123 = lean_nat_sub(x_120, x_122);
lean_dec(x_120);
x_124 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_121, x_123);
x_125 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__2___boxed), 6, 0);
x_126 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__1___boxed), 6, 0);
x_127 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceQuotRec___rarg(x_116, x_92, x_124, x_125, x_126, x_2, x_3, x_4, x_5, x_115);
lean_dec(x_124);
lean_dec(x_92);
lean_dec(x_116);
return x_127;
}
case 7:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_128 = lean_ctor_get(x_93, 1);
lean_inc(x_128);
lean_dec(x_93);
x_129 = lean_ctor_get(x_99, 0);
lean_inc(x_129);
lean_dec(x_99);
x_130 = l_Lean_levelZero;
x_131 = l_Lean_mkSort(x_130);
x_132 = lean_unsigned_to_nat(0u);
x_133 = l_Lean_Expr_getAppNumArgsAux(x_1, x_132);
lean_inc(x_133);
x_134 = lean_mk_array(x_133, x_131);
x_135 = lean_unsigned_to_nat(1u);
x_136 = lean_nat_sub(x_133, x_135);
lean_dec(x_133);
x_137 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_134, x_136);
x_138 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__2___boxed), 6, 0);
x_139 = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___lambda__1___boxed), 6, 0);
x_140 = l___private_Lean_Meta_WHNF_0__Lean_Meta_reduceRec___rarg(x_129, x_92, x_137, x_138, x_139, x_2, x_3, x_4, x_5, x_128);
lean_dec(x_137);
lean_dec(x_92);
return x_140;
}
default: 
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_99);
lean_dec(x_92);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = lean_ctor_get(x_93, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_142 = x_93;
} else {
 lean_dec_ref(x_93);
 x_142 = lean_box(0);
}
x_143 = lean_box(0);
if (lean_is_scalar(x_142)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_142;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_141);
return x_144;
}
}
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_92);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_145 = lean_ctor_get(x_93, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_93, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_147 = x_93;
} else {
 lean_dec_ref(x_93);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_90);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_149 = lean_box(0);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_89);
return x_150;
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_151 = !lean_is_exclusive(x_10);
if (x_151 == 0)
{
return x_10;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_10, 0);
x_153 = lean_ctor_get(x_10, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_10);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_reduceRecMatcher_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_reduceRecMatcher_x3f___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
}
}
lean_object* l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_5, 0);
x_13 = l_Lean_Environment_evalConstCheck___rarg(x_11, x_12, x_1, x_2);
x_14 = l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg(x_13, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_13);
return x_14;
}
}
lean_object* l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_box(0);
x_8 = lean_mk_string("Bool");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg(x_9, x_1, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_reduceBoolNativeUnsafe___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_ofExcept___at_Lean_Meta_reduceBoolNativeUnsafe___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_reduceBoolNativeUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_reduceBoolNativeUnsafe(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_reduceNatNativeUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_box(0);
x_8 = lean_mk_string("Nat");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = l_Lean_evalConstCheck___at_Lean_Meta_reduceBoolNativeUnsafe___spec__1___rarg(x_9, x_1, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Meta_reduceNatNativeUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_reduceNatNativeUnsafe(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_reduceBoolNative___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Meta_reduceBoolNative(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_reduceBoolNative___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Meta_reduceBoolNative___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_reduceBoolNative(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_reduceNatNative___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Meta_reduceNatNative(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNatNative___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Meta_reduceNatNative___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_reduceNatNative(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_reduceNative_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 4)
{
uint64_t x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_dec(x_4);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
lean_dec(x_5);
x_13 = lean_box_uint64(x_9);
x_14 = lean_box_uint64(x_12);
x_15 = lean_box_uint64(x_6);
x_16 = lean_apply_7(x_2, x_7, x_8, x_13, x_10, x_11, x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = lean_apply_1(x_3, x_1);
return x_17;
}
}
else
{
lean_object* x_18; 
lean_dec(x_4);
lean_dec(x_2);
x_18 = lean_apply_1(x_3, x_1);
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_apply_1(x_3, x_1);
return x_19;
}
}
}
lean_object* l_Lean_Meta_reduceNative_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNative_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceNative_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 4)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
if (lean_obj_tag(x_8) == 4)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = lean_mk_string("Lean");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("reduceBool");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_name_eq(x_9, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_mk_string("reduceNat");
x_18 = lean_name_mk_string(x_13, x_17);
x_19 = lean_name_eq(x_9, x_18);
lean_dec(x_18);
lean_dec(x_9);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_6);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Meta_reduceNatNativeUnsafe(x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_mkNatLit(x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_22, 0, x_26);
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_22, 0);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_22);
x_29 = l_Lean_mkNatLit(x_27);
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
x_32 = !lean_is_exclusive(x_22);
if (x_32 == 0)
{
return x_22;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_22, 0);
x_34 = lean_ctor_get(x_22, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_22);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
else
{
lean_object* x_36; 
lean_dec(x_13);
lean_dec(x_9);
x_36 = l_Lean_Meta_reduceBoolNativeUnsafe(x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
x_41 = lean_mk_string("Bool");
x_42 = lean_name_mk_string(x_11, x_41);
x_43 = lean_mk_string("false");
x_44 = lean_name_mk_string(x_42, x_43);
x_45 = lean_box(0);
x_46 = l_Lean_mkConst(x_44, x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_36, 0, x_47);
return x_36;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_36, 1);
lean_inc(x_48);
lean_dec(x_36);
x_49 = lean_mk_string("Bool");
x_50 = lean_name_mk_string(x_11, x_49);
x_51 = lean_mk_string("false");
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = lean_box(0);
x_54 = l_Lean_mkConst(x_52, x_53);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_48);
return x_56;
}
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_36);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_58 = lean_ctor_get(x_36, 0);
lean_dec(x_58);
x_59 = lean_mk_string("Bool");
x_60 = lean_name_mk_string(x_11, x_59);
x_61 = lean_mk_string("true");
x_62 = lean_name_mk_string(x_60, x_61);
x_63 = lean_box(0);
x_64 = l_Lean_mkConst(x_62, x_63);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_36, 0, x_65);
return x_36;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_66 = lean_ctor_get(x_36, 1);
lean_inc(x_66);
lean_dec(x_36);
x_67 = lean_mk_string("Bool");
x_68 = lean_name_mk_string(x_11, x_67);
x_69 = lean_mk_string("true");
x_70 = lean_name_mk_string(x_68, x_69);
x_71 = lean_box(0);
x_72 = l_Lean_mkConst(x_70, x_71);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_66);
return x_74;
}
}
}
else
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_36);
if (x_75 == 0)
{
return x_36;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_36, 0);
x_77 = lean_ctor_get(x_36, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_36);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_8);
lean_dec(x_7);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_6);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_7);
lean_dec(x_1);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_6);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_1);
x_83 = lean_box(0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_6);
return x_84;
}
}
}
lean_object* l_Lean_Meta_reduceNative_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_reduceNative_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_withNatValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
uint64_t x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
x_13 = lean_ctor_get(x_5, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_6, 1);
x_16 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
x_17 = lean_ctor_get(x_6, 0);
lean_dec(x_17);
x_18 = lean_mk_string("Nat");
x_19 = lean_string_dec_eq(x_15, x_18);
lean_dec(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_2);
x_20 = lean_apply_1(x_4, x_1);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_1, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_1, 0);
lean_dec(x_23);
x_24 = lean_mk_string("zero");
x_25 = lean_string_dec_eq(x_11, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_18);
x_26 = lean_apply_1(x_4, x_1);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_free_object(x_1);
lean_dec(x_18);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_4);
x_27 = lean_box_uint64(x_10);
x_28 = lean_box_uint64(x_16);
x_29 = lean_box_uint64(x_12);
x_30 = lean_apply_4(x_2, x_8, x_27, x_28, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_1);
x_31 = lean_mk_string("zero");
x_32 = lean_string_dec_eq(x_11, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_18);
x_33 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_33, 0, x_5);
lean_ctor_set(x_33, 1, x_8);
lean_ctor_set_uint64(x_33, sizeof(void*)*2, x_10);
x_34 = lean_apply_1(x_4, x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_18);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_4);
x_35 = lean_box_uint64(x_10);
x_36 = lean_box_uint64(x_16);
x_37 = lean_box_uint64(x_12);
x_38 = lean_apply_4(x_2, x_8, x_35, x_36, x_37);
return x_38;
}
}
}
}
else
{
lean_object* x_39; uint64_t x_40; lean_object* x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_6, 1);
x_40 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
lean_inc(x_39);
lean_dec(x_6);
x_41 = lean_mk_string("Nat");
x_42 = lean_string_dec_eq(x_39, x_41);
lean_dec(x_39);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_41);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_2);
x_43 = lean_apply_1(x_4, x_1);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_44 = x_1;
} else {
 lean_dec_ref(x_1);
 x_44 = lean_box(0);
}
x_45 = lean_mk_string("zero");
x_46 = lean_string_dec_eq(x_11, x_45);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_2);
x_47 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_47, 0, x_7);
lean_ctor_set(x_47, 1, x_41);
lean_ctor_set_uint64(x_47, sizeof(void*)*2, x_40);
lean_ctor_set(x_5, 0, x_47);
if (lean_is_scalar(x_44)) {
 x_48 = lean_alloc_ctor(4, 2, 8);
} else {
 x_48 = x_44;
}
lean_ctor_set(x_48, 0, x_5);
lean_ctor_set(x_48, 1, x_8);
lean_ctor_set_uint64(x_48, sizeof(void*)*2, x_10);
x_49 = lean_apply_1(x_4, x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_44);
lean_dec(x_41);
lean_free_object(x_5);
lean_dec(x_11);
lean_dec(x_4);
x_50 = lean_box_uint64(x_10);
x_51 = lean_box_uint64(x_40);
x_52 = lean_box_uint64(x_12);
x_53 = lean_apply_4(x_2, x_8, x_50, x_51, x_52);
return x_53;
}
}
}
}
else
{
uint64_t x_54; lean_object* x_55; uint64_t x_56; lean_object* x_57; uint64_t x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_54 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_55 = lean_ctor_get(x_5, 1);
x_56 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
lean_inc(x_55);
lean_dec(x_5);
x_57 = lean_ctor_get(x_6, 1);
lean_inc(x_57);
x_58 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_59 = x_6;
} else {
 lean_dec_ref(x_6);
 x_59 = lean_box(0);
}
x_60 = lean_mk_string("Nat");
x_61 = lean_string_dec_eq(x_57, x_60);
lean_dec(x_57);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_8);
lean_dec(x_2);
x_62 = lean_apply_1(x_4, x_1);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_63 = x_1;
} else {
 lean_dec_ref(x_1);
 x_63 = lean_box(0);
}
x_64 = lean_mk_string("zero");
x_65 = lean_string_dec_eq(x_55, x_64);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_2);
if (lean_is_scalar(x_59)) {
 x_66 = lean_alloc_ctor(1, 2, 8);
} else {
 x_66 = x_59;
}
lean_ctor_set(x_66, 0, x_7);
lean_ctor_set(x_66, 1, x_60);
lean_ctor_set_uint64(x_66, sizeof(void*)*2, x_58);
x_67 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_55);
lean_ctor_set_uint64(x_67, sizeof(void*)*2, x_56);
if (lean_is_scalar(x_63)) {
 x_68 = lean_alloc_ctor(4, 2, 8);
} else {
 x_68 = x_63;
}
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_8);
lean_ctor_set_uint64(x_68, sizeof(void*)*2, x_54);
x_69 = lean_apply_1(x_4, x_68);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_63);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_4);
x_70 = lean_box_uint64(x_54);
x_71 = lean_box_uint64(x_58);
x_72 = lean_box_uint64(x_56);
x_73 = lean_apply_4(x_2, x_8, x_70, x_71, x_72);
return x_73;
}
}
}
}
else
{
lean_object* x_74; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_74 = lean_apply_1(x_4, x_1);
return x_74;
}
}
else
{
lean_object* x_75; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_75 = lean_apply_1(x_4, x_1);
return x_75;
}
}
else
{
lean_object* x_76; 
lean_dec(x_5);
lean_dec(x_2);
x_76 = lean_apply_1(x_4, x_1);
return x_76;
}
}
case 9:
{
lean_object* x_77; 
lean_dec(x_2);
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
if (lean_obj_tag(x_77) == 0)
{
uint64_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_4);
x_78 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_box_uint64(x_78);
x_81 = lean_apply_2(x_3, x_79, x_80);
return x_81;
}
else
{
lean_object* x_82; 
lean_dec(x_77);
lean_dec(x_3);
x_82 = lean_apply_1(x_4, x_1);
return x_82;
}
}
default: 
{
lean_object* x_83; 
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_apply_1(x_4, x_1);
return x_83;
}
}
}
}
lean_object* l_Lean_Meta_withNatValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNatValue_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withNatValue___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_whnf(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
switch (lean_obj_tag(x_9)) {
case 4:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_8, 1);
x_15 = lean_ctor_get(x_8, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_mk_string("Nat");
x_19 = lean_string_dec_eq(x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_box(0);
lean_ctor_set(x_8, 0, x_20);
return x_8;
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_mk_string("zero");
x_22 = lean_string_dec_eq(x_16, x_21);
lean_dec(x_21);
lean_dec(x_16);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set(x_8, 0, x_23);
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_free_object(x_8);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_apply_6(x_2, x_24, x_3, x_4, x_5, x_6, x_14);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
lean_dec(x_8);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_dec(x_10);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_dec(x_11);
x_29 = lean_mk_string("Nat");
x_30 = lean_string_dec_eq(x_28, x_29);
lean_dec(x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_26);
return x_32;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_mk_string("zero");
x_34 = lean_string_dec_eq(x_27, x_33);
lean_dec(x_33);
lean_dec(x_27);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_26);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_apply_6(x_2, x_37, x_3, x_4, x_5, x_6, x_26);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_8);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_8, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_8, 0, x_41);
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_8, 1);
lean_inc(x_42);
lean_dec(x_8);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_8);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_8, 0);
lean_dec(x_46);
x_47 = lean_box(0);
lean_ctor_set(x_8, 0, x_47);
return x_8;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_8, 1);
lean_inc(x_48);
lean_dec(x_8);
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
uint8_t x_51; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_8);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_8, 0);
lean_dec(x_52);
x_53 = lean_box(0);
lean_ctor_set(x_8, 0, x_53);
return x_8;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_8, 1);
lean_inc(x_54);
lean_dec(x_8);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
case 9:
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_9, 0);
lean_inc(x_57);
lean_dec(x_9);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_8, 1);
lean_inc(x_58);
lean_dec(x_8);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_apply_6(x_2, x_59, x_3, x_4, x_5, x_6, x_58);
return x_60;
}
else
{
uint8_t x_61; 
lean_dec(x_57);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_8);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_8, 0);
lean_dec(x_62);
x_63 = lean_box(0);
lean_ctor_set(x_8, 0, x_63);
return x_8;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_8, 1);
lean_inc(x_64);
lean_dec(x_8);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
default: 
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_8);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_8, 0);
lean_dec(x_68);
x_69 = lean_box(0);
lean_ctor_set(x_8, 0, x_69);
return x_8;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_8, 1);
lean_inc(x_70);
lean_dec(x_8);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_8);
if (x_73 == 0)
{
return x_8;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_8, 0);
x_75 = lean_ctor_get(x_8, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_8);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l_Lean_Meta_withNatValue(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNatValue___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceUnaryNatOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_whnf(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
switch (lean_obj_tag(x_9)) {
case 4:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_8, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_mk_string("Nat");
x_18 = lean_string_dec_eq(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_1);
x_19 = lean_box(0);
lean_ctor_set(x_8, 0, x_19);
return x_8;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_mk_string("zero");
x_21 = lean_string_dec_eq(x_15, x_20);
lean_dec(x_20);
lean_dec(x_15);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = lean_box(0);
lean_ctor_set(x_8, 0, x_22);
return x_8;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_apply_1(x_1, x_23);
x_25 = l_Lean_mkNatLit(x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_8, 0, x_26);
return x_8;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_8, 1);
lean_inc(x_27);
lean_dec(x_8);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_dec(x_10);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_dec(x_11);
x_30 = lean_mk_string("Nat");
x_31 = lean_string_dec_eq(x_29, x_30);
lean_dec(x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_28);
lean_dec(x_1);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_mk_string("zero");
x_35 = lean_string_dec_eq(x_28, x_34);
lean_dec(x_34);
lean_dec(x_28);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_27);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_apply_1(x_1, x_38);
x_40 = l_Lean_mkNatLit(x_39);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_27);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_8);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_8, 0);
lean_dec(x_44);
x_45 = lean_box(0);
lean_ctor_set(x_8, 0, x_45);
return x_8;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_8, 1);
lean_inc(x_46);
lean_dec(x_8);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_8);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_8, 0);
lean_dec(x_50);
x_51 = lean_box(0);
lean_ctor_set(x_8, 0, x_51);
return x_8;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_8, 1);
lean_inc(x_52);
lean_dec(x_8);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_10);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_8);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_8, 0);
lean_dec(x_56);
x_57 = lean_box(0);
lean_ctor_set(x_8, 0, x_57);
return x_8;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_8, 1);
lean_inc(x_58);
lean_dec(x_8);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
case 9:
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_9, 0);
lean_inc(x_61);
lean_dec(x_9);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_8);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_8, 0);
lean_dec(x_63);
x_64 = lean_ctor_get(x_61, 0);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_apply_1(x_1, x_64);
x_66 = l_Lean_mkNatLit(x_65);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_8, 0, x_67);
return x_8;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_8, 1);
lean_inc(x_68);
lean_dec(x_8);
x_69 = lean_ctor_get(x_61, 0);
lean_inc(x_69);
lean_dec(x_61);
x_70 = lean_apply_1(x_1, x_69);
x_71 = l_Lean_mkNatLit(x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_68);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_61);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_8);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_8, 0);
lean_dec(x_75);
x_76 = lean_box(0);
lean_ctor_set(x_8, 0, x_76);
return x_8;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_8, 1);
lean_inc(x_77);
lean_dec(x_8);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
}
default: 
{
uint8_t x_80; 
lean_dec(x_9);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_8);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_8, 0);
lean_dec(x_81);
x_82 = lean_box(0);
lean_ctor_set(x_8, 0, x_82);
return x_8;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_8, 1);
lean_inc(x_83);
lean_dec(x_8);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_8);
if (x_86 == 0)
{
return x_8;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_8, 0);
x_88 = lean_ctor_get(x_8, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_8);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
lean_object* l_Lean_Meta_reduceBinNatOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_whnf(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 4:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_9, 1);
x_16 = lean_ctor_get(x_9, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_mk_string("Nat");
x_20 = lean_string_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_box(0);
lean_ctor_set(x_9, 0, x_21);
return x_9;
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_mk_string("zero");
x_23 = lean_string_dec_eq(x_17, x_22);
lean_dec(x_17);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_box(0);
lean_ctor_set(x_9, 0, x_24);
return x_9;
}
else
{
lean_object* x_25; 
lean_free_object(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Lean_Meta_whnf(x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 4:
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 1)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 1)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_31 = x_25;
} else {
 lean_dec_ref(x_25);
 x_31 = lean_box(0);
}
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_dec(x_28);
x_34 = lean_string_dec_eq(x_33, x_19);
lean_dec(x_19);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_32);
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_35 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_31;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_30);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = lean_string_dec_eq(x_32, x_22);
lean_dec(x_22);
lean_dec(x_32);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_38 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_31;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_30);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_40 = lean_box(0);
x_41 = lean_mk_string("Meta");
x_42 = lean_name_mk_string(x_40, x_41);
x_43 = lean_mk_string("isDefEq");
x_44 = lean_name_mk_string(x_42, x_43);
x_45 = lean_mk_string("whnf");
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("reduceBinOp");
x_48 = lean_name_mk_string(x_46, x_47);
x_79 = lean_st_ref_get(x_7, x_30);
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
x_49 = x_84;
x_50 = x_83;
goto block_78;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_85 = lean_ctor_get(x_79, 1);
lean_inc(x_85);
lean_dec(x_79);
lean_inc(x_48);
x_86 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_48, x_4, x_5, x_6, x_7, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_unbox(x_87);
lean_dec(x_87);
x_49 = x_89;
x_50 = x_88;
goto block_78;
}
block_78:
{
if (x_49 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_51 = lean_unsigned_to_nat(0u);
x_52 = lean_apply_2(x_1, x_51, x_51);
x_53 = l_Lean_mkNatLit(x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
if (lean_is_scalar(x_31)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_31;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_50);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
lean_dec(x_31);
x_56 = lean_mk_string("");
x_57 = l_Lean_stringToMessageData(x_56);
lean_dec(x_56);
x_58 = lean_unsigned_to_nat(0u);
x_59 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_58);
x_60 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_inc(x_60);
lean_inc(x_57);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string(" op ");
x_63 = l_Lean_stringToMessageData(x_62);
lean_dec(x_62);
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_60);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_57);
x_67 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_48, x_66, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_67, 0);
lean_dec(x_69);
x_70 = lean_apply_2(x_1, x_58, x_58);
x_71 = l_Lean_mkNatLit(x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_67, 0, x_72);
return x_67;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
lean_dec(x_67);
x_74 = lean_apply_2(x_1, x_58, x_58);
x_75 = l_Lean_mkNatLit(x_74);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_73);
return x_77;
}
}
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_25);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_25, 0);
lean_dec(x_91);
x_92 = lean_box(0);
lean_ctor_set(x_25, 0, x_92);
return x_25;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_25, 1);
lean_inc(x_93);
lean_dec(x_25);
x_94 = lean_box(0);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_25);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_25, 0);
lean_dec(x_97);
x_98 = lean_box(0);
lean_ctor_set(x_25, 0, x_98);
return x_25;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_25, 1);
lean_inc(x_99);
lean_dec(x_25);
x_100 = lean_box(0);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_25);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_25, 0);
lean_dec(x_103);
x_104 = lean_box(0);
lean_ctor_set(x_25, 0, x_104);
return x_25;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_25, 1);
lean_inc(x_105);
lean_dec(x_25);
x_106 = lean_box(0);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
}
}
case 9:
{
lean_object* x_108; 
lean_dec(x_22);
lean_dec(x_19);
x_108 = lean_ctor_get(x_26, 0);
lean_inc(x_108);
lean_dec(x_26);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_109 = lean_ctor_get(x_25, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_110 = x_25;
} else {
 lean_dec_ref(x_25);
 x_110 = lean_box(0);
}
x_111 = lean_ctor_get(x_108, 0);
lean_inc(x_111);
lean_dec(x_108);
x_112 = lean_box(0);
x_113 = lean_mk_string("Meta");
x_114 = lean_name_mk_string(x_112, x_113);
x_115 = lean_mk_string("isDefEq");
x_116 = lean_name_mk_string(x_114, x_115);
x_117 = lean_mk_string("whnf");
x_118 = lean_name_mk_string(x_116, x_117);
x_119 = lean_mk_string("reduceBinOp");
x_120 = lean_name_mk_string(x_118, x_119);
x_153 = lean_st_ref_get(x_7, x_109);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_154, 3);
lean_inc(x_155);
lean_dec(x_154);
x_156 = lean_ctor_get_uint8(x_155, sizeof(void*)*1);
lean_dec(x_155);
if (x_156 == 0)
{
lean_object* x_157; uint8_t x_158; 
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
lean_dec(x_153);
x_158 = 0;
x_121 = x_158;
x_122 = x_157;
goto block_152;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_159 = lean_ctor_get(x_153, 1);
lean_inc(x_159);
lean_dec(x_153);
lean_inc(x_120);
x_160 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_120, x_4, x_5, x_6, x_7, x_159);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = lean_unbox(x_161);
lean_dec(x_161);
x_121 = x_163;
x_122 = x_162;
goto block_152;
}
block_152:
{
if (x_121 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_120);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_123 = lean_unsigned_to_nat(0u);
x_124 = lean_apply_2(x_1, x_123, x_111);
x_125 = l_Lean_mkNatLit(x_124);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_125);
if (lean_is_scalar(x_110)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_110;
}
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_122);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
lean_dec(x_110);
x_128 = lean_mk_string("");
x_129 = l_Lean_stringToMessageData(x_128);
lean_dec(x_128);
x_130 = lean_unsigned_to_nat(0u);
x_131 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_130);
x_132 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_132, 0, x_131);
lean_inc(x_129);
x_133 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_133, 0, x_129);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_mk_string(" op ");
x_135 = l_Lean_stringToMessageData(x_134);
lean_dec(x_134);
x_136 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_135);
lean_inc(x_111);
x_137 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_111);
x_138 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_139 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_129);
x_141 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_120, x_140, x_4, x_5, x_6, x_7, x_122);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_142 = !lean_is_exclusive(x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_143 = lean_ctor_get(x_141, 0);
lean_dec(x_143);
x_144 = lean_apply_2(x_1, x_130, x_111);
x_145 = l_Lean_mkNatLit(x_144);
x_146 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_141, 0, x_146);
return x_141;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_147 = lean_ctor_get(x_141, 1);
lean_inc(x_147);
lean_dec(x_141);
x_148 = lean_apply_2(x_1, x_130, x_111);
x_149 = l_Lean_mkNatLit(x_148);
x_150 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_150, 0, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_147);
return x_151;
}
}
}
}
else
{
uint8_t x_164; 
lean_dec(x_108);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_164 = !lean_is_exclusive(x_25);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; 
x_165 = lean_ctor_get(x_25, 0);
lean_dec(x_165);
x_166 = lean_box(0);
lean_ctor_set(x_25, 0, x_166);
return x_25;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_25, 1);
lean_inc(x_167);
lean_dec(x_25);
x_168 = lean_box(0);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
}
default: 
{
uint8_t x_170; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_170 = !lean_is_exclusive(x_25);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_ctor_get(x_25, 0);
lean_dec(x_171);
x_172 = lean_box(0);
lean_ctor_set(x_25, 0, x_172);
return x_25;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_25, 1);
lean_inc(x_173);
lean_dec(x_25);
x_174 = lean_box(0);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_173);
return x_175;
}
}
}
}
else
{
uint8_t x_176; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_176 = !lean_is_exclusive(x_25);
if (x_176 == 0)
{
return x_25;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_25, 0);
x_178 = lean_ctor_get(x_25, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_25);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
return x_179;
}
}
}
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_180 = lean_ctor_get(x_9, 1);
lean_inc(x_180);
lean_dec(x_9);
x_181 = lean_ctor_get(x_11, 1);
lean_inc(x_181);
lean_dec(x_11);
x_182 = lean_ctor_get(x_12, 1);
lean_inc(x_182);
lean_dec(x_12);
x_183 = lean_mk_string("Nat");
x_184 = lean_string_dec_eq(x_182, x_183);
lean_dec(x_182);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; 
lean_dec(x_183);
lean_dec(x_181);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_185 = lean_box(0);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_180);
return x_186;
}
else
{
lean_object* x_187; uint8_t x_188; 
x_187 = lean_mk_string("zero");
x_188 = lean_string_dec_eq(x_181, x_187);
lean_dec(x_181);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_187);
lean_dec(x_183);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_189 = lean_box(0);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_180);
return x_190;
}
else
{
lean_object* x_191; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_191 = l_Lean_Meta_whnf(x_3, x_4, x_5, x_6, x_7, x_180);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
switch (lean_obj_tag(x_192)) {
case 4:
{
lean_object* x_193; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
lean_dec(x_192);
if (lean_obj_tag(x_193) == 1)
{
lean_object* x_194; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
if (lean_obj_tag(x_194) == 1)
{
lean_object* x_195; 
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_196 = lean_ctor_get(x_191, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_197 = x_191;
} else {
 lean_dec_ref(x_191);
 x_197 = lean_box(0);
}
x_198 = lean_ctor_get(x_193, 1);
lean_inc(x_198);
lean_dec(x_193);
x_199 = lean_ctor_get(x_194, 1);
lean_inc(x_199);
lean_dec(x_194);
x_200 = lean_string_dec_eq(x_199, x_183);
lean_dec(x_183);
lean_dec(x_199);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; 
lean_dec(x_198);
lean_dec(x_187);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_201 = lean_box(0);
if (lean_is_scalar(x_197)) {
 x_202 = lean_alloc_ctor(0, 2, 0);
} else {
 x_202 = x_197;
}
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_196);
return x_202;
}
else
{
uint8_t x_203; 
x_203 = lean_string_dec_eq(x_198, x_187);
lean_dec(x_187);
lean_dec(x_198);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_204 = lean_box(0);
if (lean_is_scalar(x_197)) {
 x_205 = lean_alloc_ctor(0, 2, 0);
} else {
 x_205 = x_197;
}
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_196);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_215; lean_object* x_216; lean_object* x_241; lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_206 = lean_box(0);
x_207 = lean_mk_string("Meta");
x_208 = lean_name_mk_string(x_206, x_207);
x_209 = lean_mk_string("isDefEq");
x_210 = lean_name_mk_string(x_208, x_209);
x_211 = lean_mk_string("whnf");
x_212 = lean_name_mk_string(x_210, x_211);
x_213 = lean_mk_string("reduceBinOp");
x_214 = lean_name_mk_string(x_212, x_213);
x_241 = lean_st_ref_get(x_7, x_196);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_242, 3);
lean_inc(x_243);
lean_dec(x_242);
x_244 = lean_ctor_get_uint8(x_243, sizeof(void*)*1);
lean_dec(x_243);
if (x_244 == 0)
{
lean_object* x_245; uint8_t x_246; 
x_245 = lean_ctor_get(x_241, 1);
lean_inc(x_245);
lean_dec(x_241);
x_246 = 0;
x_215 = x_246;
x_216 = x_245;
goto block_240;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; 
x_247 = lean_ctor_get(x_241, 1);
lean_inc(x_247);
lean_dec(x_241);
lean_inc(x_214);
x_248 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_214, x_4, x_5, x_6, x_7, x_247);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_248, 1);
lean_inc(x_250);
lean_dec(x_248);
x_251 = lean_unbox(x_249);
lean_dec(x_249);
x_215 = x_251;
x_216 = x_250;
goto block_240;
}
block_240:
{
if (x_215 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_214);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_217 = lean_unsigned_to_nat(0u);
x_218 = lean_apply_2(x_1, x_217, x_217);
x_219 = l_Lean_mkNatLit(x_218);
x_220 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_220, 0, x_219);
if (lean_is_scalar(x_197)) {
 x_221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_221 = x_197;
}
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_216);
return x_221;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
lean_dec(x_197);
x_222 = lean_mk_string("");
x_223 = l_Lean_stringToMessageData(x_222);
lean_dec(x_222);
x_224 = lean_unsigned_to_nat(0u);
x_225 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_224);
x_226 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_226, 0, x_225);
lean_inc(x_226);
lean_inc(x_223);
x_227 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_227, 0, x_223);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_mk_string(" op ");
x_229 = l_Lean_stringToMessageData(x_228);
lean_dec(x_228);
x_230 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_229);
x_231 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_226);
x_232 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_223);
x_233 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_214, x_232, x_4, x_5, x_6, x_7, x_216);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
x_236 = lean_apply_2(x_1, x_224, x_224);
x_237 = l_Lean_mkNatLit(x_236);
x_238 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_238, 0, x_237);
if (lean_is_scalar(x_235)) {
 x_239 = lean_alloc_ctor(0, 2, 0);
} else {
 x_239 = x_235;
}
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_234);
return x_239;
}
}
}
}
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_195);
lean_dec(x_194);
lean_dec(x_193);
lean_dec(x_187);
lean_dec(x_183);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_252 = lean_ctor_get(x_191, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_253 = x_191;
} else {
 lean_dec_ref(x_191);
 x_253 = lean_box(0);
}
x_254 = lean_box(0);
if (lean_is_scalar(x_253)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_253;
}
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_252);
return x_255;
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_194);
lean_dec(x_193);
lean_dec(x_187);
lean_dec(x_183);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_256 = lean_ctor_get(x_191, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_257 = x_191;
} else {
 lean_dec_ref(x_191);
 x_257 = lean_box(0);
}
x_258 = lean_box(0);
if (lean_is_scalar(x_257)) {
 x_259 = lean_alloc_ctor(0, 2, 0);
} else {
 x_259 = x_257;
}
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_256);
return x_259;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_193);
lean_dec(x_187);
lean_dec(x_183);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_260 = lean_ctor_get(x_191, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_261 = x_191;
} else {
 lean_dec_ref(x_191);
 x_261 = lean_box(0);
}
x_262 = lean_box(0);
if (lean_is_scalar(x_261)) {
 x_263 = lean_alloc_ctor(0, 2, 0);
} else {
 x_263 = x_261;
}
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_260);
return x_263;
}
}
case 9:
{
lean_object* x_264; 
lean_dec(x_187);
lean_dec(x_183);
x_264 = lean_ctor_get(x_192, 0);
lean_inc(x_264);
lean_dec(x_192);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; lean_object* x_278; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_265 = lean_ctor_get(x_191, 1);
lean_inc(x_265);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_266 = x_191;
} else {
 lean_dec_ref(x_191);
 x_266 = lean_box(0);
}
x_267 = lean_ctor_get(x_264, 0);
lean_inc(x_267);
lean_dec(x_264);
x_268 = lean_box(0);
x_269 = lean_mk_string("Meta");
x_270 = lean_name_mk_string(x_268, x_269);
x_271 = lean_mk_string("isDefEq");
x_272 = lean_name_mk_string(x_270, x_271);
x_273 = lean_mk_string("whnf");
x_274 = lean_name_mk_string(x_272, x_273);
x_275 = lean_mk_string("reduceBinOp");
x_276 = lean_name_mk_string(x_274, x_275);
x_305 = lean_st_ref_get(x_7, x_265);
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_306, 3);
lean_inc(x_307);
lean_dec(x_306);
x_308 = lean_ctor_get_uint8(x_307, sizeof(void*)*1);
lean_dec(x_307);
if (x_308 == 0)
{
lean_object* x_309; uint8_t x_310; 
x_309 = lean_ctor_get(x_305, 1);
lean_inc(x_309);
lean_dec(x_305);
x_310 = 0;
x_277 = x_310;
x_278 = x_309;
goto block_304;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; uint8_t x_315; 
x_311 = lean_ctor_get(x_305, 1);
lean_inc(x_311);
lean_dec(x_305);
lean_inc(x_276);
x_312 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_276, x_4, x_5, x_6, x_7, x_311);
x_313 = lean_ctor_get(x_312, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_312, 1);
lean_inc(x_314);
lean_dec(x_312);
x_315 = lean_unbox(x_313);
lean_dec(x_313);
x_277 = x_315;
x_278 = x_314;
goto block_304;
}
block_304:
{
if (x_277 == 0)
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_276);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_279 = lean_unsigned_to_nat(0u);
x_280 = lean_apply_2(x_1, x_279, x_267);
x_281 = l_Lean_mkNatLit(x_280);
x_282 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_282, 0, x_281);
if (lean_is_scalar(x_266)) {
 x_283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_283 = x_266;
}
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_278);
return x_283;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_266);
x_284 = lean_mk_string("");
x_285 = l_Lean_stringToMessageData(x_284);
lean_dec(x_284);
x_286 = lean_unsigned_to_nat(0u);
x_287 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_286);
x_288 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_288, 0, x_287);
lean_inc(x_285);
x_289 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_289, 0, x_285);
lean_ctor_set(x_289, 1, x_288);
x_290 = lean_mk_string(" op ");
x_291 = l_Lean_stringToMessageData(x_290);
lean_dec(x_290);
x_292 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_292, 0, x_289);
lean_ctor_set(x_292, 1, x_291);
lean_inc(x_267);
x_293 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_267);
x_294 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_294, 0, x_293);
x_295 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_295, 0, x_292);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_285);
x_297 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_276, x_296, x_4, x_5, x_6, x_7, x_278);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_298 = lean_ctor_get(x_297, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 x_299 = x_297;
} else {
 lean_dec_ref(x_297);
 x_299 = lean_box(0);
}
x_300 = lean_apply_2(x_1, x_286, x_267);
x_301 = l_Lean_mkNatLit(x_300);
x_302 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_302, 0, x_301);
if (lean_is_scalar(x_299)) {
 x_303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_303 = x_299;
}
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_298);
return x_303;
}
}
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_264);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_316 = lean_ctor_get(x_191, 1);
lean_inc(x_316);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_317 = x_191;
} else {
 lean_dec_ref(x_191);
 x_317 = lean_box(0);
}
x_318 = lean_box(0);
if (lean_is_scalar(x_317)) {
 x_319 = lean_alloc_ctor(0, 2, 0);
} else {
 x_319 = x_317;
}
lean_ctor_set(x_319, 0, x_318);
lean_ctor_set(x_319, 1, x_316);
return x_319;
}
}
default: 
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
lean_dec(x_192);
lean_dec(x_187);
lean_dec(x_183);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_320 = lean_ctor_get(x_191, 1);
lean_inc(x_320);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_321 = x_191;
} else {
 lean_dec_ref(x_191);
 x_321 = lean_box(0);
}
x_322 = lean_box(0);
if (lean_is_scalar(x_321)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_321;
}
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_320);
return x_323;
}
}
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
lean_dec(x_187);
lean_dec(x_183);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_324 = lean_ctor_get(x_191, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_191, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_326 = x_191;
} else {
 lean_dec_ref(x_191);
 x_326 = lean_box(0);
}
if (lean_is_scalar(x_326)) {
 x_327 = lean_alloc_ctor(1, 2, 0);
} else {
 x_327 = x_326;
}
lean_ctor_set(x_327, 0, x_324);
lean_ctor_set(x_327, 1, x_325);
return x_327;
}
}
}
}
}
else
{
uint8_t x_328; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_328 = !lean_is_exclusive(x_9);
if (x_328 == 0)
{
lean_object* x_329; lean_object* x_330; 
x_329 = lean_ctor_get(x_9, 0);
lean_dec(x_329);
x_330 = lean_box(0);
lean_ctor_set(x_9, 0, x_330);
return x_9;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_9, 1);
lean_inc(x_331);
lean_dec(x_9);
x_332 = lean_box(0);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_331);
return x_333;
}
}
}
else
{
uint8_t x_334; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_334 = !lean_is_exclusive(x_9);
if (x_334 == 0)
{
lean_object* x_335; lean_object* x_336; 
x_335 = lean_ctor_get(x_9, 0);
lean_dec(x_335);
x_336 = lean_box(0);
lean_ctor_set(x_9, 0, x_336);
return x_9;
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_9, 1);
lean_inc(x_337);
lean_dec(x_9);
x_338 = lean_box(0);
x_339 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
}
}
else
{
uint8_t x_340; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_340 = !lean_is_exclusive(x_9);
if (x_340 == 0)
{
lean_object* x_341; lean_object* x_342; 
x_341 = lean_ctor_get(x_9, 0);
lean_dec(x_341);
x_342 = lean_box(0);
lean_ctor_set(x_9, 0, x_342);
return x_9;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_9, 1);
lean_inc(x_343);
lean_dec(x_9);
x_344 = lean_box(0);
x_345 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_345, 0, x_344);
lean_ctor_set(x_345, 1, x_343);
return x_345;
}
}
}
case 9:
{
lean_object* x_346; 
x_346 = lean_ctor_get(x_10, 0);
lean_inc(x_346);
lean_dec(x_10);
if (lean_obj_tag(x_346) == 0)
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_347 = lean_ctor_get(x_9, 1);
lean_inc(x_347);
lean_dec(x_9);
x_348 = lean_ctor_get(x_346, 0);
lean_inc(x_348);
lean_dec(x_346);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_349 = l_Lean_Meta_whnf(x_3, x_4, x_5, x_6, x_7, x_347);
if (lean_obj_tag(x_349) == 0)
{
lean_object* x_350; 
x_350 = lean_ctor_get(x_349, 0);
lean_inc(x_350);
switch (lean_obj_tag(x_350)) {
case 4:
{
lean_object* x_351; 
x_351 = lean_ctor_get(x_350, 0);
lean_inc(x_351);
lean_dec(x_350);
if (lean_obj_tag(x_351) == 1)
{
lean_object* x_352; 
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
if (lean_obj_tag(x_352) == 1)
{
lean_object* x_353; 
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; uint8_t x_359; 
x_354 = lean_ctor_get(x_349, 1);
lean_inc(x_354);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 x_355 = x_349;
} else {
 lean_dec_ref(x_349);
 x_355 = lean_box(0);
}
x_356 = lean_ctor_get(x_351, 1);
lean_inc(x_356);
lean_dec(x_351);
x_357 = lean_ctor_get(x_352, 1);
lean_inc(x_357);
lean_dec(x_352);
x_358 = lean_mk_string("Nat");
x_359 = lean_string_dec_eq(x_357, x_358);
lean_dec(x_358);
lean_dec(x_357);
if (x_359 == 0)
{
lean_object* x_360; lean_object* x_361; 
lean_dec(x_356);
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_360 = lean_box(0);
if (lean_is_scalar(x_355)) {
 x_361 = lean_alloc_ctor(0, 2, 0);
} else {
 x_361 = x_355;
}
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_354);
return x_361;
}
else
{
lean_object* x_362; uint8_t x_363; 
x_362 = lean_mk_string("zero");
x_363 = lean_string_dec_eq(x_356, x_362);
lean_dec(x_362);
lean_dec(x_356);
if (x_363 == 0)
{
lean_object* x_364; lean_object* x_365; 
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_364 = lean_box(0);
if (lean_is_scalar(x_355)) {
 x_365 = lean_alloc_ctor(0, 2, 0);
} else {
 x_365 = x_355;
}
lean_ctor_set(x_365, 0, x_364);
lean_ctor_set(x_365, 1, x_354);
return x_365;
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; lean_object* x_376; lean_object* x_407; lean_object* x_408; lean_object* x_409; uint8_t x_410; 
x_366 = lean_box(0);
x_367 = lean_mk_string("Meta");
x_368 = lean_name_mk_string(x_366, x_367);
x_369 = lean_mk_string("isDefEq");
x_370 = lean_name_mk_string(x_368, x_369);
x_371 = lean_mk_string("whnf");
x_372 = lean_name_mk_string(x_370, x_371);
x_373 = lean_mk_string("reduceBinOp");
x_374 = lean_name_mk_string(x_372, x_373);
x_407 = lean_st_ref_get(x_7, x_354);
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_408, 3);
lean_inc(x_409);
lean_dec(x_408);
x_410 = lean_ctor_get_uint8(x_409, sizeof(void*)*1);
lean_dec(x_409);
if (x_410 == 0)
{
lean_object* x_411; uint8_t x_412; 
x_411 = lean_ctor_get(x_407, 1);
lean_inc(x_411);
lean_dec(x_407);
x_412 = 0;
x_375 = x_412;
x_376 = x_411;
goto block_406;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; 
x_413 = lean_ctor_get(x_407, 1);
lean_inc(x_413);
lean_dec(x_407);
lean_inc(x_374);
x_414 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_374, x_4, x_5, x_6, x_7, x_413);
x_415 = lean_ctor_get(x_414, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_414, 1);
lean_inc(x_416);
lean_dec(x_414);
x_417 = lean_unbox(x_415);
lean_dec(x_415);
x_375 = x_417;
x_376 = x_416;
goto block_406;
}
block_406:
{
if (x_375 == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
lean_dec(x_374);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_377 = lean_unsigned_to_nat(0u);
x_378 = lean_apply_2(x_1, x_348, x_377);
x_379 = l_Lean_mkNatLit(x_378);
x_380 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_380, 0, x_379);
if (lean_is_scalar(x_355)) {
 x_381 = lean_alloc_ctor(0, 2, 0);
} else {
 x_381 = x_355;
}
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_381, 1, x_376);
return x_381;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; 
lean_dec(x_355);
x_382 = lean_mk_string("");
x_383 = l_Lean_stringToMessageData(x_382);
lean_dec(x_382);
lean_inc(x_348);
x_384 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_348);
x_385 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_385, 0, x_384);
lean_inc(x_383);
x_386 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_386, 0, x_383);
lean_ctor_set(x_386, 1, x_385);
x_387 = lean_mk_string(" op ");
x_388 = l_Lean_stringToMessageData(x_387);
lean_dec(x_387);
x_389 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_389, 0, x_386);
lean_ctor_set(x_389, 1, x_388);
x_390 = lean_unsigned_to_nat(0u);
x_391 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_390);
x_392 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_392, 0, x_391);
x_393 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_393, 0, x_389);
lean_ctor_set(x_393, 1, x_392);
x_394 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_383);
x_395 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_374, x_394, x_4, x_5, x_6, x_7, x_376);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_396 = !lean_is_exclusive(x_395);
if (x_396 == 0)
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_397 = lean_ctor_get(x_395, 0);
lean_dec(x_397);
x_398 = lean_apply_2(x_1, x_348, x_390);
x_399 = l_Lean_mkNatLit(x_398);
x_400 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_400, 0, x_399);
lean_ctor_set(x_395, 0, x_400);
return x_395;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_401 = lean_ctor_get(x_395, 1);
lean_inc(x_401);
lean_dec(x_395);
x_402 = lean_apply_2(x_1, x_348, x_390);
x_403 = l_Lean_mkNatLit(x_402);
x_404 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_404, 0, x_403);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_401);
return x_405;
}
}
}
}
}
}
else
{
uint8_t x_418; 
lean_dec(x_353);
lean_dec(x_352);
lean_dec(x_351);
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_418 = !lean_is_exclusive(x_349);
if (x_418 == 0)
{
lean_object* x_419; lean_object* x_420; 
x_419 = lean_ctor_get(x_349, 0);
lean_dec(x_419);
x_420 = lean_box(0);
lean_ctor_set(x_349, 0, x_420);
return x_349;
}
else
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_421 = lean_ctor_get(x_349, 1);
lean_inc(x_421);
lean_dec(x_349);
x_422 = lean_box(0);
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_421);
return x_423;
}
}
}
else
{
uint8_t x_424; 
lean_dec(x_352);
lean_dec(x_351);
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_424 = !lean_is_exclusive(x_349);
if (x_424 == 0)
{
lean_object* x_425; lean_object* x_426; 
x_425 = lean_ctor_get(x_349, 0);
lean_dec(x_425);
x_426 = lean_box(0);
lean_ctor_set(x_349, 0, x_426);
return x_349;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_427 = lean_ctor_get(x_349, 1);
lean_inc(x_427);
lean_dec(x_349);
x_428 = lean_box(0);
x_429 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_427);
return x_429;
}
}
}
else
{
uint8_t x_430; 
lean_dec(x_351);
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_430 = !lean_is_exclusive(x_349);
if (x_430 == 0)
{
lean_object* x_431; lean_object* x_432; 
x_431 = lean_ctor_get(x_349, 0);
lean_dec(x_431);
x_432 = lean_box(0);
lean_ctor_set(x_349, 0, x_432);
return x_349;
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_433 = lean_ctor_get(x_349, 1);
lean_inc(x_433);
lean_dec(x_349);
x_434 = lean_box(0);
x_435 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_435, 0, x_434);
lean_ctor_set(x_435, 1, x_433);
return x_435;
}
}
}
case 9:
{
lean_object* x_436; 
x_436 = lean_ctor_get(x_350, 0);
lean_inc(x_436);
lean_dec(x_350);
if (lean_obj_tag(x_436) == 0)
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; uint8_t x_449; lean_object* x_450; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; 
x_437 = lean_ctor_get(x_349, 1);
lean_inc(x_437);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 x_438 = x_349;
} else {
 lean_dec_ref(x_349);
 x_438 = lean_box(0);
}
x_439 = lean_ctor_get(x_436, 0);
lean_inc(x_439);
lean_dec(x_436);
x_440 = lean_box(0);
x_441 = lean_mk_string("Meta");
x_442 = lean_name_mk_string(x_440, x_441);
x_443 = lean_mk_string("isDefEq");
x_444 = lean_name_mk_string(x_442, x_443);
x_445 = lean_mk_string("whnf");
x_446 = lean_name_mk_string(x_444, x_445);
x_447 = lean_mk_string("reduceBinOp");
x_448 = lean_name_mk_string(x_446, x_447);
x_479 = lean_st_ref_get(x_7, x_437);
x_480 = lean_ctor_get(x_479, 0);
lean_inc(x_480);
x_481 = lean_ctor_get(x_480, 3);
lean_inc(x_481);
lean_dec(x_480);
x_482 = lean_ctor_get_uint8(x_481, sizeof(void*)*1);
lean_dec(x_481);
if (x_482 == 0)
{
lean_object* x_483; uint8_t x_484; 
x_483 = lean_ctor_get(x_479, 1);
lean_inc(x_483);
lean_dec(x_479);
x_484 = 0;
x_449 = x_484;
x_450 = x_483;
goto block_478;
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; uint8_t x_489; 
x_485 = lean_ctor_get(x_479, 1);
lean_inc(x_485);
lean_dec(x_479);
lean_inc(x_448);
x_486 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_448, x_4, x_5, x_6, x_7, x_485);
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
lean_dec(x_486);
x_489 = lean_unbox(x_487);
lean_dec(x_487);
x_449 = x_489;
x_450 = x_488;
goto block_478;
}
block_478:
{
if (x_449 == 0)
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
lean_dec(x_448);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_451 = lean_apply_2(x_1, x_348, x_439);
x_452 = l_Lean_mkNatLit(x_451);
x_453 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_453, 0, x_452);
if (lean_is_scalar(x_438)) {
 x_454 = lean_alloc_ctor(0, 2, 0);
} else {
 x_454 = x_438;
}
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_450);
return x_454;
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; uint8_t x_468; 
lean_dec(x_438);
x_455 = lean_mk_string("");
x_456 = l_Lean_stringToMessageData(x_455);
lean_dec(x_455);
lean_inc(x_348);
x_457 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_348);
x_458 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_458, 0, x_457);
lean_inc(x_456);
x_459 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_459, 0, x_456);
lean_ctor_set(x_459, 1, x_458);
x_460 = lean_mk_string(" op ");
x_461 = l_Lean_stringToMessageData(x_460);
lean_dec(x_460);
x_462 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_462, 0, x_459);
lean_ctor_set(x_462, 1, x_461);
lean_inc(x_439);
x_463 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_439);
x_464 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_464, 0, x_463);
x_465 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_464);
x_466 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_466, 0, x_465);
lean_ctor_set(x_466, 1, x_456);
x_467 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_448, x_466, x_4, x_5, x_6, x_7, x_450);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_468 = !lean_is_exclusive(x_467);
if (x_468 == 0)
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_469 = lean_ctor_get(x_467, 0);
lean_dec(x_469);
x_470 = lean_apply_2(x_1, x_348, x_439);
x_471 = l_Lean_mkNatLit(x_470);
x_472 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_472, 0, x_471);
lean_ctor_set(x_467, 0, x_472);
return x_467;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_473 = lean_ctor_get(x_467, 1);
lean_inc(x_473);
lean_dec(x_467);
x_474 = lean_apply_2(x_1, x_348, x_439);
x_475 = l_Lean_mkNatLit(x_474);
x_476 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_476, 0, x_475);
x_477 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_473);
return x_477;
}
}
}
}
else
{
uint8_t x_490; 
lean_dec(x_436);
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_490 = !lean_is_exclusive(x_349);
if (x_490 == 0)
{
lean_object* x_491; lean_object* x_492; 
x_491 = lean_ctor_get(x_349, 0);
lean_dec(x_491);
x_492 = lean_box(0);
lean_ctor_set(x_349, 0, x_492);
return x_349;
}
else
{
lean_object* x_493; lean_object* x_494; lean_object* x_495; 
x_493 = lean_ctor_get(x_349, 1);
lean_inc(x_493);
lean_dec(x_349);
x_494 = lean_box(0);
x_495 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_495, 0, x_494);
lean_ctor_set(x_495, 1, x_493);
return x_495;
}
}
}
default: 
{
uint8_t x_496; 
lean_dec(x_350);
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_496 = !lean_is_exclusive(x_349);
if (x_496 == 0)
{
lean_object* x_497; lean_object* x_498; 
x_497 = lean_ctor_get(x_349, 0);
lean_dec(x_497);
x_498 = lean_box(0);
lean_ctor_set(x_349, 0, x_498);
return x_349;
}
else
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; 
x_499 = lean_ctor_get(x_349, 1);
lean_inc(x_499);
lean_dec(x_349);
x_500 = lean_box(0);
x_501 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_501, 0, x_500);
lean_ctor_set(x_501, 1, x_499);
return x_501;
}
}
}
}
else
{
uint8_t x_502; 
lean_dec(x_348);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_502 = !lean_is_exclusive(x_349);
if (x_502 == 0)
{
return x_349;
}
else
{
lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_503 = lean_ctor_get(x_349, 0);
x_504 = lean_ctor_get(x_349, 1);
lean_inc(x_504);
lean_inc(x_503);
lean_dec(x_349);
x_505 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_505, 0, x_503);
lean_ctor_set(x_505, 1, x_504);
return x_505;
}
}
}
else
{
uint8_t x_506; 
lean_dec(x_346);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_506 = !lean_is_exclusive(x_9);
if (x_506 == 0)
{
lean_object* x_507; lean_object* x_508; 
x_507 = lean_ctor_get(x_9, 0);
lean_dec(x_507);
x_508 = lean_box(0);
lean_ctor_set(x_9, 0, x_508);
return x_9;
}
else
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; 
x_509 = lean_ctor_get(x_9, 1);
lean_inc(x_509);
lean_dec(x_9);
x_510 = lean_box(0);
x_511 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_511, 0, x_510);
lean_ctor_set(x_511, 1, x_509);
return x_511;
}
}
}
default: 
{
uint8_t x_512; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_512 = !lean_is_exclusive(x_9);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; 
x_513 = lean_ctor_get(x_9, 0);
lean_dec(x_513);
x_514 = lean_box(0);
lean_ctor_set(x_9, 0, x_514);
return x_9;
}
else
{
lean_object* x_515; lean_object* x_516; lean_object* x_517; 
x_515 = lean_ctor_get(x_9, 1);
lean_inc(x_515);
lean_dec(x_9);
x_516 = lean_box(0);
x_517 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_517, 0, x_516);
lean_ctor_set(x_517, 1, x_515);
return x_517;
}
}
}
}
else
{
uint8_t x_518; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_518 = !lean_is_exclusive(x_9);
if (x_518 == 0)
{
return x_9;
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; 
x_519 = lean_ctor_get(x_9, 0);
x_520 = lean_ctor_get(x_9, 1);
lean_inc(x_520);
lean_inc(x_519);
lean_dec(x_9);
x_521 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_521, 0, x_519);
lean_ctor_set(x_521, 1, x_520);
return x_521;
}
}
}
}
lean_object* l_Lean_Meta_reduceBinNatPred(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_whnf(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 4:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_9, 1);
x_16 = lean_ctor_get(x_9, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_mk_string("Nat");
x_20 = lean_string_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_box(0);
lean_ctor_set(x_9, 0, x_21);
return x_9;
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_mk_string("zero");
x_23 = lean_string_dec_eq(x_17, x_22);
lean_dec(x_17);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_box(0);
lean_ctor_set(x_9, 0, x_24);
return x_9;
}
else
{
lean_object* x_25; 
lean_free_object(x_9);
x_25 = l_Lean_Meta_whnf(x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 4:
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 1)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 1)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_25, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_dec(x_28);
x_34 = lean_string_dec_eq(x_33, x_19);
lean_dec(x_19);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_22);
lean_dec(x_1);
x_35 = lean_box(0);
lean_ctor_set(x_25, 0, x_35);
return x_25;
}
else
{
uint8_t x_36; 
x_36 = lean_string_dec_eq(x_32, x_22);
lean_dec(x_22);
lean_dec(x_32);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_1);
x_37 = lean_box(0);
lean_ctor_set(x_25, 0, x_37);
return x_25;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_apply_2(x_1, x_38, x_38);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_box(0);
x_42 = lean_mk_string("Bool");
x_43 = lean_name_mk_string(x_41, x_42);
x_44 = lean_mk_string("false");
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = lean_box(0);
x_47 = l_Lean_mkConst(x_45, x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_25, 0, x_48);
return x_25;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_box(0);
x_50 = lean_mk_string("Bool");
x_51 = lean_name_mk_string(x_49, x_50);
x_52 = lean_mk_string("true");
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_box(0);
x_55 = l_Lean_mkConst(x_53, x_54);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_25, 0, x_56);
return x_25;
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_57 = lean_ctor_get(x_25, 1);
lean_inc(x_57);
lean_dec(x_25);
x_58 = lean_ctor_get(x_27, 1);
lean_inc(x_58);
lean_dec(x_27);
x_59 = lean_ctor_get(x_28, 1);
lean_inc(x_59);
lean_dec(x_28);
x_60 = lean_string_dec_eq(x_59, x_19);
lean_dec(x_19);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_58);
lean_dec(x_22);
lean_dec(x_1);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
return x_62;
}
else
{
uint8_t x_63; 
x_63 = lean_string_dec_eq(x_58, x_22);
lean_dec(x_22);
lean_dec(x_58);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_1);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_57);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_apply_2(x_1, x_66, x_66);
x_68 = lean_unbox(x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_69 = lean_box(0);
x_70 = lean_mk_string("Bool");
x_71 = lean_name_mk_string(x_69, x_70);
x_72 = lean_mk_string("false");
x_73 = lean_name_mk_string(x_71, x_72);
x_74 = lean_box(0);
x_75 = l_Lean_mkConst(x_73, x_74);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_57);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_78 = lean_box(0);
x_79 = lean_mk_string("Bool");
x_80 = lean_name_mk_string(x_78, x_79);
x_81 = lean_mk_string("true");
x_82 = lean_name_mk_string(x_80, x_81);
x_83 = lean_box(0);
x_84 = l_Lean_mkConst(x_82, x_83);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_57);
return x_86;
}
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_25);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_25, 0);
lean_dec(x_88);
x_89 = lean_box(0);
lean_ctor_set(x_25, 0, x_89);
return x_25;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_25, 1);
lean_inc(x_90);
lean_dec(x_25);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_25);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_25, 0);
lean_dec(x_94);
x_95 = lean_box(0);
lean_ctor_set(x_25, 0, x_95);
return x_25;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_25, 1);
lean_inc(x_96);
lean_dec(x_25);
x_97 = lean_box(0);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_25);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_25, 0);
lean_dec(x_100);
x_101 = lean_box(0);
lean_ctor_set(x_25, 0, x_101);
return x_25;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_25, 1);
lean_inc(x_102);
lean_dec(x_25);
x_103 = lean_box(0);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
case 9:
{
lean_object* x_105; 
lean_dec(x_22);
lean_dec(x_19);
x_105 = lean_ctor_get(x_26, 0);
lean_inc(x_105);
lean_dec(x_26);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_25);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_107 = lean_ctor_get(x_25, 0);
lean_dec(x_107);
x_108 = lean_ctor_get(x_105, 0);
lean_inc(x_108);
lean_dec(x_105);
x_109 = lean_unsigned_to_nat(0u);
x_110 = lean_apply_2(x_1, x_109, x_108);
x_111 = lean_unbox(x_110);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_112 = lean_box(0);
x_113 = lean_mk_string("Bool");
x_114 = lean_name_mk_string(x_112, x_113);
x_115 = lean_mk_string("false");
x_116 = lean_name_mk_string(x_114, x_115);
x_117 = lean_box(0);
x_118 = l_Lean_mkConst(x_116, x_117);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_25, 0, x_119);
return x_25;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_120 = lean_box(0);
x_121 = lean_mk_string("Bool");
x_122 = lean_name_mk_string(x_120, x_121);
x_123 = lean_mk_string("true");
x_124 = lean_name_mk_string(x_122, x_123);
x_125 = lean_box(0);
x_126 = l_Lean_mkConst(x_124, x_125);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_25, 0, x_127);
return x_25;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_128 = lean_ctor_get(x_25, 1);
lean_inc(x_128);
lean_dec(x_25);
x_129 = lean_ctor_get(x_105, 0);
lean_inc(x_129);
lean_dec(x_105);
x_130 = lean_unsigned_to_nat(0u);
x_131 = lean_apply_2(x_1, x_130, x_129);
x_132 = lean_unbox(x_131);
lean_dec(x_131);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_133 = lean_box(0);
x_134 = lean_mk_string("Bool");
x_135 = lean_name_mk_string(x_133, x_134);
x_136 = lean_mk_string("false");
x_137 = lean_name_mk_string(x_135, x_136);
x_138 = lean_box(0);
x_139 = l_Lean_mkConst(x_137, x_138);
x_140 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_140, 0, x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_128);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_142 = lean_box(0);
x_143 = lean_mk_string("Bool");
x_144 = lean_name_mk_string(x_142, x_143);
x_145 = lean_mk_string("true");
x_146 = lean_name_mk_string(x_144, x_145);
x_147 = lean_box(0);
x_148 = l_Lean_mkConst(x_146, x_147);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_128);
return x_150;
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_105);
lean_dec(x_1);
x_151 = !lean_is_exclusive(x_25);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; 
x_152 = lean_ctor_get(x_25, 0);
lean_dec(x_152);
x_153 = lean_box(0);
lean_ctor_set(x_25, 0, x_153);
return x_25;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_25, 1);
lean_inc(x_154);
lean_dec(x_25);
x_155 = lean_box(0);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
}
default: 
{
uint8_t x_157; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_25);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_25, 0);
lean_dec(x_158);
x_159 = lean_box(0);
lean_ctor_set(x_25, 0, x_159);
return x_25;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_25, 1);
lean_inc(x_160);
lean_dec(x_25);
x_161 = lean_box(0);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_25);
if (x_163 == 0)
{
return x_25;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_25, 0);
x_165 = lean_ctor_get(x_25, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_25);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_167 = lean_ctor_get(x_9, 1);
lean_inc(x_167);
lean_dec(x_9);
x_168 = lean_ctor_get(x_11, 1);
lean_inc(x_168);
lean_dec(x_11);
x_169 = lean_ctor_get(x_12, 1);
lean_inc(x_169);
lean_dec(x_12);
x_170 = lean_mk_string("Nat");
x_171 = lean_string_dec_eq(x_169, x_170);
lean_dec(x_169);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
lean_dec(x_170);
lean_dec(x_168);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_172 = lean_box(0);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_167);
return x_173;
}
else
{
lean_object* x_174; uint8_t x_175; 
x_174 = lean_mk_string("zero");
x_175 = lean_string_dec_eq(x_168, x_174);
lean_dec(x_168);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; 
lean_dec(x_174);
lean_dec(x_170);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_176 = lean_box(0);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_167);
return x_177;
}
else
{
lean_object* x_178; 
x_178 = l_Lean_Meta_whnf(x_3, x_4, x_5, x_6, x_7, x_167);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; 
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
switch (lean_obj_tag(x_179)) {
case 4:
{
lean_object* x_180; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
lean_dec(x_179);
if (lean_obj_tag(x_180) == 1)
{
lean_object* x_181; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
if (lean_obj_tag(x_181) == 1)
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_183 = lean_ctor_get(x_178, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_184 = x_178;
} else {
 lean_dec_ref(x_178);
 x_184 = lean_box(0);
}
x_185 = lean_ctor_get(x_180, 1);
lean_inc(x_185);
lean_dec(x_180);
x_186 = lean_ctor_get(x_181, 1);
lean_inc(x_186);
lean_dec(x_181);
x_187 = lean_string_dec_eq(x_186, x_170);
lean_dec(x_170);
lean_dec(x_186);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_185);
lean_dec(x_174);
lean_dec(x_1);
x_188 = lean_box(0);
if (lean_is_scalar(x_184)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_184;
}
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_183);
return x_189;
}
else
{
uint8_t x_190; 
x_190 = lean_string_dec_eq(x_185, x_174);
lean_dec(x_174);
lean_dec(x_185);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; 
lean_dec(x_1);
x_191 = lean_box(0);
if (lean_is_scalar(x_184)) {
 x_192 = lean_alloc_ctor(0, 2, 0);
} else {
 x_192 = x_184;
}
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_183);
return x_192;
}
else
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_193 = lean_unsigned_to_nat(0u);
x_194 = lean_apply_2(x_1, x_193, x_193);
x_195 = lean_unbox(x_194);
lean_dec(x_194);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_196 = lean_box(0);
x_197 = lean_mk_string("Bool");
x_198 = lean_name_mk_string(x_196, x_197);
x_199 = lean_mk_string("false");
x_200 = lean_name_mk_string(x_198, x_199);
x_201 = lean_box(0);
x_202 = l_Lean_mkConst(x_200, x_201);
x_203 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_203, 0, x_202);
if (lean_is_scalar(x_184)) {
 x_204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_204 = x_184;
}
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_183);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_205 = lean_box(0);
x_206 = lean_mk_string("Bool");
x_207 = lean_name_mk_string(x_205, x_206);
x_208 = lean_mk_string("true");
x_209 = lean_name_mk_string(x_207, x_208);
x_210 = lean_box(0);
x_211 = l_Lean_mkConst(x_209, x_210);
x_212 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_212, 0, x_211);
if (lean_is_scalar(x_184)) {
 x_213 = lean_alloc_ctor(0, 2, 0);
} else {
 x_213 = x_184;
}
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_183);
return x_213;
}
}
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_182);
lean_dec(x_181);
lean_dec(x_180);
lean_dec(x_174);
lean_dec(x_170);
lean_dec(x_1);
x_214 = lean_ctor_get(x_178, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_215 = x_178;
} else {
 lean_dec_ref(x_178);
 x_215 = lean_box(0);
}
x_216 = lean_box(0);
if (lean_is_scalar(x_215)) {
 x_217 = lean_alloc_ctor(0, 2, 0);
} else {
 x_217 = x_215;
}
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_214);
return x_217;
}
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_181);
lean_dec(x_180);
lean_dec(x_174);
lean_dec(x_170);
lean_dec(x_1);
x_218 = lean_ctor_get(x_178, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_219 = x_178;
} else {
 lean_dec_ref(x_178);
 x_219 = lean_box(0);
}
x_220 = lean_box(0);
if (lean_is_scalar(x_219)) {
 x_221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_221 = x_219;
}
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_218);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
lean_dec(x_180);
lean_dec(x_174);
lean_dec(x_170);
lean_dec(x_1);
x_222 = lean_ctor_get(x_178, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_223 = x_178;
} else {
 lean_dec_ref(x_178);
 x_223 = lean_box(0);
}
x_224 = lean_box(0);
if (lean_is_scalar(x_223)) {
 x_225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_225 = x_223;
}
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_222);
return x_225;
}
}
case 9:
{
lean_object* x_226; 
lean_dec(x_174);
lean_dec(x_170);
x_226 = lean_ctor_get(x_179, 0);
lean_inc(x_226);
lean_dec(x_179);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_227 = lean_ctor_get(x_178, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_228 = x_178;
} else {
 lean_dec_ref(x_178);
 x_228 = lean_box(0);
}
x_229 = lean_ctor_get(x_226, 0);
lean_inc(x_229);
lean_dec(x_226);
x_230 = lean_unsigned_to_nat(0u);
x_231 = lean_apply_2(x_1, x_230, x_229);
x_232 = lean_unbox(x_231);
lean_dec(x_231);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_233 = lean_box(0);
x_234 = lean_mk_string("Bool");
x_235 = lean_name_mk_string(x_233, x_234);
x_236 = lean_mk_string("false");
x_237 = lean_name_mk_string(x_235, x_236);
x_238 = lean_box(0);
x_239 = l_Lean_mkConst(x_237, x_238);
x_240 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_240, 0, x_239);
if (lean_is_scalar(x_228)) {
 x_241 = lean_alloc_ctor(0, 2, 0);
} else {
 x_241 = x_228;
}
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_227);
return x_241;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_242 = lean_box(0);
x_243 = lean_mk_string("Bool");
x_244 = lean_name_mk_string(x_242, x_243);
x_245 = lean_mk_string("true");
x_246 = lean_name_mk_string(x_244, x_245);
x_247 = lean_box(0);
x_248 = l_Lean_mkConst(x_246, x_247);
x_249 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_249, 0, x_248);
if (lean_is_scalar(x_228)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_228;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_227);
return x_250;
}
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_226);
lean_dec(x_1);
x_251 = lean_ctor_get(x_178, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_252 = x_178;
} else {
 lean_dec_ref(x_178);
 x_252 = lean_box(0);
}
x_253 = lean_box(0);
if (lean_is_scalar(x_252)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_252;
}
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_251);
return x_254;
}
}
default: 
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_179);
lean_dec(x_174);
lean_dec(x_170);
lean_dec(x_1);
x_255 = lean_ctor_get(x_178, 1);
lean_inc(x_255);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_256 = x_178;
} else {
 lean_dec_ref(x_178);
 x_256 = lean_box(0);
}
x_257 = lean_box(0);
if (lean_is_scalar(x_256)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_256;
}
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_255);
return x_258;
}
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_174);
lean_dec(x_170);
lean_dec(x_1);
x_259 = lean_ctor_get(x_178, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_178, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_261 = x_178;
} else {
 lean_dec_ref(x_178);
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
uint8_t x_263; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_263 = !lean_is_exclusive(x_9);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; 
x_264 = lean_ctor_get(x_9, 0);
lean_dec(x_264);
x_265 = lean_box(0);
lean_ctor_set(x_9, 0, x_265);
return x_9;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_9, 1);
lean_inc(x_266);
lean_dec(x_9);
x_267 = lean_box(0);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_266);
return x_268;
}
}
}
else
{
uint8_t x_269; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_269 = !lean_is_exclusive(x_9);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; 
x_270 = lean_ctor_get(x_9, 0);
lean_dec(x_270);
x_271 = lean_box(0);
lean_ctor_set(x_9, 0, x_271);
return x_9;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_272 = lean_ctor_get(x_9, 1);
lean_inc(x_272);
lean_dec(x_9);
x_273 = lean_box(0);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
}
}
else
{
uint8_t x_275; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_275 = !lean_is_exclusive(x_9);
if (x_275 == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_9, 0);
lean_dec(x_276);
x_277 = lean_box(0);
lean_ctor_set(x_9, 0, x_277);
return x_9;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_9, 1);
lean_inc(x_278);
lean_dec(x_9);
x_279 = lean_box(0);
x_280 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
}
case 9:
{
lean_object* x_281; 
x_281 = lean_ctor_get(x_10, 0);
lean_inc(x_281);
lean_dec(x_10);
if (lean_obj_tag(x_281) == 0)
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_9, 1);
lean_inc(x_282);
lean_dec(x_9);
x_283 = lean_ctor_get(x_281, 0);
lean_inc(x_283);
lean_dec(x_281);
x_284 = l_Lean_Meta_whnf(x_3, x_4, x_5, x_6, x_7, x_282);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; 
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
switch (lean_obj_tag(x_285)) {
case 4:
{
lean_object* x_286; 
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
lean_dec(x_285);
if (lean_obj_tag(x_286) == 1)
{
lean_object* x_287; 
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
if (lean_obj_tag(x_287) == 1)
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_284);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; 
x_290 = lean_ctor_get(x_284, 0);
lean_dec(x_290);
x_291 = lean_ctor_get(x_286, 1);
lean_inc(x_291);
lean_dec(x_286);
x_292 = lean_ctor_get(x_287, 1);
lean_inc(x_292);
lean_dec(x_287);
x_293 = lean_mk_string("Nat");
x_294 = lean_string_dec_eq(x_292, x_293);
lean_dec(x_293);
lean_dec(x_292);
if (x_294 == 0)
{
lean_object* x_295; 
lean_dec(x_291);
lean_dec(x_283);
lean_dec(x_1);
x_295 = lean_box(0);
lean_ctor_set(x_284, 0, x_295);
return x_284;
}
else
{
lean_object* x_296; uint8_t x_297; 
x_296 = lean_mk_string("zero");
x_297 = lean_string_dec_eq(x_291, x_296);
lean_dec(x_296);
lean_dec(x_291);
if (x_297 == 0)
{
lean_object* x_298; 
lean_dec(x_283);
lean_dec(x_1);
x_298 = lean_box(0);
lean_ctor_set(x_284, 0, x_298);
return x_284;
}
else
{
lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_299 = lean_unsigned_to_nat(0u);
x_300 = lean_apply_2(x_1, x_283, x_299);
x_301 = lean_unbox(x_300);
lean_dec(x_300);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_302 = lean_box(0);
x_303 = lean_mk_string("Bool");
x_304 = lean_name_mk_string(x_302, x_303);
x_305 = lean_mk_string("false");
x_306 = lean_name_mk_string(x_304, x_305);
x_307 = lean_box(0);
x_308 = l_Lean_mkConst(x_306, x_307);
x_309 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_284, 0, x_309);
return x_284;
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_310 = lean_box(0);
x_311 = lean_mk_string("Bool");
x_312 = lean_name_mk_string(x_310, x_311);
x_313 = lean_mk_string("true");
x_314 = lean_name_mk_string(x_312, x_313);
x_315 = lean_box(0);
x_316 = l_Lean_mkConst(x_314, x_315);
x_317 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_284, 0, x_317);
return x_284;
}
}
}
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_318 = lean_ctor_get(x_284, 1);
lean_inc(x_318);
lean_dec(x_284);
x_319 = lean_ctor_get(x_286, 1);
lean_inc(x_319);
lean_dec(x_286);
x_320 = lean_ctor_get(x_287, 1);
lean_inc(x_320);
lean_dec(x_287);
x_321 = lean_mk_string("Nat");
x_322 = lean_string_dec_eq(x_320, x_321);
lean_dec(x_321);
lean_dec(x_320);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
lean_dec(x_319);
lean_dec(x_283);
lean_dec(x_1);
x_323 = lean_box(0);
x_324 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_318);
return x_324;
}
else
{
lean_object* x_325; uint8_t x_326; 
x_325 = lean_mk_string("zero");
x_326 = lean_string_dec_eq(x_319, x_325);
lean_dec(x_325);
lean_dec(x_319);
if (x_326 == 0)
{
lean_object* x_327; lean_object* x_328; 
lean_dec(x_283);
lean_dec(x_1);
x_327 = lean_box(0);
x_328 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_328, 0, x_327);
lean_ctor_set(x_328, 1, x_318);
return x_328;
}
else
{
lean_object* x_329; lean_object* x_330; uint8_t x_331; 
x_329 = lean_unsigned_to_nat(0u);
x_330 = lean_apply_2(x_1, x_283, x_329);
x_331 = lean_unbox(x_330);
lean_dec(x_330);
if (x_331 == 0)
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_332 = lean_box(0);
x_333 = lean_mk_string("Bool");
x_334 = lean_name_mk_string(x_332, x_333);
x_335 = lean_mk_string("false");
x_336 = lean_name_mk_string(x_334, x_335);
x_337 = lean_box(0);
x_338 = l_Lean_mkConst(x_336, x_337);
x_339 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_339, 0, x_338);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_318);
return x_340;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_341 = lean_box(0);
x_342 = lean_mk_string("Bool");
x_343 = lean_name_mk_string(x_341, x_342);
x_344 = lean_mk_string("true");
x_345 = lean_name_mk_string(x_343, x_344);
x_346 = lean_box(0);
x_347 = l_Lean_mkConst(x_345, x_346);
x_348 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_348, 0, x_347);
x_349 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_349, 0, x_348);
lean_ctor_set(x_349, 1, x_318);
return x_349;
}
}
}
}
}
else
{
uint8_t x_350; 
lean_dec(x_288);
lean_dec(x_287);
lean_dec(x_286);
lean_dec(x_283);
lean_dec(x_1);
x_350 = !lean_is_exclusive(x_284);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; 
x_351 = lean_ctor_get(x_284, 0);
lean_dec(x_351);
x_352 = lean_box(0);
lean_ctor_set(x_284, 0, x_352);
return x_284;
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_353 = lean_ctor_get(x_284, 1);
lean_inc(x_353);
lean_dec(x_284);
x_354 = lean_box(0);
x_355 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_355, 0, x_354);
lean_ctor_set(x_355, 1, x_353);
return x_355;
}
}
}
else
{
uint8_t x_356; 
lean_dec(x_287);
lean_dec(x_286);
lean_dec(x_283);
lean_dec(x_1);
x_356 = !lean_is_exclusive(x_284);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; 
x_357 = lean_ctor_get(x_284, 0);
lean_dec(x_357);
x_358 = lean_box(0);
lean_ctor_set(x_284, 0, x_358);
return x_284;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_359 = lean_ctor_get(x_284, 1);
lean_inc(x_359);
lean_dec(x_284);
x_360 = lean_box(0);
x_361 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_359);
return x_361;
}
}
}
else
{
uint8_t x_362; 
lean_dec(x_286);
lean_dec(x_283);
lean_dec(x_1);
x_362 = !lean_is_exclusive(x_284);
if (x_362 == 0)
{
lean_object* x_363; lean_object* x_364; 
x_363 = lean_ctor_get(x_284, 0);
lean_dec(x_363);
x_364 = lean_box(0);
lean_ctor_set(x_284, 0, x_364);
return x_284;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_365 = lean_ctor_get(x_284, 1);
lean_inc(x_365);
lean_dec(x_284);
x_366 = lean_box(0);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_365);
return x_367;
}
}
}
case 9:
{
lean_object* x_368; 
x_368 = lean_ctor_get(x_285, 0);
lean_inc(x_368);
lean_dec(x_285);
if (lean_obj_tag(x_368) == 0)
{
uint8_t x_369; 
x_369 = !lean_is_exclusive(x_284);
if (x_369 == 0)
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; uint8_t x_373; 
x_370 = lean_ctor_get(x_284, 0);
lean_dec(x_370);
x_371 = lean_ctor_get(x_368, 0);
lean_inc(x_371);
lean_dec(x_368);
x_372 = lean_apply_2(x_1, x_283, x_371);
x_373 = lean_unbox(x_372);
lean_dec(x_372);
if (x_373 == 0)
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_374 = lean_box(0);
x_375 = lean_mk_string("Bool");
x_376 = lean_name_mk_string(x_374, x_375);
x_377 = lean_mk_string("false");
x_378 = lean_name_mk_string(x_376, x_377);
x_379 = lean_box(0);
x_380 = l_Lean_mkConst(x_378, x_379);
x_381 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_284, 0, x_381);
return x_284;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_382 = lean_box(0);
x_383 = lean_mk_string("Bool");
x_384 = lean_name_mk_string(x_382, x_383);
x_385 = lean_mk_string("true");
x_386 = lean_name_mk_string(x_384, x_385);
x_387 = lean_box(0);
x_388 = l_Lean_mkConst(x_386, x_387);
x_389 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_389, 0, x_388);
lean_ctor_set(x_284, 0, x_389);
return x_284;
}
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; uint8_t x_393; 
x_390 = lean_ctor_get(x_284, 1);
lean_inc(x_390);
lean_dec(x_284);
x_391 = lean_ctor_get(x_368, 0);
lean_inc(x_391);
lean_dec(x_368);
x_392 = lean_apply_2(x_1, x_283, x_391);
x_393 = lean_unbox(x_392);
lean_dec(x_392);
if (x_393 == 0)
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_394 = lean_box(0);
x_395 = lean_mk_string("Bool");
x_396 = lean_name_mk_string(x_394, x_395);
x_397 = lean_mk_string("false");
x_398 = lean_name_mk_string(x_396, x_397);
x_399 = lean_box(0);
x_400 = l_Lean_mkConst(x_398, x_399);
x_401 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_401, 0, x_400);
x_402 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_390);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_403 = lean_box(0);
x_404 = lean_mk_string("Bool");
x_405 = lean_name_mk_string(x_403, x_404);
x_406 = lean_mk_string("true");
x_407 = lean_name_mk_string(x_405, x_406);
x_408 = lean_box(0);
x_409 = l_Lean_mkConst(x_407, x_408);
x_410 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_410, 0, x_409);
x_411 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_390);
return x_411;
}
}
}
else
{
uint8_t x_412; 
lean_dec(x_368);
lean_dec(x_283);
lean_dec(x_1);
x_412 = !lean_is_exclusive(x_284);
if (x_412 == 0)
{
lean_object* x_413; lean_object* x_414; 
x_413 = lean_ctor_get(x_284, 0);
lean_dec(x_413);
x_414 = lean_box(0);
lean_ctor_set(x_284, 0, x_414);
return x_284;
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; 
x_415 = lean_ctor_get(x_284, 1);
lean_inc(x_415);
lean_dec(x_284);
x_416 = lean_box(0);
x_417 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_417, 0, x_416);
lean_ctor_set(x_417, 1, x_415);
return x_417;
}
}
}
default: 
{
uint8_t x_418; 
lean_dec(x_285);
lean_dec(x_283);
lean_dec(x_1);
x_418 = !lean_is_exclusive(x_284);
if (x_418 == 0)
{
lean_object* x_419; lean_object* x_420; 
x_419 = lean_ctor_get(x_284, 0);
lean_dec(x_419);
x_420 = lean_box(0);
lean_ctor_set(x_284, 0, x_420);
return x_284;
}
else
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_421 = lean_ctor_get(x_284, 1);
lean_inc(x_421);
lean_dec(x_284);
x_422 = lean_box(0);
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_421);
return x_423;
}
}
}
}
else
{
uint8_t x_424; 
lean_dec(x_283);
lean_dec(x_1);
x_424 = !lean_is_exclusive(x_284);
if (x_424 == 0)
{
return x_284;
}
else
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_425 = lean_ctor_get(x_284, 0);
x_426 = lean_ctor_get(x_284, 1);
lean_inc(x_426);
lean_inc(x_425);
lean_dec(x_284);
x_427 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_427, 0, x_425);
lean_ctor_set(x_427, 1, x_426);
return x_427;
}
}
}
else
{
uint8_t x_428; 
lean_dec(x_281);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_428 = !lean_is_exclusive(x_9);
if (x_428 == 0)
{
lean_object* x_429; lean_object* x_430; 
x_429 = lean_ctor_get(x_9, 0);
lean_dec(x_429);
x_430 = lean_box(0);
lean_ctor_set(x_9, 0, x_430);
return x_9;
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_431 = lean_ctor_get(x_9, 1);
lean_inc(x_431);
lean_dec(x_9);
x_432 = lean_box(0);
x_433 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_431);
return x_433;
}
}
}
default: 
{
uint8_t x_434; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_434 = !lean_is_exclusive(x_9);
if (x_434 == 0)
{
lean_object* x_435; lean_object* x_436; 
x_435 = lean_ctor_get(x_9, 0);
lean_dec(x_435);
x_436 = lean_box(0);
lean_ctor_set(x_9, 0, x_436);
return x_9;
}
else
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_437 = lean_ctor_get(x_9, 1);
lean_inc(x_437);
lean_dec(x_9);
x_438 = lean_box(0);
x_439 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_439, 0, x_438);
lean_ctor_set(x_439, 1, x_437);
return x_439;
}
}
}
}
else
{
uint8_t x_440; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_440 = !lean_is_exclusive(x_9);
if (x_440 == 0)
{
return x_9;
}
else
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; 
x_441 = lean_ctor_get(x_9, 0);
x_442 = lean_ctor_get(x_9, 1);
lean_inc(x_442);
lean_inc(x_441);
lean_dec(x_9);
x_443 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_443, 0, x_441);
lean_ctor_set(x_443, 1, x_442);
return x_443;
}
}
}
}
lean_object* l_Lean_Meta_reduceNat_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
switch (lean_obj_tag(x_5)) {
case 4:
{
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
lean_dec(x_5);
x_11 = lean_box_uint64(x_10);
x_12 = lean_box_uint64(x_7);
x_13 = lean_apply_5(x_2, x_8, x_9, x_11, x_6, x_12);
return x_13;
}
case 5:
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 4)
{
lean_object* x_15; uint64_t x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_4);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
lean_dec(x_5);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
x_21 = lean_ctor_get_uint64(x_14, sizeof(void*)*2);
lean_dec(x_14);
x_22 = lean_box_uint64(x_21);
x_23 = lean_box_uint64(x_18);
x_24 = lean_box_uint64(x_16);
x_25 = lean_apply_7(x_3, x_19, x_20, x_22, x_17, x_23, x_15, x_24);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_3);
x_26 = lean_apply_1(x_4, x_1);
return x_26;
}
}
default: 
{
lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_apply_1(x_4, x_1);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_apply_1(x_4, x_1);
return x_28;
}
}
}
lean_object* l_Lean_Meta_reduceNat_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNat_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_reduceNat_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_hasFVar(x_1);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasMVar(x_1);
if (x_8 == 0)
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
switch (lean_obj_tag(x_9)) {
case 4:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = lean_mk_string("Nat");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("succ");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_name_eq(x_11, x_16);
lean_dec(x_16);
lean_dec(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_reduceNat_x3f___lambda__1___boxed), 1, 0);
x_21 = l_Lean_Meta_reduceUnaryNatOp(x_20, x_10, x_2, x_3, x_4, x_5, x_6);
return x_21;
}
}
case 5:
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_9, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 4)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_dec(x_9);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_box(0);
x_27 = lean_mk_string("Nat");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("add");
lean_inc(x_28);
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_name_eq(x_25, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_mk_string("sub");
lean_inc(x_28);
x_33 = lean_name_mk_string(x_28, x_32);
x_34 = lean_name_eq(x_25, x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_mk_string("mul");
lean_inc(x_28);
x_36 = lean_name_mk_string(x_28, x_35);
x_37 = lean_name_eq(x_25, x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_mk_string("div");
lean_inc(x_28);
x_39 = lean_name_mk_string(x_28, x_38);
x_40 = lean_name_eq(x_25, x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_mk_string("mod");
lean_inc(x_28);
x_42 = lean_name_mk_string(x_28, x_41);
x_43 = lean_name_eq(x_25, x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_mk_string("beq");
lean_inc(x_28);
x_45 = lean_name_mk_string(x_28, x_44);
x_46 = lean_name_eq(x_25, x_45);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_mk_string("ble");
x_48 = lean_name_mk_string(x_28, x_47);
x_49 = lean_name_eq(x_25, x_48);
lean_dec(x_48);
lean_dec(x_25);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_6);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_alloc_closure((void*)(l_Nat_ble___boxed), 2, 0);
x_53 = l_Lean_Meta_reduceBinNatPred(x_52, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_28);
lean_dec(x_25);
x_54 = lean_alloc_closure((void*)(l_Nat_beq___boxed), 2, 0);
x_55 = l_Lean_Meta_reduceBinNatPred(x_54, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_28);
lean_dec(x_25);
x_56 = lean_alloc_closure((void*)(l_Nat_mod___boxed), 2, 0);
x_57 = l_Lean_Meta_reduceBinNatOp(x_56, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_28);
lean_dec(x_25);
x_58 = lean_alloc_closure((void*)(l_Nat_div___boxed), 2, 0);
x_59 = l_Lean_Meta_reduceBinNatOp(x_58, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_28);
lean_dec(x_25);
x_60 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
x_61 = l_Lean_Meta_reduceBinNatOp(x_60, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_28);
lean_dec(x_25);
x_62 = lean_alloc_closure((void*)(l_Nat_sub___boxed), 2, 0);
x_63 = l_Lean_Meta_reduceBinNatOp(x_62, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_28);
lean_dec(x_25);
x_64 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
x_65 = l_Lean_Meta_reduceBinNatOp(x_64, x_24, x_23, x_2, x_3, x_4, x_5, x_6);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_6);
return x_67;
}
}
default: 
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_6);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_6);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_6);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_6);
return x_75;
}
}
}
lean_object* l_Lean_Meta_reduceNat_x3f___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_reduceNat_x3f___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(x_1);
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(x_1);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_hasFVar(x_1);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasExprMVar(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint8(x_10, 5);
lean_dec(x_10);
x_12 = lean_box(x_11);
switch (lean_obj_tag(x_12)) {
case 2:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
case 3:
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_9, 0, x_24);
return x_9;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_dec(x_9);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
default: 
{
uint8_t x_29; 
lean_dec(x_12);
x_29 = !lean_is_exclusive(x_9);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_9, 0);
lean_dec(x_30);
x_31 = 1;
x_32 = lean_box(x_31);
lean_ctor_set(x_9, 0, x_32);
return x_9;
}
else
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_9, 1);
lean_inc(x_33);
lean_dec(x_9);
x_34 = 1;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
}
else
{
uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_37 = 0;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_6);
return x_39;
}
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 0;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_WHNF_0__Lean_Meta_useWHNFCache(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cached_x3f(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (x_1 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = l_Lean_Meta_getConfig(x_3, x_4, x_5, x_6, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_11, 5);
lean_dec(x_11);
x_13 = lean_box(x_12);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_st_ref_get(x_6, x_14);
lean_dec(x_6);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_4, x_16);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 4);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_21, x_2);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_25, 4);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_26, x_2);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
}
case 1:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_5);
lean_dec(x_3);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_dec(x_10);
x_30 = lean_st_ref_get(x_6, x_29);
lean_dec(x_6);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_get(x_4, x_31);
lean_dec(x_4);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 3);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_36, x_2);
lean_ctor_set(x_32, 0, x_37);
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_40, 3);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_41, x_2);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_39);
return x_43;
}
}
default: 
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_13);
x_44 = lean_ctor_get(x_10, 1);
lean_inc(x_44);
lean_dec(x_10);
x_45 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_45, 0, lean_box(0));
x_46 = lean_mk_string("Lean.Meta.WHNF");
x_47 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.cached?");
x_48 = lean_unsigned_to_nat(569u);
x_49 = lean_unsigned_to_nat(34u);
x_50 = lean_mk_string("unreachable code has been reached");
x_51 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_46, x_47, x_48, x_49, x_50);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_46);
x_52 = lean_panic_fn(x_45, x_51);
x_53 = lean_apply_5(x_52, x_3, x_4, x_5, x_6, x_44);
return x_53;
}
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cached_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cached_x3f(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (x_1 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = l_Lean_Meta_getConfig(x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_11, 5);
lean_dec(x_11);
x_13 = lean_box(x_12);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_6);
lean_dec(x_4);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_st_ref_get(x_7, x_14);
lean_dec(x_7);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_5, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_18, 1);
lean_dec(x_22);
x_23 = !lean_is_exclusive(x_19);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_19, 4);
lean_inc(x_3);
x_25 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_24, x_2, x_3);
lean_ctor_set(x_19, 4, x_25);
x_26 = lean_st_ref_set(x_5, x_18, x_20);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_3);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_3);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_19, 0);
x_32 = lean_ctor_get(x_19, 1);
x_33 = lean_ctor_get(x_19, 2);
x_34 = lean_ctor_get(x_19, 3);
x_35 = lean_ctor_get(x_19, 4);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_19);
lean_inc(x_3);
x_36 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_35, x_2, x_3);
x_37 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_32);
lean_ctor_set(x_37, 2, x_33);
lean_ctor_set(x_37, 3, x_34);
lean_ctor_set(x_37, 4, x_36);
lean_ctor_set(x_18, 1, x_37);
x_38 = lean_st_ref_set(x_5, x_18, x_20);
lean_dec(x_5);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_3);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_42 = lean_ctor_get(x_18, 0);
x_43 = lean_ctor_get(x_18, 2);
x_44 = lean_ctor_get(x_18, 3);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_18);
x_45 = lean_ctor_get(x_19, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_19, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_19, 2);
lean_inc(x_47);
x_48 = lean_ctor_get(x_19, 3);
lean_inc(x_48);
x_49 = lean_ctor_get(x_19, 4);
lean_inc(x_49);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 lean_ctor_release(x_19, 2);
 lean_ctor_release(x_19, 3);
 lean_ctor_release(x_19, 4);
 x_50 = x_19;
} else {
 lean_dec_ref(x_19);
 x_50 = lean_box(0);
}
lean_inc(x_3);
x_51 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_49, x_2, x_3);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 5, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_45);
lean_ctor_set(x_52, 1, x_46);
lean_ctor_set(x_52, 2, x_47);
lean_ctor_set(x_52, 3, x_48);
lean_ctor_set(x_52, 4, x_51);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_43);
lean_ctor_set(x_53, 3, x_44);
x_54 = lean_st_ref_set(x_5, x_53, x_20);
lean_dec(x_5);
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
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_3);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
case 1:
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
lean_dec(x_6);
lean_dec(x_4);
x_58 = lean_ctor_get(x_10, 1);
lean_inc(x_58);
lean_dec(x_10);
x_59 = lean_st_ref_get(x_7, x_58);
lean_dec(x_7);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_st_ref_take(x_5, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = !lean_is_exclusive(x_62);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_62, 1);
lean_dec(x_66);
x_67 = !lean_is_exclusive(x_63);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_63, 3);
lean_inc(x_3);
x_69 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_68, x_2, x_3);
lean_ctor_set(x_63, 3, x_69);
x_70 = lean_st_ref_set(x_5, x_62, x_64);
lean_dec(x_5);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; 
x_72 = lean_ctor_get(x_70, 0);
lean_dec(x_72);
lean_ctor_set(x_70, 0, x_3);
return x_70;
}
else
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_3);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_75 = lean_ctor_get(x_63, 0);
x_76 = lean_ctor_get(x_63, 1);
x_77 = lean_ctor_get(x_63, 2);
x_78 = lean_ctor_get(x_63, 4);
x_79 = lean_ctor_get(x_63, 3);
lean_inc(x_78);
lean_inc(x_79);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_63);
lean_inc(x_3);
x_80 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_79, x_2, x_3);
x_81 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_81, 0, x_75);
lean_ctor_set(x_81, 1, x_76);
lean_ctor_set(x_81, 2, x_77);
lean_ctor_set(x_81, 3, x_80);
lean_ctor_set(x_81, 4, x_78);
lean_ctor_set(x_62, 1, x_81);
x_82 = lean_st_ref_set(x_5, x_62, x_64);
lean_dec(x_5);
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
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_3);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_86 = lean_ctor_get(x_62, 0);
x_87 = lean_ctor_get(x_62, 2);
x_88 = lean_ctor_get(x_62, 3);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_62);
x_89 = lean_ctor_get(x_63, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_63, 1);
lean_inc(x_90);
x_91 = lean_ctor_get(x_63, 2);
lean_inc(x_91);
x_92 = lean_ctor_get(x_63, 4);
lean_inc(x_92);
x_93 = lean_ctor_get(x_63, 3);
lean_inc(x_93);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 lean_ctor_release(x_63, 4);
 x_94 = x_63;
} else {
 lean_dec_ref(x_63);
 x_94 = lean_box(0);
}
lean_inc(x_3);
x_95 = l_Std_PersistentHashMap_insert___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__4(x_93, x_2, x_3);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(0, 5, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_89);
lean_ctor_set(x_96, 1, x_90);
lean_ctor_set(x_96, 2, x_91);
lean_ctor_set(x_96, 3, x_95);
lean_ctor_set(x_96, 4, x_92);
x_97 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_97, 0, x_86);
lean_ctor_set(x_97, 1, x_96);
lean_ctor_set(x_97, 2, x_87);
lean_ctor_set(x_97, 3, x_88);
x_98 = lean_st_ref_set(x_5, x_97, x_64);
lean_dec(x_5);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_100 = x_98;
} else {
 lean_dec_ref(x_98);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_3);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
default: 
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_13);
lean_dec(x_2);
x_102 = lean_ctor_get(x_10, 1);
lean_inc(x_102);
lean_dec(x_10);
x_103 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_103, 0, lean_box(0));
x_104 = lean_mk_string("Lean.Meta.WHNF");
x_105 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.cache");
x_106 = lean_unsigned_to_nat(578u);
x_107 = lean_unsigned_to_nat(34u);
x_108 = lean_mk_string("unreachable code has been reached");
x_109 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_104, x_105, x_106, x_107, x_108);
lean_dec(x_108);
lean_dec(x_105);
lean_dec(x_104);
x_110 = lean_panic_fn(x_103, x_109);
x_111 = lean_apply_5(x_110, x_4, x_5, x_6, x_7, x_102);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_111, 0);
lean_dec(x_113);
lean_ctor_set(x_111, 0, x_3);
return x_111;
}
else
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_dec(x_111);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_3);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
else
{
uint8_t x_116; 
lean_dec(x_3);
x_116 = !lean_is_exclusive(x_111);
if (x_116 == 0)
{
return x_111;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_111, 0);
x_118 = lean_ctor_get(x_111, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_111);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_cache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_7, 0, lean_box(0));
x_8 = lean_mk_string("Lean.Meta.WHNF");
x_9 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.whnfEasyCases");
x_10 = lean_unsigned_to_nat(209u);
x_11 = lean_unsigned_to_nat(26u);
x_12 = lean_mk_string("unreachable code has been reached");
x_13 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_panic_fn(x_7, x_13);
x_15 = lean_apply_5(x_14, x_2, x_3, x_4, x_5, x_6);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_inc(x_2);
lean_inc(x_16);
x_17 = l_Lean_Meta_getLocalDecl(x_16, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 4);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_18, sizeof(void*)*5);
lean_dec(x_18);
x_26 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_23);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
if (x_25 == 0)
{
lean_object* x_56; 
lean_free_object(x_26);
lean_dec(x_1);
x_56 = lean_box(0);
x_30 = x_56;
goto block_55;
}
else
{
uint8_t x_57; 
x_57 = lean_ctor_get_uint8(x_28, 6);
if (x_57 == 0)
{
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_26, 0, x_1);
return x_26;
}
else
{
lean_object* x_58; 
lean_free_object(x_26);
lean_dec(x_1);
x_58 = lean_box(0);
x_30 = x_58;
goto block_55;
}
}
block_55:
{
uint8_t x_31; 
lean_dec(x_30);
x_31 = lean_ctor_get_uint8(x_28, 7);
lean_dec(x_28);
if (x_31 == 0)
{
lean_dec(x_16);
x_1 = x_24;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_st_ref_get(x_5, x_29);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_st_ref_take(x_3, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_36, 2);
x_40 = lean_box(0);
x_41 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_39, x_16, x_40);
lean_ctor_set(x_36, 2, x_41);
x_42 = lean_st_ref_set(x_3, x_36, x_37);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_1 = x_24;
x_6 = x_43;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_45 = lean_ctor_get(x_36, 0);
x_46 = lean_ctor_get(x_36, 1);
x_47 = lean_ctor_get(x_36, 2);
x_48 = lean_ctor_get(x_36, 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_49 = lean_box(0);
x_50 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_47, x_16, x_49);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_46);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set(x_51, 3, x_48);
x_52 = lean_st_ref_set(x_3, x_51, x_37);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_1 = x_24;
x_6 = x_53;
goto _start;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_26, 0);
x_60 = lean_ctor_get(x_26, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_26);
if (x_25 == 0)
{
lean_object* x_81; 
lean_dec(x_1);
x_81 = lean_box(0);
x_61 = x_81;
goto block_80;
}
else
{
uint8_t x_82; 
x_82 = lean_ctor_get_uint8(x_59, 6);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_59);
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_1);
lean_ctor_set(x_83, 1, x_60);
return x_83;
}
else
{
lean_object* x_84; 
lean_dec(x_1);
x_84 = lean_box(0);
x_61 = x_84;
goto block_80;
}
}
block_80:
{
uint8_t x_62; 
lean_dec(x_61);
x_62 = lean_ctor_get_uint8(x_59, 7);
lean_dec(x_59);
if (x_62 == 0)
{
lean_dec(x_16);
x_1 = x_24;
x_6 = x_60;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_64 = lean_st_ref_get(x_5, x_60);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_take(x_3, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_67, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 lean_ctor_release(x_67, 2);
 lean_ctor_release(x_67, 3);
 x_73 = x_67;
} else {
 lean_dec_ref(x_67);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
x_75 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_71, x_16, x_74);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 4, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_75);
lean_ctor_set(x_76, 3, x_72);
x_77 = lean_st_ref_set(x_3, x_76, x_68);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_1 = x_24;
x_6 = x_78;
goto _start;
}
}
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_17);
if (x_85 == 0)
{
return x_17;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_17, 0);
x_87 = lean_ctor_get(x_17, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_17);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
case 2:
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_1, 0);
lean_inc(x_89);
x_90 = l_Lean_Meta_getExprMVarAssignment_x3f(x_89, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_92 = !lean_is_exclusive(x_90);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_90, 0);
lean_dec(x_93);
lean_ctor_set(x_90, 0, x_1);
return x_90;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_90, 1);
lean_inc(x_94);
lean_dec(x_90);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_1);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_1);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_dec(x_90);
x_97 = lean_ctor_get(x_91, 0);
lean_inc(x_97);
lean_dec(x_91);
x_1 = x_97;
x_6 = x_96;
goto _start;
}
}
case 4:
{
uint8_t x_99; lean_object* x_100; lean_object* x_184; lean_object* x_185; 
x_184 = lean_mk_string("whnf");
x_185 = l_Lean_Core_checkMaxHeartbeats(x_184, x_4, x_5, x_6);
lean_dec(x_184);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; uint8_t x_187; 
x_186 = lean_ctor_get(x_185, 1);
lean_inc(x_186);
lean_dec(x_185);
x_187 = l_Lean_Expr_hasFVar(x_1);
if (x_187 == 0)
{
uint8_t x_188; 
x_188 = l_Lean_Expr_hasExprMVar(x_1);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; lean_object* x_192; 
x_189 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_186);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get_uint8(x_190, 5);
lean_dec(x_190);
x_192 = lean_box(x_191);
switch (lean_obj_tag(x_192)) {
case 2:
{
lean_object* x_193; uint8_t x_194; 
x_193 = lean_ctor_get(x_189, 1);
lean_inc(x_193);
lean_dec(x_189);
x_194 = 0;
x_99 = x_194;
x_100 = x_193;
goto block_183;
}
case 3:
{
lean_object* x_195; uint8_t x_196; 
x_195 = lean_ctor_get(x_189, 1);
lean_inc(x_195);
lean_dec(x_189);
x_196 = 0;
x_99 = x_196;
x_100 = x_195;
goto block_183;
}
default: 
{
lean_object* x_197; uint8_t x_198; 
lean_dec(x_192);
x_197 = lean_ctor_get(x_189, 1);
lean_inc(x_197);
lean_dec(x_189);
x_198 = 1;
x_99 = x_198;
x_100 = x_197;
goto block_183;
}
}
}
else
{
uint8_t x_199; 
x_199 = 0;
x_99 = x_199;
x_100 = x_186;
goto block_183;
}
}
else
{
uint8_t x_200; 
x_200 = 0;
x_99 = x_200;
x_100 = x_186;
goto block_183;
}
}
else
{
uint8_t x_201; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_201 = !lean_is_exclusive(x_185);
if (x_201 == 0)
{
return x_185;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_185, 0);
x_203 = lean_ctor_get(x_185, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_185);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
block_183:
{
lean_object* x_101; lean_object* x_102; 
if (x_99 == 0)
{
lean_object* x_144; 
x_144 = lean_box(0);
x_101 = x_144;
x_102 = x_100;
goto block_143;
}
else
{
lean_object* x_145; lean_object* x_146; uint8_t x_147; lean_object* x_148; 
x_145 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_100);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get_uint8(x_146, 5);
lean_dec(x_146);
x_148 = lean_box(x_147);
switch (lean_obj_tag(x_148)) {
case 0:
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_149 = lean_ctor_get(x_145, 1);
lean_inc(x_149);
lean_dec(x_145);
x_150 = lean_st_ref_get(x_5, x_149);
x_151 = lean_ctor_get(x_150, 1);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_st_ref_get(x_3, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
x_156 = lean_ctor_get(x_155, 4);
lean_inc(x_156);
lean_dec(x_155);
x_157 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_156, x_1);
x_101 = x_157;
x_102 = x_154;
goto block_143;
}
case 1:
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_158 = lean_ctor_get(x_145, 1);
lean_inc(x_158);
lean_dec(x_145);
x_159 = lean_st_ref_get(x_5, x_158);
x_160 = lean_ctor_get(x_159, 1);
lean_inc(x_160);
lean_dec(x_159);
x_161 = lean_st_ref_get(x_3, x_160);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = lean_ctor_get(x_164, 3);
lean_inc(x_165);
lean_dec(x_164);
x_166 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_165, x_1);
x_101 = x_166;
x_102 = x_163;
goto block_143;
}
default: 
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_148);
x_167 = lean_ctor_get(x_145, 1);
lean_inc(x_167);
lean_dec(x_145);
x_168 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_168, 0, lean_box(0));
x_169 = lean_mk_string("Lean.Meta.WHNF");
x_170 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.cached?");
x_171 = lean_unsigned_to_nat(569u);
x_172 = lean_unsigned_to_nat(34u);
x_173 = lean_mk_string("unreachable code has been reached");
x_174 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_169, x_170, x_171, x_172, x_173);
lean_dec(x_173);
lean_dec(x_170);
lean_dec(x_169);
x_175 = lean_panic_fn(x_168, x_174);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_176 = lean_apply_5(x_175, x_2, x_3, x_4, x_5, x_167);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_101 = x_177;
x_102 = x_178;
goto block_143;
}
else
{
uint8_t x_179; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_179 = !lean_is_exclusive(x_176);
if (x_179 == 0)
{
return x_176;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_176, 0);
x_181 = lean_ctor_get(x_176, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_176);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
}
}
block_143:
{
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_103; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_103 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_104);
x_106 = l_Lean_Meta_reduceNat_x3f(x_104, x_2, x_3, x_4, x_5, x_105);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
lean_inc(x_104);
x_109 = l_Lean_Meta_reduceNative_x3f(x_104, x_2, x_3, x_4, x_5, x_108);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_104);
x_112 = l_Lean_Meta_unfoldDefinition_x3f(x_104, x_2, x_3, x_4, x_5, x_111);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_99, x_1, x_104, x_2, x_3, x_4, x_5, x_114);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_104);
lean_dec(x_1);
x_116 = lean_ctor_get(x_112, 1);
lean_inc(x_116);
lean_dec(x_112);
x_117 = lean_ctor_get(x_113, 0);
lean_inc(x_117);
lean_dec(x_113);
x_1 = x_117;
x_6 = x_116;
goto _start;
}
}
else
{
uint8_t x_119; 
lean_dec(x_104);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_119 = !lean_is_exclusive(x_112);
if (x_119 == 0)
{
return x_112;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_112, 0);
x_121 = lean_ctor_get(x_112, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_112);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_104);
x_123 = lean_ctor_get(x_109, 1);
lean_inc(x_123);
lean_dec(x_109);
x_124 = lean_ctor_get(x_110, 0);
lean_inc(x_124);
lean_dec(x_110);
x_125 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_99, x_1, x_124, x_2, x_3, x_4, x_5, x_123);
return x_125;
}
}
else
{
uint8_t x_126; 
lean_dec(x_104);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_126 = !lean_is_exclusive(x_109);
if (x_126 == 0)
{
return x_109;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_109, 0);
x_128 = lean_ctor_get(x_109, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_109);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_104);
x_130 = lean_ctor_get(x_106, 1);
lean_inc(x_130);
lean_dec(x_106);
x_131 = lean_ctor_get(x_107, 0);
lean_inc(x_131);
lean_dec(x_107);
x_132 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_99, x_1, x_131, x_2, x_3, x_4, x_5, x_130);
return x_132;
}
}
else
{
uint8_t x_133; 
lean_dec(x_104);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_133 = !lean_is_exclusive(x_106);
if (x_133 == 0)
{
return x_106;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_106, 0);
x_135 = lean_ctor_get(x_106, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_106);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
else
{
uint8_t x_137; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_137 = !lean_is_exclusive(x_103);
if (x_137 == 0)
{
return x_103;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_103, 0);
x_139 = lean_ctor_get(x_103, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_103);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = lean_ctor_get(x_101, 0);
lean_inc(x_141);
lean_dec(x_101);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_102);
return x_142;
}
}
}
}
case 5:
{
uint8_t x_205; lean_object* x_206; lean_object* x_290; lean_object* x_291; 
x_290 = lean_mk_string("whnf");
x_291 = l_Lean_Core_checkMaxHeartbeats(x_290, x_4, x_5, x_6);
lean_dec(x_290);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; uint8_t x_293; 
x_292 = lean_ctor_get(x_291, 1);
lean_inc(x_292);
lean_dec(x_291);
x_293 = l_Lean_Expr_hasFVar(x_1);
if (x_293 == 0)
{
uint8_t x_294; 
x_294 = l_Lean_Expr_hasExprMVar(x_1);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; uint8_t x_297; lean_object* x_298; 
x_295 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_292);
x_296 = lean_ctor_get(x_295, 0);
lean_inc(x_296);
x_297 = lean_ctor_get_uint8(x_296, 5);
lean_dec(x_296);
x_298 = lean_box(x_297);
switch (lean_obj_tag(x_298)) {
case 2:
{
lean_object* x_299; uint8_t x_300; 
x_299 = lean_ctor_get(x_295, 1);
lean_inc(x_299);
lean_dec(x_295);
x_300 = 0;
x_205 = x_300;
x_206 = x_299;
goto block_289;
}
case 3:
{
lean_object* x_301; uint8_t x_302; 
x_301 = lean_ctor_get(x_295, 1);
lean_inc(x_301);
lean_dec(x_295);
x_302 = 0;
x_205 = x_302;
x_206 = x_301;
goto block_289;
}
default: 
{
lean_object* x_303; uint8_t x_304; 
lean_dec(x_298);
x_303 = lean_ctor_get(x_295, 1);
lean_inc(x_303);
lean_dec(x_295);
x_304 = 1;
x_205 = x_304;
x_206 = x_303;
goto block_289;
}
}
}
else
{
uint8_t x_305; 
x_305 = 0;
x_205 = x_305;
x_206 = x_292;
goto block_289;
}
}
else
{
uint8_t x_306; 
x_306 = 0;
x_205 = x_306;
x_206 = x_292;
goto block_289;
}
}
else
{
uint8_t x_307; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_307 = !lean_is_exclusive(x_291);
if (x_307 == 0)
{
return x_291;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_308 = lean_ctor_get(x_291, 0);
x_309 = lean_ctor_get(x_291, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_291);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
return x_310;
}
}
block_289:
{
lean_object* x_207; lean_object* x_208; 
if (x_205 == 0)
{
lean_object* x_250; 
x_250 = lean_box(0);
x_207 = x_250;
x_208 = x_206;
goto block_249;
}
else
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; lean_object* x_254; 
x_251 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_206);
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_ctor_get_uint8(x_252, 5);
lean_dec(x_252);
x_254 = lean_box(x_253);
switch (lean_obj_tag(x_254)) {
case 0:
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_255 = lean_ctor_get(x_251, 1);
lean_inc(x_255);
lean_dec(x_251);
x_256 = lean_st_ref_get(x_5, x_255);
x_257 = lean_ctor_get(x_256, 1);
lean_inc(x_257);
lean_dec(x_256);
x_258 = lean_st_ref_get(x_3, x_257);
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_258, 1);
lean_inc(x_260);
lean_dec(x_258);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
lean_dec(x_259);
x_262 = lean_ctor_get(x_261, 4);
lean_inc(x_262);
lean_dec(x_261);
x_263 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_262, x_1);
x_207 = x_263;
x_208 = x_260;
goto block_249;
}
case 1:
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_264 = lean_ctor_get(x_251, 1);
lean_inc(x_264);
lean_dec(x_251);
x_265 = lean_st_ref_get(x_5, x_264);
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
lean_dec(x_265);
x_267 = lean_st_ref_get(x_3, x_266);
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
x_270 = lean_ctor_get(x_268, 1);
lean_inc(x_270);
lean_dec(x_268);
x_271 = lean_ctor_get(x_270, 3);
lean_inc(x_271);
lean_dec(x_270);
x_272 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_271, x_1);
x_207 = x_272;
x_208 = x_269;
goto block_249;
}
default: 
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_254);
x_273 = lean_ctor_get(x_251, 1);
lean_inc(x_273);
lean_dec(x_251);
x_274 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_274, 0, lean_box(0));
x_275 = lean_mk_string("Lean.Meta.WHNF");
x_276 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.cached?");
x_277 = lean_unsigned_to_nat(569u);
x_278 = lean_unsigned_to_nat(34u);
x_279 = lean_mk_string("unreachable code has been reached");
x_280 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_275, x_276, x_277, x_278, x_279);
lean_dec(x_279);
lean_dec(x_276);
lean_dec(x_275);
x_281 = lean_panic_fn(x_274, x_280);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_282 = lean_apply_5(x_281, x_2, x_3, x_4, x_5, x_273);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
lean_dec(x_282);
x_207 = x_283;
x_208 = x_284;
goto block_249;
}
else
{
uint8_t x_285; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_285 = !lean_is_exclusive(x_282);
if (x_285 == 0)
{
return x_282;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_286 = lean_ctor_get(x_282, 0);
x_287 = lean_ctor_get(x_282, 1);
lean_inc(x_287);
lean_inc(x_286);
lean_dec(x_282);
x_288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
return x_288;
}
}
}
}
}
block_249:
{
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_209; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_209 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_208);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
lean_dec(x_209);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_210);
x_212 = l_Lean_Meta_reduceNat_x3f(x_210, x_2, x_3, x_4, x_5, x_211);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; 
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
if (lean_obj_tag(x_213) == 0)
{
lean_object* x_214; lean_object* x_215; 
x_214 = lean_ctor_get(x_212, 1);
lean_inc(x_214);
lean_dec(x_212);
lean_inc(x_210);
x_215 = l_Lean_Meta_reduceNative_x3f(x_210, x_2, x_3, x_4, x_5, x_214);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; 
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_210);
x_218 = l_Lean_Meta_unfoldDefinition_x3f(x_210, x_2, x_3, x_4, x_5, x_217);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; 
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
lean_dec(x_218);
x_221 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_205, x_1, x_210, x_2, x_3, x_4, x_5, x_220);
return x_221;
}
else
{
lean_object* x_222; lean_object* x_223; 
lean_dec(x_210);
lean_dec(x_1);
x_222 = lean_ctor_get(x_218, 1);
lean_inc(x_222);
lean_dec(x_218);
x_223 = lean_ctor_get(x_219, 0);
lean_inc(x_223);
lean_dec(x_219);
x_1 = x_223;
x_6 = x_222;
goto _start;
}
}
else
{
uint8_t x_225; 
lean_dec(x_210);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_225 = !lean_is_exclusive(x_218);
if (x_225 == 0)
{
return x_218;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_218, 0);
x_227 = lean_ctor_get(x_218, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_218);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec(x_210);
x_229 = lean_ctor_get(x_215, 1);
lean_inc(x_229);
lean_dec(x_215);
x_230 = lean_ctor_get(x_216, 0);
lean_inc(x_230);
lean_dec(x_216);
x_231 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_205, x_1, x_230, x_2, x_3, x_4, x_5, x_229);
return x_231;
}
}
else
{
uint8_t x_232; 
lean_dec(x_210);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_232 = !lean_is_exclusive(x_215);
if (x_232 == 0)
{
return x_215;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_215, 0);
x_234 = lean_ctor_get(x_215, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_215);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_210);
x_236 = lean_ctor_get(x_212, 1);
lean_inc(x_236);
lean_dec(x_212);
x_237 = lean_ctor_get(x_213, 0);
lean_inc(x_237);
lean_dec(x_213);
x_238 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_205, x_1, x_237, x_2, x_3, x_4, x_5, x_236);
return x_238;
}
}
else
{
uint8_t x_239; 
lean_dec(x_210);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_239 = !lean_is_exclusive(x_212);
if (x_239 == 0)
{
return x_212;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_212, 0);
x_241 = lean_ctor_get(x_212, 1);
lean_inc(x_241);
lean_inc(x_240);
lean_dec(x_212);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_240);
lean_ctor_set(x_242, 1, x_241);
return x_242;
}
}
}
else
{
uint8_t x_243; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_243 = !lean_is_exclusive(x_209);
if (x_243 == 0)
{
return x_209;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_209, 0);
x_245 = lean_ctor_get(x_209, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_209);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
return x_246;
}
}
}
else
{
lean_object* x_247; lean_object* x_248; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_247 = lean_ctor_get(x_207, 0);
lean_inc(x_247);
lean_dec(x_207);
x_248 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_208);
return x_248;
}
}
}
}
case 8:
{
uint8_t x_311; lean_object* x_312; lean_object* x_396; lean_object* x_397; 
x_396 = lean_mk_string("whnf");
x_397 = l_Lean_Core_checkMaxHeartbeats(x_396, x_4, x_5, x_6);
lean_dec(x_396);
if (lean_obj_tag(x_397) == 0)
{
lean_object* x_398; uint8_t x_399; 
x_398 = lean_ctor_get(x_397, 1);
lean_inc(x_398);
lean_dec(x_397);
x_399 = l_Lean_Expr_hasFVar(x_1);
if (x_399 == 0)
{
uint8_t x_400; 
x_400 = l_Lean_Expr_hasExprMVar(x_1);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; uint8_t x_403; lean_object* x_404; 
x_401 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_398);
x_402 = lean_ctor_get(x_401, 0);
lean_inc(x_402);
x_403 = lean_ctor_get_uint8(x_402, 5);
lean_dec(x_402);
x_404 = lean_box(x_403);
switch (lean_obj_tag(x_404)) {
case 2:
{
lean_object* x_405; uint8_t x_406; 
x_405 = lean_ctor_get(x_401, 1);
lean_inc(x_405);
lean_dec(x_401);
x_406 = 0;
x_311 = x_406;
x_312 = x_405;
goto block_395;
}
case 3:
{
lean_object* x_407; uint8_t x_408; 
x_407 = lean_ctor_get(x_401, 1);
lean_inc(x_407);
lean_dec(x_401);
x_408 = 0;
x_311 = x_408;
x_312 = x_407;
goto block_395;
}
default: 
{
lean_object* x_409; uint8_t x_410; 
lean_dec(x_404);
x_409 = lean_ctor_get(x_401, 1);
lean_inc(x_409);
lean_dec(x_401);
x_410 = 1;
x_311 = x_410;
x_312 = x_409;
goto block_395;
}
}
}
else
{
uint8_t x_411; 
x_411 = 0;
x_311 = x_411;
x_312 = x_398;
goto block_395;
}
}
else
{
uint8_t x_412; 
x_412 = 0;
x_311 = x_412;
x_312 = x_398;
goto block_395;
}
}
else
{
uint8_t x_413; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_413 = !lean_is_exclusive(x_397);
if (x_413 == 0)
{
return x_397;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; 
x_414 = lean_ctor_get(x_397, 0);
x_415 = lean_ctor_get(x_397, 1);
lean_inc(x_415);
lean_inc(x_414);
lean_dec(x_397);
x_416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_416, 0, x_414);
lean_ctor_set(x_416, 1, x_415);
return x_416;
}
}
block_395:
{
lean_object* x_313; lean_object* x_314; 
if (x_311 == 0)
{
lean_object* x_356; 
x_356 = lean_box(0);
x_313 = x_356;
x_314 = x_312;
goto block_355;
}
else
{
lean_object* x_357; lean_object* x_358; uint8_t x_359; lean_object* x_360; 
x_357 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_312);
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get_uint8(x_358, 5);
lean_dec(x_358);
x_360 = lean_box(x_359);
switch (lean_obj_tag(x_360)) {
case 0:
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_361 = lean_ctor_get(x_357, 1);
lean_inc(x_361);
lean_dec(x_357);
x_362 = lean_st_ref_get(x_5, x_361);
x_363 = lean_ctor_get(x_362, 1);
lean_inc(x_363);
lean_dec(x_362);
x_364 = lean_st_ref_get(x_3, x_363);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
lean_dec(x_365);
x_368 = lean_ctor_get(x_367, 4);
lean_inc(x_368);
lean_dec(x_367);
x_369 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_368, x_1);
x_313 = x_369;
x_314 = x_366;
goto block_355;
}
case 1:
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_370 = lean_ctor_get(x_357, 1);
lean_inc(x_370);
lean_dec(x_357);
x_371 = lean_st_ref_get(x_5, x_370);
x_372 = lean_ctor_get(x_371, 1);
lean_inc(x_372);
lean_dec(x_371);
x_373 = lean_st_ref_get(x_3, x_372);
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 1);
lean_inc(x_375);
lean_dec(x_373);
x_376 = lean_ctor_get(x_374, 1);
lean_inc(x_376);
lean_dec(x_374);
x_377 = lean_ctor_get(x_376, 3);
lean_inc(x_377);
lean_dec(x_376);
x_378 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_377, x_1);
x_313 = x_378;
x_314 = x_375;
goto block_355;
}
default: 
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_360);
x_379 = lean_ctor_get(x_357, 1);
lean_inc(x_379);
lean_dec(x_357);
x_380 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_380, 0, lean_box(0));
x_381 = lean_mk_string("Lean.Meta.WHNF");
x_382 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.cached?");
x_383 = lean_unsigned_to_nat(569u);
x_384 = lean_unsigned_to_nat(34u);
x_385 = lean_mk_string("unreachable code has been reached");
x_386 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_381, x_382, x_383, x_384, x_385);
lean_dec(x_385);
lean_dec(x_382);
lean_dec(x_381);
x_387 = lean_panic_fn(x_380, x_386);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_388 = lean_apply_5(x_387, x_2, x_3, x_4, x_5, x_379);
if (lean_obj_tag(x_388) == 0)
{
lean_object* x_389; lean_object* x_390; 
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_313 = x_389;
x_314 = x_390;
goto block_355;
}
else
{
uint8_t x_391; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_391 = !lean_is_exclusive(x_388);
if (x_391 == 0)
{
return x_388;
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_392 = lean_ctor_get(x_388, 0);
x_393 = lean_ctor_get(x_388, 1);
lean_inc(x_393);
lean_inc(x_392);
lean_dec(x_388);
x_394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_394, 0, x_392);
lean_ctor_set(x_394, 1, x_393);
return x_394;
}
}
}
}
}
block_355:
{
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_315; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_315 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_314);
if (lean_obj_tag(x_315) == 0)
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_316);
x_318 = l_Lean_Meta_reduceNat_x3f(x_316, x_2, x_3, x_4, x_5, x_317);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; 
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; 
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
lean_inc(x_316);
x_321 = l_Lean_Meta_reduceNative_x3f(x_316, x_2, x_3, x_4, x_5, x_320);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; 
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
if (lean_obj_tag(x_322) == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
lean_dec(x_321);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_316);
x_324 = l_Lean_Meta_unfoldDefinition_x3f(x_316, x_2, x_3, x_4, x_5, x_323);
if (lean_obj_tag(x_324) == 0)
{
lean_object* x_325; 
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; 
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
x_327 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_311, x_1, x_316, x_2, x_3, x_4, x_5, x_326);
return x_327;
}
else
{
lean_object* x_328; lean_object* x_329; 
lean_dec(x_316);
lean_dec(x_1);
x_328 = lean_ctor_get(x_324, 1);
lean_inc(x_328);
lean_dec(x_324);
x_329 = lean_ctor_get(x_325, 0);
lean_inc(x_329);
lean_dec(x_325);
x_1 = x_329;
x_6 = x_328;
goto _start;
}
}
else
{
uint8_t x_331; 
lean_dec(x_316);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_331 = !lean_is_exclusive(x_324);
if (x_331 == 0)
{
return x_324;
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_332 = lean_ctor_get(x_324, 0);
x_333 = lean_ctor_get(x_324, 1);
lean_inc(x_333);
lean_inc(x_332);
lean_dec(x_324);
x_334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_334, 0, x_332);
lean_ctor_set(x_334, 1, x_333);
return x_334;
}
}
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_316);
x_335 = lean_ctor_get(x_321, 1);
lean_inc(x_335);
lean_dec(x_321);
x_336 = lean_ctor_get(x_322, 0);
lean_inc(x_336);
lean_dec(x_322);
x_337 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_311, x_1, x_336, x_2, x_3, x_4, x_5, x_335);
return x_337;
}
}
else
{
uint8_t x_338; 
lean_dec(x_316);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_338 = !lean_is_exclusive(x_321);
if (x_338 == 0)
{
return x_321;
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_339 = lean_ctor_get(x_321, 0);
x_340 = lean_ctor_get(x_321, 1);
lean_inc(x_340);
lean_inc(x_339);
lean_dec(x_321);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_339);
lean_ctor_set(x_341, 1, x_340);
return x_341;
}
}
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; 
lean_dec(x_316);
x_342 = lean_ctor_get(x_318, 1);
lean_inc(x_342);
lean_dec(x_318);
x_343 = lean_ctor_get(x_319, 0);
lean_inc(x_343);
lean_dec(x_319);
x_344 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_311, x_1, x_343, x_2, x_3, x_4, x_5, x_342);
return x_344;
}
}
else
{
uint8_t x_345; 
lean_dec(x_316);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_345 = !lean_is_exclusive(x_318);
if (x_345 == 0)
{
return x_318;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_346 = lean_ctor_get(x_318, 0);
x_347 = lean_ctor_get(x_318, 1);
lean_inc(x_347);
lean_inc(x_346);
lean_dec(x_318);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
return x_348;
}
}
}
else
{
uint8_t x_349; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_349 = !lean_is_exclusive(x_315);
if (x_349 == 0)
{
return x_315;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_315, 0);
x_351 = lean_ctor_get(x_315, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_315);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
else
{
lean_object* x_353; lean_object* x_354; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_353 = lean_ctor_get(x_313, 0);
lean_inc(x_353);
lean_dec(x_313);
x_354 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_314);
return x_354;
}
}
}
}
case 10:
{
lean_object* x_417; 
x_417 = lean_ctor_get(x_1, 1);
lean_inc(x_417);
lean_dec(x_1);
x_1 = x_417;
goto _start;
}
case 11:
{
uint8_t x_419; lean_object* x_420; lean_object* x_504; lean_object* x_505; 
x_504 = lean_mk_string("whnf");
x_505 = l_Lean_Core_checkMaxHeartbeats(x_504, x_4, x_5, x_6);
lean_dec(x_504);
if (lean_obj_tag(x_505) == 0)
{
lean_object* x_506; uint8_t x_507; 
x_506 = lean_ctor_get(x_505, 1);
lean_inc(x_506);
lean_dec(x_505);
x_507 = l_Lean_Expr_hasFVar(x_1);
if (x_507 == 0)
{
uint8_t x_508; 
x_508 = l_Lean_Expr_hasExprMVar(x_1);
if (x_508 == 0)
{
lean_object* x_509; lean_object* x_510; uint8_t x_511; lean_object* x_512; 
x_509 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_506);
x_510 = lean_ctor_get(x_509, 0);
lean_inc(x_510);
x_511 = lean_ctor_get_uint8(x_510, 5);
lean_dec(x_510);
x_512 = lean_box(x_511);
switch (lean_obj_tag(x_512)) {
case 2:
{
lean_object* x_513; uint8_t x_514; 
x_513 = lean_ctor_get(x_509, 1);
lean_inc(x_513);
lean_dec(x_509);
x_514 = 0;
x_419 = x_514;
x_420 = x_513;
goto block_503;
}
case 3:
{
lean_object* x_515; uint8_t x_516; 
x_515 = lean_ctor_get(x_509, 1);
lean_inc(x_515);
lean_dec(x_509);
x_516 = 0;
x_419 = x_516;
x_420 = x_515;
goto block_503;
}
default: 
{
lean_object* x_517; uint8_t x_518; 
lean_dec(x_512);
x_517 = lean_ctor_get(x_509, 1);
lean_inc(x_517);
lean_dec(x_509);
x_518 = 1;
x_419 = x_518;
x_420 = x_517;
goto block_503;
}
}
}
else
{
uint8_t x_519; 
x_519 = 0;
x_419 = x_519;
x_420 = x_506;
goto block_503;
}
}
else
{
uint8_t x_520; 
x_520 = 0;
x_419 = x_520;
x_420 = x_506;
goto block_503;
}
}
else
{
uint8_t x_521; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_521 = !lean_is_exclusive(x_505);
if (x_521 == 0)
{
return x_505;
}
else
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; 
x_522 = lean_ctor_get(x_505, 0);
x_523 = lean_ctor_get(x_505, 1);
lean_inc(x_523);
lean_inc(x_522);
lean_dec(x_505);
x_524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_524, 0, x_522);
lean_ctor_set(x_524, 1, x_523);
return x_524;
}
}
block_503:
{
lean_object* x_421; lean_object* x_422; 
if (x_419 == 0)
{
lean_object* x_464; 
x_464 = lean_box(0);
x_421 = x_464;
x_422 = x_420;
goto block_463;
}
else
{
lean_object* x_465; lean_object* x_466; uint8_t x_467; lean_object* x_468; 
x_465 = l_Lean_Meta_getConfig(x_2, x_3, x_4, x_5, x_420);
x_466 = lean_ctor_get(x_465, 0);
lean_inc(x_466);
x_467 = lean_ctor_get_uint8(x_466, 5);
lean_dec(x_466);
x_468 = lean_box(x_467);
switch (lean_obj_tag(x_468)) {
case 0:
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_469 = lean_ctor_get(x_465, 1);
lean_inc(x_469);
lean_dec(x_465);
x_470 = lean_st_ref_get(x_5, x_469);
x_471 = lean_ctor_get(x_470, 1);
lean_inc(x_471);
lean_dec(x_470);
x_472 = lean_st_ref_get(x_3, x_471);
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
lean_dec(x_472);
x_475 = lean_ctor_get(x_473, 1);
lean_inc(x_475);
lean_dec(x_473);
x_476 = lean_ctor_get(x_475, 4);
lean_inc(x_476);
lean_dec(x_475);
x_477 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_476, x_1);
x_421 = x_477;
x_422 = x_474;
goto block_463;
}
case 1:
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; 
x_478 = lean_ctor_get(x_465, 1);
lean_inc(x_478);
lean_dec(x_465);
x_479 = lean_st_ref_get(x_5, x_478);
x_480 = lean_ctor_get(x_479, 1);
lean_inc(x_480);
lean_dec(x_479);
x_481 = lean_st_ref_get(x_3, x_480);
x_482 = lean_ctor_get(x_481, 0);
lean_inc(x_482);
x_483 = lean_ctor_get(x_481, 1);
lean_inc(x_483);
lean_dec(x_481);
x_484 = lean_ctor_get(x_482, 1);
lean_inc(x_484);
lean_dec(x_482);
x_485 = lean_ctor_get(x_484, 3);
lean_inc(x_485);
lean_dec(x_484);
x_486 = l_Std_PersistentHashMap_find_x3f___at___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___spec__1(x_485, x_1);
x_421 = x_486;
x_422 = x_483;
goto block_463;
}
default: 
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; 
lean_dec(x_468);
x_487 = lean_ctor_get(x_465, 1);
lean_inc(x_487);
lean_dec(x_465);
x_488 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_488, 0, lean_box(0));
x_489 = lean_mk_string("Lean.Meta.WHNF");
x_490 = lean_mk_string("_private.Lean.Meta.WHNF.0.Lean.Meta.cached?");
x_491 = lean_unsigned_to_nat(569u);
x_492 = lean_unsigned_to_nat(34u);
x_493 = lean_mk_string("unreachable code has been reached");
x_494 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_489, x_490, x_491, x_492, x_493);
lean_dec(x_493);
lean_dec(x_490);
lean_dec(x_489);
x_495 = lean_panic_fn(x_488, x_494);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_496 = lean_apply_5(x_495, x_2, x_3, x_4, x_5, x_487);
if (lean_obj_tag(x_496) == 0)
{
lean_object* x_497; lean_object* x_498; 
x_497 = lean_ctor_get(x_496, 0);
lean_inc(x_497);
x_498 = lean_ctor_get(x_496, 1);
lean_inc(x_498);
lean_dec(x_496);
x_421 = x_497;
x_422 = x_498;
goto block_463;
}
else
{
uint8_t x_499; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_499 = !lean_is_exclusive(x_496);
if (x_499 == 0)
{
return x_496;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; 
x_500 = lean_ctor_get(x_496, 0);
x_501 = lean_ctor_get(x_496, 1);
lean_inc(x_501);
lean_inc(x_500);
lean_dec(x_496);
x_502 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_502, 0, x_500);
lean_ctor_set(x_502, 1, x_501);
return x_502;
}
}
}
}
}
block_463:
{
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_423; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_423 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfCore___spec__2(x_1, x_2, x_3, x_4, x_5, x_422);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_424 = lean_ctor_get(x_423, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_423, 1);
lean_inc(x_425);
lean_dec(x_423);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_424);
x_426 = l_Lean_Meta_reduceNat_x3f(x_424, x_2, x_3, x_4, x_5, x_425);
if (lean_obj_tag(x_426) == 0)
{
lean_object* x_427; 
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
if (lean_obj_tag(x_427) == 0)
{
lean_object* x_428; lean_object* x_429; 
x_428 = lean_ctor_get(x_426, 1);
lean_inc(x_428);
lean_dec(x_426);
lean_inc(x_424);
x_429 = l_Lean_Meta_reduceNative_x3f(x_424, x_2, x_3, x_4, x_5, x_428);
if (lean_obj_tag(x_429) == 0)
{
lean_object* x_430; 
x_430 = lean_ctor_get(x_429, 0);
lean_inc(x_430);
if (lean_obj_tag(x_430) == 0)
{
lean_object* x_431; lean_object* x_432; 
x_431 = lean_ctor_get(x_429, 1);
lean_inc(x_431);
lean_dec(x_429);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_424);
x_432 = l_Lean_Meta_unfoldDefinition_x3f(x_424, x_2, x_3, x_4, x_5, x_431);
if (lean_obj_tag(x_432) == 0)
{
lean_object* x_433; 
x_433 = lean_ctor_get(x_432, 0);
lean_inc(x_433);
if (lean_obj_tag(x_433) == 0)
{
lean_object* x_434; lean_object* x_435; 
x_434 = lean_ctor_get(x_432, 1);
lean_inc(x_434);
lean_dec(x_432);
x_435 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_419, x_1, x_424, x_2, x_3, x_4, x_5, x_434);
return x_435;
}
else
{
lean_object* x_436; lean_object* x_437; 
lean_dec(x_424);
lean_dec(x_1);
x_436 = lean_ctor_get(x_432, 1);
lean_inc(x_436);
lean_dec(x_432);
x_437 = lean_ctor_get(x_433, 0);
lean_inc(x_437);
lean_dec(x_433);
x_1 = x_437;
x_6 = x_436;
goto _start;
}
}
else
{
uint8_t x_439; 
lean_dec(x_424);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_439 = !lean_is_exclusive(x_432);
if (x_439 == 0)
{
return x_432;
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; 
x_440 = lean_ctor_get(x_432, 0);
x_441 = lean_ctor_get(x_432, 1);
lean_inc(x_441);
lean_inc(x_440);
lean_dec(x_432);
x_442 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_442, 0, x_440);
lean_ctor_set(x_442, 1, x_441);
return x_442;
}
}
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_424);
x_443 = lean_ctor_get(x_429, 1);
lean_inc(x_443);
lean_dec(x_429);
x_444 = lean_ctor_get(x_430, 0);
lean_inc(x_444);
lean_dec(x_430);
x_445 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_419, x_1, x_444, x_2, x_3, x_4, x_5, x_443);
return x_445;
}
}
else
{
uint8_t x_446; 
lean_dec(x_424);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_446 = !lean_is_exclusive(x_429);
if (x_446 == 0)
{
return x_429;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_ctor_get(x_429, 0);
x_448 = lean_ctor_get(x_429, 1);
lean_inc(x_448);
lean_inc(x_447);
lean_dec(x_429);
x_449 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_449, 0, x_447);
lean_ctor_set(x_449, 1, x_448);
return x_449;
}
}
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; 
lean_dec(x_424);
x_450 = lean_ctor_get(x_426, 1);
lean_inc(x_450);
lean_dec(x_426);
x_451 = lean_ctor_get(x_427, 0);
lean_inc(x_451);
lean_dec(x_427);
x_452 = l___private_Lean_Meta_WHNF_0__Lean_Meta_cache(x_419, x_1, x_451, x_2, x_3, x_4, x_5, x_450);
return x_452;
}
}
else
{
uint8_t x_453; 
lean_dec(x_424);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_453 = !lean_is_exclusive(x_426);
if (x_453 == 0)
{
return x_426;
}
else
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; 
x_454 = lean_ctor_get(x_426, 0);
x_455 = lean_ctor_get(x_426, 1);
lean_inc(x_455);
lean_inc(x_454);
lean_dec(x_426);
x_456 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_455);
return x_456;
}
}
}
else
{
uint8_t x_457; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_457 = !lean_is_exclusive(x_423);
if (x_457 == 0)
{
return x_423;
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; 
x_458 = lean_ctor_get(x_423, 0);
x_459 = lean_ctor_get(x_423, 1);
lean_inc(x_459);
lean_inc(x_458);
lean_dec(x_423);
x_460 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_460, 0, x_458);
lean_ctor_set(x_460, 1, x_459);
return x_460;
}
}
}
else
{
lean_object* x_461; lean_object* x_462; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_461 = lean_ctor_get(x_421, 0);
lean_inc(x_461);
lean_dec(x_421);
x_462 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_462, 0, x_461);
lean_ctor_set(x_462, 1, x_422);
return x_462;
}
}
}
}
default: 
{
lean_object* x_525; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_525 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_525, 0, x_1);
lean_ctor_set(x_525, 1, x_6);
return x_525;
}
}
}
}
lean_object* l_Lean_Meta_whnfImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at_Lean_Meta_whnfImp___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_setWHNFRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Lean_Meta_whnfRef;
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_whnfImp), 6, 0);
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
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_WHNF___hyg_5565_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Meta");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("whnf");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_Lean_registerTraceClass(x_6, x_1);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_ToExpr(lean_object*);
lean_object* initialize_Lean_AuxRecursor(lean_object*);
lean_object* initialize_Lean_ProjFns(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Lean_Meta_GetConst(lean_object*);
lean_object* initialize_Lean_Meta_Match_MatcherInfo(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_WHNF(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ToExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AuxRecursor(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_GetConst(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherInfo(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_smartUnfoldingSuffix = _init_l_Lean_Meta_smartUnfoldingSuffix();
lean_mark_persistent(l_Lean_Meta_smartUnfoldingSuffix);
res = l_Lean_Meta_initFn____x40_Lean_Meta_WHNF___hyg_13_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_smartUnfolding = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_smartUnfolding);
lean_dec_ref(res);
res = l_Lean_Meta_setWHNFRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_initFn____x40_Lean_Meta_WHNF___hyg_5565_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
