// Lean compiler output
// Module: Lean.Meta.IndPredBelow
// Imports: Init Lean.Util.Constructions Lean.Meta.Transform Lean.Meta.Tactic Lean.Meta.Match Lean.Meta.Reduce
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
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_introNPRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__2(lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkConstructor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoInduct___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoForKernelRec___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_whnf___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addMotives(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_ConstantInfo_numLevelParams(lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkHeader___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_cases_on(lean_object*, lean_object*);
lean_object* l_instInhabitedDepArrow___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__1(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getMkMatcherInputInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__2(lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx_match__1(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
lean_object* l_Lean_commitWhen___at_Lean_Meta_elimEmptyInductive___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__2___boxed(lean_object**);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkContext___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_zipWith___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_rebuild___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_instInhabitedVariables;
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(size_t, size_t, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__2(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkConstructor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOn___at_Lean_Meta_IndPredBelow_mkBelow___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__1(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__1(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible_match__1(lean_object*);
lean_object* l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_anyM___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Pattern_toMessageData(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__3___rarg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Pattern_toExpr_visit(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecls_loop___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_zip___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_instMonadLCtxMetaM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__1___boxed(lean_object**);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__2(lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_rebuild___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(lean_object*);
lean_object* l_List_forM___at_Lean_Meta_IndPredBelow_proveBrecOn___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__2(lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_Match_Alt_toMessageData___spec__2(lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOn___at_Lean_Meta_IndPredBelow_mkBelow___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_IndPredBelow_mkBelowDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_isInductivePredicate_visit(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateExprMVars___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__1(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecls___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5(size_t, size_t, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9___boxed(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Meta_IndPredBelow_proveBrecOn___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining_match__1(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkIndValConst(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11___boxed__const__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__1(lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkInductiveType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_anyM___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3___rarg(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__1(lean_object*);
lean_object* l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(lean_object*, lean_object*, lean_object*);
extern uint8_t l_Lean_instInhabitedBinderInfo;
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___boxed__const__1;
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal___boxed(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__3(lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedPattern;
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_initFn____x40_Lean_Meta_IndPredBelow___hyg_5254_(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_initFn____x40_Lean_Meta_IndPredBelow___hyg_5_(lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_maxBackwardChainingDepth;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkContext___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelow___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_induction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_rebuild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives_match__1___rarg(lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkBelow___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx_match__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_binderInfo(lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives_match__1(lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_brecOnSuffix;
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern_match__1(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__1(lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_mkConstWithLevelParams___spec__1(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelow___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__3(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_rebuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkBelow___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__2___boxed(lean_object**);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsD___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkInductiveType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__2(lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_initFn____x40_Lean_Meta_IndPredBelow___hyg_5_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_box(0);
x_3 = lean_mk_string("maxBackwardChainingDepth");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(10u);
x_6 = lean_mk_string("");
x_7 = lean_mk_string("The maximum search depth used in the backwards chaining part of the proof of `brecOn` for inductive predicates.");
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(x_4, x_8, x_1);
lean_dec(x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_IndPredBelow_instInhabitedVariables() {
_start:
{
lean_object* x_1; lean_object* x_2; uint64_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
x_3 = lean_uint64_of_nat(x_1);
x_4 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set_uint64(x_4, sizeof(void*)*1, x_3);
lean_inc_n(x_2, 4);
x_5 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_2);
lean_ctor_set(x_5, 4, x_2);
lean_ctor_set(x_5, 5, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkContext_addMotives_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_lt(x_9, x_8);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_box(0);
x_12 = lean_mk_string("motive");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_13, x_5, x_6, x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_nat_add(x_2, x_9);
x_16 = l_Nat_repr(x_15);
x_17 = lean_mk_string("motive_");
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = lean_mk_string("");
x_20 = lean_string_append(x_18, x_19);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = lean_name_mk_string(x_21, x_20);
x_23 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_22, x_5, x_6, x_7);
return x_23;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_IndPredBelow_mkContext_motiveName(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_10 = l_Array_insertAt___rarg(x_1, x_2, x_4);
x_11 = 0;
x_12 = 1;
x_13 = l_Lean_Meta_mkForallFVars(x_10, x_3, x_11, x_12, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
lean_inc(x_4);
x_12 = l_Array_toSubarray___rarg(x_4, x_11, x_1);
x_13 = l_Array_ofSubarray___rarg(x_12);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_13, x_11, x_2, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__1___boxed), 9, 3);
lean_closure_set(x_17, 0, x_4);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_5);
x_18 = 1;
x_19 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_3, x_18, x_15, x_17, x_6, x_7, x_8, x_9, x_16);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_3 == x_4;
if (x_11 == 0)
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = 1;
x_13 = x_3 - x_12;
x_14 = lean_array_uget(x_2, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__2), 10, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_16);
lean_closure_set(x_17, 2, x_15);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_18 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_5, x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_3 = x_13;
x_5 = x_19;
x_10 = x_20;
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
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
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
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_3 == x_4;
if (x_11 == 0)
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = 1;
x_13 = x_3 - x_12;
x_14 = lean_array_uget(x_2, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__2), 10, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_16);
lean_closure_set(x_17, 2, x_15);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_18 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_5, x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_3 = x_13;
x_5 = x_19;
x_10 = x_20;
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
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
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
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_le(x_9, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_9);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1(x_2, x_1, x_14, x_15, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_lt(x_17, x_9);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_21 = 0;
x_22 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__2(x_2, x_1, x_20, x_21, x_3, x_4, x_5, x_6, x_7, x_8);
return x_22;
}
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkContext_addMotives___spec__2(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_addMotives___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkContext_addMotives(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkIndValConst(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_4);
x_6 = l_Lean_mkConst(x_3, x_5);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = l_Lean_Expr_fvarId_x21(x_9);
lean_dec(x_9);
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = 1;
x_15 = x_2 + x_14;
x_16 = x_13;
x_17 = lean_array_uset(x_8, x_2, x_16);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
}
lean_object* l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
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
lean_object* l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkHeader___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = l_Lean_Meta_IndPredBelow_mkContext_mkIndValConst(x_1);
x_10 = l_Lean_mkAppN(x_9, x_2);
x_11 = l_Lean_Meta_mkArrow(x_10, x_3, x_4, x_5, x_6, x_7, x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_get_size(x_2);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
lean_inc(x_2);
x_17 = x_2;
x_18 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__1(x_15, x_16, x_17);
x_19 = x_18;
x_20 = 0;
x_21 = 1;
x_22 = lean_box(x_20);
x_23 = lean_box(x_21);
x_24 = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___boxed), 9, 4);
lean_closure_set(x_24, 0, x_2);
lean_closure_set(x_24, 1, x_12);
lean_closure_set(x_24, 2, x_22);
lean_closure_set(x_24, 3, x_23);
x_25 = l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg(x_19, x_24, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_19);
return x_25;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkContext_mkHeader___lambda__1), 8, 1);
lean_closure_set(x_11, 0, x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_10, x_11, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_IndPredBelow_mkContext_addMotives(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_mkHeader___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkContext_mkHeader(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_9 = l_Lean_Meta_IndPredBelow_mkContext_mkIndValConst(x_1);
x_10 = l_Lean_mkAppN(x_9, x_2);
x_11 = l_Lean_levelZero;
x_12 = l_Lean_mkSort(x_11);
x_13 = l_Lean_Meta_mkArrow(x_10, x_12, x_4, x_5, x_6, x_7, x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 0;
x_17 = 1;
x_18 = l_Lean_Meta_mkForallFVars(x_2, x_14, x_16, x_17, x_4, x_5, x_6, x_7, x_15);
return x_18;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkContext_motiveType___lambda__1___boxed), 8, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_8, x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext_motiveType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkContext_motiveType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_2 < x_1;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = x_3;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = x_12;
x_16 = l_Lean_getConstInfoInduct___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoForKernelRec___spec__1(x_15, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_2 + x_19;
x_21 = x_17;
x_22 = lean_array_uset(x_14, x_2, x_21);
x_2 = x_20;
x_3 = x_22;
x_8 = x_18;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_14);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__2(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = x_12;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Meta_IndPredBelow_mkContext_motiveType(x_15, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_2 + x_19;
x_21 = x_17;
x_22 = lean_array_uset(x_14, x_2, x_21);
x_2 = x_20;
x_3 = x_22;
x_8 = x_18;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkContext___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = lean_array_fget(x_2, x_4);
x_17 = l_Lean_Meta_IndPredBelow_mkContext_motiveName(x_1, x_4, x_7, x_8, x_9, x_10, x_11);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_16);
x_21 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
x_22 = lean_array_push(x_6, x_20);
x_3 = x_15;
x_4 = x_21;
x_5 = lean_box(0);
x_6 = x_22;
x_11 = x_19;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_6);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = x_4 < x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_13 = x_5;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = x_15;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_IndPredBelow_mkContext_mkHeader(x_2, x_11, x_18, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = x_4 + x_22;
x_24 = x_20;
x_25 = lean_array_uset(x_17, x_4, x_24);
x_4 = x_23;
x_5 = x_25;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_box(0);
x_11 = lean_mk_string("below");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = l_Lean_Name_append(x_9, x_12);
lean_dec(x_9);
x_14 = 1;
x_15 = x_2 + x_14;
x_16 = x_13;
x_17 = lean_array_uset(x_8, x_2, x_16);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkContext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getConstInfoInduct___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoForKernelRec___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_10);
x_11 = l_List_redLength___rarg(x_10);
x_12 = lean_mk_empty_array_with_capacity(x_11);
lean_dec(x_11);
x_13 = l_List_toArrayAux___rarg(x_10, x_12);
x_14 = lean_array_get_size(x_13);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = x_13;
x_18 = lean_box_usize(x_15);
x_19 = l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1;
lean_inc(x_17);
x_20 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__1___boxed), 8, 3);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
lean_closure_set(x_20, 2, x_17);
x_21 = x_20;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_22 = lean_apply_5(x_21, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_23);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
lean_inc(x_23);
x_27 = x_23;
x_28 = lean_box_usize(x_26);
x_29 = l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1;
lean_inc(x_27);
x_30 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__2___boxed), 8, 3);
lean_closure_set(x_30, 0, x_28);
lean_closure_set(x_30, 1, x_29);
lean_closure_set(x_30, 2, x_27);
x_31 = x_30;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_32 = lean_apply_5(x_31, x_2, x_3, x_4, x_5, x_24);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_array_get_size(x_33);
x_36 = lean_mk_empty_array_with_capacity(x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkContext___spec__3(x_33, x_33, x_35, x_37, lean_box(0), x_36, x_2, x_3, x_4, x_5, x_34);
lean_dec(x_33);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_8, 1);
lean_inc(x_41);
x_42 = lean_box_usize(x_26);
x_43 = l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1;
lean_inc(x_39);
x_44 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__4___boxed), 10, 5);
lean_closure_set(x_44, 0, x_8);
lean_closure_set(x_44, 1, x_39);
lean_closure_set(x_44, 2, x_42);
lean_closure_set(x_44, 3, x_43);
lean_closure_set(x_44, 4, x_27);
x_45 = x_44;
x_46 = lean_apply_5(x_45, x_2, x_3, x_4, x_5, x_40);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5(x_15, x_16, x_17);
x_50 = x_49;
x_51 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_51, 0, x_39);
lean_ctor_set(x_51, 1, x_23);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set(x_51, 3, x_48);
lean_ctor_set(x_51, 4, x_41);
lean_ctor_set(x_46, 0, x_51);
return x_46;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_46, 0);
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_46);
x_54 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5(x_15, x_16, x_17);
x_55 = x_54;
x_56 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_56, 0, x_39);
lean_ctor_set(x_56, 1, x_23);
lean_ctor_set(x_56, 2, x_55);
lean_ctor_set(x_56, 3, x_52);
lean_ctor_set(x_56, 4, x_41);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_53);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_23);
lean_dec(x_17);
x_58 = !lean_is_exclusive(x_46);
if (x_58 == 0)
{
return x_46;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_46, 0);
x_60 = lean_ctor_get(x_46, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_46);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_32);
if (x_62 == 0)
{
return x_32;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_32, 0);
x_64 = lean_ctor_get(x_32, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_32);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_22);
if (x_66 == 0)
{
return x_22;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_22, 0);
x_68 = lean_ctor_get(x_22, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_22);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_70 = !lean_is_exclusive(x_7);
if (x_70 == 0)
{
return x_7;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_7, 0);
x_72 = lean_ctor_get(x_7, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_7);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__2(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkContext___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkContext___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__4(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkContext___spec__5(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_checkCount_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = l_Lean_mkConst(x_10, x_1);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_instInhabitedInductiveVal;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_get(x_5, x_4, x_6);
lean_dec(x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_9);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_array_get_size(x_12);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = x_12;
x_17 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___spec__1(x_10, x_14, x_15, x_16);
x_18 = x_17;
x_19 = l_Lean_Expr_replaceFVars(x_3, x_11, x_18);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___spec__1(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_rebuild___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_array_set(x_6, x_7, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_7, x_16);
lean_dec(x_7);
x_5 = x_13;
x_6 = x_15;
x_7 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; 
lean_dec(x_7);
lean_dec(x_5);
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = l_Lean_instInhabitedInductiveVal;
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_array_get(x_22, x_21, x_23);
lean_dec(x_21);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_26);
x_28 = l_Lean_mkConst(x_20, x_27);
x_29 = lean_ctor_get(x_4, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_4, 3);
lean_inc(x_30);
lean_inc(x_29);
x_31 = l_Array_append___rarg(x_29, x_30);
lean_dec(x_30);
x_32 = l_Lean_mkAppN(x_28, x_31);
lean_dec(x_31);
x_33 = lean_ctor_get(x_4, 1);
lean_inc(x_33);
x_34 = l_Lean_instInhabitedExpr;
x_35 = lean_array_get(x_34, x_33, x_2);
lean_dec(x_33);
x_36 = lean_ctor_get(x_4, 4);
lean_inc(x_36);
x_37 = l_Array_append___rarg(x_29, x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_1, 4);
lean_inc(x_38);
x_39 = lean_array_get_size(x_6);
x_40 = l_Array_toSubarray___rarg(x_6, x_38, x_39);
x_41 = l_Array_ofSubarray___rarg(x_40);
lean_dec(x_40);
x_42 = l_Array_append___rarg(x_37, x_41);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_mk_empty_array_with_capacity(x_43);
x_45 = lean_array_push(x_44, x_32);
x_46 = l_Array_append___rarg(x_42, x_45);
lean_dec(x_45);
x_47 = l_Lean_mkAppN(x_35, x_46);
lean_dec(x_46);
x_48 = lean_ctor_get(x_4, 0);
lean_inc(x_48);
x_49 = 0;
x_50 = 1;
x_51 = l_Lean_Meta_mkForallFVars(x_48, x_47, x_49, x_50, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars(x_1, x_4, x_53);
lean_dec(x_53);
lean_dec(x_4);
lean_ctor_set(x_51, 0, x_54);
return x_51;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = l_Lean_Meta_IndPredBelow_mkCtorType_replaceTempVars(x_1, x_4, x_55);
lean_dec(x_55);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
uint8_t x_59; 
lean_dec(x_4);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_51);
if (x_59 == 0)
{
return x_51;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_51, 0);
x_61 = lean_ctor_get(x_51, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_51);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_rebuild(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_4, 5);
lean_inc(x_10);
x_11 = l_Lean_levelZero;
x_12 = l_Lean_mkSort(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Expr_getAppNumArgsAux(x_10, x_13);
lean_inc(x_14);
x_15 = lean_mk_array(x_14, x_12);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_14, x_16);
lean_dec(x_14);
x_18 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_rebuild___spec__1(x_1, x_2, x_3, x_4, x_10, x_15, x_17, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_rebuild___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_rebuild___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_rebuild___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_IndPredBelow_mkCtorType_rebuild(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getLocalDecl(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_LocalDecl_userName(x_8);
lean_dec(x_8);
x_11 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_10, x_4, x_5, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (lean_obj_tag(x_8) == 5)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_array_set(x_9, x_10, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_10, x_19);
lean_dec(x_10);
x_5 = lean_box(0);
x_8 = x_16;
x_9 = x_18;
x_10 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; lean_object* x_37; 
lean_dec(x_10);
lean_dec(x_8);
lean_inc(x_4);
x_22 = l_Lean_mkAppN(x_4, x_7);
x_23 = lean_ctor_get(x_2, 4);
x_24 = l_Lean_instInhabitedExpr;
x_25 = lean_array_get(x_24, x_23, x_3);
x_26 = lean_ctor_get(x_1, 4);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_array_get_size(x_9);
x_28 = l_Array_toSubarray___rarg(x_9, x_26, x_27);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_mk_empty_array_with_capacity(x_29);
x_31 = lean_array_push(x_30, x_22);
x_32 = l_Array_ofSubarray___rarg(x_28);
lean_dec(x_28);
x_33 = l_Array_append___rarg(x_32, x_31);
lean_dec(x_31);
x_34 = l_Lean_mkAppN(x_25, x_33);
lean_dec(x_33);
x_35 = 0;
x_36 = 1;
lean_inc(x_11);
x_37 = l_Lean_Meta_mkForallFVars(x_7, x_34, x_35, x_36, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Expr_fvarId_x21(x_4);
lean_inc(x_11);
x_41 = l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName(x_40, x_11, x_12, x_13, x_14, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Expr_binderInfo(x_4);
lean_dec(x_4);
x_45 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_42, x_44, x_38, x_6, x_11, x_12, x_13, x_14, x_43);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_38);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 0);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_41);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_37);
if (x_50 == 0)
{
return x_37;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_37, 0);
x_52 = lean_ctor_get(x_37, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_37);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = l_Lean_levelZero;
x_14 = l_Lean_mkSort(x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Expr_getAppNumArgsAux(x_7, x_15);
lean_inc(x_16);
x_17 = lean_mk_array(x_16, x_14);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_16, x_18);
lean_dec(x_16);
x_20 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___spec__1(x_1, x_2, x_3, x_4, lean_box(0), x_5, x_6, x_7, x_17, x_19, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___lambda__1___boxed), 12, 5);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_7);
x_14 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_5, x_13, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
uint8_t l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_name_eq(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (lean_obj_tag(x_8) == 5)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_array_set(x_9, x_10, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_10, x_19);
lean_dec(x_10);
x_4 = lean_box(0);
x_8 = x_16;
x_9 = x_18;
x_10 = x_20;
goto _start;
}
else
{
lean_object* x_22; 
lean_dec(x_10);
x_22 = l_Lean_Expr_constName_x3f(x_8);
lean_dec(x_8);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_mk_string("only trivial inductive applications supported in premises:");
x_24 = l_Lean_stringToMessageData(x_23);
lean_dec(x_23);
x_25 = l_Lean_indentExpr(x_7);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg(x_29, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_22, 0);
lean_inc(x_31);
lean_dec(x_22);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1___boxed), 2, 1);
lean_closure_set(x_33, 0, x_31);
x_34 = lean_array_get_size(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Array_findIdx_x3f_loop___rarg(x_32, x_33, x_34, x_35, lean_box(0));
lean_dec(x_32);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = lean_mk_string("only trivial inductive applications supported in premises:");
x_38 = l_Lean_stringToMessageData(x_37);
lean_dec(x_37);
x_39 = l_Lean_indentExpr(x_7);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_string("");
x_42 = l_Lean_stringToMessageData(x_41);
lean_dec(x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg(x_43, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; uint8_t x_64; lean_object* x_65; 
lean_dec(x_7);
x_45 = lean_ctor_get(x_36, 0);
lean_inc(x_45);
lean_dec(x_36);
lean_inc(x_3);
x_46 = l_Lean_mkAppN(x_3, x_6);
x_47 = lean_ctor_get(x_2, 1);
lean_inc(x_47);
x_48 = l_Lean_instInhabitedExpr;
x_49 = lean_array_get(x_48, x_47, x_45);
lean_dec(x_47);
x_50 = lean_ctor_get(x_2, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_2, 4);
lean_inc(x_51);
lean_dec(x_2);
x_52 = l_Array_append___rarg(x_50, x_51);
lean_dec(x_51);
x_53 = lean_ctor_get(x_1, 4);
lean_inc(x_53);
lean_dec(x_1);
x_54 = lean_array_get_size(x_9);
x_55 = l_Array_toSubarray___rarg(x_9, x_53, x_54);
x_56 = l_Array_ofSubarray___rarg(x_55);
lean_dec(x_55);
x_57 = l_Array_append___rarg(x_52, x_56);
lean_dec(x_56);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_array_push(x_59, x_46);
x_61 = l_Array_append___rarg(x_57, x_60);
lean_dec(x_60);
x_62 = l_Lean_mkAppN(x_49, x_61);
lean_dec(x_61);
x_63 = 0;
x_64 = 1;
lean_inc(x_11);
x_65 = l_Lean_Meta_mkForallFVars(x_6, x_62, x_63, x_64, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_Expr_fvarId_x21(x_3);
lean_inc(x_11);
x_69 = l_Lean_Meta_IndPredBelow_mkCtorType_copyVarName(x_68, x_11, x_12, x_13, x_14, x_67);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Lean_Expr_binderInfo(x_3);
lean_dec(x_3);
x_73 = lean_apply_1(x_5, x_45);
x_74 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_70, x_72, x_66, x_73, x_11, x_12, x_13, x_14, x_71);
return x_74;
}
else
{
uint8_t x_75; 
lean_dec(x_66);
lean_dec(x_45);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_3);
x_75 = !lean_is_exclusive(x_69);
if (x_75 == 0)
{
return x_69;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_69, 0);
x_77 = lean_ctor_get(x_69, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_69);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_45);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_3);
x_79 = !lean_is_exclusive(x_65);
if (x_79 == 0)
{
return x_65;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_65, 0);
x_81 = lean_ctor_get(x_65, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_65);
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
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = l_Lean_levelZero;
x_13 = l_Lean_mkSort(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Expr_getAppNumArgsAux(x_6, x_14);
lean_inc(x_15);
x_16 = lean_mk_array(x_15, x_13);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_15, x_17);
lean_dec(x_15);
lean_inc(x_6);
x_19 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3(x_1, x_2, x_3, lean_box(0), x_4, x_5, x_6, x_6, x_16, x_18, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___lambda__1), 11, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_6);
x_13 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_4, x_12, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = lean_apply_7(x_2, x_5, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_8(x_1, x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___boxed), 11, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_push(x_1, x_7);
x_16 = l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4(x_2, x_3, x_4, x_5, x_15, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_6) == 6)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 2);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_18 = lean_expr_instantiate_rev(x_15, x_5);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = (uint8_t)((x_17 << 24) >> 61);
x_23 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4___lambda__1), 14, 6);
lean_closure_set(x_23, 0, x_5);
lean_closure_set(x_23, 1, x_1);
lean_closure_set(x_23, 2, x_2);
lean_closure_set(x_23, 3, x_3);
lean_closure_set(x_23, 4, x_4);
lean_closure_set(x_23, 5, x_16);
x_24 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg(x_14, x_22, x_20, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_16);
lean_dec(x_14);
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
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_expr_instantiate_rev(x_6, x_5);
lean_dec(x_6);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_30 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = 0;
x_34 = 1;
lean_inc(x_9);
x_35 = l_Lean_Meta_mkLambdaFVars(x_5, x_31, x_33, x_34, x_9, x_10, x_11, x_12, x_32);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_36, x_7, x_8, x_9, x_10, x_11, x_12, x_37);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
return x_35;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_35, 0);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_35);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
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
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_30);
if (x_43 == 0)
{
return x_30;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_30, 0);
x_45 = lean_ctor_get(x_30, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_30);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg___boxed), 11, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_push(x_1, x_7);
x_16 = l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5(x_2, x_3, x_4, x_5, x_15, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
}
lean_object* l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_6) == 7)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 2);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_18 = lean_expr_instantiate_rev(x_15, x_5);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = (uint8_t)((x_17 << 24) >> 61);
x_23 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5___lambda__1), 14, 6);
lean_closure_set(x_23, 0, x_5);
lean_closure_set(x_23, 1, x_1);
lean_closure_set(x_23, 2, x_2);
lean_closure_set(x_23, 3, x_3);
lean_closure_set(x_23, 4, x_4);
lean_closure_set(x_23, 5, x_16);
x_24 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg(x_14, x_22, x_20, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_16);
lean_dec(x_14);
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
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_expr_instantiate_rev(x_6, x_5);
lean_dec(x_6);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_30 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = 0;
x_34 = 1;
lean_inc(x_9);
x_35 = l_Lean_Meta_mkForallFVars(x_5, x_31, x_33, x_34, x_9, x_10, x_11, x_12, x_32);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_36, x_7, x_8, x_9, x_10, x_11, x_12, x_37);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
return x_35;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_35, 0);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_35);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
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
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_30);
if (x_43 == 0)
{
return x_30;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_30, 0);
x_45 = lean_ctor_get(x_30, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_30);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9___rarg), 11, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_push(x_1, x_7);
x_16 = l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6(x_2, x_3, x_4, x_5, x_15, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_6) == 8)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 3);
lean_inc(x_17);
lean_dec(x_6);
x_18 = lean_expr_instantiate_rev(x_15, x_5);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_expr_instantiate_rev(x_16, x_5);
lean_dec(x_16);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_23 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_22, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6___lambda__1), 14, 6);
lean_closure_set(x_26, 0, x_5);
lean_closure_set(x_26, 1, x_1);
lean_closure_set(x_26, 2, x_2);
lean_closure_set(x_26, 3, x_3);
lean_closure_set(x_26, 4, x_4);
lean_closure_set(x_26, 5, x_17);
x_27 = l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9___rarg(x_14, x_20, x_24, x_26, x_7, x_8, x_9, x_10, x_11, x_12, x_25);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
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
lean_dec(x_1);
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
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
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
lean_dec(x_1);
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
lean_object* x_36; lean_object* x_37; 
x_36 = lean_expr_instantiate_rev(x_6, x_5);
lean_dec(x_6);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_37 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_36, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = 0;
x_41 = 1;
lean_inc(x_9);
x_42 = l_Lean_Meta_mkLambdaFVars(x_5, x_38, x_40, x_41, x_9, x_10, x_11, x_12, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_43, x_7, x_8, x_9, x_10, x_11, x_12, x_44);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_42);
if (x_46 == 0)
{
return x_42;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_42, 0);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_42);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
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
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_37);
if (x_50 == 0)
{
return x_37;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_37, 0);
x_52 = lean_ctor_get(x_37, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_37);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = x_6 < x_5;
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = x_7;
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_uget(x_7, x_6);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_array_uset(x_7, x_6, x_19);
x_21 = x_18;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = x_6 + x_25;
x_27 = x_23;
x_28 = lean_array_uset(x_20, x_6, x_27);
x_6 = x_26;
x_7 = x_28;
x_14 = x_24;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_22);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_array_set(x_6, x_7, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_7, x_18);
lean_dec(x_7);
x_5 = x_15;
x_6 = x_17;
x_7 = x_19;
goto _start;
}
else
{
lean_object* x_21; 
lean_dec(x_7);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_array_get_size(x_6);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = x_6;
x_27 = lean_box_usize(x_25);
x_28 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11___boxed__const__1;
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__10___boxed), 14, 7);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_2);
lean_closure_set(x_29, 2, x_3);
lean_closure_set(x_29, 3, x_4);
lean_closure_set(x_29, 4, x_27);
lean_closure_set(x_29, 5, x_28);
lean_closure_set(x_29, 6, x_26);
x_30 = x_29;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_31 = lean_apply_7(x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_mkAppN(x_22, x_32);
lean_dec(x_32);
x_35 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_34, x_8, x_9, x_10, x_11, x_12, x_13, x_33);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_21);
if (x_40 == 0)
{
return x_21;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_21, 0);
x_42 = lean_ctor_get(x_21, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_21);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
lean_object* l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12___rarg), 9, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_ctor_set(x_8, 1, x_12);
x_15 = lean_apply_7(x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 2);
x_18 = lean_ctor_get(x_8, 3);
x_19 = lean_ctor_get(x_8, 4);
x_20 = lean_ctor_get(x_8, 5);
x_21 = lean_ctor_get(x_8, 6);
x_22 = lean_ctor_get(x_8, 7);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_12);
lean_ctor_set(x_23, 2, x_17);
lean_ctor_set(x_23, 3, x_18);
lean_ctor_set(x_23, 4, x_19);
lean_ctor_set(x_23, 5, x_20);
lean_ctor_set(x_23, 6, x_21);
lean_ctor_set(x_23, 7, x_22);
x_24 = lean_apply_7(x_2, x_3, x_4, x_6, x_7, x_23, x_9, x_10);
return x_24;
}
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg___lambda__1(x_9, x_1, x_2, x_3, x_12, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = l_Lean_maxRecDepthErrorMessage;
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_24, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg), 8, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
switch (lean_obj_tag(x_15)) {
case 5:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = l_Lean_levelZero;
x_17 = l_Lean_mkSort(x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Expr_getAppNumArgsAux(x_15, x_18);
lean_inc(x_19);
x_20 = lean_mk_array(x_19, x_17);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_19, x_21);
lean_dec(x_19);
x_23 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11(x_1, x_2, x_3, x_4, x_15, x_20, x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_23;
}
case 6:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_mk_empty_array_with_capacity(x_24);
x_26 = l_Lean_Meta_transform_visit_visitLambda___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__4(x_1, x_2, x_3, x_4, x_25, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_26;
}
case 7:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = l_Lean_Meta_transform_visit_visitForall___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__5(x_1, x_2, x_3, x_4, x_28, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_29;
}
case 8:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_mk_empty_array_with_capacity(x_30);
x_32 = l_Lean_Meta_transform_visit_visitLet___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__6(x_1, x_2, x_3, x_4, x_31, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_32;
}
case 10:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_15);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_15, 0);
x_35 = lean_ctor_get(x_15, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_35);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_36 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_35, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_expr_update_mdata(x_15, x_37);
x_40 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_39, x_6, x_7, x_8, x_9, x_10, x_11, x_38);
return x_40;
}
else
{
uint8_t x_41; 
lean_free_object(x_15);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_36);
if (x_41 == 0)
{
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 0);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; uint64_t x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_15, 0);
x_46 = lean_ctor_get(x_15, 1);
x_47 = lean_ctor_get_uint64(x_15, sizeof(void*)*2);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_15);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_46);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_48 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_46, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_46);
lean_ctor_set_uint64(x_51, sizeof(void*)*2, x_47);
x_52 = lean_expr_update_mdata(x_51, x_49);
x_53 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_52, x_6, x_7, x_8, x_9, x_10, x_11, x_50);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_ctor_get(x_48, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_48, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_56 = x_48;
} else {
 lean_dec_ref(x_48);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
case 11:
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_15);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_15, 0);
x_60 = lean_ctor_get(x_15, 1);
x_61 = lean_ctor_get(x_15, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_61);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_62 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_61, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_expr_update_proj(x_15, x_63);
x_66 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_65, x_6, x_7, x_8, x_9, x_10, x_11, x_64);
return x_66;
}
else
{
uint8_t x_67; 
lean_free_object(x_15);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_62);
if (x_67 == 0)
{
return x_62;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_62, 0);
x_69 = lean_ctor_get(x_62, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_62);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint64_t x_74; lean_object* x_75; 
x_71 = lean_ctor_get(x_15, 0);
x_72 = lean_ctor_get(x_15, 1);
x_73 = lean_ctor_get(x_15, 2);
x_74 = lean_ctor_get_uint64(x_15, sizeof(void*)*3);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_15);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_73);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_75 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_1, x_2, x_3, x_4, x_73, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_78, 0, x_71);
lean_ctor_set(x_78, 1, x_72);
lean_ctor_set(x_78, 2, x_73);
lean_ctor_set_uint64(x_78, sizeof(void*)*3, x_74);
x_79 = lean_expr_update_proj(x_78, x_76);
x_80 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_79, x_6, x_7, x_8, x_9, x_10, x_11, x_77);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = lean_ctor_get(x_75, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_75, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_83 = x_75;
} else {
 lean_dec_ref(x_75);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
default: 
{
lean_object* x_85; 
x_85 = l_Lean_Meta_transform_visit_visitPost___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__3(x_1, x_2, x_3, x_4, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_85;
}
}
}
}
}
lean_object* l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
lean_inc(x_6);
x_13 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_13, 0, lean_box(0));
lean_closure_set(x_13, 1, lean_box(0));
lean_closure_set(x_13, 2, x_6);
lean_inc(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = lean_apply_8(x_4, lean_box(0), x_13, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_16, x_5);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_free_object(x_14);
lean_inc(x_1);
lean_inc(x_5);
x_19 = lean_apply_1(x_1, x_5);
x_20 = lean_alloc_closure((void*)(l_StateRefT_x27_lift___rarg___boxed), 2, 1);
lean_closure_set(x_20, 0, x_19);
lean_inc(x_4);
x_21 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2___lambda__1), 12, 4);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_4);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12___rarg), 9, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_23 = l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg(x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_MetavarContext_instantiateExprMVars___rarg___lambda__2), 3, 2);
lean_closure_set(x_26, 0, x_5);
lean_closure_set(x_26, 1, x_24);
x_27 = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___rarg___boxed), 3, 2);
lean_closure_set(x_27, 0, x_6);
lean_closure_set(x_27, 1, x_26);
x_28 = lean_apply_8(x_4, lean_box(0), x_27, x_7, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_24);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_24);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_24);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_37 = !lean_is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; 
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
lean_dec(x_1);
x_41 = lean_ctor_get(x_18, 0);
lean_inc(x_41);
lean_dec(x_18);
lean_ctor_set(x_14, 0, x_41);
return x_14;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_14, 0);
x_43 = lean_ctor_get(x_14, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_14);
x_44 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_42, x_5);
lean_dec(x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_inc(x_1);
lean_inc(x_5);
x_45 = lean_apply_1(x_1, x_5);
x_46 = lean_alloc_closure((void*)(l_StateRefT_x27_lift___rarg___boxed), 2, 1);
lean_closure_set(x_46, 0, x_45);
lean_inc(x_4);
x_47 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2___lambda__1), 12, 4);
lean_closure_set(x_47, 0, x_1);
lean_closure_set(x_47, 1, x_2);
lean_closure_set(x_47, 2, x_3);
lean_closure_set(x_47, 3, x_4);
x_48 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__12___rarg), 9, 2);
lean_closure_set(x_48, 0, x_46);
lean_closure_set(x_48, 1, x_47);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_49 = l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg(x_48, x_6, x_7, x_8, x_9, x_10, x_11, x_43);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_50);
x_52 = lean_alloc_closure((void*)(l_Lean_MetavarContext_instantiateExprMVars___rarg___lambda__2), 3, 2);
lean_closure_set(x_52, 0, x_5);
lean_closure_set(x_52, 1, x_50);
x_53 = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___rarg___boxed), 3, 2);
lean_closure_set(x_53, 0, x_6);
lean_closure_set(x_53, 1, x_52);
x_54 = lean_apply_8(x_4, lean_box(0), x_53, x_7, x_8, x_9, x_10, x_11, x_51);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
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
lean_ctor_set(x_57, 0, x_50);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_50);
x_58 = lean_ctor_get(x_54, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_60 = x_54;
} else {
 lean_dec_ref(x_54);
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
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_62 = lean_ctor_get(x_49, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_49, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_64 = x_49;
} else {
 lean_dec_ref(x_49);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; 
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
lean_dec(x_1);
x_66 = lean_ctor_get(x_44, 0);
lean_inc(x_66);
lean_dec(x_44);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_43);
return x_67;
}
}
}
else
{
uint8_t x_68; 
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
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_14);
if (x_68 == 0)
{
return x_14;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_14, 0);
x_70 = lean_ctor_get(x_14, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_14);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
lean_object* l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_2, x_10);
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
}
lean_object* l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_box(0);
x_11 = lean_unsigned_to_nat(8u);
x_12 = l_Std_mkHashMapImp___rarg(x_11);
x_13 = lean_st_ref_get(x_8, x_9);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_mk_ref(x_12, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1___lambda__1___boxed), 8, 0);
lean_inc(x_8);
lean_inc(x_16);
x_19 = l_Lean_Meta_transform_visit___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__2(x_2, x_3, x_10, x_18, x_1, x_16, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_st_ref_get(x_8, x_21);
lean_dec(x_8);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_st_ref_get(x_16, x_23);
lean_dec(x_16);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_20);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_8);
x_29 = !lean_is_exclusive(x_19);
if (x_29 == 0)
{
return x_19;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_19, 0);
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_19);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_constName_x3f(x_2);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1(x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder___spec__3___lambda__1___boxed), 2, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = lean_array_get_size(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Array_findIdx_x3f_loop___rarg(x_13, x_14, x_15, x_16, lean_box(0));
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1(x_2, x_18, x_3, x_4, x_5, x_6, x_7, x_8);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_17);
x_20 = lean_st_ref_get(x_7, x_8);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_get(x_3, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_23, x_25);
lean_dec(x_23);
x_27 = lean_st_ref_get(x_7, x_24);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_st_ref_set(x_3, x_26, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1(x_2, x_30, x_3, x_4, x_5, x_6, x_7, x_31);
lean_dec(x_30);
return x_32;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_1, x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__2___boxed), 8, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_st_ref_get(x_6, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_st_mk_ref(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__3___boxed), 7, 0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_2);
x_16 = l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1(x_2, x_8, x_15, x_13, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_6, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_13, x_19);
lean_dec(x_13);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_dec_lt(x_23, x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
x_25 = lean_box(0);
x_26 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__4(x_21, x_25, x_3, x_4, x_5, x_6, x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_21);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_21);
x_27 = lean_mk_string("only arrows are allowed as premises. Multiple recursive occurrences detected:");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = l_Lean_indentExpr(x_2);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_mk_string("");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_33, x_3, x_4, x_5, x_6, x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
return x_34;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_16);
if (x_39 == 0)
{
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__7(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__8(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withLetDecl___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__9(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_17 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__10(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withIncRecDepth___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__13(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_transform___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_19 = l_Lean_Expr_fvarId_x21(x_1);
x_20 = 1;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_mk_empty_array_with_capacity(x_23);
x_25 = lean_array_push(x_24, x_22);
x_26 = lean_unsigned_to_nat(3u);
x_27 = lean_mk_empty_array_with_capacity(x_26);
x_28 = lean_array_push(x_27, x_1);
x_29 = lean_array_push(x_28, x_2);
x_30 = lean_array_push(x_29, x_13);
x_31 = l_Array_append___rarg(x_3, x_30);
lean_dec(x_30);
x_32 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_4);
lean_ctor_set(x_32, 2, x_5);
lean_ctor_set(x_32, 3, x_6);
lean_ctor_set(x_32, 4, x_7);
lean_ctor_set(x_32, 5, x_8);
x_33 = lean_nat_add(x_9, x_23);
x_34 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders), 10, 5);
lean_closure_set(x_34, 0, x_10);
lean_closure_set(x_34, 1, x_11);
lean_closure_set(x_34, 2, x_12);
lean_closure_set(x_34, 3, x_32);
lean_closure_set(x_34, 4, x_33);
x_35 = l_Lean_Meta_withNewBinderInfos___at_Lean_Meta_IndPredBelow_mkContext_mkHeader___spec__2___rarg(x_25, x_34, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_25);
return x_35;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; 
lean_inc(x_9);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__1___boxed), 18, 12);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_15);
lean_closure_set(x_21, 2, x_2);
lean_closure_set(x_21, 3, x_3);
lean_closure_set(x_21, 4, x_4);
lean_closure_set(x_21, 5, x_5);
lean_closure_set(x_21, 6, x_6);
lean_closure_set(x_21, 7, x_7);
lean_closure_set(x_21, 8, x_8);
lean_closure_set(x_21, 9, x_9);
lean_closure_set(x_21, 10, x_10);
lean_closure_set(x_21, 11, x_11);
x_22 = l_Lean_Meta_IndPredBelow_mkCtorType_mkMotiveBinder(x_9, x_12, x_14, x_1, x_13, lean_box(0), x_21, x_16, x_17, x_18, x_19, x_20);
return x_22;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_4, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 4);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 5);
lean_inc(x_16);
x_17 = lean_array_get_size(x_14);
x_18 = lean_nat_dec_lt(x_5, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
x_19 = l_Lean_Meta_IndPredBelow_mkCtorType_rebuild(x_1, x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = l_Lean_instInhabitedExpr;
x_21 = lean_array_get(x_20, x_14, x_5);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_21);
x_22 = l_Lean_Meta_inferType(x_21, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_23);
lean_inc(x_1);
x_25 = l_Lean_Meta_IndPredBelow_mkCtorType_checkCount(x_1, x_23, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
uint8_t x_28; 
lean_dec(x_23);
x_28 = !lean_is_exclusive(x_4);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_29 = lean_ctor_get(x_4, 5);
lean_dec(x_29);
x_30 = lean_ctor_get(x_4, 4);
lean_dec(x_30);
x_31 = lean_ctor_get(x_4, 3);
lean_dec(x_31);
x_32 = lean_ctor_get(x_4, 2);
lean_dec(x_32);
x_33 = lean_ctor_get(x_4, 1);
lean_dec(x_33);
x_34 = lean_ctor_get(x_4, 0);
lean_dec(x_34);
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_dec(x_25);
x_36 = lean_array_push(x_11, x_21);
lean_ctor_set(x_4, 0, x_36);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_5, x_37);
lean_dec(x_5);
x_5 = x_38;
x_10 = x_35;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_4);
x_40 = lean_ctor_get(x_25, 1);
lean_inc(x_40);
lean_dec(x_25);
x_41 = lean_array_push(x_11, x_21);
x_42 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_12);
lean_ctor_set(x_42, 2, x_13);
lean_ctor_set(x_42, 3, x_14);
lean_ctor_set(x_42, 4, x_15);
lean_ctor_set(x_42, 5, x_16);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_add(x_5, x_43);
lean_dec(x_5);
x_4 = x_42;
x_5 = x_44;
x_10 = x_40;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_25, 1);
lean_inc(x_46);
lean_dec(x_25);
lean_inc(x_23);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_21);
x_47 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__2___boxed), 20, 13);
lean_closure_set(x_47, 0, x_21);
lean_closure_set(x_47, 1, x_11);
lean_closure_set(x_47, 2, x_12);
lean_closure_set(x_47, 3, x_13);
lean_closure_set(x_47, 4, x_14);
lean_closure_set(x_47, 5, x_15);
lean_closure_set(x_47, 6, x_16);
lean_closure_set(x_47, 7, x_5);
lean_closure_set(x_47, 8, x_1);
lean_closure_set(x_47, 9, x_2);
lean_closure_set(x_47, 10, x_3);
lean_closure_set(x_47, 11, x_4);
lean_closure_set(x_47, 12, x_23);
x_48 = l_Lean_Meta_IndPredBelow_mkCtorType_mkBelowBinder(x_1, x_4, x_21, x_23, lean_box(0), x_47, x_6, x_7, x_8, x_9, x_46);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_25);
if (x_49 == 0)
{
return x_25;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_25, 0);
x_51 = lean_ctor_get(x_25, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_25);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_22);
if (x_53 == 0)
{
return x_22;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_22, 0);
x_55 = lean_ctor_get(x_22, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_22);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_9);
return x_19;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
lean_object* x_21; 
x_21 = l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_21;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_9, x_10, x_2, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_3 < x_2;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = x_4;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_array_uget(x_4, x_3);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_4, x_3, x_14);
x_16 = x_13;
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1___boxed), 8, 2);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_19);
x_21 = 1;
x_22 = lean_box(x_21);
lean_ctor_set(x_16, 1, x_20);
lean_ctor_set(x_16, 0, x_22);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_16);
x_24 = 1;
x_25 = x_3 + x_24;
x_26 = x_23;
x_27 = lean_array_uset(x_15, x_3, x_26);
x_3 = x_25;
x_4 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1___boxed), 8, 2);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_30);
x_32 = 1;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
x_36 = 1;
x_37 = x_3 + x_36;
x_38 = x_35;
x_39 = lean_array_uset(x_15, x_3, x_38);
x_3 = x_37;
x_4 = x_39;
goto _start;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_push(x_1, x_4);
x_11 = l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_10 = l_ReaderT_instMonadReaderT___rarg(x_9);
x_11 = l_ReaderT_instMonadReaderT___rarg(x_10);
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
x_14 = lean_array_get_size(x_3);
x_15 = lean_array_get_size(x_2);
x_16 = lean_nat_dec_lt(x_14, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_2);
x_17 = lean_apply_6(x_1, x_3, x_4, x_5, x_6, x_7, x_8);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecls_loop___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_18, 0, x_13);
x_19 = lean_alloc_closure((void*)(l_instInhabitedDepArrow___rarg), 2, 1);
lean_closure_set(x_19, 0, x_18);
x_20 = l_Lean_instInhabitedBinderInfo;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
x_23 = l_Lean_instInhabitedName;
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_array_get(x_24, x_2, x_14);
lean_dec(x_14);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_30 = lean_apply_6(x_29, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3___lambda__1), 9, 3);
lean_closure_set(x_33, 0, x_3);
lean_closure_set(x_33, 1, x_1);
lean_closure_set(x_33, 2, x_2);
x_34 = lean_unbox(x_28);
lean_dec(x_28);
x_35 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_27, x_34, x_31, x_33, x_4, x_5, x_6, x_7, x_32);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_30);
if (x_36 == 0)
{
return x_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_30, 0);
x_38 = lean_ctor_get(x_30, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_30);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecls___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_mk_empty_array_with_capacity(x_8);
x_10 = l_Lean_Meta_withLocalDecls_loop___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__3(x_2, x_1, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 4);
lean_dec(x_13);
x_14 = l_Array_append___rarg(x_12, x_5);
lean_ctor_set(x_1, 4, x_5);
lean_ctor_set(x_1, 0, x_14);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders(x_2, x_3, x_4, x_1, x_15, x_6, x_7, x_8, x_9, x_10);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_19 = lean_ctor_get(x_1, 2);
x_20 = lean_ctor_get(x_1, 3);
x_21 = lean_ctor_get(x_1, 5);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_1);
x_22 = l_Array_append___rarg(x_17, x_5);
x_23 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set(x_23, 3, x_20);
lean_ctor_set(x_23, 4, x_5);
lean_ctor_set(x_23, 5, x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_Meta_IndPredBelow_mkCtorType_modifyBinders(x_2, x_3, x_4, x_23, x_24, x_6, x_7, x_8, x_9, x_10);
return x_25;
}
}
}
static lean_object* _init_l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addMotives(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = x_10;
x_14 = lean_box_usize(x_12);
x_15 = l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___boxed__const__1;
lean_inc(x_4);
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___boxed), 9, 4);
lean_closure_set(x_16, 0, x_4);
lean_closure_set(x_16, 1, x_14);
lean_closure_set(x_16, 2, x_15);
lean_closure_set(x_16, 3, x_13);
x_17 = x_16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = lean_apply_5(x_17, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___lambda__1), 10, 4);
lean_closure_set(x_21, 0, x_4);
lean_closure_set(x_21, 1, x_1);
lean_closure_set(x_21, 2, x_2);
lean_closure_set(x_21, 3, x_3);
x_22 = l_Lean_Meta_withLocalDecls___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__2(x_19, x_21, x_5, x_6, x_7, x_8, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = lean_array_fget(x_2, x_4);
x_17 = lean_ctor_get(x_1, 2);
x_18 = l_Lean_instInhabitedName;
x_19 = lean_array_get(x_18, x_17, x_4);
x_20 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed), 7, 1);
lean_closure_set(x_20, 0, x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
x_23 = lean_array_push(x_6, x_21);
x_3 = x_15;
x_4 = x_22;
x_5 = lean_box(0);
x_6 = x_23;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_4);
lean_dec(x_3);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_6);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; uint8_t x_12; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = 1;
x_11 = x_2 + x_10;
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = 0;
x_15 = lean_box(x_14);
lean_ctor_set(x_9, 0, x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_9);
x_17 = x_16;
x_18 = lean_array_uset(x_8, x_2, x_17);
x_2 = x_11;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
x_26 = x_25;
x_27 = lean_array_uset(x_8, x_2, x_26);
x_2 = x_11;
x_3 = x_27;
goto _start;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDeclsD___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_10 = 0;
x_11 = x_1;
x_12 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__3(x_9, x_10, x_11);
x_13 = x_12;
x_14 = l_Lean_Meta_withLocalDecls___at_Lean_Meta_IndPredBelow_mkCtorType_addMotives___spec__2(x_13, x_2, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_5);
x_13 = l_Lean_Meta_IndPredBelow_mkCtorType_addMotives(x_2, x_3, x_4, x_1, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 2);
x_16 = lean_ctor_get(x_1, 3);
x_17 = lean_ctor_get(x_1, 4);
x_18 = lean_ctor_get(x_1, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_5);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
x_20 = l_Lean_Meta_IndPredBelow_mkCtorType_addMotives(x_2, x_3, x_4, x_19, x_6, x_7, x_8, x_9, x_10);
return x_20;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
x_12 = lean_mk_empty_array_with_capacity(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__1(x_1, x_10, x_11, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___lambda__1), 10, 4);
lean_closure_set(x_17, 0, x_4);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_3);
x_18 = l_Lean_Meta_withLocalDeclsD___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__2(x_15, x_17, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__3(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
x_12 = lean_unsigned_to_nat(0u);
lean_inc(x_11);
lean_inc(x_4);
x_13 = l_Array_toSubarray___rarg(x_4, x_12, x_11);
x_14 = l_Array_ofSubarray___rarg(x_13);
lean_dec(x_13);
x_15 = lean_mk_empty_array_with_capacity(x_12);
x_16 = lean_array_get_size(x_4);
x_17 = l_Array_toSubarray___rarg(x_4, x_11, x_16);
x_18 = l_Array_ofSubarray___rarg(x_17);
lean_dec(x_17);
lean_inc(x_15);
lean_inc(x_14);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_14);
lean_ctor_set(x_19, 3, x_18);
lean_ctor_set(x_19, 4, x_15);
lean_ctor_set(x_19, 5, x_5);
x_20 = l_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars(x_1, x_2, x_3, x_19, x_6, x_7, x_8, x_9, x_10);
return x_20;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkCtorType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkCtorType___lambda__1), 10, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
x_12 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_10, x_11, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkConstructor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 6)
{
uint8_t x_9; 
lean_dec(x_1);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_8);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_mk_string("'");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = l_Lean_mkConst(x_1, x_18);
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_mk_string("' is not a constructor");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkConstructor___spec__2(x_24, x_2, x_3, x_4, x_5, x_15);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_7);
if (x_26 == 0)
{
return x_7;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_7, 0);
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_7);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkConstructor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_3);
x_9 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = l_Lean_instInhabitedName;
x_14 = lean_array_get(x_13, x_12, x_2);
lean_dec(x_12);
x_15 = l_Lean_Name_updatePrefix(x_3, x_14);
x_16 = l_Lean_Meta_IndPredBelow_mkCtorType(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_15);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_9);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkConstructor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_mkConstructor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkInductiveType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Meta_IndPredBelow_mkConstructor(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkInductiveType___spec__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_3, 1, x_19);
lean_ctor_set(x_3, 0, x_15);
lean_ctor_set(x_17, 0, x_3);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
lean_ctor_set(x_3, 1, x_20);
lean_ctor_set(x_3, 0, x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_free_object(x_3);
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
else
{
uint8_t x_27; 
lean_free_object(x_3);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_14);
if (x_27 == 0)
{
return x_14;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_3, 0);
x_32 = lean_ctor_get(x_3, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_33 = l_Lean_Meta_IndPredBelow_mkConstructor(x_1, x_2, x_31, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkInductiveType___spec__1(x_1, x_2, x_32, x_4, x_5, x_6, x_7, x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
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
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_37);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_34);
x_42 = lean_ctor_get(x_36, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_44 = x_36;
} else {
 lean_dec_ref(x_36);
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
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_46 = lean_ctor_get(x_33, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_33, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_48 = x_33;
} else {
 lean_dec_ref(x_33);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkInductiveType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_3, 4);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkInductiveType___spec__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = l_Lean_instInhabitedName;
x_15 = lean_array_get(x_14, x_13, x_2);
lean_dec(x_13);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_Lean_instInhabitedExpr;
x_18 = lean_array_get(x_17, x_16, x_2);
lean_dec(x_2);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_12);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
x_23 = l_Lean_instInhabitedName;
x_24 = lean_array_get(x_23, x_22, x_2);
lean_dec(x_22);
x_25 = lean_ctor_get(x_1, 3);
lean_inc(x_25);
lean_dec(x_1);
x_26 = l_Lean_instInhabitedExpr;
x_27 = lean_array_get(x_26, x_25, x_2);
lean_dec(x_2);
lean_dec(x_25);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_20);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = lean_array_fget(x_2, x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_1);
x_17 = l_Lean_Meta_IndPredBelow_mkInductiveType(x_1, x_4, x_16, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
x_21 = lean_array_push(x_6, x_18);
x_3 = x_15;
x_4 = x_20;
x_5 = lean_box(0);
x_6 = x_21;
x_11 = x_19;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
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
else
{
lean_object* x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_6);
lean_ctor_set(x_27, 1, x_11);
return x_27;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = l_Lean_instInhabitedInductiveVal;
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_get(x_8, x_7, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_inc(x_1);
x_15 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowDecl___spec__1(x_1, x_7, x_13, x_9, lean_box(0), x_14, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_7);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_1, 4);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_array_get_size(x_19);
lean_dec(x_19);
x_21 = lean_nat_add(x_18, x_20);
lean_dec(x_20);
lean_dec(x_18);
x_22 = lean_array_to_list(lean_box(0), x_17);
x_23 = lean_ctor_get_uint8(x_10, sizeof(void*)*5 + 1);
lean_dec(x_10);
x_24 = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(x_24, 0, x_12);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set_uint8(x_24, sizeof(void*)*3, x_23);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_ctor_get(x_1, 4);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_array_get_size(x_28);
lean_dec(x_28);
x_30 = lean_nat_add(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
x_31 = lean_array_to_list(lean_box(0), x_25);
x_32 = lean_ctor_get_uint8(x_10, sizeof(void*)*5 + 1);
lean_dec(x_10);
x_33 = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set(x_33, 2, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*3, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_26);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowDecl___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_backwardsChaining_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_3 == x_4;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_array_uget(x_2, x_3);
x_12 = l_Lean_Expr_mvarId_x21(x_11);
lean_dec(x_11);
x_13 = l_Lean_Meta_isExprMVarAssigned(x_12, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_1, x_17);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_19 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_12, x_18, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 0);
lean_dec(x_23);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_19, 0, x_25);
return x_19;
}
else
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
}
else
{
lean_object* x_30; size_t x_31; size_t x_32; 
x_30 = lean_ctor_get(x_19, 1);
lean_inc(x_30);
lean_dec(x_19);
x_31 = 1;
x_32 = x_3 + x_31;
x_3 = x_32;
x_9 = x_30;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
else
{
lean_object* x_38; size_t x_39; size_t x_40; 
lean_dec(x_12);
x_38 = lean_ctor_get(x_13, 1);
lean_inc(x_38);
lean_dec(x_13);
x_39 = 1;
x_40 = x_3 + x_39;
x_3 = x_40;
x_9 = x_38;
goto _start;
}
}
else
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_42 = 0;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_9);
return x_44;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 == x_6;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_4, x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3(x_1, x_2, x_3, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; size_t x_18; size_t x_19; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = 1;
x_19 = x_5 + x_18;
x_5 = x_19;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_14);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_14, 0);
lean_dec(x_22);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_14, 0, x_24);
return x_14;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_11);
return x_35;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = l_Lean_Meta_isExprDefEq(x_1, x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = 0;
x_20 = lean_box(x_19);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_26 = l_Lean_LocalDecl_toExpr(x_2);
x_27 = l_Lean_mkAppN(x_26, x_12);
x_28 = l_Lean_Meta_assignExprMVar(x_3, x_27, x_6, x_7, x_8, x_9, x_25);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_28, 1);
x_31 = lean_ctor_get(x_28, 0);
lean_dec(x_31);
x_32 = lean_array_get_size(x_12);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_lt(x_33, x_32);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; 
lean_dec(x_32);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_35 = 1;
x_36 = lean_box(x_35);
lean_ctor_set(x_28, 0, x_36);
return x_28;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_32, x_32);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; 
lean_dec(x_32);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_38 = 1;
x_39 = lean_box(x_38);
lean_ctor_set(x_28, 0, x_39);
return x_28;
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; 
lean_free_object(x_28);
x_40 = 0;
x_41 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_42 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1(x_4, x_12, x_40, x_41, x_6, x_7, x_8, x_9, x_30);
lean_dec(x_12);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
lean_dec(x_46);
x_47 = 1;
x_48 = lean_box(x_47);
lean_ctor_set(x_42, 0, x_48);
return x_42;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_42, 1);
lean_inc(x_49);
lean_dec(x_42);
x_50 = 1;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_42);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_42, 0);
lean_dec(x_54);
x_55 = 0;
x_56 = lean_box(x_55);
lean_ctor_set(x_42, 0, x_56);
return x_42;
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_42, 1);
lean_inc(x_57);
lean_dec(x_42);
x_58 = 0;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
}
else
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_42);
if (x_61 == 0)
{
return x_42;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_42, 0);
x_63 = lean_ctor_get(x_42, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_42);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_28, 1);
lean_inc(x_65);
lean_dec(x_28);
x_66 = lean_array_get_size(x_12);
x_67 = lean_unsigned_to_nat(0u);
x_68 = lean_nat_dec_lt(x_67, x_66);
if (x_68 == 0)
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_66);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_69 = 1;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_65);
return x_71;
}
else
{
uint8_t x_72; 
x_72 = lean_nat_dec_le(x_66, x_66);
if (x_72 == 0)
{
uint8_t x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_66);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_73 = 1;
x_74 = lean_box(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_65);
return x_75;
}
else
{
size_t x_76; size_t x_77; lean_object* x_78; 
x_76 = 0;
x_77 = lean_usize_of_nat(x_66);
lean_dec(x_66);
x_78 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1(x_4, x_12, x_76, x_77, x_6, x_7, x_8, x_9, x_65);
lean_dec(x_12);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_unbox(x_79);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_82 = x_78;
} else {
 lean_dec_ref(x_78);
 x_82 = lean_box(0);
}
x_83 = 1;
x_84 = lean_box(x_83);
if (lean_is_scalar(x_82)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_82;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_81);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; 
x_86 = lean_ctor_get(x_78, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_87 = x_78;
} else {
 lean_dec_ref(x_78);
 x_87 = lean_box(0);
}
x_88 = 0;
x_89 = lean_box(x_88);
if (lean_is_scalar(x_87)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_87;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_86);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_78, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_78, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_93 = x_78;
} else {
 lean_dec_ref(x_78);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
}
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_95 = !lean_is_exclusive(x_14);
if (x_95 == 0)
{
return x_14;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_14, 0);
x_97 = lean_ctor_get(x_14, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_14);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 == x_6;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_array_uget(x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
size_t x_14; size_t x_15; 
x_14 = 1;
x_15 = x_5 + x_14;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = l_Lean_LocalDecl_type(x_17);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_forallMetaTelescope___boxed), 7, 2);
lean_closure_set(x_22, 0, x_19);
lean_closure_set(x_22, 1, x_21);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_3);
x_23 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1___boxed), 10, 4);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_17);
lean_closure_set(x_23, 2, x_1);
lean_closure_set(x_23, 3, x_2);
x_24 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_24, 0, x_22);
lean_closure_set(x_24, 1, x_23);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = l_Lean_commitWhen___at_Lean_Meta_elimEmptyInductive___spec__3(x_24, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; size_t x_29; size_t x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = 1;
x_30 = x_5 + x_29;
x_5 = x_30;
x_11 = x_28;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_25, 0);
lean_dec(x_33);
x_34 = 1;
x_35 = lean_box(x_34);
lean_ctor_set(x_25, 0, x_35);
return x_25;
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_dec(x_25);
x_37 = 1;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
else
{
size_t x_44; size_t x_45; 
lean_dec(x_17);
x_44 = 1;
x_45 = x_5 + x_44;
x_5 = x_45;
goto _start;
}
}
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_11);
return x_49;
}
}
}
lean_object* l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_11, x_11);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_9);
return x_20;
}
else
{
size_t x_21; size_t x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_23 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__4(x_1, x_2, x_3, x_10, x_21, x_22, x_5, x_6, x_7, x_8, x_9);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_4, 0);
x_25 = lean_array_get_size(x_24);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_lt(x_26, x_25);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_9);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_le(x_25, x_25);
if (x_31 == 0)
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_9);
return x_34;
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; 
x_35 = 0;
x_36 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_37 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5(x_1, x_2, x_3, x_24, x_35, x_36, x_5, x_6, x_7, x_8, x_9);
return x_37;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 == x_6;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_array_uget(x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
size_t x_14; size_t x_15; 
x_14 = 1;
x_15 = x_5 + x_14;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Lean_LocalDecl_isAuxDecl(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = l_Lean_LocalDecl_type(x_17);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_forallMetaTelescope___boxed), 7, 2);
lean_closure_set(x_22, 0, x_19);
lean_closure_set(x_22, 1, x_21);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_3);
x_23 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1___boxed), 10, 4);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_17);
lean_closure_set(x_23, 2, x_1);
lean_closure_set(x_23, 3, x_2);
x_24 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_24, 0, x_22);
lean_closure_set(x_24, 1, x_23);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = l_Lean_commitWhen___at_Lean_Meta_elimEmptyInductive___spec__3(x_24, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; size_t x_29; size_t x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = 1;
x_30 = x_5 + x_29;
x_5 = x_30;
x_11 = x_28;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_25, 0);
lean_dec(x_33);
x_34 = 1;
x_35 = lean_box(x_34);
lean_ctor_set(x_25, 0, x_35);
return x_25;
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_dec(x_25);
x_37 = 1;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
else
{
size_t x_44; size_t x_45; 
lean_dec(x_17);
x_44 = 1;
x_45 = x_5 + x_44;
x_5 = x_45;
goto _start;
}
}
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_11);
return x_49;
}
}
}
lean_object* l_Std_PersistentArray_anyM___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_12);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_11, 1);
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_4, 1);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = 0;
x_22 = lean_box(x_21);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_18, x_18);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = 0;
x_25 = lean_box(x_24);
lean_ctor_set(x_11, 0, x_25);
return x_11;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; 
lean_free_object(x_11);
x_26 = 0;
x_27 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_28 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6(x_1, x_2, x_3, x_17, x_26, x_27, x_5, x_6, x_7, x_8, x_15);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_dec(x_11);
x_30 = lean_ctor_get(x_4, 1);
x_31 = lean_array_get_size(x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
if (x_33 == 0)
{
uint8_t x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = 0;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_29);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_31, x_31);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = 0;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_29);
return x_40;
}
else
{
size_t x_41; size_t x_42; lean_object* x_43; 
x_41 = 0;
x_42 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_43 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6(x_1, x_2, x_3, x_30, x_41, x_42, x_5, x_6, x_7, x_8, x_29);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_11, 0);
lean_dec(x_45);
return x_11;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_dec(x_11);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_12);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_11);
if (x_48 == 0)
{
return x_11;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_11, 0);
x_50 = lean_ctor_get(x_11, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_11);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_Meta_getMVarType(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_3, 1);
x_13 = l_Std_PersistentArray_anyM___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__2(x_1, x_2, x_10, x_12, x_4, x_5, x_6, x_7, x_11);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1___boxed), 5, 0);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadLCtxMetaM___lambda__1___boxed), 6, 0);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_backwardsChaining___lambda__1___boxed), 8, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
x_14 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_14, x_3, x_4, x_5, x_6, x_7);
return x_15;
}
else
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = 0;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_7);
return x_18;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_11 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_12 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__1(x_1, x_2, x_10, x_11, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_13 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_14 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__4(x_1, x_2, x_3, x_4, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_13 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_14 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__5(x_1, x_2, x_3, x_4, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_PersistentArray_anyMAux___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_13 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_14 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__6(x_1, x_2, x_3, x_4, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Std_PersistentArray_anyM___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_PersistentArray_anyM___at_Lean_Meta_IndPredBelow_backwardsChaining___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_backwardsChaining___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_proveBrecOn_intros_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
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
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_proveBrecOn_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_proveBrecOn_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_box(0);
x_11 = 0;
x_12 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Meta_introNCore(x_3, x_9, x_10, x_11, x_12, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_array_get_size(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_19);
x_20 = l_Lean_Meta_introNCore(x_17, x_19, x_10, x_11, x_12, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_2, 2);
lean_inc(x_25);
lean_dec(x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_26 = l_Lean_Meta_introNCore(x_24, x_25, x_10, x_11, x_12, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Meta_intro1Core(x_30, x_12, x_4, x_5, x_6, x_7, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = l_Lean_Meta_introNCore(x_35, x_19, x_10, x_11, x_12, x_4, x_5, x_6, x_7, x_33);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
x_42 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_42, 0, x_16);
lean_ctor_set(x_42, 1, x_23);
lean_ctor_set(x_42, 2, x_29);
lean_ctor_set(x_42, 3, x_34);
lean_ctor_set(x_42, 4, x_40);
lean_ctor_set(x_38, 1, x_42);
lean_ctor_set(x_38, 0, x_41);
return x_36;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_38, 0);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_38);
x_45 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_45, 0, x_16);
lean_ctor_set(x_45, 1, x_23);
lean_ctor_set(x_45, 2, x_29);
lean_ctor_set(x_45, 3, x_34);
lean_ctor_set(x_45, 4, x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_36, 0, x_46);
return x_36;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_36, 0);
x_48 = lean_ctor_get(x_36, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_36);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_51 = x_47;
} else {
 lean_dec_ref(x_47);
 x_51 = lean_box(0);
}
x_52 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_52, 0, x_16);
lean_ctor_set(x_52, 1, x_23);
lean_ctor_set(x_52, 2, x_29);
lean_ctor_set(x_52, 3, x_34);
lean_ctor_set(x_52, 4, x_49);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_48);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_34);
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_16);
x_55 = !lean_is_exclusive(x_36);
if (x_55 == 0)
{
return x_36;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_36, 0);
x_57 = lean_ctor_get(x_36, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_36);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_59 = !lean_is_exclusive(x_31);
if (x_59 == 0)
{
return x_31;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_31, 0);
x_61 = lean_ctor_get(x_31, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_31);
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
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_63 = !lean_is_exclusive(x_26);
if (x_63 == 0)
{
return x_26;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_26, 0);
x_65 = lean_ctor_get(x_26, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_26);
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
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_20);
if (x_67 == 0)
{
return x_20;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_20, 0);
x_69 = lean_ctor_get(x_20, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_20);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_71 = !lean_is_exclusive(x_13);
if (x_71 == 0)
{
return x_13;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_13, 0);
x_73 = lean_ctor_get(x_13, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_13);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_intros___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_proveBrecOn_intros(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 < x_4;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
x_14 = lean_array_uget(x_3, x_5);
x_15 = l_Lean_mkFVar(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_16 = l_Lean_Meta_apply(x_1, x_15, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_22);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
else
{
lean_object* x_28; size_t x_29; size_t x_30; 
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_dec(x_16);
x_29 = 1;
x_30 = x_5 + x_29;
lean_inc(x_2);
{
size_t _tmp_4 = x_30;
lean_object* _tmp_5 = x_2;
lean_object* _tmp_10 = x_28;
x_5 = _tmp_4;
x_6 = _tmp_5;
x_11 = _tmp_10;
}
goto _start;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_2, 4);
x_22 = lean_box(0);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_array_get_size(x_21);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_24);
lean_inc(x_1);
x_28 = l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__2(x_1, x_24, x_21, x_26, x_27, x_24, x_3, x_4, x_5, x_6, x_7);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_8 = x_22;
x_9 = x_31;
goto block_20;
}
else
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
x_8 = x_30;
x_9 = x_32;
goto block_20;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_30, 0);
lean_inc(x_34);
lean_dec(x_30);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_8 = x_35;
x_9 = x_32;
goto block_20;
}
}
block_20:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_mk_string("cannot apply induction hypothesis: ");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string("");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__1(x_16, x_3, x_4, x_5, x_6, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
lean_dec(x_8);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___spec__2(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_1, 2);
x_14 = l_Lean_instInhabitedName;
x_15 = lean_array_get(x_14, x_13, x_2);
x_16 = l_Lean_mkConst(x_15, x_3);
x_17 = l_Array_append___rarg(x_4, x_5);
x_18 = l_Array_append___rarg(x_17, x_6);
x_19 = l_Lean_mkAppN(x_16, x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = 1;
x_22 = l_Lean_Meta_mkLambdaFVars(x_6, x_19, x_20, x_21, x_8, x_9, x_10, x_11, x_12);
return x_22;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_6, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_6, x_17);
lean_dec(x_6);
x_19 = lean_array_fget(x_5, x_7);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_21 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_2, x_15, x_20, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_7);
lean_inc(x_1);
x_24 = lean_alloc_closure((void*)(l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___lambda__1___boxed), 12, 5);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_7);
lean_closure_set(x_24, 2, x_4);
lean_closure_set(x_24, 3, x_2);
lean_closure_set(x_24, 4, x_3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_25 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_22, x_24, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_nat_add(x_7, x_17);
lean_dec(x_7);
x_29 = lean_array_push(x_9, x_26);
x_6 = x_18;
x_7 = x_28;
x_8 = lean_box(0);
x_9 = x_29;
x_14 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_9);
lean_ctor_set(x_39, 1, x_14);
return x_39;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_induction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = x_10;
x_15 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_12, x_13, x_14);
x_16 = x_15;
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_array_get_size(x_17);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = x_17;
x_21 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_19, x_13, x_20);
x_22 = x_21;
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
lean_dec(x_2);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
x_25 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_24);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_array_get_size(x_26);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_25);
lean_inc(x_16);
x_30 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1(x_1, x_16, x_22, x_25, x_26, x_27, x_29, lean_box(0), x_28, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_26);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = lean_mk_string("rec");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_35, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_List_lengthAux___rarg(x_25, x_29);
x_40 = l_Lean_ConstantInfo_numLevelParams(x_37);
x_41 = lean_nat_dec_lt(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
x_42 = l_Lean_ConstantInfo_name(x_37);
lean_dec(x_37);
x_43 = l_Array_append___rarg(x_16, x_31);
lean_dec(x_31);
if (x_41 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = l_Lean_mkConst(x_42, x_25);
x_45 = l_Lean_mkAppN(x_44, x_43);
lean_dec(x_43);
x_46 = l_Lean_Meta_apply(x_3, x_45, x_5, x_6, x_7, x_8, x_38);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = l_Lean_levelZero;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_25);
x_49 = l_Lean_mkConst(x_42, x_48);
x_50 = l_Lean_mkAppN(x_49, x_43);
lean_dec(x_43);
x_51 = l_Lean_Meta_apply(x_3, x_50, x_5, x_6, x_7, x_8, x_38);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_31);
lean_dec(x_25);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_36);
if (x_52 == 0)
{
return x_36;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_36, 0);
x_54 = lean_ctor_get(x_36, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_36);
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
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_56 = !lean_is_exclusive(x_30);
if (x_56 == 0)
{
return x_30;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_30, 0);
x_58 = lean_ctor_get(x_30, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_30);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_induction___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_5);
return x_15;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_introNPRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_Meta_getMVarType(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = l_Lean_Expr_isForall(x_9);
lean_dec(x_9);
if (x_11 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_7, 0, x_1);
return x_7;
}
else
{
uint8_t x_12; lean_object* x_13; 
lean_free_object(x_7);
x_12 = 1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_Meta_intro1Core(x_1, x_12, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_1 = x_16;
x_6 = x_15;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_7);
x_24 = l_Lean_Expr_isForall(x_22);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = l_Lean_Meta_intro1Core(x_1, x_26, x_2, x_3, x_4, x_5, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_1 = x_30;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_ctor_get(x_27, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_34 = x_27;
} else {
 lean_dec_ref(x_27);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_7);
if (x_36 == 0)
{
return x_7;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_7, 0);
x_38 = lean_ctor_get(x_7, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_7);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_array_set(x_4, x_5, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_5, x_14);
lean_dec(x_5);
x_3 = x_11;
x_4 = x_13;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_4);
x_17 = l_Lean_Expr_constName_x21(x_3);
lean_dec(x_3);
x_18 = l_Lean_Expr_constName_x21(x_2);
x_19 = l_Lean_Name_updatePrefix(x_17, x_18);
x_20 = l_Lean_Expr_constLevels_x21(x_2);
lean_inc(x_19);
x_21 = l_Lean_mkConst(x_19, x_20);
x_22 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_19, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
lean_dec(x_25);
x_27 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_28 = l_Lean_Meta_forallMetaTelescope(x_26, x_27, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_mkAppN(x_21, x_31);
lean_dec(x_31);
x_33 = l_Lean_Meta_apply(x_1, x_32, x_6, x_7, x_8, x_9, x_30);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
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
else
{
uint8_t x_38; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_22);
if (x_38 == 0)
{
return x_22;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_22, 0);
x_40 = lean_ctor_get(x_22, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_22);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 5)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_array_set(x_3, x_4, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_4, x_13);
lean_dec(x_4);
x_2 = x_10;
x_3 = x_12;
x_4 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_4);
x_16 = l_Array_back___at_Lean_Meta_DiscrTree_mkPathAux___spec__1(x_3);
lean_dec(x_3);
x_17 = l_Lean_levelZero;
x_18 = l_Lean_mkSort(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_Expr_getAppNumArgsAux(x_16, x_19);
lean_inc(x_20);
x_21 = lean_mk_array(x_20, x_18);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_20, x_22);
lean_dec(x_20);
lean_inc(x_1);
x_24 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__1___boxed), 10, 5);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_2);
lean_closure_set(x_24, 2, x_16);
lean_closure_set(x_24, 3, x_21);
lean_closure_set(x_24, 4, x_23);
x_25 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_24, x_5, x_6, x_7, x_8, x_9);
return x_25;
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_3);
x_16 = lean_array_fget(x_2, x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_17 = l_Lean_Meta_IndPredBelow_proveBrecOn_introNPRec(x_16, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_18);
x_20 = l_Lean_Meta_getMVarType(x_18, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_levelZero;
x_24 = l_Lean_mkSort(x_23);
x_25 = l_Lean_Expr_getAppNumArgsAux(x_21, x_12);
lean_inc(x_25);
x_26 = lean_mk_array(x_25, x_24);
x_27 = lean_nat_sub(x_25, x_14);
lean_dec(x_25);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_28 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__2(x_18, x_21, x_26, x_27, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
x_32 = lean_array_push(x_6, x_29);
x_3 = x_15;
x_4 = x_31;
x_5 = lean_box(0);
x_6 = x_32;
x_11 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
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
else
{
uint8_t x_38; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_38 = !lean_is_exclusive(x_20);
if (x_38 == 0)
{
return x_20;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_20, 0);
x_40 = lean_ctor_get(x_20, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_20);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_42 = !lean_is_exclusive(x_17);
if (x_42 == 0)
{
return x_17;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_6);
lean_ctor_set(x_46, 1, x_11);
return x_46;
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = x_2 - x_6;
x_8 = lean_array_uget(x_1, x_7);
x_9 = l_List_append___rarg(x_8, x_4);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_List_redLength___rarg(x_1);
x_8 = lean_mk_empty_array_with_capacity(x_7);
lean_dec(x_7);
lean_inc(x_1);
x_9 = l_List_toArrayAux___rarg(x_1, x_8);
x_10 = lean_array_get_size(x_9);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__3(x_1, x_9, x_10, x_12, lean_box(0), x_11, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_9);
lean_dec(x_1);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_box(0);
x_17 = lean_array_get_size(x_15);
x_18 = lean_nat_dec_lt(x_12, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; 
x_19 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_20 = 0;
x_21 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4(x_15, x_19, x_20, x_16);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_21);
return x_13;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_box(0);
x_25 = lean_array_get_size(x_22);
x_26 = lean_nat_dec_lt(x_12, x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_25);
lean_dec(x_22);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_29 = 0;
x_30 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4(x_22, x_28, x_29, x_24);
lean_dec(x_22);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_23);
return x_31;
}
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_13);
if (x_32 == 0)
{
return x_13;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_13, 0);
x_34 = lean_ctor_get(x_13, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_13);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Meta_isExprMVarAssigned(x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Meta_IndPredBelow_proveBrecOn_introNPRec(x_2, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_13);
x_15 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_13, x_1, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_mk_string("couldn't solve by backwards chaining (");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = lean_mk_string("Lean");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("Meta");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("IndPredBelow");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("maxBackwardChainingDepth");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_20);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_mk_string(" = ");
x_33 = l_Lean_stringToMessageData(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_1);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("): ");
x_39 = l_Lean_stringToMessageData(x_38);
lean_dec(x_38);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_13);
x_41 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_41, 0, x_13);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_mk_string("");
x_44 = l_Lean_stringToMessageData(x_43);
lean_dec(x_43);
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1___boxed), 6, 1);
lean_closure_set(x_46, 0, x_45);
x_47 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_13, x_46, x_3, x_4, x_5, x_6, x_18);
return x_47;
}
else
{
uint8_t x_48; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_15);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_15, 0);
lean_dec(x_49);
x_50 = lean_box(0);
lean_ctor_set(x_15, 0, x_50);
return x_15;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_15, 1);
lean_inc(x_51);
lean_dec(x_15);
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
uint8_t x_54; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_15);
if (x_54 == 0)
{
return x_15;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_15, 0);
x_56 = lean_ctor_get(x_15, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_15);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_12);
if (x_58 == 0)
{
return x_12;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_12, 0);
x_60 = lean_ctor_get(x_12, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_12);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
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
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_8, 0);
lean_dec(x_63);
x_64 = lean_box(0);
lean_ctor_set(x_8, 0, x_64);
return x_8;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_8, 1);
lean_inc(x_65);
lean_dec(x_8);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_forM___at_Lean_Meta_IndPredBelow_proveBrecOn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_Lean_Meta_IndPredBelow_maxBackwardChainingDepth;
x_15 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_13, x_14);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Meta_IndPredBelow_proveBrecOn_closeGoal___rarg(x_15, x_11, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_3 = x_12;
x_8 = x_17;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_proveBrecOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_box(0);
lean_inc(x_4);
x_10 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_3, x_9, x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_mvarId_x21(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_14 = l_Lean_Meta_IndPredBelow_proveBrecOn_intros(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Meta_IndPredBelow_proveBrecOn_applyIH(x_17, x_18, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_mk_string("applying the induction hypothesis should only return one goal");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(x_23, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_24;
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_18);
x_28 = l_Lean_Meta_IndPredBelow_proveBrecOn_induction(x_1, x_2, x_27, x_18, x_4, x_5, x_6, x_7, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Meta_IndPredBelow_proveBrecOn_applyCtors(x_29, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_6);
x_34 = l_List_forM___at_Lean_Meta_IndPredBelow_proveBrecOn___spec__1(x_6, x_18, x_32, x_4, x_5, x_6, x_7, x_33);
lean_dec(x_18);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_Meta_instantiateMVars(x_11, x_4, x_5, x_6, x_7, x_35);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 0);
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_34);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_41 = !lean_is_exclusive(x_31);
if (x_41 == 0)
{
return x_31;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_31, 0);
x_43 = lean_ctor_get(x_31, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_31);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_28);
if (x_45 == 0)
{
return x_28;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_28, 0);
x_47 = lean_ctor_get(x_28, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_28);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_25);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_ctor_get(x_19, 1);
lean_inc(x_49);
lean_dec(x_19);
x_50 = lean_mk_string("applying the induction hypothesis should only return one goal");
x_51 = l_Lean_stringToMessageData(x_50);
lean_dec(x_50);
x_52 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1621____spec__1(x_51, x_4, x_5, x_6, x_7, x_49);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_19);
if (x_53 == 0)
{
return x_19;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_19, 0);
x_55 = lean_ctor_get(x_19, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_19);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_14);
if (x_57 == 0)
{
return x_14;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_14, 0);
x_59 = lean_ctor_get(x_14, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_14);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_List_forM___at_Lean_Meta_IndPredBelow_proveBrecOn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forM___at_Lean_Meta_IndPredBelow_proveBrecOn___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = l_Lean_instInhabitedInductiveVal;
x_14 = lean_array_get(x_13, x_12, x_2);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_16);
x_18 = l_Array_append___rarg(x_3, x_4);
x_19 = l_Array_append___rarg(x_18, x_5);
x_20 = lean_ctor_get(x_1, 2);
x_21 = l_Lean_instInhabitedName;
x_22 = lean_array_get(x_21, x_20, x_2);
x_23 = l_Lean_mkConst(x_22, x_17);
x_24 = l_Lean_mkAppN(x_23, x_19);
lean_dec(x_19);
x_25 = l_Lean_instInhabitedExpr;
x_26 = lean_array_get(x_25, x_4, x_2);
x_27 = l_Lean_mkAppN(x_26, x_5);
x_28 = l_Lean_Meta_mkArrow(x_24, x_27, x_7, x_8, x_9, x_10, x_11);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = 0;
x_32 = 1;
x_33 = l_Lean_Meta_mkForallFVars(x_5, x_29, x_31, x_32, x_7, x_8, x_9, x_10, x_30);
return x_33;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__1___boxed), 11, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
x_13 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_5, x_12, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_lt(x_13, x_12);
lean_dec(x_12);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
x_17 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_2, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_4);
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__2___boxed), 11, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_4);
lean_closure_set(x_20, 2, x_2);
lean_closure_set(x_20, 3, x_3);
lean_closure_set(x_20, 4, x_18);
if (x_14 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_4);
x_21 = lean_box(0);
x_22 = lean_mk_string("ih");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_23, x_8, x_9, x_19);
lean_dec(x_9);
lean_dec(x_8);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_20);
lean_ctor_set(x_24, 0, x_27);
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_20);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_32 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_33 = l_Nat_repr(x_32);
x_34 = lean_mk_string("ih_");
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_mk_string("");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_box(0);
x_39 = lean_name_mk_string(x_38, x_37);
x_40 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_39, x_8, x_9, x_19);
lean_dec(x_9);
lean_dec(x_8);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_20);
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
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_20);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_17);
if (x_48 == 0)
{
return x_17;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_17, 0);
x_50 = lean_ctor_get(x_17, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_17);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_4, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_4, x_15);
lean_dec(x_4);
x_17 = lean_ctor_get(x_1, 4);
lean_inc(x_17);
lean_inc(x_17);
lean_inc(x_2);
x_18 = l_Array_toSubarray___rarg(x_2, x_13, x_17);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_array_get_size(x_19);
lean_dec(x_19);
x_21 = lean_nat_add(x_17, x_20);
lean_dec(x_20);
lean_inc(x_2);
x_22 = l_Array_toSubarray___rarg(x_2, x_17, x_21);
x_23 = l_Array_ofSubarray___rarg(x_22);
lean_dec(x_22);
x_24 = l_Array_ofSubarray___rarg(x_18);
lean_dec(x_18);
x_25 = lean_array_fget(x_3, x_5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_1);
x_26 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkIH(x_1, x_24, x_23, x_5, x_25, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_30 = lean_array_push(x_7, x_27);
x_4 = x_16;
x_5 = x_29;
x_6 = lean_box(0);
x_7 = x_30;
x_12 = x_28;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_7);
lean_ctor_set(x_36, 1, x_12);
return x_36;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_11 = l_Array_append___rarg(x_1, x_5);
x_12 = l_Lean_instInhabitedExpr;
x_13 = lean_array_get(x_12, x_2, x_3);
x_14 = l_Array_ofSubarray___rarg(x_4);
x_15 = l_Lean_mkAppN(x_13, x_14);
lean_dec(x_14);
x_16 = 0;
x_17 = 1;
x_18 = l_Lean_Meta_mkForallFVars(x_11, x_15, x_16, x_17, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
x_13 = lean_nat_add(x_10, x_12);
lean_inc(x_13);
lean_inc(x_3);
x_14 = l_Array_toSubarray___rarg(x_3, x_10, x_13);
x_15 = l_Array_ofSubarray___rarg(x_14);
lean_dec(x_14);
x_16 = lean_array_get_size(x_3);
lean_inc(x_3);
x_17 = l_Array_toSubarray___rarg(x_3, x_13, x_16);
x_18 = lean_mk_empty_array_with_capacity(x_12);
x_19 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_20 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___spec__1(x_1, x_3, x_11, x_12, x_19, lean_box(0), x_18, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__1___boxed), 10, 4);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_15);
lean_closure_set(x_23, 2, x_2);
lean_closure_set(x_23, 3, x_17);
x_24 = l_Lean_Meta_withLocalDeclsD___at_Lean_Meta_IndPredBelow_mkCtorType_addHeaderVars___spec__2(x_21, x_23, x_5, x_6, x_7, x_8, x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
x_9 = l_Lean_instInhabitedExpr;
x_10 = lean_array_get(x_9, x_8, x_2);
lean_dec(x_8);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__2___boxed), 9, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
x_12 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_10, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBrecOnDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl_mkType(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = l_Lean_instInhabitedInductiveVal;
x_13 = lean_array_get(x_12, x_11, x_2);
lean_dec(x_2);
lean_dec(x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_14, 2);
lean_dec(x_18);
x_19 = lean_box(0);
x_20 = l_Lean_brecOnSuffix;
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = l_Lean_Name_append(x_16, x_21);
lean_dec(x_16);
lean_inc(x_9);
x_23 = l_Lean_Meta_IndPredBelow_proveBrecOn(x_1, x_13, x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 0, x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_23, 0, x_27);
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_23, 0);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_23);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 0, x_22);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_14);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_22);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_9);
x_33 = !lean_is_exclusive(x_23);
if (x_33 == 0)
{
return x_23;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_23, 0);
x_35 = lean_ctor_get(x_23, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_23);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_14, 0);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_14);
x_39 = lean_box(0);
x_40 = l_Lean_brecOnSuffix;
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = l_Lean_Name_append(x_37, x_41);
lean_dec(x_37);
lean_inc(x_9);
x_43 = l_Lean_Meta_IndPredBelow_proveBrecOn(x_1, x_13, x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
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
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_38);
lean_ctor_set(x_47, 2, x_9);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_48);
if (lean_is_scalar(x_46)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_46;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_45);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_42);
lean_dec(x_38);
lean_dec(x_9);
x_51 = lean_ctor_get(x_43, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_43, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_53 = x_43;
} else {
 lean_dec_ref(x_43);
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
else
{
uint8_t x_55; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_8);
if (x_55 == 0)
{
return x_8;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_8, 0);
x_57 = lean_ctor_get(x_8, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_8);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = l_Lean_Meta_IndPredBelow_getBelowIndices_loop(x_2, x_6, x_3, x_4, x_13, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_nat_dec_le(x_11, x_4);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Lean_instInhabitedExpr;
x_14 = lean_array_get(x_13, x_1, x_4);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_14);
x_15 = l_Lean_Meta_inferType(x_14, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Expr_bindingDomain_x21(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_isExprDefEq(x_16, x_18, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_getBelowIndices_loop___lambda__1___boxed), 11, 4);
lean_closure_set(x_25, 0, x_5);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_3);
lean_closure_set(x_25, 3, x_4);
x_26 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(x_2, x_24, x_25, x_6, x_7, x_8, x_9, x_22);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_dec(x_19);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
x_30 = lean_array_push(x_29, x_14);
x_31 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_32 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_30, x_31, x_2, x_6, x_7, x_8, x_9, x_27);
lean_dec(x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_5);
x_35 = lean_array_push(x_3, x_5);
x_36 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_37 = lean_nat_add(x_5, x_28);
lean_dec(x_5);
x_2 = x_33;
x_3 = x_35;
x_4 = x_36;
x_5 = x_37;
x_10 = x_34;
goto _start;
}
else
{
uint8_t x_39; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_32);
if (x_39 == 0)
{
return x_32;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_32, 0);
x_41 = lean_ctor_get(x_32, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_32);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_15);
if (x_47 == 0)
{
return x_15;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_15, 0);
x_49 = lean_ctor_get(x_15, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_15);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_10);
return x_51;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_IndPredBelow_getBelowIndices_loop___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_mk_empty_array_with_capacity(x_11);
x_13 = l_Lean_Meta_IndPredBelow_getBelowIndices_loop(x_2, x_10, x_12, x_11, x_11, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = lean_box(0);
x_12 = lean_mk_string("below");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = l_Lean_Name_append(x_10, x_13);
lean_dec(x_10);
x_15 = l_Lean_Name_updatePrefix(x_1, x_14);
x_16 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_15, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = l_Lean_getConstInfoInduct___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoForKernelRec___spec__1(x_19, x_2, x_3, x_4, x_5, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_ctor_get(x_8, 0);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_ctor_get(x_22, 2);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_getBelowIndices___lambda__1___boxed), 8, 1);
lean_closure_set(x_24, 0, x_17);
x_25 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_23, x_24, x_2, x_3, x_4, x_5, x_21);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
return x_20;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_20, 0);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_7);
if (x_34 == 0)
{
return x_7;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_7, 0);
x_36 = lean_ctor_get(x_7, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_7);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_getBelowIndices___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_getBelowIndices___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_array_set(x_4, x_5, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_5, x_14);
lean_dec(x_5);
x_3 = x_11;
x_4 = x_13;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
x_17 = l_Lean_Expr_constName_x21(x_3);
lean_inc(x_17);
x_18 = l_Lean_getConstInfoInduct___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoForKernelRec___spec__1(x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_unsigned_to_nat(0u);
lean_inc(x_21);
lean_inc(x_4);
x_23 = l_Array_toSubarray___rarg(x_4, x_22, x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_mk_empty_array_with_capacity(x_24);
lean_inc(x_25);
x_26 = lean_array_push(x_25, x_1);
x_27 = l_Array_ofSubarray___rarg(x_23);
lean_dec(x_23);
x_28 = l_Array_append___rarg(x_27, x_26);
lean_dec(x_26);
x_29 = lean_array_get_size(x_4);
x_30 = l_Array_toSubarray___rarg(x_4, x_21, x_29);
x_31 = l_Array_ofSubarray___rarg(x_30);
lean_dec(x_30);
x_32 = l_Array_append___rarg(x_28, x_31);
lean_dec(x_31);
x_33 = lean_array_push(x_25, x_2);
x_34 = l_Array_append___rarg(x_32, x_33);
lean_dec(x_33);
x_35 = lean_box(0);
x_36 = lean_mk_string("below");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = l_Lean_Name_append(x_17, x_37);
x_39 = l_Lean_Expr_constLevels_x21(x_3);
lean_dec(x_3);
x_40 = l_Lean_mkConst(x_38, x_39);
x_41 = l_Lean_mkAppN(x_40, x_34);
lean_dec(x_34);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_17);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set(x_18, 0, x_42);
return x_18;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_43 = lean_ctor_get(x_18, 0);
x_44 = lean_ctor_get(x_18, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_18);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_unsigned_to_nat(0u);
lean_inc(x_45);
lean_inc(x_4);
x_47 = l_Array_toSubarray___rarg(x_4, x_46, x_45);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_mk_empty_array_with_capacity(x_48);
lean_inc(x_49);
x_50 = lean_array_push(x_49, x_1);
x_51 = l_Array_ofSubarray___rarg(x_47);
lean_dec(x_47);
x_52 = l_Array_append___rarg(x_51, x_50);
lean_dec(x_50);
x_53 = lean_array_get_size(x_4);
x_54 = l_Array_toSubarray___rarg(x_4, x_45, x_53);
x_55 = l_Array_ofSubarray___rarg(x_54);
lean_dec(x_54);
x_56 = l_Array_append___rarg(x_52, x_55);
lean_dec(x_55);
x_57 = lean_array_push(x_49, x_2);
x_58 = l_Array_append___rarg(x_56, x_57);
lean_dec(x_57);
x_59 = lean_box(0);
x_60 = lean_mk_string("below");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = l_Lean_Name_append(x_17, x_61);
x_63 = l_Lean_Expr_constLevels_x21(x_3);
lean_dec(x_3);
x_64 = l_Lean_mkConst(x_62, x_63);
x_65 = l_Lean_mkAppN(x_64, x_58);
lean_dec(x_58);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_17);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_44);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_18);
if (x_68 == 0)
{
return x_18;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_18, 0);
x_70 = lean_ctor_get(x_18, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_18);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
}
lean_object* l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_instInhabitedExpr;
x_10 = lean_array_get(x_9, x_2, x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_11 = l_Lean_Meta_inferType(x_10, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_levelZero;
x_15 = l_Lean_mkSort(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux(x_12, x_16);
lean_inc(x_17);
x_18 = lean_mk_array(x_17, x_15);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_17, x_19);
lean_dec(x_17);
x_21 = l_Lean_Expr_withAppAux___at___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___spec__1(x_1, x_10, x_12, x_18, x_20, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_withAppAux___at___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
lean_object* l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
lean_dec(x_1);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
case 2:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_4(x_2, x_8, x_9, x_10, x_11);
return x_12;
}
case 5:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_2(x_3, x_13, x_14);
return x_15;
}
default: 
{
lean_object* x_16; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_apply_1(x_5, x_1);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_4, x_5, x_6, x_7);
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
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
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
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_apply_2(x_4, x_1, x_2);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = lean_nat_dec_eq(x_2, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_2, x_9);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_apply_2(x_4, x_5, x_5);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_apply_4(x_2, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
case 1:
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
case 3:
{
uint8_t x_17; lean_object* x_18; uint8_t x_19; 
x_17 = 0;
lean_inc(x_1);
x_18 = l_Lean_Meta_Match_Pattern_toExpr_visit(x_17, x_1, x_2, x_3, x_4, x_5, x_6);
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_1, 0);
lean_dec(x_20);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 0);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_22);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_free_object(x_1);
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
else
{
lean_dec(x_1);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_18, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_32 = x_18;
} else {
 lean_dec_ref(x_18);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_30);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_18, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_18, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_37 = x_18;
} else {
 lean_dec_ref(x_18);
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
default: 
{
uint8_t x_39; lean_object* x_40; 
x_39 = 0;
x_40 = l_Lean_Meta_Match_Pattern_toExpr_visit(x_39, x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
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
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_40);
if (x_48 == 0)
{
return x_40;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_40, 0);
x_50 = lean_ctor_get(x_40, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_40);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getFVarLocalDecl(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_array_push(x_1, x_10);
x_12 = l_Lean_Expr_fvarId_x21(x_2);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = lean_array_push(x_1, x_15);
x_18 = l_Lean_Expr_fvarId_x21(x_2);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_8);
if (x_22 == 0)
{
return x_8;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_8, 0);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_8);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_array_set(x_4, x_5, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_5, x_14);
lean_dec(x_5);
x_3 = x_11;
x_4 = x_13;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
lean_inc(x_18);
x_19 = lean_array_push(x_18, x_2);
x_20 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_1, x_19, x_20, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
x_26 = lean_mk_string("h");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_27, x_8, x_9, x_23);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1___lambda__1___boxed), 7, 1);
lean_closure_set(x_31, 0, x_18);
x_32 = 0;
x_33 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_29, x_32, x_24, x_31, x_6, x_7, x_8, x_9, x_30);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
x_13 = 1;
x_14 = x_3 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_9, x_3, x_15);
x_3 = x_14;
x_4 = x_16;
goto _start;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_nat_dec_le(x_12, x_5);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_4, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_4, x_16);
lean_dec(x_4);
x_18 = l_instInhabitedNat;
x_19 = lean_array_get(x_18, x_1, x_5);
x_20 = l_Lean_Meta_Match_instInhabitedPattern;
x_21 = lean_array_get(x_20, x_2, x_5);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_array_set(x_6, x_19, x_22);
lean_dec(x_19);
x_24 = lean_ctor_get(x_3, 2);
x_25 = lean_nat_add(x_5, x_24);
lean_dec(x_5);
x_4 = x_17;
x_5 = x_25;
x_6 = x_23;
goto _start;
}
else
{
lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_4);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_6);
lean_ctor_set(x_27, 1, x_11);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_5);
lean_dec(x_4);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_6);
lean_ctor_set(x_28, 1, x_11);
return x_28;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
x_12 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (x_4 == 0)
{
lean_object* x_10; lean_object* x_11; 
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_mk_string("");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = l_Lean_Meta_Match_Pattern_toMessageData(x_1);
lean_inc(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_mk_string(" ↦ ");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Meta_Match_Pattern_toMessageData(x_2);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_13);
x_22 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_3, x_21, x_5, x_6, x_7, x_8, x_9);
return x_22;
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_mkFVar(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_11 = l_Lean_Meta_inferType(x_10, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_levelZero;
x_15 = l_Lean_mkSort(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux(x_12, x_16);
lean_inc(x_17);
x_18 = lean_mk_array(x_17, x_15);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_17, x_19);
lean_dec(x_17);
x_21 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1(x_1, x_10, x_12, x_18, x_20, x_4, x_5, x_6, x_7, x_13);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_3, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_3, 3);
lean_inc(x_29);
lean_inc(x_26);
x_30 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_26, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
x_34 = lean_box(0);
x_35 = lean_mk_string("below");
x_36 = lean_name_mk_string(x_34, x_35);
x_37 = l_Lean_Name_append(x_33, x_36);
lean_dec(x_33);
lean_inc(x_26);
x_38 = l_Lean_Name_updatePrefix(x_26, x_37);
x_39 = l_Lean_getConstInfoCtor___at_Lean_Meta_IndPredBelow_mkConstructor___spec__1(x_38, x_4, x_5, x_6, x_7, x_32);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_42 = l_Lean_Meta_IndPredBelow_getBelowIndices(x_26, x_4, x_5, x_6, x_7, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; size_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_31, 3);
lean_inc(x_45);
lean_dec(x_31);
x_46 = lean_array_get_size(x_43);
x_47 = l_Array_toSubarray___rarg(x_43, x_45, x_46);
x_48 = l_Array_ofSubarray___rarg(x_47);
lean_dec(x_47);
x_49 = lean_array_get_size(x_48);
x_50 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_51 = 0;
x_52 = x_48;
x_53 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__2(x_40, x_50, x_51, x_52);
x_54 = x_53;
x_55 = lean_ctor_get(x_40, 4);
lean_inc(x_55);
x_56 = lean_box(0);
x_57 = lean_mk_array(x_55, x_56);
x_58 = l_List_redLength___rarg(x_29);
x_59 = lean_mk_empty_array_with_capacity(x_58);
lean_dec(x_58);
x_60 = l_List_toArrayAux___rarg(x_29, x_59);
x_61 = lean_array_get_size(x_60);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_unsigned_to_nat(1u);
lean_inc(x_61);
x_64 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_61);
lean_ctor_set(x_64, 2, x_63);
x_65 = l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__3(x_54, x_60, x_64, x_61, x_62, x_57, x_4, x_5, x_6, x_7, x_44);
lean_dec(x_64);
lean_dec(x_60);
lean_dec(x_54);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_List_redLength___rarg(x_28);
x_69 = lean_mk_empty_array_with_capacity(x_68);
lean_dec(x_68);
x_70 = l_List_toArrayAux___rarg(x_28, x_69);
lean_inc(x_1);
x_71 = lean_array_push(x_70, x_1);
x_72 = lean_ctor_get(x_40, 0);
lean_inc(x_72);
lean_dec(x_40);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
lean_inc(x_27);
lean_inc(x_73);
x_74 = l_Lean_mkConst(x_73, x_27);
x_75 = l_Lean_mkAppN(x_74, x_71);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_76 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields(x_1, x_75, x_2, x_66, x_4, x_5, x_6, x_7, x_67);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
lean_inc(x_79);
x_81 = lean_array_to_list(lean_box(0), x_79);
x_82 = lean_array_to_list(lean_box(0), x_71);
x_83 = lean_array_to_list(lean_box(0), x_80);
x_84 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_84, 0, x_73);
lean_ctor_set(x_84, 1, x_27);
lean_ctor_set(x_84, 2, x_82);
lean_ctor_set(x_84, 3, x_83);
x_85 = lean_mk_string("Meta");
x_86 = lean_name_mk_string(x_34, x_85);
x_87 = lean_mk_string("IndPredBelow");
x_88 = lean_name_mk_string(x_86, x_87);
x_89 = lean_mk_string("match");
x_90 = lean_name_mk_string(x_88, x_89);
lean_inc(x_90);
x_91 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__1___boxed), 7, 1);
lean_closure_set(x_91, 0, x_90);
x_92 = lean_alloc_closure((void*)(l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___lambda__1___boxed), 5, 0);
x_93 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_93, 0, x_92);
lean_closure_set(x_93, 1, x_91);
lean_inc(x_84);
x_94 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__2___boxed), 9, 3);
lean_closure_set(x_94, 0, x_3);
lean_closure_set(x_94, 1, x_84);
lean_closure_set(x_94, 2, x_90);
x_95 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_95, 0, x_93);
lean_closure_set(x_95, 1, x_94);
x_96 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__3___boxed), 8, 2);
lean_closure_set(x_96, 0, x_79);
lean_closure_set(x_96, 1, x_84);
x_97 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_97, 0, x_95);
lean_closure_set(x_97, 1, x_96);
x_98 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_81, x_97, x_4, x_5, x_6, x_7, x_78);
return x_98;
}
else
{
uint8_t x_99; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_99 = !lean_is_exclusive(x_76);
if (x_99 == 0)
{
return x_76;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_76, 0);
x_101 = lean_ctor_get(x_76, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_76);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_40);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_42);
if (x_103 == 0)
{
return x_42;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_42, 0);
x_105 = lean_ctor_get(x_42, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_42);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_39);
if (x_107 == 0)
{
return x_39;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_39, 0);
x_109 = lean_ctor_get(x_39, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_39);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_111 = !lean_is_exclusive(x_30);
if (x_111 == 0)
{
return x_30;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_30, 0);
x_113 = lean_ctor_get(x_30, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_30);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
case 5:
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_3);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_3, 0);
x_117 = lean_ctor_get(x_3, 1);
x_118 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow(x_1, x_2, x_117, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_118) == 0)
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_118);
if (x_119 == 0)
{
lean_object* x_120; uint8_t x_121; 
x_120 = lean_ctor_get(x_118, 0);
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_120, 1);
lean_ctor_set(x_3, 1, x_122);
lean_ctor_set(x_120, 1, x_3);
return x_118;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_120, 0);
x_124 = lean_ctor_get(x_120, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_120);
lean_ctor_set(x_3, 1, x_124);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_3);
lean_ctor_set(x_118, 0, x_125);
return x_118;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_126 = lean_ctor_get(x_118, 0);
x_127 = lean_ctor_get(x_118, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_118);
x_128 = lean_ctor_get(x_126, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_130 = x_126;
} else {
 lean_dec_ref(x_126);
 x_130 = lean_box(0);
}
lean_ctor_set(x_3, 1, x_129);
if (lean_is_scalar(x_130)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_130;
}
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_3);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_127);
return x_132;
}
}
else
{
uint8_t x_133; 
lean_free_object(x_3);
lean_dec(x_116);
x_133 = !lean_is_exclusive(x_118);
if (x_133 == 0)
{
return x_118;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_118, 0);
x_135 = lean_ctor_get(x_118, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_118);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_3, 0);
x_138 = lean_ctor_get(x_3, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_3);
x_139 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow(x_1, x_2, x_138, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_142 = x_139;
} else {
 lean_dec_ref(x_139);
 x_142 = lean_box(0);
}
x_143 = lean_ctor_get(x_140, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_140, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_145 = x_140;
} else {
 lean_dec_ref(x_140);
 x_145 = lean_box(0);
}
x_146 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_146, 0, x_137);
lean_ctor_set(x_146, 1, x_144);
if (lean_is_scalar(x_145)) {
 x_147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_147 = x_145;
}
lean_ctor_set(x_147, 0, x_143);
lean_ctor_set(x_147, 1, x_146);
if (lean_is_scalar(x_142)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_142;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_141);
return x_148;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_137);
x_149 = lean_ctor_get(x_139, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_139, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_151 = x_139;
} else {
 lean_dec_ref(x_139);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
}
default: 
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_153 = lean_unsigned_to_nat(0u);
x_154 = lean_mk_empty_array_with_capacity(x_153);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_3);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_8);
return x_156;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_11);
x_12 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop(x_1, x_3, x_2, x_4, x_11, x_11, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_name_eq(x_6, x_7);
return x_8;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
if (lean_obj_tag(x_10) == 5)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_array_set(x_11, x_12, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_10 = x_18;
x_11 = x_20;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_12);
lean_dec(x_11);
x_24 = l_Lean_Expr_constName_x3f(x_10);
lean_dec(x_10);
lean_inc(x_2);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_2);
x_26 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__1(x_24, x_25);
lean_dec(x_25);
lean_dec(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_8);
x_27 = lean_array_push(x_4, x_7);
x_28 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop(x_1, x_2, x_9, x_3, x_27, x_5, x_13, x_14, x_15, x_16, x_17);
return x_28;
}
else
{
lean_object* x_29; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_29 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow(x_1, x_2, x_7, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
lean_inc(x_32);
x_34 = lean_array_to_list(lean_box(0), x_32);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_6, x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_33);
x_38 = lean_array_set(x_3, x_36, x_37);
lean_dec(x_36);
x_39 = l_Array_append___rarg(x_5, x_32);
lean_dec(x_32);
if (lean_obj_tag(x_7) == 2)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_7);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_8);
x_41 = lean_array_push(x_4, x_40);
x_42 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop), 11, 6);
lean_closure_set(x_42, 0, x_1);
lean_closure_set(x_42, 1, x_2);
lean_closure_set(x_42, 2, x_9);
lean_closure_set(x_42, 3, x_38);
lean_closure_set(x_42, 4, x_41);
lean_closure_set(x_42, 5, x_39);
x_43 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_34, x_42, x_13, x_14, x_15, x_16, x_31);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_8);
x_44 = lean_array_push(x_4, x_7);
x_45 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop), 11, 6);
lean_closure_set(x_45, 0, x_1);
lean_closure_set(x_45, 1, x_2);
lean_closure_set(x_45, 2, x_9);
lean_closure_set(x_45, 3, x_38);
lean_closure_set(x_45, 4, x_44);
lean_closure_set(x_45, 5, x_39);
x_46 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_34, x_45, x_13, x_14, x_15, x_16, x_31);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_8);
x_13 = l_Lean_Meta_getFVarLocalDecl(x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
x_16 = l_Lean_mkApp(x_1, x_7);
x_17 = l_Lean_Expr_fvarId_x21(x_7);
lean_dec(x_7);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_array_push(x_2, x_18);
x_20 = lean_array_push(x_3, x_14);
x_21 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop(x_4, x_5, x_16, x_6, x_19, x_20, x_8, x_9, x_10, x_11, x_15);
return x_21;
}
else
{
uint8_t x_22; 
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
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_13);
if (x_22 == 0)
{
return x_13;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_13, 0);
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_13);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_array_get_size(x_4);
x_13 = lean_array_get_size(x_5);
x_14 = lean_nat_dec_le(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = lean_array_get(x_15, x_4, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
x_17 = l_Lean_Meta_inferType(x_3, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_box(0);
x_21 = lean_mk_string("a");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_22, x_9, x_10, x_19);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Expr_bindingDomain_x21(x_18);
lean_dec(x_18);
x_27 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___lambda__1), 12, 6);
lean_closure_set(x_27, 0, x_3);
lean_closure_set(x_27, 1, x_5);
lean_closure_set(x_27, 2, x_6);
lean_closure_set(x_27, 3, x_1);
lean_closure_set(x_27, 4, x_2);
lean_closure_set(x_27, 5, x_4);
x_28 = 0;
x_29 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_24, x_28, x_26, x_27, x_7, x_8, x_9, x_10, x_25);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
lean_inc(x_34);
lean_dec(x_16);
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_34);
x_36 = l_Lean_Meta_Match_Pattern_toExpr_visit(x_35, x_34, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_37);
x_39 = l_Lean_mkApp(x_3, x_37);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_37);
x_40 = l_Lean_Meta_inferType(x_37, x_7, x_8, x_9, x_10, x_38);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_levelZero;
x_44 = l_Lean_mkSort(x_43);
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_Lean_Expr_getAppNumArgsAux(x_41, x_45);
lean_inc(x_46);
x_47 = lean_mk_array(x_46, x_44);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_sub(x_46, x_48);
lean_dec(x_46);
x_50 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__2(x_1, x_2, x_4, x_5, x_6, x_13, x_34, x_37, x_39, x_41, x_47, x_49, x_7, x_8, x_9, x_10, x_42);
lean_dec(x_13);
return x_50;
}
else
{
uint8_t x_51; 
lean_dec(x_39);
lean_dec(x_37);
lean_dec(x_34);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_40);
if (x_51 == 0)
{
return x_40;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_40, 0);
x_53 = lean_ctor_get(x_40, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_40);
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
lean_dec(x_34);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_36);
if (x_55 == 0)
{
return x_36;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_36, 0);
x_57 = lean_ctor_get(x_36, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_36);
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
lean_object* x_59; lean_object* x_60; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_6);
lean_ctor_set(x_59, 1, x_5);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_11);
return x_60;
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__2(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkBelowMatcher_transformFields_loop___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_6);
return x_18;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_array_set(x_1, x_2, x_6);
x_13 = lean_ctor_get(x_3, 0);
x_14 = l_List_append___rarg(x_4, x_5);
x_15 = lean_array_to_list(lean_box(0), x_12);
lean_inc(x_13);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_array_to_list(lean_box(0), x_12);
x_15 = lean_array_push(x_1, x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_toInaccessible), 6, 1);
lean_closure_set(x_16, 0, x_2);
lean_inc(x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__1___boxed), 11, 5);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_14);
x_18 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
x_19 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_14, x_18, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 2);
lean_inc(x_11);
x_12 = l_List_redLength___rarg(x_11);
x_13 = lean_mk_empty_array_with_capacity(x_12);
lean_dec(x_12);
x_14 = l_List_toArrayAux___rarg(x_11, x_13);
x_15 = l_Lean_Meta_Match_instInhabitedPattern;
x_16 = lean_array_get(x_15, x_14, x_2);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_convertToBelow), 8, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_16);
lean_inc(x_10);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__2), 11, 5);
lean_closure_set(x_18, 0, x_14);
lean_closure_set(x_18, 1, x_16);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_10);
x_19 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_10, x_19, x_5, x_6, x_7, x_8, x_9);
return x_20;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_10 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Array_toSubarray___rarg(x_1, x_10, x_2);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = lean_array_push(x_13, x_4);
x_15 = l_Array_ofSubarray___rarg(x_11);
lean_dec(x_11);
x_16 = l_Array_append___rarg(x_15, x_14);
lean_dec(x_14);
x_17 = lean_array_get_size(x_1);
x_18 = l_Array_toSubarray___rarg(x_1, x_2, x_17);
x_19 = l_Array_ofSubarray___rarg(x_18);
lean_dec(x_18);
x_20 = l_Array_append___rarg(x_16, x_19);
lean_dec(x_19);
x_21 = 0;
x_22 = 1;
lean_inc(x_5);
x_23 = l_Lean_Meta_mkLambdaFVars(x_20, x_3, x_21, x_22, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
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
x_27 = lean_box(0);
x_28 = lean_mk_string("Meta");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("IndPredBelow");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("match");
x_33 = lean_name_mk_string(x_31, x_32);
x_50 = lean_st_ref_get(x_8, x_25);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 3);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get_uint8(x_52, sizeof(void*)*1);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_34 = x_21;
x_35 = x_54;
goto block_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_dec(x_50);
lean_inc(x_33);
x_56 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_33, x_5, x_6, x_7, x_8, x_55);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_unbox(x_57);
lean_dec(x_57);
x_34 = x_59;
x_35 = x_58;
goto block_49;
}
block_49:
{
if (x_34 == 0)
{
lean_object* x_36; 
lean_dec(x_33);
lean_dec(x_5);
if (lean_is_scalar(x_26)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_26;
}
lean_ctor_set(x_36, 0, x_24);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_26);
x_37 = lean_mk_string("motive := ");
x_38 = l_Lean_stringToMessageData(x_37);
lean_dec(x_37);
lean_inc(x_24);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_24);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_string("");
x_42 = l_Lean_stringToMessageData(x_41);
lean_dec(x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_33, x_43, x_5, x_6, x_7, x_8, x_35);
lean_dec(x_5);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
lean_ctor_set(x_44, 0, x_24);
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_24);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_5);
x_60 = !lean_is_exclusive(x_23);
if (x_60 == 0)
{
return x_23;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_23, 0);
x_62 = lean_ctor_get(x_23, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_23);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_1, 5);
x_12 = lean_array_get_size(x_11);
x_13 = lean_box(0);
x_14 = lean_mk_string("h_below");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_15, x_8, x_9, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Expr_replaceFVars(x_2, x_3, x_4);
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__1___boxed), 9, 3);
lean_closure_set(x_20, 0, x_4);
lean_closure_set(x_20, 1, x_12);
lean_closure_set(x_20, 2, x_5);
x_21 = 0;
x_22 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_17, x_21, x_19, x_20, x_6, x_7, x_8, x_9, x_18);
return x_22;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__2___boxed), 10, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
x_11 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(x_9, x_10, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_4) == 0)
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
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__1(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_16);
lean_ctor_set(x_18, 0, x_4);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_4, 1, x_21);
lean_ctor_set(x_4, 0, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_free_object(x_4);
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
uint8_t x_28; 
lean_free_object(x_4);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_4, 0);
x_33 = lean_ctor_get(x_4, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_34 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_addBelowPattern(x_1, x_2, x_3, x_32, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__1(x_1, x_2, x_3, x_33, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
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
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_38);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_35);
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_45 = x_37;
} else {
 lean_dec_ref(x_37);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = lean_ctor_get(x_34, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_49 = x_34;
} else {
 lean_dec_ref(x_34);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_LocalDecl_toExpr(x_9);
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
lean_object* l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_repr(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3___rarg), 1, 0);
return x_4;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_15 = l_List_redLength___rarg(x_1);
x_16 = lean_mk_empty_array_with_capacity(x_15);
lean_dec(x_15);
x_17 = l_List_toArrayAux___rarg(x_1, x_16);
x_18 = l_List_redLength___rarg(x_2);
x_19 = lean_mk_empty_array_with_capacity(x_18);
lean_dec(x_18);
x_20 = l_List_toArrayAux___rarg(x_2, x_19);
x_21 = lean_array_get_size(x_20);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
x_24 = x_20;
x_25 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2(x_22, x_23, x_24);
x_26 = x_25;
x_27 = lean_array_get_size(x_17);
x_28 = lean_array_get_size(x_26);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_eq(x_27, x_29);
lean_inc(x_27);
lean_inc(x_26);
x_31 = l_Array_toSubarray___rarg(x_26, x_29, x_27);
x_32 = l_Array_ofSubarray___rarg(x_31);
lean_dec(x_31);
x_33 = lean_box(0);
x_34 = lean_mk_string("Meta");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("IndPredBelow");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("match");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_st_ref_get(x_13, x_14);
if (x_30 == 0)
{
lean_dec(x_28);
x_41 = x_8;
goto block_159;
}
else
{
uint8_t x_160; 
x_160 = lean_nat_dec_eq(x_28, x_29);
lean_dec(x_28);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_161 = lean_array_get_size(x_8);
x_162 = lean_unsigned_to_nat(1u);
x_163 = l_Array_toSubarray___rarg(x_8, x_162, x_161);
x_164 = l_Array_ofSubarray___rarg(x_163);
lean_dec(x_163);
x_41 = x_164;
goto block_159;
}
else
{
x_41 = x_8;
goto block_159;
}
}
block_159:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_102; lean_object* x_103; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
lean_inc(x_27);
lean_inc(x_41);
x_42 = l_Array_toSubarray___rarg(x_41, x_29, x_27);
x_43 = l_Array_ofSubarray___rarg(x_42);
lean_dec(x_42);
x_44 = l_Lean_Expr_replaceFVars(x_9, x_43, x_32);
lean_dec(x_43);
x_149 = lean_ctor_get(x_40, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_149, 3);
lean_inc(x_150);
lean_dec(x_149);
x_151 = lean_ctor_get_uint8(x_150, sizeof(void*)*1);
lean_dec(x_150);
if (x_151 == 0)
{
lean_object* x_152; uint8_t x_153; 
x_152 = lean_ctor_get(x_40, 1);
lean_inc(x_152);
lean_dec(x_40);
x_153 = 0;
x_102 = x_153;
x_103 = x_152;
goto block_148;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_154 = lean_ctor_get(x_40, 1);
lean_inc(x_154);
lean_dec(x_40);
lean_inc(x_39);
x_155 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_39, x_10, x_11, x_12, x_13, x_154);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_unbox(x_156);
lean_dec(x_156);
x_102 = x_158;
x_103 = x_157;
goto block_148;
}
block_101:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; lean_object* x_56; 
x_46 = lean_array_get_size(x_41);
lean_inc(x_27);
x_47 = l_Array_toSubarray___rarg(x_41, x_27, x_46);
x_48 = l_Array_ofSubarray___rarg(x_47);
lean_dec(x_47);
x_49 = l_Array_append___rarg(x_32, x_48);
lean_dec(x_48);
x_50 = lean_array_get_size(x_26);
x_51 = l_Array_toSubarray___rarg(x_26, x_27, x_50);
x_52 = l_Array_ofSubarray___rarg(x_51);
lean_dec(x_51);
x_53 = l_Array_append___rarg(x_49, x_52);
lean_dec(x_52);
x_54 = 0;
x_55 = 1;
lean_inc(x_10);
x_56 = l_Lean_Meta_mkLambdaFVars(x_53, x_44, x_54, x_55, x_10, x_11, x_12, x_13, x_45);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
x_87 = lean_st_ref_get(x_13, x_58);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_88, 3);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_ctor_get_uint8(x_89, sizeof(void*)*1);
lean_dec(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
lean_dec(x_87);
x_60 = x_54;
x_61 = x_91;
goto block_86;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_92 = lean_ctor_get(x_87, 1);
lean_inc(x_92);
lean_dec(x_87);
lean_inc(x_39);
x_93 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_39, x_10, x_11, x_12, x_13, x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = lean_unbox(x_94);
lean_dec(x_94);
x_60 = x_96;
x_61 = x_95;
goto block_86;
}
block_86:
{
if (x_60 == 0)
{
lean_object* x_62; 
lean_dec(x_39);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
if (lean_is_scalar(x_59)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_59;
}
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_59);
x_63 = lean_mk_string("alt ");
x_64 = l_Lean_stringToMessageData(x_63);
lean_dec(x_63);
x_65 = l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3___rarg(x_6);
x_66 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_string(":\n");
x_69 = l_Lean_stringToMessageData(x_68);
lean_dec(x_68);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_7);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string(" ↦ ");
x_74 = l_Lean_stringToMessageData(x_73);
lean_dec(x_73);
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_57);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_57);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("");
x_79 = l_Lean_stringToMessageData(x_78);
lean_dec(x_78);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_39, x_80, x_10, x_11, x_12, x_13, x_61);
lean_dec(x_10);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_81, 0);
lean_dec(x_83);
lean_ctor_set(x_81, 0, x_57);
return x_81;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_57);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_39);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_97 = !lean_is_exclusive(x_56);
if (x_97 == 0)
{
return x_56;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_56, 0);
x_99 = lean_ctor_get(x_56, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_56);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
block_148:
{
if (x_102 == 0)
{
lean_dec(x_17);
x_45 = x_103;
goto block_101;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; size_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_104 = lean_mk_string("xs = ");
x_105 = l_Lean_stringToMessageData(x_104);
lean_dec(x_104);
lean_inc(x_41);
x_106 = lean_array_to_list(lean_box(0), x_41);
x_107 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_106);
x_108 = l_Lean_MessageData_ofList(x_107);
lean_dec(x_107);
x_109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_109, 0, x_105);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_mk_string("; oldFVars = ");
x_111 = l_Lean_stringToMessageData(x_110);
lean_dec(x_110);
x_112 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_usize_of_nat(x_27);
x_114 = x_17;
x_115 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2(x_113, x_23, x_114);
x_116 = x_115;
x_117 = lean_array_to_list(lean_box(0), x_116);
x_118 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_117);
x_119 = l_Lean_MessageData_ofList(x_118);
lean_dec(x_118);
x_120 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_120, 0, x_112);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string("; fvars = ");
x_122 = l_Lean_stringToMessageData(x_121);
lean_dec(x_121);
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_122);
lean_inc(x_26);
x_124 = lean_array_to_list(lean_box(0), x_26);
x_125 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_124);
x_126 = l_Lean_MessageData_ofList(x_125);
lean_dec(x_125);
x_127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_127, 0, x_123);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_mk_string("; new = ");
x_129 = l_Lean_stringToMessageData(x_128);
lean_dec(x_128);
x_130 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_array_get_size(x_41);
lean_inc(x_27);
lean_inc(x_41);
x_132 = l_Array_toSubarray___rarg(x_41, x_27, x_131);
x_133 = l_Array_ofSubarray___rarg(x_132);
lean_dec(x_132);
lean_inc(x_32);
x_134 = l_Array_append___rarg(x_32, x_133);
lean_dec(x_133);
x_135 = lean_array_get_size(x_26);
lean_inc(x_27);
lean_inc(x_26);
x_136 = l_Array_toSubarray___rarg(x_26, x_27, x_135);
x_137 = l_Array_ofSubarray___rarg(x_136);
lean_dec(x_136);
x_138 = l_Array_append___rarg(x_134, x_137);
lean_dec(x_137);
x_139 = lean_array_to_list(lean_box(0), x_138);
x_140 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_139);
x_141 = l_Lean_MessageData_ofList(x_140);
lean_dec(x_140);
x_142 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_142, 0, x_130);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_string("");
x_144 = l_Lean_stringToMessageData(x_143);
lean_dec(x_143);
x_145 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_144);
lean_inc(x_39);
x_146 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_39, x_145, x_10, x_11, x_12, x_13, x_103);
x_147 = lean_ctor_get(x_146, 1);
lean_inc(x_147);
lean_dec(x_146);
x_45 = x_147;
goto block_101;
}
}
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_5, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_5, x_16);
lean_dec(x_5);
x_18 = lean_array_fget(x_4, x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_24);
lean_inc(x_23);
x_25 = l_List_append___rarg(x_23, x_24);
lean_inc(x_20);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_26 = lean_alloc_closure((void*)(l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___lambda__1___boxed), 14, 7);
lean_closure_set(x_26, 0, x_23);
lean_closure_set(x_26, 1, x_24);
lean_closure_set(x_26, 2, x_1);
lean_closure_set(x_26, 3, x_2);
lean_closure_set(x_26, 4, x_3);
lean_closure_set(x_26, 5, x_6);
lean_closure_set(x_26, 6, x_20);
x_27 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg), 7, 2);
lean_closure_set(x_27, 0, x_20);
lean_closure_set(x_27, 1, x_26);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_28 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_25, x_27, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_nat_add(x_6, x_16);
lean_dec(x_6);
x_32 = lean_array_push(x_8, x_29);
x_5 = x_17;
x_6 = x_31;
x_7 = lean_box(0);
x_8 = x_32;
x_13 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
else
{
lean_object* x_38; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_8);
lean_ctor_set(x_38, 1, x_13);
return x_38;
}
}
}
lean_object* l_List_foldl___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_List_append___rarg(x_1, x_5);
x_1 = x_6;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = l_Lean_Meta_Match_Pattern_toMessageData(x_10);
x_13 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6(x_11, x_2, x_3, x_4, x_5, x_6);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_12);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = l_Lean_Meta_Match_Pattern_toMessageData(x_19);
x_22 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6(x_20, x_2, x_3, x_4, x_5, x_6);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6(x_11, x_3, x_4, x_5, x_6, x_7);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = lean_mk_string("Meta");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("IndPredBelow");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("match");
x_21 = lean_name_mk_string(x_19, x_20);
x_37 = lean_st_ref_get(x_6, x_14);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 3);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get_uint8(x_39, sizeof(void*)*1);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = 0;
x_22 = x_42;
x_23 = x_41;
goto block_36;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
lean_inc(x_21);
x_44 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_21, x_3, x_4, x_5, x_6, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_unbox(x_45);
lean_dec(x_45);
x_22 = x_47;
x_23 = x_46;
goto block_36;
}
block_36:
{
if (x_22 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_13);
x_24 = lean_box(0);
x_1 = x_10;
x_2 = x_24;
x_7 = x_23;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_26 = lean_mk_string("");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = l_List_map___at_Lean_Meta_Match_Alt_toMessageData___spec__2(x_13);
x_29 = l_Lean_MessageData_ofList(x_28);
lean_dec(x_28);
lean_inc(x_27);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_27);
x_32 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_21, x_31, x_3, x_4, x_5, x_6, x_23);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_box(0);
x_1 = x_10;
x_2 = x_34;
x_7 = x_33;
goto _start;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_array_push(x_1, x_3);
x_10 = 0;
x_11 = 1;
x_12 = l_Lean_Meta_mkForallFVars(x_9, x_2, x_10, x_11, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_11 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_1, x_4, x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_box(0);
x_18 = lean_mk_string("h_below");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_19, x_8, x_9, x_13);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_4);
x_23 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1___boxed), 8, 2);
lean_closure_set(x_23, 0, x_4);
lean_closure_set(x_23, 1, x_5);
x_24 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_16);
x_25 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_21, x_24, x_16, x_23, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_4);
lean_inc(x_16);
lean_inc(x_3);
x_28 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive(x_3, x_16, x_4, x_6, x_7, x_8, x_9, x_27);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_3, 5);
lean_inc(x_31);
lean_dec(x_3);
x_32 = l_Lean_Expr_replaceFVars(x_16, x_4, x_31);
lean_dec(x_31);
lean_dec(x_4);
lean_dec(x_16);
lean_ctor_set(x_12, 1, x_26);
lean_ctor_set(x_12, 0, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_12);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_15);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_28, 0, x_34);
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_ctor_get(x_3, 5);
lean_inc(x_37);
lean_dec(x_3);
x_38 = l_Lean_Expr_replaceFVars(x_16, x_4, x_37);
lean_dec(x_37);
lean_dec(x_4);
lean_dec(x_16);
lean_ctor_set(x_12, 1, x_26);
lean_ctor_set(x_12, 0, x_35);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_12);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_15);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_26);
lean_free_object(x_12);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_28);
if (x_42 == 0)
{
return x_28;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_28, 0);
x_44 = lean_ctor_get(x_28, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_28);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_free_object(x_12);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_25);
if (x_46 == 0)
{
return x_25;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_25, 0);
x_48 = lean_ctor_get(x_25, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_25);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_50 = lean_ctor_get(x_12, 0);
x_51 = lean_ctor_get(x_12, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_12);
x_52 = lean_box(0);
x_53 = lean_mk_string("h_below");
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_54, x_8, x_9, x_13);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_4);
x_58 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1___boxed), 8, 2);
lean_closure_set(x_58, 0, x_4);
lean_closure_set(x_58, 1, x_5);
x_59 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_51);
x_60 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_56, x_59, x_51, x_58, x_6, x_7, x_8, x_9, x_57);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_4);
lean_inc(x_51);
lean_inc(x_3);
x_63 = l_Lean_Meta_IndPredBelow_mkBelowMatcher_newMotive(x_3, x_51, x_4, x_6, x_7, x_8, x_9, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
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
x_67 = lean_ctor_get(x_3, 5);
lean_inc(x_67);
lean_dec(x_3);
x_68 = l_Lean_Expr_replaceFVars(x_51, x_4, x_67);
lean_dec(x_67);
lean_dec(x_4);
lean_dec(x_51);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_61);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_50);
lean_ctor_set(x_71, 1, x_70);
if (lean_is_scalar(x_66)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_66;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_65);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_61);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_4);
lean_dec(x_3);
x_73 = lean_ctor_get(x_63, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_63, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_75 = x_63;
} else {
 lean_dec_ref(x_63);
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
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_77 = lean_ctor_get(x_60, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_60, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_79 = x_60;
} else {
 lean_dec_ref(x_60);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_81 = !lean_is_exclusive(x_11);
if (x_81 == 0)
{
return x_11;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_11, 0);
x_83 = lean_ctor_get(x_11, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_11);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_Match_getMkMatcherInputInContext(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 2);
lean_inc(x_14);
lean_inc(x_14);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_inc(x_1);
lean_inc(x_4);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__2___boxed), 10, 3);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_4);
lean_closure_set(x_16, 2, x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(x_13, x_15, x_16, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec(x_18);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
x_26 = lean_ctor_get(x_11, 3);
lean_inc(x_26);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_26);
x_27 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__1(x_2, x_4, x_22, x_26, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_closure((void*)(l_List_zip___rarg___lambda__1), 2, 0);
lean_inc(x_28);
x_31 = l_List_zipWith___rarg(x_30, x_26, x_28);
x_32 = l_List_redLength___rarg(x_31);
x_33 = lean_mk_empty_array_with_capacity(x_32);
lean_dec(x_32);
x_34 = l_List_toArrayAux___rarg(x_31, x_33);
x_35 = lean_ctor_get(x_1, 7);
lean_inc(x_35);
x_36 = l_Array_zip___rarg(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
x_37 = lean_array_get_size(x_36);
x_38 = lean_mk_empty_array_with_capacity(x_37);
x_39 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_28);
lean_inc(x_11);
lean_inc(x_1);
x_40 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4(x_1, x_11, x_28, x_36, x_37, x_39, lean_box(0), x_38, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_36);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_11, 0);
lean_inc(x_43);
lean_dec(x_11);
x_44 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_43, x_7, x_8, x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_box(0);
lean_inc(x_28);
x_48 = l_List_foldl___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__5(x_47, x_28);
x_49 = lean_box(0);
lean_inc(x_28);
x_50 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7___boxed), 7, 2);
lean_closure_set(x_50, 0, x_28);
lean_closure_set(x_50, 1, x_49);
x_51 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1___boxed), 6, 0);
x_52 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_52, 0, x_50);
lean_closure_set(x_52, 1, x_51);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_53 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_48, x_52, x_5, x_6, x_7, x_8, x_46);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_add(x_14, x_55);
lean_dec(x_14);
x_57 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_57, 0, x_45);
lean_ctor_set(x_57, 1, x_25);
lean_ctor_set(x_57, 2, x_56);
lean_ctor_set(x_57, 3, x_28);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_58 = l_Lean_Meta_Match_mkMatcher(x_57, x_5, x_6, x_7, x_8, x_54);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_ctor_get(x_59, 3);
lean_inc(x_61);
lean_inc(x_61);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_62 = lean_apply_5(x_61, x_5, x_6, x_7, x_8, x_60);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = lean_ctor_get(x_59, 0);
lean_inc(x_64);
lean_dec(x_59);
lean_inc(x_64);
x_65 = l_Lean_Meta_check(x_64, x_5, x_6, x_7, x_8, x_63);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_65, 0);
lean_dec(x_67);
x_68 = lean_ctor_get(x_1, 5);
lean_inc(x_68);
lean_dec(x_1);
x_69 = lean_array_push(x_68, x_3);
x_70 = l_Lean_mkApp(x_64, x_24);
x_71 = l_Lean_mkAppN(x_70, x_69);
lean_dec(x_69);
x_72 = l_Lean_mkAppN(x_71, x_41);
lean_dec(x_41);
lean_ctor_set(x_20, 1, x_61);
lean_ctor_set(x_20, 0, x_72);
lean_ctor_set(x_65, 0, x_20);
return x_65;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_73 = lean_ctor_get(x_65, 1);
lean_inc(x_73);
lean_dec(x_65);
x_74 = lean_ctor_get(x_1, 5);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_array_push(x_74, x_3);
x_76 = l_Lean_mkApp(x_64, x_24);
x_77 = l_Lean_mkAppN(x_76, x_75);
lean_dec(x_75);
x_78 = l_Lean_mkAppN(x_77, x_41);
lean_dec(x_41);
lean_ctor_set(x_20, 1, x_61);
lean_ctor_set(x_20, 0, x_78);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_20);
lean_ctor_set(x_79, 1, x_73);
return x_79;
}
}
else
{
uint8_t x_80; 
lean_dec(x_64);
lean_dec(x_61);
lean_dec(x_41);
lean_free_object(x_20);
lean_dec(x_24);
lean_dec(x_3);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_65);
if (x_80 == 0)
{
return x_65;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_65, 0);
x_82 = lean_ctor_get(x_65, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_65);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_41);
lean_free_object(x_20);
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_62);
if (x_84 == 0)
{
return x_62;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_62, 0);
x_86 = lean_ctor_get(x_62, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_62);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_41);
lean_free_object(x_20);
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_58);
if (x_88 == 0)
{
return x_58;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_58, 0);
x_90 = lean_ctor_get(x_58, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_58);
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
lean_dec(x_45);
lean_dec(x_41);
lean_dec(x_28);
lean_free_object(x_20);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_53);
if (x_92 == 0)
{
return x_53;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_53, 0);
x_94 = lean_ctor_get(x_53, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_53);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_28);
lean_free_object(x_20);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_40);
if (x_96 == 0)
{
return x_40;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_40, 0);
x_98 = lean_ctor_get(x_40, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_40);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_26);
lean_free_object(x_20);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_27);
if (x_100 == 0)
{
return x_27;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_27, 0);
x_102 = lean_ctor_get(x_27, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_27);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_20, 0);
x_105 = lean_ctor_get(x_20, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_20);
x_106 = lean_ctor_get(x_11, 3);
lean_inc(x_106);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_106);
x_107 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__1(x_2, x_4, x_22, x_106, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_alloc_closure((void*)(l_List_zip___rarg___lambda__1), 2, 0);
lean_inc(x_108);
x_111 = l_List_zipWith___rarg(x_110, x_106, x_108);
x_112 = l_List_redLength___rarg(x_111);
x_113 = lean_mk_empty_array_with_capacity(x_112);
lean_dec(x_112);
x_114 = l_List_toArrayAux___rarg(x_111, x_113);
x_115 = lean_ctor_get(x_1, 7);
lean_inc(x_115);
x_116 = l_Array_zip___rarg(x_114, x_115);
lean_dec(x_115);
lean_dec(x_114);
x_117 = lean_array_get_size(x_116);
x_118 = lean_mk_empty_array_with_capacity(x_117);
x_119 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_108);
lean_inc(x_11);
lean_inc(x_1);
x_120 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4(x_1, x_11, x_108, x_116, x_117, x_119, lean_box(0), x_118, x_5, x_6, x_7, x_8, x_109);
lean_dec(x_116);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_11, 0);
lean_inc(x_123);
lean_dec(x_11);
x_124 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_123, x_7, x_8, x_122);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_box(0);
lean_inc(x_108);
x_128 = l_List_foldl___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__5(x_127, x_108);
x_129 = lean_box(0);
lean_inc(x_108);
x_130 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7___boxed), 7, 2);
lean_closure_set(x_130, 0, x_108);
lean_closure_set(x_130, 1, x_129);
x_131 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1___boxed), 6, 0);
x_132 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_132, 0, x_130);
lean_closure_set(x_132, 1, x_131);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_133 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_128, x_132, x_5, x_6, x_7, x_8, x_126);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_unsigned_to_nat(1u);
x_136 = lean_nat_add(x_14, x_135);
lean_dec(x_14);
x_137 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_137, 0, x_125);
lean_ctor_set(x_137, 1, x_105);
lean_ctor_set(x_137, 2, x_136);
lean_ctor_set(x_137, 3, x_108);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_138 = l_Lean_Meta_Match_mkMatcher(x_137, x_5, x_6, x_7, x_8, x_134);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_ctor_get(x_139, 3);
lean_inc(x_141);
lean_inc(x_141);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_142 = lean_apply_5(x_141, x_5, x_6, x_7, x_8, x_140);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
lean_dec(x_142);
x_144 = lean_ctor_get(x_139, 0);
lean_inc(x_144);
lean_dec(x_139);
lean_inc(x_144);
x_145 = l_Lean_Meta_check(x_144, x_5, x_6, x_7, x_8, x_143);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
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
x_148 = lean_ctor_get(x_1, 5);
lean_inc(x_148);
lean_dec(x_1);
x_149 = lean_array_push(x_148, x_3);
x_150 = l_Lean_mkApp(x_144, x_104);
x_151 = l_Lean_mkAppN(x_150, x_149);
lean_dec(x_149);
x_152 = l_Lean_mkAppN(x_151, x_121);
lean_dec(x_121);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_141);
if (lean_is_scalar(x_147)) {
 x_154 = lean_alloc_ctor(0, 2, 0);
} else {
 x_154 = x_147;
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_146);
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_144);
lean_dec(x_141);
lean_dec(x_121);
lean_dec(x_104);
lean_dec(x_3);
lean_dec(x_1);
x_155 = lean_ctor_get(x_145, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_145, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_157 = x_145;
} else {
 lean_dec_ref(x_145);
 x_157 = lean_box(0);
}
if (lean_is_scalar(x_157)) {
 x_158 = lean_alloc_ctor(1, 2, 0);
} else {
 x_158 = x_157;
}
lean_ctor_set(x_158, 0, x_155);
lean_ctor_set(x_158, 1, x_156);
return x_158;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_141);
lean_dec(x_139);
lean_dec(x_121);
lean_dec(x_104);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_159 = lean_ctor_get(x_142, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_142, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_161 = x_142;
} else {
 lean_dec_ref(x_142);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_159);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_121);
lean_dec(x_104);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_163 = lean_ctor_get(x_138, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_138, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_165 = x_138;
} else {
 lean_dec_ref(x_138);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_125);
lean_dec(x_121);
lean_dec(x_108);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_167 = lean_ctor_get(x_133, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_133, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_169 = x_133;
} else {
 lean_dec_ref(x_133);
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
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_108);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_171 = lean_ctor_get(x_120, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_120, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_173 = x_120;
} else {
 lean_dec_ref(x_120);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(1, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_171);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_175 = lean_ctor_get(x_107, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_107, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_177 = x_107;
} else {
 lean_dec_ref(x_107);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_179 = !lean_is_exclusive(x_17);
if (x_179 == 0)
{
return x_17;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_17, 0);
x_181 = lean_ctor_get(x_17, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_17);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_183 = !lean_is_exclusive(x_10);
if (x_183 == 0)
{
return x_10;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_10, 0);
x_185 = lean_ctor_get(x_10, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_10);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_fmt___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_mapIdxM_map___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapM___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelowMatcher___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_IndPredBelow_mkBelowMatcher___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_2(x_4, x_1, x_2);
return x_5;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_apply_2(x_4, x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_IndPredBelow_findBelowIdx_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_IndPredBelow_findBelowIdx_match__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_environment_find(x_10, x_1);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
x_13 = lean_box(x_12);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
if (lean_obj_tag(x_14) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_isInductivePredicate_visit(x_17);
lean_dec(x_17);
x_19 = lean_box(x_18);
lean_ctor_set(x_7, 0, x_19);
return x_7;
}
else
{
uint8_t x_20; lean_object* x_21; 
lean_dec(x_14);
x_20 = 0;
x_21 = lean_box(x_20);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_7);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_environment_find(x_24, x_1);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_23);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec(x_25);
if (lean_obj_tag(x_29) == 5)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_31, 2);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_isInductivePredicate_visit(x_32);
lean_dec(x_32);
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_23);
return x_35;
}
else
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_29);
x_36 = 0;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_23);
return x_38;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_3 == x_4;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_uget(x_2, x_3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
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
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = 1;
x_17 = x_3 + x_16;
x_3 = x_17;
x_9 = x_15;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
lean_dec(x_20);
x_21 = 1;
x_22 = lean_box(x_21);
lean_ctor_set(x_12, 0, x_22);
return x_12;
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_dec(x_12);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_12);
if (x_27 == 0)
{
return x_12;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_12, 0);
x_29 = lean_ctor_get(x_12, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_12);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_9);
return x_33;
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
x_13 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_3);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_21 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_15, x_8, x_9, x_10, x_11, x_12);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_21, 0);
lean_dec(x_25);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_3);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_29 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_19, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_72; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
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
x_34 = lean_box(0);
lean_inc(x_8);
x_35 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_32, x_34, x_8, x_9, x_10, x_11, x_31);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
x_39 = l_Lean_Expr_mvarId_x21(x_36);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_72 = l_Lean_Meta_ppGoal(x_39, x_8, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_mk_string("Meta");
x_76 = lean_name_mk_string(x_34, x_75);
x_77 = lean_mk_string("IndPredBelow");
x_78 = lean_name_mk_string(x_76, x_77);
x_79 = lean_mk_string("match");
x_80 = lean_name_mk_string(x_78, x_79);
x_93 = lean_st_ref_get(x_11, x_74);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_94, 3);
lean_inc(x_95);
lean_dec(x_94);
x_96 = lean_ctor_get_uint8(x_95, sizeof(void*)*1);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_73);
x_97 = lean_ctor_get(x_93, 1);
lean_inc(x_97);
lean_dec(x_93);
x_98 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_99 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_39, x_98, x_8, x_9, x_10, x_11, x_97);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_unbox(x_100);
lean_dec(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
x_103 = lean_st_ref_get(x_11, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_104, 3);
lean_inc(x_105);
lean_dec(x_104);
x_106 = lean_ctor_get_uint8(x_105, sizeof(void*)*1);
lean_dec(x_105);
if (x_106 == 0)
{
uint8_t x_107; 
lean_dec(x_80);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_107 = !lean_is_exclusive(x_103);
if (x_107 == 0)
{
lean_object* x_108; 
x_108 = lean_ctor_get(x_103, 0);
lean_dec(x_108);
lean_ctor_set(x_103, 0, x_3);
return x_103;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
lean_dec(x_103);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_3);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_111 = lean_ctor_get(x_103, 1);
lean_inc(x_111);
lean_dec(x_103);
lean_inc(x_80);
x_112 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_111);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_unbox(x_113);
lean_dec(x_113);
if (x_114 == 0)
{
uint8_t x_115; 
lean_dec(x_80);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_115 = !lean_is_exclusive(x_112);
if (x_115 == 0)
{
lean_object* x_116; 
x_116 = lean_ctor_get(x_112, 0);
lean_dec(x_116);
lean_ctor_set(x_112, 0, x_3);
return x_112;
}
else
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_112, 1);
lean_inc(x_117);
lean_dec(x_112);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_3);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
x_119 = lean_ctor_get(x_112, 1);
lean_inc(x_119);
lean_dec(x_112);
x_120 = lean_mk_string("could not find below term in the local context");
x_121 = l_Lean_stringToMessageData(x_120);
lean_dec(x_120);
x_122 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_80, x_121, x_8, x_9, x_10, x_11, x_119);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; 
x_124 = lean_ctor_get(x_122, 0);
lean_dec(x_124);
lean_ctor_set(x_122, 0, x_3);
return x_122;
}
else
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_122, 1);
lean_inc(x_125);
lean_dec(x_122);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_3);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_127 = lean_ctor_get(x_99, 1);
lean_inc(x_127);
lean_dec(x_99);
x_128 = lean_st_ref_get(x_11, x_127);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_129, 3);
lean_inc(x_130);
lean_dec(x_129);
x_131 = lean_ctor_get_uint8(x_130, sizeof(void*)*1);
lean_dec(x_130);
if (x_131 == 0)
{
lean_object* x_132; uint8_t x_133; 
x_132 = lean_ctor_get(x_128, 1);
lean_inc(x_132);
lean_dec(x_128);
x_133 = 0;
x_81 = x_133;
x_82 = x_132;
goto block_92;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_128, 1);
lean_inc(x_134);
lean_dec(x_128);
lean_inc(x_80);
x_135 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_unbox(x_136);
lean_dec(x_136);
x_81 = x_138;
x_82 = x_137;
goto block_92;
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_80);
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_139 = !lean_is_exclusive(x_99);
if (x_139 == 0)
{
lean_object* x_140; 
x_140 = lean_ctor_get(x_99, 0);
lean_dec(x_140);
lean_ctor_set_tag(x_99, 0);
lean_ctor_set(x_99, 0, x_3);
return x_99;
}
else
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_99, 1);
lean_inc(x_141);
lean_dec(x_99);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_3);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_143 = lean_ctor_get(x_93, 1);
lean_inc(x_143);
lean_dec(x_93);
lean_inc(x_80);
x_144 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_143);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_unbox(x_145);
lean_dec(x_145);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_73);
x_147 = lean_ctor_get(x_144, 1);
lean_inc(x_147);
lean_dec(x_144);
x_148 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_149 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_39, x_148, x_8, x_9, x_10, x_11, x_147);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; uint8_t x_151; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_unbox(x_150);
lean_dec(x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
x_152 = lean_ctor_get(x_149, 1);
lean_inc(x_152);
lean_dec(x_149);
x_153 = lean_st_ref_get(x_11, x_152);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_154, 3);
lean_inc(x_155);
lean_dec(x_154);
x_156 = lean_ctor_get_uint8(x_155, sizeof(void*)*1);
lean_dec(x_155);
if (x_156 == 0)
{
uint8_t x_157; 
lean_dec(x_80);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_157 = !lean_is_exclusive(x_153);
if (x_157 == 0)
{
lean_object* x_158; 
x_158 = lean_ctor_get(x_153, 0);
lean_dec(x_158);
lean_ctor_set(x_153, 0, x_3);
return x_153;
}
else
{
lean_object* x_159; lean_object* x_160; 
x_159 = lean_ctor_get(x_153, 1);
lean_inc(x_159);
lean_dec(x_153);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_3);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; 
x_161 = lean_ctor_get(x_153, 1);
lean_inc(x_161);
lean_dec(x_153);
lean_inc(x_80);
x_162 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_161);
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_unbox(x_163);
lean_dec(x_163);
if (x_164 == 0)
{
uint8_t x_165; 
lean_dec(x_80);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_165 = !lean_is_exclusive(x_162);
if (x_165 == 0)
{
lean_object* x_166; 
x_166 = lean_ctor_get(x_162, 0);
lean_dec(x_166);
lean_ctor_set(x_162, 0, x_3);
return x_162;
}
else
{
lean_object* x_167; lean_object* x_168; 
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
lean_dec(x_162);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_3);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_169 = lean_ctor_get(x_162, 1);
lean_inc(x_169);
lean_dec(x_162);
x_170 = lean_mk_string("could not find below term in the local context");
x_171 = l_Lean_stringToMessageData(x_170);
lean_dec(x_170);
x_172 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_80, x_171, x_8, x_9, x_10, x_11, x_169);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_173 = !lean_is_exclusive(x_172);
if (x_173 == 0)
{
lean_object* x_174; 
x_174 = lean_ctor_get(x_172, 0);
lean_dec(x_174);
lean_ctor_set(x_172, 0, x_3);
return x_172;
}
else
{
lean_object* x_175; lean_object* x_176; 
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
lean_dec(x_172);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_3);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; uint8_t x_181; 
x_177 = lean_ctor_get(x_149, 1);
lean_inc(x_177);
lean_dec(x_149);
x_178 = lean_st_ref_get(x_11, x_177);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_179, 3);
lean_inc(x_180);
lean_dec(x_179);
x_181 = lean_ctor_get_uint8(x_180, sizeof(void*)*1);
lean_dec(x_180);
if (x_181 == 0)
{
lean_object* x_182; uint8_t x_183; 
x_182 = lean_ctor_get(x_178, 1);
lean_inc(x_182);
lean_dec(x_178);
x_183 = 0;
x_81 = x_183;
x_82 = x_182;
goto block_92;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; 
x_184 = lean_ctor_get(x_178, 1);
lean_inc(x_184);
lean_dec(x_178);
lean_inc(x_80);
x_185 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_184);
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
x_188 = lean_unbox(x_186);
lean_dec(x_186);
x_81 = x_188;
x_82 = x_187;
goto block_92;
}
}
}
else
{
uint8_t x_189; 
lean_dec(x_80);
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_189 = !lean_is_exclusive(x_149);
if (x_189 == 0)
{
lean_object* x_190; 
x_190 = lean_ctor_get(x_149, 0);
lean_dec(x_190);
lean_ctor_set_tag(x_149, 0);
lean_ctor_set(x_149, 0, x_3);
return x_149;
}
else
{
lean_object* x_191; lean_object* x_192; 
x_191 = lean_ctor_get(x_149, 1);
lean_inc(x_191);
lean_dec(x_149);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_3);
lean_ctor_set(x_192, 1, x_191);
return x_192;
}
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_193 = lean_ctor_get(x_144, 1);
lean_inc(x_193);
lean_dec(x_144);
x_194 = lean_mk_string("");
x_195 = l_Lean_stringToMessageData(x_194);
lean_dec(x_194);
x_196 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_196, 0, x_73);
lean_inc(x_195);
x_197 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_195);
lean_inc(x_80);
x_199 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_80, x_198, x_8, x_9, x_10, x_11, x_193);
x_200 = lean_ctor_get(x_199, 1);
lean_inc(x_200);
lean_dec(x_199);
x_201 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_202 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_39, x_201, x_8, x_9, x_10, x_11, x_200);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; uint8_t x_204; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_unbox(x_203);
lean_dec(x_203);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; 
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
x_205 = lean_ctor_get(x_202, 1);
lean_inc(x_205);
lean_dec(x_202);
x_206 = lean_st_ref_get(x_11, x_205);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_207, 3);
lean_inc(x_208);
lean_dec(x_207);
x_209 = lean_ctor_get_uint8(x_208, sizeof(void*)*1);
lean_dec(x_208);
if (x_209 == 0)
{
uint8_t x_210; 
lean_dec(x_80);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_210 = !lean_is_exclusive(x_206);
if (x_210 == 0)
{
lean_object* x_211; 
x_211 = lean_ctor_get(x_206, 0);
lean_dec(x_211);
lean_ctor_set(x_206, 0, x_3);
return x_206;
}
else
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_206, 1);
lean_inc(x_212);
lean_dec(x_206);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_3);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_214 = lean_ctor_get(x_206, 1);
lean_inc(x_214);
lean_dec(x_206);
lean_inc(x_80);
x_215 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_unbox(x_216);
lean_dec(x_216);
if (x_217 == 0)
{
uint8_t x_218; 
lean_dec(x_80);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_218 = !lean_is_exclusive(x_215);
if (x_218 == 0)
{
lean_object* x_219; 
x_219 = lean_ctor_get(x_215, 0);
lean_dec(x_219);
lean_ctor_set(x_215, 0, x_3);
return x_215;
}
else
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_215, 1);
lean_inc(x_220);
lean_dec(x_215);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_3);
lean_ctor_set(x_221, 1, x_220);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_222 = lean_ctor_get(x_215, 1);
lean_inc(x_222);
lean_dec(x_215);
x_223 = lean_mk_string("could not find below term in the local context");
x_224 = l_Lean_stringToMessageData(x_223);
lean_dec(x_223);
x_225 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_80, x_224, x_8, x_9, x_10, x_11, x_222);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_226 = !lean_is_exclusive(x_225);
if (x_226 == 0)
{
lean_object* x_227; 
x_227 = lean_ctor_get(x_225, 0);
lean_dec(x_227);
lean_ctor_set(x_225, 0, x_3);
return x_225;
}
else
{
lean_object* x_228; lean_object* x_229; 
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
lean_dec(x_225);
x_229 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_229, 0, x_3);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_230 = lean_ctor_get(x_202, 1);
lean_inc(x_230);
lean_dec(x_202);
x_231 = lean_st_ref_get(x_11, x_230);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_232, 3);
lean_inc(x_233);
lean_dec(x_232);
x_234 = lean_ctor_get_uint8(x_233, sizeof(void*)*1);
lean_dec(x_233);
if (x_234 == 0)
{
lean_object* x_235; uint8_t x_236; 
x_235 = lean_ctor_get(x_231, 1);
lean_inc(x_235);
lean_dec(x_231);
x_236 = 0;
x_81 = x_236;
x_82 = x_235;
goto block_92;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_237 = lean_ctor_get(x_231, 1);
lean_inc(x_237);
lean_dec(x_231);
lean_inc(x_80);
x_238 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_80, x_8, x_9, x_10, x_11, x_237);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_unbox(x_239);
lean_dec(x_239);
x_81 = x_241;
x_82 = x_240;
goto block_92;
}
}
}
else
{
uint8_t x_242; 
lean_dec(x_80);
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_242 = !lean_is_exclusive(x_202);
if (x_242 == 0)
{
lean_object* x_243; 
x_243 = lean_ctor_get(x_202, 0);
lean_dec(x_243);
lean_ctor_set_tag(x_202, 0);
lean_ctor_set(x_202, 0, x_3);
return x_202;
}
else
{
lean_object* x_244; lean_object* x_245; 
x_244 = lean_ctor_get(x_202, 1);
lean_inc(x_244);
lean_dec(x_202);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_3);
lean_ctor_set(x_245, 1, x_244);
return x_245;
}
}
}
}
block_92:
{
if (x_81 == 0)
{
lean_dec(x_80);
x_40 = x_82;
goto block_71;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_83 = lean_mk_string("Found below term in the local context: ");
x_84 = l_Lean_stringToMessageData(x_83);
lean_dec(x_83);
lean_inc(x_36);
x_85 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_85, 0, x_36);
x_86 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string("");
x_88 = l_Lean_stringToMessageData(x_87);
lean_dec(x_87);
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_80, x_89, x_8, x_9, x_10, x_11, x_82);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_40 = x_91;
goto block_71;
}
}
}
else
{
uint8_t x_246; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_246 = !lean_is_exclusive(x_72);
if (x_246 == 0)
{
lean_object* x_247; 
x_247 = lean_ctor_get(x_72, 0);
lean_dec(x_247);
lean_ctor_set_tag(x_72, 0);
lean_ctor_set(x_72, 0, x_3);
return x_72;
}
else
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_72, 1);
lean_inc(x_248);
lean_dec(x_72);
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_3);
lean_ctor_set(x_249, 1, x_248);
return x_249;
}
}
block_71:
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_array_get_size(x_1);
x_42 = lean_nat_dec_lt(x_16, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_41);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_33)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_33;
}
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_19);
if (lean_is_scalar(x_20)) {
 x_44 = lean_alloc_ctor(1, 1, 0);
} else {
 x_44 = x_20;
}
lean_ctor_set(x_44, 0, x_43);
if (lean_is_scalar(x_38)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_38;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_40);
return x_45;
}
else
{
uint8_t x_46; 
x_46 = lean_nat_dec_le(x_41, x_41);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_41);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_33)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_33;
}
lean_ctor_set(x_47, 0, x_36);
lean_ctor_set(x_47, 1, x_19);
if (lean_is_scalar(x_20)) {
 x_48 = lean_alloc_ctor(1, 1, 0);
} else {
 x_48 = x_20;
}
lean_ctor_set(x_48, 0, x_47);
if (lean_is_scalar(x_38)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_38;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
else
{
size_t x_50; size_t x_51; lean_object* x_52; 
lean_dec(x_38);
x_50 = 0;
x_51 = lean_usize_of_nat(x_41);
lean_dec(x_41);
lean_inc(x_36);
x_52 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_36, x_1, x_50, x_51, x_8, x_9, x_10, x_11, x_40);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
lean_dec(x_53);
if (x_54 == 0)
{
uint8_t x_55; 
lean_dec(x_3);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 0);
lean_dec(x_56);
if (lean_is_scalar(x_33)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_33;
}
lean_ctor_set(x_57, 0, x_36);
lean_ctor_set(x_57, 1, x_19);
if (lean_is_scalar(x_20)) {
 x_58 = lean_alloc_ctor(1, 1, 0);
} else {
 x_58 = x_20;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_52, 0, x_58);
return x_52;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_dec(x_52);
if (lean_is_scalar(x_33)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_33;
}
lean_ctor_set(x_60, 0, x_36);
lean_ctor_set(x_60, 1, x_19);
if (lean_is_scalar(x_20)) {
 x_61 = lean_alloc_ctor(1, 1, 0);
} else {
 x_61 = x_20;
}
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
x_63 = !lean_is_exclusive(x_52);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_52, 0);
lean_dec(x_64);
lean_ctor_set(x_52, 0, x_3);
return x_52;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_52, 1);
lean_inc(x_65);
lean_dec(x_52);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_3);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_20);
lean_dec(x_19);
x_67 = !lean_is_exclusive(x_52);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_52, 0);
lean_dec(x_68);
lean_ctor_set_tag(x_52, 0);
lean_ctor_set(x_52, 0, x_3);
return x_52;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_52, 1);
lean_inc(x_69);
lean_dec(x_52);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_3);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_250 = !lean_is_exclusive(x_29);
if (x_250 == 0)
{
return x_29;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_29, 0);
x_252 = lean_ctor_get(x_29, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_29);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
}
}
}
case 1:
{
lean_object* x_254; 
lean_dec(x_7);
lean_dec(x_6);
x_254 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_3);
lean_ctor_set(x_255, 1, x_12);
return x_255;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_256 = lean_ctor_get(x_254, 0);
lean_inc(x_256);
lean_dec(x_254);
x_257 = lean_unsigned_to_nat(0u);
x_258 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_257);
if (lean_obj_tag(x_258) == 0)
{
lean_object* x_259; 
lean_dec(x_256);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_3);
lean_ctor_set(x_259, 1, x_12);
return x_259;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; 
x_260 = lean_ctor_get(x_258, 0);
lean_inc(x_260);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 x_261 = x_258;
} else {
 lean_dec_ref(x_258);
 x_261 = lean_box(0);
}
x_262 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_256, x_8, x_9, x_10, x_11, x_12);
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_unbox(x_263);
lean_dec(x_263);
if (x_264 == 0)
{
uint8_t x_265; 
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_265 = !lean_is_exclusive(x_262);
if (x_265 == 0)
{
lean_object* x_266; 
x_266 = lean_ctor_get(x_262, 0);
lean_dec(x_266);
lean_ctor_set(x_262, 0, x_3);
return x_262;
}
else
{
lean_object* x_267; lean_object* x_268; 
x_267 = lean_ctor_get(x_262, 1);
lean_inc(x_267);
lean_dec(x_262);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_3);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
else
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_262, 1);
lean_inc(x_269);
lean_dec(x_262);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_270 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_260, x_8, x_9, x_10, x_11, x_269);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_313; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
lean_dec(x_270);
x_273 = lean_ctor_get(x_271, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_274 = x_271;
} else {
 lean_dec_ref(x_271);
 x_274 = lean_box(0);
}
x_275 = lean_box(0);
lean_inc(x_8);
x_276 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_273, x_275, x_8, x_9, x_10, x_11, x_272);
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_279 = x_276;
} else {
 lean_dec_ref(x_276);
 x_279 = lean_box(0);
}
x_280 = l_Lean_Expr_mvarId_x21(x_277);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_313 = l_Lean_Meta_ppGoal(x_280, x_8, x_9, x_10, x_11, x_278);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; lean_object* x_323; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = lean_mk_string("Meta");
x_317 = lean_name_mk_string(x_275, x_316);
x_318 = lean_mk_string("IndPredBelow");
x_319 = lean_name_mk_string(x_317, x_318);
x_320 = lean_mk_string("match");
x_321 = lean_name_mk_string(x_319, x_320);
x_334 = lean_st_ref_get(x_11, x_315);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_335, 3);
lean_inc(x_336);
lean_dec(x_335);
x_337 = lean_ctor_get_uint8(x_336, sizeof(void*)*1);
lean_dec(x_336);
if (x_337 == 0)
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; 
lean_dec(x_314);
x_338 = lean_ctor_get(x_334, 1);
lean_inc(x_338);
lean_dec(x_334);
x_339 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_340 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_280, x_339, x_8, x_9, x_10, x_11, x_338);
if (lean_obj_tag(x_340) == 0)
{
lean_object* x_341; uint8_t x_342; 
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_unbox(x_341);
lean_dec(x_341);
if (x_342 == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; uint8_t x_347; 
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
x_343 = lean_ctor_get(x_340, 1);
lean_inc(x_343);
lean_dec(x_340);
x_344 = lean_st_ref_get(x_11, x_343);
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_345, 3);
lean_inc(x_346);
lean_dec(x_345);
x_347 = lean_ctor_get_uint8(x_346, sizeof(void*)*1);
lean_dec(x_346);
if (x_347 == 0)
{
uint8_t x_348; 
lean_dec(x_321);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_348 = !lean_is_exclusive(x_344);
if (x_348 == 0)
{
lean_object* x_349; 
x_349 = lean_ctor_get(x_344, 0);
lean_dec(x_349);
lean_ctor_set(x_344, 0, x_3);
return x_344;
}
else
{
lean_object* x_350; lean_object* x_351; 
x_350 = lean_ctor_get(x_344, 1);
lean_inc(x_350);
lean_dec(x_344);
x_351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_351, 0, x_3);
lean_ctor_set(x_351, 1, x_350);
return x_351;
}
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; uint8_t x_355; 
x_352 = lean_ctor_get(x_344, 1);
lean_inc(x_352);
lean_dec(x_344);
lean_inc(x_321);
x_353 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_352);
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_unbox(x_354);
lean_dec(x_354);
if (x_355 == 0)
{
uint8_t x_356; 
lean_dec(x_321);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_356 = !lean_is_exclusive(x_353);
if (x_356 == 0)
{
lean_object* x_357; 
x_357 = lean_ctor_get(x_353, 0);
lean_dec(x_357);
lean_ctor_set(x_353, 0, x_3);
return x_353;
}
else
{
lean_object* x_358; lean_object* x_359; 
x_358 = lean_ctor_get(x_353, 1);
lean_inc(x_358);
lean_dec(x_353);
x_359 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_359, 0, x_3);
lean_ctor_set(x_359, 1, x_358);
return x_359;
}
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; 
x_360 = lean_ctor_get(x_353, 1);
lean_inc(x_360);
lean_dec(x_353);
x_361 = lean_mk_string("could not find below term in the local context");
x_362 = l_Lean_stringToMessageData(x_361);
lean_dec(x_361);
x_363 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_321, x_362, x_8, x_9, x_10, x_11, x_360);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_364 = !lean_is_exclusive(x_363);
if (x_364 == 0)
{
lean_object* x_365; 
x_365 = lean_ctor_get(x_363, 0);
lean_dec(x_365);
lean_ctor_set(x_363, 0, x_3);
return x_363;
}
else
{
lean_object* x_366; lean_object* x_367; 
x_366 = lean_ctor_get(x_363, 1);
lean_inc(x_366);
lean_dec(x_363);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_3);
lean_ctor_set(x_367, 1, x_366);
return x_367;
}
}
}
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; 
x_368 = lean_ctor_get(x_340, 1);
lean_inc(x_368);
lean_dec(x_340);
x_369 = lean_st_ref_get(x_11, x_368);
x_370 = lean_ctor_get(x_369, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_370, 3);
lean_inc(x_371);
lean_dec(x_370);
x_372 = lean_ctor_get_uint8(x_371, sizeof(void*)*1);
lean_dec(x_371);
if (x_372 == 0)
{
lean_object* x_373; uint8_t x_374; 
x_373 = lean_ctor_get(x_369, 1);
lean_inc(x_373);
lean_dec(x_369);
x_374 = 0;
x_322 = x_374;
x_323 = x_373;
goto block_333;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; uint8_t x_379; 
x_375 = lean_ctor_get(x_369, 1);
lean_inc(x_375);
lean_dec(x_369);
lean_inc(x_321);
x_376 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_375);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
lean_dec(x_376);
x_379 = lean_unbox(x_377);
lean_dec(x_377);
x_322 = x_379;
x_323 = x_378;
goto block_333;
}
}
}
else
{
uint8_t x_380; 
lean_dec(x_321);
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_380 = !lean_is_exclusive(x_340);
if (x_380 == 0)
{
lean_object* x_381; 
x_381 = lean_ctor_get(x_340, 0);
lean_dec(x_381);
lean_ctor_set_tag(x_340, 0);
lean_ctor_set(x_340, 0, x_3);
return x_340;
}
else
{
lean_object* x_382; lean_object* x_383; 
x_382 = lean_ctor_get(x_340, 1);
lean_inc(x_382);
lean_dec(x_340);
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_3);
lean_ctor_set(x_383, 1, x_382);
return x_383;
}
}
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; 
x_384 = lean_ctor_get(x_334, 1);
lean_inc(x_384);
lean_dec(x_334);
lean_inc(x_321);
x_385 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_384);
x_386 = lean_ctor_get(x_385, 0);
lean_inc(x_386);
x_387 = lean_unbox(x_386);
lean_dec(x_386);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
lean_dec(x_314);
x_388 = lean_ctor_get(x_385, 1);
lean_inc(x_388);
lean_dec(x_385);
x_389 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_390 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_280, x_389, x_8, x_9, x_10, x_11, x_388);
if (lean_obj_tag(x_390) == 0)
{
lean_object* x_391; uint8_t x_392; 
x_391 = lean_ctor_get(x_390, 0);
lean_inc(x_391);
x_392 = lean_unbox(x_391);
lean_dec(x_391);
if (x_392 == 0)
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; 
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
x_393 = lean_ctor_get(x_390, 1);
lean_inc(x_393);
lean_dec(x_390);
x_394 = lean_st_ref_get(x_11, x_393);
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_395, 3);
lean_inc(x_396);
lean_dec(x_395);
x_397 = lean_ctor_get_uint8(x_396, sizeof(void*)*1);
lean_dec(x_396);
if (x_397 == 0)
{
uint8_t x_398; 
lean_dec(x_321);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_398 = !lean_is_exclusive(x_394);
if (x_398 == 0)
{
lean_object* x_399; 
x_399 = lean_ctor_get(x_394, 0);
lean_dec(x_399);
lean_ctor_set(x_394, 0, x_3);
return x_394;
}
else
{
lean_object* x_400; lean_object* x_401; 
x_400 = lean_ctor_get(x_394, 1);
lean_inc(x_400);
lean_dec(x_394);
x_401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_401, 0, x_3);
lean_ctor_set(x_401, 1, x_400);
return x_401;
}
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; uint8_t x_405; 
x_402 = lean_ctor_get(x_394, 1);
lean_inc(x_402);
lean_dec(x_394);
lean_inc(x_321);
x_403 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_402);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
x_405 = lean_unbox(x_404);
lean_dec(x_404);
if (x_405 == 0)
{
uint8_t x_406; 
lean_dec(x_321);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_406 = !lean_is_exclusive(x_403);
if (x_406 == 0)
{
lean_object* x_407; 
x_407 = lean_ctor_get(x_403, 0);
lean_dec(x_407);
lean_ctor_set(x_403, 0, x_3);
return x_403;
}
else
{
lean_object* x_408; lean_object* x_409; 
x_408 = lean_ctor_get(x_403, 1);
lean_inc(x_408);
lean_dec(x_403);
x_409 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_409, 0, x_3);
lean_ctor_set(x_409, 1, x_408);
return x_409;
}
}
else
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; uint8_t x_414; 
x_410 = lean_ctor_get(x_403, 1);
lean_inc(x_410);
lean_dec(x_403);
x_411 = lean_mk_string("could not find below term in the local context");
x_412 = l_Lean_stringToMessageData(x_411);
lean_dec(x_411);
x_413 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_321, x_412, x_8, x_9, x_10, x_11, x_410);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_414 = !lean_is_exclusive(x_413);
if (x_414 == 0)
{
lean_object* x_415; 
x_415 = lean_ctor_get(x_413, 0);
lean_dec(x_415);
lean_ctor_set(x_413, 0, x_3);
return x_413;
}
else
{
lean_object* x_416; lean_object* x_417; 
x_416 = lean_ctor_get(x_413, 1);
lean_inc(x_416);
lean_dec(x_413);
x_417 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_417, 0, x_3);
lean_ctor_set(x_417, 1, x_416);
return x_417;
}
}
}
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; 
x_418 = lean_ctor_get(x_390, 1);
lean_inc(x_418);
lean_dec(x_390);
x_419 = lean_st_ref_get(x_11, x_418);
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_420, 3);
lean_inc(x_421);
lean_dec(x_420);
x_422 = lean_ctor_get_uint8(x_421, sizeof(void*)*1);
lean_dec(x_421);
if (x_422 == 0)
{
lean_object* x_423; uint8_t x_424; 
x_423 = lean_ctor_get(x_419, 1);
lean_inc(x_423);
lean_dec(x_419);
x_424 = 0;
x_322 = x_424;
x_323 = x_423;
goto block_333;
}
else
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; 
x_425 = lean_ctor_get(x_419, 1);
lean_inc(x_425);
lean_dec(x_419);
lean_inc(x_321);
x_426 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_425);
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_426, 1);
lean_inc(x_428);
lean_dec(x_426);
x_429 = lean_unbox(x_427);
lean_dec(x_427);
x_322 = x_429;
x_323 = x_428;
goto block_333;
}
}
}
else
{
uint8_t x_430; 
lean_dec(x_321);
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_430 = !lean_is_exclusive(x_390);
if (x_430 == 0)
{
lean_object* x_431; 
x_431 = lean_ctor_get(x_390, 0);
lean_dec(x_431);
lean_ctor_set_tag(x_390, 0);
lean_ctor_set(x_390, 0, x_3);
return x_390;
}
else
{
lean_object* x_432; lean_object* x_433; 
x_432 = lean_ctor_get(x_390, 1);
lean_inc(x_432);
lean_dec(x_390);
x_433 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_433, 0, x_3);
lean_ctor_set(x_433, 1, x_432);
return x_433;
}
}
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; 
x_434 = lean_ctor_get(x_385, 1);
lean_inc(x_434);
lean_dec(x_385);
x_435 = lean_mk_string("");
x_436 = l_Lean_stringToMessageData(x_435);
lean_dec(x_435);
x_437 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_437, 0, x_314);
lean_inc(x_436);
x_438 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_438, 0, x_436);
lean_ctor_set(x_438, 1, x_437);
x_439 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_439, 0, x_438);
lean_ctor_set(x_439, 1, x_436);
lean_inc(x_321);
x_440 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_321, x_439, x_8, x_9, x_10, x_11, x_434);
x_441 = lean_ctor_get(x_440, 1);
lean_inc(x_441);
lean_dec(x_440);
x_442 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_443 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_280, x_442, x_8, x_9, x_10, x_11, x_441);
if (lean_obj_tag(x_443) == 0)
{
lean_object* x_444; uint8_t x_445; 
x_444 = lean_ctor_get(x_443, 0);
lean_inc(x_444);
x_445 = lean_unbox(x_444);
lean_dec(x_444);
if (x_445 == 0)
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; 
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
x_446 = lean_ctor_get(x_443, 1);
lean_inc(x_446);
lean_dec(x_443);
x_447 = lean_st_ref_get(x_11, x_446);
x_448 = lean_ctor_get(x_447, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_448, 3);
lean_inc(x_449);
lean_dec(x_448);
x_450 = lean_ctor_get_uint8(x_449, sizeof(void*)*1);
lean_dec(x_449);
if (x_450 == 0)
{
uint8_t x_451; 
lean_dec(x_321);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_451 = !lean_is_exclusive(x_447);
if (x_451 == 0)
{
lean_object* x_452; 
x_452 = lean_ctor_get(x_447, 0);
lean_dec(x_452);
lean_ctor_set(x_447, 0, x_3);
return x_447;
}
else
{
lean_object* x_453; lean_object* x_454; 
x_453 = lean_ctor_get(x_447, 1);
lean_inc(x_453);
lean_dec(x_447);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_3);
lean_ctor_set(x_454, 1, x_453);
return x_454;
}
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; uint8_t x_458; 
x_455 = lean_ctor_get(x_447, 1);
lean_inc(x_455);
lean_dec(x_447);
lean_inc(x_321);
x_456 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_455);
x_457 = lean_ctor_get(x_456, 0);
lean_inc(x_457);
x_458 = lean_unbox(x_457);
lean_dec(x_457);
if (x_458 == 0)
{
uint8_t x_459; 
lean_dec(x_321);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_459 = !lean_is_exclusive(x_456);
if (x_459 == 0)
{
lean_object* x_460; 
x_460 = lean_ctor_get(x_456, 0);
lean_dec(x_460);
lean_ctor_set(x_456, 0, x_3);
return x_456;
}
else
{
lean_object* x_461; lean_object* x_462; 
x_461 = lean_ctor_get(x_456, 1);
lean_inc(x_461);
lean_dec(x_456);
x_462 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_462, 0, x_3);
lean_ctor_set(x_462, 1, x_461);
return x_462;
}
}
else
{
lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; uint8_t x_467; 
x_463 = lean_ctor_get(x_456, 1);
lean_inc(x_463);
lean_dec(x_456);
x_464 = lean_mk_string("could not find below term in the local context");
x_465 = l_Lean_stringToMessageData(x_464);
lean_dec(x_464);
x_466 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_321, x_465, x_8, x_9, x_10, x_11, x_463);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_467 = !lean_is_exclusive(x_466);
if (x_467 == 0)
{
lean_object* x_468; 
x_468 = lean_ctor_get(x_466, 0);
lean_dec(x_468);
lean_ctor_set(x_466, 0, x_3);
return x_466;
}
else
{
lean_object* x_469; lean_object* x_470; 
x_469 = lean_ctor_get(x_466, 1);
lean_inc(x_469);
lean_dec(x_466);
x_470 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_470, 0, x_3);
lean_ctor_set(x_470, 1, x_469);
return x_470;
}
}
}
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; 
x_471 = lean_ctor_get(x_443, 1);
lean_inc(x_471);
lean_dec(x_443);
x_472 = lean_st_ref_get(x_11, x_471);
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_473, 3);
lean_inc(x_474);
lean_dec(x_473);
x_475 = lean_ctor_get_uint8(x_474, sizeof(void*)*1);
lean_dec(x_474);
if (x_475 == 0)
{
lean_object* x_476; uint8_t x_477; 
x_476 = lean_ctor_get(x_472, 1);
lean_inc(x_476);
lean_dec(x_472);
x_477 = 0;
x_322 = x_477;
x_323 = x_476;
goto block_333;
}
else
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; 
x_478 = lean_ctor_get(x_472, 1);
lean_inc(x_478);
lean_dec(x_472);
lean_inc(x_321);
x_479 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_321, x_8, x_9, x_10, x_11, x_478);
x_480 = lean_ctor_get(x_479, 0);
lean_inc(x_480);
x_481 = lean_ctor_get(x_479, 1);
lean_inc(x_481);
lean_dec(x_479);
x_482 = lean_unbox(x_480);
lean_dec(x_480);
x_322 = x_482;
x_323 = x_481;
goto block_333;
}
}
}
else
{
uint8_t x_483; 
lean_dec(x_321);
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_483 = !lean_is_exclusive(x_443);
if (x_483 == 0)
{
lean_object* x_484; 
x_484 = lean_ctor_get(x_443, 0);
lean_dec(x_484);
lean_ctor_set_tag(x_443, 0);
lean_ctor_set(x_443, 0, x_3);
return x_443;
}
else
{
lean_object* x_485; lean_object* x_486; 
x_485 = lean_ctor_get(x_443, 1);
lean_inc(x_485);
lean_dec(x_443);
x_486 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_486, 0, x_3);
lean_ctor_set(x_486, 1, x_485);
return x_486;
}
}
}
}
block_333:
{
if (x_322 == 0)
{
lean_dec(x_321);
x_281 = x_323;
goto block_312;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_324 = lean_mk_string("Found below term in the local context: ");
x_325 = l_Lean_stringToMessageData(x_324);
lean_dec(x_324);
lean_inc(x_277);
x_326 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_326, 0, x_277);
x_327 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_mk_string("");
x_329 = l_Lean_stringToMessageData(x_328);
lean_dec(x_328);
x_330 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_330, 0, x_327);
lean_ctor_set(x_330, 1, x_329);
x_331 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_321, x_330, x_8, x_9, x_10, x_11, x_323);
x_332 = lean_ctor_get(x_331, 1);
lean_inc(x_332);
lean_dec(x_331);
x_281 = x_332;
goto block_312;
}
}
}
else
{
uint8_t x_487; 
lean_dec(x_280);
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_487 = !lean_is_exclusive(x_313);
if (x_487 == 0)
{
lean_object* x_488; 
x_488 = lean_ctor_get(x_313, 0);
lean_dec(x_488);
lean_ctor_set_tag(x_313, 0);
lean_ctor_set(x_313, 0, x_3);
return x_313;
}
else
{
lean_object* x_489; lean_object* x_490; 
x_489 = lean_ctor_get(x_313, 1);
lean_inc(x_489);
lean_dec(x_313);
x_490 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_490, 0, x_3);
lean_ctor_set(x_490, 1, x_489);
return x_490;
}
}
block_312:
{
lean_object* x_282; uint8_t x_283; 
x_282 = lean_array_get_size(x_1);
x_283 = lean_nat_dec_lt(x_257, x_282);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_282);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_274)) {
 x_284 = lean_alloc_ctor(0, 2, 0);
} else {
 x_284 = x_274;
}
lean_ctor_set(x_284, 0, x_277);
lean_ctor_set(x_284, 1, x_260);
if (lean_is_scalar(x_261)) {
 x_285 = lean_alloc_ctor(1, 1, 0);
} else {
 x_285 = x_261;
}
lean_ctor_set(x_285, 0, x_284);
if (lean_is_scalar(x_279)) {
 x_286 = lean_alloc_ctor(0, 2, 0);
} else {
 x_286 = x_279;
}
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_281);
return x_286;
}
else
{
uint8_t x_287; 
x_287 = lean_nat_dec_le(x_282, x_282);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_282);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_274)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_274;
}
lean_ctor_set(x_288, 0, x_277);
lean_ctor_set(x_288, 1, x_260);
if (lean_is_scalar(x_261)) {
 x_289 = lean_alloc_ctor(1, 1, 0);
} else {
 x_289 = x_261;
}
lean_ctor_set(x_289, 0, x_288);
if (lean_is_scalar(x_279)) {
 x_290 = lean_alloc_ctor(0, 2, 0);
} else {
 x_290 = x_279;
}
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_281);
return x_290;
}
else
{
size_t x_291; size_t x_292; lean_object* x_293; 
lean_dec(x_279);
x_291 = 0;
x_292 = lean_usize_of_nat(x_282);
lean_dec(x_282);
lean_inc(x_277);
x_293 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_277, x_1, x_291, x_292, x_8, x_9, x_10, x_11, x_281);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; uint8_t x_295; 
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_unbox(x_294);
lean_dec(x_294);
if (x_295 == 0)
{
uint8_t x_296; 
lean_dec(x_3);
x_296 = !lean_is_exclusive(x_293);
if (x_296 == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = lean_ctor_get(x_293, 0);
lean_dec(x_297);
if (lean_is_scalar(x_274)) {
 x_298 = lean_alloc_ctor(0, 2, 0);
} else {
 x_298 = x_274;
}
lean_ctor_set(x_298, 0, x_277);
lean_ctor_set(x_298, 1, x_260);
if (lean_is_scalar(x_261)) {
 x_299 = lean_alloc_ctor(1, 1, 0);
} else {
 x_299 = x_261;
}
lean_ctor_set(x_299, 0, x_298);
lean_ctor_set(x_293, 0, x_299);
return x_293;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_300 = lean_ctor_get(x_293, 1);
lean_inc(x_300);
lean_dec(x_293);
if (lean_is_scalar(x_274)) {
 x_301 = lean_alloc_ctor(0, 2, 0);
} else {
 x_301 = x_274;
}
lean_ctor_set(x_301, 0, x_277);
lean_ctor_set(x_301, 1, x_260);
if (lean_is_scalar(x_261)) {
 x_302 = lean_alloc_ctor(1, 1, 0);
} else {
 x_302 = x_261;
}
lean_ctor_set(x_302, 0, x_301);
x_303 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_300);
return x_303;
}
}
else
{
uint8_t x_304; 
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
x_304 = !lean_is_exclusive(x_293);
if (x_304 == 0)
{
lean_object* x_305; 
x_305 = lean_ctor_get(x_293, 0);
lean_dec(x_305);
lean_ctor_set(x_293, 0, x_3);
return x_293;
}
else
{
lean_object* x_306; lean_object* x_307; 
x_306 = lean_ctor_get(x_293, 1);
lean_inc(x_306);
lean_dec(x_293);
x_307 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_307, 0, x_3);
lean_ctor_set(x_307, 1, x_306);
return x_307;
}
}
}
else
{
uint8_t x_308; 
lean_dec(x_277);
lean_dec(x_274);
lean_dec(x_261);
lean_dec(x_260);
x_308 = !lean_is_exclusive(x_293);
if (x_308 == 0)
{
lean_object* x_309; 
x_309 = lean_ctor_get(x_293, 0);
lean_dec(x_309);
lean_ctor_set_tag(x_293, 0);
lean_ctor_set(x_293, 0, x_3);
return x_293;
}
else
{
lean_object* x_310; lean_object* x_311; 
x_310 = lean_ctor_get(x_293, 1);
lean_inc(x_310);
lean_dec(x_293);
x_311 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_311, 0, x_3);
lean_ctor_set(x_311, 1, x_310);
return x_311;
}
}
}
}
}
}
else
{
uint8_t x_491; 
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_491 = !lean_is_exclusive(x_270);
if (x_491 == 0)
{
return x_270;
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_492 = lean_ctor_get(x_270, 0);
x_493 = lean_ctor_get(x_270, 1);
lean_inc(x_493);
lean_inc(x_492);
lean_dec(x_270);
x_494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_494, 0, x_492);
lean_ctor_set(x_494, 1, x_493);
return x_494;
}
}
}
}
}
}
case 2:
{
lean_object* x_495; 
lean_dec(x_7);
lean_dec(x_6);
x_495 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_495) == 0)
{
lean_object* x_496; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_496 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_496, 0, x_3);
lean_ctor_set(x_496, 1, x_12);
return x_496;
}
else
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; 
x_497 = lean_ctor_get(x_495, 0);
lean_inc(x_497);
lean_dec(x_495);
x_498 = lean_unsigned_to_nat(0u);
x_499 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_498);
if (lean_obj_tag(x_499) == 0)
{
lean_object* x_500; 
lean_dec(x_497);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_500 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_500, 0, x_3);
lean_ctor_set(x_500, 1, x_12);
return x_500;
}
else
{
lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; uint8_t x_505; 
x_501 = lean_ctor_get(x_499, 0);
lean_inc(x_501);
if (lean_is_exclusive(x_499)) {
 lean_ctor_release(x_499, 0);
 x_502 = x_499;
} else {
 lean_dec_ref(x_499);
 x_502 = lean_box(0);
}
x_503 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_497, x_8, x_9, x_10, x_11, x_12);
x_504 = lean_ctor_get(x_503, 0);
lean_inc(x_504);
x_505 = lean_unbox(x_504);
lean_dec(x_504);
if (x_505 == 0)
{
uint8_t x_506; 
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_506 = !lean_is_exclusive(x_503);
if (x_506 == 0)
{
lean_object* x_507; 
x_507 = lean_ctor_get(x_503, 0);
lean_dec(x_507);
lean_ctor_set(x_503, 0, x_3);
return x_503;
}
else
{
lean_object* x_508; lean_object* x_509; 
x_508 = lean_ctor_get(x_503, 1);
lean_inc(x_508);
lean_dec(x_503);
x_509 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_509, 0, x_3);
lean_ctor_set(x_509, 1, x_508);
return x_509;
}
}
else
{
lean_object* x_510; lean_object* x_511; 
x_510 = lean_ctor_get(x_503, 1);
lean_inc(x_510);
lean_dec(x_503);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_511 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_501, x_8, x_9, x_10, x_11, x_510);
if (lean_obj_tag(x_511) == 0)
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_554; 
x_512 = lean_ctor_get(x_511, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_511, 1);
lean_inc(x_513);
lean_dec(x_511);
x_514 = lean_ctor_get(x_512, 1);
lean_inc(x_514);
if (lean_is_exclusive(x_512)) {
 lean_ctor_release(x_512, 0);
 lean_ctor_release(x_512, 1);
 x_515 = x_512;
} else {
 lean_dec_ref(x_512);
 x_515 = lean_box(0);
}
x_516 = lean_box(0);
lean_inc(x_8);
x_517 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_514, x_516, x_8, x_9, x_10, x_11, x_513);
x_518 = lean_ctor_get(x_517, 0);
lean_inc(x_518);
x_519 = lean_ctor_get(x_517, 1);
lean_inc(x_519);
if (lean_is_exclusive(x_517)) {
 lean_ctor_release(x_517, 0);
 lean_ctor_release(x_517, 1);
 x_520 = x_517;
} else {
 lean_dec_ref(x_517);
 x_520 = lean_box(0);
}
x_521 = l_Lean_Expr_mvarId_x21(x_518);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_554 = l_Lean_Meta_ppGoal(x_521, x_8, x_9, x_10, x_11, x_519);
if (lean_obj_tag(x_554) == 0)
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; uint8_t x_563; lean_object* x_564; lean_object* x_575; lean_object* x_576; lean_object* x_577; uint8_t x_578; 
x_555 = lean_ctor_get(x_554, 0);
lean_inc(x_555);
x_556 = lean_ctor_get(x_554, 1);
lean_inc(x_556);
lean_dec(x_554);
x_557 = lean_mk_string("Meta");
x_558 = lean_name_mk_string(x_516, x_557);
x_559 = lean_mk_string("IndPredBelow");
x_560 = lean_name_mk_string(x_558, x_559);
x_561 = lean_mk_string("match");
x_562 = lean_name_mk_string(x_560, x_561);
x_575 = lean_st_ref_get(x_11, x_556);
x_576 = lean_ctor_get(x_575, 0);
lean_inc(x_576);
x_577 = lean_ctor_get(x_576, 3);
lean_inc(x_577);
lean_dec(x_576);
x_578 = lean_ctor_get_uint8(x_577, sizeof(void*)*1);
lean_dec(x_577);
if (x_578 == 0)
{
lean_object* x_579; lean_object* x_580; lean_object* x_581; 
lean_dec(x_555);
x_579 = lean_ctor_get(x_575, 1);
lean_inc(x_579);
lean_dec(x_575);
x_580 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_581 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_521, x_580, x_8, x_9, x_10, x_11, x_579);
if (lean_obj_tag(x_581) == 0)
{
lean_object* x_582; uint8_t x_583; 
x_582 = lean_ctor_get(x_581, 0);
lean_inc(x_582);
x_583 = lean_unbox(x_582);
lean_dec(x_582);
if (x_583 == 0)
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; uint8_t x_588; 
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
x_584 = lean_ctor_get(x_581, 1);
lean_inc(x_584);
lean_dec(x_581);
x_585 = lean_st_ref_get(x_11, x_584);
x_586 = lean_ctor_get(x_585, 0);
lean_inc(x_586);
x_587 = lean_ctor_get(x_586, 3);
lean_inc(x_587);
lean_dec(x_586);
x_588 = lean_ctor_get_uint8(x_587, sizeof(void*)*1);
lean_dec(x_587);
if (x_588 == 0)
{
uint8_t x_589; 
lean_dec(x_562);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_589 = !lean_is_exclusive(x_585);
if (x_589 == 0)
{
lean_object* x_590; 
x_590 = lean_ctor_get(x_585, 0);
lean_dec(x_590);
lean_ctor_set(x_585, 0, x_3);
return x_585;
}
else
{
lean_object* x_591; lean_object* x_592; 
x_591 = lean_ctor_get(x_585, 1);
lean_inc(x_591);
lean_dec(x_585);
x_592 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_592, 0, x_3);
lean_ctor_set(x_592, 1, x_591);
return x_592;
}
}
else
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; uint8_t x_596; 
x_593 = lean_ctor_get(x_585, 1);
lean_inc(x_593);
lean_dec(x_585);
lean_inc(x_562);
x_594 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_593);
x_595 = lean_ctor_get(x_594, 0);
lean_inc(x_595);
x_596 = lean_unbox(x_595);
lean_dec(x_595);
if (x_596 == 0)
{
uint8_t x_597; 
lean_dec(x_562);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_597 = !lean_is_exclusive(x_594);
if (x_597 == 0)
{
lean_object* x_598; 
x_598 = lean_ctor_get(x_594, 0);
lean_dec(x_598);
lean_ctor_set(x_594, 0, x_3);
return x_594;
}
else
{
lean_object* x_599; lean_object* x_600; 
x_599 = lean_ctor_get(x_594, 1);
lean_inc(x_599);
lean_dec(x_594);
x_600 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_600, 0, x_3);
lean_ctor_set(x_600, 1, x_599);
return x_600;
}
}
else
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; uint8_t x_605; 
x_601 = lean_ctor_get(x_594, 1);
lean_inc(x_601);
lean_dec(x_594);
x_602 = lean_mk_string("could not find below term in the local context");
x_603 = l_Lean_stringToMessageData(x_602);
lean_dec(x_602);
x_604 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_562, x_603, x_8, x_9, x_10, x_11, x_601);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_605 = !lean_is_exclusive(x_604);
if (x_605 == 0)
{
lean_object* x_606; 
x_606 = lean_ctor_get(x_604, 0);
lean_dec(x_606);
lean_ctor_set(x_604, 0, x_3);
return x_604;
}
else
{
lean_object* x_607; lean_object* x_608; 
x_607 = lean_ctor_get(x_604, 1);
lean_inc(x_607);
lean_dec(x_604);
x_608 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_608, 0, x_3);
lean_ctor_set(x_608, 1, x_607);
return x_608;
}
}
}
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; uint8_t x_613; 
x_609 = lean_ctor_get(x_581, 1);
lean_inc(x_609);
lean_dec(x_581);
x_610 = lean_st_ref_get(x_11, x_609);
x_611 = lean_ctor_get(x_610, 0);
lean_inc(x_611);
x_612 = lean_ctor_get(x_611, 3);
lean_inc(x_612);
lean_dec(x_611);
x_613 = lean_ctor_get_uint8(x_612, sizeof(void*)*1);
lean_dec(x_612);
if (x_613 == 0)
{
lean_object* x_614; uint8_t x_615; 
x_614 = lean_ctor_get(x_610, 1);
lean_inc(x_614);
lean_dec(x_610);
x_615 = 0;
x_563 = x_615;
x_564 = x_614;
goto block_574;
}
else
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; uint8_t x_620; 
x_616 = lean_ctor_get(x_610, 1);
lean_inc(x_616);
lean_dec(x_610);
lean_inc(x_562);
x_617 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_616);
x_618 = lean_ctor_get(x_617, 0);
lean_inc(x_618);
x_619 = lean_ctor_get(x_617, 1);
lean_inc(x_619);
lean_dec(x_617);
x_620 = lean_unbox(x_618);
lean_dec(x_618);
x_563 = x_620;
x_564 = x_619;
goto block_574;
}
}
}
else
{
uint8_t x_621; 
lean_dec(x_562);
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_621 = !lean_is_exclusive(x_581);
if (x_621 == 0)
{
lean_object* x_622; 
x_622 = lean_ctor_get(x_581, 0);
lean_dec(x_622);
lean_ctor_set_tag(x_581, 0);
lean_ctor_set(x_581, 0, x_3);
return x_581;
}
else
{
lean_object* x_623; lean_object* x_624; 
x_623 = lean_ctor_get(x_581, 1);
lean_inc(x_623);
lean_dec(x_581);
x_624 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_624, 0, x_3);
lean_ctor_set(x_624, 1, x_623);
return x_624;
}
}
}
else
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; uint8_t x_628; 
x_625 = lean_ctor_get(x_575, 1);
lean_inc(x_625);
lean_dec(x_575);
lean_inc(x_562);
x_626 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_625);
x_627 = lean_ctor_get(x_626, 0);
lean_inc(x_627);
x_628 = lean_unbox(x_627);
lean_dec(x_627);
if (x_628 == 0)
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; 
lean_dec(x_555);
x_629 = lean_ctor_get(x_626, 1);
lean_inc(x_629);
lean_dec(x_626);
x_630 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_631 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_521, x_630, x_8, x_9, x_10, x_11, x_629);
if (lean_obj_tag(x_631) == 0)
{
lean_object* x_632; uint8_t x_633; 
x_632 = lean_ctor_get(x_631, 0);
lean_inc(x_632);
x_633 = lean_unbox(x_632);
lean_dec(x_632);
if (x_633 == 0)
{
lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; uint8_t x_638; 
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
x_634 = lean_ctor_get(x_631, 1);
lean_inc(x_634);
lean_dec(x_631);
x_635 = lean_st_ref_get(x_11, x_634);
x_636 = lean_ctor_get(x_635, 0);
lean_inc(x_636);
x_637 = lean_ctor_get(x_636, 3);
lean_inc(x_637);
lean_dec(x_636);
x_638 = lean_ctor_get_uint8(x_637, sizeof(void*)*1);
lean_dec(x_637);
if (x_638 == 0)
{
uint8_t x_639; 
lean_dec(x_562);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_639 = !lean_is_exclusive(x_635);
if (x_639 == 0)
{
lean_object* x_640; 
x_640 = lean_ctor_get(x_635, 0);
lean_dec(x_640);
lean_ctor_set(x_635, 0, x_3);
return x_635;
}
else
{
lean_object* x_641; lean_object* x_642; 
x_641 = lean_ctor_get(x_635, 1);
lean_inc(x_641);
lean_dec(x_635);
x_642 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_642, 0, x_3);
lean_ctor_set(x_642, 1, x_641);
return x_642;
}
}
else
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; uint8_t x_646; 
x_643 = lean_ctor_get(x_635, 1);
lean_inc(x_643);
lean_dec(x_635);
lean_inc(x_562);
x_644 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_643);
x_645 = lean_ctor_get(x_644, 0);
lean_inc(x_645);
x_646 = lean_unbox(x_645);
lean_dec(x_645);
if (x_646 == 0)
{
uint8_t x_647; 
lean_dec(x_562);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_647 = !lean_is_exclusive(x_644);
if (x_647 == 0)
{
lean_object* x_648; 
x_648 = lean_ctor_get(x_644, 0);
lean_dec(x_648);
lean_ctor_set(x_644, 0, x_3);
return x_644;
}
else
{
lean_object* x_649; lean_object* x_650; 
x_649 = lean_ctor_get(x_644, 1);
lean_inc(x_649);
lean_dec(x_644);
x_650 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_650, 0, x_3);
lean_ctor_set(x_650, 1, x_649);
return x_650;
}
}
else
{
lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; uint8_t x_655; 
x_651 = lean_ctor_get(x_644, 1);
lean_inc(x_651);
lean_dec(x_644);
x_652 = lean_mk_string("could not find below term in the local context");
x_653 = l_Lean_stringToMessageData(x_652);
lean_dec(x_652);
x_654 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_562, x_653, x_8, x_9, x_10, x_11, x_651);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_655 = !lean_is_exclusive(x_654);
if (x_655 == 0)
{
lean_object* x_656; 
x_656 = lean_ctor_get(x_654, 0);
lean_dec(x_656);
lean_ctor_set(x_654, 0, x_3);
return x_654;
}
else
{
lean_object* x_657; lean_object* x_658; 
x_657 = lean_ctor_get(x_654, 1);
lean_inc(x_657);
lean_dec(x_654);
x_658 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_658, 0, x_3);
lean_ctor_set(x_658, 1, x_657);
return x_658;
}
}
}
}
else
{
lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; uint8_t x_663; 
x_659 = lean_ctor_get(x_631, 1);
lean_inc(x_659);
lean_dec(x_631);
x_660 = lean_st_ref_get(x_11, x_659);
x_661 = lean_ctor_get(x_660, 0);
lean_inc(x_661);
x_662 = lean_ctor_get(x_661, 3);
lean_inc(x_662);
lean_dec(x_661);
x_663 = lean_ctor_get_uint8(x_662, sizeof(void*)*1);
lean_dec(x_662);
if (x_663 == 0)
{
lean_object* x_664; uint8_t x_665; 
x_664 = lean_ctor_get(x_660, 1);
lean_inc(x_664);
lean_dec(x_660);
x_665 = 0;
x_563 = x_665;
x_564 = x_664;
goto block_574;
}
else
{
lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; uint8_t x_670; 
x_666 = lean_ctor_get(x_660, 1);
lean_inc(x_666);
lean_dec(x_660);
lean_inc(x_562);
x_667 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_666);
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
x_669 = lean_ctor_get(x_667, 1);
lean_inc(x_669);
lean_dec(x_667);
x_670 = lean_unbox(x_668);
lean_dec(x_668);
x_563 = x_670;
x_564 = x_669;
goto block_574;
}
}
}
else
{
uint8_t x_671; 
lean_dec(x_562);
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_671 = !lean_is_exclusive(x_631);
if (x_671 == 0)
{
lean_object* x_672; 
x_672 = lean_ctor_get(x_631, 0);
lean_dec(x_672);
lean_ctor_set_tag(x_631, 0);
lean_ctor_set(x_631, 0, x_3);
return x_631;
}
else
{
lean_object* x_673; lean_object* x_674; 
x_673 = lean_ctor_get(x_631, 1);
lean_inc(x_673);
lean_dec(x_631);
x_674 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_674, 0, x_3);
lean_ctor_set(x_674, 1, x_673);
return x_674;
}
}
}
else
{
lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; 
x_675 = lean_ctor_get(x_626, 1);
lean_inc(x_675);
lean_dec(x_626);
x_676 = lean_mk_string("");
x_677 = l_Lean_stringToMessageData(x_676);
lean_dec(x_676);
x_678 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_678, 0, x_555);
lean_inc(x_677);
x_679 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_679, 0, x_677);
lean_ctor_set(x_679, 1, x_678);
x_680 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_680, 0, x_679);
lean_ctor_set(x_680, 1, x_677);
lean_inc(x_562);
x_681 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_562, x_680, x_8, x_9, x_10, x_11, x_675);
x_682 = lean_ctor_get(x_681, 1);
lean_inc(x_682);
lean_dec(x_681);
x_683 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_684 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_521, x_683, x_8, x_9, x_10, x_11, x_682);
if (lean_obj_tag(x_684) == 0)
{
lean_object* x_685; uint8_t x_686; 
x_685 = lean_ctor_get(x_684, 0);
lean_inc(x_685);
x_686 = lean_unbox(x_685);
lean_dec(x_685);
if (x_686 == 0)
{
lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; uint8_t x_691; 
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
x_687 = lean_ctor_get(x_684, 1);
lean_inc(x_687);
lean_dec(x_684);
x_688 = lean_st_ref_get(x_11, x_687);
x_689 = lean_ctor_get(x_688, 0);
lean_inc(x_689);
x_690 = lean_ctor_get(x_689, 3);
lean_inc(x_690);
lean_dec(x_689);
x_691 = lean_ctor_get_uint8(x_690, sizeof(void*)*1);
lean_dec(x_690);
if (x_691 == 0)
{
uint8_t x_692; 
lean_dec(x_562);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_692 = !lean_is_exclusive(x_688);
if (x_692 == 0)
{
lean_object* x_693; 
x_693 = lean_ctor_get(x_688, 0);
lean_dec(x_693);
lean_ctor_set(x_688, 0, x_3);
return x_688;
}
else
{
lean_object* x_694; lean_object* x_695; 
x_694 = lean_ctor_get(x_688, 1);
lean_inc(x_694);
lean_dec(x_688);
x_695 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_695, 0, x_3);
lean_ctor_set(x_695, 1, x_694);
return x_695;
}
}
else
{
lean_object* x_696; lean_object* x_697; lean_object* x_698; uint8_t x_699; 
x_696 = lean_ctor_get(x_688, 1);
lean_inc(x_696);
lean_dec(x_688);
lean_inc(x_562);
x_697 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_696);
x_698 = lean_ctor_get(x_697, 0);
lean_inc(x_698);
x_699 = lean_unbox(x_698);
lean_dec(x_698);
if (x_699 == 0)
{
uint8_t x_700; 
lean_dec(x_562);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_700 = !lean_is_exclusive(x_697);
if (x_700 == 0)
{
lean_object* x_701; 
x_701 = lean_ctor_get(x_697, 0);
lean_dec(x_701);
lean_ctor_set(x_697, 0, x_3);
return x_697;
}
else
{
lean_object* x_702; lean_object* x_703; 
x_702 = lean_ctor_get(x_697, 1);
lean_inc(x_702);
lean_dec(x_697);
x_703 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_703, 0, x_3);
lean_ctor_set(x_703, 1, x_702);
return x_703;
}
}
else
{
lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; uint8_t x_708; 
x_704 = lean_ctor_get(x_697, 1);
lean_inc(x_704);
lean_dec(x_697);
x_705 = lean_mk_string("could not find below term in the local context");
x_706 = l_Lean_stringToMessageData(x_705);
lean_dec(x_705);
x_707 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_562, x_706, x_8, x_9, x_10, x_11, x_704);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_708 = !lean_is_exclusive(x_707);
if (x_708 == 0)
{
lean_object* x_709; 
x_709 = lean_ctor_get(x_707, 0);
lean_dec(x_709);
lean_ctor_set(x_707, 0, x_3);
return x_707;
}
else
{
lean_object* x_710; lean_object* x_711; 
x_710 = lean_ctor_get(x_707, 1);
lean_inc(x_710);
lean_dec(x_707);
x_711 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_711, 0, x_3);
lean_ctor_set(x_711, 1, x_710);
return x_711;
}
}
}
}
else
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; uint8_t x_716; 
x_712 = lean_ctor_get(x_684, 1);
lean_inc(x_712);
lean_dec(x_684);
x_713 = lean_st_ref_get(x_11, x_712);
x_714 = lean_ctor_get(x_713, 0);
lean_inc(x_714);
x_715 = lean_ctor_get(x_714, 3);
lean_inc(x_715);
lean_dec(x_714);
x_716 = lean_ctor_get_uint8(x_715, sizeof(void*)*1);
lean_dec(x_715);
if (x_716 == 0)
{
lean_object* x_717; uint8_t x_718; 
x_717 = lean_ctor_get(x_713, 1);
lean_inc(x_717);
lean_dec(x_713);
x_718 = 0;
x_563 = x_718;
x_564 = x_717;
goto block_574;
}
else
{
lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; uint8_t x_723; 
x_719 = lean_ctor_get(x_713, 1);
lean_inc(x_719);
lean_dec(x_713);
lean_inc(x_562);
x_720 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_562, x_8, x_9, x_10, x_11, x_719);
x_721 = lean_ctor_get(x_720, 0);
lean_inc(x_721);
x_722 = lean_ctor_get(x_720, 1);
lean_inc(x_722);
lean_dec(x_720);
x_723 = lean_unbox(x_721);
lean_dec(x_721);
x_563 = x_723;
x_564 = x_722;
goto block_574;
}
}
}
else
{
uint8_t x_724; 
lean_dec(x_562);
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_724 = !lean_is_exclusive(x_684);
if (x_724 == 0)
{
lean_object* x_725; 
x_725 = lean_ctor_get(x_684, 0);
lean_dec(x_725);
lean_ctor_set_tag(x_684, 0);
lean_ctor_set(x_684, 0, x_3);
return x_684;
}
else
{
lean_object* x_726; lean_object* x_727; 
x_726 = lean_ctor_get(x_684, 1);
lean_inc(x_726);
lean_dec(x_684);
x_727 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_727, 0, x_3);
lean_ctor_set(x_727, 1, x_726);
return x_727;
}
}
}
}
block_574:
{
if (x_563 == 0)
{
lean_dec(x_562);
x_522 = x_564;
goto block_553;
}
else
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; 
x_565 = lean_mk_string("Found below term in the local context: ");
x_566 = l_Lean_stringToMessageData(x_565);
lean_dec(x_565);
lean_inc(x_518);
x_567 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_567, 0, x_518);
x_568 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_568, 0, x_566);
lean_ctor_set(x_568, 1, x_567);
x_569 = lean_mk_string("");
x_570 = l_Lean_stringToMessageData(x_569);
lean_dec(x_569);
x_571 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_571, 0, x_568);
lean_ctor_set(x_571, 1, x_570);
x_572 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_562, x_571, x_8, x_9, x_10, x_11, x_564);
x_573 = lean_ctor_get(x_572, 1);
lean_inc(x_573);
lean_dec(x_572);
x_522 = x_573;
goto block_553;
}
}
}
else
{
uint8_t x_728; 
lean_dec(x_521);
lean_dec(x_520);
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_728 = !lean_is_exclusive(x_554);
if (x_728 == 0)
{
lean_object* x_729; 
x_729 = lean_ctor_get(x_554, 0);
lean_dec(x_729);
lean_ctor_set_tag(x_554, 0);
lean_ctor_set(x_554, 0, x_3);
return x_554;
}
else
{
lean_object* x_730; lean_object* x_731; 
x_730 = lean_ctor_get(x_554, 1);
lean_inc(x_730);
lean_dec(x_554);
x_731 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_731, 0, x_3);
lean_ctor_set(x_731, 1, x_730);
return x_731;
}
}
block_553:
{
lean_object* x_523; uint8_t x_524; 
x_523 = lean_array_get_size(x_1);
x_524 = lean_nat_dec_lt(x_498, x_523);
if (x_524 == 0)
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
lean_dec(x_523);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_515)) {
 x_525 = lean_alloc_ctor(0, 2, 0);
} else {
 x_525 = x_515;
}
lean_ctor_set(x_525, 0, x_518);
lean_ctor_set(x_525, 1, x_501);
if (lean_is_scalar(x_502)) {
 x_526 = lean_alloc_ctor(1, 1, 0);
} else {
 x_526 = x_502;
}
lean_ctor_set(x_526, 0, x_525);
if (lean_is_scalar(x_520)) {
 x_527 = lean_alloc_ctor(0, 2, 0);
} else {
 x_527 = x_520;
}
lean_ctor_set(x_527, 0, x_526);
lean_ctor_set(x_527, 1, x_522);
return x_527;
}
else
{
uint8_t x_528; 
x_528 = lean_nat_dec_le(x_523, x_523);
if (x_528 == 0)
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; 
lean_dec(x_523);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_515)) {
 x_529 = lean_alloc_ctor(0, 2, 0);
} else {
 x_529 = x_515;
}
lean_ctor_set(x_529, 0, x_518);
lean_ctor_set(x_529, 1, x_501);
if (lean_is_scalar(x_502)) {
 x_530 = lean_alloc_ctor(1, 1, 0);
} else {
 x_530 = x_502;
}
lean_ctor_set(x_530, 0, x_529);
if (lean_is_scalar(x_520)) {
 x_531 = lean_alloc_ctor(0, 2, 0);
} else {
 x_531 = x_520;
}
lean_ctor_set(x_531, 0, x_530);
lean_ctor_set(x_531, 1, x_522);
return x_531;
}
else
{
size_t x_532; size_t x_533; lean_object* x_534; 
lean_dec(x_520);
x_532 = 0;
x_533 = lean_usize_of_nat(x_523);
lean_dec(x_523);
lean_inc(x_518);
x_534 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_518, x_1, x_532, x_533, x_8, x_9, x_10, x_11, x_522);
if (lean_obj_tag(x_534) == 0)
{
lean_object* x_535; uint8_t x_536; 
x_535 = lean_ctor_get(x_534, 0);
lean_inc(x_535);
x_536 = lean_unbox(x_535);
lean_dec(x_535);
if (x_536 == 0)
{
uint8_t x_537; 
lean_dec(x_3);
x_537 = !lean_is_exclusive(x_534);
if (x_537 == 0)
{
lean_object* x_538; lean_object* x_539; lean_object* x_540; 
x_538 = lean_ctor_get(x_534, 0);
lean_dec(x_538);
if (lean_is_scalar(x_515)) {
 x_539 = lean_alloc_ctor(0, 2, 0);
} else {
 x_539 = x_515;
}
lean_ctor_set(x_539, 0, x_518);
lean_ctor_set(x_539, 1, x_501);
if (lean_is_scalar(x_502)) {
 x_540 = lean_alloc_ctor(1, 1, 0);
} else {
 x_540 = x_502;
}
lean_ctor_set(x_540, 0, x_539);
lean_ctor_set(x_534, 0, x_540);
return x_534;
}
else
{
lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_541 = lean_ctor_get(x_534, 1);
lean_inc(x_541);
lean_dec(x_534);
if (lean_is_scalar(x_515)) {
 x_542 = lean_alloc_ctor(0, 2, 0);
} else {
 x_542 = x_515;
}
lean_ctor_set(x_542, 0, x_518);
lean_ctor_set(x_542, 1, x_501);
if (lean_is_scalar(x_502)) {
 x_543 = lean_alloc_ctor(1, 1, 0);
} else {
 x_543 = x_502;
}
lean_ctor_set(x_543, 0, x_542);
x_544 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_544, 0, x_543);
lean_ctor_set(x_544, 1, x_541);
return x_544;
}
}
else
{
uint8_t x_545; 
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
x_545 = !lean_is_exclusive(x_534);
if (x_545 == 0)
{
lean_object* x_546; 
x_546 = lean_ctor_get(x_534, 0);
lean_dec(x_546);
lean_ctor_set(x_534, 0, x_3);
return x_534;
}
else
{
lean_object* x_547; lean_object* x_548; 
x_547 = lean_ctor_get(x_534, 1);
lean_inc(x_547);
lean_dec(x_534);
x_548 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_548, 0, x_3);
lean_ctor_set(x_548, 1, x_547);
return x_548;
}
}
}
else
{
uint8_t x_549; 
lean_dec(x_518);
lean_dec(x_515);
lean_dec(x_502);
lean_dec(x_501);
x_549 = !lean_is_exclusive(x_534);
if (x_549 == 0)
{
lean_object* x_550; 
x_550 = lean_ctor_get(x_534, 0);
lean_dec(x_550);
lean_ctor_set_tag(x_534, 0);
lean_ctor_set(x_534, 0, x_3);
return x_534;
}
else
{
lean_object* x_551; lean_object* x_552; 
x_551 = lean_ctor_get(x_534, 1);
lean_inc(x_551);
lean_dec(x_534);
x_552 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_552, 0, x_3);
lean_ctor_set(x_552, 1, x_551);
return x_552;
}
}
}
}
}
}
else
{
uint8_t x_732; 
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_732 = !lean_is_exclusive(x_511);
if (x_732 == 0)
{
return x_511;
}
else
{
lean_object* x_733; lean_object* x_734; lean_object* x_735; 
x_733 = lean_ctor_get(x_511, 0);
x_734 = lean_ctor_get(x_511, 1);
lean_inc(x_734);
lean_inc(x_733);
lean_dec(x_511);
x_735 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_735, 0, x_733);
lean_ctor_set(x_735, 1, x_734);
return x_735;
}
}
}
}
}
}
case 3:
{
lean_object* x_736; 
lean_dec(x_7);
lean_dec(x_6);
x_736 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_736) == 0)
{
lean_object* x_737; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_737 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_737, 0, x_3);
lean_ctor_set(x_737, 1, x_12);
return x_737;
}
else
{
lean_object* x_738; lean_object* x_739; lean_object* x_740; 
x_738 = lean_ctor_get(x_736, 0);
lean_inc(x_738);
lean_dec(x_736);
x_739 = lean_unsigned_to_nat(0u);
x_740 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_739);
if (lean_obj_tag(x_740) == 0)
{
lean_object* x_741; 
lean_dec(x_738);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_741 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_741, 0, x_3);
lean_ctor_set(x_741, 1, x_12);
return x_741;
}
else
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; uint8_t x_746; 
x_742 = lean_ctor_get(x_740, 0);
lean_inc(x_742);
if (lean_is_exclusive(x_740)) {
 lean_ctor_release(x_740, 0);
 x_743 = x_740;
} else {
 lean_dec_ref(x_740);
 x_743 = lean_box(0);
}
x_744 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_738, x_8, x_9, x_10, x_11, x_12);
x_745 = lean_ctor_get(x_744, 0);
lean_inc(x_745);
x_746 = lean_unbox(x_745);
lean_dec(x_745);
if (x_746 == 0)
{
uint8_t x_747; 
lean_dec(x_743);
lean_dec(x_742);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_747 = !lean_is_exclusive(x_744);
if (x_747 == 0)
{
lean_object* x_748; 
x_748 = lean_ctor_get(x_744, 0);
lean_dec(x_748);
lean_ctor_set(x_744, 0, x_3);
return x_744;
}
else
{
lean_object* x_749; lean_object* x_750; 
x_749 = lean_ctor_get(x_744, 1);
lean_inc(x_749);
lean_dec(x_744);
x_750 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_750, 0, x_3);
lean_ctor_set(x_750, 1, x_749);
return x_750;
}
}
else
{
lean_object* x_751; lean_object* x_752; 
x_751 = lean_ctor_get(x_744, 1);
lean_inc(x_751);
lean_dec(x_744);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_752 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_742, x_8, x_9, x_10, x_11, x_751);
if (lean_obj_tag(x_752) == 0)
{
lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_795; 
x_753 = lean_ctor_get(x_752, 0);
lean_inc(x_753);
x_754 = lean_ctor_get(x_752, 1);
lean_inc(x_754);
lean_dec(x_752);
x_755 = lean_ctor_get(x_753, 1);
lean_inc(x_755);
if (lean_is_exclusive(x_753)) {
 lean_ctor_release(x_753, 0);
 lean_ctor_release(x_753, 1);
 x_756 = x_753;
} else {
 lean_dec_ref(x_753);
 x_756 = lean_box(0);
}
x_757 = lean_box(0);
lean_inc(x_8);
x_758 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_755, x_757, x_8, x_9, x_10, x_11, x_754);
x_759 = lean_ctor_get(x_758, 0);
lean_inc(x_759);
x_760 = lean_ctor_get(x_758, 1);
lean_inc(x_760);
if (lean_is_exclusive(x_758)) {
 lean_ctor_release(x_758, 0);
 lean_ctor_release(x_758, 1);
 x_761 = x_758;
} else {
 lean_dec_ref(x_758);
 x_761 = lean_box(0);
}
x_762 = l_Lean_Expr_mvarId_x21(x_759);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_795 = l_Lean_Meta_ppGoal(x_762, x_8, x_9, x_10, x_11, x_760);
if (lean_obj_tag(x_795) == 0)
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; uint8_t x_804; lean_object* x_805; lean_object* x_816; lean_object* x_817; lean_object* x_818; uint8_t x_819; 
x_796 = lean_ctor_get(x_795, 0);
lean_inc(x_796);
x_797 = lean_ctor_get(x_795, 1);
lean_inc(x_797);
lean_dec(x_795);
x_798 = lean_mk_string("Meta");
x_799 = lean_name_mk_string(x_757, x_798);
x_800 = lean_mk_string("IndPredBelow");
x_801 = lean_name_mk_string(x_799, x_800);
x_802 = lean_mk_string("match");
x_803 = lean_name_mk_string(x_801, x_802);
x_816 = lean_st_ref_get(x_11, x_797);
x_817 = lean_ctor_get(x_816, 0);
lean_inc(x_817);
x_818 = lean_ctor_get(x_817, 3);
lean_inc(x_818);
lean_dec(x_817);
x_819 = lean_ctor_get_uint8(x_818, sizeof(void*)*1);
lean_dec(x_818);
if (x_819 == 0)
{
lean_object* x_820; lean_object* x_821; lean_object* x_822; 
lean_dec(x_796);
x_820 = lean_ctor_get(x_816, 1);
lean_inc(x_820);
lean_dec(x_816);
x_821 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_822 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_762, x_821, x_8, x_9, x_10, x_11, x_820);
if (lean_obj_tag(x_822) == 0)
{
lean_object* x_823; uint8_t x_824; 
x_823 = lean_ctor_get(x_822, 0);
lean_inc(x_823);
x_824 = lean_unbox(x_823);
lean_dec(x_823);
if (x_824 == 0)
{
lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; uint8_t x_829; 
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
x_825 = lean_ctor_get(x_822, 1);
lean_inc(x_825);
lean_dec(x_822);
x_826 = lean_st_ref_get(x_11, x_825);
x_827 = lean_ctor_get(x_826, 0);
lean_inc(x_827);
x_828 = lean_ctor_get(x_827, 3);
lean_inc(x_828);
lean_dec(x_827);
x_829 = lean_ctor_get_uint8(x_828, sizeof(void*)*1);
lean_dec(x_828);
if (x_829 == 0)
{
uint8_t x_830; 
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_830 = !lean_is_exclusive(x_826);
if (x_830 == 0)
{
lean_object* x_831; 
x_831 = lean_ctor_get(x_826, 0);
lean_dec(x_831);
lean_ctor_set(x_826, 0, x_3);
return x_826;
}
else
{
lean_object* x_832; lean_object* x_833; 
x_832 = lean_ctor_get(x_826, 1);
lean_inc(x_832);
lean_dec(x_826);
x_833 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_833, 0, x_3);
lean_ctor_set(x_833, 1, x_832);
return x_833;
}
}
else
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; uint8_t x_837; 
x_834 = lean_ctor_get(x_826, 1);
lean_inc(x_834);
lean_dec(x_826);
lean_inc(x_803);
x_835 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_834);
x_836 = lean_ctor_get(x_835, 0);
lean_inc(x_836);
x_837 = lean_unbox(x_836);
lean_dec(x_836);
if (x_837 == 0)
{
uint8_t x_838; 
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_838 = !lean_is_exclusive(x_835);
if (x_838 == 0)
{
lean_object* x_839; 
x_839 = lean_ctor_get(x_835, 0);
lean_dec(x_839);
lean_ctor_set(x_835, 0, x_3);
return x_835;
}
else
{
lean_object* x_840; lean_object* x_841; 
x_840 = lean_ctor_get(x_835, 1);
lean_inc(x_840);
lean_dec(x_835);
x_841 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_841, 0, x_3);
lean_ctor_set(x_841, 1, x_840);
return x_841;
}
}
else
{
lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; uint8_t x_846; 
x_842 = lean_ctor_get(x_835, 1);
lean_inc(x_842);
lean_dec(x_835);
x_843 = lean_mk_string("could not find below term in the local context");
x_844 = l_Lean_stringToMessageData(x_843);
lean_dec(x_843);
x_845 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_803, x_844, x_8, x_9, x_10, x_11, x_842);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_846 = !lean_is_exclusive(x_845);
if (x_846 == 0)
{
lean_object* x_847; 
x_847 = lean_ctor_get(x_845, 0);
lean_dec(x_847);
lean_ctor_set(x_845, 0, x_3);
return x_845;
}
else
{
lean_object* x_848; lean_object* x_849; 
x_848 = lean_ctor_get(x_845, 1);
lean_inc(x_848);
lean_dec(x_845);
x_849 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_849, 0, x_3);
lean_ctor_set(x_849, 1, x_848);
return x_849;
}
}
}
}
else
{
lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; uint8_t x_854; 
x_850 = lean_ctor_get(x_822, 1);
lean_inc(x_850);
lean_dec(x_822);
x_851 = lean_st_ref_get(x_11, x_850);
x_852 = lean_ctor_get(x_851, 0);
lean_inc(x_852);
x_853 = lean_ctor_get(x_852, 3);
lean_inc(x_853);
lean_dec(x_852);
x_854 = lean_ctor_get_uint8(x_853, sizeof(void*)*1);
lean_dec(x_853);
if (x_854 == 0)
{
lean_object* x_855; uint8_t x_856; 
x_855 = lean_ctor_get(x_851, 1);
lean_inc(x_855);
lean_dec(x_851);
x_856 = 0;
x_804 = x_856;
x_805 = x_855;
goto block_815;
}
else
{
lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; uint8_t x_861; 
x_857 = lean_ctor_get(x_851, 1);
lean_inc(x_857);
lean_dec(x_851);
lean_inc(x_803);
x_858 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_857);
x_859 = lean_ctor_get(x_858, 0);
lean_inc(x_859);
x_860 = lean_ctor_get(x_858, 1);
lean_inc(x_860);
lean_dec(x_858);
x_861 = lean_unbox(x_859);
lean_dec(x_859);
x_804 = x_861;
x_805 = x_860;
goto block_815;
}
}
}
else
{
uint8_t x_862; 
lean_dec(x_803);
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_862 = !lean_is_exclusive(x_822);
if (x_862 == 0)
{
lean_object* x_863; 
x_863 = lean_ctor_get(x_822, 0);
lean_dec(x_863);
lean_ctor_set_tag(x_822, 0);
lean_ctor_set(x_822, 0, x_3);
return x_822;
}
else
{
lean_object* x_864; lean_object* x_865; 
x_864 = lean_ctor_get(x_822, 1);
lean_inc(x_864);
lean_dec(x_822);
x_865 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_865, 0, x_3);
lean_ctor_set(x_865, 1, x_864);
return x_865;
}
}
}
else
{
lean_object* x_866; lean_object* x_867; lean_object* x_868; uint8_t x_869; 
x_866 = lean_ctor_get(x_816, 1);
lean_inc(x_866);
lean_dec(x_816);
lean_inc(x_803);
x_867 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_866);
x_868 = lean_ctor_get(x_867, 0);
lean_inc(x_868);
x_869 = lean_unbox(x_868);
lean_dec(x_868);
if (x_869 == 0)
{
lean_object* x_870; lean_object* x_871; lean_object* x_872; 
lean_dec(x_796);
x_870 = lean_ctor_get(x_867, 1);
lean_inc(x_870);
lean_dec(x_867);
x_871 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_872 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_762, x_871, x_8, x_9, x_10, x_11, x_870);
if (lean_obj_tag(x_872) == 0)
{
lean_object* x_873; uint8_t x_874; 
x_873 = lean_ctor_get(x_872, 0);
lean_inc(x_873);
x_874 = lean_unbox(x_873);
lean_dec(x_873);
if (x_874 == 0)
{
lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; uint8_t x_879; 
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
x_875 = lean_ctor_get(x_872, 1);
lean_inc(x_875);
lean_dec(x_872);
x_876 = lean_st_ref_get(x_11, x_875);
x_877 = lean_ctor_get(x_876, 0);
lean_inc(x_877);
x_878 = lean_ctor_get(x_877, 3);
lean_inc(x_878);
lean_dec(x_877);
x_879 = lean_ctor_get_uint8(x_878, sizeof(void*)*1);
lean_dec(x_878);
if (x_879 == 0)
{
uint8_t x_880; 
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_880 = !lean_is_exclusive(x_876);
if (x_880 == 0)
{
lean_object* x_881; 
x_881 = lean_ctor_get(x_876, 0);
lean_dec(x_881);
lean_ctor_set(x_876, 0, x_3);
return x_876;
}
else
{
lean_object* x_882; lean_object* x_883; 
x_882 = lean_ctor_get(x_876, 1);
lean_inc(x_882);
lean_dec(x_876);
x_883 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_883, 0, x_3);
lean_ctor_set(x_883, 1, x_882);
return x_883;
}
}
else
{
lean_object* x_884; lean_object* x_885; lean_object* x_886; uint8_t x_887; 
x_884 = lean_ctor_get(x_876, 1);
lean_inc(x_884);
lean_dec(x_876);
lean_inc(x_803);
x_885 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_884);
x_886 = lean_ctor_get(x_885, 0);
lean_inc(x_886);
x_887 = lean_unbox(x_886);
lean_dec(x_886);
if (x_887 == 0)
{
uint8_t x_888; 
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_888 = !lean_is_exclusive(x_885);
if (x_888 == 0)
{
lean_object* x_889; 
x_889 = lean_ctor_get(x_885, 0);
lean_dec(x_889);
lean_ctor_set(x_885, 0, x_3);
return x_885;
}
else
{
lean_object* x_890; lean_object* x_891; 
x_890 = lean_ctor_get(x_885, 1);
lean_inc(x_890);
lean_dec(x_885);
x_891 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_891, 0, x_3);
lean_ctor_set(x_891, 1, x_890);
return x_891;
}
}
else
{
lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; uint8_t x_896; 
x_892 = lean_ctor_get(x_885, 1);
lean_inc(x_892);
lean_dec(x_885);
x_893 = lean_mk_string("could not find below term in the local context");
x_894 = l_Lean_stringToMessageData(x_893);
lean_dec(x_893);
x_895 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_803, x_894, x_8, x_9, x_10, x_11, x_892);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_896 = !lean_is_exclusive(x_895);
if (x_896 == 0)
{
lean_object* x_897; 
x_897 = lean_ctor_get(x_895, 0);
lean_dec(x_897);
lean_ctor_set(x_895, 0, x_3);
return x_895;
}
else
{
lean_object* x_898; lean_object* x_899; 
x_898 = lean_ctor_get(x_895, 1);
lean_inc(x_898);
lean_dec(x_895);
x_899 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_899, 0, x_3);
lean_ctor_set(x_899, 1, x_898);
return x_899;
}
}
}
}
else
{
lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; uint8_t x_904; 
x_900 = lean_ctor_get(x_872, 1);
lean_inc(x_900);
lean_dec(x_872);
x_901 = lean_st_ref_get(x_11, x_900);
x_902 = lean_ctor_get(x_901, 0);
lean_inc(x_902);
x_903 = lean_ctor_get(x_902, 3);
lean_inc(x_903);
lean_dec(x_902);
x_904 = lean_ctor_get_uint8(x_903, sizeof(void*)*1);
lean_dec(x_903);
if (x_904 == 0)
{
lean_object* x_905; uint8_t x_906; 
x_905 = lean_ctor_get(x_901, 1);
lean_inc(x_905);
lean_dec(x_901);
x_906 = 0;
x_804 = x_906;
x_805 = x_905;
goto block_815;
}
else
{
lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; uint8_t x_911; 
x_907 = lean_ctor_get(x_901, 1);
lean_inc(x_907);
lean_dec(x_901);
lean_inc(x_803);
x_908 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_907);
x_909 = lean_ctor_get(x_908, 0);
lean_inc(x_909);
x_910 = lean_ctor_get(x_908, 1);
lean_inc(x_910);
lean_dec(x_908);
x_911 = lean_unbox(x_909);
lean_dec(x_909);
x_804 = x_911;
x_805 = x_910;
goto block_815;
}
}
}
else
{
uint8_t x_912; 
lean_dec(x_803);
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_912 = !lean_is_exclusive(x_872);
if (x_912 == 0)
{
lean_object* x_913; 
x_913 = lean_ctor_get(x_872, 0);
lean_dec(x_913);
lean_ctor_set_tag(x_872, 0);
lean_ctor_set(x_872, 0, x_3);
return x_872;
}
else
{
lean_object* x_914; lean_object* x_915; 
x_914 = lean_ctor_get(x_872, 1);
lean_inc(x_914);
lean_dec(x_872);
x_915 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_915, 0, x_3);
lean_ctor_set(x_915, 1, x_914);
return x_915;
}
}
}
else
{
lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
x_916 = lean_ctor_get(x_867, 1);
lean_inc(x_916);
lean_dec(x_867);
x_917 = lean_mk_string("");
x_918 = l_Lean_stringToMessageData(x_917);
lean_dec(x_917);
x_919 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_919, 0, x_796);
lean_inc(x_918);
x_920 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_920, 0, x_918);
lean_ctor_set(x_920, 1, x_919);
x_921 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_921, 0, x_920);
lean_ctor_set(x_921, 1, x_918);
lean_inc(x_803);
x_922 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_803, x_921, x_8, x_9, x_10, x_11, x_916);
x_923 = lean_ctor_get(x_922, 1);
lean_inc(x_923);
lean_dec(x_922);
x_924 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_925 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_762, x_924, x_8, x_9, x_10, x_11, x_923);
if (lean_obj_tag(x_925) == 0)
{
lean_object* x_926; uint8_t x_927; 
x_926 = lean_ctor_get(x_925, 0);
lean_inc(x_926);
x_927 = lean_unbox(x_926);
lean_dec(x_926);
if (x_927 == 0)
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; uint8_t x_932; 
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
x_928 = lean_ctor_get(x_925, 1);
lean_inc(x_928);
lean_dec(x_925);
x_929 = lean_st_ref_get(x_11, x_928);
x_930 = lean_ctor_get(x_929, 0);
lean_inc(x_930);
x_931 = lean_ctor_get(x_930, 3);
lean_inc(x_931);
lean_dec(x_930);
x_932 = lean_ctor_get_uint8(x_931, sizeof(void*)*1);
lean_dec(x_931);
if (x_932 == 0)
{
uint8_t x_933; 
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_933 = !lean_is_exclusive(x_929);
if (x_933 == 0)
{
lean_object* x_934; 
x_934 = lean_ctor_get(x_929, 0);
lean_dec(x_934);
lean_ctor_set(x_929, 0, x_3);
return x_929;
}
else
{
lean_object* x_935; lean_object* x_936; 
x_935 = lean_ctor_get(x_929, 1);
lean_inc(x_935);
lean_dec(x_929);
x_936 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_936, 0, x_3);
lean_ctor_set(x_936, 1, x_935);
return x_936;
}
}
else
{
lean_object* x_937; lean_object* x_938; lean_object* x_939; uint8_t x_940; 
x_937 = lean_ctor_get(x_929, 1);
lean_inc(x_937);
lean_dec(x_929);
lean_inc(x_803);
x_938 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_937);
x_939 = lean_ctor_get(x_938, 0);
lean_inc(x_939);
x_940 = lean_unbox(x_939);
lean_dec(x_939);
if (x_940 == 0)
{
uint8_t x_941; 
lean_dec(x_803);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_941 = !lean_is_exclusive(x_938);
if (x_941 == 0)
{
lean_object* x_942; 
x_942 = lean_ctor_get(x_938, 0);
lean_dec(x_942);
lean_ctor_set(x_938, 0, x_3);
return x_938;
}
else
{
lean_object* x_943; lean_object* x_944; 
x_943 = lean_ctor_get(x_938, 1);
lean_inc(x_943);
lean_dec(x_938);
x_944 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_944, 0, x_3);
lean_ctor_set(x_944, 1, x_943);
return x_944;
}
}
else
{
lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; uint8_t x_949; 
x_945 = lean_ctor_get(x_938, 1);
lean_inc(x_945);
lean_dec(x_938);
x_946 = lean_mk_string("could not find below term in the local context");
x_947 = l_Lean_stringToMessageData(x_946);
lean_dec(x_946);
x_948 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_803, x_947, x_8, x_9, x_10, x_11, x_945);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_949 = !lean_is_exclusive(x_948);
if (x_949 == 0)
{
lean_object* x_950; 
x_950 = lean_ctor_get(x_948, 0);
lean_dec(x_950);
lean_ctor_set(x_948, 0, x_3);
return x_948;
}
else
{
lean_object* x_951; lean_object* x_952; 
x_951 = lean_ctor_get(x_948, 1);
lean_inc(x_951);
lean_dec(x_948);
x_952 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_952, 0, x_3);
lean_ctor_set(x_952, 1, x_951);
return x_952;
}
}
}
}
else
{
lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; uint8_t x_957; 
x_953 = lean_ctor_get(x_925, 1);
lean_inc(x_953);
lean_dec(x_925);
x_954 = lean_st_ref_get(x_11, x_953);
x_955 = lean_ctor_get(x_954, 0);
lean_inc(x_955);
x_956 = lean_ctor_get(x_955, 3);
lean_inc(x_956);
lean_dec(x_955);
x_957 = lean_ctor_get_uint8(x_956, sizeof(void*)*1);
lean_dec(x_956);
if (x_957 == 0)
{
lean_object* x_958; uint8_t x_959; 
x_958 = lean_ctor_get(x_954, 1);
lean_inc(x_958);
lean_dec(x_954);
x_959 = 0;
x_804 = x_959;
x_805 = x_958;
goto block_815;
}
else
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; uint8_t x_964; 
x_960 = lean_ctor_get(x_954, 1);
lean_inc(x_960);
lean_dec(x_954);
lean_inc(x_803);
x_961 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_803, x_8, x_9, x_10, x_11, x_960);
x_962 = lean_ctor_get(x_961, 0);
lean_inc(x_962);
x_963 = lean_ctor_get(x_961, 1);
lean_inc(x_963);
lean_dec(x_961);
x_964 = lean_unbox(x_962);
lean_dec(x_962);
x_804 = x_964;
x_805 = x_963;
goto block_815;
}
}
}
else
{
uint8_t x_965; 
lean_dec(x_803);
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_965 = !lean_is_exclusive(x_925);
if (x_965 == 0)
{
lean_object* x_966; 
x_966 = lean_ctor_get(x_925, 0);
lean_dec(x_966);
lean_ctor_set_tag(x_925, 0);
lean_ctor_set(x_925, 0, x_3);
return x_925;
}
else
{
lean_object* x_967; lean_object* x_968; 
x_967 = lean_ctor_get(x_925, 1);
lean_inc(x_967);
lean_dec(x_925);
x_968 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_968, 0, x_3);
lean_ctor_set(x_968, 1, x_967);
return x_968;
}
}
}
}
block_815:
{
if (x_804 == 0)
{
lean_dec(x_803);
x_763 = x_805;
goto block_794;
}
else
{
lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; 
x_806 = lean_mk_string("Found below term in the local context: ");
x_807 = l_Lean_stringToMessageData(x_806);
lean_dec(x_806);
lean_inc(x_759);
x_808 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_808, 0, x_759);
x_809 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_809, 0, x_807);
lean_ctor_set(x_809, 1, x_808);
x_810 = lean_mk_string("");
x_811 = l_Lean_stringToMessageData(x_810);
lean_dec(x_810);
x_812 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_812, 0, x_809);
lean_ctor_set(x_812, 1, x_811);
x_813 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_803, x_812, x_8, x_9, x_10, x_11, x_805);
x_814 = lean_ctor_get(x_813, 1);
lean_inc(x_814);
lean_dec(x_813);
x_763 = x_814;
goto block_794;
}
}
}
else
{
uint8_t x_969; 
lean_dec(x_762);
lean_dec(x_761);
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_969 = !lean_is_exclusive(x_795);
if (x_969 == 0)
{
lean_object* x_970; 
x_970 = lean_ctor_get(x_795, 0);
lean_dec(x_970);
lean_ctor_set_tag(x_795, 0);
lean_ctor_set(x_795, 0, x_3);
return x_795;
}
else
{
lean_object* x_971; lean_object* x_972; 
x_971 = lean_ctor_get(x_795, 1);
lean_inc(x_971);
lean_dec(x_795);
x_972 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_972, 0, x_3);
lean_ctor_set(x_972, 1, x_971);
return x_972;
}
}
block_794:
{
lean_object* x_764; uint8_t x_765; 
x_764 = lean_array_get_size(x_1);
x_765 = lean_nat_dec_lt(x_739, x_764);
if (x_765 == 0)
{
lean_object* x_766; lean_object* x_767; lean_object* x_768; 
lean_dec(x_764);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_756)) {
 x_766 = lean_alloc_ctor(0, 2, 0);
} else {
 x_766 = x_756;
}
lean_ctor_set(x_766, 0, x_759);
lean_ctor_set(x_766, 1, x_742);
if (lean_is_scalar(x_743)) {
 x_767 = lean_alloc_ctor(1, 1, 0);
} else {
 x_767 = x_743;
}
lean_ctor_set(x_767, 0, x_766);
if (lean_is_scalar(x_761)) {
 x_768 = lean_alloc_ctor(0, 2, 0);
} else {
 x_768 = x_761;
}
lean_ctor_set(x_768, 0, x_767);
lean_ctor_set(x_768, 1, x_763);
return x_768;
}
else
{
uint8_t x_769; 
x_769 = lean_nat_dec_le(x_764, x_764);
if (x_769 == 0)
{
lean_object* x_770; lean_object* x_771; lean_object* x_772; 
lean_dec(x_764);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_756)) {
 x_770 = lean_alloc_ctor(0, 2, 0);
} else {
 x_770 = x_756;
}
lean_ctor_set(x_770, 0, x_759);
lean_ctor_set(x_770, 1, x_742);
if (lean_is_scalar(x_743)) {
 x_771 = lean_alloc_ctor(1, 1, 0);
} else {
 x_771 = x_743;
}
lean_ctor_set(x_771, 0, x_770);
if (lean_is_scalar(x_761)) {
 x_772 = lean_alloc_ctor(0, 2, 0);
} else {
 x_772 = x_761;
}
lean_ctor_set(x_772, 0, x_771);
lean_ctor_set(x_772, 1, x_763);
return x_772;
}
else
{
size_t x_773; size_t x_774; lean_object* x_775; 
lean_dec(x_761);
x_773 = 0;
x_774 = lean_usize_of_nat(x_764);
lean_dec(x_764);
lean_inc(x_759);
x_775 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_759, x_1, x_773, x_774, x_8, x_9, x_10, x_11, x_763);
if (lean_obj_tag(x_775) == 0)
{
lean_object* x_776; uint8_t x_777; 
x_776 = lean_ctor_get(x_775, 0);
lean_inc(x_776);
x_777 = lean_unbox(x_776);
lean_dec(x_776);
if (x_777 == 0)
{
uint8_t x_778; 
lean_dec(x_3);
x_778 = !lean_is_exclusive(x_775);
if (x_778 == 0)
{
lean_object* x_779; lean_object* x_780; lean_object* x_781; 
x_779 = lean_ctor_get(x_775, 0);
lean_dec(x_779);
if (lean_is_scalar(x_756)) {
 x_780 = lean_alloc_ctor(0, 2, 0);
} else {
 x_780 = x_756;
}
lean_ctor_set(x_780, 0, x_759);
lean_ctor_set(x_780, 1, x_742);
if (lean_is_scalar(x_743)) {
 x_781 = lean_alloc_ctor(1, 1, 0);
} else {
 x_781 = x_743;
}
lean_ctor_set(x_781, 0, x_780);
lean_ctor_set(x_775, 0, x_781);
return x_775;
}
else
{
lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; 
x_782 = lean_ctor_get(x_775, 1);
lean_inc(x_782);
lean_dec(x_775);
if (lean_is_scalar(x_756)) {
 x_783 = lean_alloc_ctor(0, 2, 0);
} else {
 x_783 = x_756;
}
lean_ctor_set(x_783, 0, x_759);
lean_ctor_set(x_783, 1, x_742);
if (lean_is_scalar(x_743)) {
 x_784 = lean_alloc_ctor(1, 1, 0);
} else {
 x_784 = x_743;
}
lean_ctor_set(x_784, 0, x_783);
x_785 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_785, 0, x_784);
lean_ctor_set(x_785, 1, x_782);
return x_785;
}
}
else
{
uint8_t x_786; 
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
x_786 = !lean_is_exclusive(x_775);
if (x_786 == 0)
{
lean_object* x_787; 
x_787 = lean_ctor_get(x_775, 0);
lean_dec(x_787);
lean_ctor_set(x_775, 0, x_3);
return x_775;
}
else
{
lean_object* x_788; lean_object* x_789; 
x_788 = lean_ctor_get(x_775, 1);
lean_inc(x_788);
lean_dec(x_775);
x_789 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_789, 0, x_3);
lean_ctor_set(x_789, 1, x_788);
return x_789;
}
}
}
else
{
uint8_t x_790; 
lean_dec(x_759);
lean_dec(x_756);
lean_dec(x_743);
lean_dec(x_742);
x_790 = !lean_is_exclusive(x_775);
if (x_790 == 0)
{
lean_object* x_791; 
x_791 = lean_ctor_get(x_775, 0);
lean_dec(x_791);
lean_ctor_set_tag(x_775, 0);
lean_ctor_set(x_775, 0, x_3);
return x_775;
}
else
{
lean_object* x_792; lean_object* x_793; 
x_792 = lean_ctor_get(x_775, 1);
lean_inc(x_792);
lean_dec(x_775);
x_793 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_793, 0, x_3);
lean_ctor_set(x_793, 1, x_792);
return x_793;
}
}
}
}
}
}
else
{
uint8_t x_973; 
lean_dec(x_743);
lean_dec(x_742);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_973 = !lean_is_exclusive(x_752);
if (x_973 == 0)
{
return x_752;
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; 
x_974 = lean_ctor_get(x_752, 0);
x_975 = lean_ctor_get(x_752, 1);
lean_inc(x_975);
lean_inc(x_974);
lean_dec(x_752);
x_976 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_976, 0, x_974);
lean_ctor_set(x_976, 1, x_975);
return x_976;
}
}
}
}
}
}
case 4:
{
lean_object* x_977; 
lean_dec(x_7);
lean_dec(x_6);
x_977 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_977) == 0)
{
lean_object* x_978; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_978 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_978, 0, x_3);
lean_ctor_set(x_978, 1, x_12);
return x_978;
}
else
{
lean_object* x_979; lean_object* x_980; lean_object* x_981; 
x_979 = lean_ctor_get(x_977, 0);
lean_inc(x_979);
lean_dec(x_977);
x_980 = lean_unsigned_to_nat(0u);
x_981 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_980);
if (lean_obj_tag(x_981) == 0)
{
lean_object* x_982; 
lean_dec(x_979);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_982 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_982, 0, x_3);
lean_ctor_set(x_982, 1, x_12);
return x_982;
}
else
{
lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; uint8_t x_987; 
x_983 = lean_ctor_get(x_981, 0);
lean_inc(x_983);
if (lean_is_exclusive(x_981)) {
 lean_ctor_release(x_981, 0);
 x_984 = x_981;
} else {
 lean_dec_ref(x_981);
 x_984 = lean_box(0);
}
x_985 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_979, x_8, x_9, x_10, x_11, x_12);
x_986 = lean_ctor_get(x_985, 0);
lean_inc(x_986);
x_987 = lean_unbox(x_986);
lean_dec(x_986);
if (x_987 == 0)
{
uint8_t x_988; 
lean_dec(x_984);
lean_dec(x_983);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_988 = !lean_is_exclusive(x_985);
if (x_988 == 0)
{
lean_object* x_989; 
x_989 = lean_ctor_get(x_985, 0);
lean_dec(x_989);
lean_ctor_set(x_985, 0, x_3);
return x_985;
}
else
{
lean_object* x_990; lean_object* x_991; 
x_990 = lean_ctor_get(x_985, 1);
lean_inc(x_990);
lean_dec(x_985);
x_991 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_991, 0, x_3);
lean_ctor_set(x_991, 1, x_990);
return x_991;
}
}
else
{
lean_object* x_992; lean_object* x_993; 
x_992 = lean_ctor_get(x_985, 1);
lean_inc(x_992);
lean_dec(x_985);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_993 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_983, x_8, x_9, x_10, x_11, x_992);
if (lean_obj_tag(x_993) == 0)
{
lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1036; 
x_994 = lean_ctor_get(x_993, 0);
lean_inc(x_994);
x_995 = lean_ctor_get(x_993, 1);
lean_inc(x_995);
lean_dec(x_993);
x_996 = lean_ctor_get(x_994, 1);
lean_inc(x_996);
if (lean_is_exclusive(x_994)) {
 lean_ctor_release(x_994, 0);
 lean_ctor_release(x_994, 1);
 x_997 = x_994;
} else {
 lean_dec_ref(x_994);
 x_997 = lean_box(0);
}
x_998 = lean_box(0);
lean_inc(x_8);
x_999 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_996, x_998, x_8, x_9, x_10, x_11, x_995);
x_1000 = lean_ctor_get(x_999, 0);
lean_inc(x_1000);
x_1001 = lean_ctor_get(x_999, 1);
lean_inc(x_1001);
if (lean_is_exclusive(x_999)) {
 lean_ctor_release(x_999, 0);
 lean_ctor_release(x_999, 1);
 x_1002 = x_999;
} else {
 lean_dec_ref(x_999);
 x_1002 = lean_box(0);
}
x_1003 = l_Lean_Expr_mvarId_x21(x_1000);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1036 = l_Lean_Meta_ppGoal(x_1003, x_8, x_9, x_10, x_11, x_1001);
if (lean_obj_tag(x_1036) == 0)
{
lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; uint8_t x_1045; lean_object* x_1046; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; uint8_t x_1060; 
x_1037 = lean_ctor_get(x_1036, 0);
lean_inc(x_1037);
x_1038 = lean_ctor_get(x_1036, 1);
lean_inc(x_1038);
lean_dec(x_1036);
x_1039 = lean_mk_string("Meta");
x_1040 = lean_name_mk_string(x_998, x_1039);
x_1041 = lean_mk_string("IndPredBelow");
x_1042 = lean_name_mk_string(x_1040, x_1041);
x_1043 = lean_mk_string("match");
x_1044 = lean_name_mk_string(x_1042, x_1043);
x_1057 = lean_st_ref_get(x_11, x_1038);
x_1058 = lean_ctor_get(x_1057, 0);
lean_inc(x_1058);
x_1059 = lean_ctor_get(x_1058, 3);
lean_inc(x_1059);
lean_dec(x_1058);
x_1060 = lean_ctor_get_uint8(x_1059, sizeof(void*)*1);
lean_dec(x_1059);
if (x_1060 == 0)
{
lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; 
lean_dec(x_1037);
x_1061 = lean_ctor_get(x_1057, 1);
lean_inc(x_1061);
lean_dec(x_1057);
x_1062 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1063 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1003, x_1062, x_8, x_9, x_10, x_11, x_1061);
if (lean_obj_tag(x_1063) == 0)
{
lean_object* x_1064; uint8_t x_1065; 
x_1064 = lean_ctor_get(x_1063, 0);
lean_inc(x_1064);
x_1065 = lean_unbox(x_1064);
lean_dec(x_1064);
if (x_1065 == 0)
{
lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; uint8_t x_1070; 
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
x_1066 = lean_ctor_get(x_1063, 1);
lean_inc(x_1066);
lean_dec(x_1063);
x_1067 = lean_st_ref_get(x_11, x_1066);
x_1068 = lean_ctor_get(x_1067, 0);
lean_inc(x_1068);
x_1069 = lean_ctor_get(x_1068, 3);
lean_inc(x_1069);
lean_dec(x_1068);
x_1070 = lean_ctor_get_uint8(x_1069, sizeof(void*)*1);
lean_dec(x_1069);
if (x_1070 == 0)
{
uint8_t x_1071; 
lean_dec(x_1044);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1071 = !lean_is_exclusive(x_1067);
if (x_1071 == 0)
{
lean_object* x_1072; 
x_1072 = lean_ctor_get(x_1067, 0);
lean_dec(x_1072);
lean_ctor_set(x_1067, 0, x_3);
return x_1067;
}
else
{
lean_object* x_1073; lean_object* x_1074; 
x_1073 = lean_ctor_get(x_1067, 1);
lean_inc(x_1073);
lean_dec(x_1067);
x_1074 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1074, 0, x_3);
lean_ctor_set(x_1074, 1, x_1073);
return x_1074;
}
}
else
{
lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; uint8_t x_1078; 
x_1075 = lean_ctor_get(x_1067, 1);
lean_inc(x_1075);
lean_dec(x_1067);
lean_inc(x_1044);
x_1076 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1075);
x_1077 = lean_ctor_get(x_1076, 0);
lean_inc(x_1077);
x_1078 = lean_unbox(x_1077);
lean_dec(x_1077);
if (x_1078 == 0)
{
uint8_t x_1079; 
lean_dec(x_1044);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1079 = !lean_is_exclusive(x_1076);
if (x_1079 == 0)
{
lean_object* x_1080; 
x_1080 = lean_ctor_get(x_1076, 0);
lean_dec(x_1080);
lean_ctor_set(x_1076, 0, x_3);
return x_1076;
}
else
{
lean_object* x_1081; lean_object* x_1082; 
x_1081 = lean_ctor_get(x_1076, 1);
lean_inc(x_1081);
lean_dec(x_1076);
x_1082 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1082, 0, x_3);
lean_ctor_set(x_1082, 1, x_1081);
return x_1082;
}
}
else
{
lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; uint8_t x_1087; 
x_1083 = lean_ctor_get(x_1076, 1);
lean_inc(x_1083);
lean_dec(x_1076);
x_1084 = lean_mk_string("could not find below term in the local context");
x_1085 = l_Lean_stringToMessageData(x_1084);
lean_dec(x_1084);
x_1086 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1044, x_1085, x_8, x_9, x_10, x_11, x_1083);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1087 = !lean_is_exclusive(x_1086);
if (x_1087 == 0)
{
lean_object* x_1088; 
x_1088 = lean_ctor_get(x_1086, 0);
lean_dec(x_1088);
lean_ctor_set(x_1086, 0, x_3);
return x_1086;
}
else
{
lean_object* x_1089; lean_object* x_1090; 
x_1089 = lean_ctor_get(x_1086, 1);
lean_inc(x_1089);
lean_dec(x_1086);
x_1090 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1090, 0, x_3);
lean_ctor_set(x_1090, 1, x_1089);
return x_1090;
}
}
}
}
else
{
lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; uint8_t x_1095; 
x_1091 = lean_ctor_get(x_1063, 1);
lean_inc(x_1091);
lean_dec(x_1063);
x_1092 = lean_st_ref_get(x_11, x_1091);
x_1093 = lean_ctor_get(x_1092, 0);
lean_inc(x_1093);
x_1094 = lean_ctor_get(x_1093, 3);
lean_inc(x_1094);
lean_dec(x_1093);
x_1095 = lean_ctor_get_uint8(x_1094, sizeof(void*)*1);
lean_dec(x_1094);
if (x_1095 == 0)
{
lean_object* x_1096; uint8_t x_1097; 
x_1096 = lean_ctor_get(x_1092, 1);
lean_inc(x_1096);
lean_dec(x_1092);
x_1097 = 0;
x_1045 = x_1097;
x_1046 = x_1096;
goto block_1056;
}
else
{
lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; uint8_t x_1102; 
x_1098 = lean_ctor_get(x_1092, 1);
lean_inc(x_1098);
lean_dec(x_1092);
lean_inc(x_1044);
x_1099 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1098);
x_1100 = lean_ctor_get(x_1099, 0);
lean_inc(x_1100);
x_1101 = lean_ctor_get(x_1099, 1);
lean_inc(x_1101);
lean_dec(x_1099);
x_1102 = lean_unbox(x_1100);
lean_dec(x_1100);
x_1045 = x_1102;
x_1046 = x_1101;
goto block_1056;
}
}
}
else
{
uint8_t x_1103; 
lean_dec(x_1044);
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1103 = !lean_is_exclusive(x_1063);
if (x_1103 == 0)
{
lean_object* x_1104; 
x_1104 = lean_ctor_get(x_1063, 0);
lean_dec(x_1104);
lean_ctor_set_tag(x_1063, 0);
lean_ctor_set(x_1063, 0, x_3);
return x_1063;
}
else
{
lean_object* x_1105; lean_object* x_1106; 
x_1105 = lean_ctor_get(x_1063, 1);
lean_inc(x_1105);
lean_dec(x_1063);
x_1106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1106, 0, x_3);
lean_ctor_set(x_1106, 1, x_1105);
return x_1106;
}
}
}
else
{
lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; uint8_t x_1110; 
x_1107 = lean_ctor_get(x_1057, 1);
lean_inc(x_1107);
lean_dec(x_1057);
lean_inc(x_1044);
x_1108 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1107);
x_1109 = lean_ctor_get(x_1108, 0);
lean_inc(x_1109);
x_1110 = lean_unbox(x_1109);
lean_dec(x_1109);
if (x_1110 == 0)
{
lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; 
lean_dec(x_1037);
x_1111 = lean_ctor_get(x_1108, 1);
lean_inc(x_1111);
lean_dec(x_1108);
x_1112 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1113 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1003, x_1112, x_8, x_9, x_10, x_11, x_1111);
if (lean_obj_tag(x_1113) == 0)
{
lean_object* x_1114; uint8_t x_1115; 
x_1114 = lean_ctor_get(x_1113, 0);
lean_inc(x_1114);
x_1115 = lean_unbox(x_1114);
lean_dec(x_1114);
if (x_1115 == 0)
{
lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; uint8_t x_1120; 
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
x_1116 = lean_ctor_get(x_1113, 1);
lean_inc(x_1116);
lean_dec(x_1113);
x_1117 = lean_st_ref_get(x_11, x_1116);
x_1118 = lean_ctor_get(x_1117, 0);
lean_inc(x_1118);
x_1119 = lean_ctor_get(x_1118, 3);
lean_inc(x_1119);
lean_dec(x_1118);
x_1120 = lean_ctor_get_uint8(x_1119, sizeof(void*)*1);
lean_dec(x_1119);
if (x_1120 == 0)
{
uint8_t x_1121; 
lean_dec(x_1044);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1121 = !lean_is_exclusive(x_1117);
if (x_1121 == 0)
{
lean_object* x_1122; 
x_1122 = lean_ctor_get(x_1117, 0);
lean_dec(x_1122);
lean_ctor_set(x_1117, 0, x_3);
return x_1117;
}
else
{
lean_object* x_1123; lean_object* x_1124; 
x_1123 = lean_ctor_get(x_1117, 1);
lean_inc(x_1123);
lean_dec(x_1117);
x_1124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1124, 0, x_3);
lean_ctor_set(x_1124, 1, x_1123);
return x_1124;
}
}
else
{
lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; uint8_t x_1128; 
x_1125 = lean_ctor_get(x_1117, 1);
lean_inc(x_1125);
lean_dec(x_1117);
lean_inc(x_1044);
x_1126 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1125);
x_1127 = lean_ctor_get(x_1126, 0);
lean_inc(x_1127);
x_1128 = lean_unbox(x_1127);
lean_dec(x_1127);
if (x_1128 == 0)
{
uint8_t x_1129; 
lean_dec(x_1044);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1129 = !lean_is_exclusive(x_1126);
if (x_1129 == 0)
{
lean_object* x_1130; 
x_1130 = lean_ctor_get(x_1126, 0);
lean_dec(x_1130);
lean_ctor_set(x_1126, 0, x_3);
return x_1126;
}
else
{
lean_object* x_1131; lean_object* x_1132; 
x_1131 = lean_ctor_get(x_1126, 1);
lean_inc(x_1131);
lean_dec(x_1126);
x_1132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1132, 0, x_3);
lean_ctor_set(x_1132, 1, x_1131);
return x_1132;
}
}
else
{
lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; uint8_t x_1137; 
x_1133 = lean_ctor_get(x_1126, 1);
lean_inc(x_1133);
lean_dec(x_1126);
x_1134 = lean_mk_string("could not find below term in the local context");
x_1135 = l_Lean_stringToMessageData(x_1134);
lean_dec(x_1134);
x_1136 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1044, x_1135, x_8, x_9, x_10, x_11, x_1133);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1137 = !lean_is_exclusive(x_1136);
if (x_1137 == 0)
{
lean_object* x_1138; 
x_1138 = lean_ctor_get(x_1136, 0);
lean_dec(x_1138);
lean_ctor_set(x_1136, 0, x_3);
return x_1136;
}
else
{
lean_object* x_1139; lean_object* x_1140; 
x_1139 = lean_ctor_get(x_1136, 1);
lean_inc(x_1139);
lean_dec(x_1136);
x_1140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1140, 0, x_3);
lean_ctor_set(x_1140, 1, x_1139);
return x_1140;
}
}
}
}
else
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; uint8_t x_1145; 
x_1141 = lean_ctor_get(x_1113, 1);
lean_inc(x_1141);
lean_dec(x_1113);
x_1142 = lean_st_ref_get(x_11, x_1141);
x_1143 = lean_ctor_get(x_1142, 0);
lean_inc(x_1143);
x_1144 = lean_ctor_get(x_1143, 3);
lean_inc(x_1144);
lean_dec(x_1143);
x_1145 = lean_ctor_get_uint8(x_1144, sizeof(void*)*1);
lean_dec(x_1144);
if (x_1145 == 0)
{
lean_object* x_1146; uint8_t x_1147; 
x_1146 = lean_ctor_get(x_1142, 1);
lean_inc(x_1146);
lean_dec(x_1142);
x_1147 = 0;
x_1045 = x_1147;
x_1046 = x_1146;
goto block_1056;
}
else
{
lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; uint8_t x_1152; 
x_1148 = lean_ctor_get(x_1142, 1);
lean_inc(x_1148);
lean_dec(x_1142);
lean_inc(x_1044);
x_1149 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1148);
x_1150 = lean_ctor_get(x_1149, 0);
lean_inc(x_1150);
x_1151 = lean_ctor_get(x_1149, 1);
lean_inc(x_1151);
lean_dec(x_1149);
x_1152 = lean_unbox(x_1150);
lean_dec(x_1150);
x_1045 = x_1152;
x_1046 = x_1151;
goto block_1056;
}
}
}
else
{
uint8_t x_1153; 
lean_dec(x_1044);
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1153 = !lean_is_exclusive(x_1113);
if (x_1153 == 0)
{
lean_object* x_1154; 
x_1154 = lean_ctor_get(x_1113, 0);
lean_dec(x_1154);
lean_ctor_set_tag(x_1113, 0);
lean_ctor_set(x_1113, 0, x_3);
return x_1113;
}
else
{
lean_object* x_1155; lean_object* x_1156; 
x_1155 = lean_ctor_get(x_1113, 1);
lean_inc(x_1155);
lean_dec(x_1113);
x_1156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1156, 0, x_3);
lean_ctor_set(x_1156, 1, x_1155);
return x_1156;
}
}
}
else
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; 
x_1157 = lean_ctor_get(x_1108, 1);
lean_inc(x_1157);
lean_dec(x_1108);
x_1158 = lean_mk_string("");
x_1159 = l_Lean_stringToMessageData(x_1158);
lean_dec(x_1158);
x_1160 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1160, 0, x_1037);
lean_inc(x_1159);
x_1161 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1161, 0, x_1159);
lean_ctor_set(x_1161, 1, x_1160);
x_1162 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1162, 0, x_1161);
lean_ctor_set(x_1162, 1, x_1159);
lean_inc(x_1044);
x_1163 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1044, x_1162, x_8, x_9, x_10, x_11, x_1157);
x_1164 = lean_ctor_get(x_1163, 1);
lean_inc(x_1164);
lean_dec(x_1163);
x_1165 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1166 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1003, x_1165, x_8, x_9, x_10, x_11, x_1164);
if (lean_obj_tag(x_1166) == 0)
{
lean_object* x_1167; uint8_t x_1168; 
x_1167 = lean_ctor_get(x_1166, 0);
lean_inc(x_1167);
x_1168 = lean_unbox(x_1167);
lean_dec(x_1167);
if (x_1168 == 0)
{
lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; uint8_t x_1173; 
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
x_1169 = lean_ctor_get(x_1166, 1);
lean_inc(x_1169);
lean_dec(x_1166);
x_1170 = lean_st_ref_get(x_11, x_1169);
x_1171 = lean_ctor_get(x_1170, 0);
lean_inc(x_1171);
x_1172 = lean_ctor_get(x_1171, 3);
lean_inc(x_1172);
lean_dec(x_1171);
x_1173 = lean_ctor_get_uint8(x_1172, sizeof(void*)*1);
lean_dec(x_1172);
if (x_1173 == 0)
{
uint8_t x_1174; 
lean_dec(x_1044);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1174 = !lean_is_exclusive(x_1170);
if (x_1174 == 0)
{
lean_object* x_1175; 
x_1175 = lean_ctor_get(x_1170, 0);
lean_dec(x_1175);
lean_ctor_set(x_1170, 0, x_3);
return x_1170;
}
else
{
lean_object* x_1176; lean_object* x_1177; 
x_1176 = lean_ctor_get(x_1170, 1);
lean_inc(x_1176);
lean_dec(x_1170);
x_1177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1177, 0, x_3);
lean_ctor_set(x_1177, 1, x_1176);
return x_1177;
}
}
else
{
lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; uint8_t x_1181; 
x_1178 = lean_ctor_get(x_1170, 1);
lean_inc(x_1178);
lean_dec(x_1170);
lean_inc(x_1044);
x_1179 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1178);
x_1180 = lean_ctor_get(x_1179, 0);
lean_inc(x_1180);
x_1181 = lean_unbox(x_1180);
lean_dec(x_1180);
if (x_1181 == 0)
{
uint8_t x_1182; 
lean_dec(x_1044);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1182 = !lean_is_exclusive(x_1179);
if (x_1182 == 0)
{
lean_object* x_1183; 
x_1183 = lean_ctor_get(x_1179, 0);
lean_dec(x_1183);
lean_ctor_set(x_1179, 0, x_3);
return x_1179;
}
else
{
lean_object* x_1184; lean_object* x_1185; 
x_1184 = lean_ctor_get(x_1179, 1);
lean_inc(x_1184);
lean_dec(x_1179);
x_1185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1185, 0, x_3);
lean_ctor_set(x_1185, 1, x_1184);
return x_1185;
}
}
else
{
lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; uint8_t x_1190; 
x_1186 = lean_ctor_get(x_1179, 1);
lean_inc(x_1186);
lean_dec(x_1179);
x_1187 = lean_mk_string("could not find below term in the local context");
x_1188 = l_Lean_stringToMessageData(x_1187);
lean_dec(x_1187);
x_1189 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1044, x_1188, x_8, x_9, x_10, x_11, x_1186);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1190 = !lean_is_exclusive(x_1189);
if (x_1190 == 0)
{
lean_object* x_1191; 
x_1191 = lean_ctor_get(x_1189, 0);
lean_dec(x_1191);
lean_ctor_set(x_1189, 0, x_3);
return x_1189;
}
else
{
lean_object* x_1192; lean_object* x_1193; 
x_1192 = lean_ctor_get(x_1189, 1);
lean_inc(x_1192);
lean_dec(x_1189);
x_1193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1193, 0, x_3);
lean_ctor_set(x_1193, 1, x_1192);
return x_1193;
}
}
}
}
else
{
lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; uint8_t x_1198; 
x_1194 = lean_ctor_get(x_1166, 1);
lean_inc(x_1194);
lean_dec(x_1166);
x_1195 = lean_st_ref_get(x_11, x_1194);
x_1196 = lean_ctor_get(x_1195, 0);
lean_inc(x_1196);
x_1197 = lean_ctor_get(x_1196, 3);
lean_inc(x_1197);
lean_dec(x_1196);
x_1198 = lean_ctor_get_uint8(x_1197, sizeof(void*)*1);
lean_dec(x_1197);
if (x_1198 == 0)
{
lean_object* x_1199; uint8_t x_1200; 
x_1199 = lean_ctor_get(x_1195, 1);
lean_inc(x_1199);
lean_dec(x_1195);
x_1200 = 0;
x_1045 = x_1200;
x_1046 = x_1199;
goto block_1056;
}
else
{
lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; uint8_t x_1205; 
x_1201 = lean_ctor_get(x_1195, 1);
lean_inc(x_1201);
lean_dec(x_1195);
lean_inc(x_1044);
x_1202 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1044, x_8, x_9, x_10, x_11, x_1201);
x_1203 = lean_ctor_get(x_1202, 0);
lean_inc(x_1203);
x_1204 = lean_ctor_get(x_1202, 1);
lean_inc(x_1204);
lean_dec(x_1202);
x_1205 = lean_unbox(x_1203);
lean_dec(x_1203);
x_1045 = x_1205;
x_1046 = x_1204;
goto block_1056;
}
}
}
else
{
uint8_t x_1206; 
lean_dec(x_1044);
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1206 = !lean_is_exclusive(x_1166);
if (x_1206 == 0)
{
lean_object* x_1207; 
x_1207 = lean_ctor_get(x_1166, 0);
lean_dec(x_1207);
lean_ctor_set_tag(x_1166, 0);
lean_ctor_set(x_1166, 0, x_3);
return x_1166;
}
else
{
lean_object* x_1208; lean_object* x_1209; 
x_1208 = lean_ctor_get(x_1166, 1);
lean_inc(x_1208);
lean_dec(x_1166);
x_1209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1209, 0, x_3);
lean_ctor_set(x_1209, 1, x_1208);
return x_1209;
}
}
}
}
block_1056:
{
if (x_1045 == 0)
{
lean_dec(x_1044);
x_1004 = x_1046;
goto block_1035;
}
else
{
lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; 
x_1047 = lean_mk_string("Found below term in the local context: ");
x_1048 = l_Lean_stringToMessageData(x_1047);
lean_dec(x_1047);
lean_inc(x_1000);
x_1049 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1049, 0, x_1000);
x_1050 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1050, 0, x_1048);
lean_ctor_set(x_1050, 1, x_1049);
x_1051 = lean_mk_string("");
x_1052 = l_Lean_stringToMessageData(x_1051);
lean_dec(x_1051);
x_1053 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1053, 0, x_1050);
lean_ctor_set(x_1053, 1, x_1052);
x_1054 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1044, x_1053, x_8, x_9, x_10, x_11, x_1046);
x_1055 = lean_ctor_get(x_1054, 1);
lean_inc(x_1055);
lean_dec(x_1054);
x_1004 = x_1055;
goto block_1035;
}
}
}
else
{
uint8_t x_1210; 
lean_dec(x_1003);
lean_dec(x_1002);
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1210 = !lean_is_exclusive(x_1036);
if (x_1210 == 0)
{
lean_object* x_1211; 
x_1211 = lean_ctor_get(x_1036, 0);
lean_dec(x_1211);
lean_ctor_set_tag(x_1036, 0);
lean_ctor_set(x_1036, 0, x_3);
return x_1036;
}
else
{
lean_object* x_1212; lean_object* x_1213; 
x_1212 = lean_ctor_get(x_1036, 1);
lean_inc(x_1212);
lean_dec(x_1036);
x_1213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1213, 0, x_3);
lean_ctor_set(x_1213, 1, x_1212);
return x_1213;
}
}
block_1035:
{
lean_object* x_1005; uint8_t x_1006; 
x_1005 = lean_array_get_size(x_1);
x_1006 = lean_nat_dec_lt(x_980, x_1005);
if (x_1006 == 0)
{
lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; 
lean_dec(x_1005);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_997)) {
 x_1007 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1007 = x_997;
}
lean_ctor_set(x_1007, 0, x_1000);
lean_ctor_set(x_1007, 1, x_983);
if (lean_is_scalar(x_984)) {
 x_1008 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1008 = x_984;
}
lean_ctor_set(x_1008, 0, x_1007);
if (lean_is_scalar(x_1002)) {
 x_1009 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1009 = x_1002;
}
lean_ctor_set(x_1009, 0, x_1008);
lean_ctor_set(x_1009, 1, x_1004);
return x_1009;
}
else
{
uint8_t x_1010; 
x_1010 = lean_nat_dec_le(x_1005, x_1005);
if (x_1010 == 0)
{
lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; 
lean_dec(x_1005);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_997)) {
 x_1011 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1011 = x_997;
}
lean_ctor_set(x_1011, 0, x_1000);
lean_ctor_set(x_1011, 1, x_983);
if (lean_is_scalar(x_984)) {
 x_1012 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1012 = x_984;
}
lean_ctor_set(x_1012, 0, x_1011);
if (lean_is_scalar(x_1002)) {
 x_1013 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1013 = x_1002;
}
lean_ctor_set(x_1013, 0, x_1012);
lean_ctor_set(x_1013, 1, x_1004);
return x_1013;
}
else
{
size_t x_1014; size_t x_1015; lean_object* x_1016; 
lean_dec(x_1002);
x_1014 = 0;
x_1015 = lean_usize_of_nat(x_1005);
lean_dec(x_1005);
lean_inc(x_1000);
x_1016 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_1000, x_1, x_1014, x_1015, x_8, x_9, x_10, x_11, x_1004);
if (lean_obj_tag(x_1016) == 0)
{
lean_object* x_1017; uint8_t x_1018; 
x_1017 = lean_ctor_get(x_1016, 0);
lean_inc(x_1017);
x_1018 = lean_unbox(x_1017);
lean_dec(x_1017);
if (x_1018 == 0)
{
uint8_t x_1019; 
lean_dec(x_3);
x_1019 = !lean_is_exclusive(x_1016);
if (x_1019 == 0)
{
lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; 
x_1020 = lean_ctor_get(x_1016, 0);
lean_dec(x_1020);
if (lean_is_scalar(x_997)) {
 x_1021 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1021 = x_997;
}
lean_ctor_set(x_1021, 0, x_1000);
lean_ctor_set(x_1021, 1, x_983);
if (lean_is_scalar(x_984)) {
 x_1022 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1022 = x_984;
}
lean_ctor_set(x_1022, 0, x_1021);
lean_ctor_set(x_1016, 0, x_1022);
return x_1016;
}
else
{
lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; 
x_1023 = lean_ctor_get(x_1016, 1);
lean_inc(x_1023);
lean_dec(x_1016);
if (lean_is_scalar(x_997)) {
 x_1024 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1024 = x_997;
}
lean_ctor_set(x_1024, 0, x_1000);
lean_ctor_set(x_1024, 1, x_983);
if (lean_is_scalar(x_984)) {
 x_1025 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1025 = x_984;
}
lean_ctor_set(x_1025, 0, x_1024);
x_1026 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1026, 0, x_1025);
lean_ctor_set(x_1026, 1, x_1023);
return x_1026;
}
}
else
{
uint8_t x_1027; 
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
x_1027 = !lean_is_exclusive(x_1016);
if (x_1027 == 0)
{
lean_object* x_1028; 
x_1028 = lean_ctor_get(x_1016, 0);
lean_dec(x_1028);
lean_ctor_set(x_1016, 0, x_3);
return x_1016;
}
else
{
lean_object* x_1029; lean_object* x_1030; 
x_1029 = lean_ctor_get(x_1016, 1);
lean_inc(x_1029);
lean_dec(x_1016);
x_1030 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1030, 0, x_3);
lean_ctor_set(x_1030, 1, x_1029);
return x_1030;
}
}
}
else
{
uint8_t x_1031; 
lean_dec(x_1000);
lean_dec(x_997);
lean_dec(x_984);
lean_dec(x_983);
x_1031 = !lean_is_exclusive(x_1016);
if (x_1031 == 0)
{
lean_object* x_1032; 
x_1032 = lean_ctor_get(x_1016, 0);
lean_dec(x_1032);
lean_ctor_set_tag(x_1016, 0);
lean_ctor_set(x_1016, 0, x_3);
return x_1016;
}
else
{
lean_object* x_1033; lean_object* x_1034; 
x_1033 = lean_ctor_get(x_1016, 1);
lean_inc(x_1033);
lean_dec(x_1016);
x_1034 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1034, 0, x_3);
lean_ctor_set(x_1034, 1, x_1033);
return x_1034;
}
}
}
}
}
}
else
{
uint8_t x_1214; 
lean_dec(x_984);
lean_dec(x_983);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_1214 = !lean_is_exclusive(x_993);
if (x_1214 == 0)
{
return x_993;
}
else
{
lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; 
x_1215 = lean_ctor_get(x_993, 0);
x_1216 = lean_ctor_get(x_993, 1);
lean_inc(x_1216);
lean_inc(x_1215);
lean_dec(x_993);
x_1217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1217, 0, x_1215);
lean_ctor_set(x_1217, 1, x_1216);
return x_1217;
}
}
}
}
}
}
case 5:
{
lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; 
x_1218 = lean_ctor_get(x_5, 0);
lean_inc(x_1218);
x_1219 = lean_ctor_get(x_5, 1);
lean_inc(x_1219);
lean_dec(x_5);
x_1220 = lean_array_set(x_6, x_7, x_1219);
x_1221 = lean_unsigned_to_nat(1u);
x_1222 = lean_nat_sub(x_7, x_1221);
lean_dec(x_7);
x_5 = x_1218;
x_6 = x_1220;
x_7 = x_1222;
goto _start;
}
case 6:
{
lean_object* x_1224; 
lean_dec(x_7);
lean_dec(x_6);
x_1224 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_1224) == 0)
{
lean_object* x_1225; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1225, 0, x_3);
lean_ctor_set(x_1225, 1, x_12);
return x_1225;
}
else
{
lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; 
x_1226 = lean_ctor_get(x_1224, 0);
lean_inc(x_1226);
lean_dec(x_1224);
x_1227 = lean_unsigned_to_nat(0u);
x_1228 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_1227);
if (lean_obj_tag(x_1228) == 0)
{
lean_object* x_1229; 
lean_dec(x_1226);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1229 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1229, 0, x_3);
lean_ctor_set(x_1229, 1, x_12);
return x_1229;
}
else
{
lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; uint8_t x_1234; 
x_1230 = lean_ctor_get(x_1228, 0);
lean_inc(x_1230);
if (lean_is_exclusive(x_1228)) {
 lean_ctor_release(x_1228, 0);
 x_1231 = x_1228;
} else {
 lean_dec_ref(x_1228);
 x_1231 = lean_box(0);
}
x_1232 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_1226, x_8, x_9, x_10, x_11, x_12);
x_1233 = lean_ctor_get(x_1232, 0);
lean_inc(x_1233);
x_1234 = lean_unbox(x_1233);
lean_dec(x_1233);
if (x_1234 == 0)
{
uint8_t x_1235; 
lean_dec(x_1231);
lean_dec(x_1230);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1235 = !lean_is_exclusive(x_1232);
if (x_1235 == 0)
{
lean_object* x_1236; 
x_1236 = lean_ctor_get(x_1232, 0);
lean_dec(x_1236);
lean_ctor_set(x_1232, 0, x_3);
return x_1232;
}
else
{
lean_object* x_1237; lean_object* x_1238; 
x_1237 = lean_ctor_get(x_1232, 1);
lean_inc(x_1237);
lean_dec(x_1232);
x_1238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1238, 0, x_3);
lean_ctor_set(x_1238, 1, x_1237);
return x_1238;
}
}
else
{
lean_object* x_1239; lean_object* x_1240; 
x_1239 = lean_ctor_get(x_1232, 1);
lean_inc(x_1239);
lean_dec(x_1232);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1240 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_1230, x_8, x_9, x_10, x_11, x_1239);
if (lean_obj_tag(x_1240) == 0)
{
lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1283; 
x_1241 = lean_ctor_get(x_1240, 0);
lean_inc(x_1241);
x_1242 = lean_ctor_get(x_1240, 1);
lean_inc(x_1242);
lean_dec(x_1240);
x_1243 = lean_ctor_get(x_1241, 1);
lean_inc(x_1243);
if (lean_is_exclusive(x_1241)) {
 lean_ctor_release(x_1241, 0);
 lean_ctor_release(x_1241, 1);
 x_1244 = x_1241;
} else {
 lean_dec_ref(x_1241);
 x_1244 = lean_box(0);
}
x_1245 = lean_box(0);
lean_inc(x_8);
x_1246 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_1243, x_1245, x_8, x_9, x_10, x_11, x_1242);
x_1247 = lean_ctor_get(x_1246, 0);
lean_inc(x_1247);
x_1248 = lean_ctor_get(x_1246, 1);
lean_inc(x_1248);
if (lean_is_exclusive(x_1246)) {
 lean_ctor_release(x_1246, 0);
 lean_ctor_release(x_1246, 1);
 x_1249 = x_1246;
} else {
 lean_dec_ref(x_1246);
 x_1249 = lean_box(0);
}
x_1250 = l_Lean_Expr_mvarId_x21(x_1247);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1283 = l_Lean_Meta_ppGoal(x_1250, x_8, x_9, x_10, x_11, x_1248);
if (lean_obj_tag(x_1283) == 0)
{
lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; uint8_t x_1292; lean_object* x_1293; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; uint8_t x_1307; 
x_1284 = lean_ctor_get(x_1283, 0);
lean_inc(x_1284);
x_1285 = lean_ctor_get(x_1283, 1);
lean_inc(x_1285);
lean_dec(x_1283);
x_1286 = lean_mk_string("Meta");
x_1287 = lean_name_mk_string(x_1245, x_1286);
x_1288 = lean_mk_string("IndPredBelow");
x_1289 = lean_name_mk_string(x_1287, x_1288);
x_1290 = lean_mk_string("match");
x_1291 = lean_name_mk_string(x_1289, x_1290);
x_1304 = lean_st_ref_get(x_11, x_1285);
x_1305 = lean_ctor_get(x_1304, 0);
lean_inc(x_1305);
x_1306 = lean_ctor_get(x_1305, 3);
lean_inc(x_1306);
lean_dec(x_1305);
x_1307 = lean_ctor_get_uint8(x_1306, sizeof(void*)*1);
lean_dec(x_1306);
if (x_1307 == 0)
{
lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; 
lean_dec(x_1284);
x_1308 = lean_ctor_get(x_1304, 1);
lean_inc(x_1308);
lean_dec(x_1304);
x_1309 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1310 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1250, x_1309, x_8, x_9, x_10, x_11, x_1308);
if (lean_obj_tag(x_1310) == 0)
{
lean_object* x_1311; uint8_t x_1312; 
x_1311 = lean_ctor_get(x_1310, 0);
lean_inc(x_1311);
x_1312 = lean_unbox(x_1311);
lean_dec(x_1311);
if (x_1312 == 0)
{
lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; lean_object* x_1316; uint8_t x_1317; 
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
x_1313 = lean_ctor_get(x_1310, 1);
lean_inc(x_1313);
lean_dec(x_1310);
x_1314 = lean_st_ref_get(x_11, x_1313);
x_1315 = lean_ctor_get(x_1314, 0);
lean_inc(x_1315);
x_1316 = lean_ctor_get(x_1315, 3);
lean_inc(x_1316);
lean_dec(x_1315);
x_1317 = lean_ctor_get_uint8(x_1316, sizeof(void*)*1);
lean_dec(x_1316);
if (x_1317 == 0)
{
uint8_t x_1318; 
lean_dec(x_1291);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1318 = !lean_is_exclusive(x_1314);
if (x_1318 == 0)
{
lean_object* x_1319; 
x_1319 = lean_ctor_get(x_1314, 0);
lean_dec(x_1319);
lean_ctor_set(x_1314, 0, x_3);
return x_1314;
}
else
{
lean_object* x_1320; lean_object* x_1321; 
x_1320 = lean_ctor_get(x_1314, 1);
lean_inc(x_1320);
lean_dec(x_1314);
x_1321 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1321, 0, x_3);
lean_ctor_set(x_1321, 1, x_1320);
return x_1321;
}
}
else
{
lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; uint8_t x_1325; 
x_1322 = lean_ctor_get(x_1314, 1);
lean_inc(x_1322);
lean_dec(x_1314);
lean_inc(x_1291);
x_1323 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1322);
x_1324 = lean_ctor_get(x_1323, 0);
lean_inc(x_1324);
x_1325 = lean_unbox(x_1324);
lean_dec(x_1324);
if (x_1325 == 0)
{
uint8_t x_1326; 
lean_dec(x_1291);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1326 = !lean_is_exclusive(x_1323);
if (x_1326 == 0)
{
lean_object* x_1327; 
x_1327 = lean_ctor_get(x_1323, 0);
lean_dec(x_1327);
lean_ctor_set(x_1323, 0, x_3);
return x_1323;
}
else
{
lean_object* x_1328; lean_object* x_1329; 
x_1328 = lean_ctor_get(x_1323, 1);
lean_inc(x_1328);
lean_dec(x_1323);
x_1329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1329, 0, x_3);
lean_ctor_set(x_1329, 1, x_1328);
return x_1329;
}
}
else
{
lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; uint8_t x_1334; 
x_1330 = lean_ctor_get(x_1323, 1);
lean_inc(x_1330);
lean_dec(x_1323);
x_1331 = lean_mk_string("could not find below term in the local context");
x_1332 = l_Lean_stringToMessageData(x_1331);
lean_dec(x_1331);
x_1333 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1291, x_1332, x_8, x_9, x_10, x_11, x_1330);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1334 = !lean_is_exclusive(x_1333);
if (x_1334 == 0)
{
lean_object* x_1335; 
x_1335 = lean_ctor_get(x_1333, 0);
lean_dec(x_1335);
lean_ctor_set(x_1333, 0, x_3);
return x_1333;
}
else
{
lean_object* x_1336; lean_object* x_1337; 
x_1336 = lean_ctor_get(x_1333, 1);
lean_inc(x_1336);
lean_dec(x_1333);
x_1337 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1337, 0, x_3);
lean_ctor_set(x_1337, 1, x_1336);
return x_1337;
}
}
}
}
else
{
lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; uint8_t x_1342; 
x_1338 = lean_ctor_get(x_1310, 1);
lean_inc(x_1338);
lean_dec(x_1310);
x_1339 = lean_st_ref_get(x_11, x_1338);
x_1340 = lean_ctor_get(x_1339, 0);
lean_inc(x_1340);
x_1341 = lean_ctor_get(x_1340, 3);
lean_inc(x_1341);
lean_dec(x_1340);
x_1342 = lean_ctor_get_uint8(x_1341, sizeof(void*)*1);
lean_dec(x_1341);
if (x_1342 == 0)
{
lean_object* x_1343; uint8_t x_1344; 
x_1343 = lean_ctor_get(x_1339, 1);
lean_inc(x_1343);
lean_dec(x_1339);
x_1344 = 0;
x_1292 = x_1344;
x_1293 = x_1343;
goto block_1303;
}
else
{
lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; uint8_t x_1349; 
x_1345 = lean_ctor_get(x_1339, 1);
lean_inc(x_1345);
lean_dec(x_1339);
lean_inc(x_1291);
x_1346 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1345);
x_1347 = lean_ctor_get(x_1346, 0);
lean_inc(x_1347);
x_1348 = lean_ctor_get(x_1346, 1);
lean_inc(x_1348);
lean_dec(x_1346);
x_1349 = lean_unbox(x_1347);
lean_dec(x_1347);
x_1292 = x_1349;
x_1293 = x_1348;
goto block_1303;
}
}
}
else
{
uint8_t x_1350; 
lean_dec(x_1291);
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1350 = !lean_is_exclusive(x_1310);
if (x_1350 == 0)
{
lean_object* x_1351; 
x_1351 = lean_ctor_get(x_1310, 0);
lean_dec(x_1351);
lean_ctor_set_tag(x_1310, 0);
lean_ctor_set(x_1310, 0, x_3);
return x_1310;
}
else
{
lean_object* x_1352; lean_object* x_1353; 
x_1352 = lean_ctor_get(x_1310, 1);
lean_inc(x_1352);
lean_dec(x_1310);
x_1353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1353, 0, x_3);
lean_ctor_set(x_1353, 1, x_1352);
return x_1353;
}
}
}
else
{
lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; uint8_t x_1357; 
x_1354 = lean_ctor_get(x_1304, 1);
lean_inc(x_1354);
lean_dec(x_1304);
lean_inc(x_1291);
x_1355 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1354);
x_1356 = lean_ctor_get(x_1355, 0);
lean_inc(x_1356);
x_1357 = lean_unbox(x_1356);
lean_dec(x_1356);
if (x_1357 == 0)
{
lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; 
lean_dec(x_1284);
x_1358 = lean_ctor_get(x_1355, 1);
lean_inc(x_1358);
lean_dec(x_1355);
x_1359 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1360 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1250, x_1359, x_8, x_9, x_10, x_11, x_1358);
if (lean_obj_tag(x_1360) == 0)
{
lean_object* x_1361; uint8_t x_1362; 
x_1361 = lean_ctor_get(x_1360, 0);
lean_inc(x_1361);
x_1362 = lean_unbox(x_1361);
lean_dec(x_1361);
if (x_1362 == 0)
{
lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; uint8_t x_1367; 
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
x_1363 = lean_ctor_get(x_1360, 1);
lean_inc(x_1363);
lean_dec(x_1360);
x_1364 = lean_st_ref_get(x_11, x_1363);
x_1365 = lean_ctor_get(x_1364, 0);
lean_inc(x_1365);
x_1366 = lean_ctor_get(x_1365, 3);
lean_inc(x_1366);
lean_dec(x_1365);
x_1367 = lean_ctor_get_uint8(x_1366, sizeof(void*)*1);
lean_dec(x_1366);
if (x_1367 == 0)
{
uint8_t x_1368; 
lean_dec(x_1291);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1368 = !lean_is_exclusive(x_1364);
if (x_1368 == 0)
{
lean_object* x_1369; 
x_1369 = lean_ctor_get(x_1364, 0);
lean_dec(x_1369);
lean_ctor_set(x_1364, 0, x_3);
return x_1364;
}
else
{
lean_object* x_1370; lean_object* x_1371; 
x_1370 = lean_ctor_get(x_1364, 1);
lean_inc(x_1370);
lean_dec(x_1364);
x_1371 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1371, 0, x_3);
lean_ctor_set(x_1371, 1, x_1370);
return x_1371;
}
}
else
{
lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; uint8_t x_1375; 
x_1372 = lean_ctor_get(x_1364, 1);
lean_inc(x_1372);
lean_dec(x_1364);
lean_inc(x_1291);
x_1373 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1372);
x_1374 = lean_ctor_get(x_1373, 0);
lean_inc(x_1374);
x_1375 = lean_unbox(x_1374);
lean_dec(x_1374);
if (x_1375 == 0)
{
uint8_t x_1376; 
lean_dec(x_1291);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1376 = !lean_is_exclusive(x_1373);
if (x_1376 == 0)
{
lean_object* x_1377; 
x_1377 = lean_ctor_get(x_1373, 0);
lean_dec(x_1377);
lean_ctor_set(x_1373, 0, x_3);
return x_1373;
}
else
{
lean_object* x_1378; lean_object* x_1379; 
x_1378 = lean_ctor_get(x_1373, 1);
lean_inc(x_1378);
lean_dec(x_1373);
x_1379 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1379, 0, x_3);
lean_ctor_set(x_1379, 1, x_1378);
return x_1379;
}
}
else
{
lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; lean_object* x_1383; uint8_t x_1384; 
x_1380 = lean_ctor_get(x_1373, 1);
lean_inc(x_1380);
lean_dec(x_1373);
x_1381 = lean_mk_string("could not find below term in the local context");
x_1382 = l_Lean_stringToMessageData(x_1381);
lean_dec(x_1381);
x_1383 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1291, x_1382, x_8, x_9, x_10, x_11, x_1380);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1384 = !lean_is_exclusive(x_1383);
if (x_1384 == 0)
{
lean_object* x_1385; 
x_1385 = lean_ctor_get(x_1383, 0);
lean_dec(x_1385);
lean_ctor_set(x_1383, 0, x_3);
return x_1383;
}
else
{
lean_object* x_1386; lean_object* x_1387; 
x_1386 = lean_ctor_get(x_1383, 1);
lean_inc(x_1386);
lean_dec(x_1383);
x_1387 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1387, 0, x_3);
lean_ctor_set(x_1387, 1, x_1386);
return x_1387;
}
}
}
}
else
{
lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; uint8_t x_1392; 
x_1388 = lean_ctor_get(x_1360, 1);
lean_inc(x_1388);
lean_dec(x_1360);
x_1389 = lean_st_ref_get(x_11, x_1388);
x_1390 = lean_ctor_get(x_1389, 0);
lean_inc(x_1390);
x_1391 = lean_ctor_get(x_1390, 3);
lean_inc(x_1391);
lean_dec(x_1390);
x_1392 = lean_ctor_get_uint8(x_1391, sizeof(void*)*1);
lean_dec(x_1391);
if (x_1392 == 0)
{
lean_object* x_1393; uint8_t x_1394; 
x_1393 = lean_ctor_get(x_1389, 1);
lean_inc(x_1393);
lean_dec(x_1389);
x_1394 = 0;
x_1292 = x_1394;
x_1293 = x_1393;
goto block_1303;
}
else
{
lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; uint8_t x_1399; 
x_1395 = lean_ctor_get(x_1389, 1);
lean_inc(x_1395);
lean_dec(x_1389);
lean_inc(x_1291);
x_1396 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1395);
x_1397 = lean_ctor_get(x_1396, 0);
lean_inc(x_1397);
x_1398 = lean_ctor_get(x_1396, 1);
lean_inc(x_1398);
lean_dec(x_1396);
x_1399 = lean_unbox(x_1397);
lean_dec(x_1397);
x_1292 = x_1399;
x_1293 = x_1398;
goto block_1303;
}
}
}
else
{
uint8_t x_1400; 
lean_dec(x_1291);
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1400 = !lean_is_exclusive(x_1360);
if (x_1400 == 0)
{
lean_object* x_1401; 
x_1401 = lean_ctor_get(x_1360, 0);
lean_dec(x_1401);
lean_ctor_set_tag(x_1360, 0);
lean_ctor_set(x_1360, 0, x_3);
return x_1360;
}
else
{
lean_object* x_1402; lean_object* x_1403; 
x_1402 = lean_ctor_get(x_1360, 1);
lean_inc(x_1402);
lean_dec(x_1360);
x_1403 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1403, 0, x_3);
lean_ctor_set(x_1403, 1, x_1402);
return x_1403;
}
}
}
else
{
lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; 
x_1404 = lean_ctor_get(x_1355, 1);
lean_inc(x_1404);
lean_dec(x_1355);
x_1405 = lean_mk_string("");
x_1406 = l_Lean_stringToMessageData(x_1405);
lean_dec(x_1405);
x_1407 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1407, 0, x_1284);
lean_inc(x_1406);
x_1408 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1408, 0, x_1406);
lean_ctor_set(x_1408, 1, x_1407);
x_1409 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1409, 0, x_1408);
lean_ctor_set(x_1409, 1, x_1406);
lean_inc(x_1291);
x_1410 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1291, x_1409, x_8, x_9, x_10, x_11, x_1404);
x_1411 = lean_ctor_get(x_1410, 1);
lean_inc(x_1411);
lean_dec(x_1410);
x_1412 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1413 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1250, x_1412, x_8, x_9, x_10, x_11, x_1411);
if (lean_obj_tag(x_1413) == 0)
{
lean_object* x_1414; uint8_t x_1415; 
x_1414 = lean_ctor_get(x_1413, 0);
lean_inc(x_1414);
x_1415 = lean_unbox(x_1414);
lean_dec(x_1414);
if (x_1415 == 0)
{
lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; uint8_t x_1420; 
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
x_1416 = lean_ctor_get(x_1413, 1);
lean_inc(x_1416);
lean_dec(x_1413);
x_1417 = lean_st_ref_get(x_11, x_1416);
x_1418 = lean_ctor_get(x_1417, 0);
lean_inc(x_1418);
x_1419 = lean_ctor_get(x_1418, 3);
lean_inc(x_1419);
lean_dec(x_1418);
x_1420 = lean_ctor_get_uint8(x_1419, sizeof(void*)*1);
lean_dec(x_1419);
if (x_1420 == 0)
{
uint8_t x_1421; 
lean_dec(x_1291);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1421 = !lean_is_exclusive(x_1417);
if (x_1421 == 0)
{
lean_object* x_1422; 
x_1422 = lean_ctor_get(x_1417, 0);
lean_dec(x_1422);
lean_ctor_set(x_1417, 0, x_3);
return x_1417;
}
else
{
lean_object* x_1423; lean_object* x_1424; 
x_1423 = lean_ctor_get(x_1417, 1);
lean_inc(x_1423);
lean_dec(x_1417);
x_1424 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1424, 0, x_3);
lean_ctor_set(x_1424, 1, x_1423);
return x_1424;
}
}
else
{
lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; uint8_t x_1428; 
x_1425 = lean_ctor_get(x_1417, 1);
lean_inc(x_1425);
lean_dec(x_1417);
lean_inc(x_1291);
x_1426 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1425);
x_1427 = lean_ctor_get(x_1426, 0);
lean_inc(x_1427);
x_1428 = lean_unbox(x_1427);
lean_dec(x_1427);
if (x_1428 == 0)
{
uint8_t x_1429; 
lean_dec(x_1291);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1429 = !lean_is_exclusive(x_1426);
if (x_1429 == 0)
{
lean_object* x_1430; 
x_1430 = lean_ctor_get(x_1426, 0);
lean_dec(x_1430);
lean_ctor_set(x_1426, 0, x_3);
return x_1426;
}
else
{
lean_object* x_1431; lean_object* x_1432; 
x_1431 = lean_ctor_get(x_1426, 1);
lean_inc(x_1431);
lean_dec(x_1426);
x_1432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1432, 0, x_3);
lean_ctor_set(x_1432, 1, x_1431);
return x_1432;
}
}
else
{
lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; uint8_t x_1437; 
x_1433 = lean_ctor_get(x_1426, 1);
lean_inc(x_1433);
lean_dec(x_1426);
x_1434 = lean_mk_string("could not find below term in the local context");
x_1435 = l_Lean_stringToMessageData(x_1434);
lean_dec(x_1434);
x_1436 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1291, x_1435, x_8, x_9, x_10, x_11, x_1433);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1437 = !lean_is_exclusive(x_1436);
if (x_1437 == 0)
{
lean_object* x_1438; 
x_1438 = lean_ctor_get(x_1436, 0);
lean_dec(x_1438);
lean_ctor_set(x_1436, 0, x_3);
return x_1436;
}
else
{
lean_object* x_1439; lean_object* x_1440; 
x_1439 = lean_ctor_get(x_1436, 1);
lean_inc(x_1439);
lean_dec(x_1436);
x_1440 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1440, 0, x_3);
lean_ctor_set(x_1440, 1, x_1439);
return x_1440;
}
}
}
}
else
{
lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; uint8_t x_1445; 
x_1441 = lean_ctor_get(x_1413, 1);
lean_inc(x_1441);
lean_dec(x_1413);
x_1442 = lean_st_ref_get(x_11, x_1441);
x_1443 = lean_ctor_get(x_1442, 0);
lean_inc(x_1443);
x_1444 = lean_ctor_get(x_1443, 3);
lean_inc(x_1444);
lean_dec(x_1443);
x_1445 = lean_ctor_get_uint8(x_1444, sizeof(void*)*1);
lean_dec(x_1444);
if (x_1445 == 0)
{
lean_object* x_1446; uint8_t x_1447; 
x_1446 = lean_ctor_get(x_1442, 1);
lean_inc(x_1446);
lean_dec(x_1442);
x_1447 = 0;
x_1292 = x_1447;
x_1293 = x_1446;
goto block_1303;
}
else
{
lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; uint8_t x_1452; 
x_1448 = lean_ctor_get(x_1442, 1);
lean_inc(x_1448);
lean_dec(x_1442);
lean_inc(x_1291);
x_1449 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1291, x_8, x_9, x_10, x_11, x_1448);
x_1450 = lean_ctor_get(x_1449, 0);
lean_inc(x_1450);
x_1451 = lean_ctor_get(x_1449, 1);
lean_inc(x_1451);
lean_dec(x_1449);
x_1452 = lean_unbox(x_1450);
lean_dec(x_1450);
x_1292 = x_1452;
x_1293 = x_1451;
goto block_1303;
}
}
}
else
{
uint8_t x_1453; 
lean_dec(x_1291);
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1453 = !lean_is_exclusive(x_1413);
if (x_1453 == 0)
{
lean_object* x_1454; 
x_1454 = lean_ctor_get(x_1413, 0);
lean_dec(x_1454);
lean_ctor_set_tag(x_1413, 0);
lean_ctor_set(x_1413, 0, x_3);
return x_1413;
}
else
{
lean_object* x_1455; lean_object* x_1456; 
x_1455 = lean_ctor_get(x_1413, 1);
lean_inc(x_1455);
lean_dec(x_1413);
x_1456 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1456, 0, x_3);
lean_ctor_set(x_1456, 1, x_1455);
return x_1456;
}
}
}
}
block_1303:
{
if (x_1292 == 0)
{
lean_dec(x_1291);
x_1251 = x_1293;
goto block_1282;
}
else
{
lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; 
x_1294 = lean_mk_string("Found below term in the local context: ");
x_1295 = l_Lean_stringToMessageData(x_1294);
lean_dec(x_1294);
lean_inc(x_1247);
x_1296 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1296, 0, x_1247);
x_1297 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1297, 0, x_1295);
lean_ctor_set(x_1297, 1, x_1296);
x_1298 = lean_mk_string("");
x_1299 = l_Lean_stringToMessageData(x_1298);
lean_dec(x_1298);
x_1300 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1300, 0, x_1297);
lean_ctor_set(x_1300, 1, x_1299);
x_1301 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1291, x_1300, x_8, x_9, x_10, x_11, x_1293);
x_1302 = lean_ctor_get(x_1301, 1);
lean_inc(x_1302);
lean_dec(x_1301);
x_1251 = x_1302;
goto block_1282;
}
}
}
else
{
uint8_t x_1457; 
lean_dec(x_1250);
lean_dec(x_1249);
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1457 = !lean_is_exclusive(x_1283);
if (x_1457 == 0)
{
lean_object* x_1458; 
x_1458 = lean_ctor_get(x_1283, 0);
lean_dec(x_1458);
lean_ctor_set_tag(x_1283, 0);
lean_ctor_set(x_1283, 0, x_3);
return x_1283;
}
else
{
lean_object* x_1459; lean_object* x_1460; 
x_1459 = lean_ctor_get(x_1283, 1);
lean_inc(x_1459);
lean_dec(x_1283);
x_1460 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1460, 0, x_3);
lean_ctor_set(x_1460, 1, x_1459);
return x_1460;
}
}
block_1282:
{
lean_object* x_1252; uint8_t x_1253; 
x_1252 = lean_array_get_size(x_1);
x_1253 = lean_nat_dec_lt(x_1227, x_1252);
if (x_1253 == 0)
{
lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; 
lean_dec(x_1252);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1244)) {
 x_1254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1254 = x_1244;
}
lean_ctor_set(x_1254, 0, x_1247);
lean_ctor_set(x_1254, 1, x_1230);
if (lean_is_scalar(x_1231)) {
 x_1255 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1255 = x_1231;
}
lean_ctor_set(x_1255, 0, x_1254);
if (lean_is_scalar(x_1249)) {
 x_1256 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1256 = x_1249;
}
lean_ctor_set(x_1256, 0, x_1255);
lean_ctor_set(x_1256, 1, x_1251);
return x_1256;
}
else
{
uint8_t x_1257; 
x_1257 = lean_nat_dec_le(x_1252, x_1252);
if (x_1257 == 0)
{
lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; 
lean_dec(x_1252);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1244)) {
 x_1258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1258 = x_1244;
}
lean_ctor_set(x_1258, 0, x_1247);
lean_ctor_set(x_1258, 1, x_1230);
if (lean_is_scalar(x_1231)) {
 x_1259 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1259 = x_1231;
}
lean_ctor_set(x_1259, 0, x_1258);
if (lean_is_scalar(x_1249)) {
 x_1260 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1260 = x_1249;
}
lean_ctor_set(x_1260, 0, x_1259);
lean_ctor_set(x_1260, 1, x_1251);
return x_1260;
}
else
{
size_t x_1261; size_t x_1262; lean_object* x_1263; 
lean_dec(x_1249);
x_1261 = 0;
x_1262 = lean_usize_of_nat(x_1252);
lean_dec(x_1252);
lean_inc(x_1247);
x_1263 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_1247, x_1, x_1261, x_1262, x_8, x_9, x_10, x_11, x_1251);
if (lean_obj_tag(x_1263) == 0)
{
lean_object* x_1264; uint8_t x_1265; 
x_1264 = lean_ctor_get(x_1263, 0);
lean_inc(x_1264);
x_1265 = lean_unbox(x_1264);
lean_dec(x_1264);
if (x_1265 == 0)
{
uint8_t x_1266; 
lean_dec(x_3);
x_1266 = !lean_is_exclusive(x_1263);
if (x_1266 == 0)
{
lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; 
x_1267 = lean_ctor_get(x_1263, 0);
lean_dec(x_1267);
if (lean_is_scalar(x_1244)) {
 x_1268 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1268 = x_1244;
}
lean_ctor_set(x_1268, 0, x_1247);
lean_ctor_set(x_1268, 1, x_1230);
if (lean_is_scalar(x_1231)) {
 x_1269 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1269 = x_1231;
}
lean_ctor_set(x_1269, 0, x_1268);
lean_ctor_set(x_1263, 0, x_1269);
return x_1263;
}
else
{
lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; 
x_1270 = lean_ctor_get(x_1263, 1);
lean_inc(x_1270);
lean_dec(x_1263);
if (lean_is_scalar(x_1244)) {
 x_1271 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1271 = x_1244;
}
lean_ctor_set(x_1271, 0, x_1247);
lean_ctor_set(x_1271, 1, x_1230);
if (lean_is_scalar(x_1231)) {
 x_1272 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1272 = x_1231;
}
lean_ctor_set(x_1272, 0, x_1271);
x_1273 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1273, 0, x_1272);
lean_ctor_set(x_1273, 1, x_1270);
return x_1273;
}
}
else
{
uint8_t x_1274; 
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
x_1274 = !lean_is_exclusive(x_1263);
if (x_1274 == 0)
{
lean_object* x_1275; 
x_1275 = lean_ctor_get(x_1263, 0);
lean_dec(x_1275);
lean_ctor_set(x_1263, 0, x_3);
return x_1263;
}
else
{
lean_object* x_1276; lean_object* x_1277; 
x_1276 = lean_ctor_get(x_1263, 1);
lean_inc(x_1276);
lean_dec(x_1263);
x_1277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1277, 0, x_3);
lean_ctor_set(x_1277, 1, x_1276);
return x_1277;
}
}
}
else
{
uint8_t x_1278; 
lean_dec(x_1247);
lean_dec(x_1244);
lean_dec(x_1231);
lean_dec(x_1230);
x_1278 = !lean_is_exclusive(x_1263);
if (x_1278 == 0)
{
lean_object* x_1279; 
x_1279 = lean_ctor_get(x_1263, 0);
lean_dec(x_1279);
lean_ctor_set_tag(x_1263, 0);
lean_ctor_set(x_1263, 0, x_3);
return x_1263;
}
else
{
lean_object* x_1280; lean_object* x_1281; 
x_1280 = lean_ctor_get(x_1263, 1);
lean_inc(x_1280);
lean_dec(x_1263);
x_1281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1281, 0, x_3);
lean_ctor_set(x_1281, 1, x_1280);
return x_1281;
}
}
}
}
}
}
else
{
uint8_t x_1461; 
lean_dec(x_1231);
lean_dec(x_1230);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_1461 = !lean_is_exclusive(x_1240);
if (x_1461 == 0)
{
return x_1240;
}
else
{
lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; 
x_1462 = lean_ctor_get(x_1240, 0);
x_1463 = lean_ctor_get(x_1240, 1);
lean_inc(x_1463);
lean_inc(x_1462);
lean_dec(x_1240);
x_1464 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1464, 0, x_1462);
lean_ctor_set(x_1464, 1, x_1463);
return x_1464;
}
}
}
}
}
}
case 7:
{
lean_object* x_1465; 
lean_dec(x_7);
lean_dec(x_6);
x_1465 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_1465) == 0)
{
lean_object* x_1466; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1466 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1466, 0, x_3);
lean_ctor_set(x_1466, 1, x_12);
return x_1466;
}
else
{
lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; 
x_1467 = lean_ctor_get(x_1465, 0);
lean_inc(x_1467);
lean_dec(x_1465);
x_1468 = lean_unsigned_to_nat(0u);
x_1469 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_1468);
if (lean_obj_tag(x_1469) == 0)
{
lean_object* x_1470; 
lean_dec(x_1467);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1470 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1470, 0, x_3);
lean_ctor_set(x_1470, 1, x_12);
return x_1470;
}
else
{
lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; uint8_t x_1475; 
x_1471 = lean_ctor_get(x_1469, 0);
lean_inc(x_1471);
if (lean_is_exclusive(x_1469)) {
 lean_ctor_release(x_1469, 0);
 x_1472 = x_1469;
} else {
 lean_dec_ref(x_1469);
 x_1472 = lean_box(0);
}
x_1473 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_1467, x_8, x_9, x_10, x_11, x_12);
x_1474 = lean_ctor_get(x_1473, 0);
lean_inc(x_1474);
x_1475 = lean_unbox(x_1474);
lean_dec(x_1474);
if (x_1475 == 0)
{
uint8_t x_1476; 
lean_dec(x_1472);
lean_dec(x_1471);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1476 = !lean_is_exclusive(x_1473);
if (x_1476 == 0)
{
lean_object* x_1477; 
x_1477 = lean_ctor_get(x_1473, 0);
lean_dec(x_1477);
lean_ctor_set(x_1473, 0, x_3);
return x_1473;
}
else
{
lean_object* x_1478; lean_object* x_1479; 
x_1478 = lean_ctor_get(x_1473, 1);
lean_inc(x_1478);
lean_dec(x_1473);
x_1479 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1479, 0, x_3);
lean_ctor_set(x_1479, 1, x_1478);
return x_1479;
}
}
else
{
lean_object* x_1480; lean_object* x_1481; 
x_1480 = lean_ctor_get(x_1473, 1);
lean_inc(x_1480);
lean_dec(x_1473);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1481 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_1471, x_8, x_9, x_10, x_11, x_1480);
if (lean_obj_tag(x_1481) == 0)
{
lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1524; 
x_1482 = lean_ctor_get(x_1481, 0);
lean_inc(x_1482);
x_1483 = lean_ctor_get(x_1481, 1);
lean_inc(x_1483);
lean_dec(x_1481);
x_1484 = lean_ctor_get(x_1482, 1);
lean_inc(x_1484);
if (lean_is_exclusive(x_1482)) {
 lean_ctor_release(x_1482, 0);
 lean_ctor_release(x_1482, 1);
 x_1485 = x_1482;
} else {
 lean_dec_ref(x_1482);
 x_1485 = lean_box(0);
}
x_1486 = lean_box(0);
lean_inc(x_8);
x_1487 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_1484, x_1486, x_8, x_9, x_10, x_11, x_1483);
x_1488 = lean_ctor_get(x_1487, 0);
lean_inc(x_1488);
x_1489 = lean_ctor_get(x_1487, 1);
lean_inc(x_1489);
if (lean_is_exclusive(x_1487)) {
 lean_ctor_release(x_1487, 0);
 lean_ctor_release(x_1487, 1);
 x_1490 = x_1487;
} else {
 lean_dec_ref(x_1487);
 x_1490 = lean_box(0);
}
x_1491 = l_Lean_Expr_mvarId_x21(x_1488);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1524 = l_Lean_Meta_ppGoal(x_1491, x_8, x_9, x_10, x_11, x_1489);
if (lean_obj_tag(x_1524) == 0)
{
lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; uint8_t x_1533; lean_object* x_1534; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; uint8_t x_1548; 
x_1525 = lean_ctor_get(x_1524, 0);
lean_inc(x_1525);
x_1526 = lean_ctor_get(x_1524, 1);
lean_inc(x_1526);
lean_dec(x_1524);
x_1527 = lean_mk_string("Meta");
x_1528 = lean_name_mk_string(x_1486, x_1527);
x_1529 = lean_mk_string("IndPredBelow");
x_1530 = lean_name_mk_string(x_1528, x_1529);
x_1531 = lean_mk_string("match");
x_1532 = lean_name_mk_string(x_1530, x_1531);
x_1545 = lean_st_ref_get(x_11, x_1526);
x_1546 = lean_ctor_get(x_1545, 0);
lean_inc(x_1546);
x_1547 = lean_ctor_get(x_1546, 3);
lean_inc(x_1547);
lean_dec(x_1546);
x_1548 = lean_ctor_get_uint8(x_1547, sizeof(void*)*1);
lean_dec(x_1547);
if (x_1548 == 0)
{
lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; 
lean_dec(x_1525);
x_1549 = lean_ctor_get(x_1545, 1);
lean_inc(x_1549);
lean_dec(x_1545);
x_1550 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1551 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1491, x_1550, x_8, x_9, x_10, x_11, x_1549);
if (lean_obj_tag(x_1551) == 0)
{
lean_object* x_1552; uint8_t x_1553; 
x_1552 = lean_ctor_get(x_1551, 0);
lean_inc(x_1552);
x_1553 = lean_unbox(x_1552);
lean_dec(x_1552);
if (x_1553 == 0)
{
lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; uint8_t x_1558; 
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
x_1554 = lean_ctor_get(x_1551, 1);
lean_inc(x_1554);
lean_dec(x_1551);
x_1555 = lean_st_ref_get(x_11, x_1554);
x_1556 = lean_ctor_get(x_1555, 0);
lean_inc(x_1556);
x_1557 = lean_ctor_get(x_1556, 3);
lean_inc(x_1557);
lean_dec(x_1556);
x_1558 = lean_ctor_get_uint8(x_1557, sizeof(void*)*1);
lean_dec(x_1557);
if (x_1558 == 0)
{
uint8_t x_1559; 
lean_dec(x_1532);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1559 = !lean_is_exclusive(x_1555);
if (x_1559 == 0)
{
lean_object* x_1560; 
x_1560 = lean_ctor_get(x_1555, 0);
lean_dec(x_1560);
lean_ctor_set(x_1555, 0, x_3);
return x_1555;
}
else
{
lean_object* x_1561; lean_object* x_1562; 
x_1561 = lean_ctor_get(x_1555, 1);
lean_inc(x_1561);
lean_dec(x_1555);
x_1562 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1562, 0, x_3);
lean_ctor_set(x_1562, 1, x_1561);
return x_1562;
}
}
else
{
lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; uint8_t x_1566; 
x_1563 = lean_ctor_get(x_1555, 1);
lean_inc(x_1563);
lean_dec(x_1555);
lean_inc(x_1532);
x_1564 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1563);
x_1565 = lean_ctor_get(x_1564, 0);
lean_inc(x_1565);
x_1566 = lean_unbox(x_1565);
lean_dec(x_1565);
if (x_1566 == 0)
{
uint8_t x_1567; 
lean_dec(x_1532);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1567 = !lean_is_exclusive(x_1564);
if (x_1567 == 0)
{
lean_object* x_1568; 
x_1568 = lean_ctor_get(x_1564, 0);
lean_dec(x_1568);
lean_ctor_set(x_1564, 0, x_3);
return x_1564;
}
else
{
lean_object* x_1569; lean_object* x_1570; 
x_1569 = lean_ctor_get(x_1564, 1);
lean_inc(x_1569);
lean_dec(x_1564);
x_1570 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1570, 0, x_3);
lean_ctor_set(x_1570, 1, x_1569);
return x_1570;
}
}
else
{
lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; lean_object* x_1574; uint8_t x_1575; 
x_1571 = lean_ctor_get(x_1564, 1);
lean_inc(x_1571);
lean_dec(x_1564);
x_1572 = lean_mk_string("could not find below term in the local context");
x_1573 = l_Lean_stringToMessageData(x_1572);
lean_dec(x_1572);
x_1574 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1532, x_1573, x_8, x_9, x_10, x_11, x_1571);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1575 = !lean_is_exclusive(x_1574);
if (x_1575 == 0)
{
lean_object* x_1576; 
x_1576 = lean_ctor_get(x_1574, 0);
lean_dec(x_1576);
lean_ctor_set(x_1574, 0, x_3);
return x_1574;
}
else
{
lean_object* x_1577; lean_object* x_1578; 
x_1577 = lean_ctor_get(x_1574, 1);
lean_inc(x_1577);
lean_dec(x_1574);
x_1578 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1578, 0, x_3);
lean_ctor_set(x_1578, 1, x_1577);
return x_1578;
}
}
}
}
else
{
lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; uint8_t x_1583; 
x_1579 = lean_ctor_get(x_1551, 1);
lean_inc(x_1579);
lean_dec(x_1551);
x_1580 = lean_st_ref_get(x_11, x_1579);
x_1581 = lean_ctor_get(x_1580, 0);
lean_inc(x_1581);
x_1582 = lean_ctor_get(x_1581, 3);
lean_inc(x_1582);
lean_dec(x_1581);
x_1583 = lean_ctor_get_uint8(x_1582, sizeof(void*)*1);
lean_dec(x_1582);
if (x_1583 == 0)
{
lean_object* x_1584; uint8_t x_1585; 
x_1584 = lean_ctor_get(x_1580, 1);
lean_inc(x_1584);
lean_dec(x_1580);
x_1585 = 0;
x_1533 = x_1585;
x_1534 = x_1584;
goto block_1544;
}
else
{
lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; uint8_t x_1590; 
x_1586 = lean_ctor_get(x_1580, 1);
lean_inc(x_1586);
lean_dec(x_1580);
lean_inc(x_1532);
x_1587 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1586);
x_1588 = lean_ctor_get(x_1587, 0);
lean_inc(x_1588);
x_1589 = lean_ctor_get(x_1587, 1);
lean_inc(x_1589);
lean_dec(x_1587);
x_1590 = lean_unbox(x_1588);
lean_dec(x_1588);
x_1533 = x_1590;
x_1534 = x_1589;
goto block_1544;
}
}
}
else
{
uint8_t x_1591; 
lean_dec(x_1532);
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1591 = !lean_is_exclusive(x_1551);
if (x_1591 == 0)
{
lean_object* x_1592; 
x_1592 = lean_ctor_get(x_1551, 0);
lean_dec(x_1592);
lean_ctor_set_tag(x_1551, 0);
lean_ctor_set(x_1551, 0, x_3);
return x_1551;
}
else
{
lean_object* x_1593; lean_object* x_1594; 
x_1593 = lean_ctor_get(x_1551, 1);
lean_inc(x_1593);
lean_dec(x_1551);
x_1594 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1594, 0, x_3);
lean_ctor_set(x_1594, 1, x_1593);
return x_1594;
}
}
}
else
{
lean_object* x_1595; lean_object* x_1596; lean_object* x_1597; uint8_t x_1598; 
x_1595 = lean_ctor_get(x_1545, 1);
lean_inc(x_1595);
lean_dec(x_1545);
lean_inc(x_1532);
x_1596 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1595);
x_1597 = lean_ctor_get(x_1596, 0);
lean_inc(x_1597);
x_1598 = lean_unbox(x_1597);
lean_dec(x_1597);
if (x_1598 == 0)
{
lean_object* x_1599; lean_object* x_1600; lean_object* x_1601; 
lean_dec(x_1525);
x_1599 = lean_ctor_get(x_1596, 1);
lean_inc(x_1599);
lean_dec(x_1596);
x_1600 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1601 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1491, x_1600, x_8, x_9, x_10, x_11, x_1599);
if (lean_obj_tag(x_1601) == 0)
{
lean_object* x_1602; uint8_t x_1603; 
x_1602 = lean_ctor_get(x_1601, 0);
lean_inc(x_1602);
x_1603 = lean_unbox(x_1602);
lean_dec(x_1602);
if (x_1603 == 0)
{
lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; uint8_t x_1608; 
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
x_1604 = lean_ctor_get(x_1601, 1);
lean_inc(x_1604);
lean_dec(x_1601);
x_1605 = lean_st_ref_get(x_11, x_1604);
x_1606 = lean_ctor_get(x_1605, 0);
lean_inc(x_1606);
x_1607 = lean_ctor_get(x_1606, 3);
lean_inc(x_1607);
lean_dec(x_1606);
x_1608 = lean_ctor_get_uint8(x_1607, sizeof(void*)*1);
lean_dec(x_1607);
if (x_1608 == 0)
{
uint8_t x_1609; 
lean_dec(x_1532);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1609 = !lean_is_exclusive(x_1605);
if (x_1609 == 0)
{
lean_object* x_1610; 
x_1610 = lean_ctor_get(x_1605, 0);
lean_dec(x_1610);
lean_ctor_set(x_1605, 0, x_3);
return x_1605;
}
else
{
lean_object* x_1611; lean_object* x_1612; 
x_1611 = lean_ctor_get(x_1605, 1);
lean_inc(x_1611);
lean_dec(x_1605);
x_1612 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1612, 0, x_3);
lean_ctor_set(x_1612, 1, x_1611);
return x_1612;
}
}
else
{
lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; uint8_t x_1616; 
x_1613 = lean_ctor_get(x_1605, 1);
lean_inc(x_1613);
lean_dec(x_1605);
lean_inc(x_1532);
x_1614 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1613);
x_1615 = lean_ctor_get(x_1614, 0);
lean_inc(x_1615);
x_1616 = lean_unbox(x_1615);
lean_dec(x_1615);
if (x_1616 == 0)
{
uint8_t x_1617; 
lean_dec(x_1532);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1617 = !lean_is_exclusive(x_1614);
if (x_1617 == 0)
{
lean_object* x_1618; 
x_1618 = lean_ctor_get(x_1614, 0);
lean_dec(x_1618);
lean_ctor_set(x_1614, 0, x_3);
return x_1614;
}
else
{
lean_object* x_1619; lean_object* x_1620; 
x_1619 = lean_ctor_get(x_1614, 1);
lean_inc(x_1619);
lean_dec(x_1614);
x_1620 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1620, 0, x_3);
lean_ctor_set(x_1620, 1, x_1619);
return x_1620;
}
}
else
{
lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; uint8_t x_1625; 
x_1621 = lean_ctor_get(x_1614, 1);
lean_inc(x_1621);
lean_dec(x_1614);
x_1622 = lean_mk_string("could not find below term in the local context");
x_1623 = l_Lean_stringToMessageData(x_1622);
lean_dec(x_1622);
x_1624 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1532, x_1623, x_8, x_9, x_10, x_11, x_1621);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1625 = !lean_is_exclusive(x_1624);
if (x_1625 == 0)
{
lean_object* x_1626; 
x_1626 = lean_ctor_get(x_1624, 0);
lean_dec(x_1626);
lean_ctor_set(x_1624, 0, x_3);
return x_1624;
}
else
{
lean_object* x_1627; lean_object* x_1628; 
x_1627 = lean_ctor_get(x_1624, 1);
lean_inc(x_1627);
lean_dec(x_1624);
x_1628 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1628, 0, x_3);
lean_ctor_set(x_1628, 1, x_1627);
return x_1628;
}
}
}
}
else
{
lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; uint8_t x_1633; 
x_1629 = lean_ctor_get(x_1601, 1);
lean_inc(x_1629);
lean_dec(x_1601);
x_1630 = lean_st_ref_get(x_11, x_1629);
x_1631 = lean_ctor_get(x_1630, 0);
lean_inc(x_1631);
x_1632 = lean_ctor_get(x_1631, 3);
lean_inc(x_1632);
lean_dec(x_1631);
x_1633 = lean_ctor_get_uint8(x_1632, sizeof(void*)*1);
lean_dec(x_1632);
if (x_1633 == 0)
{
lean_object* x_1634; uint8_t x_1635; 
x_1634 = lean_ctor_get(x_1630, 1);
lean_inc(x_1634);
lean_dec(x_1630);
x_1635 = 0;
x_1533 = x_1635;
x_1534 = x_1634;
goto block_1544;
}
else
{
lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; uint8_t x_1640; 
x_1636 = lean_ctor_get(x_1630, 1);
lean_inc(x_1636);
lean_dec(x_1630);
lean_inc(x_1532);
x_1637 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1636);
x_1638 = lean_ctor_get(x_1637, 0);
lean_inc(x_1638);
x_1639 = lean_ctor_get(x_1637, 1);
lean_inc(x_1639);
lean_dec(x_1637);
x_1640 = lean_unbox(x_1638);
lean_dec(x_1638);
x_1533 = x_1640;
x_1534 = x_1639;
goto block_1544;
}
}
}
else
{
uint8_t x_1641; 
lean_dec(x_1532);
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1641 = !lean_is_exclusive(x_1601);
if (x_1641 == 0)
{
lean_object* x_1642; 
x_1642 = lean_ctor_get(x_1601, 0);
lean_dec(x_1642);
lean_ctor_set_tag(x_1601, 0);
lean_ctor_set(x_1601, 0, x_3);
return x_1601;
}
else
{
lean_object* x_1643; lean_object* x_1644; 
x_1643 = lean_ctor_get(x_1601, 1);
lean_inc(x_1643);
lean_dec(x_1601);
x_1644 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1644, 0, x_3);
lean_ctor_set(x_1644, 1, x_1643);
return x_1644;
}
}
}
else
{
lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; 
x_1645 = lean_ctor_get(x_1596, 1);
lean_inc(x_1645);
lean_dec(x_1596);
x_1646 = lean_mk_string("");
x_1647 = l_Lean_stringToMessageData(x_1646);
lean_dec(x_1646);
x_1648 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1648, 0, x_1525);
lean_inc(x_1647);
x_1649 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1649, 0, x_1647);
lean_ctor_set(x_1649, 1, x_1648);
x_1650 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1650, 0, x_1649);
lean_ctor_set(x_1650, 1, x_1647);
lean_inc(x_1532);
x_1651 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1532, x_1650, x_8, x_9, x_10, x_11, x_1645);
x_1652 = lean_ctor_get(x_1651, 1);
lean_inc(x_1652);
lean_dec(x_1651);
x_1653 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1654 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1491, x_1653, x_8, x_9, x_10, x_11, x_1652);
if (lean_obj_tag(x_1654) == 0)
{
lean_object* x_1655; uint8_t x_1656; 
x_1655 = lean_ctor_get(x_1654, 0);
lean_inc(x_1655);
x_1656 = lean_unbox(x_1655);
lean_dec(x_1655);
if (x_1656 == 0)
{
lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; uint8_t x_1661; 
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
x_1657 = lean_ctor_get(x_1654, 1);
lean_inc(x_1657);
lean_dec(x_1654);
x_1658 = lean_st_ref_get(x_11, x_1657);
x_1659 = lean_ctor_get(x_1658, 0);
lean_inc(x_1659);
x_1660 = lean_ctor_get(x_1659, 3);
lean_inc(x_1660);
lean_dec(x_1659);
x_1661 = lean_ctor_get_uint8(x_1660, sizeof(void*)*1);
lean_dec(x_1660);
if (x_1661 == 0)
{
uint8_t x_1662; 
lean_dec(x_1532);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1662 = !lean_is_exclusive(x_1658);
if (x_1662 == 0)
{
lean_object* x_1663; 
x_1663 = lean_ctor_get(x_1658, 0);
lean_dec(x_1663);
lean_ctor_set(x_1658, 0, x_3);
return x_1658;
}
else
{
lean_object* x_1664; lean_object* x_1665; 
x_1664 = lean_ctor_get(x_1658, 1);
lean_inc(x_1664);
lean_dec(x_1658);
x_1665 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1665, 0, x_3);
lean_ctor_set(x_1665, 1, x_1664);
return x_1665;
}
}
else
{
lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; uint8_t x_1669; 
x_1666 = lean_ctor_get(x_1658, 1);
lean_inc(x_1666);
lean_dec(x_1658);
lean_inc(x_1532);
x_1667 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1666);
x_1668 = lean_ctor_get(x_1667, 0);
lean_inc(x_1668);
x_1669 = lean_unbox(x_1668);
lean_dec(x_1668);
if (x_1669 == 0)
{
uint8_t x_1670; 
lean_dec(x_1532);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1670 = !lean_is_exclusive(x_1667);
if (x_1670 == 0)
{
lean_object* x_1671; 
x_1671 = lean_ctor_get(x_1667, 0);
lean_dec(x_1671);
lean_ctor_set(x_1667, 0, x_3);
return x_1667;
}
else
{
lean_object* x_1672; lean_object* x_1673; 
x_1672 = lean_ctor_get(x_1667, 1);
lean_inc(x_1672);
lean_dec(x_1667);
x_1673 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1673, 0, x_3);
lean_ctor_set(x_1673, 1, x_1672);
return x_1673;
}
}
else
{
lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; uint8_t x_1678; 
x_1674 = lean_ctor_get(x_1667, 1);
lean_inc(x_1674);
lean_dec(x_1667);
x_1675 = lean_mk_string("could not find below term in the local context");
x_1676 = l_Lean_stringToMessageData(x_1675);
lean_dec(x_1675);
x_1677 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1532, x_1676, x_8, x_9, x_10, x_11, x_1674);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1678 = !lean_is_exclusive(x_1677);
if (x_1678 == 0)
{
lean_object* x_1679; 
x_1679 = lean_ctor_get(x_1677, 0);
lean_dec(x_1679);
lean_ctor_set(x_1677, 0, x_3);
return x_1677;
}
else
{
lean_object* x_1680; lean_object* x_1681; 
x_1680 = lean_ctor_get(x_1677, 1);
lean_inc(x_1680);
lean_dec(x_1677);
x_1681 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1681, 0, x_3);
lean_ctor_set(x_1681, 1, x_1680);
return x_1681;
}
}
}
}
else
{
lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; uint8_t x_1686; 
x_1682 = lean_ctor_get(x_1654, 1);
lean_inc(x_1682);
lean_dec(x_1654);
x_1683 = lean_st_ref_get(x_11, x_1682);
x_1684 = lean_ctor_get(x_1683, 0);
lean_inc(x_1684);
x_1685 = lean_ctor_get(x_1684, 3);
lean_inc(x_1685);
lean_dec(x_1684);
x_1686 = lean_ctor_get_uint8(x_1685, sizeof(void*)*1);
lean_dec(x_1685);
if (x_1686 == 0)
{
lean_object* x_1687; uint8_t x_1688; 
x_1687 = lean_ctor_get(x_1683, 1);
lean_inc(x_1687);
lean_dec(x_1683);
x_1688 = 0;
x_1533 = x_1688;
x_1534 = x_1687;
goto block_1544;
}
else
{
lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; uint8_t x_1693; 
x_1689 = lean_ctor_get(x_1683, 1);
lean_inc(x_1689);
lean_dec(x_1683);
lean_inc(x_1532);
x_1690 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1532, x_8, x_9, x_10, x_11, x_1689);
x_1691 = lean_ctor_get(x_1690, 0);
lean_inc(x_1691);
x_1692 = lean_ctor_get(x_1690, 1);
lean_inc(x_1692);
lean_dec(x_1690);
x_1693 = lean_unbox(x_1691);
lean_dec(x_1691);
x_1533 = x_1693;
x_1534 = x_1692;
goto block_1544;
}
}
}
else
{
uint8_t x_1694; 
lean_dec(x_1532);
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1694 = !lean_is_exclusive(x_1654);
if (x_1694 == 0)
{
lean_object* x_1695; 
x_1695 = lean_ctor_get(x_1654, 0);
lean_dec(x_1695);
lean_ctor_set_tag(x_1654, 0);
lean_ctor_set(x_1654, 0, x_3);
return x_1654;
}
else
{
lean_object* x_1696; lean_object* x_1697; 
x_1696 = lean_ctor_get(x_1654, 1);
lean_inc(x_1696);
lean_dec(x_1654);
x_1697 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1697, 0, x_3);
lean_ctor_set(x_1697, 1, x_1696);
return x_1697;
}
}
}
}
block_1544:
{
if (x_1533 == 0)
{
lean_dec(x_1532);
x_1492 = x_1534;
goto block_1523;
}
else
{
lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; 
x_1535 = lean_mk_string("Found below term in the local context: ");
x_1536 = l_Lean_stringToMessageData(x_1535);
lean_dec(x_1535);
lean_inc(x_1488);
x_1537 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1537, 0, x_1488);
x_1538 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1538, 0, x_1536);
lean_ctor_set(x_1538, 1, x_1537);
x_1539 = lean_mk_string("");
x_1540 = l_Lean_stringToMessageData(x_1539);
lean_dec(x_1539);
x_1541 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1541, 0, x_1538);
lean_ctor_set(x_1541, 1, x_1540);
x_1542 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1532, x_1541, x_8, x_9, x_10, x_11, x_1534);
x_1543 = lean_ctor_get(x_1542, 1);
lean_inc(x_1543);
lean_dec(x_1542);
x_1492 = x_1543;
goto block_1523;
}
}
}
else
{
uint8_t x_1698; 
lean_dec(x_1491);
lean_dec(x_1490);
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1698 = !lean_is_exclusive(x_1524);
if (x_1698 == 0)
{
lean_object* x_1699; 
x_1699 = lean_ctor_get(x_1524, 0);
lean_dec(x_1699);
lean_ctor_set_tag(x_1524, 0);
lean_ctor_set(x_1524, 0, x_3);
return x_1524;
}
else
{
lean_object* x_1700; lean_object* x_1701; 
x_1700 = lean_ctor_get(x_1524, 1);
lean_inc(x_1700);
lean_dec(x_1524);
x_1701 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1701, 0, x_3);
lean_ctor_set(x_1701, 1, x_1700);
return x_1701;
}
}
block_1523:
{
lean_object* x_1493; uint8_t x_1494; 
x_1493 = lean_array_get_size(x_1);
x_1494 = lean_nat_dec_lt(x_1468, x_1493);
if (x_1494 == 0)
{
lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; 
lean_dec(x_1493);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1485)) {
 x_1495 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1495 = x_1485;
}
lean_ctor_set(x_1495, 0, x_1488);
lean_ctor_set(x_1495, 1, x_1471);
if (lean_is_scalar(x_1472)) {
 x_1496 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1496 = x_1472;
}
lean_ctor_set(x_1496, 0, x_1495);
if (lean_is_scalar(x_1490)) {
 x_1497 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1497 = x_1490;
}
lean_ctor_set(x_1497, 0, x_1496);
lean_ctor_set(x_1497, 1, x_1492);
return x_1497;
}
else
{
uint8_t x_1498; 
x_1498 = lean_nat_dec_le(x_1493, x_1493);
if (x_1498 == 0)
{
lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; 
lean_dec(x_1493);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1485)) {
 x_1499 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1499 = x_1485;
}
lean_ctor_set(x_1499, 0, x_1488);
lean_ctor_set(x_1499, 1, x_1471);
if (lean_is_scalar(x_1472)) {
 x_1500 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1500 = x_1472;
}
lean_ctor_set(x_1500, 0, x_1499);
if (lean_is_scalar(x_1490)) {
 x_1501 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1501 = x_1490;
}
lean_ctor_set(x_1501, 0, x_1500);
lean_ctor_set(x_1501, 1, x_1492);
return x_1501;
}
else
{
size_t x_1502; size_t x_1503; lean_object* x_1504; 
lean_dec(x_1490);
x_1502 = 0;
x_1503 = lean_usize_of_nat(x_1493);
lean_dec(x_1493);
lean_inc(x_1488);
x_1504 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_1488, x_1, x_1502, x_1503, x_8, x_9, x_10, x_11, x_1492);
if (lean_obj_tag(x_1504) == 0)
{
lean_object* x_1505; uint8_t x_1506; 
x_1505 = lean_ctor_get(x_1504, 0);
lean_inc(x_1505);
x_1506 = lean_unbox(x_1505);
lean_dec(x_1505);
if (x_1506 == 0)
{
uint8_t x_1507; 
lean_dec(x_3);
x_1507 = !lean_is_exclusive(x_1504);
if (x_1507 == 0)
{
lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; 
x_1508 = lean_ctor_get(x_1504, 0);
lean_dec(x_1508);
if (lean_is_scalar(x_1485)) {
 x_1509 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1509 = x_1485;
}
lean_ctor_set(x_1509, 0, x_1488);
lean_ctor_set(x_1509, 1, x_1471);
if (lean_is_scalar(x_1472)) {
 x_1510 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1510 = x_1472;
}
lean_ctor_set(x_1510, 0, x_1509);
lean_ctor_set(x_1504, 0, x_1510);
return x_1504;
}
else
{
lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; 
x_1511 = lean_ctor_get(x_1504, 1);
lean_inc(x_1511);
lean_dec(x_1504);
if (lean_is_scalar(x_1485)) {
 x_1512 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1512 = x_1485;
}
lean_ctor_set(x_1512, 0, x_1488);
lean_ctor_set(x_1512, 1, x_1471);
if (lean_is_scalar(x_1472)) {
 x_1513 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1513 = x_1472;
}
lean_ctor_set(x_1513, 0, x_1512);
x_1514 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1514, 0, x_1513);
lean_ctor_set(x_1514, 1, x_1511);
return x_1514;
}
}
else
{
uint8_t x_1515; 
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
x_1515 = !lean_is_exclusive(x_1504);
if (x_1515 == 0)
{
lean_object* x_1516; 
x_1516 = lean_ctor_get(x_1504, 0);
lean_dec(x_1516);
lean_ctor_set(x_1504, 0, x_3);
return x_1504;
}
else
{
lean_object* x_1517; lean_object* x_1518; 
x_1517 = lean_ctor_get(x_1504, 1);
lean_inc(x_1517);
lean_dec(x_1504);
x_1518 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1518, 0, x_3);
lean_ctor_set(x_1518, 1, x_1517);
return x_1518;
}
}
}
else
{
uint8_t x_1519; 
lean_dec(x_1488);
lean_dec(x_1485);
lean_dec(x_1472);
lean_dec(x_1471);
x_1519 = !lean_is_exclusive(x_1504);
if (x_1519 == 0)
{
lean_object* x_1520; 
x_1520 = lean_ctor_get(x_1504, 0);
lean_dec(x_1520);
lean_ctor_set_tag(x_1504, 0);
lean_ctor_set(x_1504, 0, x_3);
return x_1504;
}
else
{
lean_object* x_1521; lean_object* x_1522; 
x_1521 = lean_ctor_get(x_1504, 1);
lean_inc(x_1521);
lean_dec(x_1504);
x_1522 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1522, 0, x_3);
lean_ctor_set(x_1522, 1, x_1521);
return x_1522;
}
}
}
}
}
}
else
{
uint8_t x_1702; 
lean_dec(x_1472);
lean_dec(x_1471);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_1702 = !lean_is_exclusive(x_1481);
if (x_1702 == 0)
{
return x_1481;
}
else
{
lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; 
x_1703 = lean_ctor_get(x_1481, 0);
x_1704 = lean_ctor_get(x_1481, 1);
lean_inc(x_1704);
lean_inc(x_1703);
lean_dec(x_1481);
x_1705 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1705, 0, x_1703);
lean_ctor_set(x_1705, 1, x_1704);
return x_1705;
}
}
}
}
}
}
case 8:
{
lean_object* x_1706; 
lean_dec(x_7);
lean_dec(x_6);
x_1706 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_1706) == 0)
{
lean_object* x_1707; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1707 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1707, 0, x_3);
lean_ctor_set(x_1707, 1, x_12);
return x_1707;
}
else
{
lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; 
x_1708 = lean_ctor_get(x_1706, 0);
lean_inc(x_1708);
lean_dec(x_1706);
x_1709 = lean_unsigned_to_nat(0u);
x_1710 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_1709);
if (lean_obj_tag(x_1710) == 0)
{
lean_object* x_1711; 
lean_dec(x_1708);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1711 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1711, 0, x_3);
lean_ctor_set(x_1711, 1, x_12);
return x_1711;
}
else
{
lean_object* x_1712; lean_object* x_1713; lean_object* x_1714; lean_object* x_1715; uint8_t x_1716; 
x_1712 = lean_ctor_get(x_1710, 0);
lean_inc(x_1712);
if (lean_is_exclusive(x_1710)) {
 lean_ctor_release(x_1710, 0);
 x_1713 = x_1710;
} else {
 lean_dec_ref(x_1710);
 x_1713 = lean_box(0);
}
x_1714 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_1708, x_8, x_9, x_10, x_11, x_12);
x_1715 = lean_ctor_get(x_1714, 0);
lean_inc(x_1715);
x_1716 = lean_unbox(x_1715);
lean_dec(x_1715);
if (x_1716 == 0)
{
uint8_t x_1717; 
lean_dec(x_1713);
lean_dec(x_1712);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1717 = !lean_is_exclusive(x_1714);
if (x_1717 == 0)
{
lean_object* x_1718; 
x_1718 = lean_ctor_get(x_1714, 0);
lean_dec(x_1718);
lean_ctor_set(x_1714, 0, x_3);
return x_1714;
}
else
{
lean_object* x_1719; lean_object* x_1720; 
x_1719 = lean_ctor_get(x_1714, 1);
lean_inc(x_1719);
lean_dec(x_1714);
x_1720 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1720, 0, x_3);
lean_ctor_set(x_1720, 1, x_1719);
return x_1720;
}
}
else
{
lean_object* x_1721; lean_object* x_1722; 
x_1721 = lean_ctor_get(x_1714, 1);
lean_inc(x_1721);
lean_dec(x_1714);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1722 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_1712, x_8, x_9, x_10, x_11, x_1721);
if (lean_obj_tag(x_1722) == 0)
{
lean_object* x_1723; lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; lean_object* x_1728; lean_object* x_1729; lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; lean_object* x_1733; lean_object* x_1765; 
x_1723 = lean_ctor_get(x_1722, 0);
lean_inc(x_1723);
x_1724 = lean_ctor_get(x_1722, 1);
lean_inc(x_1724);
lean_dec(x_1722);
x_1725 = lean_ctor_get(x_1723, 1);
lean_inc(x_1725);
if (lean_is_exclusive(x_1723)) {
 lean_ctor_release(x_1723, 0);
 lean_ctor_release(x_1723, 1);
 x_1726 = x_1723;
} else {
 lean_dec_ref(x_1723);
 x_1726 = lean_box(0);
}
x_1727 = lean_box(0);
lean_inc(x_8);
x_1728 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_1725, x_1727, x_8, x_9, x_10, x_11, x_1724);
x_1729 = lean_ctor_get(x_1728, 0);
lean_inc(x_1729);
x_1730 = lean_ctor_get(x_1728, 1);
lean_inc(x_1730);
if (lean_is_exclusive(x_1728)) {
 lean_ctor_release(x_1728, 0);
 lean_ctor_release(x_1728, 1);
 x_1731 = x_1728;
} else {
 lean_dec_ref(x_1728);
 x_1731 = lean_box(0);
}
x_1732 = l_Lean_Expr_mvarId_x21(x_1729);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1765 = l_Lean_Meta_ppGoal(x_1732, x_8, x_9, x_10, x_11, x_1730);
if (lean_obj_tag(x_1765) == 0)
{
lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; uint8_t x_1774; lean_object* x_1775; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; uint8_t x_1789; 
x_1766 = lean_ctor_get(x_1765, 0);
lean_inc(x_1766);
x_1767 = lean_ctor_get(x_1765, 1);
lean_inc(x_1767);
lean_dec(x_1765);
x_1768 = lean_mk_string("Meta");
x_1769 = lean_name_mk_string(x_1727, x_1768);
x_1770 = lean_mk_string("IndPredBelow");
x_1771 = lean_name_mk_string(x_1769, x_1770);
x_1772 = lean_mk_string("match");
x_1773 = lean_name_mk_string(x_1771, x_1772);
x_1786 = lean_st_ref_get(x_11, x_1767);
x_1787 = lean_ctor_get(x_1786, 0);
lean_inc(x_1787);
x_1788 = lean_ctor_get(x_1787, 3);
lean_inc(x_1788);
lean_dec(x_1787);
x_1789 = lean_ctor_get_uint8(x_1788, sizeof(void*)*1);
lean_dec(x_1788);
if (x_1789 == 0)
{
lean_object* x_1790; lean_object* x_1791; lean_object* x_1792; 
lean_dec(x_1766);
x_1790 = lean_ctor_get(x_1786, 1);
lean_inc(x_1790);
lean_dec(x_1786);
x_1791 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1792 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1732, x_1791, x_8, x_9, x_10, x_11, x_1790);
if (lean_obj_tag(x_1792) == 0)
{
lean_object* x_1793; uint8_t x_1794; 
x_1793 = lean_ctor_get(x_1792, 0);
lean_inc(x_1793);
x_1794 = lean_unbox(x_1793);
lean_dec(x_1793);
if (x_1794 == 0)
{
lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; uint8_t x_1799; 
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
x_1795 = lean_ctor_get(x_1792, 1);
lean_inc(x_1795);
lean_dec(x_1792);
x_1796 = lean_st_ref_get(x_11, x_1795);
x_1797 = lean_ctor_get(x_1796, 0);
lean_inc(x_1797);
x_1798 = lean_ctor_get(x_1797, 3);
lean_inc(x_1798);
lean_dec(x_1797);
x_1799 = lean_ctor_get_uint8(x_1798, sizeof(void*)*1);
lean_dec(x_1798);
if (x_1799 == 0)
{
uint8_t x_1800; 
lean_dec(x_1773);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1800 = !lean_is_exclusive(x_1796);
if (x_1800 == 0)
{
lean_object* x_1801; 
x_1801 = lean_ctor_get(x_1796, 0);
lean_dec(x_1801);
lean_ctor_set(x_1796, 0, x_3);
return x_1796;
}
else
{
lean_object* x_1802; lean_object* x_1803; 
x_1802 = lean_ctor_get(x_1796, 1);
lean_inc(x_1802);
lean_dec(x_1796);
x_1803 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1803, 0, x_3);
lean_ctor_set(x_1803, 1, x_1802);
return x_1803;
}
}
else
{
lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; uint8_t x_1807; 
x_1804 = lean_ctor_get(x_1796, 1);
lean_inc(x_1804);
lean_dec(x_1796);
lean_inc(x_1773);
x_1805 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1804);
x_1806 = lean_ctor_get(x_1805, 0);
lean_inc(x_1806);
x_1807 = lean_unbox(x_1806);
lean_dec(x_1806);
if (x_1807 == 0)
{
uint8_t x_1808; 
lean_dec(x_1773);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1808 = !lean_is_exclusive(x_1805);
if (x_1808 == 0)
{
lean_object* x_1809; 
x_1809 = lean_ctor_get(x_1805, 0);
lean_dec(x_1809);
lean_ctor_set(x_1805, 0, x_3);
return x_1805;
}
else
{
lean_object* x_1810; lean_object* x_1811; 
x_1810 = lean_ctor_get(x_1805, 1);
lean_inc(x_1810);
lean_dec(x_1805);
x_1811 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1811, 0, x_3);
lean_ctor_set(x_1811, 1, x_1810);
return x_1811;
}
}
else
{
lean_object* x_1812; lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; uint8_t x_1816; 
x_1812 = lean_ctor_get(x_1805, 1);
lean_inc(x_1812);
lean_dec(x_1805);
x_1813 = lean_mk_string("could not find below term in the local context");
x_1814 = l_Lean_stringToMessageData(x_1813);
lean_dec(x_1813);
x_1815 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1773, x_1814, x_8, x_9, x_10, x_11, x_1812);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1816 = !lean_is_exclusive(x_1815);
if (x_1816 == 0)
{
lean_object* x_1817; 
x_1817 = lean_ctor_get(x_1815, 0);
lean_dec(x_1817);
lean_ctor_set(x_1815, 0, x_3);
return x_1815;
}
else
{
lean_object* x_1818; lean_object* x_1819; 
x_1818 = lean_ctor_get(x_1815, 1);
lean_inc(x_1818);
lean_dec(x_1815);
x_1819 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1819, 0, x_3);
lean_ctor_set(x_1819, 1, x_1818);
return x_1819;
}
}
}
}
else
{
lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; uint8_t x_1824; 
x_1820 = lean_ctor_get(x_1792, 1);
lean_inc(x_1820);
lean_dec(x_1792);
x_1821 = lean_st_ref_get(x_11, x_1820);
x_1822 = lean_ctor_get(x_1821, 0);
lean_inc(x_1822);
x_1823 = lean_ctor_get(x_1822, 3);
lean_inc(x_1823);
lean_dec(x_1822);
x_1824 = lean_ctor_get_uint8(x_1823, sizeof(void*)*1);
lean_dec(x_1823);
if (x_1824 == 0)
{
lean_object* x_1825; uint8_t x_1826; 
x_1825 = lean_ctor_get(x_1821, 1);
lean_inc(x_1825);
lean_dec(x_1821);
x_1826 = 0;
x_1774 = x_1826;
x_1775 = x_1825;
goto block_1785;
}
else
{
lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; uint8_t x_1831; 
x_1827 = lean_ctor_get(x_1821, 1);
lean_inc(x_1827);
lean_dec(x_1821);
lean_inc(x_1773);
x_1828 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1827);
x_1829 = lean_ctor_get(x_1828, 0);
lean_inc(x_1829);
x_1830 = lean_ctor_get(x_1828, 1);
lean_inc(x_1830);
lean_dec(x_1828);
x_1831 = lean_unbox(x_1829);
lean_dec(x_1829);
x_1774 = x_1831;
x_1775 = x_1830;
goto block_1785;
}
}
}
else
{
uint8_t x_1832; 
lean_dec(x_1773);
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1832 = !lean_is_exclusive(x_1792);
if (x_1832 == 0)
{
lean_object* x_1833; 
x_1833 = lean_ctor_get(x_1792, 0);
lean_dec(x_1833);
lean_ctor_set_tag(x_1792, 0);
lean_ctor_set(x_1792, 0, x_3);
return x_1792;
}
else
{
lean_object* x_1834; lean_object* x_1835; 
x_1834 = lean_ctor_get(x_1792, 1);
lean_inc(x_1834);
lean_dec(x_1792);
x_1835 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1835, 0, x_3);
lean_ctor_set(x_1835, 1, x_1834);
return x_1835;
}
}
}
else
{
lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; uint8_t x_1839; 
x_1836 = lean_ctor_get(x_1786, 1);
lean_inc(x_1836);
lean_dec(x_1786);
lean_inc(x_1773);
x_1837 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1836);
x_1838 = lean_ctor_get(x_1837, 0);
lean_inc(x_1838);
x_1839 = lean_unbox(x_1838);
lean_dec(x_1838);
if (x_1839 == 0)
{
lean_object* x_1840; lean_object* x_1841; lean_object* x_1842; 
lean_dec(x_1766);
x_1840 = lean_ctor_get(x_1837, 1);
lean_inc(x_1840);
lean_dec(x_1837);
x_1841 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1842 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1732, x_1841, x_8, x_9, x_10, x_11, x_1840);
if (lean_obj_tag(x_1842) == 0)
{
lean_object* x_1843; uint8_t x_1844; 
x_1843 = lean_ctor_get(x_1842, 0);
lean_inc(x_1843);
x_1844 = lean_unbox(x_1843);
lean_dec(x_1843);
if (x_1844 == 0)
{
lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; lean_object* x_1848; uint8_t x_1849; 
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
x_1845 = lean_ctor_get(x_1842, 1);
lean_inc(x_1845);
lean_dec(x_1842);
x_1846 = lean_st_ref_get(x_11, x_1845);
x_1847 = lean_ctor_get(x_1846, 0);
lean_inc(x_1847);
x_1848 = lean_ctor_get(x_1847, 3);
lean_inc(x_1848);
lean_dec(x_1847);
x_1849 = lean_ctor_get_uint8(x_1848, sizeof(void*)*1);
lean_dec(x_1848);
if (x_1849 == 0)
{
uint8_t x_1850; 
lean_dec(x_1773);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1850 = !lean_is_exclusive(x_1846);
if (x_1850 == 0)
{
lean_object* x_1851; 
x_1851 = lean_ctor_get(x_1846, 0);
lean_dec(x_1851);
lean_ctor_set(x_1846, 0, x_3);
return x_1846;
}
else
{
lean_object* x_1852; lean_object* x_1853; 
x_1852 = lean_ctor_get(x_1846, 1);
lean_inc(x_1852);
lean_dec(x_1846);
x_1853 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1853, 0, x_3);
lean_ctor_set(x_1853, 1, x_1852);
return x_1853;
}
}
else
{
lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; uint8_t x_1857; 
x_1854 = lean_ctor_get(x_1846, 1);
lean_inc(x_1854);
lean_dec(x_1846);
lean_inc(x_1773);
x_1855 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1854);
x_1856 = lean_ctor_get(x_1855, 0);
lean_inc(x_1856);
x_1857 = lean_unbox(x_1856);
lean_dec(x_1856);
if (x_1857 == 0)
{
uint8_t x_1858; 
lean_dec(x_1773);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1858 = !lean_is_exclusive(x_1855);
if (x_1858 == 0)
{
lean_object* x_1859; 
x_1859 = lean_ctor_get(x_1855, 0);
lean_dec(x_1859);
lean_ctor_set(x_1855, 0, x_3);
return x_1855;
}
else
{
lean_object* x_1860; lean_object* x_1861; 
x_1860 = lean_ctor_get(x_1855, 1);
lean_inc(x_1860);
lean_dec(x_1855);
x_1861 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1861, 0, x_3);
lean_ctor_set(x_1861, 1, x_1860);
return x_1861;
}
}
else
{
lean_object* x_1862; lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; uint8_t x_1866; 
x_1862 = lean_ctor_get(x_1855, 1);
lean_inc(x_1862);
lean_dec(x_1855);
x_1863 = lean_mk_string("could not find below term in the local context");
x_1864 = l_Lean_stringToMessageData(x_1863);
lean_dec(x_1863);
x_1865 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1773, x_1864, x_8, x_9, x_10, x_11, x_1862);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1866 = !lean_is_exclusive(x_1865);
if (x_1866 == 0)
{
lean_object* x_1867; 
x_1867 = lean_ctor_get(x_1865, 0);
lean_dec(x_1867);
lean_ctor_set(x_1865, 0, x_3);
return x_1865;
}
else
{
lean_object* x_1868; lean_object* x_1869; 
x_1868 = lean_ctor_get(x_1865, 1);
lean_inc(x_1868);
lean_dec(x_1865);
x_1869 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1869, 0, x_3);
lean_ctor_set(x_1869, 1, x_1868);
return x_1869;
}
}
}
}
else
{
lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; uint8_t x_1874; 
x_1870 = lean_ctor_get(x_1842, 1);
lean_inc(x_1870);
lean_dec(x_1842);
x_1871 = lean_st_ref_get(x_11, x_1870);
x_1872 = lean_ctor_get(x_1871, 0);
lean_inc(x_1872);
x_1873 = lean_ctor_get(x_1872, 3);
lean_inc(x_1873);
lean_dec(x_1872);
x_1874 = lean_ctor_get_uint8(x_1873, sizeof(void*)*1);
lean_dec(x_1873);
if (x_1874 == 0)
{
lean_object* x_1875; uint8_t x_1876; 
x_1875 = lean_ctor_get(x_1871, 1);
lean_inc(x_1875);
lean_dec(x_1871);
x_1876 = 0;
x_1774 = x_1876;
x_1775 = x_1875;
goto block_1785;
}
else
{
lean_object* x_1877; lean_object* x_1878; lean_object* x_1879; lean_object* x_1880; uint8_t x_1881; 
x_1877 = lean_ctor_get(x_1871, 1);
lean_inc(x_1877);
lean_dec(x_1871);
lean_inc(x_1773);
x_1878 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1877);
x_1879 = lean_ctor_get(x_1878, 0);
lean_inc(x_1879);
x_1880 = lean_ctor_get(x_1878, 1);
lean_inc(x_1880);
lean_dec(x_1878);
x_1881 = lean_unbox(x_1879);
lean_dec(x_1879);
x_1774 = x_1881;
x_1775 = x_1880;
goto block_1785;
}
}
}
else
{
uint8_t x_1882; 
lean_dec(x_1773);
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1882 = !lean_is_exclusive(x_1842);
if (x_1882 == 0)
{
lean_object* x_1883; 
x_1883 = lean_ctor_get(x_1842, 0);
lean_dec(x_1883);
lean_ctor_set_tag(x_1842, 0);
lean_ctor_set(x_1842, 0, x_3);
return x_1842;
}
else
{
lean_object* x_1884; lean_object* x_1885; 
x_1884 = lean_ctor_get(x_1842, 1);
lean_inc(x_1884);
lean_dec(x_1842);
x_1885 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1885, 0, x_3);
lean_ctor_set(x_1885, 1, x_1884);
return x_1885;
}
}
}
else
{
lean_object* x_1886; lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; lean_object* x_1892; lean_object* x_1893; lean_object* x_1894; lean_object* x_1895; 
x_1886 = lean_ctor_get(x_1837, 1);
lean_inc(x_1886);
lean_dec(x_1837);
x_1887 = lean_mk_string("");
x_1888 = l_Lean_stringToMessageData(x_1887);
lean_dec(x_1887);
x_1889 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1889, 0, x_1766);
lean_inc(x_1888);
x_1890 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1890, 0, x_1888);
lean_ctor_set(x_1890, 1, x_1889);
x_1891 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1891, 0, x_1890);
lean_ctor_set(x_1891, 1, x_1888);
lean_inc(x_1773);
x_1892 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1773, x_1891, x_8, x_9, x_10, x_11, x_1886);
x_1893 = lean_ctor_get(x_1892, 1);
lean_inc(x_1893);
lean_dec(x_1892);
x_1894 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1895 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1732, x_1894, x_8, x_9, x_10, x_11, x_1893);
if (lean_obj_tag(x_1895) == 0)
{
lean_object* x_1896; uint8_t x_1897; 
x_1896 = lean_ctor_get(x_1895, 0);
lean_inc(x_1896);
x_1897 = lean_unbox(x_1896);
lean_dec(x_1896);
if (x_1897 == 0)
{
lean_object* x_1898; lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; uint8_t x_1902; 
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
x_1898 = lean_ctor_get(x_1895, 1);
lean_inc(x_1898);
lean_dec(x_1895);
x_1899 = lean_st_ref_get(x_11, x_1898);
x_1900 = lean_ctor_get(x_1899, 0);
lean_inc(x_1900);
x_1901 = lean_ctor_get(x_1900, 3);
lean_inc(x_1901);
lean_dec(x_1900);
x_1902 = lean_ctor_get_uint8(x_1901, sizeof(void*)*1);
lean_dec(x_1901);
if (x_1902 == 0)
{
uint8_t x_1903; 
lean_dec(x_1773);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1903 = !lean_is_exclusive(x_1899);
if (x_1903 == 0)
{
lean_object* x_1904; 
x_1904 = lean_ctor_get(x_1899, 0);
lean_dec(x_1904);
lean_ctor_set(x_1899, 0, x_3);
return x_1899;
}
else
{
lean_object* x_1905; lean_object* x_1906; 
x_1905 = lean_ctor_get(x_1899, 1);
lean_inc(x_1905);
lean_dec(x_1899);
x_1906 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1906, 0, x_3);
lean_ctor_set(x_1906, 1, x_1905);
return x_1906;
}
}
else
{
lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; uint8_t x_1910; 
x_1907 = lean_ctor_get(x_1899, 1);
lean_inc(x_1907);
lean_dec(x_1899);
lean_inc(x_1773);
x_1908 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1907);
x_1909 = lean_ctor_get(x_1908, 0);
lean_inc(x_1909);
x_1910 = lean_unbox(x_1909);
lean_dec(x_1909);
if (x_1910 == 0)
{
uint8_t x_1911; 
lean_dec(x_1773);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1911 = !lean_is_exclusive(x_1908);
if (x_1911 == 0)
{
lean_object* x_1912; 
x_1912 = lean_ctor_get(x_1908, 0);
lean_dec(x_1912);
lean_ctor_set(x_1908, 0, x_3);
return x_1908;
}
else
{
lean_object* x_1913; lean_object* x_1914; 
x_1913 = lean_ctor_get(x_1908, 1);
lean_inc(x_1913);
lean_dec(x_1908);
x_1914 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1914, 0, x_3);
lean_ctor_set(x_1914, 1, x_1913);
return x_1914;
}
}
else
{
lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; uint8_t x_1919; 
x_1915 = lean_ctor_get(x_1908, 1);
lean_inc(x_1915);
lean_dec(x_1908);
x_1916 = lean_mk_string("could not find below term in the local context");
x_1917 = l_Lean_stringToMessageData(x_1916);
lean_dec(x_1916);
x_1918 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1773, x_1917, x_8, x_9, x_10, x_11, x_1915);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1919 = !lean_is_exclusive(x_1918);
if (x_1919 == 0)
{
lean_object* x_1920; 
x_1920 = lean_ctor_get(x_1918, 0);
lean_dec(x_1920);
lean_ctor_set(x_1918, 0, x_3);
return x_1918;
}
else
{
lean_object* x_1921; lean_object* x_1922; 
x_1921 = lean_ctor_get(x_1918, 1);
lean_inc(x_1921);
lean_dec(x_1918);
x_1922 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1922, 0, x_3);
lean_ctor_set(x_1922, 1, x_1921);
return x_1922;
}
}
}
}
else
{
lean_object* x_1923; lean_object* x_1924; lean_object* x_1925; lean_object* x_1926; uint8_t x_1927; 
x_1923 = lean_ctor_get(x_1895, 1);
lean_inc(x_1923);
lean_dec(x_1895);
x_1924 = lean_st_ref_get(x_11, x_1923);
x_1925 = lean_ctor_get(x_1924, 0);
lean_inc(x_1925);
x_1926 = lean_ctor_get(x_1925, 3);
lean_inc(x_1926);
lean_dec(x_1925);
x_1927 = lean_ctor_get_uint8(x_1926, sizeof(void*)*1);
lean_dec(x_1926);
if (x_1927 == 0)
{
lean_object* x_1928; uint8_t x_1929; 
x_1928 = lean_ctor_get(x_1924, 1);
lean_inc(x_1928);
lean_dec(x_1924);
x_1929 = 0;
x_1774 = x_1929;
x_1775 = x_1928;
goto block_1785;
}
else
{
lean_object* x_1930; lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; uint8_t x_1934; 
x_1930 = lean_ctor_get(x_1924, 1);
lean_inc(x_1930);
lean_dec(x_1924);
lean_inc(x_1773);
x_1931 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_1773, x_8, x_9, x_10, x_11, x_1930);
x_1932 = lean_ctor_get(x_1931, 0);
lean_inc(x_1932);
x_1933 = lean_ctor_get(x_1931, 1);
lean_inc(x_1933);
lean_dec(x_1931);
x_1934 = lean_unbox(x_1932);
lean_dec(x_1932);
x_1774 = x_1934;
x_1775 = x_1933;
goto block_1785;
}
}
}
else
{
uint8_t x_1935; 
lean_dec(x_1773);
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1935 = !lean_is_exclusive(x_1895);
if (x_1935 == 0)
{
lean_object* x_1936; 
x_1936 = lean_ctor_get(x_1895, 0);
lean_dec(x_1936);
lean_ctor_set_tag(x_1895, 0);
lean_ctor_set(x_1895, 0, x_3);
return x_1895;
}
else
{
lean_object* x_1937; lean_object* x_1938; 
x_1937 = lean_ctor_get(x_1895, 1);
lean_inc(x_1937);
lean_dec(x_1895);
x_1938 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1938, 0, x_3);
lean_ctor_set(x_1938, 1, x_1937);
return x_1938;
}
}
}
}
block_1785:
{
if (x_1774 == 0)
{
lean_dec(x_1773);
x_1733 = x_1775;
goto block_1764;
}
else
{
lean_object* x_1776; lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; lean_object* x_1783; lean_object* x_1784; 
x_1776 = lean_mk_string("Found below term in the local context: ");
x_1777 = l_Lean_stringToMessageData(x_1776);
lean_dec(x_1776);
lean_inc(x_1729);
x_1778 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1778, 0, x_1729);
x_1779 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1779, 0, x_1777);
lean_ctor_set(x_1779, 1, x_1778);
x_1780 = lean_mk_string("");
x_1781 = l_Lean_stringToMessageData(x_1780);
lean_dec(x_1780);
x_1782 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1782, 0, x_1779);
lean_ctor_set(x_1782, 1, x_1781);
x_1783 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_1773, x_1782, x_8, x_9, x_10, x_11, x_1775);
x_1784 = lean_ctor_get(x_1783, 1);
lean_inc(x_1784);
lean_dec(x_1783);
x_1733 = x_1784;
goto block_1764;
}
}
}
else
{
uint8_t x_1939; 
lean_dec(x_1732);
lean_dec(x_1731);
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_1939 = !lean_is_exclusive(x_1765);
if (x_1939 == 0)
{
lean_object* x_1940; 
x_1940 = lean_ctor_get(x_1765, 0);
lean_dec(x_1940);
lean_ctor_set_tag(x_1765, 0);
lean_ctor_set(x_1765, 0, x_3);
return x_1765;
}
else
{
lean_object* x_1941; lean_object* x_1942; 
x_1941 = lean_ctor_get(x_1765, 1);
lean_inc(x_1941);
lean_dec(x_1765);
x_1942 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1942, 0, x_3);
lean_ctor_set(x_1942, 1, x_1941);
return x_1942;
}
}
block_1764:
{
lean_object* x_1734; uint8_t x_1735; 
x_1734 = lean_array_get_size(x_1);
x_1735 = lean_nat_dec_lt(x_1709, x_1734);
if (x_1735 == 0)
{
lean_object* x_1736; lean_object* x_1737; lean_object* x_1738; 
lean_dec(x_1734);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1726)) {
 x_1736 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1736 = x_1726;
}
lean_ctor_set(x_1736, 0, x_1729);
lean_ctor_set(x_1736, 1, x_1712);
if (lean_is_scalar(x_1713)) {
 x_1737 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1737 = x_1713;
}
lean_ctor_set(x_1737, 0, x_1736);
if (lean_is_scalar(x_1731)) {
 x_1738 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1738 = x_1731;
}
lean_ctor_set(x_1738, 0, x_1737);
lean_ctor_set(x_1738, 1, x_1733);
return x_1738;
}
else
{
uint8_t x_1739; 
x_1739 = lean_nat_dec_le(x_1734, x_1734);
if (x_1739 == 0)
{
lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; 
lean_dec(x_1734);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1726)) {
 x_1740 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1740 = x_1726;
}
lean_ctor_set(x_1740, 0, x_1729);
lean_ctor_set(x_1740, 1, x_1712);
if (lean_is_scalar(x_1713)) {
 x_1741 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1741 = x_1713;
}
lean_ctor_set(x_1741, 0, x_1740);
if (lean_is_scalar(x_1731)) {
 x_1742 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1742 = x_1731;
}
lean_ctor_set(x_1742, 0, x_1741);
lean_ctor_set(x_1742, 1, x_1733);
return x_1742;
}
else
{
size_t x_1743; size_t x_1744; lean_object* x_1745; 
lean_dec(x_1731);
x_1743 = 0;
x_1744 = lean_usize_of_nat(x_1734);
lean_dec(x_1734);
lean_inc(x_1729);
x_1745 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_1729, x_1, x_1743, x_1744, x_8, x_9, x_10, x_11, x_1733);
if (lean_obj_tag(x_1745) == 0)
{
lean_object* x_1746; uint8_t x_1747; 
x_1746 = lean_ctor_get(x_1745, 0);
lean_inc(x_1746);
x_1747 = lean_unbox(x_1746);
lean_dec(x_1746);
if (x_1747 == 0)
{
uint8_t x_1748; 
lean_dec(x_3);
x_1748 = !lean_is_exclusive(x_1745);
if (x_1748 == 0)
{
lean_object* x_1749; lean_object* x_1750; lean_object* x_1751; 
x_1749 = lean_ctor_get(x_1745, 0);
lean_dec(x_1749);
if (lean_is_scalar(x_1726)) {
 x_1750 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1750 = x_1726;
}
lean_ctor_set(x_1750, 0, x_1729);
lean_ctor_set(x_1750, 1, x_1712);
if (lean_is_scalar(x_1713)) {
 x_1751 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1751 = x_1713;
}
lean_ctor_set(x_1751, 0, x_1750);
lean_ctor_set(x_1745, 0, x_1751);
return x_1745;
}
else
{
lean_object* x_1752; lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; 
x_1752 = lean_ctor_get(x_1745, 1);
lean_inc(x_1752);
lean_dec(x_1745);
if (lean_is_scalar(x_1726)) {
 x_1753 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1753 = x_1726;
}
lean_ctor_set(x_1753, 0, x_1729);
lean_ctor_set(x_1753, 1, x_1712);
if (lean_is_scalar(x_1713)) {
 x_1754 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1754 = x_1713;
}
lean_ctor_set(x_1754, 0, x_1753);
x_1755 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1755, 0, x_1754);
lean_ctor_set(x_1755, 1, x_1752);
return x_1755;
}
}
else
{
uint8_t x_1756; 
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
x_1756 = !lean_is_exclusive(x_1745);
if (x_1756 == 0)
{
lean_object* x_1757; 
x_1757 = lean_ctor_get(x_1745, 0);
lean_dec(x_1757);
lean_ctor_set(x_1745, 0, x_3);
return x_1745;
}
else
{
lean_object* x_1758; lean_object* x_1759; 
x_1758 = lean_ctor_get(x_1745, 1);
lean_inc(x_1758);
lean_dec(x_1745);
x_1759 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1759, 0, x_3);
lean_ctor_set(x_1759, 1, x_1758);
return x_1759;
}
}
}
else
{
uint8_t x_1760; 
lean_dec(x_1729);
lean_dec(x_1726);
lean_dec(x_1713);
lean_dec(x_1712);
x_1760 = !lean_is_exclusive(x_1745);
if (x_1760 == 0)
{
lean_object* x_1761; 
x_1761 = lean_ctor_get(x_1745, 0);
lean_dec(x_1761);
lean_ctor_set_tag(x_1745, 0);
lean_ctor_set(x_1745, 0, x_3);
return x_1745;
}
else
{
lean_object* x_1762; lean_object* x_1763; 
x_1762 = lean_ctor_get(x_1745, 1);
lean_inc(x_1762);
lean_dec(x_1745);
x_1763 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1763, 0, x_3);
lean_ctor_set(x_1763, 1, x_1762);
return x_1763;
}
}
}
}
}
}
else
{
uint8_t x_1943; 
lean_dec(x_1713);
lean_dec(x_1712);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_1943 = !lean_is_exclusive(x_1722);
if (x_1943 == 0)
{
return x_1722;
}
else
{
lean_object* x_1944; lean_object* x_1945; lean_object* x_1946; 
x_1944 = lean_ctor_get(x_1722, 0);
x_1945 = lean_ctor_get(x_1722, 1);
lean_inc(x_1945);
lean_inc(x_1944);
lean_dec(x_1722);
x_1946 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1946, 0, x_1944);
lean_ctor_set(x_1946, 1, x_1945);
return x_1946;
}
}
}
}
}
}
case 9:
{
lean_object* x_1947; 
lean_dec(x_7);
lean_dec(x_6);
x_1947 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_1947) == 0)
{
lean_object* x_1948; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1948 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1948, 0, x_3);
lean_ctor_set(x_1948, 1, x_12);
return x_1948;
}
else
{
lean_object* x_1949; lean_object* x_1950; lean_object* x_1951; 
x_1949 = lean_ctor_get(x_1947, 0);
lean_inc(x_1949);
lean_dec(x_1947);
x_1950 = lean_unsigned_to_nat(0u);
x_1951 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_1950);
if (lean_obj_tag(x_1951) == 0)
{
lean_object* x_1952; 
lean_dec(x_1949);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1952 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1952, 0, x_3);
lean_ctor_set(x_1952, 1, x_12);
return x_1952;
}
else
{
lean_object* x_1953; lean_object* x_1954; lean_object* x_1955; lean_object* x_1956; uint8_t x_1957; 
x_1953 = lean_ctor_get(x_1951, 0);
lean_inc(x_1953);
if (lean_is_exclusive(x_1951)) {
 lean_ctor_release(x_1951, 0);
 x_1954 = x_1951;
} else {
 lean_dec_ref(x_1951);
 x_1954 = lean_box(0);
}
x_1955 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_1949, x_8, x_9, x_10, x_11, x_12);
x_1956 = lean_ctor_get(x_1955, 0);
lean_inc(x_1956);
x_1957 = lean_unbox(x_1956);
lean_dec(x_1956);
if (x_1957 == 0)
{
uint8_t x_1958; 
lean_dec(x_1954);
lean_dec(x_1953);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_1958 = !lean_is_exclusive(x_1955);
if (x_1958 == 0)
{
lean_object* x_1959; 
x_1959 = lean_ctor_get(x_1955, 0);
lean_dec(x_1959);
lean_ctor_set(x_1955, 0, x_3);
return x_1955;
}
else
{
lean_object* x_1960; lean_object* x_1961; 
x_1960 = lean_ctor_get(x_1955, 1);
lean_inc(x_1960);
lean_dec(x_1955);
x_1961 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1961, 0, x_3);
lean_ctor_set(x_1961, 1, x_1960);
return x_1961;
}
}
else
{
lean_object* x_1962; lean_object* x_1963; 
x_1962 = lean_ctor_get(x_1955, 1);
lean_inc(x_1962);
lean_dec(x_1955);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_1963 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_1953, x_8, x_9, x_10, x_11, x_1962);
if (lean_obj_tag(x_1963) == 0)
{
lean_object* x_1964; lean_object* x_1965; lean_object* x_1966; lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; lean_object* x_2006; 
x_1964 = lean_ctor_get(x_1963, 0);
lean_inc(x_1964);
x_1965 = lean_ctor_get(x_1963, 1);
lean_inc(x_1965);
lean_dec(x_1963);
x_1966 = lean_ctor_get(x_1964, 1);
lean_inc(x_1966);
if (lean_is_exclusive(x_1964)) {
 lean_ctor_release(x_1964, 0);
 lean_ctor_release(x_1964, 1);
 x_1967 = x_1964;
} else {
 lean_dec_ref(x_1964);
 x_1967 = lean_box(0);
}
x_1968 = lean_box(0);
lean_inc(x_8);
x_1969 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_1966, x_1968, x_8, x_9, x_10, x_11, x_1965);
x_1970 = lean_ctor_get(x_1969, 0);
lean_inc(x_1970);
x_1971 = lean_ctor_get(x_1969, 1);
lean_inc(x_1971);
if (lean_is_exclusive(x_1969)) {
 lean_ctor_release(x_1969, 0);
 lean_ctor_release(x_1969, 1);
 x_1972 = x_1969;
} else {
 lean_dec_ref(x_1969);
 x_1972 = lean_box(0);
}
x_1973 = l_Lean_Expr_mvarId_x21(x_1970);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2006 = l_Lean_Meta_ppGoal(x_1973, x_8, x_9, x_10, x_11, x_1971);
if (lean_obj_tag(x_2006) == 0)
{
lean_object* x_2007; lean_object* x_2008; lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; lean_object* x_2014; uint8_t x_2015; lean_object* x_2016; lean_object* x_2027; lean_object* x_2028; lean_object* x_2029; uint8_t x_2030; 
x_2007 = lean_ctor_get(x_2006, 0);
lean_inc(x_2007);
x_2008 = lean_ctor_get(x_2006, 1);
lean_inc(x_2008);
lean_dec(x_2006);
x_2009 = lean_mk_string("Meta");
x_2010 = lean_name_mk_string(x_1968, x_2009);
x_2011 = lean_mk_string("IndPredBelow");
x_2012 = lean_name_mk_string(x_2010, x_2011);
x_2013 = lean_mk_string("match");
x_2014 = lean_name_mk_string(x_2012, x_2013);
x_2027 = lean_st_ref_get(x_11, x_2008);
x_2028 = lean_ctor_get(x_2027, 0);
lean_inc(x_2028);
x_2029 = lean_ctor_get(x_2028, 3);
lean_inc(x_2029);
lean_dec(x_2028);
x_2030 = lean_ctor_get_uint8(x_2029, sizeof(void*)*1);
lean_dec(x_2029);
if (x_2030 == 0)
{
lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; 
lean_dec(x_2007);
x_2031 = lean_ctor_get(x_2027, 1);
lean_inc(x_2031);
lean_dec(x_2027);
x_2032 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2033 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1973, x_2032, x_8, x_9, x_10, x_11, x_2031);
if (lean_obj_tag(x_2033) == 0)
{
lean_object* x_2034; uint8_t x_2035; 
x_2034 = lean_ctor_get(x_2033, 0);
lean_inc(x_2034);
x_2035 = lean_unbox(x_2034);
lean_dec(x_2034);
if (x_2035 == 0)
{
lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; lean_object* x_2039; uint8_t x_2040; 
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
x_2036 = lean_ctor_get(x_2033, 1);
lean_inc(x_2036);
lean_dec(x_2033);
x_2037 = lean_st_ref_get(x_11, x_2036);
x_2038 = lean_ctor_get(x_2037, 0);
lean_inc(x_2038);
x_2039 = lean_ctor_get(x_2038, 3);
lean_inc(x_2039);
lean_dec(x_2038);
x_2040 = lean_ctor_get_uint8(x_2039, sizeof(void*)*1);
lean_dec(x_2039);
if (x_2040 == 0)
{
uint8_t x_2041; 
lean_dec(x_2014);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2041 = !lean_is_exclusive(x_2037);
if (x_2041 == 0)
{
lean_object* x_2042; 
x_2042 = lean_ctor_get(x_2037, 0);
lean_dec(x_2042);
lean_ctor_set(x_2037, 0, x_3);
return x_2037;
}
else
{
lean_object* x_2043; lean_object* x_2044; 
x_2043 = lean_ctor_get(x_2037, 1);
lean_inc(x_2043);
lean_dec(x_2037);
x_2044 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2044, 0, x_3);
lean_ctor_set(x_2044, 1, x_2043);
return x_2044;
}
}
else
{
lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; uint8_t x_2048; 
x_2045 = lean_ctor_get(x_2037, 1);
lean_inc(x_2045);
lean_dec(x_2037);
lean_inc(x_2014);
x_2046 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2045);
x_2047 = lean_ctor_get(x_2046, 0);
lean_inc(x_2047);
x_2048 = lean_unbox(x_2047);
lean_dec(x_2047);
if (x_2048 == 0)
{
uint8_t x_2049; 
lean_dec(x_2014);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2049 = !lean_is_exclusive(x_2046);
if (x_2049 == 0)
{
lean_object* x_2050; 
x_2050 = lean_ctor_get(x_2046, 0);
lean_dec(x_2050);
lean_ctor_set(x_2046, 0, x_3);
return x_2046;
}
else
{
lean_object* x_2051; lean_object* x_2052; 
x_2051 = lean_ctor_get(x_2046, 1);
lean_inc(x_2051);
lean_dec(x_2046);
x_2052 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2052, 0, x_3);
lean_ctor_set(x_2052, 1, x_2051);
return x_2052;
}
}
else
{
lean_object* x_2053; lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; uint8_t x_2057; 
x_2053 = lean_ctor_get(x_2046, 1);
lean_inc(x_2053);
lean_dec(x_2046);
x_2054 = lean_mk_string("could not find below term in the local context");
x_2055 = l_Lean_stringToMessageData(x_2054);
lean_dec(x_2054);
x_2056 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2014, x_2055, x_8, x_9, x_10, x_11, x_2053);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2057 = !lean_is_exclusive(x_2056);
if (x_2057 == 0)
{
lean_object* x_2058; 
x_2058 = lean_ctor_get(x_2056, 0);
lean_dec(x_2058);
lean_ctor_set(x_2056, 0, x_3);
return x_2056;
}
else
{
lean_object* x_2059; lean_object* x_2060; 
x_2059 = lean_ctor_get(x_2056, 1);
lean_inc(x_2059);
lean_dec(x_2056);
x_2060 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2060, 0, x_3);
lean_ctor_set(x_2060, 1, x_2059);
return x_2060;
}
}
}
}
else
{
lean_object* x_2061; lean_object* x_2062; lean_object* x_2063; lean_object* x_2064; uint8_t x_2065; 
x_2061 = lean_ctor_get(x_2033, 1);
lean_inc(x_2061);
lean_dec(x_2033);
x_2062 = lean_st_ref_get(x_11, x_2061);
x_2063 = lean_ctor_get(x_2062, 0);
lean_inc(x_2063);
x_2064 = lean_ctor_get(x_2063, 3);
lean_inc(x_2064);
lean_dec(x_2063);
x_2065 = lean_ctor_get_uint8(x_2064, sizeof(void*)*1);
lean_dec(x_2064);
if (x_2065 == 0)
{
lean_object* x_2066; uint8_t x_2067; 
x_2066 = lean_ctor_get(x_2062, 1);
lean_inc(x_2066);
lean_dec(x_2062);
x_2067 = 0;
x_2015 = x_2067;
x_2016 = x_2066;
goto block_2026;
}
else
{
lean_object* x_2068; lean_object* x_2069; lean_object* x_2070; lean_object* x_2071; uint8_t x_2072; 
x_2068 = lean_ctor_get(x_2062, 1);
lean_inc(x_2068);
lean_dec(x_2062);
lean_inc(x_2014);
x_2069 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2068);
x_2070 = lean_ctor_get(x_2069, 0);
lean_inc(x_2070);
x_2071 = lean_ctor_get(x_2069, 1);
lean_inc(x_2071);
lean_dec(x_2069);
x_2072 = lean_unbox(x_2070);
lean_dec(x_2070);
x_2015 = x_2072;
x_2016 = x_2071;
goto block_2026;
}
}
}
else
{
uint8_t x_2073; 
lean_dec(x_2014);
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2073 = !lean_is_exclusive(x_2033);
if (x_2073 == 0)
{
lean_object* x_2074; 
x_2074 = lean_ctor_get(x_2033, 0);
lean_dec(x_2074);
lean_ctor_set_tag(x_2033, 0);
lean_ctor_set(x_2033, 0, x_3);
return x_2033;
}
else
{
lean_object* x_2075; lean_object* x_2076; 
x_2075 = lean_ctor_get(x_2033, 1);
lean_inc(x_2075);
lean_dec(x_2033);
x_2076 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2076, 0, x_3);
lean_ctor_set(x_2076, 1, x_2075);
return x_2076;
}
}
}
else
{
lean_object* x_2077; lean_object* x_2078; lean_object* x_2079; uint8_t x_2080; 
x_2077 = lean_ctor_get(x_2027, 1);
lean_inc(x_2077);
lean_dec(x_2027);
lean_inc(x_2014);
x_2078 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2077);
x_2079 = lean_ctor_get(x_2078, 0);
lean_inc(x_2079);
x_2080 = lean_unbox(x_2079);
lean_dec(x_2079);
if (x_2080 == 0)
{
lean_object* x_2081; lean_object* x_2082; lean_object* x_2083; 
lean_dec(x_2007);
x_2081 = lean_ctor_get(x_2078, 1);
lean_inc(x_2081);
lean_dec(x_2078);
x_2082 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2083 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1973, x_2082, x_8, x_9, x_10, x_11, x_2081);
if (lean_obj_tag(x_2083) == 0)
{
lean_object* x_2084; uint8_t x_2085; 
x_2084 = lean_ctor_get(x_2083, 0);
lean_inc(x_2084);
x_2085 = lean_unbox(x_2084);
lean_dec(x_2084);
if (x_2085 == 0)
{
lean_object* x_2086; lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; uint8_t x_2090; 
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
x_2086 = lean_ctor_get(x_2083, 1);
lean_inc(x_2086);
lean_dec(x_2083);
x_2087 = lean_st_ref_get(x_11, x_2086);
x_2088 = lean_ctor_get(x_2087, 0);
lean_inc(x_2088);
x_2089 = lean_ctor_get(x_2088, 3);
lean_inc(x_2089);
lean_dec(x_2088);
x_2090 = lean_ctor_get_uint8(x_2089, sizeof(void*)*1);
lean_dec(x_2089);
if (x_2090 == 0)
{
uint8_t x_2091; 
lean_dec(x_2014);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2091 = !lean_is_exclusive(x_2087);
if (x_2091 == 0)
{
lean_object* x_2092; 
x_2092 = lean_ctor_get(x_2087, 0);
lean_dec(x_2092);
lean_ctor_set(x_2087, 0, x_3);
return x_2087;
}
else
{
lean_object* x_2093; lean_object* x_2094; 
x_2093 = lean_ctor_get(x_2087, 1);
lean_inc(x_2093);
lean_dec(x_2087);
x_2094 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2094, 0, x_3);
lean_ctor_set(x_2094, 1, x_2093);
return x_2094;
}
}
else
{
lean_object* x_2095; lean_object* x_2096; lean_object* x_2097; uint8_t x_2098; 
x_2095 = lean_ctor_get(x_2087, 1);
lean_inc(x_2095);
lean_dec(x_2087);
lean_inc(x_2014);
x_2096 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2095);
x_2097 = lean_ctor_get(x_2096, 0);
lean_inc(x_2097);
x_2098 = lean_unbox(x_2097);
lean_dec(x_2097);
if (x_2098 == 0)
{
uint8_t x_2099; 
lean_dec(x_2014);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2099 = !lean_is_exclusive(x_2096);
if (x_2099 == 0)
{
lean_object* x_2100; 
x_2100 = lean_ctor_get(x_2096, 0);
lean_dec(x_2100);
lean_ctor_set(x_2096, 0, x_3);
return x_2096;
}
else
{
lean_object* x_2101; lean_object* x_2102; 
x_2101 = lean_ctor_get(x_2096, 1);
lean_inc(x_2101);
lean_dec(x_2096);
x_2102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2102, 0, x_3);
lean_ctor_set(x_2102, 1, x_2101);
return x_2102;
}
}
else
{
lean_object* x_2103; lean_object* x_2104; lean_object* x_2105; lean_object* x_2106; uint8_t x_2107; 
x_2103 = lean_ctor_get(x_2096, 1);
lean_inc(x_2103);
lean_dec(x_2096);
x_2104 = lean_mk_string("could not find below term in the local context");
x_2105 = l_Lean_stringToMessageData(x_2104);
lean_dec(x_2104);
x_2106 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2014, x_2105, x_8, x_9, x_10, x_11, x_2103);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2107 = !lean_is_exclusive(x_2106);
if (x_2107 == 0)
{
lean_object* x_2108; 
x_2108 = lean_ctor_get(x_2106, 0);
lean_dec(x_2108);
lean_ctor_set(x_2106, 0, x_3);
return x_2106;
}
else
{
lean_object* x_2109; lean_object* x_2110; 
x_2109 = lean_ctor_get(x_2106, 1);
lean_inc(x_2109);
lean_dec(x_2106);
x_2110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2110, 0, x_3);
lean_ctor_set(x_2110, 1, x_2109);
return x_2110;
}
}
}
}
else
{
lean_object* x_2111; lean_object* x_2112; lean_object* x_2113; lean_object* x_2114; uint8_t x_2115; 
x_2111 = lean_ctor_get(x_2083, 1);
lean_inc(x_2111);
lean_dec(x_2083);
x_2112 = lean_st_ref_get(x_11, x_2111);
x_2113 = lean_ctor_get(x_2112, 0);
lean_inc(x_2113);
x_2114 = lean_ctor_get(x_2113, 3);
lean_inc(x_2114);
lean_dec(x_2113);
x_2115 = lean_ctor_get_uint8(x_2114, sizeof(void*)*1);
lean_dec(x_2114);
if (x_2115 == 0)
{
lean_object* x_2116; uint8_t x_2117; 
x_2116 = lean_ctor_get(x_2112, 1);
lean_inc(x_2116);
lean_dec(x_2112);
x_2117 = 0;
x_2015 = x_2117;
x_2016 = x_2116;
goto block_2026;
}
else
{
lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; lean_object* x_2121; uint8_t x_2122; 
x_2118 = lean_ctor_get(x_2112, 1);
lean_inc(x_2118);
lean_dec(x_2112);
lean_inc(x_2014);
x_2119 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2118);
x_2120 = lean_ctor_get(x_2119, 0);
lean_inc(x_2120);
x_2121 = lean_ctor_get(x_2119, 1);
lean_inc(x_2121);
lean_dec(x_2119);
x_2122 = lean_unbox(x_2120);
lean_dec(x_2120);
x_2015 = x_2122;
x_2016 = x_2121;
goto block_2026;
}
}
}
else
{
uint8_t x_2123; 
lean_dec(x_2014);
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2123 = !lean_is_exclusive(x_2083);
if (x_2123 == 0)
{
lean_object* x_2124; 
x_2124 = lean_ctor_get(x_2083, 0);
lean_dec(x_2124);
lean_ctor_set_tag(x_2083, 0);
lean_ctor_set(x_2083, 0, x_3);
return x_2083;
}
else
{
lean_object* x_2125; lean_object* x_2126; 
x_2125 = lean_ctor_get(x_2083, 1);
lean_inc(x_2125);
lean_dec(x_2083);
x_2126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2126, 0, x_3);
lean_ctor_set(x_2126, 1, x_2125);
return x_2126;
}
}
}
else
{
lean_object* x_2127; lean_object* x_2128; lean_object* x_2129; lean_object* x_2130; lean_object* x_2131; lean_object* x_2132; lean_object* x_2133; lean_object* x_2134; lean_object* x_2135; lean_object* x_2136; 
x_2127 = lean_ctor_get(x_2078, 1);
lean_inc(x_2127);
lean_dec(x_2078);
x_2128 = lean_mk_string("");
x_2129 = l_Lean_stringToMessageData(x_2128);
lean_dec(x_2128);
x_2130 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2130, 0, x_2007);
lean_inc(x_2129);
x_2131 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2131, 0, x_2129);
lean_ctor_set(x_2131, 1, x_2130);
x_2132 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2132, 0, x_2131);
lean_ctor_set(x_2132, 1, x_2129);
lean_inc(x_2014);
x_2133 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2014, x_2132, x_8, x_9, x_10, x_11, x_2127);
x_2134 = lean_ctor_get(x_2133, 1);
lean_inc(x_2134);
lean_dec(x_2133);
x_2135 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2136 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_1973, x_2135, x_8, x_9, x_10, x_11, x_2134);
if (lean_obj_tag(x_2136) == 0)
{
lean_object* x_2137; uint8_t x_2138; 
x_2137 = lean_ctor_get(x_2136, 0);
lean_inc(x_2137);
x_2138 = lean_unbox(x_2137);
lean_dec(x_2137);
if (x_2138 == 0)
{
lean_object* x_2139; lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; uint8_t x_2143; 
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
x_2139 = lean_ctor_get(x_2136, 1);
lean_inc(x_2139);
lean_dec(x_2136);
x_2140 = lean_st_ref_get(x_11, x_2139);
x_2141 = lean_ctor_get(x_2140, 0);
lean_inc(x_2141);
x_2142 = lean_ctor_get(x_2141, 3);
lean_inc(x_2142);
lean_dec(x_2141);
x_2143 = lean_ctor_get_uint8(x_2142, sizeof(void*)*1);
lean_dec(x_2142);
if (x_2143 == 0)
{
uint8_t x_2144; 
lean_dec(x_2014);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2144 = !lean_is_exclusive(x_2140);
if (x_2144 == 0)
{
lean_object* x_2145; 
x_2145 = lean_ctor_get(x_2140, 0);
lean_dec(x_2145);
lean_ctor_set(x_2140, 0, x_3);
return x_2140;
}
else
{
lean_object* x_2146; lean_object* x_2147; 
x_2146 = lean_ctor_get(x_2140, 1);
lean_inc(x_2146);
lean_dec(x_2140);
x_2147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2147, 0, x_3);
lean_ctor_set(x_2147, 1, x_2146);
return x_2147;
}
}
else
{
lean_object* x_2148; lean_object* x_2149; lean_object* x_2150; uint8_t x_2151; 
x_2148 = lean_ctor_get(x_2140, 1);
lean_inc(x_2148);
lean_dec(x_2140);
lean_inc(x_2014);
x_2149 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2148);
x_2150 = lean_ctor_get(x_2149, 0);
lean_inc(x_2150);
x_2151 = lean_unbox(x_2150);
lean_dec(x_2150);
if (x_2151 == 0)
{
uint8_t x_2152; 
lean_dec(x_2014);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2152 = !lean_is_exclusive(x_2149);
if (x_2152 == 0)
{
lean_object* x_2153; 
x_2153 = lean_ctor_get(x_2149, 0);
lean_dec(x_2153);
lean_ctor_set(x_2149, 0, x_3);
return x_2149;
}
else
{
lean_object* x_2154; lean_object* x_2155; 
x_2154 = lean_ctor_get(x_2149, 1);
lean_inc(x_2154);
lean_dec(x_2149);
x_2155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2155, 0, x_3);
lean_ctor_set(x_2155, 1, x_2154);
return x_2155;
}
}
else
{
lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; uint8_t x_2160; 
x_2156 = lean_ctor_get(x_2149, 1);
lean_inc(x_2156);
lean_dec(x_2149);
x_2157 = lean_mk_string("could not find below term in the local context");
x_2158 = l_Lean_stringToMessageData(x_2157);
lean_dec(x_2157);
x_2159 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2014, x_2158, x_8, x_9, x_10, x_11, x_2156);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2160 = !lean_is_exclusive(x_2159);
if (x_2160 == 0)
{
lean_object* x_2161; 
x_2161 = lean_ctor_get(x_2159, 0);
lean_dec(x_2161);
lean_ctor_set(x_2159, 0, x_3);
return x_2159;
}
else
{
lean_object* x_2162; lean_object* x_2163; 
x_2162 = lean_ctor_get(x_2159, 1);
lean_inc(x_2162);
lean_dec(x_2159);
x_2163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2163, 0, x_3);
lean_ctor_set(x_2163, 1, x_2162);
return x_2163;
}
}
}
}
else
{
lean_object* x_2164; lean_object* x_2165; lean_object* x_2166; lean_object* x_2167; uint8_t x_2168; 
x_2164 = lean_ctor_get(x_2136, 1);
lean_inc(x_2164);
lean_dec(x_2136);
x_2165 = lean_st_ref_get(x_11, x_2164);
x_2166 = lean_ctor_get(x_2165, 0);
lean_inc(x_2166);
x_2167 = lean_ctor_get(x_2166, 3);
lean_inc(x_2167);
lean_dec(x_2166);
x_2168 = lean_ctor_get_uint8(x_2167, sizeof(void*)*1);
lean_dec(x_2167);
if (x_2168 == 0)
{
lean_object* x_2169; uint8_t x_2170; 
x_2169 = lean_ctor_get(x_2165, 1);
lean_inc(x_2169);
lean_dec(x_2165);
x_2170 = 0;
x_2015 = x_2170;
x_2016 = x_2169;
goto block_2026;
}
else
{
lean_object* x_2171; lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; uint8_t x_2175; 
x_2171 = lean_ctor_get(x_2165, 1);
lean_inc(x_2171);
lean_dec(x_2165);
lean_inc(x_2014);
x_2172 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2014, x_8, x_9, x_10, x_11, x_2171);
x_2173 = lean_ctor_get(x_2172, 0);
lean_inc(x_2173);
x_2174 = lean_ctor_get(x_2172, 1);
lean_inc(x_2174);
lean_dec(x_2172);
x_2175 = lean_unbox(x_2173);
lean_dec(x_2173);
x_2015 = x_2175;
x_2016 = x_2174;
goto block_2026;
}
}
}
else
{
uint8_t x_2176; 
lean_dec(x_2014);
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2176 = !lean_is_exclusive(x_2136);
if (x_2176 == 0)
{
lean_object* x_2177; 
x_2177 = lean_ctor_get(x_2136, 0);
lean_dec(x_2177);
lean_ctor_set_tag(x_2136, 0);
lean_ctor_set(x_2136, 0, x_3);
return x_2136;
}
else
{
lean_object* x_2178; lean_object* x_2179; 
x_2178 = lean_ctor_get(x_2136, 1);
lean_inc(x_2178);
lean_dec(x_2136);
x_2179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2179, 0, x_3);
lean_ctor_set(x_2179, 1, x_2178);
return x_2179;
}
}
}
}
block_2026:
{
if (x_2015 == 0)
{
lean_dec(x_2014);
x_1974 = x_2016;
goto block_2005;
}
else
{
lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; lean_object* x_2023; lean_object* x_2024; lean_object* x_2025; 
x_2017 = lean_mk_string("Found below term in the local context: ");
x_2018 = l_Lean_stringToMessageData(x_2017);
lean_dec(x_2017);
lean_inc(x_1970);
x_2019 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2019, 0, x_1970);
x_2020 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2020, 0, x_2018);
lean_ctor_set(x_2020, 1, x_2019);
x_2021 = lean_mk_string("");
x_2022 = l_Lean_stringToMessageData(x_2021);
lean_dec(x_2021);
x_2023 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2023, 0, x_2020);
lean_ctor_set(x_2023, 1, x_2022);
x_2024 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2014, x_2023, x_8, x_9, x_10, x_11, x_2016);
x_2025 = lean_ctor_get(x_2024, 1);
lean_inc(x_2025);
lean_dec(x_2024);
x_1974 = x_2025;
goto block_2005;
}
}
}
else
{
uint8_t x_2180; 
lean_dec(x_1973);
lean_dec(x_1972);
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2180 = !lean_is_exclusive(x_2006);
if (x_2180 == 0)
{
lean_object* x_2181; 
x_2181 = lean_ctor_get(x_2006, 0);
lean_dec(x_2181);
lean_ctor_set_tag(x_2006, 0);
lean_ctor_set(x_2006, 0, x_3);
return x_2006;
}
else
{
lean_object* x_2182; lean_object* x_2183; 
x_2182 = lean_ctor_get(x_2006, 1);
lean_inc(x_2182);
lean_dec(x_2006);
x_2183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2183, 0, x_3);
lean_ctor_set(x_2183, 1, x_2182);
return x_2183;
}
}
block_2005:
{
lean_object* x_1975; uint8_t x_1976; 
x_1975 = lean_array_get_size(x_1);
x_1976 = lean_nat_dec_lt(x_1950, x_1975);
if (x_1976 == 0)
{
lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; 
lean_dec(x_1975);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1967)) {
 x_1977 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1977 = x_1967;
}
lean_ctor_set(x_1977, 0, x_1970);
lean_ctor_set(x_1977, 1, x_1953);
if (lean_is_scalar(x_1954)) {
 x_1978 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1978 = x_1954;
}
lean_ctor_set(x_1978, 0, x_1977);
if (lean_is_scalar(x_1972)) {
 x_1979 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1979 = x_1972;
}
lean_ctor_set(x_1979, 0, x_1978);
lean_ctor_set(x_1979, 1, x_1974);
return x_1979;
}
else
{
uint8_t x_1980; 
x_1980 = lean_nat_dec_le(x_1975, x_1975);
if (x_1980 == 0)
{
lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; 
lean_dec(x_1975);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_1967)) {
 x_1981 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1981 = x_1967;
}
lean_ctor_set(x_1981, 0, x_1970);
lean_ctor_set(x_1981, 1, x_1953);
if (lean_is_scalar(x_1954)) {
 x_1982 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1982 = x_1954;
}
lean_ctor_set(x_1982, 0, x_1981);
if (lean_is_scalar(x_1972)) {
 x_1983 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1983 = x_1972;
}
lean_ctor_set(x_1983, 0, x_1982);
lean_ctor_set(x_1983, 1, x_1974);
return x_1983;
}
else
{
size_t x_1984; size_t x_1985; lean_object* x_1986; 
lean_dec(x_1972);
x_1984 = 0;
x_1985 = lean_usize_of_nat(x_1975);
lean_dec(x_1975);
lean_inc(x_1970);
x_1986 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_1970, x_1, x_1984, x_1985, x_8, x_9, x_10, x_11, x_1974);
if (lean_obj_tag(x_1986) == 0)
{
lean_object* x_1987; uint8_t x_1988; 
x_1987 = lean_ctor_get(x_1986, 0);
lean_inc(x_1987);
x_1988 = lean_unbox(x_1987);
lean_dec(x_1987);
if (x_1988 == 0)
{
uint8_t x_1989; 
lean_dec(x_3);
x_1989 = !lean_is_exclusive(x_1986);
if (x_1989 == 0)
{
lean_object* x_1990; lean_object* x_1991; lean_object* x_1992; 
x_1990 = lean_ctor_get(x_1986, 0);
lean_dec(x_1990);
if (lean_is_scalar(x_1967)) {
 x_1991 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1991 = x_1967;
}
lean_ctor_set(x_1991, 0, x_1970);
lean_ctor_set(x_1991, 1, x_1953);
if (lean_is_scalar(x_1954)) {
 x_1992 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1992 = x_1954;
}
lean_ctor_set(x_1992, 0, x_1991);
lean_ctor_set(x_1986, 0, x_1992);
return x_1986;
}
else
{
lean_object* x_1993; lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; 
x_1993 = lean_ctor_get(x_1986, 1);
lean_inc(x_1993);
lean_dec(x_1986);
if (lean_is_scalar(x_1967)) {
 x_1994 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1994 = x_1967;
}
lean_ctor_set(x_1994, 0, x_1970);
lean_ctor_set(x_1994, 1, x_1953);
if (lean_is_scalar(x_1954)) {
 x_1995 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1995 = x_1954;
}
lean_ctor_set(x_1995, 0, x_1994);
x_1996 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1996, 0, x_1995);
lean_ctor_set(x_1996, 1, x_1993);
return x_1996;
}
}
else
{
uint8_t x_1997; 
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
x_1997 = !lean_is_exclusive(x_1986);
if (x_1997 == 0)
{
lean_object* x_1998; 
x_1998 = lean_ctor_get(x_1986, 0);
lean_dec(x_1998);
lean_ctor_set(x_1986, 0, x_3);
return x_1986;
}
else
{
lean_object* x_1999; lean_object* x_2000; 
x_1999 = lean_ctor_get(x_1986, 1);
lean_inc(x_1999);
lean_dec(x_1986);
x_2000 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2000, 0, x_3);
lean_ctor_set(x_2000, 1, x_1999);
return x_2000;
}
}
}
else
{
uint8_t x_2001; 
lean_dec(x_1970);
lean_dec(x_1967);
lean_dec(x_1954);
lean_dec(x_1953);
x_2001 = !lean_is_exclusive(x_1986);
if (x_2001 == 0)
{
lean_object* x_2002; 
x_2002 = lean_ctor_get(x_1986, 0);
lean_dec(x_2002);
lean_ctor_set_tag(x_1986, 0);
lean_ctor_set(x_1986, 0, x_3);
return x_1986;
}
else
{
lean_object* x_2003; lean_object* x_2004; 
x_2003 = lean_ctor_get(x_1986, 1);
lean_inc(x_2003);
lean_dec(x_1986);
x_2004 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2004, 0, x_3);
lean_ctor_set(x_2004, 1, x_2003);
return x_2004;
}
}
}
}
}
}
else
{
uint8_t x_2184; 
lean_dec(x_1954);
lean_dec(x_1953);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_2184 = !lean_is_exclusive(x_1963);
if (x_2184 == 0)
{
return x_1963;
}
else
{
lean_object* x_2185; lean_object* x_2186; lean_object* x_2187; 
x_2185 = lean_ctor_get(x_1963, 0);
x_2186 = lean_ctor_get(x_1963, 1);
lean_inc(x_2186);
lean_inc(x_2185);
lean_dec(x_1963);
x_2187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2187, 0, x_2185);
lean_ctor_set(x_2187, 1, x_2186);
return x_2187;
}
}
}
}
}
}
case 10:
{
lean_object* x_2188; 
lean_dec(x_7);
lean_dec(x_6);
x_2188 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_2188) == 0)
{
lean_object* x_2189; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_2189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2189, 0, x_3);
lean_ctor_set(x_2189, 1, x_12);
return x_2189;
}
else
{
lean_object* x_2190; lean_object* x_2191; lean_object* x_2192; 
x_2190 = lean_ctor_get(x_2188, 0);
lean_inc(x_2190);
lean_dec(x_2188);
x_2191 = lean_unsigned_to_nat(0u);
x_2192 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_2191);
if (lean_obj_tag(x_2192) == 0)
{
lean_object* x_2193; 
lean_dec(x_2190);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_2193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2193, 0, x_3);
lean_ctor_set(x_2193, 1, x_12);
return x_2193;
}
else
{
lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; uint8_t x_2198; 
x_2194 = lean_ctor_get(x_2192, 0);
lean_inc(x_2194);
if (lean_is_exclusive(x_2192)) {
 lean_ctor_release(x_2192, 0);
 x_2195 = x_2192;
} else {
 lean_dec_ref(x_2192);
 x_2195 = lean_box(0);
}
x_2196 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_2190, x_8, x_9, x_10, x_11, x_12);
x_2197 = lean_ctor_get(x_2196, 0);
lean_inc(x_2197);
x_2198 = lean_unbox(x_2197);
lean_dec(x_2197);
if (x_2198 == 0)
{
uint8_t x_2199; 
lean_dec(x_2195);
lean_dec(x_2194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_2199 = !lean_is_exclusive(x_2196);
if (x_2199 == 0)
{
lean_object* x_2200; 
x_2200 = lean_ctor_get(x_2196, 0);
lean_dec(x_2200);
lean_ctor_set(x_2196, 0, x_3);
return x_2196;
}
else
{
lean_object* x_2201; lean_object* x_2202; 
x_2201 = lean_ctor_get(x_2196, 1);
lean_inc(x_2201);
lean_dec(x_2196);
x_2202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2202, 0, x_3);
lean_ctor_set(x_2202, 1, x_2201);
return x_2202;
}
}
else
{
lean_object* x_2203; lean_object* x_2204; 
x_2203 = lean_ctor_get(x_2196, 1);
lean_inc(x_2203);
lean_dec(x_2196);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2204 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_2194, x_8, x_9, x_10, x_11, x_2203);
if (lean_obj_tag(x_2204) == 0)
{
lean_object* x_2205; lean_object* x_2206; lean_object* x_2207; lean_object* x_2208; lean_object* x_2209; lean_object* x_2210; lean_object* x_2211; lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2247; 
x_2205 = lean_ctor_get(x_2204, 0);
lean_inc(x_2205);
x_2206 = lean_ctor_get(x_2204, 1);
lean_inc(x_2206);
lean_dec(x_2204);
x_2207 = lean_ctor_get(x_2205, 1);
lean_inc(x_2207);
if (lean_is_exclusive(x_2205)) {
 lean_ctor_release(x_2205, 0);
 lean_ctor_release(x_2205, 1);
 x_2208 = x_2205;
} else {
 lean_dec_ref(x_2205);
 x_2208 = lean_box(0);
}
x_2209 = lean_box(0);
lean_inc(x_8);
x_2210 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_2207, x_2209, x_8, x_9, x_10, x_11, x_2206);
x_2211 = lean_ctor_get(x_2210, 0);
lean_inc(x_2211);
x_2212 = lean_ctor_get(x_2210, 1);
lean_inc(x_2212);
if (lean_is_exclusive(x_2210)) {
 lean_ctor_release(x_2210, 0);
 lean_ctor_release(x_2210, 1);
 x_2213 = x_2210;
} else {
 lean_dec_ref(x_2210);
 x_2213 = lean_box(0);
}
x_2214 = l_Lean_Expr_mvarId_x21(x_2211);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2247 = l_Lean_Meta_ppGoal(x_2214, x_8, x_9, x_10, x_11, x_2212);
if (lean_obj_tag(x_2247) == 0)
{
lean_object* x_2248; lean_object* x_2249; lean_object* x_2250; lean_object* x_2251; lean_object* x_2252; lean_object* x_2253; lean_object* x_2254; lean_object* x_2255; uint8_t x_2256; lean_object* x_2257; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; uint8_t x_2271; 
x_2248 = lean_ctor_get(x_2247, 0);
lean_inc(x_2248);
x_2249 = lean_ctor_get(x_2247, 1);
lean_inc(x_2249);
lean_dec(x_2247);
x_2250 = lean_mk_string("Meta");
x_2251 = lean_name_mk_string(x_2209, x_2250);
x_2252 = lean_mk_string("IndPredBelow");
x_2253 = lean_name_mk_string(x_2251, x_2252);
x_2254 = lean_mk_string("match");
x_2255 = lean_name_mk_string(x_2253, x_2254);
x_2268 = lean_st_ref_get(x_11, x_2249);
x_2269 = lean_ctor_get(x_2268, 0);
lean_inc(x_2269);
x_2270 = lean_ctor_get(x_2269, 3);
lean_inc(x_2270);
lean_dec(x_2269);
x_2271 = lean_ctor_get_uint8(x_2270, sizeof(void*)*1);
lean_dec(x_2270);
if (x_2271 == 0)
{
lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; 
lean_dec(x_2248);
x_2272 = lean_ctor_get(x_2268, 1);
lean_inc(x_2272);
lean_dec(x_2268);
x_2273 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2274 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_2214, x_2273, x_8, x_9, x_10, x_11, x_2272);
if (lean_obj_tag(x_2274) == 0)
{
lean_object* x_2275; uint8_t x_2276; 
x_2275 = lean_ctor_get(x_2274, 0);
lean_inc(x_2275);
x_2276 = lean_unbox(x_2275);
lean_dec(x_2275);
if (x_2276 == 0)
{
lean_object* x_2277; lean_object* x_2278; lean_object* x_2279; lean_object* x_2280; uint8_t x_2281; 
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
x_2277 = lean_ctor_get(x_2274, 1);
lean_inc(x_2277);
lean_dec(x_2274);
x_2278 = lean_st_ref_get(x_11, x_2277);
x_2279 = lean_ctor_get(x_2278, 0);
lean_inc(x_2279);
x_2280 = lean_ctor_get(x_2279, 3);
lean_inc(x_2280);
lean_dec(x_2279);
x_2281 = lean_ctor_get_uint8(x_2280, sizeof(void*)*1);
lean_dec(x_2280);
if (x_2281 == 0)
{
uint8_t x_2282; 
lean_dec(x_2255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2282 = !lean_is_exclusive(x_2278);
if (x_2282 == 0)
{
lean_object* x_2283; 
x_2283 = lean_ctor_get(x_2278, 0);
lean_dec(x_2283);
lean_ctor_set(x_2278, 0, x_3);
return x_2278;
}
else
{
lean_object* x_2284; lean_object* x_2285; 
x_2284 = lean_ctor_get(x_2278, 1);
lean_inc(x_2284);
lean_dec(x_2278);
x_2285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2285, 0, x_3);
lean_ctor_set(x_2285, 1, x_2284);
return x_2285;
}
}
else
{
lean_object* x_2286; lean_object* x_2287; lean_object* x_2288; uint8_t x_2289; 
x_2286 = lean_ctor_get(x_2278, 1);
lean_inc(x_2286);
lean_dec(x_2278);
lean_inc(x_2255);
x_2287 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2286);
x_2288 = lean_ctor_get(x_2287, 0);
lean_inc(x_2288);
x_2289 = lean_unbox(x_2288);
lean_dec(x_2288);
if (x_2289 == 0)
{
uint8_t x_2290; 
lean_dec(x_2255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2290 = !lean_is_exclusive(x_2287);
if (x_2290 == 0)
{
lean_object* x_2291; 
x_2291 = lean_ctor_get(x_2287, 0);
lean_dec(x_2291);
lean_ctor_set(x_2287, 0, x_3);
return x_2287;
}
else
{
lean_object* x_2292; lean_object* x_2293; 
x_2292 = lean_ctor_get(x_2287, 1);
lean_inc(x_2292);
lean_dec(x_2287);
x_2293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2293, 0, x_3);
lean_ctor_set(x_2293, 1, x_2292);
return x_2293;
}
}
else
{
lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; lean_object* x_2297; uint8_t x_2298; 
x_2294 = lean_ctor_get(x_2287, 1);
lean_inc(x_2294);
lean_dec(x_2287);
x_2295 = lean_mk_string("could not find below term in the local context");
x_2296 = l_Lean_stringToMessageData(x_2295);
lean_dec(x_2295);
x_2297 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2255, x_2296, x_8, x_9, x_10, x_11, x_2294);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2298 = !lean_is_exclusive(x_2297);
if (x_2298 == 0)
{
lean_object* x_2299; 
x_2299 = lean_ctor_get(x_2297, 0);
lean_dec(x_2299);
lean_ctor_set(x_2297, 0, x_3);
return x_2297;
}
else
{
lean_object* x_2300; lean_object* x_2301; 
x_2300 = lean_ctor_get(x_2297, 1);
lean_inc(x_2300);
lean_dec(x_2297);
x_2301 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2301, 0, x_3);
lean_ctor_set(x_2301, 1, x_2300);
return x_2301;
}
}
}
}
else
{
lean_object* x_2302; lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; uint8_t x_2306; 
x_2302 = lean_ctor_get(x_2274, 1);
lean_inc(x_2302);
lean_dec(x_2274);
x_2303 = lean_st_ref_get(x_11, x_2302);
x_2304 = lean_ctor_get(x_2303, 0);
lean_inc(x_2304);
x_2305 = lean_ctor_get(x_2304, 3);
lean_inc(x_2305);
lean_dec(x_2304);
x_2306 = lean_ctor_get_uint8(x_2305, sizeof(void*)*1);
lean_dec(x_2305);
if (x_2306 == 0)
{
lean_object* x_2307; uint8_t x_2308; 
x_2307 = lean_ctor_get(x_2303, 1);
lean_inc(x_2307);
lean_dec(x_2303);
x_2308 = 0;
x_2256 = x_2308;
x_2257 = x_2307;
goto block_2267;
}
else
{
lean_object* x_2309; lean_object* x_2310; lean_object* x_2311; lean_object* x_2312; uint8_t x_2313; 
x_2309 = lean_ctor_get(x_2303, 1);
lean_inc(x_2309);
lean_dec(x_2303);
lean_inc(x_2255);
x_2310 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2309);
x_2311 = lean_ctor_get(x_2310, 0);
lean_inc(x_2311);
x_2312 = lean_ctor_get(x_2310, 1);
lean_inc(x_2312);
lean_dec(x_2310);
x_2313 = lean_unbox(x_2311);
lean_dec(x_2311);
x_2256 = x_2313;
x_2257 = x_2312;
goto block_2267;
}
}
}
else
{
uint8_t x_2314; 
lean_dec(x_2255);
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2314 = !lean_is_exclusive(x_2274);
if (x_2314 == 0)
{
lean_object* x_2315; 
x_2315 = lean_ctor_get(x_2274, 0);
lean_dec(x_2315);
lean_ctor_set_tag(x_2274, 0);
lean_ctor_set(x_2274, 0, x_3);
return x_2274;
}
else
{
lean_object* x_2316; lean_object* x_2317; 
x_2316 = lean_ctor_get(x_2274, 1);
lean_inc(x_2316);
lean_dec(x_2274);
x_2317 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2317, 0, x_3);
lean_ctor_set(x_2317, 1, x_2316);
return x_2317;
}
}
}
else
{
lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; uint8_t x_2321; 
x_2318 = lean_ctor_get(x_2268, 1);
lean_inc(x_2318);
lean_dec(x_2268);
lean_inc(x_2255);
x_2319 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2318);
x_2320 = lean_ctor_get(x_2319, 0);
lean_inc(x_2320);
x_2321 = lean_unbox(x_2320);
lean_dec(x_2320);
if (x_2321 == 0)
{
lean_object* x_2322; lean_object* x_2323; lean_object* x_2324; 
lean_dec(x_2248);
x_2322 = lean_ctor_get(x_2319, 1);
lean_inc(x_2322);
lean_dec(x_2319);
x_2323 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2324 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_2214, x_2323, x_8, x_9, x_10, x_11, x_2322);
if (lean_obj_tag(x_2324) == 0)
{
lean_object* x_2325; uint8_t x_2326; 
x_2325 = lean_ctor_get(x_2324, 0);
lean_inc(x_2325);
x_2326 = lean_unbox(x_2325);
lean_dec(x_2325);
if (x_2326 == 0)
{
lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; lean_object* x_2330; uint8_t x_2331; 
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
x_2327 = lean_ctor_get(x_2324, 1);
lean_inc(x_2327);
lean_dec(x_2324);
x_2328 = lean_st_ref_get(x_11, x_2327);
x_2329 = lean_ctor_get(x_2328, 0);
lean_inc(x_2329);
x_2330 = lean_ctor_get(x_2329, 3);
lean_inc(x_2330);
lean_dec(x_2329);
x_2331 = lean_ctor_get_uint8(x_2330, sizeof(void*)*1);
lean_dec(x_2330);
if (x_2331 == 0)
{
uint8_t x_2332; 
lean_dec(x_2255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2332 = !lean_is_exclusive(x_2328);
if (x_2332 == 0)
{
lean_object* x_2333; 
x_2333 = lean_ctor_get(x_2328, 0);
lean_dec(x_2333);
lean_ctor_set(x_2328, 0, x_3);
return x_2328;
}
else
{
lean_object* x_2334; lean_object* x_2335; 
x_2334 = lean_ctor_get(x_2328, 1);
lean_inc(x_2334);
lean_dec(x_2328);
x_2335 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2335, 0, x_3);
lean_ctor_set(x_2335, 1, x_2334);
return x_2335;
}
}
else
{
lean_object* x_2336; lean_object* x_2337; lean_object* x_2338; uint8_t x_2339; 
x_2336 = lean_ctor_get(x_2328, 1);
lean_inc(x_2336);
lean_dec(x_2328);
lean_inc(x_2255);
x_2337 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2336);
x_2338 = lean_ctor_get(x_2337, 0);
lean_inc(x_2338);
x_2339 = lean_unbox(x_2338);
lean_dec(x_2338);
if (x_2339 == 0)
{
uint8_t x_2340; 
lean_dec(x_2255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2340 = !lean_is_exclusive(x_2337);
if (x_2340 == 0)
{
lean_object* x_2341; 
x_2341 = lean_ctor_get(x_2337, 0);
lean_dec(x_2341);
lean_ctor_set(x_2337, 0, x_3);
return x_2337;
}
else
{
lean_object* x_2342; lean_object* x_2343; 
x_2342 = lean_ctor_get(x_2337, 1);
lean_inc(x_2342);
lean_dec(x_2337);
x_2343 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2343, 0, x_3);
lean_ctor_set(x_2343, 1, x_2342);
return x_2343;
}
}
else
{
lean_object* x_2344; lean_object* x_2345; lean_object* x_2346; lean_object* x_2347; uint8_t x_2348; 
x_2344 = lean_ctor_get(x_2337, 1);
lean_inc(x_2344);
lean_dec(x_2337);
x_2345 = lean_mk_string("could not find below term in the local context");
x_2346 = l_Lean_stringToMessageData(x_2345);
lean_dec(x_2345);
x_2347 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2255, x_2346, x_8, x_9, x_10, x_11, x_2344);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2348 = !lean_is_exclusive(x_2347);
if (x_2348 == 0)
{
lean_object* x_2349; 
x_2349 = lean_ctor_get(x_2347, 0);
lean_dec(x_2349);
lean_ctor_set(x_2347, 0, x_3);
return x_2347;
}
else
{
lean_object* x_2350; lean_object* x_2351; 
x_2350 = lean_ctor_get(x_2347, 1);
lean_inc(x_2350);
lean_dec(x_2347);
x_2351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2351, 0, x_3);
lean_ctor_set(x_2351, 1, x_2350);
return x_2351;
}
}
}
}
else
{
lean_object* x_2352; lean_object* x_2353; lean_object* x_2354; lean_object* x_2355; uint8_t x_2356; 
x_2352 = lean_ctor_get(x_2324, 1);
lean_inc(x_2352);
lean_dec(x_2324);
x_2353 = lean_st_ref_get(x_11, x_2352);
x_2354 = lean_ctor_get(x_2353, 0);
lean_inc(x_2354);
x_2355 = lean_ctor_get(x_2354, 3);
lean_inc(x_2355);
lean_dec(x_2354);
x_2356 = lean_ctor_get_uint8(x_2355, sizeof(void*)*1);
lean_dec(x_2355);
if (x_2356 == 0)
{
lean_object* x_2357; uint8_t x_2358; 
x_2357 = lean_ctor_get(x_2353, 1);
lean_inc(x_2357);
lean_dec(x_2353);
x_2358 = 0;
x_2256 = x_2358;
x_2257 = x_2357;
goto block_2267;
}
else
{
lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; lean_object* x_2362; uint8_t x_2363; 
x_2359 = lean_ctor_get(x_2353, 1);
lean_inc(x_2359);
lean_dec(x_2353);
lean_inc(x_2255);
x_2360 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2359);
x_2361 = lean_ctor_get(x_2360, 0);
lean_inc(x_2361);
x_2362 = lean_ctor_get(x_2360, 1);
lean_inc(x_2362);
lean_dec(x_2360);
x_2363 = lean_unbox(x_2361);
lean_dec(x_2361);
x_2256 = x_2363;
x_2257 = x_2362;
goto block_2267;
}
}
}
else
{
uint8_t x_2364; 
lean_dec(x_2255);
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2364 = !lean_is_exclusive(x_2324);
if (x_2364 == 0)
{
lean_object* x_2365; 
x_2365 = lean_ctor_get(x_2324, 0);
lean_dec(x_2365);
lean_ctor_set_tag(x_2324, 0);
lean_ctor_set(x_2324, 0, x_3);
return x_2324;
}
else
{
lean_object* x_2366; lean_object* x_2367; 
x_2366 = lean_ctor_get(x_2324, 1);
lean_inc(x_2366);
lean_dec(x_2324);
x_2367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2367, 0, x_3);
lean_ctor_set(x_2367, 1, x_2366);
return x_2367;
}
}
}
else
{
lean_object* x_2368; lean_object* x_2369; lean_object* x_2370; lean_object* x_2371; lean_object* x_2372; lean_object* x_2373; lean_object* x_2374; lean_object* x_2375; lean_object* x_2376; lean_object* x_2377; 
x_2368 = lean_ctor_get(x_2319, 1);
lean_inc(x_2368);
lean_dec(x_2319);
x_2369 = lean_mk_string("");
x_2370 = l_Lean_stringToMessageData(x_2369);
lean_dec(x_2369);
x_2371 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2371, 0, x_2248);
lean_inc(x_2370);
x_2372 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2372, 0, x_2370);
lean_ctor_set(x_2372, 1, x_2371);
x_2373 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2373, 0, x_2372);
lean_ctor_set(x_2373, 1, x_2370);
lean_inc(x_2255);
x_2374 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2255, x_2373, x_8, x_9, x_10, x_11, x_2368);
x_2375 = lean_ctor_get(x_2374, 1);
lean_inc(x_2375);
lean_dec(x_2374);
x_2376 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2377 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_2214, x_2376, x_8, x_9, x_10, x_11, x_2375);
if (lean_obj_tag(x_2377) == 0)
{
lean_object* x_2378; uint8_t x_2379; 
x_2378 = lean_ctor_get(x_2377, 0);
lean_inc(x_2378);
x_2379 = lean_unbox(x_2378);
lean_dec(x_2378);
if (x_2379 == 0)
{
lean_object* x_2380; lean_object* x_2381; lean_object* x_2382; lean_object* x_2383; uint8_t x_2384; 
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
x_2380 = lean_ctor_get(x_2377, 1);
lean_inc(x_2380);
lean_dec(x_2377);
x_2381 = lean_st_ref_get(x_11, x_2380);
x_2382 = lean_ctor_get(x_2381, 0);
lean_inc(x_2382);
x_2383 = lean_ctor_get(x_2382, 3);
lean_inc(x_2383);
lean_dec(x_2382);
x_2384 = lean_ctor_get_uint8(x_2383, sizeof(void*)*1);
lean_dec(x_2383);
if (x_2384 == 0)
{
uint8_t x_2385; 
lean_dec(x_2255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2385 = !lean_is_exclusive(x_2381);
if (x_2385 == 0)
{
lean_object* x_2386; 
x_2386 = lean_ctor_get(x_2381, 0);
lean_dec(x_2386);
lean_ctor_set(x_2381, 0, x_3);
return x_2381;
}
else
{
lean_object* x_2387; lean_object* x_2388; 
x_2387 = lean_ctor_get(x_2381, 1);
lean_inc(x_2387);
lean_dec(x_2381);
x_2388 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2388, 0, x_3);
lean_ctor_set(x_2388, 1, x_2387);
return x_2388;
}
}
else
{
lean_object* x_2389; lean_object* x_2390; lean_object* x_2391; uint8_t x_2392; 
x_2389 = lean_ctor_get(x_2381, 1);
lean_inc(x_2389);
lean_dec(x_2381);
lean_inc(x_2255);
x_2390 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2389);
x_2391 = lean_ctor_get(x_2390, 0);
lean_inc(x_2391);
x_2392 = lean_unbox(x_2391);
lean_dec(x_2391);
if (x_2392 == 0)
{
uint8_t x_2393; 
lean_dec(x_2255);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2393 = !lean_is_exclusive(x_2390);
if (x_2393 == 0)
{
lean_object* x_2394; 
x_2394 = lean_ctor_get(x_2390, 0);
lean_dec(x_2394);
lean_ctor_set(x_2390, 0, x_3);
return x_2390;
}
else
{
lean_object* x_2395; lean_object* x_2396; 
x_2395 = lean_ctor_get(x_2390, 1);
lean_inc(x_2395);
lean_dec(x_2390);
x_2396 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2396, 0, x_3);
lean_ctor_set(x_2396, 1, x_2395);
return x_2396;
}
}
else
{
lean_object* x_2397; lean_object* x_2398; lean_object* x_2399; lean_object* x_2400; uint8_t x_2401; 
x_2397 = lean_ctor_get(x_2390, 1);
lean_inc(x_2397);
lean_dec(x_2390);
x_2398 = lean_mk_string("could not find below term in the local context");
x_2399 = l_Lean_stringToMessageData(x_2398);
lean_dec(x_2398);
x_2400 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2255, x_2399, x_8, x_9, x_10, x_11, x_2397);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2401 = !lean_is_exclusive(x_2400);
if (x_2401 == 0)
{
lean_object* x_2402; 
x_2402 = lean_ctor_get(x_2400, 0);
lean_dec(x_2402);
lean_ctor_set(x_2400, 0, x_3);
return x_2400;
}
else
{
lean_object* x_2403; lean_object* x_2404; 
x_2403 = lean_ctor_get(x_2400, 1);
lean_inc(x_2403);
lean_dec(x_2400);
x_2404 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2404, 0, x_3);
lean_ctor_set(x_2404, 1, x_2403);
return x_2404;
}
}
}
}
else
{
lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; uint8_t x_2409; 
x_2405 = lean_ctor_get(x_2377, 1);
lean_inc(x_2405);
lean_dec(x_2377);
x_2406 = lean_st_ref_get(x_11, x_2405);
x_2407 = lean_ctor_get(x_2406, 0);
lean_inc(x_2407);
x_2408 = lean_ctor_get(x_2407, 3);
lean_inc(x_2408);
lean_dec(x_2407);
x_2409 = lean_ctor_get_uint8(x_2408, sizeof(void*)*1);
lean_dec(x_2408);
if (x_2409 == 0)
{
lean_object* x_2410; uint8_t x_2411; 
x_2410 = lean_ctor_get(x_2406, 1);
lean_inc(x_2410);
lean_dec(x_2406);
x_2411 = 0;
x_2256 = x_2411;
x_2257 = x_2410;
goto block_2267;
}
else
{
lean_object* x_2412; lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; uint8_t x_2416; 
x_2412 = lean_ctor_get(x_2406, 1);
lean_inc(x_2412);
lean_dec(x_2406);
lean_inc(x_2255);
x_2413 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2255, x_8, x_9, x_10, x_11, x_2412);
x_2414 = lean_ctor_get(x_2413, 0);
lean_inc(x_2414);
x_2415 = lean_ctor_get(x_2413, 1);
lean_inc(x_2415);
lean_dec(x_2413);
x_2416 = lean_unbox(x_2414);
lean_dec(x_2414);
x_2256 = x_2416;
x_2257 = x_2415;
goto block_2267;
}
}
}
else
{
uint8_t x_2417; 
lean_dec(x_2255);
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2417 = !lean_is_exclusive(x_2377);
if (x_2417 == 0)
{
lean_object* x_2418; 
x_2418 = lean_ctor_get(x_2377, 0);
lean_dec(x_2418);
lean_ctor_set_tag(x_2377, 0);
lean_ctor_set(x_2377, 0, x_3);
return x_2377;
}
else
{
lean_object* x_2419; lean_object* x_2420; 
x_2419 = lean_ctor_get(x_2377, 1);
lean_inc(x_2419);
lean_dec(x_2377);
x_2420 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2420, 0, x_3);
lean_ctor_set(x_2420, 1, x_2419);
return x_2420;
}
}
}
}
block_2267:
{
if (x_2256 == 0)
{
lean_dec(x_2255);
x_2215 = x_2257;
goto block_2246;
}
else
{
lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; 
x_2258 = lean_mk_string("Found below term in the local context: ");
x_2259 = l_Lean_stringToMessageData(x_2258);
lean_dec(x_2258);
lean_inc(x_2211);
x_2260 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2260, 0, x_2211);
x_2261 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2261, 0, x_2259);
lean_ctor_set(x_2261, 1, x_2260);
x_2262 = lean_mk_string("");
x_2263 = l_Lean_stringToMessageData(x_2262);
lean_dec(x_2262);
x_2264 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2264, 0, x_2261);
lean_ctor_set(x_2264, 1, x_2263);
x_2265 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2255, x_2264, x_8, x_9, x_10, x_11, x_2257);
x_2266 = lean_ctor_get(x_2265, 1);
lean_inc(x_2266);
lean_dec(x_2265);
x_2215 = x_2266;
goto block_2246;
}
}
}
else
{
uint8_t x_2421; 
lean_dec(x_2214);
lean_dec(x_2213);
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2421 = !lean_is_exclusive(x_2247);
if (x_2421 == 0)
{
lean_object* x_2422; 
x_2422 = lean_ctor_get(x_2247, 0);
lean_dec(x_2422);
lean_ctor_set_tag(x_2247, 0);
lean_ctor_set(x_2247, 0, x_3);
return x_2247;
}
else
{
lean_object* x_2423; lean_object* x_2424; 
x_2423 = lean_ctor_get(x_2247, 1);
lean_inc(x_2423);
lean_dec(x_2247);
x_2424 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2424, 0, x_3);
lean_ctor_set(x_2424, 1, x_2423);
return x_2424;
}
}
block_2246:
{
lean_object* x_2216; uint8_t x_2217; 
x_2216 = lean_array_get_size(x_1);
x_2217 = lean_nat_dec_lt(x_2191, x_2216);
if (x_2217 == 0)
{
lean_object* x_2218; lean_object* x_2219; lean_object* x_2220; 
lean_dec(x_2216);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_2208)) {
 x_2218 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2218 = x_2208;
}
lean_ctor_set(x_2218, 0, x_2211);
lean_ctor_set(x_2218, 1, x_2194);
if (lean_is_scalar(x_2195)) {
 x_2219 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2219 = x_2195;
}
lean_ctor_set(x_2219, 0, x_2218);
if (lean_is_scalar(x_2213)) {
 x_2220 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2220 = x_2213;
}
lean_ctor_set(x_2220, 0, x_2219);
lean_ctor_set(x_2220, 1, x_2215);
return x_2220;
}
else
{
uint8_t x_2221; 
x_2221 = lean_nat_dec_le(x_2216, x_2216);
if (x_2221 == 0)
{
lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; 
lean_dec(x_2216);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_2208)) {
 x_2222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2222 = x_2208;
}
lean_ctor_set(x_2222, 0, x_2211);
lean_ctor_set(x_2222, 1, x_2194);
if (lean_is_scalar(x_2195)) {
 x_2223 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2223 = x_2195;
}
lean_ctor_set(x_2223, 0, x_2222);
if (lean_is_scalar(x_2213)) {
 x_2224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2224 = x_2213;
}
lean_ctor_set(x_2224, 0, x_2223);
lean_ctor_set(x_2224, 1, x_2215);
return x_2224;
}
else
{
size_t x_2225; size_t x_2226; lean_object* x_2227; 
lean_dec(x_2213);
x_2225 = 0;
x_2226 = lean_usize_of_nat(x_2216);
lean_dec(x_2216);
lean_inc(x_2211);
x_2227 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_2211, x_1, x_2225, x_2226, x_8, x_9, x_10, x_11, x_2215);
if (lean_obj_tag(x_2227) == 0)
{
lean_object* x_2228; uint8_t x_2229; 
x_2228 = lean_ctor_get(x_2227, 0);
lean_inc(x_2228);
x_2229 = lean_unbox(x_2228);
lean_dec(x_2228);
if (x_2229 == 0)
{
uint8_t x_2230; 
lean_dec(x_3);
x_2230 = !lean_is_exclusive(x_2227);
if (x_2230 == 0)
{
lean_object* x_2231; lean_object* x_2232; lean_object* x_2233; 
x_2231 = lean_ctor_get(x_2227, 0);
lean_dec(x_2231);
if (lean_is_scalar(x_2208)) {
 x_2232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2232 = x_2208;
}
lean_ctor_set(x_2232, 0, x_2211);
lean_ctor_set(x_2232, 1, x_2194);
if (lean_is_scalar(x_2195)) {
 x_2233 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2233 = x_2195;
}
lean_ctor_set(x_2233, 0, x_2232);
lean_ctor_set(x_2227, 0, x_2233);
return x_2227;
}
else
{
lean_object* x_2234; lean_object* x_2235; lean_object* x_2236; lean_object* x_2237; 
x_2234 = lean_ctor_get(x_2227, 1);
lean_inc(x_2234);
lean_dec(x_2227);
if (lean_is_scalar(x_2208)) {
 x_2235 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2235 = x_2208;
}
lean_ctor_set(x_2235, 0, x_2211);
lean_ctor_set(x_2235, 1, x_2194);
if (lean_is_scalar(x_2195)) {
 x_2236 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2236 = x_2195;
}
lean_ctor_set(x_2236, 0, x_2235);
x_2237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2237, 0, x_2236);
lean_ctor_set(x_2237, 1, x_2234);
return x_2237;
}
}
else
{
uint8_t x_2238; 
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
x_2238 = !lean_is_exclusive(x_2227);
if (x_2238 == 0)
{
lean_object* x_2239; 
x_2239 = lean_ctor_get(x_2227, 0);
lean_dec(x_2239);
lean_ctor_set(x_2227, 0, x_3);
return x_2227;
}
else
{
lean_object* x_2240; lean_object* x_2241; 
x_2240 = lean_ctor_get(x_2227, 1);
lean_inc(x_2240);
lean_dec(x_2227);
x_2241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2241, 0, x_3);
lean_ctor_set(x_2241, 1, x_2240);
return x_2241;
}
}
}
else
{
uint8_t x_2242; 
lean_dec(x_2211);
lean_dec(x_2208);
lean_dec(x_2195);
lean_dec(x_2194);
x_2242 = !lean_is_exclusive(x_2227);
if (x_2242 == 0)
{
lean_object* x_2243; 
x_2243 = lean_ctor_get(x_2227, 0);
lean_dec(x_2243);
lean_ctor_set_tag(x_2227, 0);
lean_ctor_set(x_2227, 0, x_3);
return x_2227;
}
else
{
lean_object* x_2244; lean_object* x_2245; 
x_2244 = lean_ctor_get(x_2227, 1);
lean_inc(x_2244);
lean_dec(x_2227);
x_2245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2245, 0, x_3);
lean_ctor_set(x_2245, 1, x_2244);
return x_2245;
}
}
}
}
}
}
else
{
uint8_t x_2425; 
lean_dec(x_2195);
lean_dec(x_2194);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_2425 = !lean_is_exclusive(x_2204);
if (x_2425 == 0)
{
return x_2204;
}
else
{
lean_object* x_2426; lean_object* x_2427; lean_object* x_2428; 
x_2426 = lean_ctor_get(x_2204, 0);
x_2427 = lean_ctor_get(x_2204, 1);
lean_inc(x_2427);
lean_inc(x_2426);
lean_dec(x_2204);
x_2428 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2428, 0, x_2426);
lean_ctor_set(x_2428, 1, x_2427);
return x_2428;
}
}
}
}
}
}
default: 
{
lean_object* x_2429; 
lean_dec(x_7);
lean_dec(x_6);
x_2429 = l_Lean_Expr_constName_x3f(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_2429) == 0)
{
lean_object* x_2430; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_2430 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2430, 0, x_3);
lean_ctor_set(x_2430, 1, x_12);
return x_2430;
}
else
{
lean_object* x_2431; lean_object* x_2432; lean_object* x_2433; 
x_2431 = lean_ctor_get(x_2429, 0);
lean_inc(x_2431);
lean_dec(x_2429);
x_2432 = lean_unsigned_to_nat(0u);
x_2433 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_4, x_2432);
if (lean_obj_tag(x_2433) == 0)
{
lean_object* x_2434; 
lean_dec(x_2431);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_2434 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2434, 0, x_3);
lean_ctor_set(x_2434, 1, x_12);
return x_2434;
}
else
{
lean_object* x_2435; lean_object* x_2436; lean_object* x_2437; lean_object* x_2438; uint8_t x_2439; 
x_2435 = lean_ctor_get(x_2433, 0);
lean_inc(x_2435);
if (lean_is_exclusive(x_2433)) {
 lean_ctor_release(x_2433, 0);
 x_2436 = x_2433;
} else {
 lean_dec_ref(x_2433);
 x_2436 = lean_box(0);
}
x_2437 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_2431, x_8, x_9, x_10, x_11, x_12);
x_2438 = lean_ctor_get(x_2437, 0);
lean_inc(x_2438);
x_2439 = lean_unbox(x_2438);
lean_dec(x_2438);
if (x_2439 == 0)
{
uint8_t x_2440; 
lean_dec(x_2436);
lean_dec(x_2435);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_2440 = !lean_is_exclusive(x_2437);
if (x_2440 == 0)
{
lean_object* x_2441; 
x_2441 = lean_ctor_get(x_2437, 0);
lean_dec(x_2441);
lean_ctor_set(x_2437, 0, x_3);
return x_2437;
}
else
{
lean_object* x_2442; lean_object* x_2443; 
x_2442 = lean_ctor_get(x_2437, 1);
lean_inc(x_2442);
lean_dec(x_2437);
x_2443 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2443, 0, x_3);
lean_ctor_set(x_2443, 1, x_2442);
return x_2443;
}
}
else
{
lean_object* x_2444; lean_object* x_2445; 
x_2444 = lean_ctor_get(x_2437, 1);
lean_inc(x_2444);
lean_dec(x_2437);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2445 = l___private_Lean_Meta_IndPredBelow_0__Lean_Meta_IndPredBelow_belowType(x_2, x_1, x_2435, x_8, x_9, x_10, x_11, x_2444);
if (lean_obj_tag(x_2445) == 0)
{
lean_object* x_2446; lean_object* x_2447; lean_object* x_2448; lean_object* x_2449; lean_object* x_2450; lean_object* x_2451; lean_object* x_2452; lean_object* x_2453; lean_object* x_2454; lean_object* x_2455; lean_object* x_2456; lean_object* x_2488; 
x_2446 = lean_ctor_get(x_2445, 0);
lean_inc(x_2446);
x_2447 = lean_ctor_get(x_2445, 1);
lean_inc(x_2447);
lean_dec(x_2445);
x_2448 = lean_ctor_get(x_2446, 1);
lean_inc(x_2448);
if (lean_is_exclusive(x_2446)) {
 lean_ctor_release(x_2446, 0);
 lean_ctor_release(x_2446, 1);
 x_2449 = x_2446;
} else {
 lean_dec_ref(x_2446);
 x_2449 = lean_box(0);
}
x_2450 = lean_box(0);
lean_inc(x_8);
x_2451 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_2448, x_2450, x_8, x_9, x_10, x_11, x_2447);
x_2452 = lean_ctor_get(x_2451, 0);
lean_inc(x_2452);
x_2453 = lean_ctor_get(x_2451, 1);
lean_inc(x_2453);
if (lean_is_exclusive(x_2451)) {
 lean_ctor_release(x_2451, 0);
 lean_ctor_release(x_2451, 1);
 x_2454 = x_2451;
} else {
 lean_dec_ref(x_2451);
 x_2454 = lean_box(0);
}
x_2455 = l_Lean_Expr_mvarId_x21(x_2452);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2488 = l_Lean_Meta_ppGoal(x_2455, x_8, x_9, x_10, x_11, x_2453);
if (lean_obj_tag(x_2488) == 0)
{
lean_object* x_2489; lean_object* x_2490; lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; lean_object* x_2494; lean_object* x_2495; lean_object* x_2496; uint8_t x_2497; lean_object* x_2498; lean_object* x_2509; lean_object* x_2510; lean_object* x_2511; uint8_t x_2512; 
x_2489 = lean_ctor_get(x_2488, 0);
lean_inc(x_2489);
x_2490 = lean_ctor_get(x_2488, 1);
lean_inc(x_2490);
lean_dec(x_2488);
x_2491 = lean_mk_string("Meta");
x_2492 = lean_name_mk_string(x_2450, x_2491);
x_2493 = lean_mk_string("IndPredBelow");
x_2494 = lean_name_mk_string(x_2492, x_2493);
x_2495 = lean_mk_string("match");
x_2496 = lean_name_mk_string(x_2494, x_2495);
x_2509 = lean_st_ref_get(x_11, x_2490);
x_2510 = lean_ctor_get(x_2509, 0);
lean_inc(x_2510);
x_2511 = lean_ctor_get(x_2510, 3);
lean_inc(x_2511);
lean_dec(x_2510);
x_2512 = lean_ctor_get_uint8(x_2511, sizeof(void*)*1);
lean_dec(x_2511);
if (x_2512 == 0)
{
lean_object* x_2513; lean_object* x_2514; lean_object* x_2515; 
lean_dec(x_2489);
x_2513 = lean_ctor_get(x_2509, 1);
lean_inc(x_2513);
lean_dec(x_2509);
x_2514 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2515 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_2455, x_2514, x_8, x_9, x_10, x_11, x_2513);
if (lean_obj_tag(x_2515) == 0)
{
lean_object* x_2516; uint8_t x_2517; 
x_2516 = lean_ctor_get(x_2515, 0);
lean_inc(x_2516);
x_2517 = lean_unbox(x_2516);
lean_dec(x_2516);
if (x_2517 == 0)
{
lean_object* x_2518; lean_object* x_2519; lean_object* x_2520; lean_object* x_2521; uint8_t x_2522; 
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
x_2518 = lean_ctor_get(x_2515, 1);
lean_inc(x_2518);
lean_dec(x_2515);
x_2519 = lean_st_ref_get(x_11, x_2518);
x_2520 = lean_ctor_get(x_2519, 0);
lean_inc(x_2520);
x_2521 = lean_ctor_get(x_2520, 3);
lean_inc(x_2521);
lean_dec(x_2520);
x_2522 = lean_ctor_get_uint8(x_2521, sizeof(void*)*1);
lean_dec(x_2521);
if (x_2522 == 0)
{
uint8_t x_2523; 
lean_dec(x_2496);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2523 = !lean_is_exclusive(x_2519);
if (x_2523 == 0)
{
lean_object* x_2524; 
x_2524 = lean_ctor_get(x_2519, 0);
lean_dec(x_2524);
lean_ctor_set(x_2519, 0, x_3);
return x_2519;
}
else
{
lean_object* x_2525; lean_object* x_2526; 
x_2525 = lean_ctor_get(x_2519, 1);
lean_inc(x_2525);
lean_dec(x_2519);
x_2526 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2526, 0, x_3);
lean_ctor_set(x_2526, 1, x_2525);
return x_2526;
}
}
else
{
lean_object* x_2527; lean_object* x_2528; lean_object* x_2529; uint8_t x_2530; 
x_2527 = lean_ctor_get(x_2519, 1);
lean_inc(x_2527);
lean_dec(x_2519);
lean_inc(x_2496);
x_2528 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2527);
x_2529 = lean_ctor_get(x_2528, 0);
lean_inc(x_2529);
x_2530 = lean_unbox(x_2529);
lean_dec(x_2529);
if (x_2530 == 0)
{
uint8_t x_2531; 
lean_dec(x_2496);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2531 = !lean_is_exclusive(x_2528);
if (x_2531 == 0)
{
lean_object* x_2532; 
x_2532 = lean_ctor_get(x_2528, 0);
lean_dec(x_2532);
lean_ctor_set(x_2528, 0, x_3);
return x_2528;
}
else
{
lean_object* x_2533; lean_object* x_2534; 
x_2533 = lean_ctor_get(x_2528, 1);
lean_inc(x_2533);
lean_dec(x_2528);
x_2534 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2534, 0, x_3);
lean_ctor_set(x_2534, 1, x_2533);
return x_2534;
}
}
else
{
lean_object* x_2535; lean_object* x_2536; lean_object* x_2537; lean_object* x_2538; uint8_t x_2539; 
x_2535 = lean_ctor_get(x_2528, 1);
lean_inc(x_2535);
lean_dec(x_2528);
x_2536 = lean_mk_string("could not find below term in the local context");
x_2537 = l_Lean_stringToMessageData(x_2536);
lean_dec(x_2536);
x_2538 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2496, x_2537, x_8, x_9, x_10, x_11, x_2535);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2539 = !lean_is_exclusive(x_2538);
if (x_2539 == 0)
{
lean_object* x_2540; 
x_2540 = lean_ctor_get(x_2538, 0);
lean_dec(x_2540);
lean_ctor_set(x_2538, 0, x_3);
return x_2538;
}
else
{
lean_object* x_2541; lean_object* x_2542; 
x_2541 = lean_ctor_get(x_2538, 1);
lean_inc(x_2541);
lean_dec(x_2538);
x_2542 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2542, 0, x_3);
lean_ctor_set(x_2542, 1, x_2541);
return x_2542;
}
}
}
}
else
{
lean_object* x_2543; lean_object* x_2544; lean_object* x_2545; lean_object* x_2546; uint8_t x_2547; 
x_2543 = lean_ctor_get(x_2515, 1);
lean_inc(x_2543);
lean_dec(x_2515);
x_2544 = lean_st_ref_get(x_11, x_2543);
x_2545 = lean_ctor_get(x_2544, 0);
lean_inc(x_2545);
x_2546 = lean_ctor_get(x_2545, 3);
lean_inc(x_2546);
lean_dec(x_2545);
x_2547 = lean_ctor_get_uint8(x_2546, sizeof(void*)*1);
lean_dec(x_2546);
if (x_2547 == 0)
{
lean_object* x_2548; uint8_t x_2549; 
x_2548 = lean_ctor_get(x_2544, 1);
lean_inc(x_2548);
lean_dec(x_2544);
x_2549 = 0;
x_2497 = x_2549;
x_2498 = x_2548;
goto block_2508;
}
else
{
lean_object* x_2550; lean_object* x_2551; lean_object* x_2552; lean_object* x_2553; uint8_t x_2554; 
x_2550 = lean_ctor_get(x_2544, 1);
lean_inc(x_2550);
lean_dec(x_2544);
lean_inc(x_2496);
x_2551 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2550);
x_2552 = lean_ctor_get(x_2551, 0);
lean_inc(x_2552);
x_2553 = lean_ctor_get(x_2551, 1);
lean_inc(x_2553);
lean_dec(x_2551);
x_2554 = lean_unbox(x_2552);
lean_dec(x_2552);
x_2497 = x_2554;
x_2498 = x_2553;
goto block_2508;
}
}
}
else
{
uint8_t x_2555; 
lean_dec(x_2496);
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2555 = !lean_is_exclusive(x_2515);
if (x_2555 == 0)
{
lean_object* x_2556; 
x_2556 = lean_ctor_get(x_2515, 0);
lean_dec(x_2556);
lean_ctor_set_tag(x_2515, 0);
lean_ctor_set(x_2515, 0, x_3);
return x_2515;
}
else
{
lean_object* x_2557; lean_object* x_2558; 
x_2557 = lean_ctor_get(x_2515, 1);
lean_inc(x_2557);
lean_dec(x_2515);
x_2558 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2558, 0, x_3);
lean_ctor_set(x_2558, 1, x_2557);
return x_2558;
}
}
}
else
{
lean_object* x_2559; lean_object* x_2560; lean_object* x_2561; uint8_t x_2562; 
x_2559 = lean_ctor_get(x_2509, 1);
lean_inc(x_2559);
lean_dec(x_2509);
lean_inc(x_2496);
x_2560 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2559);
x_2561 = lean_ctor_get(x_2560, 0);
lean_inc(x_2561);
x_2562 = lean_unbox(x_2561);
lean_dec(x_2561);
if (x_2562 == 0)
{
lean_object* x_2563; lean_object* x_2564; lean_object* x_2565; 
lean_dec(x_2489);
x_2563 = lean_ctor_get(x_2560, 1);
lean_inc(x_2563);
lean_dec(x_2560);
x_2564 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2565 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_2455, x_2564, x_8, x_9, x_10, x_11, x_2563);
if (lean_obj_tag(x_2565) == 0)
{
lean_object* x_2566; uint8_t x_2567; 
x_2566 = lean_ctor_get(x_2565, 0);
lean_inc(x_2566);
x_2567 = lean_unbox(x_2566);
lean_dec(x_2566);
if (x_2567 == 0)
{
lean_object* x_2568; lean_object* x_2569; lean_object* x_2570; lean_object* x_2571; uint8_t x_2572; 
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
x_2568 = lean_ctor_get(x_2565, 1);
lean_inc(x_2568);
lean_dec(x_2565);
x_2569 = lean_st_ref_get(x_11, x_2568);
x_2570 = lean_ctor_get(x_2569, 0);
lean_inc(x_2570);
x_2571 = lean_ctor_get(x_2570, 3);
lean_inc(x_2571);
lean_dec(x_2570);
x_2572 = lean_ctor_get_uint8(x_2571, sizeof(void*)*1);
lean_dec(x_2571);
if (x_2572 == 0)
{
uint8_t x_2573; 
lean_dec(x_2496);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2573 = !lean_is_exclusive(x_2569);
if (x_2573 == 0)
{
lean_object* x_2574; 
x_2574 = lean_ctor_get(x_2569, 0);
lean_dec(x_2574);
lean_ctor_set(x_2569, 0, x_3);
return x_2569;
}
else
{
lean_object* x_2575; lean_object* x_2576; 
x_2575 = lean_ctor_get(x_2569, 1);
lean_inc(x_2575);
lean_dec(x_2569);
x_2576 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2576, 0, x_3);
lean_ctor_set(x_2576, 1, x_2575);
return x_2576;
}
}
else
{
lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; uint8_t x_2580; 
x_2577 = lean_ctor_get(x_2569, 1);
lean_inc(x_2577);
lean_dec(x_2569);
lean_inc(x_2496);
x_2578 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2577);
x_2579 = lean_ctor_get(x_2578, 0);
lean_inc(x_2579);
x_2580 = lean_unbox(x_2579);
lean_dec(x_2579);
if (x_2580 == 0)
{
uint8_t x_2581; 
lean_dec(x_2496);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2581 = !lean_is_exclusive(x_2578);
if (x_2581 == 0)
{
lean_object* x_2582; 
x_2582 = lean_ctor_get(x_2578, 0);
lean_dec(x_2582);
lean_ctor_set(x_2578, 0, x_3);
return x_2578;
}
else
{
lean_object* x_2583; lean_object* x_2584; 
x_2583 = lean_ctor_get(x_2578, 1);
lean_inc(x_2583);
lean_dec(x_2578);
x_2584 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2584, 0, x_3);
lean_ctor_set(x_2584, 1, x_2583);
return x_2584;
}
}
else
{
lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; lean_object* x_2588; uint8_t x_2589; 
x_2585 = lean_ctor_get(x_2578, 1);
lean_inc(x_2585);
lean_dec(x_2578);
x_2586 = lean_mk_string("could not find below term in the local context");
x_2587 = l_Lean_stringToMessageData(x_2586);
lean_dec(x_2586);
x_2588 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2496, x_2587, x_8, x_9, x_10, x_11, x_2585);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2589 = !lean_is_exclusive(x_2588);
if (x_2589 == 0)
{
lean_object* x_2590; 
x_2590 = lean_ctor_get(x_2588, 0);
lean_dec(x_2590);
lean_ctor_set(x_2588, 0, x_3);
return x_2588;
}
else
{
lean_object* x_2591; lean_object* x_2592; 
x_2591 = lean_ctor_get(x_2588, 1);
lean_inc(x_2591);
lean_dec(x_2588);
x_2592 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2592, 0, x_3);
lean_ctor_set(x_2592, 1, x_2591);
return x_2592;
}
}
}
}
else
{
lean_object* x_2593; lean_object* x_2594; lean_object* x_2595; lean_object* x_2596; uint8_t x_2597; 
x_2593 = lean_ctor_get(x_2565, 1);
lean_inc(x_2593);
lean_dec(x_2565);
x_2594 = lean_st_ref_get(x_11, x_2593);
x_2595 = lean_ctor_get(x_2594, 0);
lean_inc(x_2595);
x_2596 = lean_ctor_get(x_2595, 3);
lean_inc(x_2596);
lean_dec(x_2595);
x_2597 = lean_ctor_get_uint8(x_2596, sizeof(void*)*1);
lean_dec(x_2596);
if (x_2597 == 0)
{
lean_object* x_2598; uint8_t x_2599; 
x_2598 = lean_ctor_get(x_2594, 1);
lean_inc(x_2598);
lean_dec(x_2594);
x_2599 = 0;
x_2497 = x_2599;
x_2498 = x_2598;
goto block_2508;
}
else
{
lean_object* x_2600; lean_object* x_2601; lean_object* x_2602; lean_object* x_2603; uint8_t x_2604; 
x_2600 = lean_ctor_get(x_2594, 1);
lean_inc(x_2600);
lean_dec(x_2594);
lean_inc(x_2496);
x_2601 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2600);
x_2602 = lean_ctor_get(x_2601, 0);
lean_inc(x_2602);
x_2603 = lean_ctor_get(x_2601, 1);
lean_inc(x_2603);
lean_dec(x_2601);
x_2604 = lean_unbox(x_2602);
lean_dec(x_2602);
x_2497 = x_2604;
x_2498 = x_2603;
goto block_2508;
}
}
}
else
{
uint8_t x_2605; 
lean_dec(x_2496);
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2605 = !lean_is_exclusive(x_2565);
if (x_2605 == 0)
{
lean_object* x_2606; 
x_2606 = lean_ctor_get(x_2565, 0);
lean_dec(x_2606);
lean_ctor_set_tag(x_2565, 0);
lean_ctor_set(x_2565, 0, x_3);
return x_2565;
}
else
{
lean_object* x_2607; lean_object* x_2608; 
x_2607 = lean_ctor_get(x_2565, 1);
lean_inc(x_2607);
lean_dec(x_2565);
x_2608 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2608, 0, x_3);
lean_ctor_set(x_2608, 1, x_2607);
return x_2608;
}
}
}
else
{
lean_object* x_2609; lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; lean_object* x_2614; lean_object* x_2615; lean_object* x_2616; lean_object* x_2617; lean_object* x_2618; 
x_2609 = lean_ctor_get(x_2560, 1);
lean_inc(x_2609);
lean_dec(x_2560);
x_2610 = lean_mk_string("");
x_2611 = l_Lean_stringToMessageData(x_2610);
lean_dec(x_2610);
x_2612 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2612, 0, x_2489);
lean_inc(x_2611);
x_2613 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2613, 0, x_2611);
lean_ctor_set(x_2613, 1, x_2612);
x_2614 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2614, 0, x_2613);
lean_ctor_set(x_2614, 1, x_2611);
lean_inc(x_2496);
x_2615 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2496, x_2614, x_8, x_9, x_10, x_11, x_2609);
x_2616 = lean_ctor_get(x_2615, 1);
lean_inc(x_2616);
lean_dec(x_2615);
x_2617 = lean_unsigned_to_nat(10u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_2618 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_2455, x_2617, x_8, x_9, x_10, x_11, x_2616);
if (lean_obj_tag(x_2618) == 0)
{
lean_object* x_2619; uint8_t x_2620; 
x_2619 = lean_ctor_get(x_2618, 0);
lean_inc(x_2619);
x_2620 = lean_unbox(x_2619);
lean_dec(x_2619);
if (x_2620 == 0)
{
lean_object* x_2621; lean_object* x_2622; lean_object* x_2623; lean_object* x_2624; uint8_t x_2625; 
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
x_2621 = lean_ctor_get(x_2618, 1);
lean_inc(x_2621);
lean_dec(x_2618);
x_2622 = lean_st_ref_get(x_11, x_2621);
x_2623 = lean_ctor_get(x_2622, 0);
lean_inc(x_2623);
x_2624 = lean_ctor_get(x_2623, 3);
lean_inc(x_2624);
lean_dec(x_2623);
x_2625 = lean_ctor_get_uint8(x_2624, sizeof(void*)*1);
lean_dec(x_2624);
if (x_2625 == 0)
{
uint8_t x_2626; 
lean_dec(x_2496);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2626 = !lean_is_exclusive(x_2622);
if (x_2626 == 0)
{
lean_object* x_2627; 
x_2627 = lean_ctor_get(x_2622, 0);
lean_dec(x_2627);
lean_ctor_set(x_2622, 0, x_3);
return x_2622;
}
else
{
lean_object* x_2628; lean_object* x_2629; 
x_2628 = lean_ctor_get(x_2622, 1);
lean_inc(x_2628);
lean_dec(x_2622);
x_2629 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2629, 0, x_3);
lean_ctor_set(x_2629, 1, x_2628);
return x_2629;
}
}
else
{
lean_object* x_2630; lean_object* x_2631; lean_object* x_2632; uint8_t x_2633; 
x_2630 = lean_ctor_get(x_2622, 1);
lean_inc(x_2630);
lean_dec(x_2622);
lean_inc(x_2496);
x_2631 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2630);
x_2632 = lean_ctor_get(x_2631, 0);
lean_inc(x_2632);
x_2633 = lean_unbox(x_2632);
lean_dec(x_2632);
if (x_2633 == 0)
{
uint8_t x_2634; 
lean_dec(x_2496);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2634 = !lean_is_exclusive(x_2631);
if (x_2634 == 0)
{
lean_object* x_2635; 
x_2635 = lean_ctor_get(x_2631, 0);
lean_dec(x_2635);
lean_ctor_set(x_2631, 0, x_3);
return x_2631;
}
else
{
lean_object* x_2636; lean_object* x_2637; 
x_2636 = lean_ctor_get(x_2631, 1);
lean_inc(x_2636);
lean_dec(x_2631);
x_2637 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2637, 0, x_3);
lean_ctor_set(x_2637, 1, x_2636);
return x_2637;
}
}
else
{
lean_object* x_2638; lean_object* x_2639; lean_object* x_2640; lean_object* x_2641; uint8_t x_2642; 
x_2638 = lean_ctor_get(x_2631, 1);
lean_inc(x_2638);
lean_dec(x_2631);
x_2639 = lean_mk_string("could not find below term in the local context");
x_2640 = l_Lean_stringToMessageData(x_2639);
lean_dec(x_2639);
x_2641 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2496, x_2640, x_8, x_9, x_10, x_11, x_2638);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2642 = !lean_is_exclusive(x_2641);
if (x_2642 == 0)
{
lean_object* x_2643; 
x_2643 = lean_ctor_get(x_2641, 0);
lean_dec(x_2643);
lean_ctor_set(x_2641, 0, x_3);
return x_2641;
}
else
{
lean_object* x_2644; lean_object* x_2645; 
x_2644 = lean_ctor_get(x_2641, 1);
lean_inc(x_2644);
lean_dec(x_2641);
x_2645 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2645, 0, x_3);
lean_ctor_set(x_2645, 1, x_2644);
return x_2645;
}
}
}
}
else
{
lean_object* x_2646; lean_object* x_2647; lean_object* x_2648; lean_object* x_2649; uint8_t x_2650; 
x_2646 = lean_ctor_get(x_2618, 1);
lean_inc(x_2646);
lean_dec(x_2618);
x_2647 = lean_st_ref_get(x_11, x_2646);
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
x_2497 = x_2652;
x_2498 = x_2651;
goto block_2508;
}
else
{
lean_object* x_2653; lean_object* x_2654; lean_object* x_2655; lean_object* x_2656; uint8_t x_2657; 
x_2653 = lean_ctor_get(x_2647, 1);
lean_inc(x_2653);
lean_dec(x_2647);
lean_inc(x_2496);
x_2654 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2496, x_8, x_9, x_10, x_11, x_2653);
x_2655 = lean_ctor_get(x_2654, 0);
lean_inc(x_2655);
x_2656 = lean_ctor_get(x_2654, 1);
lean_inc(x_2656);
lean_dec(x_2654);
x_2657 = lean_unbox(x_2655);
lean_dec(x_2655);
x_2497 = x_2657;
x_2498 = x_2656;
goto block_2508;
}
}
}
else
{
uint8_t x_2658; 
lean_dec(x_2496);
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2658 = !lean_is_exclusive(x_2618);
if (x_2658 == 0)
{
lean_object* x_2659; 
x_2659 = lean_ctor_get(x_2618, 0);
lean_dec(x_2659);
lean_ctor_set_tag(x_2618, 0);
lean_ctor_set(x_2618, 0, x_3);
return x_2618;
}
else
{
lean_object* x_2660; lean_object* x_2661; 
x_2660 = lean_ctor_get(x_2618, 1);
lean_inc(x_2660);
lean_dec(x_2618);
x_2661 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2661, 0, x_3);
lean_ctor_set(x_2661, 1, x_2660);
return x_2661;
}
}
}
}
block_2508:
{
if (x_2497 == 0)
{
lean_dec(x_2496);
x_2456 = x_2498;
goto block_2487;
}
else
{
lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; lean_object* x_2502; lean_object* x_2503; lean_object* x_2504; lean_object* x_2505; lean_object* x_2506; lean_object* x_2507; 
x_2499 = lean_mk_string("Found below term in the local context: ");
x_2500 = l_Lean_stringToMessageData(x_2499);
lean_dec(x_2499);
lean_inc(x_2452);
x_2501 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2501, 0, x_2452);
x_2502 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2502, 0, x_2500);
lean_ctor_set(x_2502, 1, x_2501);
x_2503 = lean_mk_string("");
x_2504 = l_Lean_stringToMessageData(x_2503);
lean_dec(x_2503);
x_2505 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_2505, 0, x_2502);
lean_ctor_set(x_2505, 1, x_2504);
x_2506 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2496, x_2505, x_8, x_9, x_10, x_11, x_2498);
x_2507 = lean_ctor_get(x_2506, 1);
lean_inc(x_2507);
lean_dec(x_2506);
x_2456 = x_2507;
goto block_2487;
}
}
}
else
{
uint8_t x_2662; 
lean_dec(x_2455);
lean_dec(x_2454);
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_2662 = !lean_is_exclusive(x_2488);
if (x_2662 == 0)
{
lean_object* x_2663; 
x_2663 = lean_ctor_get(x_2488, 0);
lean_dec(x_2663);
lean_ctor_set_tag(x_2488, 0);
lean_ctor_set(x_2488, 0, x_3);
return x_2488;
}
else
{
lean_object* x_2664; lean_object* x_2665; 
x_2664 = lean_ctor_get(x_2488, 1);
lean_inc(x_2664);
lean_dec(x_2488);
x_2665 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2665, 0, x_3);
lean_ctor_set(x_2665, 1, x_2664);
return x_2665;
}
}
block_2487:
{
lean_object* x_2457; uint8_t x_2458; 
x_2457 = lean_array_get_size(x_1);
x_2458 = lean_nat_dec_lt(x_2432, x_2457);
if (x_2458 == 0)
{
lean_object* x_2459; lean_object* x_2460; lean_object* x_2461; 
lean_dec(x_2457);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_2449)) {
 x_2459 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2459 = x_2449;
}
lean_ctor_set(x_2459, 0, x_2452);
lean_ctor_set(x_2459, 1, x_2435);
if (lean_is_scalar(x_2436)) {
 x_2460 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2460 = x_2436;
}
lean_ctor_set(x_2460, 0, x_2459);
if (lean_is_scalar(x_2454)) {
 x_2461 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2461 = x_2454;
}
lean_ctor_set(x_2461, 0, x_2460);
lean_ctor_set(x_2461, 1, x_2456);
return x_2461;
}
else
{
uint8_t x_2462; 
x_2462 = lean_nat_dec_le(x_2457, x_2457);
if (x_2462 == 0)
{
lean_object* x_2463; lean_object* x_2464; lean_object* x_2465; 
lean_dec(x_2457);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
if (lean_is_scalar(x_2449)) {
 x_2463 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2463 = x_2449;
}
lean_ctor_set(x_2463, 0, x_2452);
lean_ctor_set(x_2463, 1, x_2435);
if (lean_is_scalar(x_2436)) {
 x_2464 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2464 = x_2436;
}
lean_ctor_set(x_2464, 0, x_2463);
if (lean_is_scalar(x_2454)) {
 x_2465 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2465 = x_2454;
}
lean_ctor_set(x_2465, 0, x_2464);
lean_ctor_set(x_2465, 1, x_2456);
return x_2465;
}
else
{
size_t x_2466; size_t x_2467; lean_object* x_2468; 
lean_dec(x_2454);
x_2466 = 0;
x_2467 = lean_usize_of_nat(x_2457);
lean_dec(x_2457);
lean_inc(x_2452);
x_2468 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_2452, x_1, x_2466, x_2467, x_8, x_9, x_10, x_11, x_2456);
if (lean_obj_tag(x_2468) == 0)
{
lean_object* x_2469; uint8_t x_2470; 
x_2469 = lean_ctor_get(x_2468, 0);
lean_inc(x_2469);
x_2470 = lean_unbox(x_2469);
lean_dec(x_2469);
if (x_2470 == 0)
{
uint8_t x_2471; 
lean_dec(x_3);
x_2471 = !lean_is_exclusive(x_2468);
if (x_2471 == 0)
{
lean_object* x_2472; lean_object* x_2473; lean_object* x_2474; 
x_2472 = lean_ctor_get(x_2468, 0);
lean_dec(x_2472);
if (lean_is_scalar(x_2449)) {
 x_2473 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2473 = x_2449;
}
lean_ctor_set(x_2473, 0, x_2452);
lean_ctor_set(x_2473, 1, x_2435);
if (lean_is_scalar(x_2436)) {
 x_2474 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2474 = x_2436;
}
lean_ctor_set(x_2474, 0, x_2473);
lean_ctor_set(x_2468, 0, x_2474);
return x_2468;
}
else
{
lean_object* x_2475; lean_object* x_2476; lean_object* x_2477; lean_object* x_2478; 
x_2475 = lean_ctor_get(x_2468, 1);
lean_inc(x_2475);
lean_dec(x_2468);
if (lean_is_scalar(x_2449)) {
 x_2476 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2476 = x_2449;
}
lean_ctor_set(x_2476, 0, x_2452);
lean_ctor_set(x_2476, 1, x_2435);
if (lean_is_scalar(x_2436)) {
 x_2477 = lean_alloc_ctor(1, 1, 0);
} else {
 x_2477 = x_2436;
}
lean_ctor_set(x_2477, 0, x_2476);
x_2478 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2478, 0, x_2477);
lean_ctor_set(x_2478, 1, x_2475);
return x_2478;
}
}
else
{
uint8_t x_2479; 
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
x_2479 = !lean_is_exclusive(x_2468);
if (x_2479 == 0)
{
lean_object* x_2480; 
x_2480 = lean_ctor_get(x_2468, 0);
lean_dec(x_2480);
lean_ctor_set(x_2468, 0, x_3);
return x_2468;
}
else
{
lean_object* x_2481; lean_object* x_2482; 
x_2481 = lean_ctor_get(x_2468, 1);
lean_inc(x_2481);
lean_dec(x_2468);
x_2482 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2482, 0, x_3);
lean_ctor_set(x_2482, 1, x_2481);
return x_2482;
}
}
}
else
{
uint8_t x_2483; 
lean_dec(x_2452);
lean_dec(x_2449);
lean_dec(x_2436);
lean_dec(x_2435);
x_2483 = !lean_is_exclusive(x_2468);
if (x_2483 == 0)
{
lean_object* x_2484; 
x_2484 = lean_ctor_get(x_2468, 0);
lean_dec(x_2484);
lean_ctor_set_tag(x_2468, 0);
lean_ctor_set(x_2468, 0, x_3);
return x_2468;
}
else
{
lean_object* x_2485; lean_object* x_2486; 
x_2485 = lean_ctor_get(x_2468, 1);
lean_inc(x_2485);
lean_dec(x_2468);
x_2486 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2486, 0, x_3);
lean_ctor_set(x_2486, 1, x_2485);
return x_2486;
}
}
}
}
}
}
else
{
uint8_t x_2666; 
lean_dec(x_2436);
lean_dec(x_2435);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_2666 = !lean_is_exclusive(x_2445);
if (x_2666 == 0)
{
return x_2445;
}
else
{
lean_object* x_2667; lean_object* x_2668; lean_object* x_2669; 
x_2667 = lean_ctor_get(x_2445, 0);
x_2668 = lean_ctor_get(x_2445, 1);
lean_inc(x_2668);
lean_inc(x_2667);
lean_dec(x_2445);
x_2669 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2669, 0, x_2667);
lean_ctor_set(x_2669, 1, x_2668);
return x_2669;
}
}
}
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
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
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
x_16 = lean_array_uget(x_5, x_7);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_16);
x_17 = l_Lean_Meta_inferType(x_16, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_levelZero;
x_21 = l_Lean_mkSort(x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Expr_getAppNumArgsAux(x_18, x_22);
lean_inc(x_23);
x_24 = lean_mk_array(x_23, x_21);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_23, x_25);
lean_dec(x_23);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_2);
x_27 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__3(x_1, x_2, x_3, x_16, x_18, x_24, x_26, x_9, x_10, x_11, x_12, x_19);
lean_dec(x_16);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; size_t x_30; size_t x_31; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
x_31 = x_7 + x_30;
lean_inc(x_4);
{
size_t _tmp_6 = x_31;
lean_object* _tmp_7 = x_4;
lean_object* _tmp_12 = x_29;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_13 = _tmp_12;
}
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_27);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_27, 0);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_28);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_27, 0, x_37);
return x_27;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_28, 0);
lean_inc(x_38);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_27, 0, x_41);
return x_27;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_dec(x_27);
x_43 = lean_ctor_get(x_28, 0);
lean_inc(x_43);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_44 = x_28;
} else {
 lean_dec_ref(x_28);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 1, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_43);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_42);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_27);
if (x_49 == 0)
{
return x_27;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_27, 0);
x_51 = lean_ctor_get(x_27, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_27);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_17);
if (x_53 == 0)
{
return x_17;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_17, 0);
x_55 = lean_ctor_get(x_17, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_17);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_array_get_size(x_1);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
lean_inc(x_10);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__4(x_1, x_2, x_8, x_10, x_1, x_12, x_13, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_14);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_14, 0);
lean_dec(x_22);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
lean_ctor_set(x_14, 0, x_16);
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_14, 0, x_25);
return x_14;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_dec(x_14);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_28 = x_16;
} else {
 lean_dec_ref(x_16);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(1, 1, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_26);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_14);
if (x_31 == 0)
{
return x_14;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_14, 0);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_14);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_11 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_12 = l_Array_anyMUnsafe_any___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__2(x_1, x_2, x_10, x_11, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_16 = l_Array_forInUnsafe_loop___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__4(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_IndPredBelow_findBelowIdx(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelow___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_4, 1);
x_14 = lean_nat_dec_le(x_13, x_6);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_5, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_60; 
lean_dec(x_7);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_5, x_17);
lean_dec(x_5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_1);
x_60 = l_Lean_Meta_IndPredBelow_mkBrecOnDecl(x_1, x_6, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_10);
x_63 = l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(x_61, x_8, x_9, x_10, x_11, x_62);
lean_dec(x_61);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_ctor_get(x_4, 2);
x_66 = lean_nat_add(x_6, x_65);
lean_dec(x_6);
x_67 = lean_box(0);
x_5 = x_18;
x_6 = x_66;
x_7 = x_67;
x_12 = x_64;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_63, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
lean_dec(x_63);
x_19 = x_69;
x_20 = x_70;
goto block_59;
}
}
else
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_60, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_60, 1);
lean_inc(x_72);
lean_dec(x_60);
x_19 = x_71;
x_20 = x_72;
goto block_59;
}
block_59:
{
uint8_t x_21; lean_object* x_22; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_st_ref_get(x_11, x_20);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_49, 3);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_ctor_get_uint8(x_50, sizeof(void*)*1);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = 0;
x_21 = x_53;
x_22 = x_52;
goto block_47;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
lean_inc(x_2);
x_55 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_2, x_8, x_9, x_10, x_11, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_unbox(x_56);
lean_dec(x_56);
x_21 = x_58;
x_22 = x_57;
goto block_47;
}
block_47:
{
if (x_21 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_19);
x_23 = lean_ctor_get(x_4, 2);
x_24 = lean_nat_add(x_6, x_23);
lean_dec(x_6);
x_25 = lean_box(0);
x_5 = x_18;
x_6 = x_24;
x_7 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_27 = lean_mk_string("failed to prove brecOn for ");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = l_Lean_instInhabitedName;
x_30 = lean_array_get(x_29, x_3, x_6);
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_mk_string("\n");
x_34 = l_Lean_stringToMessageData(x_33);
lean_dec(x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_Exception_toMessageData(x_19);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("");
x_39 = l_Lean_stringToMessageData(x_38);
lean_dec(x_38);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_2);
x_41 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_2, x_40, x_8, x_9, x_10, x_11, x_22);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_4, 2);
x_44 = lean_nat_add(x_6, x_43);
lean_dec(x_6);
x_45 = lean_box(0);
x_5 = x_18;
x_6 = x_44;
x_7 = x_45;
x_12 = x_42;
goto _start;
}
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_7);
lean_ctor_set(x_73, 1, x_12);
return x_73;
}
}
else
{
lean_object* x_74; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_7);
lean_ctor_set(x_74, 1, x_12);
return x_74;
}
}
}
lean_object* l_Lean_mkCasesOn___at_Lean_Meta_IndPredBelow_mkBelow___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_mk_cases_on(x_10, x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(x_12, x_2, x_3, x_4, x_5, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_4);
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_st_ref_take(x_5, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
lean_ctor_set(x_16, 0, x_14);
x_20 = lean_st_ref_set(x_5, x_16, x_17);
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
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_16, 1);
x_28 = lean_ctor_get(x_16, 2);
x_29 = lean_ctor_get(x_16, 3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_14);
lean_ctor_set(x_30, 1, x_27);
lean_ctor_set(x_30, 2, x_28);
lean_ctor_set(x_30, 3, x_29);
x_31 = lean_st_ref_set(x_5, x_30, x_17);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
x_34 = lean_box(0);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkBelow___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_2 == x_3;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_11 = lean_array_uget(x_1, x_2);
lean_inc(x_7);
x_12 = l_Lean_mkCasesOn___at_Lean_Meta_IndPredBelow_mkBelow___spec__2(x_11, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
x_16 = x_2 + x_15;
x_2 = x_16;
x_4 = x_13;
x_9 = x_14;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_7);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_9);
return x_22;
}
}
}
lean_object* l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(lean_object* x_1) {
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
x_6 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(x_5);
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
x_10 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_IndPredBelow_mkBelow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_1);
x_7 = l_Lean_isInductivePredicate___at_Lean_Meta_IndPredBelow_findBelowIdx___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_box(0);
x_12 = lean_mk_string("Meta");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("IndPredBelow");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_st_ref_get(x_5, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 3);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get_uint8(x_18, sizeof(void*)*1);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_16, 0);
lean_dec(x_21);
x_22 = lean_box(0);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_dec(x_16);
lean_inc(x_15);
x_27 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_15, x_2, x_3, x_4, x_5, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
uint8_t x_30; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_27, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_dec(x_27);
x_37 = lean_mk_string("Not inductive predicate");
x_38 = l_Lean_stringToMessageData(x_37);
lean_dec(x_37);
x_39 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_15, x_38, x_2, x_3, x_4, x_5, x_36);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_7, 1);
lean_inc(x_40);
lean_dec(x_7);
lean_inc(x_1);
x_41 = l_Lean_getConstInfoInduct___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoForKernelRec___spec__1(x_1, x_2, x_3, x_4, x_5, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get_uint8(x_42, sizeof(void*)*5);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_dec(x_1);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_box(0);
x_46 = lean_mk_string("Meta");
x_47 = lean_name_mk_string(x_45, x_46);
x_48 = lean_mk_string("IndPredBelow");
x_49 = lean_name_mk_string(x_47, x_48);
x_50 = lean_st_ref_get(x_5, x_44);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 3);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get_uint8(x_52, sizeof(void*)*1);
lean_dec(x_52);
if (x_53 == 0)
{
uint8_t x_54; 
lean_dec(x_49);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_50);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_50, 0);
lean_dec(x_55);
x_56 = lean_box(0);
lean_ctor_set(x_50, 0, x_56);
return x_50;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_dec(x_50);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_dec(x_50);
lean_inc(x_49);
x_61 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_49, x_2, x_3, x_4, x_5, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
uint8_t x_64; 
lean_dec(x_49);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_61);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_61, 0);
lean_dec(x_65);
x_66 = lean_box(0);
lean_ctor_set(x_61, 0, x_66);
return x_61;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_ctor_get(x_61, 1);
lean_inc(x_70);
lean_dec(x_61);
x_71 = lean_mk_string("Not recursive");
x_72 = l_Lean_stringToMessageData(x_71);
lean_dec(x_71);
x_73 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_49, x_72, x_2, x_3, x_4, x_5, x_70);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_41, 1);
lean_inc(x_74);
lean_dec(x_41);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_75 = l_Lean_Meta_IndPredBelow_mkContext(x_1, x_2, x_3, x_4, x_5, x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_76);
x_78 = l_Lean_Meta_IndPredBelow_mkBelowDecl(x_76, x_2, x_3, x_4, x_5, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_inc(x_4);
x_81 = l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(x_79, x_2, x_3, x_4, x_5, x_80);
lean_dec(x_79);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_117; lean_object* x_118; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = lean_box(0);
x_84 = lean_mk_string("Meta");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_mk_string("IndPredBelow");
x_87 = lean_name_mk_string(x_85, x_86);
x_132 = lean_st_ref_get(x_5, x_82);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_133, 3);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_ctor_get_uint8(x_134, sizeof(void*)*1);
lean_dec(x_134);
if (x_135 == 0)
{
lean_object* x_136; uint8_t x_137; 
x_136 = lean_ctor_get(x_132, 1);
lean_inc(x_136);
lean_dec(x_132);
x_137 = 0;
x_117 = x_137;
x_118 = x_136;
goto block_131;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_138 = lean_ctor_get(x_132, 1);
lean_inc(x_138);
lean_dec(x_132);
lean_inc(x_87);
x_139 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_87, x_2, x_3, x_4, x_5, x_138);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = lean_unbox(x_140);
lean_dec(x_140);
x_117 = x_142;
x_118 = x_141;
goto block_131;
}
block_116:
{
lean_object* x_89; lean_object* x_90; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_89 = lean_ctor_get(x_76, 2);
lean_inc(x_89);
x_103 = lean_array_get_size(x_89);
x_104 = lean_unsigned_to_nat(0u);
x_105 = lean_nat_dec_lt(x_104, x_103);
if (x_105 == 0)
{
lean_dec(x_103);
x_90 = x_88;
goto block_102;
}
else
{
uint8_t x_106; 
x_106 = lean_nat_dec_le(x_103, x_103);
if (x_106 == 0)
{
lean_dec(x_103);
x_90 = x_88;
goto block_102;
}
else
{
size_t x_107; size_t x_108; lean_object* x_109; lean_object* x_110; 
x_107 = 0;
x_108 = lean_usize_of_nat(x_103);
lean_dec(x_103);
x_109 = lean_box(0);
lean_inc(x_4);
x_110 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkBelow___spec__3(x_89, x_107, x_108, x_109, x_2, x_3, x_4, x_5, x_88);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
x_90 = x_111;
goto block_102;
}
else
{
uint8_t x_112; 
lean_dec(x_89);
lean_dec(x_87);
lean_dec(x_76);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_110);
if (x_112 == 0)
{
return x_110;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_110, 0);
x_114 = lean_ctor_get(x_110, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_110);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
}
block_102:
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_91 = lean_ctor_get(x_76, 1);
lean_inc(x_91);
x_92 = lean_array_get_size(x_91);
lean_dec(x_91);
x_93 = lean_unsigned_to_nat(0u);
x_94 = lean_unsigned_to_nat(1u);
lean_inc(x_92);
x_95 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_92);
lean_ctor_set(x_95, 2, x_94);
x_96 = lean_box(0);
x_97 = l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelow___spec__1(x_76, x_87, x_89, x_95, x_92, x_93, x_96, x_2, x_3, x_4, x_5, x_90);
lean_dec(x_95);
lean_dec(x_89);
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_97, 0);
lean_dec(x_99);
lean_ctor_set(x_97, 0, x_96);
return x_97;
}
else
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
lean_dec(x_97);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_96);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
block_131:
{
if (x_117 == 0)
{
x_88 = x_118;
goto block_116;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_119 = lean_mk_string("added ");
x_120 = l_Lean_stringToMessageData(x_119);
lean_dec(x_119);
x_121 = lean_ctor_get(x_76, 2);
lean_inc(x_121);
x_122 = lean_array_to_list(lean_box(0), x_121);
x_123 = l_List_map___at_Lean_Meta_IndPredBelow_mkBelow___spec__4(x_122);
x_124 = l_Lean_MessageData_ofList(x_123);
lean_dec(x_123);
x_125 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_125, 0, x_120);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_mk_string("");
x_127 = l_Lean_stringToMessageData(x_126);
lean_dec(x_126);
x_128 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_127);
lean_inc(x_87);
x_129 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_87, x_128, x_2, x_3, x_4, x_5, x_118);
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
lean_dec(x_129);
x_88 = x_130;
goto block_116;
}
}
}
else
{
uint8_t x_143; 
lean_dec(x_76);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = !lean_is_exclusive(x_81);
if (x_143 == 0)
{
return x_81;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_81, 0);
x_145 = lean_ctor_get(x_81, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_81);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_76);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = !lean_is_exclusive(x_78);
if (x_147 == 0)
{
return x_78;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_78, 0);
x_149 = lean_ctor_get(x_78, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_78);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
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
x_151 = !lean_is_exclusive(x_75);
if (x_151 == 0)
{
return x_75;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_75, 0);
x_153 = lean_ctor_get(x_75, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_75);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
else
{
uint8_t x_155; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_155 = !lean_is_exclusive(x_41);
if (x_155 == 0)
{
return x_41;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_41, 0);
x_157 = lean_ctor_get(x_41, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_41);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelow___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at_Lean_Meta_IndPredBelow_mkBelow___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Lean_mkCasesOn___at_Lean_Meta_IndPredBelow_mkBelow___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_mkCasesOn___at_Lean_Meta_IndPredBelow_mkBelow___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkBelow___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_IndPredBelow_mkBelow___spec__3(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_IndPredBelow_initFn____x40_Lean_Meta_IndPredBelow___hyg_5254_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Meta");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("IndPredBelow");
x_6 = lean_name_mk_string(x_4, x_5);
lean_inc(x_6);
x_7 = l_Lean_registerTraceClass(x_6, x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_mk_string("match");
x_10 = lean_name_mk_string(x_6, x_9);
x_11 = l_Lean_registerTraceClass(x_10, x_8);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_6);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_Constructions(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Meta_Tactic(lean_object*);
lean_object* initialize_Lean_Meta_Match(lean_object*);
lean_object* initialize_Lean_Meta_Reduce(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_IndPredBelow(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Constructions(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Reduce(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_IndPredBelow_initFn____x40_Lean_Meta_IndPredBelow___hyg_5_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_IndPredBelow_maxBackwardChainingDepth = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_IndPredBelow_maxBackwardChainingDepth);
lean_dec_ref(res);
l_Lean_Meta_IndPredBelow_instInhabitedVariables = _init_l_Lean_Meta_IndPredBelow_instInhabitedVariables();
lean_mark_persistent(l_Lean_Meta_IndPredBelow_instInhabitedVariables);
l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1 = _init_l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_IndPredBelow_mkContext___boxed__const__1);
l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at_Lean_Meta_IndPredBelow_mkCtorType_checkCount___spec__11___boxed__const__1);
l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___boxed__const__1 = _init_l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_IndPredBelow_mkCtorType_addMotives___boxed__const__1);
res = l_Lean_Meta_IndPredBelow_initFn____x40_Lean_Meta_IndPredBelow___hyg_5254_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
