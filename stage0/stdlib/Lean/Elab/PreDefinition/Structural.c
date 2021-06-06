// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural
// Imports: Init Lean.Util.ForEachExpr Lean.Meta.ForEachExpr Lean.Meta.RecursorInfo Lean.Meta.Match.Match Lean.Meta.Transform Lean.Meta.IndPredBelow Lean.Elab.PreDefinition.Basic
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
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_shouldBetaReduce___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__2(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__7___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_addAsAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_whnf___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_mkBelowMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductivePredicate___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__2(lean_object*);
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__2___boxed(lean_object**);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_dependsOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_forallTelescopeCompatibleAux___spec__15___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___boxed(lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__3(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_getElimInfo___spec__8(lean_object*, size_t, size_t);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_mkRef___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_structuralRecursion_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_binductionOnSuffix;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__2(lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict(lean_object*);
extern lean_object* l_Lean_Meta_smartUnfoldingSuffix;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_backwardsChaining(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13(lean_object*);
lean_object* l_Lean_Meta_forEachExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__4(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_structuralRecursion___lambda__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_run(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4___boxed__const__1;
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_State_matcherBelowDep___default;
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__2___boxed(lean_object**);
uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__7(lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_isInductivePredicate_visit(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__3(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__1(lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__2(lean_object*, size_t, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_expandCoe___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_structuralRecursion_match__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__1(lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_addImplicitTargets_collect___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__3(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchMatcherApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__1(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_reduce_visit___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1(lean_object*);
lean_object* l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(lean_object*);
lean_object* l_Lean_Elab_Structural_State_addMatchers___default;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_IndPredBelow_maxBackwardChainingDepth;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed(lean_object*);
lean_object* l_Lean_Elab_addNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1(lean_object*);
lean_object* l_Lean_Meta_mkIdRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__2(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_Structural_initFn____x40_Lean_Elab_PreDefinition_Structural___hyg_6367_(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4___boxed__const__1;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__3(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6___boxed__const__1;
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_shouldBetaReduce(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2___boxed__const__1;
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_forEachExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__2(lean_object*);
lean_object* l_Lean_isInductivePredicate___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_IndPredBelow_findBelowIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___boxed__const__1;
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_brecOnSuffix;
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___boxed__const__1;
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2___boxed__const__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_instInhabitedM(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9(lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_mkRef___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_mk_ref(x_1, x_8);
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
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 2);
lean_inc(x_14);
x_15 = lean_nat_dec_lt(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_2);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_8);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_10, 2);
lean_dec(x_19);
x_20 = lean_ctor_get(x_10, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_10, 0);
lean_dec(x_21);
x_22 = lean_array_fget(x_12, x_13);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_13, x_23);
lean_dec(x_13);
lean_ctor_set(x_10, 1, x_24);
x_25 = !lean_is_exclusive(x_4);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_4, 0);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
uint8_t x_28; uint8_t x_29; lean_object* x_30; 
x_28 = 2;
x_29 = 0;
lean_ctor_set_uint8(x_26, 5, x_28);
lean_ctor_set_uint8(x_26, 9, x_29);
x_30 = l_Lean_Meta_isExprDefEq(x_3, x_22, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_30);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_30, 0);
lean_dec(x_34);
x_35 = 1;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_1, 0, x_37);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_30, 0, x_38);
return x_30;
}
else
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_dec(x_30);
x_40 = 1;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_1, 0, x_42);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_1);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_39);
return x_44;
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_30);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_30, 0);
lean_dec(x_46);
lean_ctor_set(x_1, 0, x_2);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_30, 0, x_47);
return x_30;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_30, 1);
lean_inc(x_48);
lean_dec(x_30);
lean_ctor_set(x_1, 0, x_2);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_1);
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
lean_free_object(x_1);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_30);
if (x_51 == 0)
{
return x_30;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_30, 0);
x_53 = lean_ctor_get(x_30, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_30);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_55 = lean_ctor_get_uint8(x_26, 0);
x_56 = lean_ctor_get_uint8(x_26, 1);
x_57 = lean_ctor_get_uint8(x_26, 2);
x_58 = lean_ctor_get_uint8(x_26, 3);
x_59 = lean_ctor_get_uint8(x_26, 4);
x_60 = lean_ctor_get_uint8(x_26, 6);
x_61 = lean_ctor_get_uint8(x_26, 7);
x_62 = lean_ctor_get_uint8(x_26, 8);
lean_dec(x_26);
x_63 = 2;
x_64 = 0;
x_65 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_65, 0, x_55);
lean_ctor_set_uint8(x_65, 1, x_56);
lean_ctor_set_uint8(x_65, 2, x_57);
lean_ctor_set_uint8(x_65, 3, x_58);
lean_ctor_set_uint8(x_65, 4, x_59);
lean_ctor_set_uint8(x_65, 5, x_63);
lean_ctor_set_uint8(x_65, 6, x_60);
lean_ctor_set_uint8(x_65, 7, x_61);
lean_ctor_set_uint8(x_65, 8, x_62);
lean_ctor_set_uint8(x_65, 9, x_64);
lean_ctor_set(x_4, 0, x_65);
x_66 = l_Lean_Meta_isExprDefEq(x_3, x_22, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_unbox(x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_2);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_70 = x_66;
} else {
 lean_dec_ref(x_66);
 x_70 = lean_box(0);
}
x_71 = 1;
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_1, 0, x_73);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_1);
if (lean_is_scalar(x_70)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_70;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_69);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_66, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_77 = x_66;
} else {
 lean_dec_ref(x_66);
 x_77 = lean_box(0);
}
lean_ctor_set(x_1, 0, x_2);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_1);
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
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_10);
lean_free_object(x_1);
lean_dec(x_2);
x_80 = lean_ctor_get(x_66, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_66, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_82 = x_66;
} else {
 lean_dec_ref(x_66);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; lean_object* x_96; uint8_t x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_84 = lean_ctor_get(x_4, 0);
x_85 = lean_ctor_get(x_4, 1);
x_86 = lean_ctor_get(x_4, 2);
x_87 = lean_ctor_get(x_4, 3);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_4);
x_88 = lean_ctor_get_uint8(x_84, 0);
x_89 = lean_ctor_get_uint8(x_84, 1);
x_90 = lean_ctor_get_uint8(x_84, 2);
x_91 = lean_ctor_get_uint8(x_84, 3);
x_92 = lean_ctor_get_uint8(x_84, 4);
x_93 = lean_ctor_get_uint8(x_84, 6);
x_94 = lean_ctor_get_uint8(x_84, 7);
x_95 = lean_ctor_get_uint8(x_84, 8);
if (lean_is_exclusive(x_84)) {
 x_96 = x_84;
} else {
 lean_dec_ref(x_84);
 x_96 = lean_box(0);
}
x_97 = 2;
x_98 = 0;
if (lean_is_scalar(x_96)) {
 x_99 = lean_alloc_ctor(0, 0, 10);
} else {
 x_99 = x_96;
}
lean_ctor_set_uint8(x_99, 0, x_88);
lean_ctor_set_uint8(x_99, 1, x_89);
lean_ctor_set_uint8(x_99, 2, x_90);
lean_ctor_set_uint8(x_99, 3, x_91);
lean_ctor_set_uint8(x_99, 4, x_92);
lean_ctor_set_uint8(x_99, 5, x_97);
lean_ctor_set_uint8(x_99, 6, x_93);
lean_ctor_set_uint8(x_99, 7, x_94);
lean_ctor_set_uint8(x_99, 8, x_95);
lean_ctor_set_uint8(x_99, 9, x_98);
x_100 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_85);
lean_ctor_set(x_100, 2, x_86);
lean_ctor_set(x_100, 3, x_87);
x_101 = l_Lean_Meta_isExprDefEq(x_3, x_22, x_100, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_105 = x_101;
} else {
 lean_dec_ref(x_101);
 x_105 = lean_box(0);
}
x_106 = 1;
x_107 = lean_box(x_106);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_1, 0, x_108);
x_109 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_109, 0, x_1);
if (lean_is_scalar(x_105)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_105;
}
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_104);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_101, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_112 = x_101;
} else {
 lean_dec_ref(x_101);
 x_112 = lean_box(0);
}
lean_ctor_set(x_1, 0, x_2);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_1);
if (lean_is_scalar(x_112)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_112;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_111);
return x_114;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_10);
lean_free_object(x_1);
lean_dec(x_2);
x_115 = lean_ctor_get(x_101, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_101, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_117 = x_101;
} else {
 lean_dec_ref(x_101);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; uint8_t x_129; uint8_t x_130; uint8_t x_131; uint8_t x_132; uint8_t x_133; uint8_t x_134; uint8_t x_135; lean_object* x_136; uint8_t x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_10);
x_119 = lean_array_fget(x_12, x_13);
x_120 = lean_unsigned_to_nat(1u);
x_121 = lean_nat_add(x_13, x_120);
lean_dec(x_13);
x_122 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_122, 0, x_12);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_122, 2, x_14);
x_123 = lean_ctor_get(x_4, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_4, 1);
lean_inc(x_124);
x_125 = lean_ctor_get(x_4, 2);
lean_inc(x_125);
x_126 = lean_ctor_get(x_4, 3);
lean_inc(x_126);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 x_127 = x_4;
} else {
 lean_dec_ref(x_4);
 x_127 = lean_box(0);
}
x_128 = lean_ctor_get_uint8(x_123, 0);
x_129 = lean_ctor_get_uint8(x_123, 1);
x_130 = lean_ctor_get_uint8(x_123, 2);
x_131 = lean_ctor_get_uint8(x_123, 3);
x_132 = lean_ctor_get_uint8(x_123, 4);
x_133 = lean_ctor_get_uint8(x_123, 6);
x_134 = lean_ctor_get_uint8(x_123, 7);
x_135 = lean_ctor_get_uint8(x_123, 8);
if (lean_is_exclusive(x_123)) {
 x_136 = x_123;
} else {
 lean_dec_ref(x_123);
 x_136 = lean_box(0);
}
x_137 = 2;
x_138 = 0;
if (lean_is_scalar(x_136)) {
 x_139 = lean_alloc_ctor(0, 0, 10);
} else {
 x_139 = x_136;
}
lean_ctor_set_uint8(x_139, 0, x_128);
lean_ctor_set_uint8(x_139, 1, x_129);
lean_ctor_set_uint8(x_139, 2, x_130);
lean_ctor_set_uint8(x_139, 3, x_131);
lean_ctor_set_uint8(x_139, 4, x_132);
lean_ctor_set_uint8(x_139, 5, x_137);
lean_ctor_set_uint8(x_139, 6, x_133);
lean_ctor_set_uint8(x_139, 7, x_134);
lean_ctor_set_uint8(x_139, 8, x_135);
lean_ctor_set_uint8(x_139, 9, x_138);
if (lean_is_scalar(x_127)) {
 x_140 = lean_alloc_ctor(0, 4, 0);
} else {
 x_140 = x_127;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_124);
lean_ctor_set(x_140, 2, x_125);
lean_ctor_set(x_140, 3, x_126);
x_141 = l_Lean_Meta_isExprDefEq(x_3, x_119, x_140, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; uint8_t x_143; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_unbox(x_142);
lean_dec(x_142);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; uint8_t x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_2);
x_144 = lean_ctor_get(x_141, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_145 = x_141;
} else {
 lean_dec_ref(x_141);
 x_145 = lean_box(0);
}
x_146 = 1;
x_147 = lean_box(x_146);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_1, 1, x_122);
lean_ctor_set(x_1, 0, x_148);
x_149 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_149, 0, x_1);
if (lean_is_scalar(x_145)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_145;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_144);
return x_150;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_141, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_152 = x_141;
} else {
 lean_dec_ref(x_141);
 x_152 = lean_box(0);
}
lean_ctor_set(x_1, 1, x_122);
lean_ctor_set(x_1, 0, x_2);
x_153 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_153, 0, x_1);
if (lean_is_scalar(x_152)) {
 x_154 = lean_alloc_ctor(0, 2, 0);
} else {
 x_154 = x_152;
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_151);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_122);
lean_free_object(x_1);
lean_dec(x_2);
x_155 = lean_ctor_get(x_141, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_141, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_157 = x_141;
} else {
 lean_dec_ref(x_141);
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
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_159 = lean_ctor_get(x_1, 1);
lean_inc(x_159);
lean_dec(x_1);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
x_162 = lean_ctor_get(x_159, 2);
lean_inc(x_162);
x_163 = lean_nat_dec_lt(x_161, x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_162);
lean_dec(x_161);
lean_dec(x_160);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_2);
lean_ctor_set(x_164, 1, x_159);
x_165 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_165, 0, x_164);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_8);
return x_166;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; uint8_t x_178; uint8_t x_179; uint8_t x_180; uint8_t x_181; uint8_t x_182; uint8_t x_183; uint8_t x_184; lean_object* x_185; uint8_t x_186; uint8_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 lean_ctor_release(x_159, 2);
 x_167 = x_159;
} else {
 lean_dec_ref(x_159);
 x_167 = lean_box(0);
}
x_168 = lean_array_fget(x_160, x_161);
x_169 = lean_unsigned_to_nat(1u);
x_170 = lean_nat_add(x_161, x_169);
lean_dec(x_161);
if (lean_is_scalar(x_167)) {
 x_171 = lean_alloc_ctor(0, 3, 0);
} else {
 x_171 = x_167;
}
lean_ctor_set(x_171, 0, x_160);
lean_ctor_set(x_171, 1, x_170);
lean_ctor_set(x_171, 2, x_162);
x_172 = lean_ctor_get(x_4, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_4, 1);
lean_inc(x_173);
x_174 = lean_ctor_get(x_4, 2);
lean_inc(x_174);
x_175 = lean_ctor_get(x_4, 3);
lean_inc(x_175);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 x_176 = x_4;
} else {
 lean_dec_ref(x_4);
 x_176 = lean_box(0);
}
x_177 = lean_ctor_get_uint8(x_172, 0);
x_178 = lean_ctor_get_uint8(x_172, 1);
x_179 = lean_ctor_get_uint8(x_172, 2);
x_180 = lean_ctor_get_uint8(x_172, 3);
x_181 = lean_ctor_get_uint8(x_172, 4);
x_182 = lean_ctor_get_uint8(x_172, 6);
x_183 = lean_ctor_get_uint8(x_172, 7);
x_184 = lean_ctor_get_uint8(x_172, 8);
if (lean_is_exclusive(x_172)) {
 x_185 = x_172;
} else {
 lean_dec_ref(x_172);
 x_185 = lean_box(0);
}
x_186 = 2;
x_187 = 0;
if (lean_is_scalar(x_185)) {
 x_188 = lean_alloc_ctor(0, 0, 10);
} else {
 x_188 = x_185;
}
lean_ctor_set_uint8(x_188, 0, x_177);
lean_ctor_set_uint8(x_188, 1, x_178);
lean_ctor_set_uint8(x_188, 2, x_179);
lean_ctor_set_uint8(x_188, 3, x_180);
lean_ctor_set_uint8(x_188, 4, x_181);
lean_ctor_set_uint8(x_188, 5, x_186);
lean_ctor_set_uint8(x_188, 6, x_182);
lean_ctor_set_uint8(x_188, 7, x_183);
lean_ctor_set_uint8(x_188, 8, x_184);
lean_ctor_set_uint8(x_188, 9, x_187);
if (lean_is_scalar(x_176)) {
 x_189 = lean_alloc_ctor(0, 4, 0);
} else {
 x_189 = x_176;
}
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_173);
lean_ctor_set(x_189, 2, x_174);
lean_ctor_set(x_189, 3, x_175);
x_190 = l_Lean_Meta_isExprDefEq(x_3, x_168, x_189, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_unbox(x_191);
lean_dec(x_191);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_2);
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_194 = x_190;
} else {
 lean_dec_ref(x_190);
 x_194 = lean_box(0);
}
x_195 = 1;
x_196 = lean_box(x_195);
x_197 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_197, 0, x_196);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_171);
x_199 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_199, 0, x_198);
if (lean_is_scalar(x_194)) {
 x_200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_200 = x_194;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_193);
return x_200;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_201 = lean_ctor_get(x_190, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_202 = x_190;
} else {
 lean_dec_ref(x_190);
 x_202 = lean_box(0);
}
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_2);
lean_ctor_set(x_203, 1, x_171);
x_204 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_204, 0, x_203);
if (lean_is_scalar(x_202)) {
 x_205 = lean_alloc_ctor(0, 2, 0);
} else {
 x_205 = x_202;
}
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_201);
return x_205;
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_171);
lean_dec(x_2);
x_206 = lean_ctor_get(x_190, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_190, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_208 = x_190;
} else {
 lean_dec_ref(x_190);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__2(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_7(x_14, lean_box(0), x_12, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
else
{
lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
lean_dec(x_6);
x_17 = 1;
x_18 = x_2 + x_17;
x_19 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2(x_1, x_3, x_4, x_5, x_18, x_16, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 < x_4;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_7(x_14, lean_box(0), x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_array_uget(x_3, x_5);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_inc(x_2);
x_18 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__1), 8, 3);
lean_closure_set(x_18, 0, x_6);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_16);
x_19 = lean_box_usize(x_5);
x_20 = lean_box_usize(x_4);
x_21 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__2___boxed), 11, 5);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_19);
lean_closure_set(x_21, 2, x_2);
lean_closure_set(x_21, 3, x_3);
lean_closure_set(x_21, 4, x_20);
x_22 = lean_apply_9(x_17, lean_box(0), lean_box(0), x_18, x_21, x_7, x_8, x_9, x_10, x_11);
return x_22;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = l_Lean_Expr_isAppOf(x_6, x_1);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = 1;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_16 = l_Lean_levelZero;
x_17 = l_Lean_mkSort(x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Expr_getAppNumArgsAux(x_6, x_18);
lean_inc(x_19);
x_20 = lean_mk_array(x_19, x_17);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_19, x_21);
lean_dec(x_19);
x_23 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_6, x_20, x_22);
x_53 = lean_st_ref_get(x_10, x_11);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_st_ref_take(x_5, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_array_get_size(x_23);
x_59 = lean_nat_dec_lt(x_58, x_56);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_58);
x_60 = lean_st_ref_set(x_5, x_56, x_57);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_24 = x_61;
goto block_52;
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_56);
x_62 = lean_st_ref_set(x_5, x_58, x_57);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_24 = x_63;
goto block_52;
}
block_52:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; 
x_25 = l_Array_toSubarray___rarg(x_2, x_18, x_3);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_array_get_size(x_23);
x_29 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_30 = 0;
x_31 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2(x_4, x_26, x_23, x_29, x_30, x_27, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
lean_dec(x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
x_36 = 0;
x_37 = lean_box(x_36);
lean_ctor_set(x_31, 0, x_37);
return x_31;
}
else
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_dec(x_31);
x_39 = 0;
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
x_42 = !lean_is_exclusive(x_31);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_31, 0);
lean_dec(x_43);
x_44 = lean_ctor_get(x_33, 0);
lean_inc(x_44);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_44);
return x_31;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 1);
lean_inc(x_45);
lean_dec(x_31);
x_46 = lean_ctor_get(x_33, 0);
lean_inc(x_46);
lean_dec(x_33);
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
x_48 = !lean_is_exclusive(x_31);
if (x_48 == 0)
{
return x_31;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_31, 0);
x_50 = lean_ctor_get(x_31, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_31);
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_10 = l_ReaderT_instMonadReaderT___rarg(x_9);
x_11 = l_ReaderT_instMonadReaderT___rarg(x_10);
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
x_14 = lean_array_get_size(x_2);
lean_inc(x_14);
x_15 = l_IO_mkRef___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__1(x_14, x_4, x_5, x_6, x_7, x_8);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_16);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___lambda__1___boxed), 11, 5);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_14);
lean_closure_set(x_18, 3, x_13);
lean_closure_set(x_18, 4, x_16);
lean_inc(x_7);
x_19 = l_Lean_Meta_forEachExpr_x27(x_3, x_18, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_7, x_20);
lean_dec(x_7);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_st_ref_get(x_16, x_22);
lean_dec(x_16);
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
lean_dec(x_16);
lean_dec(x_7);
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
lean_object* l_IO_mkRef___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_mkRef___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___lambda__2(x_1, x_12, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___spec__2(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos_match__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_array_uget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_7, x_8);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_nat_dec_lt(x_13, x_5);
if (x_14 == 0)
{
size_t x_15; size_t x_16; 
lean_dec(x_13);
x_15 = 1;
x_16 = x_4 + x_15;
x_4 = x_16;
goto _start;
}
else
{
size_t x_18; size_t x_19; 
lean_dec(x_5);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_13;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_array_get_size(x_2);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___spec__1(x_1, x_2, x_5, x_6, x_3);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_7 < x_6;
if (x_14 == 0)
{
lean_object* x_15; 
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_8);
x_16 = lean_array_uget(x_5, x_7);
x_17 = l_Lean_Expr_fvarId_x21(x_16);
lean_inc(x_4);
x_18 = l_Lean_Meta_dependsOn(x_4, x_17, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(x_1, x_16);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_unbox(x_20);
lean_dec(x_20);
if (x_23 == 0)
{
size_t x_24; size_t x_25; 
lean_free_object(x_18);
lean_dec(x_16);
x_24 = 1;
x_25 = x_7 + x_24;
lean_inc(x_2);
{
size_t _tmp_6 = x_25;
lean_object* _tmp_7 = x_2;
lean_object* _tmp_12 = x_21;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_13 = _tmp_12;
}
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_4);
lean_dec(x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_3);
lean_ctor_set(x_27, 1, x_16);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_18, 0, x_31);
return x_18;
}
}
else
{
size_t x_32; size_t x_33; 
lean_free_object(x_18);
lean_dec(x_20);
lean_dec(x_16);
x_32 = 1;
x_33 = x_7 + x_32;
lean_inc(x_2);
{
size_t _tmp_6 = x_33;
lean_object* _tmp_7 = x_2;
lean_object* _tmp_12 = x_21;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_13 = _tmp_12;
}
goto _start;
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_18, 0);
x_36 = lean_ctor_get(x_18, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_18);
x_37 = l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(x_1, x_16);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = lean_unbox(x_35);
lean_dec(x_35);
if (x_38 == 0)
{
size_t x_39; size_t x_40; 
lean_dec(x_16);
x_39 = 1;
x_40 = x_7 + x_39;
lean_inc(x_2);
{
size_t _tmp_6 = x_40;
lean_object* _tmp_7 = x_2;
lean_object* _tmp_12 = x_36;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_13 = _tmp_12;
}
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_4);
lean_dec(x_2);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set(x_42, 1, x_16);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_36);
return x_47;
}
}
else
{
size_t x_48; size_t x_49; 
lean_dec(x_35);
lean_dec(x_16);
x_48 = 1;
x_49 = x_7 + x_48;
lean_inc(x_2);
{
size_t _tmp_6 = x_49;
lean_object* _tmp_7 = x_2;
lean_object* _tmp_12 = x_36;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_13 = _tmp_12;
}
goto _start;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
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
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
x_15 = lean_array_uget(x_4, x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_15);
x_16 = l_Lean_Meta_inferType(x_15, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_get_size(x_1);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = 0;
lean_inc_n(x_3, 2);
x_22 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__1(x_2, x_3, x_15, x_17, x_1, x_20, x_21, x_3, x_8, x_9, x_10, x_11, x_18);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; size_t x_26; size_t x_27; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = 1;
x_27 = x_6 + x_26;
lean_inc(x_3);
{
size_t _tmp_5 = x_27;
lean_object* _tmp_6 = x_3;
lean_object* _tmp_11 = x_25;
x_6 = _tmp_5;
x_7 = _tmp_6;
x_12 = _tmp_11;
}
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_22, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_24);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_22, 0, x_33);
return x_22;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_24, 0);
lean_inc(x_34);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_22, 0, x_37);
return x_22;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_22, 1);
lean_inc(x_38);
lean_dec(x_22);
x_39 = lean_ctor_get(x_24, 0);
lean_inc(x_39);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_40 = x_24;
} else {
 lean_dec_ref(x_24);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 1, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_38);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_16);
if (x_45 == 0)
{
return x_16;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_16, 0);
x_47 = lean_ctor_get(x_16, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_16);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_array_get_size(x_2);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
lean_inc(x_10);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__2(x_1, x_2, x_10, x_2, x_12, x_13, x_10, x_3, x_4, x_5, x_6, x_7);
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
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_14, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_23);
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
else
{
uint8_t x_27; 
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
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_16 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_14, x_15, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___spec__2(x_1, x_2, x_3, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_6 < x_5;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_7);
x_15 = lean_array_uget(x_4, x_6);
x_16 = l_Lean_Expr_fvarId_x21(x_15);
lean_inc(x_3);
x_17 = l_Lean_Meta_dependsOn(x_3, x_16, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; size_t x_21; size_t x_22; 
lean_dec(x_15);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = 1;
x_22 = x_6 + x_21;
lean_inc(x_1);
{
size_t _tmp_5 = x_22;
lean_object* _tmp_6 = x_1;
lean_object* _tmp_11 = x_20;
x_6 = _tmp_5;
x_7 = _tmp_6;
x_12 = _tmp_11;
}
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_3);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_15);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_17, 0, x_30);
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_dec(x_17);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_15);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_31);
return x_37;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
x_14 = lean_array_uget(x_3, x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_14);
x_15 = l_Lean_Meta_inferType(x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_array_get_size(x_1);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = 0;
lean_inc_n(x_2, 2);
x_21 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__1(x_2, x_14, x_16, x_1, x_19, x_20, x_2, x_7, x_8, x_9, x_10, x_17);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; size_t x_25; size_t x_26; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = 1;
x_26 = x_5 + x_25;
lean_inc(x_2);
{
size_t _tmp_4 = x_26;
lean_object* _tmp_5 = x_2;
lean_object* _tmp_10 = x_24;
x_5 = _tmp_4;
x_6 = _tmp_5;
x_11 = _tmp_10;
}
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_21, 0);
lean_dec(x_29);
x_30 = !lean_is_exclusive(x_23);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_21, 0, x_32);
return x_21;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_21, 0, x_36);
return x_21;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_dec(x_21);
x_38 = lean_ctor_get(x_23, 0);
lean_inc(x_38);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_39 = x_23;
} else {
 lean_dec_ref(x_23);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 1, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_38);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_37);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_15);
if (x_44 == 0)
{
return x_15;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_15, 0);
x_46 = lean_ctor_get(x_15, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_15);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_array_get_size(x_2);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
lean_inc(x_10);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__2(x_1, x_10, x_2, x_12, x_13, x_10, x_3, x_4, x_5, x_6, x_7);
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
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_14, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_23);
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
else
{
uint8_t x_27; 
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
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__1(x_1, x_2, x_3, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
return x_15;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___spec__2(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_mk_string("structural recursion cannot be used");
x_7 = l_Lean_stringToMessageData(x_6);
lean_dec(x_6);
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg(x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Structural_State_matcherBelowDep___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_NameSet_empty;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Structural_State_addMatchers___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Structural_instInhabitedM(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_mk_string("failed");
x_3 = l_Lean_stringToMessageData(x_2);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg___boxed), 7, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at_Lean_Elab_Structural_instInhabitedM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_mk_ref(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_11);
x_13 = lean_apply_6(x_1, x_11, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_6, x_15);
lean_dec(x_6);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_11, x_17);
lean_dec(x_11);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_6);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_run___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_24 = lean_st_ref_get(x_7, x_13);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_st_ref_get(x_7, x_26);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_get(x_5, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = lean_apply_6(x_1, x_3, x_4, x_5, x_6, x_7, x_32);
if (lean_obj_tag(x_34) == 0)
{
lean_dec(x_33);
lean_dec(x_27);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = x_34;
goto block_23;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_27, x_4, x_5, x_6, x_7, x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Meta_setMCtx(x_33, x_4, x_5, x_6, x_7, x_38);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get(x_35, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_dec(x_35);
x_43 = lean_st_ref_get(x_7, x_40);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_st_ref_set(x_3, x_12, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_6(x_2, x_3, x_4, x_5, x_6, x_7, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_dec(x_42);
lean_dec(x_41);
x_14 = x_47;
goto block_23;
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_47, 0);
lean_dec(x_50);
x_51 = !lean_is_exclusive(x_48);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_48, 1);
x_53 = lean_ctor_get(x_48, 0);
lean_dec(x_53);
x_54 = lean_box(1);
x_55 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_55, 0, x_54);
lean_inc(x_55);
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_42);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_52);
lean_ctor_set(x_48, 1, x_58);
lean_ctor_set(x_48, 0, x_41);
x_14 = x_47;
goto block_23;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_48, 1);
lean_inc(x_59);
lean_dec(x_48);
x_60 = lean_box(1);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_60);
lean_inc(x_61);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_42);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_59);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_41);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_47, 0, x_65);
x_14 = x_47;
goto block_23;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_66 = lean_ctor_get(x_47, 1);
lean_inc(x_66);
lean_dec(x_47);
x_67 = lean_ctor_get(x_48, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_68 = x_48;
} else {
 lean_dec_ref(x_48);
 x_68 = lean_box(0);
}
x_69 = lean_box(1);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
lean_inc(x_70);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_42);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_67);
if (lean_is_scalar(x_68)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_68;
}
lean_ctor_set(x_74, 0, x_41);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_66);
x_14 = x_75;
goto block_23;
}
}
else
{
uint8_t x_76; 
lean_dec(x_42);
lean_dec(x_41);
x_76 = !lean_is_exclusive(x_47);
if (x_76 == 0)
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_47, 0);
lean_dec(x_77);
x_14 = x_47;
goto block_23;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_47, 1);
lean_inc(x_78);
lean_dec(x_47);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_48);
lean_ctor_set(x_79, 1, x_78);
x_14 = x_79;
goto block_23;
}
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_39);
if (x_80 == 0)
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_39, 0);
lean_dec(x_81);
lean_ctor_set_tag(x_39, 1);
lean_ctor_set(x_39, 0, x_35);
x_14 = x_39;
goto block_23;
}
else
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_39, 1);
lean_inc(x_82);
lean_dec(x_39);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_35);
lean_ctor_set(x_83, 1, x_82);
x_14 = x_83;
goto block_23;
}
}
}
block_23:
{
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Environment_contains(x_11, x_1);
x_13 = lean_box(x_12);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Environment_contains(x_16, x_1);
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = l_Array_indexOfAux___at_Lean_Meta_getElimInfo___spec__1(x_1, x_10, x_8);
lean_dec(x_10);
x_12 = 1;
x_13 = x_3 + x_12;
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_mk_string("Lean.Elab.PreDefinition.Structural");
x_15 = lean_mk_string("_private.Lean.Elab.PreDefinition.Structural.0.Lean.Elab.Structural.findRecArg.loop");
x_16 = lean_unsigned_to_nat(174u);
x_17 = lean_unsigned_to_nat(119u);
x_18 = lean_mk_string("unreachable code has been reached");
x_19 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
x_20 = l_instInhabitedNat;
x_21 = lean_panic_fn(x_20, x_19);
x_22 = x_21;
x_23 = lean_array_uset(x_9, x_3, x_22);
x_3 = x_13;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_11, 0);
lean_inc(x_25);
lean_dec(x_11);
x_26 = x_25;
x_27 = lean_array_uset(x_9, x_3, x_26);
x_3 = x_13;
x_4 = x_27;
goto _start;
}
}
}
}
lean_object* l_Lean_isInductivePredicate___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_environment_find(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; lean_object* x_14; 
x_13 = 0;
x_14 = lean_box(x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
if (lean_obj_tag(x_15) == 5)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_isInductivePredicate_visit(x_18);
lean_dec(x_18);
x_20 = lean_box(x_19);
lean_ctor_set(x_8, 0, x_20);
return x_8;
}
else
{
uint8_t x_21; lean_object* x_22; 
lean_dec(x_15);
x_21 = 0;
x_22 = lean_box(x_21);
lean_ctor_set(x_8, 0, x_22);
return x_8;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_8, 0);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_8);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_environment_find(x_25, x_1);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_24);
return x_29;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_26, 0);
lean_inc(x_30);
lean_dec(x_26);
if (lean_obj_tag(x_30) == 5)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get(x_32, 2);
lean_inc(x_33);
lean_dec(x_32);
x_34 = l_Lean_isInductivePredicate_visit(x_33);
lean_dec(x_33);
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
return x_36;
}
else
{
uint8_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_30);
x_37 = 0;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_24);
return x_39;
}
}
}
}
}
lean_object* l_ReaderT_bind___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = lean_apply_6(x_1, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_apply_7(x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_object* l_ReaderT_bind___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__4___rarg), 8, 0);
return x_3;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
x_9 = lean_array_fget(x_1, x_8);
x_10 = lean_expr_eqv(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
x_3 = x_8;
x_4 = lean_box(0);
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_8);
x_12 = 0;
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_3);
x_13 = 1;
return x_13;
}
}
}
uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 1;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_fget(x_1, x_2);
lean_inc(x_2);
x_7 = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__8(x_1, x_6, x_2, lean_box(0));
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_2);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_2 = x_10;
goto _start;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_3 = lean_mk_string("argument #");
x_4 = l_Lean_stringToMessageData(x_3);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_1, x_5);
x_7 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string(" was not used for structural recursion");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_indentD(x_2);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_mk_string("");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_1, x_2, x_4);
x_11 = l_Lean_Meta_mapErrorImp___rarg(x_10, x_3, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_4, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg(x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_inc(x_6);
x_15 = l_Lean_Meta_getFVarLocalDecl(x_14, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_LocalDecl_isLet(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_LocalDecl_type(x_16);
lean_dec(x_16);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_Lean_Meta_whnfD(x_19, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_getAppFn(x_21);
if (lean_obj_tag(x_23) == 4)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_st_ref_get(x_9, x_22);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_environment_find(x_29, x_24);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_11);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_4, x_31);
lean_dec(x_4);
x_4 = x_32;
x_10 = x_28;
goto _start;
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_30, 0);
lean_inc(x_34);
lean_dec(x_30);
if (lean_obj_tag(x_34) == 5)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_brecOnSuffix;
lean_inc(x_37);
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1(x_39, x_5, x_6, x_7, x_8, x_9, x_28);
lean_dec(x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_11);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_add(x_4, x_44);
lean_dec(x_4);
x_4 = x_45;
x_10 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_dec(x_40);
x_48 = l_Lean_binductionOnSuffix;
lean_inc(x_37);
x_49 = lean_name_mk_string(x_37, x_48);
x_50 = l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1(x_49, x_5, x_6, x_7, x_8, x_9, x_47);
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get_uint8(x_35, sizeof(void*)*5 + 2);
if (x_53 == 0)
{
lean_object* x_216; 
lean_dec(x_51);
x_216 = lean_box(0);
x_54 = x_216;
goto block_215;
}
else
{
uint8_t x_217; 
x_217 = lean_unbox(x_51);
lean_dec(x_51);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_11);
x_218 = lean_unsigned_to_nat(1u);
x_219 = lean_nat_add(x_4, x_218);
lean_dec(x_4);
x_4 = x_219;
x_10 = x_52;
goto _start;
}
else
{
lean_object* x_221; 
x_221 = lean_box(0);
x_54 = x_221;
goto block_215;
}
}
block_215:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_167; lean_object* x_189; uint8_t x_190; 
lean_dec(x_54);
x_55 = l_Lean_levelZero;
x_56 = l_Lean_mkSort(x_55);
x_57 = lean_unsigned_to_nat(0u);
x_58 = l_Lean_Expr_getAppNumArgsAux(x_21, x_57);
lean_inc(x_58);
x_59 = lean_mk_array(x_58, x_56);
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_sub(x_58, x_60);
lean_dec(x_58);
lean_inc(x_21);
x_62 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_21, x_59, x_61);
x_63 = lean_ctor_get(x_35, 1);
lean_inc(x_63);
lean_dec(x_35);
lean_inc(x_63);
lean_inc(x_62);
x_64 = l_Array_extract___rarg(x_62, x_57, x_63);
x_65 = lean_array_get_size(x_62);
x_66 = l_Array_extract___rarg(x_62, x_63, x_65);
x_189 = lean_array_get_size(x_66);
x_190 = lean_nat_dec_lt(x_57, x_189);
if (x_190 == 0)
{
lean_object* x_191; 
lean_dec(x_189);
x_191 = lean_box(0);
x_167 = x_191;
goto block_188;
}
else
{
uint8_t x_192; 
x_192 = lean_nat_dec_le(x_189, x_189);
if (x_192 == 0)
{
lean_object* x_193; 
lean_dec(x_189);
x_193 = lean_box(0);
x_167 = x_193;
goto block_188;
}
else
{
size_t x_194; size_t x_195; uint8_t x_196; 
x_194 = 0;
x_195 = lean_usize_of_nat(x_189);
lean_dec(x_189);
x_196 = l_Array_anyMUnsafe_any___at_Lean_Meta_getElimInfo___spec__8(x_66, x_194, x_195);
if (x_196 == 0)
{
lean_object* x_197; 
x_197 = lean_box(0);
x_167 = x_197;
goto block_188;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_37);
lean_dec(x_25);
lean_dec(x_11);
x_198 = lean_mk_string("argument #");
x_199 = l_Lean_stringToMessageData(x_198);
lean_dec(x_198);
x_200 = lean_nat_add(x_4, x_60);
lean_dec(x_4);
lean_inc(x_200);
x_201 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_200);
x_202 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_202, 0, x_201);
x_203 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_203, 0, x_199);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_mk_string(" was not used because its type is an inductive family and indices are not variables");
x_205 = l_Lean_stringToMessageData(x_204);
lean_dec(x_204);
x_206 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_205);
x_207 = l_Lean_indentExpr(x_21);
x_208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_mk_string("");
x_210 = l_Lean_stringToMessageData(x_209);
lean_dec(x_209);
x_211 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg___boxed), 7, 1);
lean_closure_set(x_212, 0, x_211);
x_213 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg), 10, 4);
lean_closure_set(x_213, 0, x_1);
lean_closure_set(x_213, 1, x_2);
lean_closure_set(x_213, 2, x_3);
lean_closure_set(x_213, 3, x_200);
x_214 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(x_212, x_213, x_5, x_6, x_7, x_8, x_9, x_52);
return x_214;
}
}
}
block_166:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_inc(x_67);
lean_inc(x_2);
x_68 = l_Array_extract___rarg(x_2, x_57, x_67);
lean_inc(x_2);
x_69 = l_Array_extract___rarg(x_2, x_67, x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_70 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadIndexDep_x3f(x_69, x_66, x_6, x_7, x_8, x_9, x_52);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_73 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_hasBadParamDep_x3f(x_69, x_64, x_6, x_7, x_8, x_9, x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; size_t x_77; size_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_21);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_array_get_size(x_66);
x_77 = lean_usize_of_nat(x_76);
lean_dec(x_76);
x_78 = 0;
lean_inc(x_66);
x_79 = x_66;
x_80 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__2(x_69, x_77, x_78, x_79);
x_81 = x_80;
lean_inc(x_37);
x_82 = l_Lean_isInductivePredicate___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__3(x_37, x_5, x_6, x_7, x_8, x_9, x_75);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_array_get_size(x_68);
x_86 = lean_nat_sub(x_4, x_85);
lean_dec(x_85);
x_87 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_87, 0, x_68);
lean_ctor_set(x_87, 1, x_69);
lean_ctor_set(x_87, 2, x_86);
lean_ctor_set(x_87, 3, x_81);
lean_ctor_set(x_87, 4, x_37);
lean_ctor_set(x_87, 5, x_25);
lean_ctor_set(x_87, 6, x_64);
lean_ctor_set(x_87, 7, x_66);
lean_ctor_set_uint8(x_87, sizeof(void*)*8, x_53);
x_88 = lean_unbox(x_83);
lean_dec(x_83);
lean_ctor_set_uint8(x_87, sizeof(void*)*8 + 1, x_88);
lean_inc(x_4);
x_89 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_89, 0, x_4);
lean_inc(x_3);
x_90 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__2), 9, 3);
lean_closure_set(x_90, 0, x_3);
lean_closure_set(x_90, 1, x_87);
lean_closure_set(x_90, 2, x_89);
x_91 = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lambda__1___boxed), 7, 0);
x_92 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__4___rarg), 8, 2);
lean_closure_set(x_92, 0, x_90);
lean_closure_set(x_92, 1, x_91);
x_93 = lean_nat_add(x_4, x_60);
lean_dec(x_4);
x_94 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg), 10, 4);
lean_closure_set(x_94, 0, x_1);
lean_closure_set(x_94, 1, x_2);
lean_closure_set(x_94, 2, x_3);
lean_closure_set(x_94, 3, x_93);
x_95 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(x_92, x_94, x_5, x_6, x_7, x_8, x_9, x_84);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_37);
lean_dec(x_25);
x_96 = lean_ctor_get(x_74, 0);
lean_inc(x_96);
lean_dec(x_74);
x_97 = lean_ctor_get(x_73, 1);
lean_inc(x_97);
lean_dec(x_73);
x_98 = lean_ctor_get(x_96, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_dec(x_96);
x_100 = lean_mk_string("argument #");
x_101 = l_Lean_stringToMessageData(x_100);
lean_dec(x_100);
x_102 = lean_nat_add(x_4, x_60);
lean_dec(x_4);
lean_inc(x_102);
x_103 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_102);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_105, 0, x_101);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_string(" was not used because its type is an inductive datatype");
x_107 = l_Lean_stringToMessageData(x_106);
lean_dec(x_106);
x_108 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_indentExpr(x_21);
x_110 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_mk_string("\nand parameter");
x_112 = l_Lean_stringToMessageData(x_111);
lean_dec(x_111);
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_110);
lean_ctor_set(x_113, 1, x_112);
x_114 = l_Lean_indentExpr(x_98);
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_mk_string("\ndepends on");
x_117 = l_Lean_stringToMessageData(x_116);
lean_dec(x_116);
x_118 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Lean_indentExpr(x_99);
x_120 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string("");
x_122 = l_Lean_stringToMessageData(x_121);
lean_dec(x_121);
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg___boxed), 7, 1);
lean_closure_set(x_124, 0, x_123);
x_125 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg), 10, 4);
lean_closure_set(x_125, 0, x_1);
lean_closure_set(x_125, 1, x_2);
lean_closure_set(x_125, 2, x_3);
lean_closure_set(x_125, 3, x_102);
x_126 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(x_124, x_125, x_5, x_6, x_7, x_8, x_9, x_97);
return x_126;
}
}
else
{
uint8_t x_127; 
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_37);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_127 = !lean_is_exclusive(x_73);
if (x_127 == 0)
{
return x_73;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_73, 0);
x_129 = lean_ctor_get(x_73, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_73);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_37);
lean_dec(x_25);
x_131 = lean_ctor_get(x_71, 0);
lean_inc(x_131);
lean_dec(x_71);
x_132 = lean_ctor_get(x_70, 1);
lean_inc(x_132);
lean_dec(x_70);
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
lean_dec(x_131);
x_135 = lean_mk_string("argument #");
x_136 = l_Lean_stringToMessageData(x_135);
lean_dec(x_135);
x_137 = lean_nat_add(x_4, x_60);
lean_dec(x_4);
lean_inc(x_137);
x_138 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_137);
x_139 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_139, 0, x_138);
x_140 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_140, 0, x_136);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_mk_string(" was not used because its type is an inductive family");
x_142 = l_Lean_stringToMessageData(x_141);
lean_dec(x_141);
x_143 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_142);
x_144 = l_Lean_indentExpr(x_21);
x_145 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_mk_string("\nand index");
x_147 = l_Lean_stringToMessageData(x_146);
lean_dec(x_146);
x_148 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_147);
x_149 = l_Lean_indentExpr(x_133);
x_150 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_mk_string("\ndepends on the non index");
x_152 = l_Lean_stringToMessageData(x_151);
lean_dec(x_151);
x_153 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_152);
x_154 = l_Lean_indentExpr(x_134);
x_155 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_mk_string("");
x_157 = l_Lean_stringToMessageData(x_156);
lean_dec(x_156);
x_158 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_158, 0, x_155);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg___boxed), 7, 1);
lean_closure_set(x_159, 0, x_158);
x_160 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg), 10, 4);
lean_closure_set(x_160, 0, x_1);
lean_closure_set(x_160, 1, x_2);
lean_closure_set(x_160, 2, x_3);
lean_closure_set(x_160, 3, x_137);
x_161 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(x_159, x_160, x_5, x_6, x_7, x_8, x_9, x_132);
return x_161;
}
}
else
{
uint8_t x_162; 
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_37);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = !lean_is_exclusive(x_70);
if (x_162 == 0)
{
return x_70;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_70, 0);
x_164 = lean_ctor_get(x_70, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_70);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
block_188:
{
uint8_t x_168; 
lean_dec(x_167);
x_168 = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__7(x_66, x_57);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_37);
lean_dec(x_25);
lean_dec(x_11);
x_169 = lean_mk_string("argument #");
x_170 = l_Lean_stringToMessageData(x_169);
lean_dec(x_169);
x_171 = lean_nat_add(x_4, x_60);
lean_dec(x_4);
lean_inc(x_171);
x_172 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_171);
x_173 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_174 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_174, 0, x_170);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_mk_string(" was not used because its type is an inductive family and indices are not pairwise distinct");
x_176 = l_Lean_stringToMessageData(x_175);
lean_dec(x_175);
x_177 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_176);
x_178 = l_Lean_indentExpr(x_21);
x_179 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_mk_string("");
x_181 = l_Lean_stringToMessageData(x_180);
lean_dec(x_180);
x_182 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg___boxed), 7, 1);
lean_closure_set(x_183, 0, x_182);
x_184 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg), 10, 4);
lean_closure_set(x_184, 0, x_1);
lean_closure_set(x_184, 1, x_2);
lean_closure_set(x_184, 2, x_3);
lean_closure_set(x_184, 3, x_171);
x_185 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_orelse_x27___rarg(x_183, x_184, x_5, x_6, x_7, x_8, x_9, x_52);
return x_185;
}
else
{
lean_object* x_186; uint8_t x_187; 
x_186 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getIndexMinPos(x_2, x_66);
x_187 = lean_nat_dec_lt(x_186, x_1);
if (x_187 == 0)
{
lean_dec(x_186);
lean_inc(x_1);
x_67 = x_1;
goto block_166;
}
else
{
x_67 = x_186;
goto block_166;
}
}
}
}
}
}
else
{
lean_object* x_222; lean_object* x_223; 
lean_dec(x_34);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_11);
x_222 = lean_unsigned_to_nat(1u);
x_223 = lean_nat_add(x_4, x_222);
lean_dec(x_4);
x_4 = x_223;
x_10 = x_28;
goto _start;
}
}
}
else
{
lean_object* x_225; lean_object* x_226; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_11);
x_225 = lean_unsigned_to_nat(1u);
x_226 = lean_nat_add(x_4, x_225);
lean_dec(x_4);
x_4 = x_226;
x_10 = x_22;
goto _start;
}
}
else
{
uint8_t x_228; 
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
x_228 = !lean_is_exclusive(x_20);
if (x_228 == 0)
{
return x_20;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_20, 0);
x_230 = lean_ctor_get(x_20, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_20);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_232 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwStructuralFailed___rarg(x_6, x_7, x_8, x_9, x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_232;
}
}
else
{
uint8_t x_233; 
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
x_233 = !lean_is_exclusive(x_15);
if (x_233 == 0)
{
return x_15;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_15, 0);
x_235 = lean_ctor_get(x_15, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_15);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
return x_236;
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_hasConst___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_isInductivePredicate___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_isInductivePredicate___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__7(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_1);
x_10 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg(x_1, x_2, x_3, x_1, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg___rarg), 9, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_isConstOf(x_2, x_1);
return x_3;
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = 8192;
x_5 = l_Lean_Expr_FindImpl_initCache;
x_6 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_3, x_4, x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 1;
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_isAppOf(x_2, x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_mk_string("unexpected occurrence of recursive application");
x_12 = l_Lean_stringToMessageData(x_11);
lean_dec(x_11);
x_13 = l_Lean_indentExpr(x_2);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_mk_string("");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_17, x_3, x_4, x_5, x_6, x_7);
return x_18;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_8 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn(x_1, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn___lambda__1___boxed), 7, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_2);
x_11 = l_Lean_Meta_forEachExpr(x_2, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_2);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_2);
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
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_mk_string("toBelow failed");
x_7 = l_Lean_stringToMessageData(x_6);
lean_dec(x_6);
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg(x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 4)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint64_t x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; uint64_t x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_5, sizeof(void*)*2);
lean_dec(x_5);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
x_14 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
lean_dec(x_6);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
lean_dec(x_7);
x_17 = lean_mk_string("PProd");
x_18 = lean_string_dec_eq(x_15, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_2);
x_19 = lean_mk_string("And");
x_20 = lean_string_dec_eq(x_15, x_19);
lean_dec(x_19);
lean_dec(x_15);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_3);
x_21 = lean_apply_1(x_4, x_1);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_4);
lean_dec(x_1);
x_22 = lean_box_uint64(x_14);
x_23 = lean_box_uint64(x_12);
x_24 = lean_box_uint64(x_10);
x_25 = lean_box_uint64(x_16);
x_26 = lean_apply_7(x_3, x_13, x_22, x_11, x_23, x_9, x_24, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = lean_box_uint64(x_14);
x_28 = lean_box_uint64(x_12);
x_29 = lean_box_uint64(x_10);
x_30 = lean_box_uint64(x_16);
x_31 = lean_apply_7(x_2, x_13, x_27, x_11, x_28, x_9, x_29, x_30);
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_apply_1(x_4, x_1);
return x_32;
}
}
else
{
lean_object* x_33; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_apply_1(x_4, x_1);
return x_33;
}
}
else
{
lean_object* x_34; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_apply_1(x_4, x_1);
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_apply_1(x_4, x_1);
return x_35;
}
}
else
{
lean_object* x_36; 
lean_dec(x_3);
lean_dec(x_2);
x_36 = lean_apply_1(x_4, x_1);
return x_36;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux_match__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_mkAppN(x_1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_11 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(x_6, x_7, x_8, x_9, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__1(x_3, x_4, x_21, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_array_get_size(x_1);
x_14 = lean_array_get_size(x_2);
x_15 = lean_nat_sub(x_13, x_14);
lean_dec(x_14);
x_16 = l_Array_extract___rarg(x_1, x_15, x_13);
x_17 = l_Lean_Expr_replaceFVars(x_3, x_2, x_16);
if (lean_obj_tag(x_17) == 5)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Expr_getAppFn(x_18);
lean_dec(x_18);
x_21 = lean_expr_eqv(x_20, x_6);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
x_28 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__2(x_19, x_4, x_5, x_16, x_27, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_16);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
x_29 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_29;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_11 = l_Lean_levelZero;
x_12 = l_Lean_mkSort(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Expr_getAppNumArgsAux(x_1, x_13);
lean_inc(x_14);
x_15 = lean_mk_array(x_14, x_12);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_14, x_16);
lean_dec(x_14);
lean_inc(x_1);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = lean_array_get_size(x_4);
x_20 = lean_array_get_size(x_18);
x_21 = lean_nat_dec_le(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
lean_dec(x_18);
lean_dec(x_2);
lean_dec(x_1);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_throwToBelowFailed___rarg(x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
x_28 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__3(x_18, x_4, x_5, x_1, x_2, x_3, x_27, x_6, x_7, x_8, x_9, x_10);
return x_28;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_whnf(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_136 = lean_box(0);
x_137 = lean_mk_string("Elab");
x_138 = lean_name_mk_string(x_136, x_137);
x_139 = lean_mk_string("definition");
x_140 = lean_name_mk_string(x_138, x_139);
x_141 = lean_mk_string("structural");
x_142 = lean_name_mk_string(x_140, x_141);
x_160 = lean_st_ref_get(x_8, x_12);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_161, 3);
lean_inc(x_162);
lean_dec(x_161);
x_163 = lean_ctor_get_uint8(x_162, sizeof(void*)*1);
lean_dec(x_162);
if (x_163 == 0)
{
lean_object* x_164; uint8_t x_165; 
x_164 = lean_ctor_get(x_160, 1);
lean_inc(x_164);
lean_dec(x_160);
x_165 = 0;
x_143 = x_165;
x_144 = x_164;
goto block_159;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_166 = lean_ctor_get(x_160, 1);
lean_inc(x_166);
lean_dec(x_160);
lean_inc(x_142);
x_167 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_142, x_5, x_6, x_7, x_8, x_166);
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
lean_dec(x_167);
x_170 = lean_unbox(x_168);
lean_dec(x_168);
x_143 = x_170;
x_144 = x_169;
goto block_159;
}
block_135:
{
if (lean_obj_tag(x_11) == 5)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 5)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 4)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 1)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_mk_string("PProd");
x_22 = lean_string_dec_eq(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_21);
x_23 = lean_mk_string("And");
x_24 = lean_string_dec_eq(x_20, x_23);
lean_dec(x_20);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_18);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed), 10, 3);
lean_closure_set(x_25, 0, x_3);
lean_closure_set(x_25, 1, x_4);
lean_closure_set(x_25, 2, x_1);
x_26 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_11, x_25, x_5, x_6, x_7, x_8, x_13);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_11);
x_27 = lean_box(0);
x_28 = lean_name_mk_string(x_27, x_23);
x_29 = lean_mk_string("left");
lean_inc(x_28);
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_mk_empty_array_with_capacity(x_31);
x_33 = lean_array_push(x_32, x_4);
x_34 = lean_mk_string("right");
x_35 = lean_name_mk_string(x_28, x_34);
x_36 = lean_st_ref_get(x_8, x_13);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_st_ref_get(x_8, x_38);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_st_ref_get(x_6, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_33);
x_46 = l_Lean_Meta_mkAppM(x_30, x_33, x_5, x_6, x_7, x_8, x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_49 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux(x_1, x_19, x_3, x_47, x_5, x_6, x_7, x_8, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_dec(x_45);
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_33);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_39, x_5, x_6, x_7, x_8, x_50);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l_Lean_Meta_setMCtx(x_45, x_5, x_6, x_7, x_8, x_52);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_55 = l_Lean_Meta_mkAppM(x_35, x_33, x_5, x_6, x_7, x_8, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_2 = x_18;
x_4 = x_56;
x_9 = x_57;
goto _start;
}
else
{
uint8_t x_59; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_55);
if (x_59 == 0)
{
return x_55;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_55, 0);
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_55);
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
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_19);
x_63 = lean_ctor_get(x_46, 1);
lean_inc(x_63);
lean_dec(x_46);
x_64 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_39, x_5, x_6, x_7, x_8, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_Lean_Meta_setMCtx(x_45, x_5, x_6, x_7, x_8, x_65);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_68 = l_Lean_Meta_mkAppM(x_35, x_33, x_5, x_6, x_7, x_8, x_67);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_2 = x_18;
x_4 = x_69;
x_9 = x_70;
goto _start;
}
else
{
uint8_t x_72; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_68);
if (x_72 == 0)
{
return x_68;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_68, 0);
x_74 = lean_ctor_get(x_68, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_68);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_20);
lean_dec(x_11);
x_76 = lean_box(0);
x_77 = lean_name_mk_string(x_76, x_21);
x_78 = lean_mk_string("fst");
lean_inc(x_77);
x_79 = lean_name_mk_string(x_77, x_78);
x_80 = lean_unsigned_to_nat(1u);
x_81 = lean_mk_empty_array_with_capacity(x_80);
x_82 = lean_array_push(x_81, x_4);
x_83 = lean_mk_string("snd");
x_84 = lean_name_mk_string(x_77, x_83);
x_85 = lean_st_ref_get(x_8, x_13);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_st_ref_get(x_8, x_87);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = lean_st_ref_get(x_6, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
lean_dec(x_92);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_82);
x_95 = l_Lean_Meta_mkAppM(x_79, x_82, x_5, x_6, x_7, x_8, x_93);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_98 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux(x_1, x_19, x_3, x_96, x_5, x_6, x_7, x_8, x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_dec(x_94);
lean_dec(x_88);
lean_dec(x_84);
lean_dec(x_82);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_100 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_88, x_5, x_6, x_7, x_8, x_99);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_Lean_Meta_setMCtx(x_94, x_5, x_6, x_7, x_8, x_101);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_104 = l_Lean_Meta_mkAppM(x_84, x_82, x_5, x_6, x_7, x_8, x_103);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_2 = x_18;
x_4 = x_105;
x_9 = x_106;
goto _start;
}
else
{
uint8_t x_108; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_104);
if (x_108 == 0)
{
return x_104;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_104, 0);
x_110 = lean_ctor_get(x_104, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_104);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_19);
x_112 = lean_ctor_get(x_95, 1);
lean_inc(x_112);
lean_dec(x_95);
x_113 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_88, x_5, x_6, x_7, x_8, x_112);
x_114 = lean_ctor_get(x_113, 1);
lean_inc(x_114);
lean_dec(x_113);
x_115 = l_Lean_Meta_setMCtx(x_94, x_5, x_6, x_7, x_8, x_114);
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
lean_dec(x_115);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_117 = l_Lean_Meta_mkAppM(x_84, x_82, x_5, x_6, x_7, x_8, x_116);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_2 = x_18;
x_4 = x_118;
x_9 = x_119;
goto _start;
}
else
{
uint8_t x_121; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_121 = !lean_is_exclusive(x_117);
if (x_121 == 0)
{
return x_117;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_117, 0);
x_123 = lean_ctor_get(x_117, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_117);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
}
}
else
{
lean_object* x_125; lean_object* x_126; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
x_125 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed), 10, 3);
lean_closure_set(x_125, 0, x_3);
lean_closure_set(x_125, 1, x_4);
lean_closure_set(x_125, 2, x_1);
x_126 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_11, x_125, x_5, x_6, x_7, x_8, x_13);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_16);
lean_dec(x_14);
x_127 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed), 10, 3);
lean_closure_set(x_127, 0, x_3);
lean_closure_set(x_127, 1, x_4);
lean_closure_set(x_127, 2, x_1);
x_128 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_11, x_127, x_5, x_6, x_7, x_8, x_13);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_15);
lean_dec(x_14);
x_129 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed), 10, 3);
lean_closure_set(x_129, 0, x_3);
lean_closure_set(x_129, 1, x_4);
lean_closure_set(x_129, 2, x_1);
x_130 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_11, x_129, x_5, x_6, x_7, x_8, x_13);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_14);
x_131 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed), 10, 3);
lean_closure_set(x_131, 0, x_3);
lean_closure_set(x_131, 1, x_4);
lean_closure_set(x_131, 2, x_1);
x_132 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_11, x_131, x_5, x_6, x_7, x_8, x_13);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed), 10, 3);
lean_closure_set(x_133, 0, x_3);
lean_closure_set(x_133, 1, x_4);
lean_closure_set(x_133, 2, x_1);
x_134 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_11, x_133, x_5, x_6, x_7, x_8, x_13);
return x_134;
}
}
block_159:
{
if (x_143 == 0)
{
lean_dec(x_142);
x_13 = x_144;
goto block_135;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_145 = lean_mk_string("belowDict: ");
x_146 = l_Lean_stringToMessageData(x_145);
lean_dec(x_145);
lean_inc(x_11);
x_147 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_147, 0, x_11);
x_148 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_mk_string(", arg: ");
x_150 = l_Lean_stringToMessageData(x_149);
lean_dec(x_149);
x_151 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_150);
lean_inc(x_3);
x_152 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_152, 0, x_3);
x_153 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_string("");
x_155 = l_Lean_stringToMessageData(x_154);
lean_dec(x_154);
x_156 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
x_157 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_142, x_156, x_5, x_6, x_7, x_8, x_144);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_13 = x_158;
goto block_135;
}
}
}
else
{
uint8_t x_171; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_171 = !lean_is_exclusive(x_10);
if (x_171 == 0)
{
return x_10;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_10, 0);
x_173 = lean_ctor_get(x_10, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_10);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_5);
x_11 = l_Lean_mkApp(x_1, x_5);
x_12 = lean_array_get_size(x_2);
x_13 = l_Array_extract___rarg(x_2, x_3, x_12);
x_14 = l_Lean_mkAppN(x_11, x_13);
lean_dec(x_13);
x_15 = lean_apply_7(x_4, x_5, x_14, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_instInhabitedExpr;
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_get(x_12, x_5, x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l_Lean_Meta_inferType(x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = lean_mk_string("C");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_20, x_9, x_10, x_17);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__1), 10, 4);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_2);
lean_closure_set(x_24, 2, x_3);
lean_closure_set(x_24, 3, x_4);
x_25 = 0;
x_26 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_forallTelescopeCompatibleAux___spec__15___rarg(x_22, x_25, x_16, x_24, x_7, x_8, x_9, x_10, x_23);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_15);
if (x_27 == 0)
{
return x_15;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_13 = l_Array_extract___rarg(x_1, x_12, x_2);
x_14 = l_Lean_mkAppN(x_3, x_13);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_14);
x_15 = l_Lean_Meta_inferType(x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__2___boxed), 11, 4);
lean_closure_set(x_20, 0, x_14);
lean_closure_set(x_20, 1, x_1);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_5);
x_21 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(x_16, x_19, x_20, x_7, x_8, x_9, x_10, x_17);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_4) == 5)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_array_set(x_5, x_6, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_6, x_15);
lean_dec(x_6);
x_4 = x_12;
x_5 = x_14;
x_6 = x_16;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_6);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_1, x_18);
x_20 = lean_array_get_size(x_5);
x_21 = lean_nat_dec_lt(x_19, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_mk_string("unexpected 'below' type");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = l_Lean_indentExpr(x_3);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_28, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_3);
x_34 = lean_box(0);
x_35 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__3(x_5, x_1, x_4, x_19, x_2, x_34, x_7, x_8, x_9, x_10, x_11);
return x_35;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_inferType(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_22 = lean_box(0);
x_23 = lean_mk_string("Elab");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("definition");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("structural");
x_28 = lean_name_mk_string(x_26, x_27);
x_41 = lean_st_ref_get(x_7, x_11);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 3);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get_uint8(x_43, sizeof(void*)*1);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = 0;
x_29 = x_46;
x_30 = x_45;
goto block_40;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
lean_inc(x_28);
x_48 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_mkCongrLemma___spec__8(x_28, x_4, x_5, x_6, x_7, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unbox(x_49);
lean_dec(x_49);
x_29 = x_51;
x_30 = x_50;
goto block_40;
}
block_21:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = l_Lean_levelZero;
x_14 = l_Lean_mkSort(x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Expr_getAppNumArgsAux(x_10, x_15);
lean_inc(x_16);
x_17 = lean_mk_array(x_16, x_14);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_16, x_18);
lean_dec(x_16);
lean_inc(x_10);
x_20 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg(x_2, x_3, x_10, x_10, x_17, x_19, x_4, x_5, x_6, x_7, x_12);
return x_20;
}
block_40:
{
if (x_29 == 0)
{
lean_dec(x_28);
x_12 = x_30;
goto block_21;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_mk_string("belowType: ");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
lean_inc(x_10);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_10);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_addTrace___at_Lean_Meta_mkCongrLemma___spec__7(x_28, x_37, x_4, x_5, x_6, x_7, x_30);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_12 = x_39;
goto block_21;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = !lean_is_exclusive(x_9);
if (x_52 == 0)
{
return x_9;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_9, 0);
x_54 = lean_ctor_get(x_9, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_9);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___spec__1___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelowAux(x_3, x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_1);
x_10 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_withBelowDict___rarg(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_isAppOf(x_3, x_1);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Expr_getAppNumArgsAux(x_3, x_6);
x_8 = lean_nat_dec_lt(x_2, x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_nat_sub(x_7, x_2);
lean_dec(x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
x_13 = l_Lean_Expr_getRevArg_x21(x_3, x_12);
x_14 = l_Lean_Expr_hasLooseBVars(x_13);
lean_dec(x_13);
return x_14;
}
}
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_5);
x_8 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___lambda__1___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = 8192;
x_10 = l_Lean_Expr_FindImpl_initCache;
x_11 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_8, x_9, x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_12);
x_14 = 1;
return x_14;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 5:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_7, x_9, x_10, x_12);
return x_13;
}
case 6:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_18 = lean_box_uint64(x_17);
x_19 = lean_apply_4(x_2, x_14, x_15, x_16, x_18);
return x_19;
}
case 7:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint64_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
x_23 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_24 = lean_box_uint64(x_23);
x_25 = lean_apply_4(x_3, x_20, x_21, x_22, x_24);
return x_25;
}
case 8:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint64_t x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
x_30 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_31 = lean_box_uint64(x_30);
x_32 = lean_apply_5(x_4, x_26, x_27, x_28, x_29, x_31);
return x_32;
}
case 10:
{
lean_object* x_33; lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
x_35 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_36 = lean_box_uint64(x_35);
x_37 = lean_apply_3(x_5, x_33, x_34, x_36);
return x_37;
}
case 11:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint64_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
x_41 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_42 = lean_box_uint64(x_41);
x_43 = lean_apply_4(x_6, x_38, x_39, x_40, x_42);
return x_43;
}
default: 
{
lean_object* x_44; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_apply_1(x_8, x_1);
return x_44;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop_match__3___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_5 < x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = x_6;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_array_uget(x_6, x_5);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_6, x_5, x_17);
x_19 = x_16;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_20 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_19, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_5 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_18, x_5, x_25);
x_5 = x_24;
x_6 = x_26;
x_12 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_nat_dec_le(x_16, x_8);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_eq(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_7, x_20);
lean_dec(x_7);
x_22 = lean_nat_dec_eq(x_4, x_8);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_2, 3);
lean_inc(x_23);
x_24 = l_Array_contains___at_Lean_Meta_addImplicitTargets_collect___spec__1(x_23, x_8);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_Lean_instInhabitedExpr;
x_26 = lean_array_get(x_25, x_5, x_8);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_26, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_array_push(x_9, x_28);
x_31 = lean_ctor_get(x_6, 2);
x_32 = lean_nat_add(x_8, x_31);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_32;
x_9 = x_30;
x_15 = x_29;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_27);
if (x_34 == 0)
{
return x_27;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_27, 0);
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_27);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_6, 2);
x_39 = lean_nat_add(x_8, x_38);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_39;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_6, 2);
x_42 = lean_nat_add(x_8, x_41);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_42;
goto _start;
}
}
else
{
lean_object* x_44; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_9);
lean_ctor_set(x_44, 1, x_15);
return x_44;
}
}
else
{
lean_object* x_45; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_9);
lean_ctor_set(x_45, 1, x_15);
return x_45;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
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
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_array_get_size(x_1);
x_15 = l_Array_extract___rarg(x_1, x_2, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_array_get_size(x_15);
x_19 = lean_unsigned_to_nat(1u);
lean_inc(x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__2(x_3, x_4, x_5, x_6, x_15, x_20, x_18, x_16, x_17, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_20);
lean_dec(x_15);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_Lean_mkAppN(x_7, x_23);
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
x_27 = l_Lean_mkAppN(x_7, x_25);
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
lean_dec(x_7);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_Lean_instInhabitedExpr;
x_17 = lean_array_get(x_16, x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_3, x_4, x_5, x_17, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_4, 6);
lean_inc(x_21);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
x_23 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow(x_5, x_22, x_19, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__1(x_1, x_6, x_3, x_4, x_5, x_7, x_24, x_10, x_11, x_12, x_13, x_14, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_mk_string("failed to eliminate recursive application");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = l_Lean_indentExpr(x_8);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_mk_string("");
x_33 = l_Lean_stringToMessageData(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_34, x_10, x_11, x_12, x_13, x_14, x_27);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_18);
if (x_40 == 0)
{
return x_18;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_18, 0);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_18);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_array_set(x_6, x_7, x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_7, x_17);
lean_dec(x_7);
x_5 = x_14;
x_6 = x_16;
x_7 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_7);
x_20 = l_Lean_Expr_isConstOf(x_5, x_1);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_5, x_8, x_9, x_10, x_11, x_12, x_13);
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
x_28 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___boxed__const__1;
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__1___boxed), 12, 6);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_2);
lean_closure_set(x_29, 2, x_3);
lean_closure_set(x_29, 3, x_27);
lean_closure_set(x_29, 4, x_28);
lean_closure_set(x_29, 5, x_26);
x_30 = x_29;
x_31 = lean_apply_6(x_30, x_8, x_9, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = l_Lean_mkAppN(x_22, x_33);
lean_dec(x_33);
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
x_37 = l_Lean_mkAppN(x_22, x_35);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_22);
x_39 = !lean_is_exclusive(x_31);
if (x_39 == 0)
{
return x_31;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_31, 0);
x_41 = lean_ctor_get(x_31, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_31);
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
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_5);
x_47 = lean_ctor_get(x_2, 0);
lean_inc(x_47);
x_48 = lean_array_get_size(x_47);
lean_dec(x_47);
x_49 = lean_ctor_get(x_2, 2);
lean_inc(x_49);
x_50 = lean_nat_add(x_48, x_49);
x_51 = lean_array_get_size(x_6);
x_52 = lean_nat_dec_le(x_51, x_50);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_box(0);
x_54 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__2(x_6, x_50, x_1, x_2, x_3, x_48, x_49, x_4, x_53, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_49);
lean_dec(x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_mk_string("insufficient number of parameters at recursive application ");
x_56 = l_Lean_stringToMessageData(x_55);
lean_dec(x_55);
x_57 = l_Lean_indentExpr(x_4);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string("");
x_60 = l_Lean_stringToMessageData(x_59);
lean_dec(x_59);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4(x_61, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
return x_62;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_62);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_5 < x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = x_6;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_array_uget(x_6, x_5);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_6, x_5, x_17);
x_19 = x_16;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_20 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_19, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_5 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_18, x_5, x_25);
x_5 = x_24;
x_6 = x_26;
x_12 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_nat_dec_le(x_16, x_8);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_eq(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_7, x_20);
lean_dec(x_7);
x_22 = lean_nat_dec_eq(x_4, x_8);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_2, 3);
lean_inc(x_23);
x_24 = l_Array_contains___at_Lean_Meta_addImplicitTargets_collect___spec__1(x_23, x_8);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_Lean_instInhabitedExpr;
x_26 = lean_array_get(x_25, x_5, x_8);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_26, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_array_push(x_9, x_28);
x_31 = lean_ctor_get(x_6, 2);
x_32 = lean_nat_add(x_8, x_31);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_32;
x_9 = x_30;
x_15 = x_29;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_27);
if (x_34 == 0)
{
return x_27;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_27, 0);
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_27);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_6, 2);
x_39 = lean_nat_add(x_8, x_38);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_39;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_6, 2);
x_42 = lean_nat_add(x_8, x_41);
lean_dec(x_8);
x_7 = x_21;
x_8 = x_42;
goto _start;
}
}
else
{
lean_object* x_44; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_9);
lean_ctor_set(x_44, 1, x_15);
return x_44;
}
}
else
{
lean_object* x_45; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_9);
lean_ctor_set(x_45, 1, x_15);
return x_45;
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_array_get_size(x_1);
x_15 = l_Array_extract___rarg(x_1, x_2, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_array_get_size(x_15);
x_19 = lean_unsigned_to_nat(1u);
lean_inc(x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__7(x_3, x_4, x_5, x_6, x_15, x_20, x_18, x_16, x_17, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_20);
lean_dec(x_15);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_Lean_mkAppN(x_7, x_23);
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
x_27 = l_Lean_mkAppN(x_7, x_25);
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
lean_dec(x_7);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_Lean_instInhabitedExpr;
x_17 = lean_array_get(x_16, x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_3, x_4, x_5, x_17, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_4, 6);
lean_inc(x_21);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
x_23 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_toBelow(x_5, x_22, x_19, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__1(x_1, x_6, x_3, x_4, x_5, x_7, x_24, x_10, x_11, x_12, x_13, x_14, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_mk_string("failed to eliminate recursive application");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = l_Lean_indentExpr(x_8);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_mk_string("");
x_33 = l_Lean_stringToMessageData(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_34, x_10, x_11, x_12, x_13, x_14, x_27);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_18);
if (x_40 == 0)
{
return x_18;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_18, 0);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_18);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_array_set(x_6, x_7, x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_7, x_17);
lean_dec(x_7);
x_5 = x_14;
x_6 = x_16;
x_7 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_7);
x_20 = l_Lean_Expr_isConstOf(x_5, x_1);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_5, x_8, x_9, x_10, x_11, x_12, x_13);
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
x_28 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___boxed__const__1;
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__6___boxed), 12, 6);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_2);
lean_closure_set(x_29, 2, x_3);
lean_closure_set(x_29, 3, x_27);
lean_closure_set(x_29, 4, x_28);
lean_closure_set(x_29, 5, x_26);
x_30 = x_29;
x_31 = lean_apply_6(x_30, x_8, x_9, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = l_Lean_mkAppN(x_22, x_33);
lean_dec(x_33);
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
x_37 = l_Lean_mkAppN(x_22, x_35);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_22);
x_39 = !lean_is_exclusive(x_31);
if (x_39 == 0)
{
return x_31;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_31, 0);
x_41 = lean_ctor_get(x_31, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_31);
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
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_5);
x_47 = lean_ctor_get(x_2, 0);
lean_inc(x_47);
x_48 = lean_array_get_size(x_47);
lean_dec(x_47);
x_49 = lean_ctor_get(x_2, 2);
lean_inc(x_49);
x_50 = lean_nat_add(x_48, x_49);
x_51 = lean_array_get_size(x_6);
x_52 = lean_nat_dec_le(x_51, x_50);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_box(0);
x_54 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__2(x_6, x_50, x_1, x_2, x_3, x_48, x_49, x_4, x_53, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_49);
lean_dec(x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_mk_string("insufficient number of parameters at recursive application ");
x_56 = l_Lean_stringToMessageData(x_55);
lean_dec(x_55);
x_57 = l_Lean_indentExpr(x_4);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string("");
x_60 = l_Lean_stringToMessageData(x_59);
lean_dec(x_59);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4(x_61, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
return x_62;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_62);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_take(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_14, 3);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_mk_string("[");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
lean_inc(x_1);
x_23 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_23, 0, x_1);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_mk_string("] ");
x_26 = l_Lean_stringToMessageData(x_25);
lean_dec(x_25);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_11);
x_29 = lean_mk_string("");
x_30 = l_Lean_stringToMessageData(x_29);
lean_dec(x_29);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
lean_inc(x_9);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Std_PersistentArray_push___rarg(x_20, x_33);
lean_ctor_set(x_15, 0, x_34);
x_35 = lean_st_ref_set(x_7, x_14, x_16);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
x_38 = lean_box(0);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_42 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
x_43 = lean_ctor_get(x_15, 0);
lean_inc(x_43);
lean_dec(x_15);
x_44 = lean_mk_string("[");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
lean_inc(x_1);
x_46 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_46, 0, x_1);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_mk_string("] ");
x_49 = l_Lean_stringToMessageData(x_48);
lean_dec(x_48);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_11);
x_52 = lean_mk_string("");
x_53 = l_Lean_stringToMessageData(x_52);
lean_dec(x_52);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_55, 0, x_1);
lean_ctor_set(x_55, 1, x_54);
lean_inc(x_9);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_9);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Std_PersistentArray_push___rarg(x_43, x_56);
x_58 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_42);
lean_ctor_set(x_14, 3, x_58);
x_59 = lean_st_ref_set(x_7, x_14, x_16);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
x_62 = lean_box(0);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_64 = lean_ctor_get(x_14, 0);
x_65 = lean_ctor_get(x_14, 1);
x_66 = lean_ctor_get(x_14, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_14);
x_67 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
x_68 = lean_ctor_get(x_15, 0);
lean_inc(x_68);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 x_69 = x_15;
} else {
 lean_dec_ref(x_15);
 x_69 = lean_box(0);
}
x_70 = lean_mk_string("[");
x_71 = l_Lean_stringToMessageData(x_70);
lean_dec(x_70);
lean_inc(x_1);
x_72 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_72, 0, x_1);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_mk_string("] ");
x_75 = l_Lean_stringToMessageData(x_74);
lean_dec(x_74);
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_11);
x_78 = lean_mk_string("");
x_79 = l_Lean_stringToMessageData(x_78);
lean_dec(x_78);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_81, 0, x_1);
lean_ctor_set(x_81, 1, x_80);
lean_inc(x_9);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_9);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Std_PersistentArray_push___rarg(x_68, x_82);
if (lean_is_scalar(x_69)) {
 x_84 = lean_alloc_ctor(0, 1, 1);
} else {
 x_84 = x_69;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set_uint8(x_84, sizeof(void*)*1, x_67);
x_85 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_85, 0, x_64);
lean_ctor_set(x_85, 1, x_65);
lean_ctor_set(x_85, 2, x_66);
lean_ctor_set(x_85, 3, x_84);
x_86 = lean_st_ref_set(x_7, x_85, x_16);
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
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = l_Lean_checkTraceOption(x_8, x_1);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_reduce_visit___spec__6___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
x_10 = 0;
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_10, x_9, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_1, x_13);
x_15 = l_Lean_instInhabitedExpr;
x_16 = lean_array_get(x_15, x_2, x_14);
lean_dec(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_17 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_3, x_4, x_16, x_5, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 0;
x_21 = 1;
x_22 = l_Lean_Meta_mkLambdaFVars(x_2, x_18, x_20, x_21, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_38; lean_object* x_39; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = lean_st_ref_get(x_13, x_14);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_59, 3);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
lean_dec(x_58);
x_63 = 0;
x_38 = x_63;
x_39 = x_62;
goto block_57;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_58, 1);
lean_inc(x_64);
lean_dec(x_58);
lean_inc(x_6);
x_65 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_6, x_9, x_10, x_11, x_12, x_13, x_64);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_unbox(x_66);
lean_dec(x_66);
x_38 = x_68;
x_39 = x_67;
goto block_57;
}
block_37:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_7);
x_17 = lean_nat_dec_le(x_1, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_mk_string("unexpected matcher application alternative");
x_19 = l_Lean_stringToMessageData(x_18);
lean_dec(x_18);
x_20 = l_Lean_indentExpr(x_4);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_mk_string("\nat application");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_indentExpr(x_5);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4(x_29, x_9, x_10, x_11, x_12, x_13, x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_5);
lean_dec(x_4);
x_35 = lean_box(0);
x_36 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__1(x_1, x_7, x_2, x_3, x_8, x_35, x_9, x_10, x_11, x_12, x_13, x_15);
lean_dec(x_1);
return x_36;
}
}
block_57:
{
if (x_38 == 0)
{
lean_dec(x_6);
x_15 = x_39;
goto block_37;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_40 = lean_mk_string("altNumParams: ");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
lean_inc(x_1);
x_42 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_1);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string(", xs: ");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
lean_inc(x_7);
x_48 = lean_array_to_list(lean_box(0), x_7);
x_49 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_48);
x_50 = l_Lean_MessageData_ofList(x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_47);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_mk_string("");
x_53 = l_Lean_stringToMessageData(x_52);
lean_dec(x_52);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_6, x_54, x_9, x_10, x_11, x_12, x_13, x_39);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_15 = x_56;
goto block_37;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_6 < x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = x_7;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_array_uget(x_7, x_6);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_uset(x_7, x_6, x_18);
x_20 = x_17;
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_21);
lean_inc(x_2);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__2), 14, 6);
lean_closure_set(x_23, 0, x_22);
lean_closure_set(x_23, 1, x_1);
lean_closure_set(x_23, 2, x_2);
lean_closure_set(x_23, 3, x_21);
lean_closure_set(x_23, 4, x_3);
lean_closure_set(x_23, 5, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_24 = l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11___rarg(x_21, x_23, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_6 + x_27;
x_29 = x_25;
x_30 = lean_array_uset(x_19, x_6, x_29);
x_6 = x_28;
x_7 = x_30;
x_13 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_expandCoe___spec__7___rarg___lambda__1), 8, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_11, x_6, x_7, x_8, x_9, x_10);
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
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_expandCoe___spec__7___rarg___lambda__1), 8, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_11, x_6, x_7, x_8, x_9, x_10);
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
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14___rarg), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_indentD(x_1);
x_3 = lean_mk_string("failed to add `below` argument to 'matcher' application");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_expr_instantiate1(x_1, x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_2, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_array_push(x_17, x_5);
x_19 = 0;
x_20 = 1;
x_21 = l_Lean_Meta_mkLambdaFVars(x_18, x_14, x_19, x_20, x_7, x_8, x_9, x_10, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_expr_instantiate1(x_1, x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_2, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_array_push(x_17, x_5);
x_19 = 0;
x_20 = 1;
x_21 = l_Lean_Meta_mkForallFVars(x_18, x_14, x_19, x_20, x_7, x_8, x_9, x_10, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
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
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_4)) {
case 5:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_4);
x_11 = l_Lean_Meta_matchMatcherApp_x3f(x_4, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_levelZero;
x_15 = l_Lean_mkSort(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux(x_4, x_16);
lean_inc(x_17);
x_18 = lean_mk_array(x_17, x_15);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_17, x_19);
lean_dec(x_17);
lean_inc(x_4);
x_21 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5(x_1, x_2, x_3, x_4, x_4, x_18, x_20, x_5, x_6, x_7, x_8, x_9, x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_dec(x_11);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
lean_inc(x_4);
lean_inc(x_1);
x_24 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt(x_1, x_2, x_4);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_23);
x_25 = l_Lean_levelZero;
x_26 = l_Lean_mkSort(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_Expr_getAppNumArgsAux(x_4, x_27);
lean_inc(x_28);
x_29 = lean_mk_array(x_28, x_26);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_sub(x_28, x_30);
lean_dec(x_28);
lean_inc(x_4);
x_32 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8(x_1, x_2, x_3, x_4, x_4, x_29, x_31, x_5, x_6, x_7, x_8, x_9, x_22);
return x_32;
}
else
{
lean_object* x_33; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_33 = l_Lean_Meta_inferType(x_3, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_164; lean_object* x_165; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_box(0);
x_37 = lean_mk_string("Elab");
x_38 = lean_name_mk_string(x_36, x_37);
x_39 = lean_mk_string("definition");
x_40 = lean_name_mk_string(x_38, x_39);
x_41 = lean_mk_string("structural");
x_42 = lean_name_mk_string(x_40, x_41);
x_181 = lean_st_ref_get(x_9, x_35);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_182, 3);
lean_inc(x_183);
lean_dec(x_182);
x_184 = lean_ctor_get_uint8(x_183, sizeof(void*)*1);
lean_dec(x_183);
if (x_184 == 0)
{
lean_object* x_185; uint8_t x_186; 
x_185 = lean_ctor_get(x_181, 1);
lean_inc(x_185);
lean_dec(x_181);
x_186 = 0;
x_164 = x_186;
x_165 = x_185;
goto block_180;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_187 = lean_ctor_get(x_181, 1);
lean_inc(x_187);
lean_dec(x_181);
lean_inc(x_42);
x_188 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_42, x_5, x_6, x_7, x_8, x_9, x_187);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lean_unbox(x_189);
lean_dec(x_189);
x_164 = x_191;
x_165 = x_190;
goto block_180;
}
block_163:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg), 7, 2);
lean_closure_set(x_44, 0, x_23);
lean_closure_set(x_44, 1, x_3);
x_45 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__1), 1, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_46 = l_Lean_Meta_mapErrorImp___rarg(x_44, x_45, x_6, x_7, x_8, x_9, x_43);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_st_ref_get(x_9, x_48);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_take(x_5, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_47);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; size_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_56 = lean_ctor_get(x_52, 0);
x_57 = lean_ctor_get(x_47, 0);
x_58 = lean_ctor_get(x_47, 1);
x_59 = lean_ctor_get(x_47, 2);
x_60 = lean_ctor_get(x_47, 3);
x_61 = lean_ctor_get(x_47, 4);
x_62 = lean_ctor_get(x_47, 5);
x_63 = lean_ctor_get(x_47, 6);
x_64 = lean_ctor_get(x_47, 7);
x_65 = lean_ctor_get(x_47, 8);
x_66 = lean_box(0);
lean_inc(x_57);
x_67 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_56, x_57, x_66);
lean_ctor_set(x_52, 0, x_67);
x_68 = lean_st_ref_set(x_5, x_52, x_53);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = l_Array_zip___rarg(x_64, x_63);
lean_dec(x_64);
x_71 = lean_array_get_size(x_70);
x_72 = lean_usize_of_nat(x_71);
lean_dec(x_71);
x_73 = x_70;
x_74 = lean_box_usize(x_72);
x_75 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1;
x_76 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___boxed), 13, 7);
lean_closure_set(x_76, 0, x_1);
lean_closure_set(x_76, 1, x_2);
lean_closure_set(x_76, 2, x_4);
lean_closure_set(x_76, 3, x_42);
lean_closure_set(x_76, 4, x_74);
lean_closure_set(x_76, 5, x_75);
lean_closure_set(x_76, 6, x_73);
x_77 = x_76;
x_78 = lean_apply_6(x_77, x_5, x_6, x_7, x_8, x_9, x_69);
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_78, 0);
lean_ctor_set(x_47, 7, x_80);
x_81 = l_Lean_Meta_MatcherApp_toExpr(x_47);
lean_ctor_set(x_78, 0, x_81);
return x_78;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_78, 0);
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_78);
lean_ctor_set(x_47, 7, x_82);
x_84 = l_Lean_Meta_MatcherApp_toExpr(x_47);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
uint8_t x_86; 
lean_free_object(x_47);
lean_dec(x_65);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_86 = !lean_is_exclusive(x_78);
if (x_86 == 0)
{
return x_78;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_78, 0);
x_88 = lean_ctor_get(x_78, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_78);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; size_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_90 = lean_ctor_get(x_52, 0);
x_91 = lean_ctor_get(x_47, 0);
x_92 = lean_ctor_get(x_47, 1);
x_93 = lean_ctor_get(x_47, 2);
x_94 = lean_ctor_get(x_47, 3);
x_95 = lean_ctor_get(x_47, 4);
x_96 = lean_ctor_get(x_47, 5);
x_97 = lean_ctor_get(x_47, 6);
x_98 = lean_ctor_get(x_47, 7);
x_99 = lean_ctor_get(x_47, 8);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_47);
x_100 = lean_box(0);
lean_inc(x_91);
x_101 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_90, x_91, x_100);
lean_ctor_set(x_52, 0, x_101);
x_102 = lean_st_ref_set(x_5, x_52, x_53);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
x_104 = l_Array_zip___rarg(x_98, x_97);
lean_dec(x_98);
x_105 = lean_array_get_size(x_104);
x_106 = lean_usize_of_nat(x_105);
lean_dec(x_105);
x_107 = x_104;
x_108 = lean_box_usize(x_106);
x_109 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1;
x_110 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___boxed), 13, 7);
lean_closure_set(x_110, 0, x_1);
lean_closure_set(x_110, 1, x_2);
lean_closure_set(x_110, 2, x_4);
lean_closure_set(x_110, 3, x_42);
lean_closure_set(x_110, 4, x_108);
lean_closure_set(x_110, 5, x_109);
lean_closure_set(x_110, 6, x_107);
x_111 = x_110;
x_112 = lean_apply_6(x_111, x_5, x_6, x_7, x_8, x_9, x_103);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_115 = x_112;
} else {
 lean_dec_ref(x_112);
 x_115 = lean_box(0);
}
x_116 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_116, 0, x_91);
lean_ctor_set(x_116, 1, x_92);
lean_ctor_set(x_116, 2, x_93);
lean_ctor_set(x_116, 3, x_94);
lean_ctor_set(x_116, 4, x_95);
lean_ctor_set(x_116, 5, x_96);
lean_ctor_set(x_116, 6, x_97);
lean_ctor_set(x_116, 7, x_113);
lean_ctor_set(x_116, 8, x_99);
x_117 = l_Lean_Meta_MatcherApp_toExpr(x_116);
if (lean_is_scalar(x_115)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_115;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_114);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_99);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
x_119 = lean_ctor_get(x_112, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_112, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_121 = x_112;
} else {
 lean_dec_ref(x_112);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; size_t x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_123 = lean_ctor_get(x_52, 0);
x_124 = lean_ctor_get(x_52, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_52);
x_125 = lean_ctor_get(x_47, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_47, 1);
lean_inc(x_126);
x_127 = lean_ctor_get(x_47, 2);
lean_inc(x_127);
x_128 = lean_ctor_get(x_47, 3);
lean_inc(x_128);
x_129 = lean_ctor_get(x_47, 4);
lean_inc(x_129);
x_130 = lean_ctor_get(x_47, 5);
lean_inc(x_130);
x_131 = lean_ctor_get(x_47, 6);
lean_inc(x_131);
x_132 = lean_ctor_get(x_47, 7);
lean_inc(x_132);
x_133 = lean_ctor_get(x_47, 8);
lean_inc(x_133);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 lean_ctor_release(x_47, 3);
 lean_ctor_release(x_47, 4);
 lean_ctor_release(x_47, 5);
 lean_ctor_release(x_47, 6);
 lean_ctor_release(x_47, 7);
 lean_ctor_release(x_47, 8);
 x_134 = x_47;
} else {
 lean_dec_ref(x_47);
 x_134 = lean_box(0);
}
x_135 = lean_box(0);
lean_inc(x_125);
x_136 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_123, x_125, x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_124);
x_138 = lean_st_ref_set(x_5, x_137, x_53);
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
lean_dec(x_138);
x_140 = l_Array_zip___rarg(x_132, x_131);
lean_dec(x_132);
x_141 = lean_array_get_size(x_140);
x_142 = lean_usize_of_nat(x_141);
lean_dec(x_141);
x_143 = x_140;
x_144 = lean_box_usize(x_142);
x_145 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1;
x_146 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___boxed), 13, 7);
lean_closure_set(x_146, 0, x_1);
lean_closure_set(x_146, 1, x_2);
lean_closure_set(x_146, 2, x_4);
lean_closure_set(x_146, 3, x_42);
lean_closure_set(x_146, 4, x_144);
lean_closure_set(x_146, 5, x_145);
lean_closure_set(x_146, 6, x_143);
x_147 = x_146;
x_148 = lean_apply_6(x_147, x_5, x_6, x_7, x_8, x_9, x_139);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_152 = lean_alloc_ctor(0, 9, 0);
} else {
 x_152 = x_134;
}
lean_ctor_set(x_152, 0, x_125);
lean_ctor_set(x_152, 1, x_126);
lean_ctor_set(x_152, 2, x_127);
lean_ctor_set(x_152, 3, x_128);
lean_ctor_set(x_152, 4, x_129);
lean_ctor_set(x_152, 5, x_130);
lean_ctor_set(x_152, 6, x_131);
lean_ctor_set(x_152, 7, x_149);
lean_ctor_set(x_152, 8, x_133);
x_153 = l_Lean_Meta_MatcherApp_toExpr(x_152);
if (lean_is_scalar(x_151)) {
 x_154 = lean_alloc_ctor(0, 2, 0);
} else {
 x_154 = x_151;
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_150);
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_125);
x_155 = lean_ctor_get(x_148, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_148, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_157 = x_148;
} else {
 lean_dec_ref(x_148);
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
}
else
{
uint8_t x_159; 
lean_dec(x_42);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_159 = !lean_is_exclusive(x_46);
if (x_159 == 0)
{
return x_46;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_46, 0);
x_161 = lean_ctor_get(x_46, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_46);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
block_180:
{
if (x_164 == 0)
{
lean_dec(x_34);
x_43 = x_165;
goto block_163;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_166 = lean_mk_string("below before matcherApp.addArg: ");
x_167 = l_Lean_stringToMessageData(x_166);
lean_dec(x_166);
lean_inc(x_3);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_3);
x_169 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_mk_string(" : ");
x_171 = l_Lean_stringToMessageData(x_170);
lean_dec(x_170);
x_172 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_172, 0, x_169);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_173, 0, x_34);
x_174 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_mk_string("");
x_176 = l_Lean_stringToMessageData(x_175);
lean_dec(x_175);
x_177 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_176);
lean_inc(x_42);
x_178 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_42, x_177, x_5, x_6, x_7, x_8, x_9, x_165);
x_179 = lean_ctor_get(x_178, 1);
lean_inc(x_179);
lean_dec(x_178);
x_43 = x_179;
goto block_163;
}
}
}
else
{
uint8_t x_192; 
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_192 = !lean_is_exclusive(x_33);
if (x_192 == 0)
{
return x_33;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_33, 0);
x_194 = lean_ctor_get(x_33, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_33);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
}
}
case 6:
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; uint64_t x_199; lean_object* x_200; 
x_196 = lean_ctor_get(x_4, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_4, 1);
lean_inc(x_197);
x_198 = lean_ctor_get(x_4, 2);
lean_inc(x_198);
x_199 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_dec(x_4);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_200 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_197, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; uint8_t x_203; lean_object* x_204; lean_object* x_205; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = (uint8_t)((x_199 << 24) >> 61);
x_204 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2___boxed), 11, 4);
lean_closure_set(x_204, 0, x_198);
lean_closure_set(x_204, 1, x_1);
lean_closure_set(x_204, 2, x_2);
lean_closure_set(x_204, 3, x_3);
x_205 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(x_196, x_203, x_201, x_204, x_5, x_6, x_7, x_8, x_9, x_202);
return x_205;
}
else
{
uint8_t x_206; 
lean_dec(x_198);
lean_dec(x_196);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_206 = !lean_is_exclusive(x_200);
if (x_206 == 0)
{
return x_200;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_200, 0);
x_208 = lean_ctor_get(x_200, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_200);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
return x_209;
}
}
}
case 7:
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; uint64_t x_213; lean_object* x_214; 
x_210 = lean_ctor_get(x_4, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_4, 1);
lean_inc(x_211);
x_212 = lean_ctor_get(x_4, 2);
lean_inc(x_212);
x_213 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
lean_dec(x_4);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_214 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_211, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; uint8_t x_217; lean_object* x_218; lean_object* x_219; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = (uint8_t)((x_213 << 24) >> 61);
x_218 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__3___boxed), 11, 4);
lean_closure_set(x_218, 0, x_212);
lean_closure_set(x_218, 1, x_1);
lean_closure_set(x_218, 2, x_2);
lean_closure_set(x_218, 3, x_3);
x_219 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(x_210, x_217, x_215, x_218, x_5, x_6, x_7, x_8, x_9, x_216);
return x_219;
}
else
{
uint8_t x_220; 
lean_dec(x_212);
lean_dec(x_210);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_220 = !lean_is_exclusive(x_214);
if (x_220 == 0)
{
return x_214;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_214, 0);
x_222 = lean_ctor_get(x_214, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_214);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
return x_223;
}
}
}
case 8:
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_224 = lean_ctor_get(x_4, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_4, 1);
lean_inc(x_225);
x_226 = lean_ctor_get(x_4, 2);
lean_inc(x_226);
x_227 = lean_ctor_get(x_4, 3);
lean_inc(x_227);
lean_dec(x_4);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_228 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_225, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_228) == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 1);
lean_inc(x_230);
lean_dec(x_228);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_231 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_226, x_5, x_6, x_7, x_8, x_9, x_230);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
x_234 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2___boxed), 11, 4);
lean_closure_set(x_234, 0, x_227);
lean_closure_set(x_234, 1, x_1);
lean_closure_set(x_234, 2, x_2);
lean_closure_set(x_234, 3, x_3);
x_235 = l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14___rarg(x_224, x_229, x_232, x_234, x_5, x_6, x_7, x_8, x_9, x_233);
return x_235;
}
else
{
uint8_t x_236; 
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_224);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_236 = !lean_is_exclusive(x_231);
if (x_236 == 0)
{
return x_231;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_231, 0);
x_238 = lean_ctor_get(x_231, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_231);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
else
{
uint8_t x_240; 
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_224);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_240 = !lean_is_exclusive(x_228);
if (x_240 == 0)
{
return x_228;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_228, 0);
x_242 = lean_ctor_get(x_228, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_228);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
}
case 10:
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_4, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_4, 1);
lean_inc(x_245);
lean_dec(x_4);
x_246 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_245, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_246) == 0)
{
uint8_t x_247; 
x_247 = !lean_is_exclusive(x_246);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_246, 0);
x_249 = l_Lean_mkMData(x_244, x_248);
lean_ctor_set(x_246, 0, x_249);
return x_246;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_250 = lean_ctor_get(x_246, 0);
x_251 = lean_ctor_get(x_246, 1);
lean_inc(x_251);
lean_inc(x_250);
lean_dec(x_246);
x_252 = l_Lean_mkMData(x_244, x_250);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
}
else
{
uint8_t x_254; 
lean_dec(x_244);
x_254 = !lean_is_exclusive(x_246);
if (x_254 == 0)
{
return x_246;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_246, 0);
x_256 = lean_ctor_get(x_246, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_246);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
case 11:
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_258 = lean_ctor_get(x_4, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_4, 1);
lean_inc(x_259);
x_260 = lean_ctor_get(x_4, 2);
lean_inc(x_260);
lean_dec(x_4);
x_261 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_260, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_261) == 0)
{
uint8_t x_262; 
x_262 = !lean_is_exclusive(x_261);
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; 
x_263 = lean_ctor_get(x_261, 0);
x_264 = l_Lean_mkProj(x_258, x_259, x_263);
lean_ctor_set(x_261, 0, x_264);
return x_261;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_265 = lean_ctor_get(x_261, 0);
x_266 = lean_ctor_get(x_261, 1);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_261);
x_267 = l_Lean_mkProj(x_258, x_259, x_265);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_266);
return x_268;
}
}
else
{
uint8_t x_269; 
lean_dec(x_259);
lean_dec(x_258);
x_269 = !lean_is_exclusive(x_261);
if (x_269 == 0)
{
return x_261;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_261, 0);
x_271 = lean_ctor_get(x_261, 1);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_261);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
return x_272;
}
}
}
default: 
{
lean_object* x_273; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_273 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn(x_1, x_4, x_6, x_7, x_8, x_9, x_10);
return x_273;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__1(x_1, x_2, x_3, x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__6(x_1, x_2, x_3, x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_loop___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_6);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__12(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 5);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_10 = l_Lean_Meta_IndPredBelow_findBelowIdx(x_9, x_1, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = l_Lean_Meta_MatcherApp_toExpr(x_2);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = l_Lean_Meta_MatcherApp_toExpr(x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_22 = l_Lean_Meta_IndPredBelow_mkBelowMatcher(x_2, x_1, x_20, x_21, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_st_ref_get(x_7, x_24);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_st_ref_take(x_3, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_30, 1);
x_34 = lean_array_push(x_33, x_26);
lean_ctor_set(x_30, 1, x_34);
x_35 = lean_st_ref_set(x_3, x_30, x_31);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
lean_inc(x_25);
x_37 = l_Lean_Meta_matchMatcherApp_x3f(x_25, x_4, x_5, x_6, x_7, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_1);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_mk_string("not a matcherApp: ");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_25);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_mk_string("");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_46, x_3, x_4, x_5, x_6, x_7, x_39);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_25);
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_dec(x_37);
x_49 = lean_ctor_get(x_38, 0);
lean_inc(x_49);
lean_dec(x_38);
x_2 = x_49;
x_8 = x_48;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_30, 0);
x_52 = lean_ctor_get(x_30, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_30);
x_53 = lean_array_push(x_52, x_26);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_st_ref_set(x_3, x_54, x_31);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
lean_inc(x_25);
x_57 = l_Lean_Meta_matchMatcherApp_x3f(x_25, x_4, x_5, x_6, x_7, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_1);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_mk_string("not a matcherApp: ");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_62, 0, x_25);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string("");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_66, x_3, x_4, x_5, x_6, x_7, x_59);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_25);
x_68 = lean_ctor_get(x_57, 1);
lean_inc(x_68);
lean_dec(x_57);
x_69 = lean_ctor_get(x_58, 0);
lean_inc(x_69);
lean_dec(x_58);
x_2 = x_69;
x_8 = x_68;
goto _start;
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
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_22);
if (x_71 == 0)
{
return x_22;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_22, 0);
x_73 = lean_ctor_get(x_22, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_22);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_10);
if (x_75 == 0)
{
return x_10;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_10, 0);
x_77 = lean_ctor_get(x_10, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_10);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_6 < x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = x_7;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_array_uget(x_7, x_6);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_uset(x_7, x_6, x_18);
x_20 = x_17;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_20, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_6 + x_24;
x_26 = x_22;
x_27 = lean_array_uset(x_19, x_6, x_26);
x_6 = x_25;
x_7 = x_27;
x_13 = x_23;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_6) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
x_17 = lean_array_set(x_7, x_8, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_8, x_18);
lean_dec(x_8);
x_6 = x_15;
x_7 = x_17;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_8);
x_21 = l_Lean_Expr_isConstOf(x_6, x_1);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_5);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_6, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_7);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = x_7;
x_28 = lean_box_usize(x_26);
x_29 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2___boxed__const__1;
x_30 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__1___boxed), 13, 7);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_4);
lean_closure_set(x_30, 4, x_28);
lean_closure_set(x_30, 5, x_29);
lean_closure_set(x_30, 6, x_27);
x_31 = x_30;
x_32 = lean_apply_6(x_31, x_9, x_10, x_11, x_12, x_13, x_24);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = l_Lean_mkAppN(x_23, x_34);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = l_Lean_mkAppN(x_23, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_23);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
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
else
{
lean_object* x_48; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_48 = l_Lean_Meta_inferType(x_5, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_box(0);
lean_inc(x_10);
x_52 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_49, x_51, x_10, x_11, x_12, x_13, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Expr_mvarId_x21(x_53);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_55);
x_56 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_55, x_4, x_10, x_11, x_12, x_13, x_54);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_mk_string("could not solve using backwards chaining ");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_62, 0, x_55);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string("");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_66, x_9, x_10, x_11, x_12, x_13, x_59);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_67;
}
else
{
uint8_t x_68; 
lean_dec(x_55);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_68 = !lean_is_exclusive(x_56);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_56, 0);
lean_dec(x_69);
lean_ctor_set(x_56, 0, x_53);
return x_56;
}
else
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_56, 1);
lean_inc(x_70);
lean_dec(x_56);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_53);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_72 = !lean_is_exclusive(x_56);
if (x_72 == 0)
{
return x_56;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_56, 0);
x_74 = lean_ctor_get(x_56, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_56);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_48);
if (x_76 == 0)
{
return x_48;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_48, 0);
x_78 = lean_ctor_get(x_48, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_48);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_6 < x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = x_7;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_array_uget(x_7, x_6);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_uset(x_7, x_6, x_18);
x_20 = x_17;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_20, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_6 + x_24;
x_26 = x_22;
x_27 = lean_array_uset(x_19, x_6, x_26);
x_6 = x_25;
x_7 = x_27;
x_13 = x_23;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_6) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
x_17 = lean_array_set(x_7, x_8, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_8, x_18);
lean_dec(x_8);
x_6 = x_15;
x_7 = x_17;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_8);
x_21 = l_Lean_Expr_isConstOf(x_6, x_1);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_5);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_6, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_7);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = x_7;
x_28 = lean_box_usize(x_26);
x_29 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4___boxed__const__1;
x_30 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__3___boxed), 13, 7);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_4);
lean_closure_set(x_30, 4, x_28);
lean_closure_set(x_30, 5, x_29);
lean_closure_set(x_30, 6, x_27);
x_31 = x_30;
x_32 = lean_apply_6(x_31, x_9, x_10, x_11, x_12, x_13, x_24);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = l_Lean_mkAppN(x_23, x_34);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = l_Lean_mkAppN(x_23, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_23);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
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
else
{
lean_object* x_48; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_48 = l_Lean_Meta_inferType(x_5, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_box(0);
lean_inc(x_10);
x_52 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_49, x_51, x_10, x_11, x_12, x_13, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Expr_mvarId_x21(x_53);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_55);
x_56 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_55, x_4, x_10, x_11, x_12, x_13, x_54);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_mk_string("could not solve using backwards chaining ");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_62, 0, x_55);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string("");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_66, x_9, x_10, x_11, x_12, x_13, x_59);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_67;
}
else
{
uint8_t x_68; 
lean_dec(x_55);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_68 = !lean_is_exclusive(x_56);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_56, 0);
lean_dec(x_69);
lean_ctor_set(x_56, 0, x_53);
return x_56;
}
else
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_56, 1);
lean_inc(x_70);
lean_dec(x_56);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_53);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_72 = !lean_is_exclusive(x_56);
if (x_72 == 0)
{
return x_56;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_56, 0);
x_74 = lean_ctor_get(x_56, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_56);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_48);
if (x_76 == 0)
{
return x_48;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_48, 0);
x_78 = lean_ctor_get(x_48, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_48);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_6 < x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = x_7;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_array_uget(x_7, x_6);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_uset(x_7, x_6, x_18);
x_20 = x_17;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_20, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_6 + x_24;
x_26 = x_22;
x_27 = lean_array_uset(x_19, x_6, x_26);
x_6 = x_25;
x_7 = x_27;
x_13 = x_23;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_6) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
x_17 = lean_array_set(x_7, x_8, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_8, x_18);
lean_dec(x_8);
x_6 = x_15;
x_7 = x_17;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_8);
x_21 = l_Lean_Expr_isConstOf(x_6, x_1);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_5);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_6, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_7);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = x_7;
x_28 = lean_box_usize(x_26);
x_29 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6___boxed__const__1;
x_30 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__5___boxed), 13, 7);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_4);
lean_closure_set(x_30, 4, x_28);
lean_closure_set(x_30, 5, x_29);
lean_closure_set(x_30, 6, x_27);
x_31 = x_30;
x_32 = lean_apply_6(x_31, x_9, x_10, x_11, x_12, x_13, x_24);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = l_Lean_mkAppN(x_23, x_34);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = l_Lean_mkAppN(x_23, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_23);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
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
else
{
lean_object* x_48; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_48 = l_Lean_Meta_inferType(x_5, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_box(0);
lean_inc(x_10);
x_52 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_49, x_51, x_10, x_11, x_12, x_13, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Expr_mvarId_x21(x_53);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_55);
x_56 = l_Lean_Meta_IndPredBelow_backwardsChaining(x_55, x_4, x_10, x_11, x_12, x_13, x_54);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_unbox(x_57);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_mk_string("could not solve using backwards chaining ");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_62, 0, x_55);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string("");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_66, x_9, x_10, x_11, x_12, x_13, x_59);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_67;
}
else
{
uint8_t x_68; 
lean_dec(x_55);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_68 = !lean_is_exclusive(x_56);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_56, 0);
lean_dec(x_69);
lean_ctor_set(x_56, 0, x_53);
return x_56;
}
else
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_56, 1);
lean_inc(x_70);
lean_dec(x_56);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_53);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_72 = !lean_is_exclusive(x_56);
if (x_72 == 0)
{
return x_56;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_56, 0);
x_74 = lean_ctor_get(x_56, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_56);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_48);
if (x_76 == 0)
{
return x_48;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_48, 0);
x_78 = lean_ctor_get(x_48, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_48);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_expr_instantiate1(x_1, x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_2, x_3, x_4, x_5, x_13, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
x_19 = lean_array_push(x_18, x_6);
x_20 = 0;
x_21 = 1;
x_22 = l_Lean_Meta_mkLambdaFVars(x_19, x_15, x_20, x_21, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_14);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_expr_instantiate1(x_1, x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_2, x_3, x_4, x_5, x_13, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
x_19 = lean_array_push(x_18, x_6);
x_20 = 0;
x_21 = 1;
x_22 = l_Lean_Meta_mkForallFVars(x_19, x_15, x_20, x_21, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_14);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 5:
{
lean_object* x_12; lean_object* x_13; 
lean_inc(x_5);
x_12 = l_Lean_Meta_matchMatcherApp_x3f(x_5, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_levelZero;
x_16 = l_Lean_mkSort(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Expr_getAppNumArgsAux(x_5, x_17);
lean_inc(x_18);
x_19 = lean_mk_array(x_18, x_16);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_18, x_20);
lean_dec(x_18);
lean_inc(x_5);
x_22 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2(x_1, x_2, x_3, x_4, x_5, x_5, x_19, x_21, x_6, x_7, x_8, x_9, x_10, x_14);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_dec(x_12);
x_24 = lean_ctor_get(x_13, 0);
lean_inc(x_24);
lean_dec(x_13);
lean_inc(x_5);
lean_inc(x_1);
x_25 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_recArgHasLooseBVarsAt(x_1, x_2, x_5);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_24);
x_26 = l_Lean_levelZero;
x_27 = l_Lean_mkSort(x_26);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Expr_getAppNumArgsAux(x_5, x_28);
lean_inc(x_29);
x_30 = lean_mk_array(x_29, x_27);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_sub(x_29, x_31);
lean_dec(x_29);
lean_inc(x_5);
x_33 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4(x_1, x_2, x_3, x_4, x_5, x_5, x_30, x_32, x_6, x_7, x_8, x_9, x_10, x_23);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_88; lean_object* x_89; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
lean_dec(x_5);
x_34 = lean_box(0);
x_35 = lean_mk_string("Elab");
x_36 = lean_name_mk_string(x_34, x_35);
x_37 = lean_mk_string("definition");
x_38 = lean_name_mk_string(x_36, x_37);
x_39 = lean_mk_string("structural");
x_40 = lean_name_mk_string(x_38, x_39);
x_101 = lean_st_ref_get(x_10, x_23);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_102, 3);
lean_inc(x_103);
lean_dec(x_102);
x_104 = lean_ctor_get_uint8(x_103, sizeof(void*)*1);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; 
x_105 = lean_ctor_get(x_101, 1);
lean_inc(x_105);
lean_dec(x_101);
x_106 = 0;
x_88 = x_106;
x_89 = x_105;
goto block_100;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_107 = lean_ctor_get(x_101, 1);
lean_inc(x_107);
lean_dec(x_101);
lean_inc(x_40);
x_108 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_40, x_6, x_7, x_8, x_9, x_10, x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_unbox(x_109);
lean_dec(x_109);
x_88 = x_111;
x_89 = x_110;
goto block_100;
}
block_87:
{
lean_object* x_42; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_24);
lean_inc(x_3);
x_42 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop_addBelow(x_3, x_24, x_6, x_7, x_8, x_9, x_10, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_55; lean_object* x_56; lean_object* x_67; uint8_t x_68; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_67 = l_Lean_Meta_MatcherApp_toExpr(x_24);
x_68 = lean_expr_eqv(x_43, x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_st_ref_get(x_10, x_44);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_70, 3);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_ctor_get_uint8(x_71, sizeof(void*)*1);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
lean_dec(x_69);
x_74 = 0;
x_55 = x_74;
x_56 = x_73;
goto block_66;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_dec(x_69);
lean_inc(x_40);
x_76 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_40, x_6, x_7, x_8, x_9, x_10, x_75);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_unbox(x_77);
lean_dec(x_77);
x_55 = x_79;
x_56 = x_78;
goto block_66;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_43);
lean_dec(x_40);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_80 = lean_mk_string("could not add below discriminant");
x_81 = l_Lean_stringToMessageData(x_80);
lean_dec(x_80);
x_82 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__3(x_81, x_6, x_7, x_8, x_9, x_10, x_44);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_82;
}
block_54:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_46 = l_Lean_levelZero;
x_47 = l_Lean_mkSort(x_46);
x_48 = lean_unsigned_to_nat(0u);
x_49 = l_Lean_Expr_getAppNumArgsAux(x_43, x_48);
lean_inc(x_49);
x_50 = lean_mk_array(x_49, x_47);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_sub(x_49, x_51);
lean_dec(x_49);
lean_inc(x_43);
x_53 = l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6(x_1, x_2, x_3, x_4, x_43, x_43, x_50, x_52, x_6, x_7, x_8, x_9, x_10, x_45);
return x_53;
}
block_66:
{
if (x_55 == 0)
{
lean_dec(x_40);
x_45 = x_56;
goto block_54;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_57 = lean_mk_string("modified matcher:\n");
x_58 = l_Lean_stringToMessageData(x_57);
lean_dec(x_57);
lean_inc(x_43);
x_59 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_59, 0, x_43);
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string("");
x_62 = l_Lean_stringToMessageData(x_61);
lean_dec(x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_40, x_63, x_6, x_7, x_8, x_9, x_10, x_56);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_45 = x_65;
goto block_54;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_40);
lean_dec(x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_42);
if (x_83 == 0)
{
return x_42;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_42, 0);
x_85 = lean_ctor_get(x_42, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_42);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
block_100:
{
if (x_88 == 0)
{
x_41 = x_89;
goto block_87;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_90 = lean_mk_string("matcherApp before adding below transformation:\n");
x_91 = l_Lean_stringToMessageData(x_90);
lean_dec(x_90);
lean_inc(x_24);
x_92 = l_Lean_Meta_MatcherApp_toExpr(x_24);
x_93 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_mk_string("");
x_96 = l_Lean_stringToMessageData(x_95);
lean_dec(x_95);
x_97 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_96);
lean_inc(x_40);
x_98 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_40, x_97, x_6, x_7, x_8, x_9, x_10, x_89);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_41 = x_99;
goto block_87;
}
}
}
}
}
case 6:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint64_t x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_5, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_5, 1);
lean_inc(x_113);
x_114 = lean_ctor_get(x_5, 2);
lean_inc(x_114);
x_115 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_116 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_113, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; lean_object* x_121; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = (uint8_t)((x_115 << 24) >> 61);
x_120 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1___boxed), 12, 5);
lean_closure_set(x_120, 0, x_114);
lean_closure_set(x_120, 1, x_1);
lean_closure_set(x_120, 2, x_2);
lean_closure_set(x_120, 3, x_3);
lean_closure_set(x_120, 4, x_4);
x_121 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(x_112, x_119, x_117, x_120, x_6, x_7, x_8, x_9, x_10, x_118);
return x_121;
}
else
{
uint8_t x_122; 
lean_dec(x_114);
lean_dec(x_112);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_122 = !lean_is_exclusive(x_116);
if (x_122 == 0)
{
return x_116;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_116, 0);
x_124 = lean_ctor_get(x_116, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_116);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
case 7:
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; uint64_t x_129; lean_object* x_130; 
x_126 = lean_ctor_get(x_5, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_5, 1);
lean_inc(x_127);
x_128 = lean_ctor_get(x_5, 2);
lean_inc(x_128);
x_129 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_130 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_127, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_135; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = (uint8_t)((x_129 << 24) >> 61);
x_134 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__2___boxed), 12, 5);
lean_closure_set(x_134, 0, x_128);
lean_closure_set(x_134, 1, x_1);
lean_closure_set(x_134, 2, x_2);
lean_closure_set(x_134, 3, x_3);
lean_closure_set(x_134, 4, x_4);
x_135 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__13___rarg(x_126, x_133, x_131, x_134, x_6, x_7, x_8, x_9, x_10, x_132);
return x_135;
}
else
{
uint8_t x_136; 
lean_dec(x_128);
lean_dec(x_126);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_136 = !lean_is_exclusive(x_130);
if (x_136 == 0)
{
return x_130;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_130, 0);
x_138 = lean_ctor_get(x_130, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_130);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
case 8:
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_140 = lean_ctor_get(x_5, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_5, 1);
lean_inc(x_141);
x_142 = lean_ctor_get(x_5, 2);
lean_inc(x_142);
x_143 = lean_ctor_get(x_5, 3);
lean_inc(x_143);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_144 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_141, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_147 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_142, x_6, x_7, x_8, x_9, x_10, x_146);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_150 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1___boxed), 12, 5);
lean_closure_set(x_150, 0, x_143);
lean_closure_set(x_150, 1, x_1);
lean_closure_set(x_150, 2, x_2);
lean_closure_set(x_150, 3, x_3);
lean_closure_set(x_150, 4, x_4);
x_151 = l_Lean_Meta_withLetDecl___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__14___rarg(x_140, x_145, x_148, x_150, x_6, x_7, x_8, x_9, x_10, x_149);
return x_151;
}
else
{
uint8_t x_152; 
lean_dec(x_145);
lean_dec(x_143);
lean_dec(x_140);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_152 = !lean_is_exclusive(x_147);
if (x_152 == 0)
{
return x_147;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_147, 0);
x_154 = lean_ctor_get(x_147, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_147);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
else
{
uint8_t x_156; 
lean_dec(x_143);
lean_dec(x_142);
lean_dec(x_140);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_156 = !lean_is_exclusive(x_144);
if (x_156 == 0)
{
return x_144;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_144, 0);
x_158 = lean_ctor_get(x_144, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_144);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
case 10:
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_5, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_5, 1);
lean_inc(x_161);
lean_dec(x_5);
x_162 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_161, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_162) == 0)
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_162, 0);
x_165 = l_Lean_mkMData(x_160, x_164);
lean_ctor_set(x_162, 0, x_165);
return x_162;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_162, 0);
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_162);
x_168 = l_Lean_mkMData(x_160, x_166);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_dec(x_160);
x_170 = !lean_is_exclusive(x_162);
if (x_170 == 0)
{
return x_162;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_162, 0);
x_172 = lean_ctor_get(x_162, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_162);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
case 11:
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_174 = lean_ctor_get(x_5, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_5, 1);
lean_inc(x_175);
x_176 = lean_ctor_get(x_5, 2);
lean_inc(x_176);
lean_dec(x_5);
x_177 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_4, x_176, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_177) == 0)
{
uint8_t x_178; 
x_178 = !lean_is_exclusive(x_177);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; 
x_179 = lean_ctor_get(x_177, 0);
x_180 = l_Lean_mkProj(x_174, x_175, x_179);
lean_ctor_set(x_177, 0, x_180);
return x_177;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_181 = lean_ctor_get(x_177, 0);
x_182 = lean_ctor_get(x_177, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_177);
x_183 = l_Lean_mkProj(x_174, x_175, x_181);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
return x_184;
}
}
else
{
uint8_t x_185; 
lean_dec(x_175);
lean_dec(x_174);
x_185 = !lean_is_exclusive(x_177);
if (x_185 == 0)
{
return x_177;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_177, 0);
x_187 = lean_ctor_get(x_177, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_177);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
default: 
{
lean_object* x_189; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_189 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn(x_1, x_5, x_7, x_8, x_9, x_10, x_11);
return x_189;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__1(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__3(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__5(x_1, x_2, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = l_Lean_Meta_IndPredBelow_maxBackwardChainingDepth;
x_13 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_11, x_12);
lean_dec(x_11);
x_14 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop(x_1, x_2, x_3, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_reduce_visit___spec__6___rarg___lambda__1), 9, 2);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_2, x_10, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = lean_expr_eqv(x_8, x_2);
x_10 = 1;
x_11 = x_4 + x_10;
if (x_9 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 7);
x_13 = l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(x_12, x_8);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_array_push(x_6, x_8);
x_4 = x_11;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_8);
x_4 = x_11;
goto _start;
}
}
else
{
lean_dec(x_8);
x_4 = x_11;
goto _start;
}
}
else
{
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = l_Lean_instInhabitedExpr;
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_get(x_16, x_8, x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_19 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop(x_1, x_2, x_18, x_3, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(2u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_array_push(x_23, x_4);
x_25 = lean_array_push(x_24, x_18);
x_26 = l_Array_append___rarg(x_5, x_25);
lean_dec(x_25);
x_27 = l_Array_append___rarg(x_26, x_6);
x_28 = 0;
x_29 = 1;
x_30 = l_Lean_Meta_mkLambdaFVars(x_27, x_20, x_28, x_29, x_11, x_12, x_13, x_14, x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Lean_mkApp(x_7, x_32);
x_34 = l_Lean_mkAppN(x_33, x_6);
lean_ctor_set(x_30, 0, x_34);
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_30, 0);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_30);
x_37 = l_Lean_mkApp(x_7, x_35);
x_38 = l_Lean_mkAppN(x_37, x_6);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_7);
x_40 = !lean_is_exclusive(x_30);
if (x_40 == 0)
{
return x_30;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_30, 0);
x_42 = lean_ctor_get(x_30, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_30);
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
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_19);
if (x_44 == 0)
{
return x_19;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_19, 0);
x_46 = lean_ctor_get(x_19, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_19);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l_Lean_instInhabitedExpr;
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_array_get(x_18, x_10, x_19);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_21 = l_Lean_Meta_inferType(x_20, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_45; lean_object* x_46; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_57 = lean_st_ref_get(x_16, x_23);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_58, 3);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_ctor_get_uint8(x_59, sizeof(void*)*1);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
lean_dec(x_57);
x_62 = 0;
x_45 = x_62;
x_46 = x_61;
goto block_56;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
lean_dec(x_57);
lean_inc(x_9);
x_64 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_9, x_12, x_13, x_14, x_15, x_16, x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_unbox(x_65);
lean_dec(x_65);
x_45 = x_67;
x_46 = x_66;
goto block_56;
}
block_44:
{
lean_object* x_25; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_25 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_1, x_19, x_22, x_13, x_14, x_15, x_16, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
lean_inc(x_2);
x_30 = lean_array_push(x_29, x_2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_31 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_30, x_19, x_26, x_13, x_14, x_15, x_16, x_27);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__1___boxed), 15, 7);
lean_closure_set(x_34, 0, x_3);
lean_closure_set(x_34, 1, x_4);
lean_closure_set(x_34, 2, x_5);
lean_closure_set(x_34, 3, x_2);
lean_closure_set(x_34, 4, x_1);
lean_closure_set(x_34, 5, x_6);
lean_closure_set(x_34, 6, x_7);
x_35 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg(x_32, x_8, x_34, x_12, x_13, x_14, x_15, x_16, x_33);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
block_56:
{
if (x_45 == 0)
{
lean_dec(x_9);
x_24 = x_46;
goto block_44;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_mk_string("FType: ");
x_48 = l_Lean_stringToMessageData(x_47);
lean_dec(x_47);
lean_inc(x_22);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_22);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_mk_string("");
x_52 = l_Lean_stringToMessageData(x_51);
lean_dec(x_51);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_9, x_53, x_12, x_13, x_14, x_15, x_16, x_46);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_24 = x_55;
goto block_44;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_21);
if (x_68 == 0)
{
return x_21;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_21, 0);
x_70 = lean_ctor_get(x_21, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_21);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_1, 7);
lean_inc(x_17);
lean_inc(x_2);
lean_inc(x_17);
x_18 = lean_array_push(x_17, x_2);
x_19 = 0;
x_20 = 1;
lean_inc(x_12);
x_21 = l_Lean_Meta_mkLambdaFVars(x_18, x_3, x_19, x_20, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_109; lean_object* x_110; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_121 = lean_st_ref_get(x_15, x_23);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_122, 3);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_ctor_get_uint8(x_123, sizeof(void*)*1);
lean_dec(x_123);
if (x_124 == 0)
{
lean_object* x_125; 
x_125 = lean_ctor_get(x_121, 1);
lean_inc(x_125);
lean_dec(x_121);
x_109 = x_19;
x_110 = x_125;
goto block_120;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
lean_dec(x_121);
lean_inc(x_7);
x_127 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_7, x_11, x_12, x_13, x_14, x_15, x_126);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_unbox(x_128);
lean_dec(x_128);
x_109 = x_130;
x_110 = x_129;
goto block_120;
}
block_108:
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_1, 6);
lean_inc(x_25);
if (x_8 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_97 = lean_ctor_get(x_1, 4);
lean_inc(x_97);
x_98 = l_Lean_brecOnSuffix;
x_99 = lean_name_mk_string(x_97, x_98);
x_100 = lean_ctor_get(x_1, 5);
lean_inc(x_100);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_9);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_Lean_mkConst(x_99, x_101);
x_26 = x_102;
goto block_96;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_9);
x_103 = lean_ctor_get(x_1, 4);
lean_inc(x_103);
x_104 = l_Lean_binductionOnSuffix;
x_105 = lean_name_mk_string(x_103, x_104);
x_106 = lean_ctor_get(x_1, 5);
lean_inc(x_106);
x_107 = l_Lean_mkConst(x_105, x_106);
x_26 = x_107;
goto block_96;
}
block_96:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = l_Lean_mkAppN(x_26, x_25);
lean_dec(x_25);
x_28 = l_Lean_mkApp(x_27, x_22);
x_29 = l_Lean_mkAppN(x_28, x_17);
lean_inc(x_2);
x_30 = l_Lean_mkApp(x_29, x_2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_30);
x_31 = l_Lean_Meta_check(x_30, x_12, x_13, x_14, x_15, x_24);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_30);
x_33 = l_Lean_Meta_inferType(x_30, x_12, x_13, x_14, x_15, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_42; lean_object* x_43; lean_object* x_54; uint8_t x_66; lean_object* x_67; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_78 = lean_st_ref_get(x_15, x_35);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_79, 3);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_ctor_get_uint8(x_80, sizeof(void*)*1);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; 
x_82 = lean_ctor_get(x_78, 1);
lean_inc(x_82);
lean_dec(x_78);
x_66 = x_19;
x_67 = x_82;
goto block_77;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
lean_inc(x_7);
x_84 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_7, x_11, x_12, x_13, x_14, x_15, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_unbox(x_85);
lean_dec(x_85);
x_66 = x_87;
x_67 = x_86;
goto block_77;
}
block_41:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_inc(x_38);
x_39 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__2___boxed), 17, 9);
lean_closure_set(x_39, 0, x_17);
lean_closure_set(x_39, 1, x_2);
lean_closure_set(x_39, 2, x_4);
lean_closure_set(x_39, 3, x_1);
lean_closure_set(x_39, 4, x_5);
lean_closure_set(x_39, 5, x_6);
lean_closure_set(x_39, 6, x_30);
lean_closure_set(x_39, 7, x_38);
lean_closure_set(x_39, 8, x_7);
x_40 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg(x_34, x_38, x_39, x_11, x_12, x_13, x_14, x_15, x_36);
return x_40;
}
block_53:
{
if (x_42 == 0)
{
x_36 = x_43;
goto block_41;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_mk_string("brecOnType ");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
lean_inc(x_34);
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_34);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_mk_string("");
x_49 = l_Lean_stringToMessageData(x_48);
lean_dec(x_48);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
lean_inc(x_7);
x_51 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_7, x_50, x_11, x_12, x_13, x_14, x_15, x_43);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_36 = x_52;
goto block_41;
}
}
block_65:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_st_ref_get(x_15, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_56, 3);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_ctor_get_uint8(x_57, sizeof(void*)*1);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_55, 1);
lean_inc(x_59);
lean_dec(x_55);
x_42 = x_19;
x_43 = x_59;
goto block_53;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
lean_dec(x_55);
lean_inc(x_7);
x_61 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_7, x_11, x_12, x_13, x_14, x_15, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unbox(x_62);
lean_dec(x_62);
x_42 = x_64;
x_43 = x_63;
goto block_53;
}
}
block_77:
{
if (x_66 == 0)
{
x_54 = x_67;
goto block_65;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_68 = lean_mk_string("brecOn     ");
x_69 = l_Lean_stringToMessageData(x_68);
lean_dec(x_68);
lean_inc(x_30);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_30);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_mk_string("");
x_73 = l_Lean_stringToMessageData(x_72);
lean_dec(x_72);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
lean_inc(x_7);
x_75 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_7, x_74, x_11, x_12, x_13, x_14, x_15, x_67);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_54 = x_76;
goto block_65;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_30);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_33);
if (x_88 == 0)
{
return x_33;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_33, 0);
x_90 = lean_ctor_get(x_33, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_33);
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
lean_dec(x_30);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_31);
if (x_92 == 0)
{
return x_31;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_31, 0);
x_94 = lean_ctor_get(x_31, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_31);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
block_120:
{
if (x_109 == 0)
{
x_24 = x_110;
goto block_108;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_111 = lean_mk_string("brecOn motive: ");
x_112 = l_Lean_stringToMessageData(x_111);
lean_dec(x_111);
lean_inc(x_22);
x_113 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_113, 0, x_22);
x_114 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_mk_string("");
x_116 = l_Lean_stringToMessageData(x_115);
lean_dec(x_115);
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
lean_inc(x_7);
x_118 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_7, x_117, x_11, x_12, x_13, x_14, x_15, x_110);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_24 = x_119;
goto block_108;
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_131 = !lean_is_exclusive(x_21);
if (x_131 == 0)
{
return x_21;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_21, 0);
x_133 = lean_ctor_get(x_21, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_21);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_10 = l_Lean_Meta_inferType(x_3, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_headBeta(x_11);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = l_Lean_instInhabitedExpr;
x_17 = lean_array_get(x_16, x_14, x_15);
lean_dec(x_15);
x_18 = lean_array_get_size(x_14);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_mk_empty_array_with_capacity(x_19);
x_21 = lean_nat_dec_lt(x_19, x_18);
x_22 = lean_box(0);
x_23 = lean_mk_string("Elab");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("definition");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("structural");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_st_ref_get(x_8, x_12);
if (x_21 == 0)
{
lean_dec(x_18);
lean_dec(x_14);
x_30 = x_20;
goto block_125;
}
else
{
uint8_t x_126; 
x_126 = lean_nat_dec_le(x_18, x_18);
if (x_126 == 0)
{
lean_dec(x_18);
lean_dec(x_14);
x_30 = x_20;
goto block_125;
}
else
{
size_t x_127; size_t x_128; lean_object* x_129; 
x_127 = 0;
x_128 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_129 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__2(x_2, x_17, x_14, x_127, x_128, x_20);
lean_dec(x_14);
x_30 = x_129;
goto block_125;
}
}
block_125:
{
lean_object* x_31; uint8_t x_93; lean_object* x_94; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_115 = lean_ctor_get(x_29, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_115, 3);
lean_inc(x_116);
lean_dec(x_115);
x_117 = lean_ctor_get_uint8(x_116, sizeof(void*)*1);
lean_dec(x_116);
if (x_117 == 0)
{
lean_object* x_118; uint8_t x_119; 
x_118 = lean_ctor_get(x_29, 1);
lean_inc(x_118);
lean_dec(x_29);
x_119 = 0;
x_93 = x_119;
x_94 = x_118;
goto block_114;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_120 = lean_ctor_get(x_29, 1);
lean_inc(x_120);
lean_dec(x_29);
lean_inc(x_28);
x_121 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_28, x_4, x_5, x_6, x_7, x_8, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_unbox(x_122);
lean_dec(x_122);
x_93 = x_124;
x_94 = x_123;
goto block_114;
}
block_92:
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_32 = 0;
x_33 = 1;
lean_inc(x_5);
lean_inc(x_30);
x_34 = l_Lean_Meta_mkForallFVars(x_30, x_13, x_32, x_33, x_5, x_6, x_7, x_8, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_35);
x_37 = l_Lean_Meta_getLevel(x_35, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_62; lean_object* x_63; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_74 = lean_st_ref_get(x_8, x_39);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_75, 3);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_ctor_get_uint8(x_76, sizeof(void*)*1);
lean_dec(x_76);
if (x_77 == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_74, 1);
lean_inc(x_78);
lean_dec(x_74);
x_62 = x_32;
x_63 = x_78;
goto block_73;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_dec(x_74);
lean_inc(x_28);
x_80 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_28, x_4, x_5, x_6, x_7, x_8, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_unbox(x_81);
lean_dec(x_81);
x_62 = x_83;
x_63 = x_82;
goto block_73;
}
block_61:
{
uint8_t x_41; uint8_t x_42; 
x_41 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
if (x_41 == 0)
{
x_42 = x_32;
goto block_58;
}
else
{
lean_object* x_59; uint8_t x_60; 
x_59 = l_Lean_levelZero;
x_60 = lean_level_eq(x_38, x_59);
x_42 = x_60;
goto block_58;
}
block_58:
{
if (x_41 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_box(0);
x_44 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3(x_2, x_17, x_35, x_1, x_3, x_30, x_28, x_42, x_38, x_43, x_4, x_5, x_6, x_7, x_8, x_40);
return x_44;
}
else
{
lean_object* x_45; uint8_t x_46; 
x_45 = l_Lean_levelZero;
x_46 = lean_level_eq(x_38, x_45);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = l_Lean_Meta_decLevel(x_38, x_5, x_6, x_7, x_8, x_40);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_box(0);
x_51 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3(x_2, x_17, x_35, x_1, x_3, x_30, x_28, x_42, x_48, x_50, x_4, x_5, x_6, x_7, x_8, x_49);
return x_51;
}
else
{
uint8_t x_52; 
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_47);
if (x_52 == 0)
{
return x_47;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_47, 0);
x_54 = lean_ctor_get(x_47, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_47);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_box(0);
x_57 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3(x_2, x_17, x_35, x_1, x_3, x_30, x_28, x_42, x_38, x_56, x_4, x_5, x_6, x_7, x_8, x_40);
return x_57;
}
}
}
}
block_73:
{
if (x_62 == 0)
{
x_40 = x_63;
goto block_61;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_mk_string("brecOn univ: ");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
lean_inc(x_38);
x_66 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_66, 0, x_38);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_string("");
x_69 = l_Lean_stringToMessageData(x_68);
lean_dec(x_68);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_69);
lean_inc(x_28);
x_71 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_28, x_70, x_4, x_5, x_6, x_7, x_8, x_63);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_40 = x_72;
goto block_61;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_37);
if (x_84 == 0)
{
return x_37;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_37, 0);
x_86 = lean_ctor_get(x_37, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_37);
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
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_34);
if (x_88 == 0)
{
return x_34;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_34, 0);
x_90 = lean_ctor_get(x_34, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_34);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
block_114:
{
if (x_93 == 0)
{
x_31 = x_94;
goto block_92;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_95 = lean_mk_string("fixedParams: ");
x_96 = l_Lean_stringToMessageData(x_95);
lean_dec(x_95);
x_97 = lean_ctor_get(x_2, 0);
lean_inc(x_97);
x_98 = lean_array_to_list(lean_box(0), x_97);
x_99 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_98);
x_100 = l_Lean_MessageData_ofList(x_99);
lean_dec(x_99);
x_101 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_101, 0, x_96);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_string(", otherArgs: ");
x_103 = l_Lean_stringToMessageData(x_102);
lean_dec(x_102);
x_104 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_30);
x_105 = lean_array_to_list(lean_box(0), x_30);
x_106 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_105);
x_107 = l_Lean_MessageData_ofList(x_106);
lean_dec(x_106);
x_108 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_mk_string("");
x_110 = l_Lean_stringToMessageData(x_109);
lean_dec(x_109);
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_28);
x_112 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_28, x_111, x_4, x_5, x_6, x_7, x_8, x_94);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
lean_dec(x_112);
x_31 = x_113;
goto block_92;
}
}
}
}
else
{
uint8_t x_130; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_10);
if (x_130 == 0)
{
return x_10;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_10, 0);
x_132 = lean_ctor_get(x_10, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_10);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__2(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_16;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__2___boxed(lean_object** _args) {
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
x_18 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_11);
lean_dec(x_10);
return x_18;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_8);
lean_dec(x_8);
x_18 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_10);
return x_18;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = lean_expr_eqv(x_8, x_2);
x_10 = 1;
x_11 = x_4 + x_10;
if (x_9 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 7);
x_13 = l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(x_12, x_8);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_array_push(x_6, x_8);
x_4 = x_11;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_8);
x_4 = x_11;
goto _start;
}
}
else
{
lean_dec(x_8);
x_4 = x_11;
goto _start;
}
}
else
{
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_instInhabitedExpr;
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_get(x_12, x_4, x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l_Lean_Meta_inferType(x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_52 = lean_st_ref_get(x_10, x_17);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_53, 3);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_ctor_get_uint8(x_54, sizeof(void*)*1);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = 0;
x_18 = x_57;
x_19 = x_56;
goto block_51;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_dec(x_52);
lean_inc(x_3);
x_59 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_3, x_6, x_7, x_8, x_9, x_10, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_unbox(x_60);
lean_dec(x_60);
x_18 = x_62;
x_19 = x_61;
goto block_51;
}
block_51:
{
if (x_18 == 0)
{
lean_object* x_20; 
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_1, x_13, x_16, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_mk_empty_array_with_capacity(x_23);
x_25 = lean_array_push(x_24, x_2);
x_26 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_25, x_13, x_21, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_25);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_mk_string("FType: ");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
lean_inc(x_16);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_16);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_3, x_37, x_6, x_7, x_8, x_9, x_10, x_19);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_40 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_1, x_13, x_16, x_7, x_8, x_9, x_10, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_mk_empty_array_with_capacity(x_43);
x_45 = lean_array_push(x_44, x_2);
x_46 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_45, x_13, x_41, x_7, x_8, x_9, x_10, x_42);
lean_dec(x_45);
return x_46;
}
else
{
uint8_t x_47; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_40);
if (x_47 == 0)
{
return x_40;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_40, 0);
x_49 = lean_ctor_get(x_40, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_40);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_15);
if (x_63 == 0)
{
return x_15;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_15, 0);
x_65 = lean_ctor_get(x_15, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_15);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_box(0);
lean_inc(x_13);
x_19 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_1, x_18, x_13, x_14, x_15, x_16, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_instInhabitedExpr;
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_array_get(x_21, x_10, x_22);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_24 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps(x_2, x_3, x_4, x_5, x_12, x_13, x_14, x_15, x_16, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(2u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_array_push(x_28, x_6);
x_30 = lean_array_push(x_29, x_23);
x_31 = l_Array_append___rarg(x_7, x_30);
lean_dec(x_30);
x_32 = l_Array_append___rarg(x_31, x_8);
x_33 = 0;
x_34 = 1;
x_35 = l_Lean_Meta_mkLambdaFVars(x_32, x_25, x_33, x_34, x_13, x_14, x_15, x_16, x_26);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = l_Lean_mkApp(x_9, x_37);
x_39 = l_Lean_mkAppN(x_38, x_8);
lean_ctor_set(x_35, 0, x_39);
return x_35;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_35, 0);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_35);
x_42 = l_Lean_mkApp(x_9, x_40);
x_43 = l_Lean_mkAppN(x_42, x_8);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_9);
x_45 = !lean_is_exclusive(x_35);
if (x_45 == 0)
{
return x_35;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_35, 0);
x_47 = lean_ctor_get(x_35, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_35);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_49 = !lean_is_exclusive(x_24);
if (x_49 == 0)
{
return x_24;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_24, 0);
x_51 = lean_ctor_get(x_24, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_24);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_10 = l_Lean_Meta_inferType(x_3, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_headBeta(x_11);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = l_Lean_instInhabitedExpr;
x_17 = lean_array_get(x_16, x_14, x_15);
lean_dec(x_15);
x_18 = lean_array_get_size(x_14);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_mk_empty_array_with_capacity(x_19);
x_21 = lean_nat_dec_lt(x_19, x_18);
x_22 = lean_box(0);
x_23 = lean_mk_string("Elab");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("definition");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("structural");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_st_ref_get(x_8, x_12);
if (x_21 == 0)
{
lean_dec(x_18);
lean_dec(x_14);
x_30 = x_20;
goto block_190;
}
else
{
uint8_t x_191; 
x_191 = lean_nat_dec_le(x_18, x_18);
if (x_191 == 0)
{
lean_dec(x_18);
lean_dec(x_14);
x_30 = x_20;
goto block_190;
}
else
{
size_t x_192; size_t x_193; lean_object* x_194; 
x_192 = 0;
x_193 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_194 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___spec__1(x_2, x_17, x_14, x_192, x_193, x_20);
lean_dec(x_14);
x_30 = x_194;
goto block_190;
}
}
block_190:
{
lean_object* x_31; uint8_t x_158; lean_object* x_159; lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_29, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_180, 3);
lean_inc(x_181);
lean_dec(x_180);
x_182 = lean_ctor_get_uint8(x_181, sizeof(void*)*1);
lean_dec(x_181);
if (x_182 == 0)
{
lean_object* x_183; uint8_t x_184; 
x_183 = lean_ctor_get(x_29, 1);
lean_inc(x_183);
lean_dec(x_29);
x_184 = 0;
x_158 = x_184;
x_159 = x_183;
goto block_179;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; 
x_185 = lean_ctor_get(x_29, 1);
lean_inc(x_185);
lean_dec(x_29);
lean_inc(x_28);
x_186 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_28, x_4, x_5, x_6, x_7, x_8, x_185);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_189 = lean_unbox(x_187);
lean_dec(x_187);
x_158 = x_189;
x_159 = x_188;
goto block_179;
}
block_157:
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_32 = 0;
x_33 = 1;
lean_inc(x_5);
lean_inc(x_30);
x_34 = l_Lean_Meta_mkForallFVars(x_30, x_13, x_32, x_33, x_5, x_6, x_7, x_8, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_2, 7);
lean_inc(x_37);
lean_inc(x_17);
lean_inc(x_37);
x_38 = lean_array_push(x_37, x_17);
lean_inc(x_5);
x_39 = l_Lean_Meta_mkLambdaFVars(x_38, x_35, x_32, x_33, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_127; lean_object* x_128; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_139 = lean_st_ref_get(x_8, x_41);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_140, 3);
lean_inc(x_141);
lean_dec(x_140);
x_142 = lean_ctor_get_uint8(x_141, sizeof(void*)*1);
lean_dec(x_141);
if (x_142 == 0)
{
lean_object* x_143; 
x_143 = lean_ctor_get(x_139, 1);
lean_inc(x_143);
lean_dec(x_139);
x_127 = x_32;
x_128 = x_143;
goto block_138;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_144 = lean_ctor_get(x_139, 1);
lean_inc(x_144);
lean_dec(x_139);
lean_inc(x_28);
x_145 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_28, x_4, x_5, x_6, x_7, x_8, x_144);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_unbox(x_146);
lean_dec(x_146);
x_127 = x_148;
x_128 = x_147;
goto block_138;
}
block_126:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_43 = lean_ctor_get(x_2, 4);
lean_inc(x_43);
x_44 = l_Lean_brecOnSuffix;
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = lean_ctor_get(x_2, 5);
lean_inc(x_46);
x_47 = l_Lean_mkConst(x_45, x_46);
x_48 = lean_ctor_get(x_2, 6);
lean_inc(x_48);
x_49 = l_Lean_mkAppN(x_47, x_48);
lean_dec(x_48);
lean_inc(x_40);
x_50 = l_Lean_mkApp(x_49, x_40);
x_51 = l_Lean_mkAppN(x_50, x_37);
lean_inc(x_17);
x_52 = l_Lean_mkApp(x_51, x_17);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_52);
x_53 = l_Lean_Meta_check(x_52, x_5, x_6, x_7, x_8, x_42);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_52);
x_55 = l_Lean_Meta_inferType(x_52, x_5, x_6, x_7, x_8, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_72; lean_object* x_73; lean_object* x_84; uint8_t x_96; lean_object* x_97; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_108 = lean_st_ref_get(x_8, x_57);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_109, 3);
lean_inc(x_110);
lean_dec(x_109);
x_111 = lean_ctor_get_uint8(x_110, sizeof(void*)*1);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; 
x_112 = lean_ctor_get(x_108, 1);
lean_inc(x_112);
lean_dec(x_108);
x_96 = x_32;
x_97 = x_112;
goto block_107;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_dec(x_108);
lean_inc(x_28);
x_114 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_28, x_4, x_5, x_6, x_7, x_8, x_113);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_unbox(x_115);
lean_dec(x_115);
x_96 = x_117;
x_97 = x_116;
goto block_107;
}
block_71:
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_inc(x_17);
lean_inc(x_37);
x_61 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__1___boxed), 11, 3);
lean_closure_set(x_61, 0, x_37);
lean_closure_set(x_61, 1, x_17);
lean_closure_set(x_61, 2, x_28);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_60);
x_62 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg(x_56, x_60, x_61, x_4, x_5, x_6, x_7, x_8, x_58);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
lean_inc(x_63);
x_65 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__2___boxed), 17, 9);
lean_closure_set(x_65, 0, x_63);
lean_closure_set(x_65, 1, x_1);
lean_closure_set(x_65, 2, x_2);
lean_closure_set(x_65, 3, x_40);
lean_closure_set(x_65, 4, x_3);
lean_closure_set(x_65, 5, x_17);
lean_closure_set(x_65, 6, x_37);
lean_closure_set(x_65, 7, x_30);
lean_closure_set(x_65, 8, x_52);
x_66 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn___spec__1___rarg(x_63, x_60, x_65, x_4, x_5, x_6, x_7, x_8, x_64);
return x_66;
}
else
{
uint8_t x_67; 
lean_dec(x_60);
lean_dec(x_52);
lean_dec(x_40);
lean_dec(x_37);
lean_dec(x_30);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
block_83:
{
if (x_72 == 0)
{
x_58 = x_73;
goto block_71;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_74 = lean_mk_string("brecOnType ");
x_75 = l_Lean_stringToMessageData(x_74);
lean_dec(x_74);
lean_inc(x_56);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_56);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("");
x_79 = l_Lean_stringToMessageData(x_78);
lean_dec(x_78);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_28);
x_81 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_28, x_80, x_4, x_5, x_6, x_7, x_8, x_73);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_58 = x_82;
goto block_71;
}
}
block_95:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_85 = lean_st_ref_get(x_8, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 3);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_ctor_get_uint8(x_87, sizeof(void*)*1);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; 
x_89 = lean_ctor_get(x_85, 1);
lean_inc(x_89);
lean_dec(x_85);
x_72 = x_32;
x_73 = x_89;
goto block_83;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_90 = lean_ctor_get(x_85, 1);
lean_inc(x_90);
lean_dec(x_85);
lean_inc(x_28);
x_91 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_28, x_4, x_5, x_6, x_7, x_8, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_unbox(x_92);
lean_dec(x_92);
x_72 = x_94;
x_73 = x_93;
goto block_83;
}
}
block_107:
{
if (x_96 == 0)
{
x_84 = x_97;
goto block_95;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_98 = lean_mk_string("brecOn     ");
x_99 = l_Lean_stringToMessageData(x_98);
lean_dec(x_98);
lean_inc(x_52);
x_100 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_100, 0, x_52);
x_101 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_string("");
x_103 = l_Lean_stringToMessageData(x_102);
lean_dec(x_102);
x_104 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_28);
x_105 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_28, x_104, x_4, x_5, x_6, x_7, x_8, x_97);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_84 = x_106;
goto block_95;
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_52);
lean_dec(x_40);
lean_dec(x_37);
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_118 = !lean_is_exclusive(x_55);
if (x_118 == 0)
{
return x_55;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_55, 0);
x_120 = lean_ctor_get(x_55, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_55);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_52);
lean_dec(x_40);
lean_dec(x_37);
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_122 = !lean_is_exclusive(x_53);
if (x_122 == 0)
{
return x_53;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_53, 0);
x_124 = lean_ctor_get(x_53, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_53);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
block_138:
{
if (x_127 == 0)
{
x_42 = x_128;
goto block_126;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_129 = lean_mk_string("brecOn motive: ");
x_130 = l_Lean_stringToMessageData(x_129);
lean_dec(x_129);
lean_inc(x_40);
x_131 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_131, 0, x_40);
x_132 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("");
x_134 = l_Lean_stringToMessageData(x_133);
lean_dec(x_133);
x_135 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_134);
lean_inc(x_28);
x_136 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_28, x_135, x_4, x_5, x_6, x_7, x_8, x_128);
x_137 = lean_ctor_get(x_136, 1);
lean_inc(x_137);
lean_dec(x_136);
x_42 = x_137;
goto block_126;
}
}
}
else
{
uint8_t x_149; 
lean_dec(x_37);
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_149 = !lean_is_exclusive(x_39);
if (x_149 == 0)
{
return x_39;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_39, 0);
x_151 = lean_ctor_get(x_39, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_39);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_153 = !lean_is_exclusive(x_34);
if (x_153 == 0)
{
return x_34;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_34, 0);
x_155 = lean_ctor_get(x_34, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_34);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
block_179:
{
if (x_158 == 0)
{
x_31 = x_159;
goto block_157;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_160 = lean_mk_string("fixedParams: ");
x_161 = l_Lean_stringToMessageData(x_160);
lean_dec(x_160);
x_162 = lean_ctor_get(x_2, 0);
lean_inc(x_162);
x_163 = lean_array_to_list(lean_box(0), x_162);
x_164 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_163);
x_165 = l_Lean_MessageData_ofList(x_164);
lean_dec(x_164);
x_166 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_166, 0, x_161);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_mk_string(", otherArgs: ");
x_168 = l_Lean_stringToMessageData(x_167);
lean_dec(x_167);
x_169 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_168);
lean_inc(x_30);
x_170 = lean_array_to_list(lean_box(0), x_30);
x_171 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_170);
x_172 = l_Lean_MessageData_ofList(x_171);
lean_dec(x_171);
x_173 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_173, 0, x_169);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_string("");
x_175 = l_Lean_stringToMessageData(x_174);
lean_dec(x_174);
x_176 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_175);
lean_inc(x_28);
x_177 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_28, x_176, x_4, x_5, x_6, x_7, x_8, x_159);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
lean_dec(x_177);
x_31 = x_178;
goto block_157;
}
}
}
}
else
{
uint8_t x_195; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_195 = !lean_is_exclusive(x_10);
if (x_195 == 0)
{
return x_10;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_10, 0);
x_197 = lean_ctor_get(x_10, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_10);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__2___boxed(lean_object** _args) {
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
x_18 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
return x_18;
}
}
uint8_t l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_shouldBetaReduce(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_isHeadBetaTarget(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_containsRecFn___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Lean_Expr_getAppFn(x_1);
x_7 = 8192;
x_8 = l_Lean_Expr_FindImpl_initCache;
x_9 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_5, x_7, x_6, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_10);
x_12 = 1;
return x_12;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_shouldBetaReduce___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_shouldBetaReduce(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_shouldBetaReduce(x_2, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Expr_headBeta(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess___lambda__1___boxed), 5, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__2___boxed), 4, 0);
x_8 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_1, x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_1);
x_13 = lean_st_ref_set(x_6, x_9, x_10);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_9, 1);
x_21 = lean_ctor_get(x_9, 2);
x_22 = lean_ctor_get(x_9, 3);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_22);
x_24 = lean_st_ref_set(x_6, x_23, x_10);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
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
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = 0;
x_13 = 1;
lean_inc(x_7);
x_14 = l_Lean_Meta_mkLambdaFVars(x_1, x_5, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_73 = lean_st_ref_get(x_10, x_16);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_74, 3);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_ctor_get_uint8(x_75, sizeof(void*)*1);
lean_dec(x_75);
if (x_76 == 0)
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_17 = x_12;
x_18 = x_77;
goto block_72;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = lean_ctor_get(x_73, 1);
lean_inc(x_78);
lean_dec(x_73);
lean_inc(x_4);
x_79 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_4, x_6, x_7, x_8, x_9, x_10, x_78);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_unbox(x_80);
lean_dec(x_80);
x_17 = x_82;
x_18 = x_81;
goto block_72;
}
block_72:
{
if (x_17 == 0)
{
lean_object* x_19; 
lean_dec(x_4);
lean_inc(x_2);
x_19 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn(x_2, x_15, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_3, 0);
x_23 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
x_24 = lean_ctor_get(x_3, 1);
x_25 = lean_ctor_get(x_3, 2);
x_26 = lean_ctor_get(x_3, 4);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_22);
x_27 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_25);
lean_ctor_set(x_27, 3, x_2);
lean_ctor_set(x_27, 4, x_26);
lean_ctor_set(x_27, 5, x_21);
lean_ctor_set_uint8(x_27, sizeof(void*)*6, x_23);
lean_ctor_set(x_19, 0, x_27);
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
x_32 = lean_ctor_get(x_3, 1);
x_33 = lean_ctor_get(x_3, 2);
x_34 = lean_ctor_get(x_3, 4);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_30);
x_35 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_35, 3, x_2);
lean_ctor_set(x_35, 4, x_34);
lean_ctor_set(x_35, 5, x_28);
lean_ctor_set_uint8(x_35, sizeof(void*)*6, x_31);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_29);
return x_36;
}
}
else
{
uint8_t x_37; 
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
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_41 = lean_mk_string("result: ");
x_42 = l_Lean_stringToMessageData(x_41);
lean_dec(x_41);
lean_inc(x_15);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_15);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_4, x_47, x_6, x_7, x_8, x_9, x_10, x_18);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
lean_inc(x_2);
x_50 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_ensureNoRecFn(x_2, x_15, x_7, x_8, x_9, x_10, x_49);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_3, 0);
x_54 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
x_55 = lean_ctor_get(x_3, 1);
x_56 = lean_ctor_get(x_3, 2);
x_57 = lean_ctor_get(x_3, 4);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_53);
x_58 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_55);
lean_ctor_set(x_58, 2, x_56);
lean_ctor_set(x_58, 3, x_2);
lean_ctor_set(x_58, 4, x_57);
lean_ctor_set(x_58, 5, x_52);
lean_ctor_set_uint8(x_58, sizeof(void*)*6, x_54);
lean_ctor_set(x_50, 0, x_58);
return x_50;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_59 = lean_ctor_get(x_50, 0);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_50);
x_61 = lean_ctor_get(x_3, 0);
x_62 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
x_63 = lean_ctor_get(x_3, 1);
x_64 = lean_ctor_get(x_3, 2);
x_65 = lean_ctor_get(x_3, 4);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_61);
x_66 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_63);
lean_ctor_set(x_66, 2, x_64);
lean_ctor_set(x_66, 3, x_2);
lean_ctor_set(x_66, 4, x_65);
lean_ctor_set(x_66, 5, x_59);
lean_ctor_set_uint8(x_66, sizeof(void*)*6, x_62);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_60);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_50);
if (x_68 == 0)
{
return x_50;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_50, 0);
x_70 = lean_ctor_get(x_50, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_50);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
x_83 = !lean_is_exclusive(x_14);
if (x_83 == 0)
{
return x_14;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_14, 0);
x_85 = lean_ctor_get(x_14, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_14);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
if (x_13 == 0)
{
lean_object* x_14; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_14 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkBRecOn(x_2, x_6, x_5, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1(x_1, x_2, x_3, x_4, x_15, x_7, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_7);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
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
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_mkIndPredBRecOn(x_2, x_6, x_5, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1(x_1, x_2, x_3, x_4, x_23, x_7, x_8, x_9, x_10, x_11, x_24);
lean_dec(x_7);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_22, 0);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_22);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_7);
x_10 = l_Lean_Elab_addAsAxiom(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_12);
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_preprocess(x_3, x_12, x_7, x_8, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_60; lean_object* x_61; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_mk_string("Elab");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("definition");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("structural");
x_22 = lean_name_mk_string(x_20, x_21);
x_82 = lean_st_ref_get(x_8, x_15);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_83, 3);
lean_inc(x_84);
lean_dec(x_83);
x_85 = lean_ctor_get_uint8(x_84, sizeof(void*)*1);
lean_dec(x_84);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_82, 1);
lean_inc(x_86);
lean_dec(x_82);
x_87 = 0;
x_60 = x_87;
x_61 = x_86;
goto block_81;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_88 = lean_ctor_get(x_82, 1);
lean_inc(x_88);
lean_dec(x_82);
lean_inc(x_22);
x_89 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_22, x_4, x_5, x_6, x_7, x_8, x_88);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_unbox(x_90);
lean_dec(x_90);
x_60 = x_92;
x_61 = x_91;
goto block_81;
}
block_59:
{
lean_object* x_24; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_12);
x_24 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_getFixedPrefix(x_12, x_2, x_14, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_44 = lean_st_ref_get(x_8, x_26);
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
x_27 = x_49;
x_28 = x_48;
goto block_43;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
lean_dec(x_44);
lean_inc(x_22);
x_51 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__10(x_22, x_4, x_5, x_6, x_7, x_8, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_unbox(x_52);
lean_dec(x_52);
x_27 = x_54;
x_28 = x_53;
goto block_43;
}
block_43:
{
if (x_27 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_inc(x_2);
x_29 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2___boxed), 12, 5);
lean_closure_set(x_29, 0, x_2);
lean_closure_set(x_29, 1, x_12);
lean_closure_set(x_29, 2, x_1);
lean_closure_set(x_29, 3, x_22);
lean_closure_set(x_29, 4, x_14);
lean_inc(x_25);
x_30 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg(x_25, x_2, x_29, x_25, x_4, x_5, x_6, x_7, x_8, x_28);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_31 = lean_mk_string("numFixed: ");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
lean_inc(x_25);
x_33 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_25);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_string("");
x_37 = l_Lean_stringToMessageData(x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
lean_inc(x_22);
x_39 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_22, x_38, x_4, x_5, x_6, x_7, x_8, x_28);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
lean_inc(x_2);
x_41 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2___boxed), 12, 5);
lean_closure_set(x_41, 0, x_2);
lean_closure_set(x_41, 1, x_12);
lean_closure_set(x_41, 2, x_1);
lean_closure_set(x_41, 3, x_22);
lean_closure_set(x_41, 4, x_14);
lean_inc(x_25);
x_42 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_findRecArg_loop___rarg(x_25, x_2, x_41, x_25, x_4, x_5, x_6, x_7, x_8, x_40);
return x_42;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_24);
if (x_55 == 0)
{
return x_24;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_24, 0);
x_57 = lean_ctor_get(x_24, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_24);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
block_81:
{
if (x_60 == 0)
{
x_23 = x_61;
goto block_59;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_62 = lean_mk_string("");
x_63 = l_Lean_stringToMessageData(x_62);
lean_dec(x_62);
lean_inc(x_12);
x_64 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_64, 0, x_12);
lean_inc(x_63);
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string(" ");
x_67 = l_Lean_stringToMessageData(x_66);
lean_dec(x_66);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_67);
lean_inc(x_2);
x_69 = lean_array_to_list(lean_box(0), x_2);
x_70 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_69);
x_71 = l_Lean_MessageData_ofList(x_70);
lean_dec(x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_68);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string(" :=\n");
x_74 = l_Lean_stringToMessageData(x_73);
lean_dec(x_73);
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_14);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_14);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_63);
lean_inc(x_22);
x_79 = l_Lean_addTrace___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__9(x_22, x_78, x_4, x_5, x_6, x_7, x_8, x_61);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_23 = x_80;
goto block_59;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_13);
if (x_93 == 0)
{
return x_13;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_13, 0);
x_95 = lean_ctor_get(x_13, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_13);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_10);
if (x_97 == 0)
{
return x_10;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_10, 0);
x_99 = lean_ctor_get(x_10, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_10);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 5);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__3), 9, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_st_ref_get(x_6, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__11___rarg(x_8, x_9, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1(x_13, x_2, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
x_24 = l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1(x_13, x_2, x_3, x_4, x_5, x_6, x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_setEnv___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_3);
return x_12;
}
}
lean_object* l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(x_1);
x_6 = lean_apply_2(x_4, x_5, x_2);
return x_6;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = lean_box(x_1);
x_8 = lean_apply_2(x_4, x_7, x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_4 < x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_uget(x_5, x_4);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_5, x_4, x_15);
x_17 = x_14;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_4 + x_21;
x_23 = x_19;
x_24 = lean_array_uset(x_16, x_4, x_23);
x_4 = x_22;
x_5 = x_24;
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
lean_dec(x_2);
lean_dec(x_1);
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
static lean_object* _init_l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
lean_object* x_17; 
lean_dec(x_5);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_4);
x_21 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_22 = x_4;
x_23 = lean_box_usize(x_21);
x_24 = l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2___boxed__const__1;
x_25 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__1___boxed), 10, 5);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_23);
lean_closure_set(x_25, 3, x_24);
lean_closure_set(x_25, 4, x_22);
x_26 = x_25;
x_27 = lean_apply_5(x_26, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_Lean_mkAppN(x_18, x_29);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = l_Lean_mkAppN(x_18, x_31);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_18);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_4 < x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_12 = x_5;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_uget(x_5, x_4);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_5, x_4, x_15);
x_17 = x_14;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_4 + x_21;
x_23 = x_19;
x_24 = lean_array_uset(x_16, x_4, x_23);
x_4 = x_22;
x_5 = x_24;
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
lean_dec(x_2);
lean_dec(x_1);
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
static lean_object* _init_l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
lean_object* x_17; 
lean_dec(x_5);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_4);
x_21 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_22 = x_4;
x_23 = lean_box_usize(x_21);
x_24 = l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4___boxed__const__1;
x_25 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__3___boxed), 10, 5);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_23);
lean_closure_set(x_25, 3, x_24);
lean_closure_set(x_25, 4, x_22);
x_26 = x_25;
x_27 = lean_apply_5(x_26, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_Lean_mkAppN(x_18, x_29);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = l_Lean_mkAppN(x_18, x_31);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_18);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
lean_inc(x_1);
lean_inc(x_2);
x_12 = lean_apply_1(x_1, x_2);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_array_get_size(x_3);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Array_toSubarray___rarg(x_3, x_4, x_14);
x_16 = l_Array_ofSubarray___rarg(x_15);
lean_dec(x_15);
x_17 = 0;
x_18 = 1;
lean_inc(x_7);
x_19 = l_Lean_Meta_mkLambdaFVars(x_16, x_2, x_17, x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_mkIdRhs(x_20, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_toSubarray___rarg(x_3, x_25, x_4);
x_27 = l_Array_ofSubarray___rarg(x_26);
lean_dec(x_26);
x_28 = l_Lean_Meta_mkLambdaFVars(x_27, x_23, x_17, x_18, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
return x_22;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_19);
if (x_33 == 0)
{
return x_19;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_19, 0);
x_35 = lean_ctor_get(x_19, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_19);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_37 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_5, x_1, x_2, x_7, x_8, x_9, x_10, x_11);
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
x_42 = l_Lean_Meta_mkLambdaFVars(x_3, x_38, x_40, x_41, x_7, x_8, x_9, x_10, x_39);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_42;
}
else
{
uint8_t x_43; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_37);
if (x_43 == 0)
{
return x_37;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_37, 0);
x_45 = lean_ctor_get(x_37, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_37);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_6);
x_14 = lean_nat_dec_le(x_2, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_mk_string("unexpected matcher application alternative");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = l_Lean_indentExpr(x_4);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("\nat application");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_indentExpr(x_5);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Meta_whnf___spec__1(x_26, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_4);
x_32 = lean_box(0);
x_33 = l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__1(x_1, x_7, x_6, x_2, x_3, x_32, x_8, x_9, x_10, x_11, x_12);
return x_33;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 < x_4;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = x_6;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_array_uget(x_6, x_5);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_6, x_5, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_19);
lean_inc(x_1);
lean_inc(x_2);
x_21 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__2), 12, 5);
lean_closure_set(x_21, 0, x_2);
lean_closure_set(x_21, 1, x_20);
lean_closure_set(x_21, 2, x_1);
lean_closure_set(x_21, 3, x_19);
lean_closure_set(x_21, 4, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(x_19, x_21, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = x_5 + x_25;
x_27 = x_23;
x_28 = lean_array_uset(x_17, x_5, x_27);
x_5 = x_26;
x_6 = x_28;
x_11 = x_24;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 0;
x_14 = 1;
x_15 = l_Lean_Meta_mkLambdaFVars(x_3, x_11, x_13, x_14, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 0;
x_14 = 1;
x_15 = l_Lean_Meta_mkForallFVars(x_3, x_11, x_13, x_14, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_expr_instantiate1(x_1, x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_11 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_mk_empty_array_with_capacity(x_14);
x_16 = lean_array_push(x_15, x_4);
x_17 = 0;
x_18 = 1;
x_19 = l_Lean_Meta_mkLambdaFVars(x_16, x_12, x_17, x_18, x_5, x_6, x_7, x_8, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 5:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_inc(x_3);
x_9 = l_Lean_Meta_matchMatcherApp_x3f(x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_apply_1(x_1, x_3);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
x_14 = l_Lean_levelZero;
x_15 = l_Lean_mkSort(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux(x_3, x_16);
lean_inc(x_17);
x_18 = lean_mk_array(x_17, x_15);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_17, x_19);
lean_dec(x_17);
x_21 = l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2(x_1, x_2, x_3, x_18, x_20, x_4, x_5, x_6, x_7, x_11);
return x_21;
}
else
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = l_Lean_levelZero;
x_23 = l_Lean_mkSort(x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_Expr_getAppNumArgsAux(x_3, x_24);
lean_inc(x_25);
x_26 = lean_mk_array(x_25, x_23);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_25, x_27);
lean_dec(x_25);
x_29 = l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4(x_1, x_2, x_3, x_26, x_28, x_4, x_5, x_6, x_7, x_11);
return x_29;
}
else
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_10, 0);
lean_inc(x_30);
lean_dec(x_10);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
x_34 = lean_ctor_get(x_30, 2);
x_35 = lean_ctor_get(x_30, 3);
x_36 = lean_ctor_get(x_30, 4);
x_37 = lean_ctor_get(x_30, 5);
x_38 = lean_ctor_get(x_30, 6);
x_39 = lean_ctor_get(x_30, 7);
x_40 = lean_ctor_get(x_30, 8);
x_41 = l_Array_zip___rarg(x_39, x_38);
lean_dec(x_39);
x_42 = lean_array_get_size(x_41);
x_43 = lean_usize_of_nat(x_42);
lean_dec(x_42);
x_44 = x_41;
x_45 = lean_box_usize(x_43);
x_46 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1;
x_47 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___boxed), 11, 6);
lean_closure_set(x_47, 0, x_1);
lean_closure_set(x_47, 1, x_2);
lean_closure_set(x_47, 2, x_3);
lean_closure_set(x_47, 3, x_45);
lean_closure_set(x_47, 4, x_46);
lean_closure_set(x_47, 5, x_44);
x_48 = x_47;
x_49 = lean_apply_5(x_48, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_49, 0);
lean_ctor_set(x_30, 7, x_51);
x_52 = l_Lean_Meta_MatcherApp_toExpr(x_30);
lean_ctor_set(x_49, 0, x_52);
return x_49;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_49, 0);
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_49);
lean_ctor_set(x_30, 7, x_53);
x_55 = l_Lean_Meta_MatcherApp_toExpr(x_30);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_free_object(x_30);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
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
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; size_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_61 = lean_ctor_get(x_30, 0);
x_62 = lean_ctor_get(x_30, 1);
x_63 = lean_ctor_get(x_30, 2);
x_64 = lean_ctor_get(x_30, 3);
x_65 = lean_ctor_get(x_30, 4);
x_66 = lean_ctor_get(x_30, 5);
x_67 = lean_ctor_get(x_30, 6);
x_68 = lean_ctor_get(x_30, 7);
x_69 = lean_ctor_get(x_30, 8);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_30);
x_70 = l_Array_zip___rarg(x_68, x_67);
lean_dec(x_68);
x_71 = lean_array_get_size(x_70);
x_72 = lean_usize_of_nat(x_71);
lean_dec(x_71);
x_73 = x_70;
x_74 = lean_box_usize(x_72);
x_75 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1;
x_76 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___boxed), 11, 6);
lean_closure_set(x_76, 0, x_1);
lean_closure_set(x_76, 1, x_2);
lean_closure_set(x_76, 2, x_3);
lean_closure_set(x_76, 3, x_74);
lean_closure_set(x_76, 4, x_75);
lean_closure_set(x_76, 5, x_73);
x_77 = x_76;
x_78 = lean_apply_5(x_77, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_81 = x_78;
} else {
 lean_dec_ref(x_78);
 x_81 = lean_box(0);
}
x_82 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_82, 0, x_61);
lean_ctor_set(x_82, 1, x_62);
lean_ctor_set(x_82, 2, x_63);
lean_ctor_set(x_82, 3, x_64);
lean_ctor_set(x_82, 4, x_65);
lean_ctor_set(x_82, 5, x_66);
lean_ctor_set(x_82, 6, x_67);
lean_ctor_set(x_82, 7, x_79);
lean_ctor_set(x_82, 8, x_69);
x_83 = l_Lean_Meta_MatcherApp_toExpr(x_82);
if (lean_is_scalar(x_81)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_81;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_80);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_69);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
x_85 = lean_ctor_get(x_78, 0);
lean_inc(x_85);
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
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
}
case 6:
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__1), 9, 2);
lean_closure_set(x_89, 0, x_1);
lean_closure_set(x_89, 1, x_2);
x_90 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(x_3, x_89, x_4, x_5, x_6, x_7, x_8);
return x_90;
}
case 7:
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__2), 9, 2);
lean_closure_set(x_91, 0, x_1);
lean_closure_set(x_91, 1, x_2);
x_92 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_3, x_91, x_4, x_5, x_6, x_7, x_8);
return x_92;
}
case 8:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_93 = lean_ctor_get(x_3, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_3, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_3, 2);
lean_inc(x_95);
x_96 = lean_ctor_get(x_3, 3);
lean_inc(x_96);
lean_dec(x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_97 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_95, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__3___boxed), 9, 3);
lean_closure_set(x_100, 0, x_96);
lean_closure_set(x_100, 1, x_1);
lean_closure_set(x_100, 2, x_2);
x_101 = l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2___rarg(x_93, x_94, x_98, x_100, x_4, x_5, x_6, x_7, x_99);
return x_101;
}
else
{
uint8_t x_102; 
lean_dec(x_96);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_97);
if (x_102 == 0)
{
return x_97;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_97, 0);
x_104 = lean_ctor_get(x_97, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_97);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
case 10:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_3, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_3, 1);
lean_inc(x_107);
lean_dec(x_3);
x_108 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_107, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_108) == 0)
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_108, 0);
x_111 = l_Lean_mkMData(x_106, x_110);
lean_ctor_set(x_108, 0, x_111);
return x_108;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_ctor_get(x_108, 0);
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_108);
x_114 = l_Lean_mkMData(x_106, x_112);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
uint8_t x_116; 
lean_dec(x_106);
x_116 = !lean_is_exclusive(x_108);
if (x_116 == 0)
{
return x_108;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_108, 0);
x_118 = lean_ctor_get(x_108, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_108);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
case 11:
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_3, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_3, 1);
lean_inc(x_121);
x_122 = lean_ctor_get(x_3, 2);
lean_inc(x_122);
lean_dec(x_3);
x_123 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_1, x_2, x_122, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = l_Lean_mkProj(x_120, x_121, x_125);
lean_ctor_set(x_123, 0, x_126);
return x_123;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_127 = lean_ctor_get(x_123, 0);
x_128 = lean_ctor_get(x_123, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_123);
x_129 = l_Lean_mkProj(x_120, x_121, x_127);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
uint8_t x_131; 
lean_dec(x_121);
lean_dec(x_120);
x_131 = !lean_is_exclusive(x_123);
if (x_131 == 0)
{
return x_123;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_123, 0);
x_133 = lean_ctor_get(x_123, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_123);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
default: 
{
lean_object* x_135; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_3);
lean_ctor_set(x_135, 1, x_8);
return x_135;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__3(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__5(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
uint8_t l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_isConst(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Expr_constName_x21(x_2);
x_6 = l_Lean_NameSet_contains(x_1, x_5);
lean_dec(x_5);
return x_6;
}
}
}
uint8_t l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Expr_getAppFn(x_2);
x_4 = l_Lean_Expr_isConst(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Expr_constName_x21(x_3);
lean_dec(x_3);
x_7 = l_Lean_NameSet_contains(x_1, x_6);
lean_dec(x_6);
return x_7;
}
}
}
uint8_t l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = 8192;
x_4 = l_Lean_Expr_FindImpl_initCache;
x_5 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_1, x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = 1;
return x_8;
}
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__2___boxed), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__3___boxed), 2, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
x_16 = lean_ctor_get(x_1, 5);
x_17 = lean_ctor_get(x_1, 2);
lean_dec(x_17);
x_18 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_9, x_10, x_16, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_box(0);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = 0;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_23);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_25);
x_27 = l_Lean_Meta_smartUnfoldingSuffix;
x_28 = lean_name_mk_string(x_14, x_27);
lean_ctor_set(x_1, 5, x_20);
lean_ctor_set(x_1, 3, x_28);
lean_ctor_set(x_1, 2, x_26);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_18);
x_31 = lean_box(0);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_mk_empty_array_with_capacity(x_32);
x_34 = 0;
x_35 = 0;
x_36 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set_uint8(x_36, sizeof(void*)*2, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*2 + 1, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*2 + 2, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*2 + 3, x_35);
x_37 = l_Lean_Meta_smartUnfoldingSuffix;
x_38 = lean_name_mk_string(x_14, x_37);
lean_ctor_set(x_1, 5, x_29);
lean_ctor_set(x_1, 3, x_38);
lean_ctor_set(x_1, 2, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_30);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_free_object(x_1);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_40 = !lean_is_exclusive(x_18);
if (x_40 == 0)
{
return x_18;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_18, 0);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_18);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_1, 0);
x_45 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_46 = lean_ctor_get(x_1, 1);
x_47 = lean_ctor_get(x_1, 3);
x_48 = lean_ctor_get(x_1, 4);
x_49 = lean_ctor_get(x_1, 5);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_44);
lean_dec(x_1);
x_50 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit(x_9, x_10, x_49, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
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
x_54 = lean_box(0);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_mk_empty_array_with_capacity(x_55);
x_57 = 0;
x_58 = 0;
x_59 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_56);
lean_ctor_set_uint8(x_59, sizeof(void*)*2, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*2 + 1, x_58);
lean_ctor_set_uint8(x_59, sizeof(void*)*2 + 2, x_58);
lean_ctor_set_uint8(x_59, sizeof(void*)*2 + 3, x_58);
x_60 = l_Lean_Meta_smartUnfoldingSuffix;
x_61 = lean_name_mk_string(x_47, x_60);
x_62 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_62, 0, x_44);
lean_ctor_set(x_62, 1, x_46);
lean_ctor_set(x_62, 2, x_59);
lean_ctor_set(x_62, 3, x_61);
lean_ctor_set(x_62, 4, x_48);
lean_ctor_set(x_62, 5, x_51);
lean_ctor_set_uint8(x_62, sizeof(void*)*6, x_45);
if (lean_is_scalar(x_53)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_53;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_52);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_44);
x_64 = lean_ctor_get(x_50, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_50, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_66 = x_50;
} else {
 lean_dec_ref(x_50);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux___lambda__3(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_11 = l_Lean_Meta_isProp(x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Elab_Structural_addSmartUnfoldingDefAux(x_1, x_15, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 0;
x_20 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_17, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_11);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_11, 0);
lean_dec(x_26);
x_27 = lean_box(0);
lean_ctor_set(x_11, 0, x_27);
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_dec(x_11);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_11);
if (x_31 == 0)
{
return x_11;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_11, 0);
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_11);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Structural_addSmartUnfoldingDef(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_Structural_structuralRecursion_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Structural_structuralRecursion_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_structuralRecursion_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = lean_apply_5(x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
else
{
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Structural_structuralRecursion___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_mk_string("structural recursion failed, produced type incorrect term");
x_3 = l_Lean_stringToMessageData(x_2);
lean_dec(x_2);
x_4 = l_Lean_indentD(x_1);
x_5 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_mk_string("");
x_7 = l_Lean_stringToMessageData(x_6);
lean_dec(x_6);
x_8 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_12 = lean_mk_string("structural recursion does not handle mutually recursive functions");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = l_Lean_Elab_instInhabitedPreDefinition;
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_get(x_15, x_1, x_16);
lean_inc(x_17);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_elimRecursion), 7, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_mk_empty_array_with_capacity(x_16);
x_20 = l_Lean_NameSet_empty;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_22 = l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_run___rarg(x_18, x_21, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
x_28 = lean_array_get_size(x_27);
x_29 = lean_nat_dec_lt(x_16, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_28);
lean_dec(x_27);
lean_inc(x_3);
lean_inc(x_2);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_addNonRec___boxed), 8, 3);
lean_closure_set(x_30, 0, x_25);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_structuralRecursion___lambda__1), 1, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_32 = l_Lean_Meta_mapErrorImp___rarg(x_30, x_31, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_34 = l_Lean_Elab_addAndCompilePartialRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_Elab_Structural_addSmartUnfoldingDef(x_17, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_35);
lean_dec(x_3);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_32);
if (x_41 == 0)
{
return x_32;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_32, 0);
x_43 = lean_ctor_get(x_32, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_32);
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
x_45 = lean_nat_dec_le(x_28, x_28);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_28);
lean_dec(x_27);
lean_inc(x_3);
lean_inc(x_2);
x_46 = lean_alloc_closure((void*)(l_Lean_Elab_addNonRec___boxed), 8, 3);
lean_closure_set(x_46, 0, x_25);
lean_closure_set(x_46, 1, x_2);
lean_closure_set(x_46, 2, x_3);
x_47 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_structuralRecursion___lambda__1), 1, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_48 = l_Lean_Meta_mapErrorImp___rarg(x_46, x_47, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_50 = l_Lean_Elab_addAndCompilePartialRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_Elab_Structural_addSmartUnfoldingDef(x_17, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
lean_dec(x_3);
return x_52;
}
else
{
uint8_t x_53; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
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
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_48);
if (x_57 == 0)
{
return x_48;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_48, 0);
x_59 = lean_ctor_get(x_48, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_48);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
size_t x_61; size_t x_62; lean_object* x_63; lean_object* x_64; 
x_61 = 0;
x_62 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_63 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_64 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(x_27, x_61, x_62, x_63, x_2, x_3, x_4, x_5, x_6, x_7, x_24);
lean_dec(x_27);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
lean_inc(x_3);
lean_inc(x_2);
x_66 = lean_alloc_closure((void*)(l_Lean_Elab_addNonRec___boxed), 8, 3);
lean_closure_set(x_66, 0, x_25);
lean_closure_set(x_66, 1, x_2);
lean_closure_set(x_66, 2, x_3);
x_67 = lean_alloc_closure((void*)(l_Lean_Elab_Structural_structuralRecursion___lambda__1), 1, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_68 = l_Lean_Meta_mapErrorImp___rarg(x_66, x_67, x_4, x_5, x_6, x_7, x_65);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_70 = l_Lean_Elab_addAndCompilePartialRec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = l_Lean_Elab_Structural_addSmartUnfoldingDef(x_17, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_71);
lean_dec(x_3);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_70);
if (x_73 == 0)
{
return x_70;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_70, 0);
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_70);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_68);
if (x_77 == 0)
{
return x_68;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_68, 0);
x_79 = lean_ctor_get(x_68, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_68);
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
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_64);
if (x_81 == 0)
{
return x_64;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_64, 0);
x_83 = lean_ctor_get(x_64, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_64);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_22);
if (x_85 == 0)
{
return x_22;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_22, 0);
x_87 = lean_ctor_get(x_22, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_22);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Structural_structuralRecursion___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Structural_initFn____x40_Lean_Elab_PreDefinition_Structural___hyg_6367_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Elab");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("definition");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("structural");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = l_Lean_registerTraceClass(x_8, x_1);
return x_9;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_ForEachExpr(lean_object*);
lean_object* initialize_Lean_Meta_ForEachExpr(lean_object*);
lean_object* initialize_Lean_Meta_RecursorInfo(lean_object*);
lean_object* initialize_Lean_Meta_Match_Match(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Meta_IndPredBelow(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_PreDefinition_Structural(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ForEachExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_RecursorInfo(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Match(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_IndPredBelow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_State_matcherBelowDep___default = _init_l_Lean_Elab_Structural_State_matcherBelowDep___default();
lean_mark_persistent(l_Lean_Elab_Structural_State_matcherBelowDep___default);
l_Lean_Elab_Structural_State_addMatchers___default = _init_l_Lean_Elab_Structural_State_addMatchers___default();
lean_mark_persistent(l_Lean_Elab_Structural_State_addMatchers___default);
l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__5___boxed__const__1);
l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___spec__8___boxed__const__1);
l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1 = _init_l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceRecApps_loop___boxed__const__1);
l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__2___boxed__const__1);
l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__4___boxed__const__1);
l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at___private_Lean_Elab_PreDefinition_Structural_0__Lean_Elab_Structural_replaceIndPredRecApps_loop___spec__6___boxed__const__1);
l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__2___boxed__const__1);
l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___spec__4___boxed__const__1);
l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1 = _init_l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Structural_addSmartUnfoldingDefAux_visit___boxed__const__1);
res = l_Lean_Elab_Structural_initFn____x40_Lean_Elab_PreDefinition_Structural___hyg_6367_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
