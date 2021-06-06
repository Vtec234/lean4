// Lean compiler output
// Module: Lean.Elab.SyntheticMVars
// Imports: Init Lean.Util.ForEachExpr Lean.Elab.Term Lean.Elab.Tactic.Basic
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
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__5(lean_object*);
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance_match__1(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__1(lean_object*);
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar_match__1(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_runTactic___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__2(lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Meta_occursCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withSynthesize___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault_match__1(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__4(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withSynthesize___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar_match__1(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadInfoTreeTermElabM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDefaultInstances___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logException___at___private_Lean_Elab_Term_0__Lean_Elab_Term_exceptionToSorry___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars_match__1(lean_object*);
lean_object* l_Lean_Meta_expandCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withTacticInfoContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp_match__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1___boxed(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMVarDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__1(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef_match__1(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance_match__1___rarg(lean_object*, lean_object*);
extern uint8_t l_Lean_instInhabitedBinderInfo;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_find_x3f___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_postponeExceptionId;
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withSynthesize(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2___boxed(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withSavedContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_runTactic___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withSynthesize___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withMacroExpansion___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___boxed(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__3(lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_237_(uint8_t, uint8_t);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateMVarDeclMVars(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(uint8_t);
lean_object* l_Lean_Elab_Term_registerMVarErrorImplicitArgInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(lean_object*);
lean_object* l_Lean_Meta_getDefaultInstances___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeCoeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__2(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_defaultInstanceExtension;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Meta_addDefaultInstanceEntry___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__2(lean_object*);
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withSynthesize___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar_match__1(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = 0;
lean_ctor_set_uint8(x_4, sizeof(void*)*8 + 1, x_13);
x_14 = 1;
x_15 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
x_18 = lean_ctor_get(x_4, 2);
x_19 = lean_ctor_get(x_4, 3);
x_20 = lean_ctor_get(x_4, 4);
x_21 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
x_22 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
x_23 = lean_ctor_get(x_4, 5);
x_24 = lean_ctor_get(x_4, 6);
x_25 = lean_ctor_get(x_4, 7);
x_26 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_27 = 0;
x_28 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_17);
lean_ctor_set(x_28, 2, x_18);
lean_ctor_set(x_28, 3, x_19);
lean_ctor_set(x_28, 4, x_20);
lean_ctor_set(x_28, 5, x_23);
lean_ctor_set(x_28, 6, x_24);
lean_ctor_set(x_28, 7, x_25);
lean_ctor_set_uint8(x_28, sizeof(void*)*8, x_21);
lean_ctor_set_uint8(x_28, sizeof(void*)*8 + 1, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*8 + 2, x_22);
lean_ctor_set_uint8(x_28, sizeof(void*)*8 + 3, x_26);
x_29 = 1;
x_30 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_27, x_29, x_28, x_5, x_6, x_7, x_8, x_9, x_10);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_4);
if (x_31 == 0)
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; 
lean_ctor_set_uint8(x_4, sizeof(void*)*8 + 1, x_3);
x_32 = 0;
x_33 = 1;
x_34 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_32, x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; 
x_35 = lean_ctor_get(x_4, 0);
x_36 = lean_ctor_get(x_4, 1);
x_37 = lean_ctor_get(x_4, 2);
x_38 = lean_ctor_get(x_4, 3);
x_39 = lean_ctor_get(x_4, 4);
x_40 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
x_41 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
x_42 = lean_ctor_get(x_4, 5);
x_43 = lean_ctor_get(x_4, 6);
x_44 = lean_ctor_get(x_4, 7);
x_45 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 3);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_4);
x_46 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 2, x_37);
lean_ctor_set(x_46, 3, x_38);
lean_ctor_set(x_46, 4, x_39);
lean_ctor_set(x_46, 5, x_42);
lean_ctor_set(x_46, 6, x_43);
lean_ctor_set(x_46, 7, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*8, x_40);
lean_ctor_set_uint8(x_46, sizeof(void*)*8 + 1, x_3);
lean_ctor_set_uint8(x_46, sizeof(void*)*8 + 2, x_41);
lean_ctor_set_uint8(x_46, sizeof(void*)*8 + 3, x_45);
x_47 = 0;
x_48 = 1;
x_49 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_47, x_48, x_46, x_5, x_6, x_7, x_8, x_9, x_10);
return x_49;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_apply_3(x_3, x_1, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_apply_3(x_2, x_1, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_4, 2);
lean_inc(x_25);
lean_dec(x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_instantiateMVars(x_25, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_27);
x_30 = lean_st_ref_get(x_10, x_28);
if (x_3 == 0)
{
uint8_t x_301; 
x_301 = 1;
x_31 = x_301;
goto block_300;
}
else
{
uint8_t x_302; 
x_302 = 0;
x_31 = x_302;
goto block_300;
}
block_300:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_get(x_6, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 5);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_29);
lean_inc(x_1);
x_38 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm(x_1, x_29, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_box(0);
x_42 = lean_ctor_get(x_9, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_9, 2);
lean_inc(x_44);
x_45 = lean_ctor_get(x_9, 3);
lean_inc(x_45);
x_46 = lean_ctor_get(x_9, 4);
lean_inc(x_46);
x_47 = lean_ctor_get(x_9, 5);
lean_inc(x_47);
x_48 = lean_ctor_get(x_9, 6);
lean_inc(x_48);
x_49 = lean_ctor_get(x_9, 7);
lean_inc(x_49);
x_50 = l_Lean_replaceRef(x_1, x_45);
lean_dec(x_45);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_51, 0, x_42);
lean_ctor_set(x_51, 1, x_43);
lean_ctor_set(x_51, 2, x_44);
lean_ctor_set(x_51, 3, x_50);
lean_ctor_set(x_51, 4, x_46);
lean_ctor_set(x_51, 5, x_47);
lean_ctor_set(x_51, 6, x_48);
lean_ctor_set(x_51, 7, x_49);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
x_52 = l_Lean_Elab_Term_ensureHasType(x_29, x_39, x_41, x_5, x_6, x_7, x_8, x_51, x_10, x_40);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_53);
x_55 = l_Lean_Meta_occursCheck(x_2, x_53, x_7, x_8, x_9, x_10, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
if (x_57 == 0)
{
uint8_t x_58; 
lean_dec(x_53);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_55);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_55, 0);
lean_dec(x_59);
x_60 = 0;
x_61 = lean_box(x_60);
lean_ctor_set(x_55, 0, x_61);
return x_55;
}
else
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
lean_dec(x_55);
x_63 = 0;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_66 = lean_ctor_get(x_55, 1);
lean_inc(x_66);
lean_dec(x_55);
x_67 = l_Lean_Meta_assignExprMVar(x_2, x_53, x_7, x_8, x_9, x_10, x_66);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_67, 0);
lean_dec(x_69);
x_70 = 1;
x_71 = lean_box(x_70);
lean_ctor_set(x_67, 0, x_71);
return x_67;
}
else
{
lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
lean_dec(x_67);
x_73 = 1;
x_74 = lean_box(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_52);
if (x_76 == 0)
{
return x_52;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_52, 0);
x_78 = lean_ctor_get(x_52, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_52);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_38);
if (x_80 == 0)
{
return x_38;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_38, 0);
x_82 = lean_ctor_get(x_38, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_38);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_191; lean_object* x_192; lean_object* x_270; 
x_84 = lean_ctor_get(x_33, 1);
lean_inc(x_84);
lean_dec(x_33);
x_85 = l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withMacroExpansion___spec__2___rarg(x_6, x_7, x_8, x_9, x_10, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_29);
lean_inc(x_1);
x_270 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumeElabTerm(x_1, x_29, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_87);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
lean_dec(x_270);
x_273 = lean_box(0);
x_274 = lean_ctor_get(x_9, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_9, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_9, 2);
lean_inc(x_276);
x_277 = lean_ctor_get(x_9, 3);
lean_inc(x_277);
x_278 = lean_ctor_get(x_9, 4);
lean_inc(x_278);
x_279 = lean_ctor_get(x_9, 5);
lean_inc(x_279);
x_280 = lean_ctor_get(x_9, 6);
lean_inc(x_280);
x_281 = lean_ctor_get(x_9, 7);
lean_inc(x_281);
x_282 = l_Lean_replaceRef(x_1, x_277);
lean_dec(x_277);
lean_dec(x_1);
x_283 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_283, 0, x_274);
lean_ctor_set(x_283, 1, x_275);
lean_ctor_set(x_283, 2, x_276);
lean_ctor_set(x_283, 3, x_282);
lean_ctor_set(x_283, 4, x_278);
lean_ctor_set(x_283, 5, x_279);
lean_ctor_set(x_283, 6, x_280);
lean_ctor_set(x_283, 7, x_281);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_284 = l_Lean_Elab_Term_ensureHasType(x_29, x_271, x_273, x_5, x_6, x_7, x_8, x_283, x_10, x_272);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; uint8_t x_289; 
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
lean_inc(x_285);
x_287 = l_Lean_Meta_occursCheck(x_2, x_285, x_7, x_8, x_9, x_10, x_286);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_unbox(x_288);
lean_dec(x_288);
if (x_289 == 0)
{
lean_object* x_290; uint8_t x_291; 
lean_dec(x_285);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_290 = lean_ctor_get(x_287, 1);
lean_inc(x_290);
lean_dec(x_287);
x_291 = 0;
x_88 = x_291;
x_89 = x_290;
goto block_190;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; uint8_t x_295; 
x_292 = lean_ctor_get(x_287, 1);
lean_inc(x_292);
lean_dec(x_287);
lean_inc(x_2);
x_293 = l_Lean_Meta_assignExprMVar(x_2, x_285, x_7, x_8, x_9, x_10, x_292);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_294 = lean_ctor_get(x_293, 1);
lean_inc(x_294);
lean_dec(x_293);
x_295 = 1;
x_88 = x_295;
x_89 = x_294;
goto block_190;
}
}
else
{
lean_object* x_296; lean_object* x_297; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_296 = lean_ctor_get(x_284, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_284, 1);
lean_inc(x_297);
lean_dec(x_284);
x_191 = x_296;
x_192 = x_297;
goto block_269;
}
}
else
{
lean_object* x_298; lean_object* x_299; 
lean_dec(x_29);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_298 = lean_ctor_get(x_270, 0);
lean_inc(x_298);
x_299 = lean_ctor_get(x_270, 1);
lean_inc(x_299);
lean_dec(x_270);
x_191 = x_298;
x_192 = x_299;
goto block_269;
}
block_190:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_90 = lean_st_ref_get(x_10, x_89);
lean_dec(x_10);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_st_ref_take(x_6, x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_93, 5);
lean_inc(x_94);
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
lean_dec(x_92);
x_96 = !lean_is_exclusive(x_93);
if (x_96 == 0)
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_93, 5);
lean_dec(x_97);
x_98 = !lean_is_exclusive(x_94);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_99 = lean_ctor_get(x_94, 0);
x_100 = lean_ctor_get(x_94, 1);
x_101 = lean_ctor_get(x_100, 2);
lean_inc(x_101);
x_102 = lean_unsigned_to_nat(0u);
x_103 = lean_nat_dec_lt(x_102, x_101);
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; 
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_2);
lean_ctor_set(x_94, 1, x_86);
x_104 = lean_st_ref_set(x_6, x_93, x_95);
lean_dec(x_6);
x_105 = !lean_is_exclusive(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_104, 0);
lean_dec(x_106);
x_107 = lean_box(0);
x_108 = lean_box(x_88);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
lean_ctor_set(x_104, 0, x_109);
x_12 = x_104;
goto block_24;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_110 = lean_ctor_get(x_104, 1);
lean_inc(x_110);
lean_dec(x_104);
x_111 = lean_box(0);
x_112 = lean_box(x_88);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_110);
x_12 = x_114;
goto block_24;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_115 = lean_unsigned_to_nat(1u);
x_116 = lean_nat_sub(x_101, x_115);
lean_dec(x_101);
x_117 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_100, x_116);
lean_dec(x_116);
x_118 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_99, x_2, x_117);
lean_ctor_set(x_94, 1, x_86);
lean_ctor_set(x_94, 0, x_118);
x_119 = lean_st_ref_set(x_6, x_93, x_95);
lean_dec(x_6);
x_120 = !lean_is_exclusive(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_119, 0);
lean_dec(x_121);
x_122 = lean_box(0);
x_123 = lean_box(x_88);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
lean_ctor_set(x_119, 0, x_124);
x_12 = x_119;
goto block_24;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_125 = lean_ctor_get(x_119, 1);
lean_inc(x_125);
lean_dec(x_119);
x_126 = lean_box(0);
x_127 = lean_box(x_88);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_125);
x_12 = x_129;
goto block_24;
}
}
}
else
{
uint8_t x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_130 = lean_ctor_get_uint8(x_94, sizeof(void*)*2);
x_131 = lean_ctor_get(x_94, 0);
x_132 = lean_ctor_get(x_94, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_94);
x_133 = lean_ctor_get(x_132, 2);
lean_inc(x_133);
x_134 = lean_unsigned_to_nat(0u);
x_135 = lean_nat_dec_lt(x_134, x_133);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_2);
x_136 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_136, 0, x_131);
lean_ctor_set(x_136, 1, x_86);
lean_ctor_set_uint8(x_136, sizeof(void*)*2, x_130);
lean_ctor_set(x_93, 5, x_136);
x_137 = lean_st_ref_set(x_6, x_93, x_95);
lean_dec(x_6);
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_139 = x_137;
} else {
 lean_dec_ref(x_137);
 x_139 = lean_box(0);
}
x_140 = lean_box(0);
x_141 = lean_box(x_88);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
if (lean_is_scalar(x_139)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_139;
}
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_138);
x_12 = x_143;
goto block_24;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_144 = lean_unsigned_to_nat(1u);
x_145 = lean_nat_sub(x_133, x_144);
lean_dec(x_133);
x_146 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_132, x_145);
lean_dec(x_145);
x_147 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_131, x_2, x_146);
x_148 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_86);
lean_ctor_set_uint8(x_148, sizeof(void*)*2, x_130);
lean_ctor_set(x_93, 5, x_148);
x_149 = lean_st_ref_set(x_6, x_93, x_95);
lean_dec(x_6);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_151 = x_149;
} else {
 lean_dec_ref(x_149);
 x_151 = lean_box(0);
}
x_152 = lean_box(0);
x_153 = lean_box(x_88);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
if (lean_is_scalar(x_151)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_151;
}
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_150);
x_12 = x_155;
goto block_24;
}
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_156 = lean_ctor_get(x_93, 0);
x_157 = lean_ctor_get(x_93, 1);
x_158 = lean_ctor_get(x_93, 2);
x_159 = lean_ctor_get(x_93, 3);
x_160 = lean_ctor_get(x_93, 4);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_93);
x_161 = lean_ctor_get_uint8(x_94, sizeof(void*)*2);
x_162 = lean_ctor_get(x_94, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_94, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_164 = x_94;
} else {
 lean_dec_ref(x_94);
 x_164 = lean_box(0);
}
x_165 = lean_ctor_get(x_163, 2);
lean_inc(x_165);
x_166 = lean_unsigned_to_nat(0u);
x_167 = lean_nat_dec_lt(x_166, x_165);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_165);
lean_dec(x_163);
lean_dec(x_2);
if (lean_is_scalar(x_164)) {
 x_168 = lean_alloc_ctor(0, 2, 1);
} else {
 x_168 = x_164;
}
lean_ctor_set(x_168, 0, x_162);
lean_ctor_set(x_168, 1, x_86);
lean_ctor_set_uint8(x_168, sizeof(void*)*2, x_161);
x_169 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_169, 0, x_156);
lean_ctor_set(x_169, 1, x_157);
lean_ctor_set(x_169, 2, x_158);
lean_ctor_set(x_169, 3, x_159);
lean_ctor_set(x_169, 4, x_160);
lean_ctor_set(x_169, 5, x_168);
x_170 = lean_st_ref_set(x_6, x_169, x_95);
lean_dec(x_6);
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_172 = x_170;
} else {
 lean_dec_ref(x_170);
 x_172 = lean_box(0);
}
x_173 = lean_box(0);
x_174 = lean_box(x_88);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_173);
if (lean_is_scalar(x_172)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_172;
}
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_171);
x_12 = x_176;
goto block_24;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_177 = lean_unsigned_to_nat(1u);
x_178 = lean_nat_sub(x_165, x_177);
lean_dec(x_165);
x_179 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_163, x_178);
lean_dec(x_178);
x_180 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_162, x_2, x_179);
if (lean_is_scalar(x_164)) {
 x_181 = lean_alloc_ctor(0, 2, 1);
} else {
 x_181 = x_164;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_86);
lean_ctor_set_uint8(x_181, sizeof(void*)*2, x_161);
x_182 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_182, 0, x_156);
lean_ctor_set(x_182, 1, x_157);
lean_ctor_set(x_182, 2, x_158);
lean_ctor_set(x_182, 3, x_159);
lean_ctor_set(x_182, 4, x_160);
lean_ctor_set(x_182, 5, x_181);
x_183 = lean_st_ref_set(x_6, x_182, x_95);
lean_dec(x_6);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_185 = x_183;
} else {
 lean_dec_ref(x_183);
 x_185 = lean_box(0);
}
x_186 = lean_box(0);
x_187 = lean_box(x_88);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_186);
if (lean_is_scalar(x_185)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_185;
}
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_184);
x_12 = x_189;
goto block_24;
}
}
}
block_269:
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; 
x_193 = lean_st_ref_get(x_10, x_192);
lean_dec(x_10);
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
lean_dec(x_193);
x_195 = lean_st_ref_take(x_6, x_194);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_196, 5);
lean_inc(x_197);
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
lean_dec(x_195);
x_199 = !lean_is_exclusive(x_196);
if (x_199 == 0)
{
lean_object* x_200; uint8_t x_201; 
x_200 = lean_ctor_get(x_196, 5);
lean_dec(x_200);
x_201 = !lean_is_exclusive(x_197);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_202 = lean_ctor_get(x_197, 0);
x_203 = lean_ctor_get(x_197, 1);
x_204 = lean_ctor_get(x_203, 2);
lean_inc(x_204);
x_205 = lean_unsigned_to_nat(0u);
x_206 = lean_nat_dec_lt(x_205, x_204);
if (x_206 == 0)
{
lean_object* x_207; uint8_t x_208; 
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_2);
lean_ctor_set(x_197, 1, x_86);
x_207 = lean_st_ref_set(x_6, x_196, x_198);
lean_dec(x_6);
x_208 = !lean_is_exclusive(x_207);
if (x_208 == 0)
{
lean_object* x_209; 
x_209 = lean_ctor_get(x_207, 0);
lean_dec(x_209);
lean_ctor_set_tag(x_207, 1);
lean_ctor_set(x_207, 0, x_191);
x_12 = x_207;
goto block_24;
}
else
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_207, 1);
lean_inc(x_210);
lean_dec(x_207);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_191);
lean_ctor_set(x_211, 1, x_210);
x_12 = x_211;
goto block_24;
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_212 = lean_unsigned_to_nat(1u);
x_213 = lean_nat_sub(x_204, x_212);
lean_dec(x_204);
x_214 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_203, x_213);
lean_dec(x_213);
x_215 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_202, x_2, x_214);
lean_ctor_set(x_197, 1, x_86);
lean_ctor_set(x_197, 0, x_215);
x_216 = lean_st_ref_set(x_6, x_196, x_198);
lean_dec(x_6);
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
lean_object* x_218; 
x_218 = lean_ctor_get(x_216, 0);
lean_dec(x_218);
lean_ctor_set_tag(x_216, 1);
lean_ctor_set(x_216, 0, x_191);
x_12 = x_216;
goto block_24;
}
else
{
lean_object* x_219; lean_object* x_220; 
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
lean_dec(x_216);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_191);
lean_ctor_set(x_220, 1, x_219);
x_12 = x_220;
goto block_24;
}
}
}
else
{
uint8_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_221 = lean_ctor_get_uint8(x_197, sizeof(void*)*2);
x_222 = lean_ctor_get(x_197, 0);
x_223 = lean_ctor_get(x_197, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_197);
x_224 = lean_ctor_get(x_223, 2);
lean_inc(x_224);
x_225 = lean_unsigned_to_nat(0u);
x_226 = lean_nat_dec_lt(x_225, x_224);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_227 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_227, 0, x_222);
lean_ctor_set(x_227, 1, x_86);
lean_ctor_set_uint8(x_227, sizeof(void*)*2, x_221);
lean_ctor_set(x_196, 5, x_227);
x_228 = lean_st_ref_set(x_6, x_196, x_198);
lean_dec(x_6);
x_229 = lean_ctor_get(x_228, 1);
lean_inc(x_229);
if (lean_is_exclusive(x_228)) {
 lean_ctor_release(x_228, 0);
 lean_ctor_release(x_228, 1);
 x_230 = x_228;
} else {
 lean_dec_ref(x_228);
 x_230 = lean_box(0);
}
if (lean_is_scalar(x_230)) {
 x_231 = lean_alloc_ctor(1, 2, 0);
} else {
 x_231 = x_230;
 lean_ctor_set_tag(x_231, 1);
}
lean_ctor_set(x_231, 0, x_191);
lean_ctor_set(x_231, 1, x_229);
x_12 = x_231;
goto block_24;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_232 = lean_unsigned_to_nat(1u);
x_233 = lean_nat_sub(x_224, x_232);
lean_dec(x_224);
x_234 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_223, x_233);
lean_dec(x_233);
x_235 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_222, x_2, x_234);
x_236 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_86);
lean_ctor_set_uint8(x_236, sizeof(void*)*2, x_221);
lean_ctor_set(x_196, 5, x_236);
x_237 = lean_st_ref_set(x_6, x_196, x_198);
lean_dec(x_6);
x_238 = lean_ctor_get(x_237, 1);
lean_inc(x_238);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_239 = x_237;
} else {
 lean_dec_ref(x_237);
 x_239 = lean_box(0);
}
if (lean_is_scalar(x_239)) {
 x_240 = lean_alloc_ctor(1, 2, 0);
} else {
 x_240 = x_239;
 lean_ctor_set_tag(x_240, 1);
}
lean_ctor_set(x_240, 0, x_191);
lean_ctor_set(x_240, 1, x_238);
x_12 = x_240;
goto block_24;
}
}
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; 
x_241 = lean_ctor_get(x_196, 0);
x_242 = lean_ctor_get(x_196, 1);
x_243 = lean_ctor_get(x_196, 2);
x_244 = lean_ctor_get(x_196, 3);
x_245 = lean_ctor_get(x_196, 4);
lean_inc(x_245);
lean_inc(x_244);
lean_inc(x_243);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_196);
x_246 = lean_ctor_get_uint8(x_197, sizeof(void*)*2);
x_247 = lean_ctor_get(x_197, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_197, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_249 = x_197;
} else {
 lean_dec_ref(x_197);
 x_249 = lean_box(0);
}
x_250 = lean_ctor_get(x_248, 2);
lean_inc(x_250);
x_251 = lean_unsigned_to_nat(0u);
x_252 = lean_nat_dec_lt(x_251, x_250);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_250);
lean_dec(x_248);
lean_dec(x_2);
if (lean_is_scalar(x_249)) {
 x_253 = lean_alloc_ctor(0, 2, 1);
} else {
 x_253 = x_249;
}
lean_ctor_set(x_253, 0, x_247);
lean_ctor_set(x_253, 1, x_86);
lean_ctor_set_uint8(x_253, sizeof(void*)*2, x_246);
x_254 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_254, 0, x_241);
lean_ctor_set(x_254, 1, x_242);
lean_ctor_set(x_254, 2, x_243);
lean_ctor_set(x_254, 3, x_244);
lean_ctor_set(x_254, 4, x_245);
lean_ctor_set(x_254, 5, x_253);
x_255 = lean_st_ref_set(x_6, x_254, x_198);
lean_dec(x_6);
x_256 = lean_ctor_get(x_255, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_257 = x_255;
} else {
 lean_dec_ref(x_255);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(1, 2, 0);
} else {
 x_258 = x_257;
 lean_ctor_set_tag(x_258, 1);
}
lean_ctor_set(x_258, 0, x_191);
lean_ctor_set(x_258, 1, x_256);
x_12 = x_258;
goto block_24;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_259 = lean_unsigned_to_nat(1u);
x_260 = lean_nat_sub(x_250, x_259);
lean_dec(x_250);
x_261 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_248, x_260);
lean_dec(x_260);
x_262 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_247, x_2, x_261);
if (lean_is_scalar(x_249)) {
 x_263 = lean_alloc_ctor(0, 2, 1);
} else {
 x_263 = x_249;
}
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_86);
lean_ctor_set_uint8(x_263, sizeof(void*)*2, x_246);
x_264 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_264, 0, x_241);
lean_ctor_set(x_264, 1, x_242);
lean_ctor_set(x_264, 2, x_243);
lean_ctor_set(x_264, 3, x_244);
lean_ctor_set(x_264, 4, x_245);
lean_ctor_set(x_264, 5, x_263);
x_265 = lean_st_ref_set(x_6, x_264, x_198);
lean_dec(x_6);
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_267 = x_265;
} else {
 lean_dec_ref(x_265);
 x_267 = lean_box(0);
}
if (lean_is_scalar(x_267)) {
 x_268 = lean_alloc_ctor(1, 2, 0);
} else {
 x_268 = x_267;
 lean_ctor_set_tag(x_268, 1);
}
lean_ctor_set(x_268, 0, x_191);
lean_ctor_set(x_268, 1, x_266);
x_12 = x_268;
goto block_24;
}
}
}
}
}
}
else
{
uint8_t x_303; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_303 = !lean_is_exclusive(x_26);
if (x_303 == 0)
{
return x_26;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_304 = lean_ctor_get(x_26, 0);
x_305 = lean_ctor_get(x_26, 1);
lean_inc(x_305);
lean_inc(x_304);
lean_dec(x_26);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_304);
lean_ctor_set(x_306, 1, x_305);
return x_306;
}
}
block_24:
{
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
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
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_inc(x_1);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMVarDecl___boxed), 8, 1);
lean_closure_set(x_18, 0, x_1);
x_19 = lean_box(x_3);
x_20 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__1___boxed), 11, 3);
lean_closure_set(x_20, 0, x_2);
lean_closure_set(x_20, 1, x_1);
lean_closure_set(x_20, 2, x_19);
x_21 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_21, 0, x_18);
lean_closure_set(x_21, 1, x_20);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l_Lean_Elab_Term_withSavedContext___rarg(x_4, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_13 = x_26;
x_14 = x_24;
goto block_17;
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_22, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
if (x_3 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_5);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_dec(x_22);
x_29 = l_Lean_Elab_logException___at___private_Lean_Elab_Term_0__Lean_Elab_Term_exceptionToSorry___spec__1(x_27, x_6, x_7, x_8, x_9, x_10, x_11, x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = 1;
x_32 = lean_box(0);
x_33 = lean_box(x_31);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_13 = x_34;
x_14 = x_30;
goto block_17;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_29);
if (x_35 == 0)
{
return x_29;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_29, 0);
x_37 = lean_ctor_get(x_29, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_29);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_27);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_39 = lean_ctor_get(x_22, 1);
lean_inc(x_39);
lean_dec(x_22);
x_40 = lean_st_ref_get(x_11, x_39);
lean_dec(x_11);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_st_ref_set(x_7, x_5, x_41);
lean_dec(x_7);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = 0;
x_45 = lean_box(0);
x_46 = lean_box(x_44);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_13 = x_47;
x_14 = x_43;
goto block_17;
}
}
else
{
uint8_t x_48; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_22);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_49 = lean_ctor_get(x_22, 1);
x_50 = lean_ctor_get(x_22, 0);
lean_dec(x_50);
x_51 = lean_ctor_get(x_27, 0);
lean_inc(x_51);
x_52 = l_Lean_Elab_postponeExceptionId;
x_53 = lean_nat_dec_eq(x_51, x_52);
lean_dec(x_51);
if (x_53 == 0)
{
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
return x_22;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_free_object(x_22);
lean_dec(x_27);
x_54 = lean_st_ref_get(x_11, x_49);
lean_dec(x_11);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_st_ref_set(x_7, x_5, x_55);
lean_dec(x_7);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = 0;
x_59 = lean_box(0);
x_60 = lean_box(x_58);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_13 = x_61;
x_14 = x_57;
goto block_17;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_22, 1);
lean_inc(x_62);
lean_dec(x_22);
x_63 = lean_ctor_get(x_27, 0);
lean_inc(x_63);
x_64 = l_Lean_Elab_postponeExceptionId;
x_65 = lean_nat_dec_eq(x_63, x_64);
lean_dec(x_63);
if (x_65 == 0)
{
lean_object* x_66; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_27);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_27);
x_67 = lean_st_ref_get(x_11, x_62);
lean_dec(x_11);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_st_ref_set(x_7, x_5, x_68);
lean_dec(x_7);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = 0;
x_72 = lean_box(0);
x_73 = lean_box(x_71);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_13 = x_74;
x_14 = x_70;
goto block_17;
}
}
}
}
block_17:
{
lean_object* x_15; lean_object* x_16; 
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_box(x_4);
lean_inc(x_2);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__2___boxed), 12, 4);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_12);
lean_closure_set(x_13, 3, x_1);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadInfoTreeTermElabM___lambda__1___boxed), 7, 0);
x_15 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_13);
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 3);
x_18 = l_Lean_replaceRef(x_2, x_17);
lean_dec(x_17);
lean_dec(x_2);
lean_ctor_set(x_9, 3, x_18);
x_19 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
x_22 = lean_ctor_get(x_9, 2);
x_23 = lean_ctor_get(x_9, 3);
x_24 = lean_ctor_get(x_9, 4);
x_25 = lean_ctor_get(x_9, 5);
x_26 = lean_ctor_get(x_9, 6);
x_27 = lean_ctor_get(x_9, 7);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_28 = l_Lean_replaceRef(x_2, x_23);
lean_dec(x_23);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set(x_29, 6, x_26);
lean_ctor_set(x_29, 7, x_27);
x_30 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_3, x_15, x_5, x_6, x_7, x_8, x_29, x_10, x_11);
return x_30;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__1(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___lambda__2(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_14;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_6 = lean_apply_3(x_2, x_1, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_10 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_dec(x_10);
x_22 = l_Lean_Elab_logException___at___private_Lean_Elab_Term_0__Lean_Elab_Term_exceptionToSorry___spec__1(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = 1;
x_26 = lean_box(0);
x_27 = lean_box(x_25);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_22, 0, x_28);
return x_22;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_dec(x_22);
x_30 = 1;
x_31 = lean_box(0);
x_32 = lean_box(x_30);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_22);
if (x_35 == 0)
{
return x_22;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_22, 0);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_22);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_20);
x_39 = lean_ctor_get(x_10, 1);
lean_inc(x_39);
lean_dec(x_10);
x_40 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_41 = lean_mk_string("Lean.Elab.SyntheticMVars");
x_42 = lean_mk_string("_private.Lean.Elab.SyntheticMVars.0.Lean.Elab.Term.synthesizePendingInstMVar");
x_43 = lean_unsigned_to_nat(66u);
x_44 = lean_unsigned_to_nat(36u);
x_45 = lean_mk_string("unreachable code has been reached");
x_46 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_41, x_42, x_43, x_44, x_45);
lean_dec(x_45);
lean_dec(x_42);
lean_dec(x_41);
x_47 = lean_panic_fn(x_40, x_46);
x_48 = lean_apply_7(x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_39);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_48, 0, x_52);
return x_48;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_48, 0);
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_48);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_48);
if (x_58 == 0)
{
return x_48;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_48, 0);
x_60 = lean_ctor_get(x_48, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_48);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_box(0);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__1), 9, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__2___boxed), 8, 0);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_13 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_1, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = 0;
x_10 = lean_box(0);
x_11 = lean_box(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_44; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_10);
x_44 = l_Lean_Elab_Term_synthesizeCoeInstMVarCore(x_6, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__2___boxed), 8, 0);
x_48 = lean_unbox(x_45);
lean_dec(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_8);
lean_dec(x_7);
x_49 = lean_box(0);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_50 = lean_apply_8(x_47, x_49, x_10, x_11, x_12, x_13, x_14, x_15, x_46);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_53);
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_50, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_50, 1);
lean_inc(x_59);
lean_dec(x_50);
x_17 = x_58;
x_18 = x_59;
goto block_43;
}
}
else
{
lean_object* x_60; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_60 = l_Lean_Meta_expandCoe(x_7, x_12, x_13, x_14, x_15, x_46);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_61);
x_63 = l_Lean_Meta_occursCheck(x_8, x_61, x_12, x_13, x_14, x_15, x_62);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_61);
lean_dec(x_8);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_67 = lean_box(0);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_68 = lean_apply_8(x_47, x_67, x_10, x_11, x_12, x_13, x_14, x_15, x_66);
if (lean_obj_tag(x_68) == 0)
{
uint8_t x_69; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
lean_dec(x_70);
lean_ctor_set(x_68, 0, x_71);
return x_68;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_68, 0);
x_73 = lean_ctor_get(x_68, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_68);
x_74 = lean_ctor_get(x_72, 0);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_68, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_68, 1);
lean_inc(x_77);
lean_dec(x_68);
x_17 = x_76;
x_18 = x_77;
goto block_43;
}
}
else
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_47);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_78 = lean_ctor_get(x_63, 1);
lean_inc(x_78);
lean_dec(x_63);
x_79 = l_Lean_Meta_assignExprMVar(x_8, x_61, x_12, x_13, x_14, x_15, x_78);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_80 = !lean_is_exclusive(x_79);
if (x_80 == 0)
{
lean_object* x_81; uint8_t x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_79, 0);
lean_dec(x_81);
x_82 = 1;
x_83 = lean_box(x_82);
lean_ctor_set(x_79, 0, x_83);
return x_79;
}
else
{
lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_79, 1);
lean_inc(x_84);
lean_dec(x_79);
x_85 = 1;
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_84);
return x_87;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_47);
lean_dec(x_8);
x_88 = lean_ctor_get(x_60, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_60, 1);
lean_inc(x_89);
lean_dec(x_60);
x_17 = x_88;
x_18 = x_89;
goto block_43;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_8);
lean_dec(x_7);
x_90 = lean_ctor_get(x_44, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_44, 1);
lean_inc(x_91);
lean_dec(x_44);
x_17 = x_90;
x_18 = x_91;
goto block_43;
}
block_43:
{
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_5, x_20, x_10, x_11, x_12, x_13, x_14, x_15, x_18);
lean_dec(x_11);
lean_dec(x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_27 = lean_mk_string("Lean.Elab.SyntheticMVars");
x_28 = lean_mk_string("_private.Lean.Elab.SyntheticMVars.0.Lean.Elab.Term.synthesizePendingCoeInstMVar");
x_29 = lean_unsigned_to_nat(96u);
x_30 = lean_unsigned_to_nat(33u);
x_31 = lean_mk_string("unreachable code has been reached");
x_32 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_27, x_28, x_29, x_30, x_31);
lean_dec(x_31);
lean_dec(x_28);
lean_dec(x_27);
x_33 = lean_panic_fn(x_26, x_32);
x_34 = lean_apply_7(x_33, x_10, x_11, x_12, x_13, x_14, x_15, x_18);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
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
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_34, 0);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_34);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
if (x_9 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_4);
x_19 = l_Lean_Meta_occursCheck(x_8, x_4, x_12, x_13, x_14, x_15, x_16);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 0);
lean_dec(x_23);
x_24 = 0;
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
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_19, 1);
lean_inc(x_30);
lean_dec(x_19);
x_31 = l_Lean_Meta_assignExprMVar(x_8, x_4, x_12, x_13, x_14, x_15, x_30);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = 1;
x_35 = lean_box(x_34);
lean_ctor_set(x_31, 0, x_35);
return x_31;
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = 1;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = l_Lean_Expr_appArg_x21(x_3);
x_16 = l_Lean_Expr_mvarId_x21(x_15);
lean_dec(x_15);
lean_inc(x_5);
lean_inc(x_4);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__1___boxed), 9, 2);
lean_closure_set(x_17, 0, x_4);
lean_closure_set(x_17, 1, x_5);
lean_inc(x_16);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__4___boxed), 16, 8);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_4);
lean_closure_set(x_18, 2, x_5);
lean_closure_set(x_18, 3, x_6);
lean_closure_set(x_18, 4, x_7);
lean_closure_set(x_18, 5, x_16);
lean_closure_set(x_18, 6, x_3);
lean_closure_set(x_18, 7, x_1);
x_19 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_16, x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_20;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
lean_dec(x_1);
return x_17;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_9);
lean_dec(x_9);
x_18 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_1);
return x_18;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_nat_dec_le(x_14, x_5);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_4, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_4, x_18);
lean_dec(x_4);
x_20 = l_Lean_instInhabitedBinderInfo;
x_21 = lean_box(x_20);
x_22 = lean_array_get(x_21, x_2, x_5);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
x_24 = 3;
x_25 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_237_(x_23, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_3, 2);
x_27 = lean_nat_add(x_5, x_26);
lean_dec(x_5);
x_4 = x_19;
x_5 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_29 = lean_ctor_get(x_11, 3);
x_30 = l_Lean_instInhabitedExpr;
x_31 = lean_array_get(x_30, x_1, x_5);
x_32 = l_Lean_Expr_mvarId_x21(x_31);
lean_dec(x_31);
x_33 = lean_box(0);
lean_inc(x_29);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_29);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_6);
x_36 = lean_ctor_get(x_3, 2);
x_37 = lean_nat_add(x_5, x_36);
lean_dec(x_5);
x_4 = x_19;
x_5 = x_37;
x_6 = x_35;
goto _start;
}
}
else
{
lean_object* x_39; 
lean_dec(x_5);
lean_dec(x_4);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_6);
lean_ctor_set(x_39, 1, x_13);
return x_39;
}
}
else
{
lean_object* x_40; 
lean_dec(x_5);
lean_dec(x_4);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_6);
lean_ctor_set(x_40, 1, x_13);
return x_40;
}
}
}
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_Elab_Term_saveState___rarg(x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 0;
x_16 = l_Lean_Elab_Term_SavedState_restore(x_10, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_12, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_13);
if (x_25 == 0)
{
return x_12;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_13, 0);
lean_inc(x_26);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_12, 0, x_27);
return x_12;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_12, 1);
lean_inc(x_28);
lean_dec(x_12);
x_29 = lean_ctor_get(x_13, 0);
lean_inc(x_29);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_30 = x_13;
} else {
 lean_dec_ref(x_13);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(1, 1, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_dec(x_12);
x_35 = 0;
x_36 = l_Lean_Elab_Term_SavedState_restore(x_10, x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_34);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set_tag(x_36, 1);
lean_ctor_set(x_36, 0, x_33);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_mkConstWithFreshMVarLevels(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_10 = l_Lean_Meta_inferType(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = 1;
x_15 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_11, x_14, x_13, x_15, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_77; lean_object* x_78; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_22 = x_18;
} else {
 lean_dec_ref(x_18);
 x_22 = lean_box(0);
}
x_23 = l_Lean_mkAppN(x_2, x_20);
x_24 = lean_box(0);
x_25 = lean_mk_string("Elab");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("resume");
x_28 = lean_name_mk_string(x_26, x_27);
x_95 = lean_st_ref_get(x_8, x_19);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_96, 3);
lean_inc(x_97);
lean_dec(x_96);
x_98 = lean_ctor_get_uint8(x_97, sizeof(void*)*1);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; uint8_t x_100; 
x_99 = lean_ctor_get(x_95, 1);
lean_inc(x_99);
lean_dec(x_95);
x_100 = 0;
x_77 = x_100;
x_78 = x_99;
goto block_94;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_101 = lean_ctor_get(x_95, 1);
lean_inc(x_101);
lean_dec(x_95);
lean_inc(x_28);
x_102 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_unbox(x_103);
lean_dec(x_103);
x_77 = x_105;
x_78 = x_104;
goto block_94;
}
block_76:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = l_Lean_mkMVar(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_23);
x_31 = l_Lean_Meta_isExprDefEqGuarded(x_30, x_23, x_5, x_6, x_7, x_8, x_29);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_28);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
lean_ctor_set(x_31, 0, x_13);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_13);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_dec(x_31);
x_39 = lean_box(0);
x_40 = lean_array_get_size(x_21);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_unsigned_to_nat(1u);
lean_inc(x_40);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_40);
lean_ctor_set(x_43, 2, x_42);
x_44 = l_Std_Range_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__1(x_20, x_21, x_43, x_40, x_41, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_43);
lean_dec(x_21);
lean_dec(x_20);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_47 = x_44;
} else {
 lean_dec_ref(x_44);
 x_47 = lean_box(0);
}
x_65 = lean_st_ref_get(x_8, x_46);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_66, 3);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_ctor_get_uint8(x_67, sizeof(void*)*1);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; 
x_69 = lean_ctor_get(x_65, 1);
lean_inc(x_69);
lean_dec(x_65);
x_70 = 0;
x_48 = x_70;
x_49 = x_69;
goto block_64;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_71 = lean_ctor_get(x_65, 1);
lean_inc(x_71);
lean_dec(x_65);
lean_inc(x_28);
x_72 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_unbox(x_73);
lean_dec(x_73);
x_48 = x_75;
x_49 = x_74;
goto block_64;
}
block_64:
{
if (x_48 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_scalar(x_22)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_22;
}
lean_ctor_set(x_50, 0, x_23);
lean_ctor_set(x_50, 1, x_45);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
if (lean_is_scalar(x_47)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_47;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_47);
x_53 = lean_mk_string("worked");
x_54 = l_Lean_stringToMessageData(x_53);
lean_dec(x_53);
x_55 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_28, x_54, x_3, x_4, x_5, x_6, x_7, x_8, x_49);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
if (lean_is_scalar(x_22)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_22;
}
lean_ctor_set(x_58, 0, x_23);
lean_ctor_set(x_58, 1, x_45);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_55, 0, x_59);
return x_55;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
lean_dec(x_55);
if (lean_is_scalar(x_22)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_22;
}
lean_ctor_set(x_61, 0, x_23);
lean_ctor_set(x_61, 1, x_45);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
return x_63;
}
}
}
}
}
block_94:
{
if (x_77 == 0)
{
x_29 = x_78;
goto block_76;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_79 = lean_mk_string("trying default instance for ");
x_80 = l_Lean_stringToMessageData(x_79);
lean_dec(x_79);
lean_inc(x_1);
x_81 = l_Lean_mkMVar(x_1);
x_82 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_mk_string(" := ");
x_85 = l_Lean_stringToMessageData(x_84);
lean_dec(x_84);
x_86 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
lean_inc(x_23);
x_87 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_87, 0, x_23);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_mk_string("");
x_90 = l_Lean_stringToMessageData(x_89);
lean_dec(x_89);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_90);
lean_inc(x_28);
x_92 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_28, x_91, x_3, x_4, x_5, x_6, x_7, x_8, x_78);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_29 = x_93;
goto block_76;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_16);
if (x_106 == 0)
{
return x_16;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_16, 0);
x_108 = lean_ctor_get(x_16, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_16);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_10);
if (x_110 == 0)
{
return x_10;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_10, 0);
x_112 = lean_ctor_get(x_10, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_10);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_alloc_closure((void*)(l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__1___boxed), 8, 1);
lean_closure_set(x_10, 0, x_2);
x_11 = lean_alloc_closure((void*)(l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__2___boxed), 9, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Term_saveState___rarg(x_4, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 0;
x_19 = l_Lean_Elab_Term_SavedState_restore(x_13, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
x_22 = lean_box(0);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_15);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_15, 0);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_16, 0);
lean_inc(x_29);
lean_dec(x_16);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_15, 0, x_30);
return x_15;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_dec(x_15);
x_32 = lean_ctor_get(x_16, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_33 = x_16;
} else {
 lean_dec_ref(x_16);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(1, 1, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_31);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_15, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_dec(x_15);
x_38 = 0;
x_39 = l_Lean_Elab_Term_SavedState_restore(x_13, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set_tag(x_39, 1);
lean_ctor_set(x_39, 0, x_36);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances_match__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getDefaultInstances___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Meta_defaultInstanceExtension;
x_14 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_13, x_12);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Std_RBNode_find___at_Lean_Meta_addDefaultInstanceEntry___spec__3(x_15, x_1);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_box(0);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Meta_defaultInstanceExtension;
x_23 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_22, x_21);
lean_dec(x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Std_RBNode_find___at_Lean_Meta_addDefaultInstanceEntry___spec__3(x_24, x_1);
lean_dec(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_20);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_20);
return x_29;
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_5);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_nat_dec_eq(x_17, x_2);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_16);
lean_inc(x_3);
{
lean_object* _tmp_3 = x_15;
lean_object* _tmp_4 = x_3;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_20; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_20 = l_Lean_commitWhenSome_x3f___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__2___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstance___spec__3(x_1, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_3);
{
lean_object* _tmp_3 = x_15;
lean_object* _tmp_4 = x_3;
lean_object* _tmp_11 = x_22;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_12 = _tmp_11;
}
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_20, 0);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_21);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_21, 0);
lean_inc(x_30);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_20, 0, x_34);
return x_20;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_dec(x_20);
x_36 = lean_ctor_get(x_21, 0);
lean_inc(x_36);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_37 = x_21;
} else {
 lean_dec_ref(x_21);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 1, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_36);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_35);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_20);
if (x_43 == 0)
{
return x_20;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_20, 0);
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_20);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getMVarDecl(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_12 = l_Lean_Meta_isClass_x3f(x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = l_Lean_Meta_getDefaultInstances___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__1(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
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
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_dec(x_22);
x_31 = lean_box(0);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_33);
x_34 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__2(x_1, x_2, x_33, x_23, x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_34, 0);
lean_dec(x_38);
lean_ctor_set(x_34, 0, x_31);
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_31);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_34);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_34, 0);
lean_dec(x_42);
x_43 = lean_ctor_get(x_36, 0);
lean_inc(x_43);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_43);
return x_34;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_34, 1);
lean_inc(x_44);
lean_dec(x_34);
x_45 = lean_ctor_get(x_36, 0);
lean_inc(x_45);
lean_dec(x_36);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
else
{
uint8_t x_47; 
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
}
}
else
{
uint8_t x_51; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_12);
if (x_51 == 0)
{
return x_12;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_12, 0);
x_53 = lean_ctor_get(x_12, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_12);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__1___boxed), 8, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__2___boxed), 10, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_13 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Lean_Meta_getDefaultInstances___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getDefaultInstances___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_ctor_get(x_8, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_1);
x_16 = l_Lean_Elab_Term_registerMVarErrorImplicitArgInfo(x_15, x_14, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_2 = x_13;
x_3 = x_18;
x_10 = x_17;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_17 = lean_ctor_get(x_2, 1);
x_18 = lean_ctor_get(x_2, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_8, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_8, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_8, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_8, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_8, 5);
lean_inc(x_26);
x_27 = lean_ctor_get(x_8, 6);
lean_inc(x_27);
x_28 = lean_ctor_get(x_8, 7);
lean_inc(x_28);
x_29 = l_Lean_replaceRef(x_19, x_24);
lean_dec(x_24);
lean_dec(x_19);
x_30 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_23);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set(x_30, 4, x_25);
lean_ctor_set(x_30, 5, x_26);
lean_ctor_set(x_30, 6, x_27);
lean_ctor_set(x_30, 7, x_28);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_31 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances(x_20, x_1, x_4, x_5, x_6, x_7, x_30, x_9, x_10);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_9 = x_33;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_10 = _tmp_9;
}
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_1);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_box(0);
lean_inc(x_38);
x_40 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1(x_37, x_38, x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_36);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_List_append___rarg(x_38, x_3);
x_43 = l_List_reverse___rarg(x_17);
x_44 = l_List_append___rarg(x_43, x_42);
x_45 = lean_st_ref_get(x_9, x_41);
lean_dec(x_9);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_st_ref_take(x_5, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = !lean_is_exclusive(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_48, 1);
lean_dec(x_51);
lean_ctor_set(x_48, 1, x_44);
x_52 = lean_st_ref_set(x_5, x_48, x_49);
lean_dec(x_5);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_52, 0);
lean_dec(x_54);
x_55 = 1;
x_56 = lean_box(x_55);
lean_ctor_set(x_52, 0, x_56);
return x_52;
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = 1;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; 
x_61 = lean_ctor_get(x_48, 0);
x_62 = lean_ctor_get(x_48, 2);
x_63 = lean_ctor_get(x_48, 3);
x_64 = lean_ctor_get(x_48, 4);
x_65 = lean_ctor_get(x_48, 5);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_48);
x_66 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_44);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_63);
lean_ctor_set(x_66, 4, x_64);
lean_ctor_set(x_66, 5, x_65);
x_67 = lean_st_ref_set(x_5, x_66, x_49);
lean_dec(x_5);
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
x_70 = 1;
x_71 = lean_box(x_70);
if (lean_is_scalar(x_69)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_69;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_68);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_free_object(x_2);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_31);
if (x_73 == 0)
{
return x_31;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_31, 0);
x_75 = lean_ctor_get(x_31, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_31);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_77 = lean_ctor_get(x_2, 1);
lean_inc(x_77);
lean_dec(x_2);
x_78 = lean_ctor_get(x_14, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_14, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_8, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_8, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_8, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_8, 3);
lean_inc(x_83);
x_84 = lean_ctor_get(x_8, 4);
lean_inc(x_84);
x_85 = lean_ctor_get(x_8, 5);
lean_inc(x_85);
x_86 = lean_ctor_get(x_8, 6);
lean_inc(x_86);
x_87 = lean_ctor_get(x_8, 7);
lean_inc(x_87);
x_88 = l_Lean_replaceRef(x_78, x_83);
lean_dec(x_83);
lean_dec(x_78);
x_89 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_89, 0, x_80);
lean_ctor_set(x_89, 1, x_81);
lean_ctor_set(x_89, 2, x_82);
lean_ctor_set(x_89, 3, x_88);
lean_ctor_set(x_89, 4, x_84);
lean_ctor_set(x_89, 5, x_85);
lean_ctor_set(x_89, 6, x_86);
lean_ctor_set(x_89, 7, x_87);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_90 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_tryToSynthesizeUsingDefaultInstances(x_79, x_1, x_4, x_5, x_6, x_7, x_89, x_9, x_10);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_14);
lean_ctor_set(x_93, 1, x_3);
x_2 = x_77;
x_3 = x_93;
x_10 = x_92;
goto _start;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_14);
lean_dec(x_1);
x_95 = lean_ctor_get(x_91, 0);
lean_inc(x_95);
lean_dec(x_91);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_dec(x_90);
x_97 = lean_ctor_get(x_95, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_dec(x_95);
x_99 = lean_box(0);
lean_inc(x_98);
x_100 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1(x_97, x_98, x_99, x_4, x_5, x_6, x_7, x_8, x_9, x_96);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_List_append___rarg(x_98, x_3);
x_103 = l_List_reverse___rarg(x_77);
x_104 = l_List_append___rarg(x_103, x_102);
x_105 = lean_st_ref_get(x_9, x_101);
lean_dec(x_9);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_107 = lean_st_ref_take(x_5, x_106);
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_ctor_get(x_108, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_108, 2);
lean_inc(x_111);
x_112 = lean_ctor_get(x_108, 3);
lean_inc(x_112);
x_113 = lean_ctor_get(x_108, 4);
lean_inc(x_113);
x_114 = lean_ctor_get(x_108, 5);
lean_inc(x_114);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 lean_ctor_release(x_108, 2);
 lean_ctor_release(x_108, 3);
 lean_ctor_release(x_108, 4);
 lean_ctor_release(x_108, 5);
 x_115 = x_108;
} else {
 lean_dec_ref(x_108);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(0, 6, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_110);
lean_ctor_set(x_116, 1, x_104);
lean_ctor_set(x_116, 2, x_111);
lean_ctor_set(x_116, 3, x_112);
lean_ctor_set(x_116, 4, x_113);
lean_ctor_set(x_116, 5, x_114);
x_117 = lean_st_ref_set(x_5, x_116, x_109);
lean_dec(x_5);
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_119 = x_117;
} else {
 lean_dec_ref(x_117);
 x_119 = lean_box(0);
}
x_120 = 1;
x_121 = lean_box(x_120);
if (lean_is_scalar(x_119)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_119;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_118);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_77);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_123 = lean_ctor_get(x_90, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_90, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_125 = x_90;
} else {
 lean_dec_ref(x_90);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_15);
x_127 = !lean_is_exclusive(x_2);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_2, 1);
x_129 = lean_ctor_get(x_2, 0);
lean_dec(x_129);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_128;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_ctor_get(x_2, 1);
lean_inc(x_131);
lean_dec(x_2);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_14);
lean_ctor_set(x_132, 1, x_3);
x_2 = x_131;
x_3 = x_132;
goto _start;
}
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
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
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_reverse___rarg(x_14);
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio_visit(x_1, x_15, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
return x_17;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Meta_defaultInstanceExtension;
x_8 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_7, x_6);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_defaultInstanceExtension;
x_14 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_13, x_12);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
}
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l_Std_RBNode_forIn_visit___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 3);
lean_inc(x_15);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_16 = l_Std_RBNode_forIn_visit___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__2(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_dec(x_16);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_free_object(x_17);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
lean_inc(x_1);
{
lean_object* _tmp_1 = x_15;
lean_object* _tmp_2 = x_1;
lean_object* _tmp_9 = x_28;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_10 = _tmp_9;
}
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_25, 0);
lean_dec(x_31);
x_32 = 1;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set_tag(x_17, 0);
lean_ctor_set(x_17, 0, x_36);
lean_ctor_set(x_25, 0, x_17);
return x_25;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_dec(x_25);
x_38 = 1;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_tag(x_17, 0);
lean_ctor_set(x_17, 0, x_42);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_17);
lean_ctor_set(x_43, 1, x_37);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_free_object(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_25);
if (x_44 == 0)
{
return x_25;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_25, 0);
x_46 = lean_ctor_get(x_25, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_25);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_17);
x_48 = lean_ctor_get(x_16, 1);
lean_inc(x_48);
lean_dec(x_16);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_49 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultPrio(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
lean_inc(x_1);
{
lean_object* _tmp_1 = x_15;
lean_object* _tmp_2 = x_1;
lean_object* _tmp_9 = x_52;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_10 = _tmp_9;
}
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_55 = x_49;
} else {
 lean_dec_ref(x_49);
 x_55 = lean_box(0);
}
x_56 = 1;
x_57 = lean_box(x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_60);
if (lean_is_scalar(x_55)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_55;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_54);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_63 = lean_ctor_get(x_49, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_49, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_65 = x_49;
} else {
 lean_dec_ref(x_49);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_16);
if (x_67 == 0)
{
return x_16;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_16, 0);
x_69 = lean_ctor_get(x_16, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_16);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
lean_inc(x_13);
x_14 = l_Std_RBNode_forIn_visit___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__2(x_13, x_9, x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
lean_dec(x_19);
x_20 = 0;
x_21 = lean_box(x_20);
lean_ctor_set(x_14, 0, x_21);
return x_14;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = 0;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_14, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_17, 0);
lean_inc(x_28);
lean_dec(x_17);
lean_ctor_set(x_14, 0, x_28);
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_dec(x_14);
x_30 = lean_ctor_get(x_17, 0);
lean_inc(x_30);
lean_dec(x_17);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
else
{
uint8_t x_32; 
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
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_getDefaultInstancesPriorities___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_6(x_3, x_7, x_8, x_9, x_10, x_11, x_12);
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 3);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_11);
x_17 = lean_mk_string("typeclass instance problem is stuck, it is often due to metavariables");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_indentExpr(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_mk_string("");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_box(0);
lean_ctor_set(x_11, 0, x_26);
return x_11;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
x_29 = lean_ctor_get(x_27, 3);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_mk_string("typeclass instance problem is stuck, it is often due to metavariables");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
lean_dec(x_1);
x_34 = l_Lean_indentExpr(x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_string("");
x_37 = l_Lean_stringToMessageData(x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_2);
lean_dec(x_1);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_28);
return x_41;
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_6, 2);
lean_inc(x_14);
lean_dec(x_6);
x_15 = l_Lean_indentExpr(x_14);
x_16 = lean_mk_string("failed to create type class instance for ");
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_5, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_20);
return x_21;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_11, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
x_24 = lean_ctor_get(x_7, 4);
x_25 = lean_ctor_get(x_7, 5);
x_26 = lean_ctor_get(x_7, 6);
x_27 = lean_ctor_get(x_7, 7);
x_28 = l_Lean_replaceRef(x_18, x_23);
lean_dec(x_18);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
x_29 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set(x_29, 6, x_26);
lean_ctor_set(x_29, 7, x_27);
switch (lean_obj_tag(x_19)) {
case 0:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_11, 0);
lean_inc(x_30);
lean_dec(x_11);
lean_inc(x_30);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMVarDecl___boxed), 8, 1);
lean_closure_set(x_31, 0, x_30);
x_32 = lean_alloc_closure((void*)(l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__1___boxed), 8, 0);
x_33 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_33, 0, x_31);
lean_closure_set(x_33, 1, x_32);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_30, x_33, x_3, x_4, x_5, x_6, x_29, x_8, x_9);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_13 = x_37;
x_14 = x_35;
goto block_17;
}
else
{
uint8_t x_38; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 0);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_34);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
case 1:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_11);
x_42 = lean_ctor_get(x_19, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_19, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_19, 2);
lean_inc(x_44);
x_45 = lean_ctor_get(x_19, 3);
lean_inc(x_45);
x_46 = lean_ctor_get(x_19, 4);
lean_inc(x_46);
x_47 = lean_ctor_get(x_19, 5);
lean_inc(x_47);
lean_dec(x_19);
x_48 = l_Lean_Expr_appArg_x21(x_43);
lean_dec(x_43);
x_49 = l_Lean_Expr_mvarId_x21(x_48);
lean_dec(x_48);
lean_inc(x_49);
x_50 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMVarDecl___boxed), 8, 1);
lean_closure_set(x_50, 0, x_49);
x_51 = lean_alloc_closure((void*)(l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__2___boxed), 13, 5);
lean_closure_set(x_51, 0, x_42);
lean_closure_set(x_51, 1, x_44);
lean_closure_set(x_51, 2, x_45);
lean_closure_set(x_51, 3, x_46);
lean_closure_set(x_51, 4, x_47);
x_52 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_52, 0, x_50);
lean_closure_set(x_52, 1, x_51);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_53 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_49, x_52, x_3, x_4, x_5, x_6, x_29, x_8, x_9);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_13 = x_56;
x_14 = x_54;
goto block_17;
}
else
{
uint8_t x_57; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_53);
if (x_57 == 0)
{
return x_53;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_53, 0);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_53);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
default: 
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_19);
lean_dec(x_11);
x_61 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_62 = lean_mk_string("Lean.Elab.SyntheticMVars");
x_63 = lean_mk_string("_private.Lean.Elab.SyntheticMVars.0.Lean.Elab.Term.reportStuckSyntheticMVars");
x_64 = lean_unsigned_to_nat(186u);
x_65 = lean_unsigned_to_nat(11u);
x_66 = lean_mk_string("unreachable code has been reached");
x_67 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_62, x_63, x_64, x_65, x_66);
lean_dec(x_66);
lean_dec(x_63);
lean_dec(x_62);
x_68 = lean_panic_fn(x_61, x_67);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_69 = lean_apply_7(x_68, x_3, x_4, x_5, x_6, x_29, x_8, x_9);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_13 = x_72;
x_14 = x_70;
goto block_17;
}
else
{
uint8_t x_73; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_73 = !lean_is_exclusive(x_69);
if (x_73 == 0)
{
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_69, 0);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_69);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
block_17:
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_1 = x_12;
x_2 = x_15;
x_9 = x_14;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_take(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_box(0);
lean_ctor_set(x_11, 1, x_15);
x_16 = lean_st_ref_set(x_2, x_11, x_12);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1(x_14, x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
x_30 = lean_ctor_get(x_11, 2);
x_31 = lean_ctor_get(x_11, 3);
x_32 = lean_ctor_get(x_11, 4);
x_33 = lean_ctor_get(x_11, 5);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_30);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_32);
lean_ctor_set(x_35, 5, x_33);
x_36 = lean_st_ref_set(x_2, x_35, x_12);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_box(0);
x_39 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1(x_29, x_38, x_1, x_2, x_3, x_4, x_5, x_6, x_37);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_41 = x_39;
} else {
 lean_dec_ref(x_39);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_38);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_39, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_39, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_45 = x_39;
} else {
 lean_dec_ref(x_39);
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
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_forIn_loop___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_10;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = 0;
x_4 = l_Lean_Syntax_getPos_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1___boxed), 1, 0);
x_14 = l_List_find_x3f___rarg(x_13, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_box(0);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1___boxed), 1, 0);
x_22 = l_List_find_x3f___rarg(x_21, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
return x_27;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 5);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_6(x_3, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
case 2:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_2(x_5, x_15, x_16);
return x_17;
}
default: 
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_1(x_4, x_18);
return x_19;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_ctor_set(x_8, 1, x_12);
x_15 = lean_st_ref_get(x_9, x_10);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_5, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_List_isEmpty___rarg(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
uint8_t x_23; lean_object* x_24; 
lean_free_object(x_17);
x_23 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_23, x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
if (x_2 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_4, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_4, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_4, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_4, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_4, 4);
lean_inc(x_32);
x_33 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
x_34 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
x_35 = lean_ctor_get(x_4, 5);
lean_inc(x_35);
x_36 = lean_ctor_get(x_4, 6);
lean_inc(x_36);
x_37 = lean_ctor_get(x_4, 7);
lean_inc(x_37);
x_38 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 3);
x_39 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_39, 0, x_28);
lean_ctor_set(x_39, 1, x_29);
lean_ctor_set(x_39, 2, x_30);
lean_ctor_set(x_39, 3, x_31);
lean_ctor_set(x_39, 4, x_32);
lean_ctor_set(x_39, 5, x_35);
lean_ctor_set(x_39, 6, x_36);
lean_ctor_set(x_39, 7, x_37);
lean_ctor_set_uint8(x_39, sizeof(void*)*8, x_23);
lean_ctor_set_uint8(x_39, sizeof(void*)*8 + 1, x_33);
lean_ctor_set_uint8(x_39, sizeof(void*)*8 + 2, x_34);
lean_ctor_set_uint8(x_39, sizeof(void*)*8 + 3, x_38);
x_40 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_39);
x_41 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_40, x_23, x_39, x_5, x_6, x_7, x_8, x_9, x_27);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_45 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault(x_4, x_5, x_6, x_7, x_8, x_9, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_49 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_23, x_23, x_39, x_5, x_6, x_7, x_8, x_9, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_53 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_23, x_40, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_unbox(x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars(x_4, x_5, x_6, x_7, x_8, x_9, x_56);
lean_dec(x_8);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_dec(x_53);
x_59 = lean_box(0);
x_60 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_59, x_4, x_5, x_6, x_7, x_8, x_9, x_58);
return x_60;
}
}
else
{
uint8_t x_61; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_61 = !lean_is_exclusive(x_53);
if (x_61 == 0)
{
return x_53;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_53, 0);
x_63 = lean_ctor_get(x_53, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_53);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_49, 1);
lean_inc(x_65);
lean_dec(x_49);
x_66 = lean_box(0);
x_67 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_66, x_4, x_5, x_6, x_7, x_8, x_9, x_65);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_68 = !lean_is_exclusive(x_49);
if (x_68 == 0)
{
return x_49;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_49, 0);
x_70 = lean_ctor_get(x_49, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_49);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_39);
x_72 = lean_ctor_get(x_45, 1);
lean_inc(x_72);
lean_dec(x_45);
x_73 = lean_box(0);
x_74 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_73, x_4, x_5, x_6, x_7, x_8, x_9, x_72);
return x_74;
}
}
else
{
uint8_t x_75; 
lean_dec(x_39);
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_75 = !lean_is_exclusive(x_45);
if (x_75 == 0)
{
return x_45;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_45, 0);
x_77 = lean_ctor_get(x_45, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_45);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_39);
x_79 = lean_ctor_get(x_41, 1);
lean_inc(x_79);
lean_dec(x_41);
x_80 = lean_box(0);
x_81 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_80, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_81;
}
}
else
{
uint8_t x_82; 
lean_dec(x_39);
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
else
{
uint8_t x_86; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_86 = !lean_is_exclusive(x_24);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_24, 0);
lean_dec(x_87);
x_88 = lean_box(0);
lean_ctor_set(x_24, 0, x_88);
return x_24;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_24, 1);
lean_inc(x_89);
lean_dec(x_24);
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_24, 1);
lean_inc(x_92);
lean_dec(x_24);
x_93 = lean_box(0);
x_94 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_93, x_4, x_5, x_6, x_7, x_8, x_9, x_92);
return x_94;
}
}
else
{
uint8_t x_95; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_95 = !lean_is_exclusive(x_24);
if (x_95 == 0)
{
return x_24;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_24, 0);
x_97 = lean_ctor_get(x_24, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_24);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
lean_object* x_99; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_99 = lean_box(0);
lean_ctor_set(x_17, 0, x_99);
return x_17;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_100 = lean_ctor_get(x_17, 0);
x_101 = lean_ctor_get(x_17, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_17);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_List_isEmpty___rarg(x_102);
lean_dec(x_102);
if (x_103 == 0)
{
uint8_t x_104; lean_object* x_105; 
x_104 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_105 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_104, x_104, x_4, x_5, x_6, x_7, x_8, x_9, x_101);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; uint8_t x_107; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
lean_dec(x_106);
if (x_107 == 0)
{
if (x_2 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; 
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
lean_dec(x_105);
x_109 = lean_ctor_get(x_4, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_4, 1);
lean_inc(x_110);
x_111 = lean_ctor_get(x_4, 2);
lean_inc(x_111);
x_112 = lean_ctor_get(x_4, 3);
lean_inc(x_112);
x_113 = lean_ctor_get(x_4, 4);
lean_inc(x_113);
x_114 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
x_115 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
x_116 = lean_ctor_get(x_4, 5);
lean_inc(x_116);
x_117 = lean_ctor_get(x_4, 6);
lean_inc(x_117);
x_118 = lean_ctor_get(x_4, 7);
lean_inc(x_118);
x_119 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 3);
x_120 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_120, 0, x_109);
lean_ctor_set(x_120, 1, x_110);
lean_ctor_set(x_120, 2, x_111);
lean_ctor_set(x_120, 3, x_112);
lean_ctor_set(x_120, 4, x_113);
lean_ctor_set(x_120, 5, x_116);
lean_ctor_set(x_120, 6, x_117);
lean_ctor_set(x_120, 7, x_118);
lean_ctor_set_uint8(x_120, sizeof(void*)*8, x_104);
lean_ctor_set_uint8(x_120, sizeof(void*)*8 + 1, x_114);
lean_ctor_set_uint8(x_120, sizeof(void*)*8 + 2, x_115);
lean_ctor_set_uint8(x_120, sizeof(void*)*8 + 3, x_119);
x_121 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_120);
x_122 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_121, x_104, x_120, x_5, x_6, x_7, x_8, x_9, x_108);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; uint8_t x_124; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_unbox(x_123);
lean_dec(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_122, 1);
lean_inc(x_125);
lean_dec(x_122);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_126 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault(x_4, x_5, x_6, x_7, x_8, x_9, x_125);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_unbox(x_127);
lean_dec(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
lean_dec(x_126);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_130 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_104, x_104, x_120, x_5, x_6, x_7, x_8, x_9, x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; uint8_t x_132; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_unbox(x_131);
lean_dec(x_131);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_134 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_104, x_121, x_4, x_5, x_6, x_7, x_8, x_9, x_133);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; uint8_t x_136; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_unbox(x_135);
lean_dec(x_135);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; 
x_137 = lean_ctor_get(x_134, 1);
lean_inc(x_137);
lean_dec(x_134);
x_138 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars(x_4, x_5, x_6, x_7, x_8, x_9, x_137);
lean_dec(x_8);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_134, 1);
lean_inc(x_139);
lean_dec(x_134);
x_140 = lean_box(0);
x_141 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_140, x_4, x_5, x_6, x_7, x_8, x_9, x_139);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_142 = lean_ctor_get(x_134, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_134, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_144 = x_134;
} else {
 lean_dec_ref(x_134);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_130, 1);
lean_inc(x_146);
lean_dec(x_130);
x_147 = lean_box(0);
x_148 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_147, x_4, x_5, x_6, x_7, x_8, x_9, x_146);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_149 = lean_ctor_get(x_130, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_130, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_151 = x_130;
} else {
 lean_dec_ref(x_130);
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
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_120);
x_153 = lean_ctor_get(x_126, 1);
lean_inc(x_153);
lean_dec(x_126);
x_154 = lean_box(0);
x_155 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_154, x_4, x_5, x_6, x_7, x_8, x_9, x_153);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_120);
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_156 = lean_ctor_get(x_126, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_126, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_158 = x_126;
} else {
 lean_dec_ref(x_126);
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
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_120);
x_160 = lean_ctor_get(x_122, 1);
lean_inc(x_160);
lean_dec(x_122);
x_161 = lean_box(0);
x_162 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_161, x_4, x_5, x_6, x_7, x_8, x_9, x_160);
return x_162;
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_120);
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_163 = lean_ctor_get(x_122, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_122, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_165 = x_122;
} else {
 lean_dec_ref(x_122);
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
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_167 = lean_ctor_get(x_105, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_168 = x_105;
} else {
 lean_dec_ref(x_105);
 x_168 = lean_box(0);
}
x_169 = lean_box(0);
if (lean_is_scalar(x_168)) {
 x_170 = lean_alloc_ctor(0, 2, 0);
} else {
 x_170 = x_168;
}
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_167);
return x_170;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_105, 1);
lean_inc(x_171);
lean_dec(x_105);
x_172 = lean_box(0);
x_173 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_172, x_4, x_5, x_6, x_7, x_8, x_9, x_171);
return x_173;
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_174 = lean_ctor_get(x_105, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_105, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_176 = x_105;
} else {
 lean_dec_ref(x_105);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 2, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
else
{
lean_object* x_178; lean_object* x_179; 
lean_dec(x_8);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_178 = lean_box(0);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_101);
return x_179;
}
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_180 = lean_ctor_get(x_8, 0);
x_181 = lean_ctor_get(x_8, 2);
x_182 = lean_ctor_get(x_8, 3);
x_183 = lean_ctor_get(x_8, 4);
x_184 = lean_ctor_get(x_8, 5);
x_185 = lean_ctor_get(x_8, 6);
x_186 = lean_ctor_get(x_8, 7);
lean_inc(x_186);
lean_inc(x_185);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_8);
x_187 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_187, 0, x_180);
lean_ctor_set(x_187, 1, x_12);
lean_ctor_set(x_187, 2, x_181);
lean_ctor_set(x_187, 3, x_182);
lean_ctor_set(x_187, 4, x_183);
lean_ctor_set(x_187, 5, x_184);
lean_ctor_set(x_187, 6, x_185);
lean_ctor_set(x_187, 7, x_186);
x_188 = lean_st_ref_get(x_9, x_10);
x_189 = lean_ctor_get(x_188, 1);
lean_inc(x_189);
lean_dec(x_188);
x_190 = lean_st_ref_get(x_5, x_189);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_193 = x_190;
} else {
 lean_dec_ref(x_190);
 x_193 = lean_box(0);
}
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
lean_dec(x_191);
x_195 = l_List_isEmpty___rarg(x_194);
lean_dec(x_194);
if (x_195 == 0)
{
uint8_t x_196; lean_object* x_197; 
lean_dec(x_193);
x_196 = 0;
lean_inc(x_9);
lean_inc(x_187);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_197 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_196, x_196, x_4, x_5, x_6, x_7, x_187, x_9, x_192);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; uint8_t x_199; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_unbox(x_198);
lean_dec(x_198);
if (x_199 == 0)
{
if (x_2 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; uint8_t x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; lean_object* x_212; uint8_t x_213; lean_object* x_214; 
x_200 = lean_ctor_get(x_197, 1);
lean_inc(x_200);
lean_dec(x_197);
x_201 = lean_ctor_get(x_4, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_4, 1);
lean_inc(x_202);
x_203 = lean_ctor_get(x_4, 2);
lean_inc(x_203);
x_204 = lean_ctor_get(x_4, 3);
lean_inc(x_204);
x_205 = lean_ctor_get(x_4, 4);
lean_inc(x_205);
x_206 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
x_207 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
x_208 = lean_ctor_get(x_4, 5);
lean_inc(x_208);
x_209 = lean_ctor_get(x_4, 6);
lean_inc(x_209);
x_210 = lean_ctor_get(x_4, 7);
lean_inc(x_210);
x_211 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 3);
x_212 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_212, 0, x_201);
lean_ctor_set(x_212, 1, x_202);
lean_ctor_set(x_212, 2, x_203);
lean_ctor_set(x_212, 3, x_204);
lean_ctor_set(x_212, 4, x_205);
lean_ctor_set(x_212, 5, x_208);
lean_ctor_set(x_212, 6, x_209);
lean_ctor_set(x_212, 7, x_210);
lean_ctor_set_uint8(x_212, sizeof(void*)*8, x_196);
lean_ctor_set_uint8(x_212, sizeof(void*)*8 + 1, x_206);
lean_ctor_set_uint8(x_212, sizeof(void*)*8 + 2, x_207);
lean_ctor_set_uint8(x_212, sizeof(void*)*8 + 3, x_211);
x_213 = 1;
lean_inc(x_9);
lean_inc(x_187);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_212);
x_214 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_213, x_196, x_212, x_5, x_6, x_7, x_187, x_9, x_200);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_unbox(x_215);
lean_dec(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
lean_dec(x_214);
lean_inc(x_9);
lean_inc(x_187);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_218 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault(x_4, x_5, x_6, x_7, x_187, x_9, x_217);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; uint8_t x_220; 
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_unbox(x_219);
lean_dec(x_219);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_218, 1);
lean_inc(x_221);
lean_dec(x_218);
lean_inc(x_9);
lean_inc(x_187);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_222 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_196, x_196, x_212, x_5, x_6, x_7, x_187, x_9, x_221);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; uint8_t x_224; 
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_unbox(x_223);
lean_dec(x_223);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; 
x_225 = lean_ctor_get(x_222, 1);
lean_inc(x_225);
lean_dec(x_222);
lean_inc(x_9);
lean_inc(x_187);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_226 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_196, x_213, x_4, x_5, x_6, x_7, x_187, x_9, x_225);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; uint8_t x_228; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_unbox(x_227);
lean_dec(x_227);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; 
x_229 = lean_ctor_get(x_226, 1);
lean_inc(x_229);
lean_dec(x_226);
x_230 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_reportStuckSyntheticMVars(x_4, x_5, x_6, x_7, x_187, x_9, x_229);
lean_dec(x_187);
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
lean_dec(x_226);
x_232 = lean_box(0);
x_233 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_232, x_4, x_5, x_6, x_7, x_187, x_9, x_231);
return x_233;
}
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_234 = lean_ctor_get(x_226, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_226, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_236 = x_226;
} else {
 lean_dec_ref(x_226);
 x_236 = lean_box(0);
}
if (lean_is_scalar(x_236)) {
 x_237 = lean_alloc_ctor(1, 2, 0);
} else {
 x_237 = x_236;
}
lean_ctor_set(x_237, 0, x_234);
lean_ctor_set(x_237, 1, x_235);
return x_237;
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_238 = lean_ctor_get(x_222, 1);
lean_inc(x_238);
lean_dec(x_222);
x_239 = lean_box(0);
x_240 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_239, x_4, x_5, x_6, x_7, x_187, x_9, x_238);
return x_240;
}
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_241 = lean_ctor_get(x_222, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_222, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_243 = x_222;
} else {
 lean_dec_ref(x_222);
 x_243 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_244 = lean_alloc_ctor(1, 2, 0);
} else {
 x_244 = x_243;
}
lean_ctor_set(x_244, 0, x_241);
lean_ctor_set(x_244, 1, x_242);
return x_244;
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
lean_dec(x_212);
x_245 = lean_ctor_get(x_218, 1);
lean_inc(x_245);
lean_dec(x_218);
x_246 = lean_box(0);
x_247 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_246, x_4, x_5, x_6, x_7, x_187, x_9, x_245);
return x_247;
}
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_212);
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_248 = lean_ctor_get(x_218, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_218, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_250 = x_218;
} else {
 lean_dec_ref(x_218);
 x_250 = lean_box(0);
}
if (lean_is_scalar(x_250)) {
 x_251 = lean_alloc_ctor(1, 2, 0);
} else {
 x_251 = x_250;
}
lean_ctor_set(x_251, 0, x_248);
lean_ctor_set(x_251, 1, x_249);
return x_251;
}
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_212);
x_252 = lean_ctor_get(x_214, 1);
lean_inc(x_252);
lean_dec(x_214);
x_253 = lean_box(0);
x_254 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_253, x_4, x_5, x_6, x_7, x_187, x_9, x_252);
return x_254;
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_212);
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_255 = lean_ctor_get(x_214, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_214, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_257 = x_214;
} else {
 lean_dec_ref(x_214);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(1, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_259 = lean_ctor_get(x_197, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_260 = x_197;
} else {
 lean_dec_ref(x_197);
 x_260 = lean_box(0);
}
x_261 = lean_box(0);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(0, 2, 0);
} else {
 x_262 = x_260;
}
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_259);
return x_262;
}
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_197, 1);
lean_inc(x_263);
lean_dec(x_197);
x_264 = lean_box(0);
x_265 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_264, x_4, x_5, x_6, x_7, x_187, x_9, x_263);
return x_265;
}
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_266 = lean_ctor_get(x_197, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_197, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_268 = x_197;
} else {
 lean_dec_ref(x_197);
 x_268 = lean_box(0);
}
if (lean_is_scalar(x_268)) {
 x_269 = lean_alloc_ctor(1, 2, 0);
} else {
 x_269 = x_268;
}
lean_ctor_set(x_269, 0, x_266);
lean_ctor_set(x_269, 1, x_267);
return x_269;
}
}
else
{
lean_object* x_270; lean_object* x_271; 
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_270 = lean_box(0);
if (lean_is_scalar(x_193)) {
 x_271 = lean_alloc_ctor(0, 2, 0);
} else {
 x_271 = x_193;
}
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_192);
return x_271;
}
}
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_getSomeSynthethicMVarsRef___rarg(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_7, 1);
x_15 = lean_ctor_get(x_7, 2);
x_16 = lean_ctor_get(x_7, 3);
x_17 = l_Lean_replaceRef(x_11, x_16);
lean_dec(x_16);
lean_dec(x_11);
lean_inc(x_15);
lean_inc(x_14);
lean_ctor_set(x_7, 3, x_17);
x_18 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1(x_14, x_1, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_14);
x_21 = l_Lean_maxRecDepthErrorMessage;
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_29 = lean_ctor_get(x_7, 0);
x_30 = lean_ctor_get(x_7, 1);
x_31 = lean_ctor_get(x_7, 2);
x_32 = lean_ctor_get(x_7, 3);
x_33 = lean_ctor_get(x_7, 4);
x_34 = lean_ctor_get(x_7, 5);
x_35 = lean_ctor_get(x_7, 6);
x_36 = lean_ctor_get(x_7, 7);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_7);
x_37 = l_Lean_replaceRef(x_11, x_32);
lean_dec(x_32);
lean_dec(x_11);
lean_inc(x_31);
lean_inc(x_30);
x_38 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_30);
lean_ctor_set(x_38, 2, x_31);
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 4, x_33);
lean_ctor_set(x_38, 5, x_34);
lean_ctor_set(x_38, 6, x_35);
lean_ctor_set(x_38, 7, x_36);
x_39 = lean_nat_dec_eq(x_30, x_31);
lean_dec(x_31);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_box(0);
x_41 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1(x_30, x_1, x_40, x_3, x_4, x_5, x_6, x_38, x_8, x_12);
lean_dec(x_30);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_30);
x_42 = l_Lean_maxRecDepthErrorMessage;
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_44, x_3, x_4, x_5, x_6, x_38, x_8, x_12);
lean_dec(x_8);
lean_dec(x_38);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_16 = x_4;
} else {
 lean_dec_ref(x_4);
 x_16 = lean_box(0);
}
x_23 = lean_mk_string("postpone");
lean_inc(x_3);
x_24 = lean_name_mk_string(x_3, x_23);
x_64 = lean_ctor_get(x_14, 0);
lean_inc(x_64);
x_65 = lean_mk_string("resuming ");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
lean_inc(x_64);
x_67 = l_Lean_mkMVar(x_64);
x_68 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_string("");
x_71 = l_Lean_stringToMessageData(x_70);
lean_dec(x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_closure((void*)(l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___lambda__1___boxed), 8, 1);
lean_closure_set(x_73, 0, x_72);
x_74 = lean_st_ref_get(x_11, x_12);
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
lean_dec(x_73);
lean_dec(x_64);
x_78 = lean_ctor_get(x_74, 1);
lean_inc(x_78);
lean_dec(x_74);
x_25 = x_78;
goto block_63;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_dec(x_74);
lean_inc(x_24);
x_80 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_unbox(x_81);
lean_dec(x_81);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_73);
lean_dec(x_64);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_dec(x_80);
x_25 = x_83;
goto block_63;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_80, 1);
lean_inc(x_84);
lean_dec(x_80);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_85 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__4___rarg(x_64, x_73, x_6, x_7, x_8, x_9, x_10, x_11, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_24);
x_88 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_24, x_86, x_6, x_7, x_8, x_9, x_10, x_11, x_87);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_25 = x_89;
goto block_63;
}
else
{
uint8_t x_90; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_90 = !lean_is_exclusive(x_85);
if (x_90 == 0)
{
return x_85;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_85, 0);
x_92 = lean_ctor_get(x_85, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_85);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
block_22:
{
if (x_17 == 0)
{
lean_dec(x_16);
lean_dec(x_14);
x_4 = x_15;
x_12 = x_18;
goto _start;
}
else
{
lean_object* x_20; 
if (lean_is_scalar(x_16)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_16;
}
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_5);
x_4 = x_15;
x_5 = x_20;
x_12 = x_18;
goto _start;
}
}
block_63:
{
lean_object* x_26; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_14);
x_26 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar(x_14, x_1, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_48 = lean_st_ref_get(x_11, x_28);
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
x_29 = x_53;
x_30 = x_52;
goto block_47;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
lean_inc(x_24);
x_55 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_unbox(x_56);
lean_dec(x_56);
x_29 = x_58;
x_30 = x_57;
goto block_47;
}
block_47:
{
if (x_29 == 0)
{
uint8_t x_31; 
lean_dec(x_24);
x_31 = lean_unbox(x_27);
lean_dec(x_27);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = 1;
x_17 = x_32;
x_18 = x_30;
goto block_22;
}
else
{
uint8_t x_33; 
x_33 = 0;
x_17 = x_33;
x_18 = x_30;
goto block_22;
}
}
else
{
uint8_t x_34; 
x_34 = lean_unbox(x_27);
lean_dec(x_27);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_35 = lean_mk_string("not ready yet");
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_24, x_37, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = 1;
x_17 = x_40;
x_18 = x_39;
goto block_22;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_41 = lean_mk_string("succeeded");
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_24, x_43, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = 0;
x_17 = x_46;
x_18 = x_45;
goto block_22;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_59 = !lean_is_exclusive(x_26);
if (x_59 == 0)
{
return x_26;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_26, 0);
x_61 = lean_ctor_get(x_26, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_26);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
}
}
lean_object* l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("false");
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_mk_string("true");
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_10 = lean_box(0);
x_11 = lean_mk_string("Elab");
x_12 = lean_name_mk_string(x_10, x_11);
x_128 = lean_mk_string("resuming");
lean_inc(x_12);
x_129 = lean_name_mk_string(x_12, x_128);
x_130 = lean_ctor_get(x_7, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_7, 1);
lean_inc(x_131);
x_132 = lean_ctor_get(x_7, 2);
lean_inc(x_132);
x_133 = lean_ctor_get(x_7, 3);
lean_inc(x_133);
x_134 = lean_ctor_get(x_7, 4);
lean_inc(x_134);
x_135 = lean_ctor_get(x_7, 5);
lean_inc(x_135);
x_136 = lean_ctor_get(x_7, 6);
lean_inc(x_136);
x_137 = lean_ctor_get(x_7, 7);
lean_inc(x_137);
x_138 = lean_box(0);
x_139 = l_Lean_replaceRef(x_138, x_133);
lean_dec(x_133);
lean_inc(x_130);
x_140 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_140, 0, x_130);
lean_ctor_set(x_140, 1, x_131);
lean_ctor_set(x_140, 2, x_132);
lean_ctor_set(x_140, 3, x_139);
lean_ctor_set(x_140, 4, x_134);
lean_ctor_set(x_140, 5, x_135);
lean_ctor_set(x_140, 6, x_136);
lean_ctor_set(x_140, 7, x_137);
lean_inc(x_129);
x_141 = l_Lean_checkTraceOption(x_130, x_129);
lean_dec(x_130);
if (x_141 == 0)
{
lean_dec(x_140);
lean_dec(x_129);
x_13 = x_9;
goto block_127;
}
else
{
lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_142 = lean_mk_string("resuming synthetic metavariables, mayPostpone: ");
x_143 = l_Lean_stringToMessageData(x_142);
lean_dec(x_142);
x_144 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_145 = l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(x_144);
x_146 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_146, 0, x_145);
x_147 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_147, 0, x_143);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_mk_string(", postponeOnError: ");
x_149 = l_Lean_stringToMessageData(x_148);
lean_dec(x_148);
x_150 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(x_1);
x_152 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_152, 0, x_151);
x_153 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_string("");
x_155 = l_Lean_stringToMessageData(x_154);
lean_dec(x_154);
x_156 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
x_157 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_129, x_156, x_3, x_4, x_5, x_6, x_140, x_8, x_9);
lean_dec(x_140);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_13 = x_158;
goto block_127;
}
block_127:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_14 = lean_st_ref_get(x_8, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_4, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_List_lengthAux___rarg(x_19, x_20);
x_22 = lean_st_ref_get(x_8, x_18);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_st_ref_take(x_4, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_25, 1);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_25, 1, x_29);
x_30 = lean_st_ref_set(x_4, x_25, x_26);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_List_reverse___rarg(x_19);
lean_inc(x_8);
lean_inc(x_4);
x_33 = l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1(x_1, x_2, x_12, x_32, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_st_ref_get(x_8, x_35);
lean_dec(x_8);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_st_ref_take(x_4, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = !lean_is_exclusive(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_34);
x_43 = l_List_append___rarg(x_42, x_34);
lean_ctor_set(x_39, 1, x_43);
x_44 = lean_st_ref_set(x_4, x_39, x_40);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
x_47 = l_List_lengthAux___rarg(x_34, x_20);
lean_dec(x_34);
x_48 = lean_nat_dec_eq(x_21, x_47);
lean_dec(x_47);
lean_dec(x_21);
if (x_48 == 0)
{
uint8_t x_49; lean_object* x_50; 
x_49 = 1;
x_50 = lean_box(x_49);
lean_ctor_set(x_44, 0, x_50);
return x_44;
}
else
{
uint8_t x_51; lean_object* x_52; 
x_51 = 0;
x_52 = lean_box(x_51);
lean_ctor_set(x_44, 0, x_52);
return x_44;
}
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_dec(x_44);
x_54 = l_List_lengthAux___rarg(x_34, x_20);
lean_dec(x_34);
x_55 = lean_nat_dec_eq(x_21, x_54);
lean_dec(x_54);
lean_dec(x_21);
if (x_55 == 0)
{
uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_56 = 1;
x_57 = lean_box(x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_53);
return x_58;
}
else
{
uint8_t x_59; lean_object* x_60; lean_object* x_61; 
x_59 = 0;
x_60 = lean_box(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_53);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_62 = lean_ctor_get(x_39, 0);
x_63 = lean_ctor_get(x_39, 1);
x_64 = lean_ctor_get(x_39, 2);
x_65 = lean_ctor_get(x_39, 3);
x_66 = lean_ctor_get(x_39, 4);
x_67 = lean_ctor_get(x_39, 5);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_39);
lean_inc(x_34);
x_68 = l_List_append___rarg(x_63, x_34);
x_69 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_69, 0, x_62);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_64);
lean_ctor_set(x_69, 3, x_65);
lean_ctor_set(x_69, 4, x_66);
lean_ctor_set(x_69, 5, x_67);
x_70 = lean_st_ref_set(x_4, x_69, x_40);
lean_dec(x_4);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_72 = x_70;
} else {
 lean_dec_ref(x_70);
 x_72 = lean_box(0);
}
x_73 = l_List_lengthAux___rarg(x_34, x_20);
lean_dec(x_34);
x_74 = lean_nat_dec_eq(x_21, x_73);
lean_dec(x_73);
lean_dec(x_21);
if (x_74 == 0)
{
uint8_t x_75; lean_object* x_76; lean_object* x_77; 
x_75 = 1;
x_76 = lean_box(x_75);
if (lean_is_scalar(x_72)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_72;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_71);
return x_77;
}
else
{
uint8_t x_78; lean_object* x_79; lean_object* x_80; 
x_78 = 0;
x_79 = lean_box(x_78);
if (lean_is_scalar(x_72)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_72;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_71);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_4);
x_81 = !lean_is_exclusive(x_33);
if (x_81 == 0)
{
return x_33;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_33, 0);
x_83 = lean_ctor_get(x_33, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_33);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_85 = lean_ctor_get(x_25, 0);
x_86 = lean_ctor_get(x_25, 2);
x_87 = lean_ctor_get(x_25, 3);
x_88 = lean_ctor_get(x_25, 4);
x_89 = lean_ctor_get(x_25, 5);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_25);
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_91, 0, x_85);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_91, 2, x_86);
lean_ctor_set(x_91, 3, x_87);
lean_ctor_set(x_91, 4, x_88);
lean_ctor_set(x_91, 5, x_89);
x_92 = lean_st_ref_set(x_4, x_91, x_26);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = l_List_reverse___rarg(x_19);
lean_inc(x_8);
lean_inc(x_4);
x_95 = l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1(x_1, x_2, x_12, x_94, x_90, x_3, x_4, x_5, x_6, x_7, x_8, x_93);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_st_ref_get(x_8, x_97);
lean_dec(x_8);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_st_ref_take(x_4, x_99);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_ctor_get(x_101, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_101, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_101, 2);
lean_inc(x_105);
x_106 = lean_ctor_get(x_101, 3);
lean_inc(x_106);
x_107 = lean_ctor_get(x_101, 4);
lean_inc(x_107);
x_108 = lean_ctor_get(x_101, 5);
lean_inc(x_108);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 lean_ctor_release(x_101, 2);
 lean_ctor_release(x_101, 3);
 lean_ctor_release(x_101, 4);
 lean_ctor_release(x_101, 5);
 x_109 = x_101;
} else {
 lean_dec_ref(x_101);
 x_109 = lean_box(0);
}
lean_inc(x_96);
x_110 = l_List_append___rarg(x_104, x_96);
if (lean_is_scalar(x_109)) {
 x_111 = lean_alloc_ctor(0, 6, 0);
} else {
 x_111 = x_109;
}
lean_ctor_set(x_111, 0, x_103);
lean_ctor_set(x_111, 1, x_110);
lean_ctor_set(x_111, 2, x_105);
lean_ctor_set(x_111, 3, x_106);
lean_ctor_set(x_111, 4, x_107);
lean_ctor_set(x_111, 5, x_108);
x_112 = lean_st_ref_set(x_4, x_111, x_102);
lean_dec(x_4);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_114 = x_112;
} else {
 lean_dec_ref(x_112);
 x_114 = lean_box(0);
}
x_115 = l_List_lengthAux___rarg(x_96, x_20);
lean_dec(x_96);
x_116 = lean_nat_dec_eq(x_21, x_115);
lean_dec(x_115);
lean_dec(x_21);
if (x_116 == 0)
{
uint8_t x_117; lean_object* x_118; lean_object* x_119; 
x_117 = 1;
x_118 = lean_box(x_117);
if (lean_is_scalar(x_114)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_114;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_113);
return x_119;
}
else
{
uint8_t x_120; lean_object* x_121; lean_object* x_122; 
x_120 = 0;
x_121 = lean_box(x_120);
if (lean_is_scalar(x_114)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_114;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_113);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_4);
x_123 = lean_ctor_get(x_95, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_95, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_125 = x_95;
} else {
 lean_dec_ref(x_95);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
}
}
lean_object* l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 3);
x_15 = l_Lean_replaceRef(x_11, x_14);
lean_dec(x_14);
lean_ctor_set(x_8, 3, x_15);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_11);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar(x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_11);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_12, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_12, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_12, 4);
lean_inc(x_22);
x_23 = lean_ctor_get(x_12, 5);
lean_inc(x_23);
lean_dec(x_12);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar(x_24, x_18, x_19, x_20, x_21, x_22, x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_25;
}
case 2:
{
lean_dec(x_11);
if (x_3 == 0)
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_dec(x_12);
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg___boxed), 8, 1);
lean_closure_set(x_29, 0, x_28);
x_30 = l_Lean_Elab_Term_withSavedContext___rarg(x_26, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_26);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_12, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_dec(x_12);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_alloc_closure((void*)(l_Lean_Elab_Term_runTactic), 9, 2);
lean_closure_set(x_34, 0, x_33);
lean_closure_set(x_34, 1, x_31);
x_35 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__5___lambda__2___boxed), 8, 0);
x_36 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_36, 0, x_34);
lean_closure_set(x_36, 1, x_35);
x_37 = l_Lean_Elab_Term_withSavedContext___rarg(x_32, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_32);
return x_37;
}
}
default: 
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_12, 0);
lean_inc(x_38);
lean_dec(x_12);
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed(x_38, x_11, x_39, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_41 = lean_ctor_get(x_8, 0);
x_42 = lean_ctor_get(x_8, 1);
x_43 = lean_ctor_get(x_8, 2);
x_44 = lean_ctor_get(x_8, 3);
x_45 = lean_ctor_get(x_8, 4);
x_46 = lean_ctor_get(x_8, 5);
x_47 = lean_ctor_get(x_8, 6);
x_48 = lean_ctor_get(x_8, 7);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_8);
x_49 = l_Lean_replaceRef(x_11, x_44);
lean_dec(x_44);
x_50 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_50, 0, x_41);
lean_ctor_set(x_50, 1, x_42);
lean_ctor_set(x_50, 2, x_43);
lean_ctor_set(x_50, 3, x_49);
lean_ctor_set(x_50, 4, x_45);
lean_ctor_set(x_50, 5, x_46);
lean_ctor_set(x_50, 6, x_47);
lean_ctor_set(x_50, 7, x_48);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_11);
x_51 = lean_ctor_get(x_1, 0);
lean_inc(x_51);
lean_dec(x_1);
x_52 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingInstMVar(x_51, x_4, x_5, x_6, x_7, x_50, x_9, x_10);
return x_52;
}
case 1:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_11);
x_53 = lean_ctor_get(x_12, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_12, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_12, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_12, 3);
lean_inc(x_56);
x_57 = lean_ctor_get(x_12, 4);
lean_inc(x_57);
x_58 = lean_ctor_get(x_12, 5);
lean_inc(x_58);
lean_dec(x_12);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
lean_dec(x_1);
x_60 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizePendingCoeInstMVar(x_59, x_53, x_54, x_55, x_56, x_57, x_58, x_4, x_5, x_6, x_7, x_50, x_9, x_10);
return x_60;
}
case 2:
{
lean_dec(x_11);
if (x_3 == 0)
{
lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_1);
x_61 = lean_ctor_get(x_12, 1);
lean_inc(x_61);
lean_dec(x_12);
x_62 = 0;
x_63 = lean_box(x_62);
x_64 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg___boxed), 8, 1);
lean_closure_set(x_64, 0, x_63);
x_65 = l_Lean_Elab_Term_withSavedContext___rarg(x_61, x_64, x_4, x_5, x_6, x_7, x_50, x_9, x_10);
lean_dec(x_61);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_66 = lean_ctor_get(x_12, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_12, 1);
lean_inc(x_67);
lean_dec(x_12);
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
lean_dec(x_1);
x_69 = lean_alloc_closure((void*)(l_Lean_Elab_Term_runTactic), 9, 2);
lean_closure_set(x_69, 0, x_68);
lean_closure_set(x_69, 1, x_66);
x_70 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Term_logUnassignedUsingErrorInfos___spec__5___lambda__2___boxed), 8, 0);
x_71 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_71, 0, x_69);
lean_closure_set(x_71, 1, x_70);
x_72 = l_Lean_Elab_Term_withSavedContext___rarg(x_67, x_71, x_4, x_5, x_6, x_7, x_50, x_9, x_10);
lean_dec(x_67);
return x_72;
}
}
default: 
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_12, 0);
lean_inc(x_73);
lean_dec(x_12);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
lean_dec(x_1);
x_75 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed(x_73, x_11, x_74, x_2, x_4, x_5, x_6, x_7, x_50, x_9, x_10);
return x_75;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_runTactic___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_box(0);
x_13 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_runTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_28; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_41 = lean_unsigned_to_nat(1u);
x_42 = l_Lean_Syntax_getArg(x_2, x_41);
x_43 = lean_st_ref_get(x_8, x_9);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_st_ref_take(x_6, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = !lean_is_exclusive(x_46);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_1);
x_50 = l_Lean_MetavarContext_instantiateMVarDeclMVars(x_49, x_1);
lean_ctor_set(x_46, 0, x_50);
x_51 = lean_st_ref_set(x_6, x_46, x_47);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic), 10, 1);
lean_closure_set(x_53, 0, x_42);
x_54 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg), 11, 2);
lean_closure_set(x_54, 0, x_2);
lean_closure_set(x_54, 1, x_53);
x_55 = lean_alloc_closure((void*)(l_Lean_Elab_Term_runTactic___lambda__1___boxed), 10, 0);
x_56 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_56, 0, x_54);
lean_closure_set(x_56, 1, x_55);
x_57 = lean_st_ref_get(x_8, x_52);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_st_ref_get(x_4, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_60, 5);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_ctor_get_uint8(x_61, sizeof(void*)*2);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_64 = l_Lean_Elab_Tactic_run(x_1, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_63);
x_10 = x_64;
goto block_27;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
lean_dec(x_59);
x_66 = l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withMacroExpansion___spec__2___rarg(x_4, x_5, x_6, x_7, x_8, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_69 = l_Lean_Elab_Tactic_run(x_1, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_st_ref_get(x_8, x_71);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_st_ref_take(x_4, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_75, 5);
lean_inc(x_76);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = !lean_is_exclusive(x_75);
if (x_78 == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_75, 5);
lean_dec(x_79);
x_80 = !lean_is_exclusive(x_76);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_81 = lean_ctor_get(x_76, 0);
x_82 = lean_ctor_get(x_76, 1);
x_83 = lean_ctor_get(x_82, 2);
lean_inc(x_83);
x_84 = lean_unsigned_to_nat(0u);
x_85 = lean_nat_dec_lt(x_84, x_83);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_1);
lean_ctor_set(x_76, 1, x_67);
x_86 = lean_st_ref_set(x_4, x_75, x_77);
x_87 = !lean_is_exclusive(x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_86, 0);
lean_dec(x_88);
x_89 = lean_box(0);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_70);
lean_ctor_set(x_90, 1, x_89);
lean_ctor_set(x_86, 0, x_90);
x_28 = x_86;
goto block_40;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_70);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
x_28 = x_94;
goto block_40;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_95 = lean_nat_sub(x_83, x_41);
lean_dec(x_83);
x_96 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_82, x_95);
lean_dec(x_95);
x_97 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_81, x_1, x_96);
lean_ctor_set(x_76, 1, x_67);
lean_ctor_set(x_76, 0, x_97);
x_98 = lean_st_ref_set(x_4, x_75, x_77);
x_99 = !lean_is_exclusive(x_98);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_98, 0);
lean_dec(x_100);
x_101 = lean_box(0);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_70);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_98, 0, x_102);
x_28 = x_98;
goto block_40;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_103 = lean_ctor_get(x_98, 1);
lean_inc(x_103);
lean_dec(x_98);
x_104 = lean_box(0);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_70);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_103);
x_28 = x_106;
goto block_40;
}
}
}
else
{
uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_107 = lean_ctor_get_uint8(x_76, sizeof(void*)*2);
x_108 = lean_ctor_get(x_76, 0);
x_109 = lean_ctor_get(x_76, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_76);
x_110 = lean_ctor_get(x_109, 2);
lean_inc(x_110);
x_111 = lean_unsigned_to_nat(0u);
x_112 = lean_nat_dec_lt(x_111, x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_110);
lean_dec(x_109);
lean_dec(x_1);
x_113 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_113, 0, x_108);
lean_ctor_set(x_113, 1, x_67);
lean_ctor_set_uint8(x_113, sizeof(void*)*2, x_107);
lean_ctor_set(x_75, 5, x_113);
x_114 = lean_st_ref_set(x_4, x_75, x_77);
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
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_70);
lean_ctor_set(x_118, 1, x_117);
if (lean_is_scalar(x_116)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_116;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_115);
x_28 = x_119;
goto block_40;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_120 = lean_nat_sub(x_110, x_41);
lean_dec(x_110);
x_121 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_109, x_120);
lean_dec(x_120);
x_122 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_108, x_1, x_121);
x_123 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_67);
lean_ctor_set_uint8(x_123, sizeof(void*)*2, x_107);
lean_ctor_set(x_75, 5, x_123);
x_124 = lean_st_ref_set(x_4, x_75, x_77);
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
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_70);
lean_ctor_set(x_128, 1, x_127);
if (lean_is_scalar(x_126)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_126;
}
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_125);
x_28 = x_129;
goto block_40;
}
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_130 = lean_ctor_get(x_75, 0);
x_131 = lean_ctor_get(x_75, 1);
x_132 = lean_ctor_get(x_75, 2);
x_133 = lean_ctor_get(x_75, 3);
x_134 = lean_ctor_get(x_75, 4);
lean_inc(x_134);
lean_inc(x_133);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_75);
x_135 = lean_ctor_get_uint8(x_76, sizeof(void*)*2);
x_136 = lean_ctor_get(x_76, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_76, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_138 = x_76;
} else {
 lean_dec_ref(x_76);
 x_138 = lean_box(0);
}
x_139 = lean_ctor_get(x_137, 2);
lean_inc(x_139);
x_140 = lean_unsigned_to_nat(0u);
x_141 = lean_nat_dec_lt(x_140, x_139);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_139);
lean_dec(x_137);
lean_dec(x_1);
if (lean_is_scalar(x_138)) {
 x_142 = lean_alloc_ctor(0, 2, 1);
} else {
 x_142 = x_138;
}
lean_ctor_set(x_142, 0, x_136);
lean_ctor_set(x_142, 1, x_67);
lean_ctor_set_uint8(x_142, sizeof(void*)*2, x_135);
x_143 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_143, 0, x_130);
lean_ctor_set(x_143, 1, x_131);
lean_ctor_set(x_143, 2, x_132);
lean_ctor_set(x_143, 3, x_133);
lean_ctor_set(x_143, 4, x_134);
lean_ctor_set(x_143, 5, x_142);
x_144 = lean_st_ref_set(x_4, x_143, x_77);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_146 = x_144;
} else {
 lean_dec_ref(x_144);
 x_146 = lean_box(0);
}
x_147 = lean_box(0);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_70);
lean_ctor_set(x_148, 1, x_147);
if (lean_is_scalar(x_146)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_146;
}
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_145);
x_28 = x_149;
goto block_40;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_150 = lean_nat_sub(x_139, x_41);
lean_dec(x_139);
x_151 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_137, x_150);
lean_dec(x_150);
x_152 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_136, x_1, x_151);
if (lean_is_scalar(x_138)) {
 x_153 = lean_alloc_ctor(0, 2, 1);
} else {
 x_153 = x_138;
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_67);
lean_ctor_set_uint8(x_153, sizeof(void*)*2, x_135);
x_154 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_154, 0, x_130);
lean_ctor_set(x_154, 1, x_131);
lean_ctor_set(x_154, 2, x_132);
lean_ctor_set(x_154, 3, x_133);
lean_ctor_set(x_154, 4, x_134);
lean_ctor_set(x_154, 5, x_153);
x_155 = lean_st_ref_set(x_4, x_154, x_77);
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_157 = x_155;
} else {
 lean_dec_ref(x_155);
 x_157 = lean_box(0);
}
x_158 = lean_box(0);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_70);
lean_ctor_set(x_159, 1, x_158);
if (lean_is_scalar(x_157)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_157;
}
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_156);
x_28 = x_160;
goto block_40;
}
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_161 = lean_ctor_get(x_69, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_69, 1);
lean_inc(x_162);
lean_dec(x_69);
x_163 = lean_st_ref_get(x_8, x_162);
x_164 = lean_ctor_get(x_163, 1);
lean_inc(x_164);
lean_dec(x_163);
x_165 = lean_st_ref_take(x_4, x_164);
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_166, 5);
lean_inc(x_167);
x_168 = lean_ctor_get(x_165, 1);
lean_inc(x_168);
lean_dec(x_165);
x_169 = !lean_is_exclusive(x_166);
if (x_169 == 0)
{
lean_object* x_170; uint8_t x_171; 
x_170 = lean_ctor_get(x_166, 5);
lean_dec(x_170);
x_171 = !lean_is_exclusive(x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_172 = lean_ctor_get(x_167, 0);
x_173 = lean_ctor_get(x_167, 1);
x_174 = lean_ctor_get(x_173, 2);
lean_inc(x_174);
x_175 = lean_unsigned_to_nat(0u);
x_176 = lean_nat_dec_lt(x_175, x_174);
if (x_176 == 0)
{
lean_object* x_177; uint8_t x_178; 
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_1);
lean_ctor_set(x_167, 1, x_67);
x_177 = lean_st_ref_set(x_4, x_166, x_168);
x_178 = !lean_is_exclusive(x_177);
if (x_178 == 0)
{
lean_object* x_179; 
x_179 = lean_ctor_get(x_177, 0);
lean_dec(x_179);
lean_ctor_set_tag(x_177, 1);
lean_ctor_set(x_177, 0, x_161);
x_28 = x_177;
goto block_40;
}
else
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_177, 1);
lean_inc(x_180);
lean_dec(x_177);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_161);
lean_ctor_set(x_181, 1, x_180);
x_28 = x_181;
goto block_40;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_182 = lean_nat_sub(x_174, x_41);
lean_dec(x_174);
x_183 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_173, x_182);
lean_dec(x_182);
x_184 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_172, x_1, x_183);
lean_ctor_set(x_167, 1, x_67);
lean_ctor_set(x_167, 0, x_184);
x_185 = lean_st_ref_set(x_4, x_166, x_168);
x_186 = !lean_is_exclusive(x_185);
if (x_186 == 0)
{
lean_object* x_187; 
x_187 = lean_ctor_get(x_185, 0);
lean_dec(x_187);
lean_ctor_set_tag(x_185, 1);
lean_ctor_set(x_185, 0, x_161);
x_28 = x_185;
goto block_40;
}
else
{
lean_object* x_188; lean_object* x_189; 
x_188 = lean_ctor_get(x_185, 1);
lean_inc(x_188);
lean_dec(x_185);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_161);
lean_ctor_set(x_189, 1, x_188);
x_28 = x_189;
goto block_40;
}
}
}
else
{
uint8_t x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_190 = lean_ctor_get_uint8(x_167, sizeof(void*)*2);
x_191 = lean_ctor_get(x_167, 0);
x_192 = lean_ctor_get(x_167, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_167);
x_193 = lean_ctor_get(x_192, 2);
lean_inc(x_193);
x_194 = lean_unsigned_to_nat(0u);
x_195 = lean_nat_dec_lt(x_194, x_193);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_1);
x_196 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_196, 0, x_191);
lean_ctor_set(x_196, 1, x_67);
lean_ctor_set_uint8(x_196, sizeof(void*)*2, x_190);
lean_ctor_set(x_166, 5, x_196);
x_197 = lean_st_ref_set(x_4, x_166, x_168);
x_198 = lean_ctor_get(x_197, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_199 = x_197;
} else {
 lean_dec_ref(x_197);
 x_199 = lean_box(0);
}
if (lean_is_scalar(x_199)) {
 x_200 = lean_alloc_ctor(1, 2, 0);
} else {
 x_200 = x_199;
 lean_ctor_set_tag(x_200, 1);
}
lean_ctor_set(x_200, 0, x_161);
lean_ctor_set(x_200, 1, x_198);
x_28 = x_200;
goto block_40;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_201 = lean_nat_sub(x_193, x_41);
lean_dec(x_193);
x_202 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_192, x_201);
lean_dec(x_201);
x_203 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_191, x_1, x_202);
x_204 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_67);
lean_ctor_set_uint8(x_204, sizeof(void*)*2, x_190);
lean_ctor_set(x_166, 5, x_204);
x_205 = lean_st_ref_set(x_4, x_166, x_168);
x_206 = lean_ctor_get(x_205, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_207 = x_205;
} else {
 lean_dec_ref(x_205);
 x_207 = lean_box(0);
}
if (lean_is_scalar(x_207)) {
 x_208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_208 = x_207;
 lean_ctor_set_tag(x_208, 1);
}
lean_ctor_set(x_208, 0, x_161);
lean_ctor_set(x_208, 1, x_206);
x_28 = x_208;
goto block_40;
}
}
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_209 = lean_ctor_get(x_166, 0);
x_210 = lean_ctor_get(x_166, 1);
x_211 = lean_ctor_get(x_166, 2);
x_212 = lean_ctor_get(x_166, 3);
x_213 = lean_ctor_get(x_166, 4);
lean_inc(x_213);
lean_inc(x_212);
lean_inc(x_211);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_166);
x_214 = lean_ctor_get_uint8(x_167, sizeof(void*)*2);
x_215 = lean_ctor_get(x_167, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_167, 1);
lean_inc(x_216);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_217 = x_167;
} else {
 lean_dec_ref(x_167);
 x_217 = lean_box(0);
}
x_218 = lean_ctor_get(x_216, 2);
lean_inc(x_218);
x_219 = lean_unsigned_to_nat(0u);
x_220 = lean_nat_dec_lt(x_219, x_218);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_218);
lean_dec(x_216);
lean_dec(x_1);
if (lean_is_scalar(x_217)) {
 x_221 = lean_alloc_ctor(0, 2, 1);
} else {
 x_221 = x_217;
}
lean_ctor_set(x_221, 0, x_215);
lean_ctor_set(x_221, 1, x_67);
lean_ctor_set_uint8(x_221, sizeof(void*)*2, x_214);
x_222 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_222, 0, x_209);
lean_ctor_set(x_222, 1, x_210);
lean_ctor_set(x_222, 2, x_211);
lean_ctor_set(x_222, 3, x_212);
lean_ctor_set(x_222, 4, x_213);
lean_ctor_set(x_222, 5, x_221);
x_223 = lean_st_ref_set(x_4, x_222, x_168);
x_224 = lean_ctor_get(x_223, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 lean_ctor_release(x_223, 1);
 x_225 = x_223;
} else {
 lean_dec_ref(x_223);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(1, 2, 0);
} else {
 x_226 = x_225;
 lean_ctor_set_tag(x_226, 1);
}
lean_ctor_set(x_226, 0, x_161);
lean_ctor_set(x_226, 1, x_224);
x_28 = x_226;
goto block_40;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_227 = lean_nat_sub(x_218, x_41);
lean_dec(x_218);
x_228 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_216, x_227);
lean_dec(x_227);
x_229 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_215, x_1, x_228);
if (lean_is_scalar(x_217)) {
 x_230 = lean_alloc_ctor(0, 2, 1);
} else {
 x_230 = x_217;
}
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_67);
lean_ctor_set_uint8(x_230, sizeof(void*)*2, x_214);
x_231 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_231, 0, x_209);
lean_ctor_set(x_231, 1, x_210);
lean_ctor_set(x_231, 2, x_211);
lean_ctor_set(x_231, 3, x_212);
lean_ctor_set(x_231, 4, x_213);
lean_ctor_set(x_231, 5, x_230);
x_232 = lean_st_ref_set(x_4, x_231, x_168);
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_234 = x_232;
} else {
 lean_dec_ref(x_232);
 x_234 = lean_box(0);
}
if (lean_is_scalar(x_234)) {
 x_235 = lean_alloc_ctor(1, 2, 0);
} else {
 x_235 = x_234;
 lean_ctor_set_tag(x_235, 1);
}
lean_ctor_set(x_235, 0, x_161);
lean_ctor_set(x_235, 1, x_233);
x_28 = x_235;
goto block_40;
}
}
}
}
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_236 = lean_ctor_get(x_46, 0);
x_237 = lean_ctor_get(x_46, 1);
x_238 = lean_ctor_get(x_46, 2);
x_239 = lean_ctor_get(x_46, 3);
lean_inc(x_239);
lean_inc(x_238);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_46);
lean_inc(x_1);
x_240 = l_Lean_MetavarContext_instantiateMVarDeclMVars(x_236, x_1);
x_241 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_237);
lean_ctor_set(x_241, 2, x_238);
lean_ctor_set(x_241, 3, x_239);
x_242 = lean_st_ref_set(x_6, x_241, x_47);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
x_244 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic), 10, 1);
lean_closure_set(x_244, 0, x_42);
x_245 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg), 11, 2);
lean_closure_set(x_245, 0, x_2);
lean_closure_set(x_245, 1, x_244);
x_246 = lean_alloc_closure((void*)(l_Lean_Elab_Term_runTactic___lambda__1___boxed), 10, 0);
x_247 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_247, 0, x_245);
lean_closure_set(x_247, 1, x_246);
x_248 = lean_st_ref_get(x_8, x_243);
x_249 = lean_ctor_get(x_248, 1);
lean_inc(x_249);
lean_dec(x_248);
x_250 = lean_st_ref_get(x_4, x_249);
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_251, 5);
lean_inc(x_252);
lean_dec(x_251);
x_253 = lean_ctor_get_uint8(x_252, sizeof(void*)*2);
lean_dec(x_252);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
x_254 = lean_ctor_get(x_250, 1);
lean_inc(x_254);
lean_dec(x_250);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_255 = l_Lean_Elab_Tactic_run(x_1, x_247, x_3, x_4, x_5, x_6, x_7, x_8, x_254);
x_10 = x_255;
goto block_27;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_256 = lean_ctor_get(x_250, 1);
lean_inc(x_256);
lean_dec(x_250);
x_257 = l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withMacroExpansion___spec__2___rarg(x_4, x_5, x_6, x_7, x_8, x_256);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_260 = l_Lean_Elab_Tactic_run(x_1, x_247, x_3, x_4, x_5, x_6, x_7, x_8, x_259);
if (lean_obj_tag(x_260) == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; uint8_t x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; uint8_t x_281; 
x_261 = lean_ctor_get(x_260, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_260, 1);
lean_inc(x_262);
lean_dec(x_260);
x_263 = lean_st_ref_get(x_8, x_262);
x_264 = lean_ctor_get(x_263, 1);
lean_inc(x_264);
lean_dec(x_263);
x_265 = lean_st_ref_take(x_4, x_264);
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_266, 5);
lean_inc(x_267);
x_268 = lean_ctor_get(x_265, 1);
lean_inc(x_268);
lean_dec(x_265);
x_269 = lean_ctor_get(x_266, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_266, 1);
lean_inc(x_270);
x_271 = lean_ctor_get(x_266, 2);
lean_inc(x_271);
x_272 = lean_ctor_get(x_266, 3);
lean_inc(x_272);
x_273 = lean_ctor_get(x_266, 4);
lean_inc(x_273);
if (lean_is_exclusive(x_266)) {
 lean_ctor_release(x_266, 0);
 lean_ctor_release(x_266, 1);
 lean_ctor_release(x_266, 2);
 lean_ctor_release(x_266, 3);
 lean_ctor_release(x_266, 4);
 lean_ctor_release(x_266, 5);
 x_274 = x_266;
} else {
 lean_dec_ref(x_266);
 x_274 = lean_box(0);
}
x_275 = lean_ctor_get_uint8(x_267, sizeof(void*)*2);
x_276 = lean_ctor_get(x_267, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_267, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_278 = x_267;
} else {
 lean_dec_ref(x_267);
 x_278 = lean_box(0);
}
x_279 = lean_ctor_get(x_277, 2);
lean_inc(x_279);
x_280 = lean_unsigned_to_nat(0u);
x_281 = lean_nat_dec_lt(x_280, x_279);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_1);
if (lean_is_scalar(x_278)) {
 x_282 = lean_alloc_ctor(0, 2, 1);
} else {
 x_282 = x_278;
}
lean_ctor_set(x_282, 0, x_276);
lean_ctor_set(x_282, 1, x_258);
lean_ctor_set_uint8(x_282, sizeof(void*)*2, x_275);
if (lean_is_scalar(x_274)) {
 x_283 = lean_alloc_ctor(0, 6, 0);
} else {
 x_283 = x_274;
}
lean_ctor_set(x_283, 0, x_269);
lean_ctor_set(x_283, 1, x_270);
lean_ctor_set(x_283, 2, x_271);
lean_ctor_set(x_283, 3, x_272);
lean_ctor_set(x_283, 4, x_273);
lean_ctor_set(x_283, 5, x_282);
x_284 = lean_st_ref_set(x_4, x_283, x_268);
x_285 = lean_ctor_get(x_284, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 lean_ctor_release(x_284, 1);
 x_286 = x_284;
} else {
 lean_dec_ref(x_284);
 x_286 = lean_box(0);
}
x_287 = lean_box(0);
x_288 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_288, 0, x_261);
lean_ctor_set(x_288, 1, x_287);
if (lean_is_scalar(x_286)) {
 x_289 = lean_alloc_ctor(0, 2, 0);
} else {
 x_289 = x_286;
}
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_285);
x_28 = x_289;
goto block_40;
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_290 = lean_nat_sub(x_279, x_41);
lean_dec(x_279);
x_291 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_277, x_290);
lean_dec(x_290);
x_292 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_276, x_1, x_291);
if (lean_is_scalar(x_278)) {
 x_293 = lean_alloc_ctor(0, 2, 1);
} else {
 x_293 = x_278;
}
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_258);
lean_ctor_set_uint8(x_293, sizeof(void*)*2, x_275);
if (lean_is_scalar(x_274)) {
 x_294 = lean_alloc_ctor(0, 6, 0);
} else {
 x_294 = x_274;
}
lean_ctor_set(x_294, 0, x_269);
lean_ctor_set(x_294, 1, x_270);
lean_ctor_set(x_294, 2, x_271);
lean_ctor_set(x_294, 3, x_272);
lean_ctor_set(x_294, 4, x_273);
lean_ctor_set(x_294, 5, x_293);
x_295 = lean_st_ref_set(x_4, x_294, x_268);
x_296 = lean_ctor_get(x_295, 1);
lean_inc(x_296);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 lean_ctor_release(x_295, 1);
 x_297 = x_295;
} else {
 lean_dec_ref(x_295);
 x_297 = lean_box(0);
}
x_298 = lean_box(0);
x_299 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_299, 0, x_261);
lean_ctor_set(x_299, 1, x_298);
if (lean_is_scalar(x_297)) {
 x_300 = lean_alloc_ctor(0, 2, 0);
} else {
 x_300 = x_297;
}
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_296);
x_28 = x_300;
goto block_40;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; uint8_t x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; 
x_301 = lean_ctor_get(x_260, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_260, 1);
lean_inc(x_302);
lean_dec(x_260);
x_303 = lean_st_ref_get(x_8, x_302);
x_304 = lean_ctor_get(x_303, 1);
lean_inc(x_304);
lean_dec(x_303);
x_305 = lean_st_ref_take(x_4, x_304);
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_306, 5);
lean_inc(x_307);
x_308 = lean_ctor_get(x_305, 1);
lean_inc(x_308);
lean_dec(x_305);
x_309 = lean_ctor_get(x_306, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_306, 1);
lean_inc(x_310);
x_311 = lean_ctor_get(x_306, 2);
lean_inc(x_311);
x_312 = lean_ctor_get(x_306, 3);
lean_inc(x_312);
x_313 = lean_ctor_get(x_306, 4);
lean_inc(x_313);
if (lean_is_exclusive(x_306)) {
 lean_ctor_release(x_306, 0);
 lean_ctor_release(x_306, 1);
 lean_ctor_release(x_306, 2);
 lean_ctor_release(x_306, 3);
 lean_ctor_release(x_306, 4);
 lean_ctor_release(x_306, 5);
 x_314 = x_306;
} else {
 lean_dec_ref(x_306);
 x_314 = lean_box(0);
}
x_315 = lean_ctor_get_uint8(x_307, sizeof(void*)*2);
x_316 = lean_ctor_get(x_307, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_307, 1);
lean_inc(x_317);
if (lean_is_exclusive(x_307)) {
 lean_ctor_release(x_307, 0);
 lean_ctor_release(x_307, 1);
 x_318 = x_307;
} else {
 lean_dec_ref(x_307);
 x_318 = lean_box(0);
}
x_319 = lean_ctor_get(x_317, 2);
lean_inc(x_319);
x_320 = lean_unsigned_to_nat(0u);
x_321 = lean_nat_dec_lt(x_320, x_319);
if (x_321 == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
lean_dec(x_319);
lean_dec(x_317);
lean_dec(x_1);
if (lean_is_scalar(x_318)) {
 x_322 = lean_alloc_ctor(0, 2, 1);
} else {
 x_322 = x_318;
}
lean_ctor_set(x_322, 0, x_316);
lean_ctor_set(x_322, 1, x_258);
lean_ctor_set_uint8(x_322, sizeof(void*)*2, x_315);
if (lean_is_scalar(x_314)) {
 x_323 = lean_alloc_ctor(0, 6, 0);
} else {
 x_323 = x_314;
}
lean_ctor_set(x_323, 0, x_309);
lean_ctor_set(x_323, 1, x_310);
lean_ctor_set(x_323, 2, x_311);
lean_ctor_set(x_323, 3, x_312);
lean_ctor_set(x_323, 4, x_313);
lean_ctor_set(x_323, 5, x_322);
x_324 = lean_st_ref_set(x_4, x_323, x_308);
x_325 = lean_ctor_get(x_324, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_324)) {
 lean_ctor_release(x_324, 0);
 lean_ctor_release(x_324, 1);
 x_326 = x_324;
} else {
 lean_dec_ref(x_324);
 x_326 = lean_box(0);
}
if (lean_is_scalar(x_326)) {
 x_327 = lean_alloc_ctor(1, 2, 0);
} else {
 x_327 = x_326;
 lean_ctor_set_tag(x_327, 1);
}
lean_ctor_set(x_327, 0, x_301);
lean_ctor_set(x_327, 1, x_325);
x_28 = x_327;
goto block_40;
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_328 = lean_nat_sub(x_319, x_41);
lean_dec(x_319);
x_329 = l_Std_PersistentArray_get_x21___at_Lean_Elab_withInfoHole___spec__1(x_317, x_328);
lean_dec(x_328);
x_330 = l_Std_PersistentHashMap_insert___at_Lean_Elab_assignInfoHoleId___spec__1(x_316, x_1, x_329);
if (lean_is_scalar(x_318)) {
 x_331 = lean_alloc_ctor(0, 2, 1);
} else {
 x_331 = x_318;
}
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_258);
lean_ctor_set_uint8(x_331, sizeof(void*)*2, x_315);
if (lean_is_scalar(x_314)) {
 x_332 = lean_alloc_ctor(0, 6, 0);
} else {
 x_332 = x_314;
}
lean_ctor_set(x_332, 0, x_309);
lean_ctor_set(x_332, 1, x_310);
lean_ctor_set(x_332, 2, x_311);
lean_ctor_set(x_332, 3, x_312);
lean_ctor_set(x_332, 4, x_313);
lean_ctor_set(x_332, 5, x_331);
x_333 = lean_st_ref_set(x_4, x_332, x_308);
x_334 = lean_ctor_get(x_333, 1);
lean_inc(x_334);
if (lean_is_exclusive(x_333)) {
 lean_ctor_release(x_333, 0);
 lean_ctor_release(x_333, 1);
 x_335 = x_333;
} else {
 lean_dec_ref(x_333);
 x_335 = lean_box(0);
}
if (lean_is_scalar(x_335)) {
 x_336 = lean_alloc_ctor(1, 2, 0);
} else {
 x_336 = x_335;
 lean_ctor_set_tag(x_336, 1);
}
lean_ctor_set(x_336, 0, x_301);
lean_ctor_set(x_336, 1, x_334);
x_28 = x_336;
goto block_40;
}
}
}
}
block_27:
{
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_List_isEmpty___rarg(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_free_object(x_10);
x_15 = l_Lean_Elab_Term_reportUnsolvedGoals(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_box(0);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = l_List_isEmpty___rarg(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Lean_Elab_Term_reportUnsolvedGoals(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
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
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
block_40:
{
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_31);
x_10 = x_28;
goto block_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_10 = x_35;
goto block_27;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_28);
if (x_36 == 0)
{
x_10 = x_28;
goto block_27;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_10 = x_39;
goto block_27;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___lambda__1(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_List_filterAuxM___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__1(x_13, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Std_fmt___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___spec__2(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVarsStep(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ReaderT_pure___at___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeSyntheticMVar(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_runTactic___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_runTactic___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_synthesizeSyntheticMVars(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_box(0);
x_10 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_8, x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefault(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = 1;
x_19 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_20 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_18, x_19, x_1, x_2, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_7 = x_21;
goto _start;
}
else
{
uint8_t x_23; 
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
else
{
uint8_t x_27; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_8);
if (x_27 == 0)
{
return x_8;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_8, 0);
x_29 = lean_ctor_get(x_8, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_8);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 1;
x_9 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_8, x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_47; lean_object* x_48; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_4, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_75 = lean_st_ref_get(x_8, x_14);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_st_ref_take(x_4, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = !lean_is_exclusive(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_78, 1);
lean_dec(x_81);
x_82 = lean_box(0);
lean_ctor_set(x_78, 1, x_82);
x_83 = lean_st_ref_set(x_4, x_78, x_79);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_85 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_89 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_88, x_3, x_4, x_5, x_6, x_7, x_8, x_87);
if (lean_obj_tag(x_89) == 0)
{
if (x_2 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___lambda__1(x_86, x_88, x_3, x_4, x_5, x_6, x_7, x_8, x_90);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_16 = x_92;
x_17 = x_93;
goto block_46;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_89, 1);
lean_inc(x_94);
lean_dec(x_89);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_95 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultLoop(x_3, x_4, x_5, x_6, x_7, x_8, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___lambda__1(x_86, x_96, x_3, x_4, x_5, x_6, x_7, x_8, x_97);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_96);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_16 = x_99;
x_17 = x_100;
goto block_46;
}
else
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_86);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_101 = lean_ctor_get(x_95, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
lean_dec(x_95);
x_47 = x_101;
x_48 = x_102;
goto block_74;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_86);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_103 = lean_ctor_get(x_89, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_89, 1);
lean_inc(x_104);
lean_dec(x_89);
x_47 = x_103;
x_48 = x_104;
goto block_74;
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_105 = lean_ctor_get(x_85, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_85, 1);
lean_inc(x_106);
lean_dec(x_85);
x_47 = x_105;
x_48 = x_106;
goto block_74;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_107 = lean_ctor_get(x_78, 0);
x_108 = lean_ctor_get(x_78, 2);
x_109 = lean_ctor_get(x_78, 3);
x_110 = lean_ctor_get(x_78, 4);
x_111 = lean_ctor_get(x_78, 5);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_78);
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_113, 0, x_107);
lean_ctor_set(x_113, 1, x_112);
lean_ctor_set(x_113, 2, x_108);
lean_ctor_set(x_113, 3, x_109);
lean_ctor_set(x_113, 4, x_110);
lean_ctor_set(x_113, 5, x_111);
x_114 = lean_st_ref_set(x_4, x_113, x_79);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
lean_dec(x_114);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_116 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_115);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_120 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_2, x_119, x_3, x_4, x_5, x_6, x_7, x_8, x_118);
if (lean_obj_tag(x_120) == 0)
{
if (x_2 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
lean_dec(x_120);
x_122 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___lambda__1(x_117, x_119, x_3, x_4, x_5, x_6, x_7, x_8, x_121);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_16 = x_123;
x_17 = x_124;
goto block_46;
}
else
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_120, 1);
lean_inc(x_125);
lean_dec(x_120);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_126 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_synthesizeUsingDefaultLoop(x_3, x_4, x_5, x_6, x_7, x_8, x_125);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___lambda__1(x_117, x_127, x_3, x_4, x_5, x_6, x_7, x_8, x_128);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_127);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_16 = x_130;
x_17 = x_131;
goto block_46;
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_117);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_132 = lean_ctor_get(x_126, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_126, 1);
lean_inc(x_133);
lean_dec(x_126);
x_47 = x_132;
x_48 = x_133;
goto block_74;
}
}
}
else
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_117);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_134 = lean_ctor_get(x_120, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_120, 1);
lean_inc(x_135);
lean_dec(x_120);
x_47 = x_134;
x_48 = x_135;
goto block_74;
}
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_136 = lean_ctor_get(x_116, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_116, 1);
lean_inc(x_137);
lean_dec(x_116);
x_47 = x_136;
x_48 = x_137;
goto block_74;
}
}
block_46:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_st_ref_get(x_8, x_17);
lean_dec(x_8);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_take(x_4, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_21, 1);
x_25 = l_List_append___rarg(x_24, x_15);
lean_ctor_set(x_21, 1, x_25);
x_26 = lean_st_ref_set(x_4, x_21, x_22);
lean_dec(x_4);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_16, 0);
lean_inc(x_29);
lean_dec(x_16);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_ctor_get(x_16, 0);
lean_inc(x_31);
lean_dec(x_16);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_33 = lean_ctor_get(x_21, 0);
x_34 = lean_ctor_get(x_21, 1);
x_35 = lean_ctor_get(x_21, 2);
x_36 = lean_ctor_get(x_21, 3);
x_37 = lean_ctor_get(x_21, 4);
x_38 = lean_ctor_get(x_21, 5);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_21);
x_39 = l_List_append___rarg(x_34, x_15);
x_40 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_35);
lean_ctor_set(x_40, 3, x_36);
lean_ctor_set(x_40, 4, x_37);
lean_ctor_set(x_40, 5, x_38);
x_41 = lean_st_ref_set(x_4, x_40, x_22);
lean_dec(x_4);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_43 = x_41;
} else {
 lean_dec_ref(x_41);
 x_43 = lean_box(0);
}
x_44 = lean_ctor_get(x_16, 0);
lean_inc(x_44);
lean_dec(x_16);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
return x_45;
}
}
block_74:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_49 = lean_st_ref_get(x_8, x_48);
lean_dec(x_8);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_take(x_4, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_52, 1);
x_56 = l_List_append___rarg(x_55, x_15);
lean_ctor_set(x_52, 1, x_56);
x_57 = lean_st_ref_set(x_4, x_52, x_53);
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set_tag(x_57, 1);
lean_ctor_set(x_57, 0, x_47);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_47);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_62 = lean_ctor_get(x_52, 0);
x_63 = lean_ctor_get(x_52, 1);
x_64 = lean_ctor_get(x_52, 2);
x_65 = lean_ctor_get(x_52, 3);
x_66 = lean_ctor_get(x_52, 4);
x_67 = lean_ctor_get(x_52, 5);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_52);
x_68 = l_List_append___rarg(x_63, x_15);
x_69 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_69, 0, x_62);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_64);
lean_ctor_set(x_69, 3, x_65);
lean_ctor_set(x_69, 4, x_66);
lean_ctor_set(x_69, 5, x_67);
x_70 = lean_st_ref_set(x_4, x_69, x_53);
lean_dec(x_4);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_72 = x_70;
} else {
 lean_dec_ref(x_70);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
 lean_ctor_set_tag(x_73, 1);
}
lean_ctor_set(x_73, 0, x_47);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_withSynthesize___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_3, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_withSynthesize___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box(x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withSynthesize___rarg___lambda__1___boxed), 10, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_apply_3(x_1, lean_box(0), x_6, x_3);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_withSynthesize(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withSynthesize___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_withSynthesize___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Lean_Elab_Term_withSynthesize___rarg___lambda__1(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_withSynthesize___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Elab_Term_withSynthesize___rarg(x_1, x_2, x_3, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = 1;
x_11 = lean_box(x_10);
x_12 = lean_box(x_10);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_11);
lean_closure_set(x_13, 3, x_12);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_7, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_15);
lean_dec(x_1);
lean_ctor_set(x_7, 3, x_16);
x_17 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_13, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Meta_instantiateMVars(x_19, x_5, x_6, x_7, x_8, x_20);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
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
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
x_28 = lean_ctor_get(x_7, 2);
x_29 = lean_ctor_get(x_7, 3);
x_30 = lean_ctor_get(x_7, 4);
x_31 = lean_ctor_get(x_7, 5);
x_32 = lean_ctor_get(x_7, 6);
x_33 = lean_ctor_get(x_7, 7);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_34 = l_Lean_replaceRef(x_1, x_29);
lean_dec(x_29);
lean_dec(x_1);
x_35 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_27);
lean_ctor_set(x_35, 2, x_28);
lean_ctor_set(x_35, 3, x_34);
lean_ctor_set(x_35, 4, x_30);
lean_ctor_set(x_35, 5, x_31);
lean_ctor_set(x_35, 6, x_32);
lean_ctor_set(x_35, 7, x_33);
x_36 = 0;
lean_inc(x_8);
lean_inc(x_35);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_13, x_36, x_3, x_4, x_5, x_6, x_35, x_8, x_9);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_instantiateMVars(x_38, x_5, x_6, x_35, x_8, x_39);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_35);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_41 = lean_ctor_get(x_37, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_43 = x_37;
} else {
 lean_dec_ref(x_37);
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
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_ForEachExpr(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_SyntheticMVars(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
