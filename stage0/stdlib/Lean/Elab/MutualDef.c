// Lean compiler output
// Module: Lean.Elab.MutualDef
// Imports: Init Lean.Parser.Term Lean.Meta.Closure Lean.Meta.Check Lean.Elab.Command Lean.Elab.DefView Lean.Elab.PreDefinition Lean.Elab.DeclarationRange
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
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1;
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___closed__1;
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getAllUserLevelNames(lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_run_match__1(lean_object*);
extern lean_object* l_Lean_Parser_Command_protected___elambda__1___closed__1;
lean_object* lean_erase_macro_scopes(lean_object*);
extern lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__1;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabCommand___spec__11___rarg(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__5;
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLetRecsToLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_instInhabitedNameSet;
lean_object* l_Lean_Elab_Command_elabMutualDef(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
extern lean_object* l_Lean_Parser_Term_letEqnsDecl___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_MutualClosure_getKindForLetRecs(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_ClosureState_exprArgs___default;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__4;
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Elab_Term_resolveName___spec__2(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2(lean_object*, size_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified___rarg(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_main(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Elab_Term_MutualClosure_FixPoint_State_modified___default;
extern lean_object* l_Lean_identKind___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__2(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabMutualDef___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___spec__1(lean_object*, size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__3;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__2;
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__1;
extern lean_object* l_Lean_declRangeExt;
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__4(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__2;
extern lean_object* l_Lean_Meta_Simp_simp_simpArrow___closed__11;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__1(lean_object*, size_t, size_t);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_declValEqns___elambda__1___closed__2;
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_getEvenElems___rarg___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__11;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__5;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_ClosureState_newLocalDecls___default;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified___rarg(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars___spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(size_t, size_t, lean_object*);
extern lean_object* l_Lean_Parser_Command_example___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__1;
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__22___closed__2;
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isExample(uint8_t);
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__1(lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_whereDecls_formatter___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___boxed(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap___rarg(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutualDef___lambda__1(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_letPatDecl___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__1;
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop(lean_object*);
extern lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed(lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_runTermElabM___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__3(lean_object*, size_t, size_t);
lean_object* l_Lean_Elab_levelMVarToParamPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkLambda(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_mkDeclName___rarg___closed__2;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_groupKind___closed__2;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at_Lean_Elab_Command_elabMutualDef___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getKindForLetRecs___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_pushLetRecs(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__2;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___lambda__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__4;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__2(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_pushLetRecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectMVars(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabCommand___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__2(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabMutualDef___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickCmp(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_run_match__1___rarg(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutualDef___boxed__const__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__6;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1;
lean_object* l_List_findSome_x3f___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply___boxed(lean_object*, lean_object*);
lean_object* l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__5;
lean_object* l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___at_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__3;
lean_object* l_List_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutualDef___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_LocalContext_erase___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__2;
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__1(lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint_match__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check_match__1(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__2(lean_object*, size_t, size_t);
extern lean_object* l_Lean_docStringExt;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_throwError___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Array_reverse___rarg(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getAllUserLevelNames___boxed(lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Command_elabCommand___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__2;
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___spec__1(lean_object*, size_t, size_t);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor_match__1(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__3;
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_collectUsedFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_State_usedFVarsMap___default;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__1;
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__4;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_71____closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__3;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap_match__1(lean_object*);
lean_object* l_Lean_replaceFVarIdAtLocalDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_MetavarContext_getDelayedRoot(lean_object*, lean_object*);
lean_object* l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__4;
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_pushMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_feraseIdx___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__1;
size_t l_USize_mod(size_t, size_t);
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_ClosureState_localDecls___default;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getKindForLetRecs___spec__1(lean_object*, size_t, size_t);
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addPreDefinitions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
uint8_t l_List_elem___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__2(lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__4;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply_match__1(lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed_match__1(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__17;
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__2;
lean_object* l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_instInhabitedDefViewElabHeader___closed__1;
lean_object* l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_mkDefViewOfInstance___spec__6___rarg(lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(lean_object*);
extern lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes_match__1(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__2___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__3;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___boxed(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedModifiers___closed__1;
lean_object* l_Std_PersistentArray_toArray___rarg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_erase___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__3;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__2;
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed__const__1;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__3;
extern lean_object* l_Lean_instInhabitedExpr___closed__1;
uint8_t l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem(lean_object*);
lean_object* l_Lean_Elab_Term_withDeclName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkForall(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified___boxed(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf_match__1(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMutualDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_pushMain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at___private_Lean_Class_0__Lean_checkOutParam___spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___spec__1(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__2;
lean_object* l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_Elab_Term_MutualClosure_pushMain___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_ClosureState_newLetDecls___default;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___boxed(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_MkInstanceName_main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified___rarg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_erase___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_Elab_Term_MutualClosure_pushMain___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___at_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__1;
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at_Lean_Elab_Command_elabMutualDef___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___boxed(lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__3;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__1(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabMutualDef___spec__10(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
extern lean_object* l_Lean_CollectMVars_instInhabitedState___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__2(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__2(lean_object*);
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14133____closed__7;
lean_object* l_Lean_Elab_Term_addAutoBoundImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux_match__1(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1;
extern lean_object* l_Lean_Parser_Command_private___elambda__1___closed__2;
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_CollectFVars_instInhabitedState___closed__1;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor_match__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_DefView___hyg_1253____closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__8;
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkDefView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabMutualDef___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified___boxed(lean_object*);
lean_object* l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
lean_object* l_Lean_Elab_instInhabitedDefViewElabHeader;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1___boxed(lean_object**);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__2;
uint8_t l_Lean_Elab_isFreshInstanceName(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars_match__1(lean_object*);
lean_object* l_Lean_Elab_fixLevelParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__2;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_mkDefViewOfInstance___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___boxed__const__1;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__14;
uint8_t l_List_beq___at_Lean_OpenDecl_instToStringOpenDecl___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationSelectionRef(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_withAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_getKindForLetRecs___boxed(lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap___boxed(lean_object*);
lean_object* l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8___boxed(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_run(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified___boxed(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_letRecDecl___elambda__1___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_ReplaceImpl_initCache;
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply(lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__20___closed__2;
static lean_object* _init_l_Lean_Elab_instInhabitedDefViewElabHeader___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_4 = 0;
x_5 = lean_box(0);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_instInhabitedExpr___closed__1;
x_8 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_5);
lean_ctor_set(x_8, 4, x_1);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
lean_ctor_set(x_8, 7, x_2);
lean_ctor_set_uint8(x_8, sizeof(void*)*8, x_4);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefViewElabHeader() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_instInhabitedDefViewElabHeader___closed__1;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cannot mix partial and non-partial definitions");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; 
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_12 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 2);
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_19; 
x_19 = 1;
x_13 = x_19;
goto block_18;
}
else
{
uint8_t x_20; 
x_20 = 0;
x_13 = x_20;
goto block_18;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_21; 
x_21 = 0;
x_13 = x_21;
goto block_18;
}
else
{
uint8_t x_22; 
x_22 = 1;
x_13 = x_22;
goto block_18;
}
}
block_18:
{
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__2;
x_15 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cannot mix computable and non-computable definitions");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_19; 
x_19 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1(x_1, x_2, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_box(0);
x_11 = x_23;
goto block_18;
}
}
else
{
uint8_t x_24; 
x_24 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_box(0);
x_11 = x_25;
goto block_18;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1(x_1, x_2, x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_27;
}
}
block_18:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_11);
x_12 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__2;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cannot mix unsafe and safe definitions");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 3);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2(x_1, x_2, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_box(0);
x_10 = x_22;
goto block_17;
}
}
else
{
uint8_t x_23; 
x_23 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 3);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_box(0);
x_10 = x_24;
goto block_17;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2(x_1, x_2, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
}
block_17:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_10);
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__2;
x_12 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cannot mix theorems and definitions");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; 
x_11 = l_Lean_Elab_DefKind_isTheorem(x_1);
x_12 = l_Lean_Elab_DefKind_isTheorem(x_2);
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_19; 
x_19 = 1;
x_13 = x_19;
goto block_18;
}
else
{
uint8_t x_20; 
x_20 = 0;
x_13 = x_20;
goto block_18;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_21; 
x_21 = 0;
x_13 = x_21;
goto block_18;
}
else
{
uint8_t x_22; 
x_22 = 1;
x_13 = x_22;
goto block_18;
}
}
block_18:
{
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__2;
x_15 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cannot mix examples and definitions");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_18; uint8_t x_19; 
x_18 = l_Lean_Elab_DefKind_isExample(x_1);
x_19 = l_Lean_Elab_DefKind_isExample(x_2);
if (x_18 == 0)
{
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1(x_1, x_2, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_box(0);
x_10 = x_22;
goto block_17;
}
}
else
{
if (x_19 == 0)
{
lean_object* x_23; 
x_23 = lean_box(0);
x_10 = x_23;
goto block_17;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1(x_1, x_2, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_25;
}
}
block_17:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_10);
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__2;
x_12 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_13;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers(x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_16 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds(x_15, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_4);
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
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("universe parameters mismatch");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid mutually recursive definitions, ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; 
x_16 = lean_array_fget(x_1, x_12);
x_17 = lean_ctor_get(x_2, 4);
x_18 = lean_ctor_get(x_16, 4);
lean_inc(x_18);
x_19 = l_List_beq___at_Lean_OpenDecl_instToStringOpenDecl___spec__1(x_17, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_78; 
x_78 = 0;
x_20 = x_78;
goto block_77;
}
else
{
uint8_t x_79; 
x_79 = 1;
x_20 = x_79;
goto block_77;
}
block_77:
{
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_16);
x_21 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__2;
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_24, 1);
x_27 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_KernelException_toMessageData___closed__15;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_24, 1, x_30);
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_24, 0);
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_24);
x_33 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_Lean_KernelException_toMessageData___closed__15;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_22, 0, x_37);
return x_22;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_38 = lean_ctor_get(x_22, 0);
x_39 = lean_ctor_get(x_22, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_22);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
x_43 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
x_45 = l_Lean_KernelException_toMessageData___closed__15;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
if (lean_is_scalar(x_42)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_42;
}
lean_ctor_set(x_47, 0, x_40);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_39);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_box(0);
x_50 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__1(x_2, x_16, x_49, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_16);
if (lean_obj_tag(x_50) == 0)
{
return x_50;
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_52, 1);
x_55 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_Lean_KernelException_toMessageData___closed__15;
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_52, 1, x_58);
return x_50;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_52, 0);
x_60 = lean_ctor_get(x_52, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_52);
x_61 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = l_Lean_KernelException_toMessageData___closed__15;
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_50, 0, x_65);
return x_50;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_66 = lean_ctor_get(x_50, 0);
x_67 = lean_ctor_get(x_50, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_50);
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
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
x_71 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4;
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_69);
x_73 = l_Lean_KernelException_toMessageData___closed__15;
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
if (lean_is_scalar(x_70)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_70;
}
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_67);
return x_76;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'unsafe' subsumes 'partial'");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2(x_1, x_2, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__2;
x_19 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'noncomputable partial' is not allowed");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 2);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3(x_1, x_2, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__2;
x_19 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'noncomputable unsafe' is not allowed");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4(x_1, x_2, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__2;
x_19 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'theorem' subsumes 'noncomputable', code is not generated for theorems");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; 
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_12 = l_Lean_Elab_DefKind_isTheorem(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*2 + 1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5(x_1, x_2, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__2;
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'partial' theorems are not allowed, 'partial' is a code generation directive");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; 
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_12 = l_Lean_Elab_DefKind_isTheorem(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*2 + 2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6(x_1, x_2, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__2;
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'unsafe' theorems are not allowed");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; 
x_10 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_11 = l_Lean_Elab_DefKind_isTheorem(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7(x_1, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get_uint8(x_14, sizeof(void*)*2 + 3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7(x_1, x_2, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__2;
x_19 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to infer definition type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__3;
x_11 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_1, x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Environment_contains(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_14);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
lean_inc(x_2);
x_11 = l_Lean_mkPrivateName(x_2, x_1);
lean_inc(x_2);
x_12 = l_Lean_Environment_contains(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_12);
x_13 = l_Lean_Environment_contains(x_12, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__2(x_1, x_12, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_1);
x_16 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
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
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_1);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_10; 
lean_inc(x_2);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
case 1:
{
lean_object* x_19; 
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_8, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_protectedExt;
lean_inc(x_2);
x_26 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_25, x_24, x_2);
x_27 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
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
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_st_ref_get(x_8, x_9);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_mkPrivateName(x_39, x_2);
lean_inc(x_40);
x_41 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_40);
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
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
lean_inc(x_2);
x_12 = l_Lean_Name_append(x_1, x_2);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_5);
x_14 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__3(x_13, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_box(x_13);
if (lean_obj_tag(x_15) == 1)
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_16; 
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_name_mk_string(x_19, x_18);
x_21 = l_Lean_Name_append(x_20, x_2);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_14, 0, x_22);
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = lean_name_mk_string(x_26, x_25);
x_28 = l_Lean_Name_append(x_27, x_2);
lean_dec(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_dec(x_14);
x_32 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2;
x_33 = l_Lean_throwError___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__5(x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
lean_ctor_set(x_14, 0, x_36);
return x_14;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_14, 0);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_14);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_2);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_14);
if (x_41 == 0)
{
return x_14;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_14, 0);
x_43 = lean_ctor_get(x_14, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_14);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_inc(x_3);
x_11 = l_Lean_extractMacroScopes(x_3);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Name_isAtomic(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Elab_isFreshInstanceName(x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_1);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_3);
x_16 = l_Lean_Elab_mkDeclName___rarg___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1(x_1, x_3, x_2, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
x_27 = lean_box(0);
x_28 = l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1(x_1, x_3, x_2, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_28;
}
}
}
lean_object* l_Lean_addDocString___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = l_Lean_docStringExt;
x_16 = l_Lean_MapDeclarationExtension_insert___rarg(x_15, x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_16);
x_17 = lean_st_ref_set(x_8, x_11, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
x_26 = lean_ctor_get(x_11, 2);
x_27 = lean_ctor_get(x_11, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_28 = l_Lean_docStringExt;
x_29 = l_Lean_MapDeclarationExtension_insert___rarg(x_28, x_24, x_1, x_2);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = lean_st_ref_set(x_8, x_30, x_12);
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
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_addDocString___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__7(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__2;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = l_Lean_Syntax_getId(x_13);
x_15 = l_List_elem___at_Lean_NameHashSet_insert___spec__2(x_14, x_4);
if (x_15 == 0)
{
lean_object* x_16; size_t x_17; size_t x_18; 
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_4);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_9, 3);
x_22 = l_Lean_replaceRef(x_13, x_21);
lean_dec(x_21);
lean_dec(x_13);
lean_ctor_set(x_9, 3, x_22);
x_23 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
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
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_28 = lean_ctor_get(x_9, 0);
x_29 = lean_ctor_get(x_9, 1);
x_30 = lean_ctor_get(x_9, 2);
x_31 = lean_ctor_get(x_9, 3);
x_32 = lean_ctor_get(x_9, 4);
x_33 = lean_ctor_get(x_9, 5);
x_34 = lean_ctor_get(x_9, 6);
x_35 = lean_ctor_get(x_9, 7);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_9);
x_36 = l_Lean_replaceRef(x_13, x_31);
lean_dec(x_31);
lean_dec(x_13);
x_37 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set(x_37, 1, x_29);
lean_ctor_set(x_37, 2, x_30);
lean_ctor_set(x_37, 3, x_36);
lean_ctor_set(x_37, 4, x_32);
lean_ctor_set(x_37, 5, x_33);
lean_ctor_set(x_37, 6, x_34);
lean_ctor_set(x_37, 7, x_35);
x_38 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8(x_14, x_5, x_6, x_7, x_8, x_37, x_10, x_11);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
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
}
else
{
lean_object* x_43; 
lean_dec(x_9);
lean_dec(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_4);
lean_ctor_set(x_43, 1, x_11);
return x_43;
}
}
}
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_10, 1);
x_15 = lean_ctor_get(x_10, 2);
x_16 = lean_ctor_get(x_10, 3);
x_17 = lean_ctor_get(x_10, 4);
x_18 = lean_ctor_get(x_10, 5);
x_19 = lean_ctor_get(x_10, 6);
x_20 = lean_ctor_get(x_10, 7);
x_21 = l_Lean_replaceRef(x_1, x_16);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_22 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_21);
lean_ctor_set(x_22, 4, x_17);
lean_ctor_set(x_22, 5, x_18);
lean_ctor_set(x_22, 6, x_19);
lean_ctor_set(x_22, 7, x_20);
lean_inc(x_6);
x_23 = l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2(x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_22, x_11, x_12);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_3, 0);
lean_inc(x_28);
lean_dec(x_3);
lean_inc(x_26);
x_29 = l_Lean_addDocString_x27___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__6(x_26, x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_25);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_26);
lean_ctor_set(x_32, 2, x_5);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_5);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_23);
if (x_36 == 0)
{
return x_23;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_23, 0);
x_38 = lean_ctor_get(x_23, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_23);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Elab_expandDeclIdCore(x_3);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Syntax_isNone(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_14, x_16);
lean_dec(x_14);
x_18 = l_Lean_Syntax_getArgs(x_17);
lean_dec(x_17);
x_19 = lean_array_get_size(x_18);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_19);
if (x_21 == 0)
{
lean_object* x_39; 
lean_dec(x_19);
lean_dec(x_18);
x_39 = l_Array_empty___closed__1;
x_22 = x_39;
goto block_38;
}
else
{
uint8_t x_40; 
x_40 = lean_nat_dec_le(x_19, x_19);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_19);
lean_dec(x_18);
x_41 = l_Array_empty___closed__1;
x_22 = x_41;
goto block_38;
}
else
{
size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = 0;
x_43 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_44 = l_Array_getEvenElems___rarg___closed__1;
x_45 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_18, x_42, x_43, x_44);
lean_dec(x_18);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_22 = x_46;
goto block_38;
}
}
block_38:
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_array_get_size(x_22);
x_24 = lean_nat_dec_lt(x_20, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_23);
lean_dec(x_22);
x_25 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_23, x_23);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_23);
lean_dec(x_22);
x_27 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_27;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; 
x_28 = 0;
x_29 = lean_usize_of_nat(x_23);
lean_dec(x_23);
lean_inc(x_9);
lean_inc(x_5);
x_30 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__9(x_22, x_28, x_29, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_22);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(x_3, x_1, x_4, x_13, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_32);
lean_dec(x_9);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_30, 0);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_30);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
}
else
{
lean_object* x_47; 
lean_dec(x_14);
x_47 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_47;
}
}
}
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = l_Lean_Syntax_getPos_x3f(x_1, x_10);
x_12 = l_Lean_Syntax_getTailPos_x3f(x_1, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_FileMap_toPosition(x_9, x_13);
lean_inc(x_14);
x_15 = l_Lean_FileMap_leanPosToLspPos(x_9, x_14);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_16);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
x_21 = l_Lean_FileMap_toPosition(x_9, x_20);
lean_dec(x_20);
lean_inc(x_21);
x_22 = l_Lean_FileMap_leanPosToLspPos(x_9, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_11, 0);
lean_inc(x_26);
lean_dec(x_11);
x_27 = l_Lean_FileMap_toPosition(x_9, x_26);
lean_dec(x_26);
lean_inc(x_27);
x_28 = l_Lean_FileMap_leanPosToLspPos(x_9, x_27);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_29);
lean_inc(x_27);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_8);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
lean_dec(x_12);
x_34 = l_Lean_FileMap_toPosition(x_9, x_33);
lean_dec(x_33);
lean_inc(x_34);
x_35 = l_Lean_FileMap_leanPosToLspPos(x_9, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_32);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_8);
return x_38;
}
}
}
}
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = l_Lean_declRangeExt;
x_16 = l_Lean_MapDeclarationExtension_insert___rarg(x_15, x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_16);
x_17 = lean_st_ref_set(x_8, x_11, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
x_26 = lean_ctor_get(x_11, 2);
x_27 = lean_ctor_get(x_11, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_28 = l_Lean_declRangeExt;
x_29 = l_Lean_MapDeclarationExtension_insert___rarg(x_28, x_24, x_1, x_2);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = lean_st_ref_set(x_8, x_30, x_12);
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
lean_object* l_Lean_Elab_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_2);
x_10 = l_Lean_Syntax_getKind(x_2);
x_11 = l_Lean_Parser_Command_example___elambda__1___closed__2;
x_12 = lean_name_eq(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_getDeclarationSelectionRef(x_2);
x_17 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__12(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
return x_23;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_20 = lean_array_get_size(x_2);
x_21 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_21, 0, x_3);
lean_ctor_set(x_21, 1, x_4);
lean_ctor_set(x_21, 2, x_5);
lean_ctor_set(x_21, 3, x_6);
lean_ctor_set(x_21, 4, x_7);
lean_ctor_set(x_21, 5, x_20);
lean_ctor_set(x_21, 6, x_8);
lean_ctor_set(x_21, 7, x_9);
lean_ctor_set_uint8(x_21, sizeof(void*)*8, x_19);
x_22 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check(x_10, x_21, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_21);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nwhen the resulting type of a declaration is explicitly provided, all holes (e.g., `_`) in the header are resolved before the declaration body is processed");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_17 = 0;
x_18 = lean_box(0);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_19 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_17, x_18, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = 1;
lean_inc(x_12);
lean_inc(x_1);
x_22 = l_Lean_Meta_mkForallFVars(x_1, x_9, x_17, x_21, x_12, x_13, x_14, x_15, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_10, 5);
lean_inc(x_25);
x_26 = l_Std_PersistentArray_toArray___rarg(x_25);
lean_dec(x_25);
lean_inc(x_12);
x_27 = l_Lean_Meta_mkForallFVars(x_26, x_23, x_17, x_21, x_12, x_13, x_14, x_15, x_24);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_30 = l_Lean_Meta_instantiateMVars(x_28, x_12, x_13, x_14, x_15, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_12);
lean_inc(x_10);
x_33 = l_Lean_Elab_Term_addAutoBoundImplicits(x_1, x_10, x_11, x_12, x_13, x_14, x_15, x_32);
lean_dec(x_1);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Elab_Term_getLevelNames___rarg(x_11, x_12, x_13, x_14, x_15, x_35);
x_37 = lean_ctor_get(x_2, 4);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1(x_2, x_34, x_3, x_4, x_5, x_6, x_38, x_31, x_7, x_8, x_18, x_10, x_11, x_12, x_13, x_14, x_15, x_39);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_34);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_dec(x_36);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_31);
x_43 = l_Lean_Meta_getMVars(x_31, x_12, x_13, x_14, x_15, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__3;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_47 = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(x_44, x_46, x_10, x_11, x_12, x_13, x_14, x_15, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1(x_2, x_34, x_3, x_4, x_5, x_6, x_41, x_31, x_7, x_8, x_18, x_10, x_11, x_12, x_13, x_14, x_15, x_48);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_34);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_41);
lean_dec(x_34);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_47);
if (x_50 == 0)
{
return x_47;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_47, 0);
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_47);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_41);
lean_dec(x_34);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_43);
if (x_54 == 0)
{
return x_43;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_43, 0);
x_56 = lean_ctor_get(x_43, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_43);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = !lean_is_exclusive(x_33);
if (x_58 == 0)
{
return x_33;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_33, 0);
x_60 = lean_ctor_get(x_33, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_33);
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
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_30);
if (x_62 == 0)
{
return x_30;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_30, 0);
x_64 = lean_ctor_get(x_30, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_30);
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
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_27);
if (x_66 == 0)
{
return x_27;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_27, 0);
x_68 = lean_ctor_get(x_27, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_27);
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
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_22);
if (x_70 == 0)
{
return x_22;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_22, 0);
x_72 = lean_ctor_get(x_22, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_22);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_19);
if (x_74 == 0)
{
return x_19;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_19, 0);
x_76 = lean_ctor_get(x_19, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_19);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 5);
lean_inc(x_16);
x_17 = l_Lean_mkHole(x_16);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Elab_Term_elabType(x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_16);
x_21 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo(x_19, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2(x_7, x_1, x_2, x_3, x_4, x_5, x_16, x_6, x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_22);
lean_dec(x_1);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_16);
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
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_1, 5);
lean_inc(x_28);
x_29 = lean_ctor_get(x_15, 0);
lean_inc(x_29);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_29);
x_30 = l_Lean_Elab_Term_elabType(x_29, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo(x_31, x_29, x_8, x_9, x_10, x_11, x_12, x_13, x_32);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2(x_7, x_1, x_2, x_3, x_4, x_5, x_28, x_6, x_31, x_8, x_9, x_10, x_11, x_12, x_13, x_34);
lean_dec(x_1);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_29);
lean_dec(x_28);
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
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_9, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 3);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 4);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 5);
lean_inc(x_21);
x_22 = lean_ctor_get(x_9, 6);
lean_inc(x_22);
x_23 = lean_ctor_get(x_9, 7);
lean_inc(x_23);
x_24 = l_Lean_replaceRef(x_15, x_19);
lean_dec(x_19);
lean_inc(x_20);
x_25 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_17);
lean_ctor_set(x_25, 2, x_18);
lean_ctor_set(x_25, 3, x_24);
lean_ctor_set(x_25, 4, x_20);
lean_ctor_set(x_25, 5, x_21);
lean_ctor_set(x_25, 6, x_22);
lean_ctor_set(x_25, 7, x_23);
x_26 = l_Lean_Elab_Term_getLevelNames___rarg(x_6, x_7, x_8, x_25, x_10, x_11);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_14, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_25);
lean_inc(x_5);
lean_inc(x_30);
x_31 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1(x_20, x_27, x_29, x_30, x_5, x_6, x_7, x_8, x_25, x_10, x_28);
lean_dec(x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 2);
lean_inc(x_36);
lean_dec(x_32);
lean_inc(x_15);
lean_inc(x_35);
x_37 = l_Lean_Elab_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__10(x_35, x_15, x_5, x_6, x_7, x_8, x_25, x_10, x_33);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
x_40 = 2;
lean_inc(x_10);
lean_inc(x_25);
lean_inc(x_5);
lean_inc(x_35);
x_41 = l_Lean_Elab_Term_applyAttributesAt(x_35, x_39, x_40, x_5, x_6, x_7, x_8, x_25, x_10, x_38);
lean_dec(x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_14, 3);
lean_inc(x_43);
x_44 = l_Lean_Syntax_getArgs(x_43);
lean_dec(x_43);
lean_inc(x_4);
lean_inc(x_35);
x_45 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__3___boxed), 14, 6);
lean_closure_set(x_45, 0, x_14);
lean_closure_set(x_45, 1, x_15);
lean_closure_set(x_45, 2, x_30);
lean_closure_set(x_45, 3, x_34);
lean_closure_set(x_45, 4, x_35);
lean_closure_set(x_45, 5, x_4);
x_46 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_46, 0, x_44);
lean_closure_set(x_46, 1, x_45);
x_47 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 2);
lean_closure_set(x_47, 0, x_36);
lean_closure_set(x_47, 1, x_46);
x_48 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicit___rarg), 8, 1);
lean_closure_set(x_48, 0, x_47);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_49 = l_Lean_Elab_Term_withDeclName___rarg(x_35, x_48, x_5, x_6, x_7, x_8, x_25, x_10, x_42);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_array_push(x_4, x_50);
x_53 = 1;
x_54 = x_3 + x_53;
x_3 = x_54;
x_4 = x_52;
x_11 = x_51;
goto _start;
}
else
{
uint8_t x_56; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_56 = !lean_is_exclusive(x_49);
if (x_56 == 0)
{
return x_49;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_49, 0);
x_58 = lean_ctor_get(x_49, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_49);
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
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_60 = !lean_is_exclusive(x_41);
if (x_60 == 0)
{
return x_41;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_41, 0);
x_62 = lean_ctor_get(x_41, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_41);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_64 = !lean_is_exclusive(x_31);
if (x_64 == 0)
{
return x_31;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_31, 0);
x_66 = lean_ctor_get(x_31, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_31);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = 0;
x_12 = l_Array_empty___closed__1;
x_13 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13(x_1, x_10, x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_mkDeclName___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_addDocString___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString_x27___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__9(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_expandDeclId___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_addDeclarationRanges___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1___boxed(lean_object** _args) {
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
x_19 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_8);
lean_dec(x_2);
return x_17;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_1, x_13);
x_15 = lean_array_push(x_2, x_5);
x_16 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg(x_3, x_4, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_15 = lean_array_fget(x_1, x_3);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 6);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg___lambda__1___boxed), 12, 4);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_4);
lean_closure_set(x_18, 2, x_1);
lean_closure_set(x_18, 3, x_2);
x_19 = 4;
x_20 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(x_16, x_19, x_17, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_empty___closed__1;
x_12 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls_loop___rarg(x_1, x_2, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls___rarg), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("patterns are not allowed here");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("attributes are 'where' elements are currently not supported here");
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 < x_2;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_1);
x_8 = x_4;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_10 = lean_array_uget(x_4, x_3);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_4, x_3, x_11);
x_21 = x_10;
x_22 = l_Lean_Parser_Term_letRecDecl___elambda__1___closed__1;
lean_inc(x_1);
x_23 = lean_name_mk_string(x_1, x_22);
lean_inc(x_21);
x_24 = l_Lean_Syntax_isOfKind(x_21, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_1);
x_25 = lean_box(1);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = l_Lean_Syntax_getArg(x_21, x_11);
x_28 = l_Lean_nullKind;
x_29 = l_Lean_Syntax_isNodeOf(x_27, x_28, x_11);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_1);
x_30 = lean_box(1);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_6);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = l_Lean_Syntax_getArg(x_21, x_32);
lean_inc(x_33);
x_34 = l_Lean_Syntax_isNodeOf(x_33, x_28, x_32);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = l_Lean_Syntax_isNodeOf(x_33, x_28, x_11);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_1);
x_36 = lean_box(1);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_6);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = lean_unsigned_to_nat(2u);
x_39 = l_Lean_Syntax_getArg(x_21, x_38);
x_40 = l_myMacro____x40_Init_Notation___hyg_14569____closed__3;
lean_inc(x_1);
x_41 = lean_name_mk_string(x_1, x_40);
lean_inc(x_39);
x_42 = l_Lean_Syntax_isOfKind(x_39, x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_1);
x_43 = lean_box(1);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_6);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = l_Lean_Syntax_getArg(x_39, x_11);
lean_dec(x_39);
x_46 = l_Lean_Parser_Term_letPatDecl___closed__1;
lean_inc(x_1);
x_47 = lean_name_mk_string(x_1, x_46);
lean_inc(x_45);
x_48 = l_Lean_Syntax_isOfKind(x_45, x_47);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_21);
x_49 = l_Lean_Parser_Term_letEqnsDecl___closed__1;
lean_inc(x_1);
x_50 = lean_name_mk_string(x_1, x_49);
lean_inc(x_45);
x_51 = l_Lean_Syntax_isOfKind(x_45, x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_52 = l_myMacro____x40_Init_Notation___hyg_14569____closed__5;
lean_inc(x_1);
x_53 = lean_name_mk_string(x_1, x_52);
lean_inc(x_45);
x_54 = l_Lean_Syntax_isOfKind(x_45, x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_45);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_1);
x_55 = lean_box(1);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_6);
return x_56;
}
else
{
x_13 = x_45;
x_14 = x_6;
goto block_20;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_inc(x_5);
x_57 = l_Lean_Elab_Term_expandLetEqnsDecl(x_45, x_5, x_6);
lean_dec(x_45);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_13 = x_58;
x_14 = x_59;
goto block_20;
}
}
else
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
lean_dec(x_45);
lean_dec(x_12);
lean_dec(x_1);
x_60 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__1;
x_61 = l_Lean_Macro_throwErrorAt___rarg(x_21, x_60, x_5, x_6);
lean_dec(x_21);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
return x_61;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_61);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_12);
x_66 = l_Lean_Syntax_getArg(x_33, x_11);
lean_dec(x_33);
x_67 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__8;
lean_inc(x_1);
x_68 = lean_name_mk_string(x_1, x_67);
x_69 = l_Lean_Syntax_isOfKind(x_66, x_68);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_1);
x_70 = lean_box(1);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_6);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_72 = lean_unsigned_to_nat(2u);
x_73 = l_Lean_Syntax_getArg(x_21, x_72);
x_74 = l_myMacro____x40_Init_Notation___hyg_14569____closed__3;
x_75 = lean_name_mk_string(x_1, x_74);
x_76 = l_Lean_Syntax_isOfKind(x_73, x_75);
lean_dec(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_21);
lean_dec(x_5);
x_77 = lean_box(1);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_6);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_79 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__2;
x_80 = l_Lean_Macro_throwErrorAt___rarg(x_21, x_79, x_5, x_6);
lean_dec(x_21);
x_81 = !lean_is_exclusive(x_80);
if (x_81 == 0)
{
return x_80;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_80, 0);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_80);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
}
}
block_20:
{
size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
x_15 = 1;
x_16 = x_3 + x_15;
x_17 = x_13;
x_18 = lean_array_uset(x_12, x_3, x_17);
x_3 = x_16;
x_4 = x_18;
x_6 = x_14;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__3;
lean_inc(x_1);
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__5;
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_15 = lean_array_push(x_14, x_2);
x_16 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_17 = lean_array_push(x_15, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_22 = lean_array_push(x_21, x_18);
x_23 = lean_array_push(x_22, x_20);
x_24 = lean_array_push(x_23, x_4);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_11);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_7, 0, x_25);
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__3;
lean_inc(x_1);
x_29 = lean_name_mk_string(x_1, x_28);
x_30 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__5;
x_31 = lean_name_mk_string(x_1, x_30);
x_32 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_33 = lean_array_push(x_32, x_2);
x_34 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_35 = lean_array_push(x_33, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_26);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_40 = lean_array_push(x_39, x_36);
x_41 = lean_array_push(x_40, x_38);
x_42 = lean_array_push(x_41, x_4);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_29);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_27);
return x_44;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_3);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_3);
lean_inc(x_5);
x_12 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1(x_1, x_2, x_5, x_5, x_7, x_8);
lean_dec(x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_7, x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_1);
x_17 = lean_name_mk_string(x_1, x_16);
lean_inc(x_14);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_myMacro____x40_Init_Notation___hyg_12862____closed__11;
lean_inc(x_1);
x_20 = lean_name_mk_string(x_1, x_19);
x_21 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_22 = x_3;
x_23 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_21, x_4, x_22);
x_24 = x_23;
x_25 = l_Array_empty___closed__1;
x_26 = l_Array_append___rarg(x_25, x_24);
lean_dec(x_24);
x_27 = l_Lean_nullKind___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_14);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_32 = lean_array_push(x_31, x_28);
x_33 = lean_array_push(x_32, x_30);
lean_inc(x_5);
x_34 = lean_array_push(x_33, x_5);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_20);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_37 = lean_array_push(x_36, x_18);
x_38 = lean_array_push(x_37, x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_17);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1(x_1, x_2, x_5, x_39, x_7, x_15);
lean_dec(x_5);
return x_40;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_unsigned_to_nat(4u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_8, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_ctor_set(x_8, 5, x_14);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(x_2, x_3, x_4, x_5, x_11, x_15, x_8, x_9);
lean_dec(x_8);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
lean_dec(x_7);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_8, x_9);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
lean_inc(x_2);
x_22 = lean_name_mk_string(x_2, x_21);
x_23 = l_prec_x28___x29___closed__3;
lean_inc(x_19);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_myMacro____x40_Init_Notation___hyg_14133____closed__7;
lean_inc(x_2);
x_26 = lean_name_mk_string(x_2, x_25);
x_27 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_19);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_30 = lean_array_push(x_29, x_28);
x_31 = lean_array_push(x_30, x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_34 = lean_array_push(x_33, x_32);
x_35 = l_Lean_nullKind___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_array_push(x_29, x_11);
x_38 = lean_array_push(x_37, x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_35);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_prec_x28___x29___closed__7;
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_19);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_43 = lean_array_push(x_42, x_24);
x_44 = lean_array_push(x_43, x_39);
x_45 = lean_array_push(x_44, x_41);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_22);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_box(0);
x_48 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(x_2, x_3, x_4, x_5, x_46, x_47, x_8, x_20);
lean_dec(x_8);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_8, 0);
x_50 = lean_ctor_get(x_8, 1);
x_51 = lean_ctor_get(x_8, 2);
x_52 = lean_ctor_get(x_8, 3);
x_53 = lean_ctor_get(x_8, 4);
x_54 = lean_ctor_get(x_8, 5);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_8);
x_55 = l_Lean_replaceRef(x_1, x_54);
lean_dec(x_54);
x_56 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_56, 0, x_49);
lean_ctor_set(x_56, 1, x_50);
lean_ctor_set(x_56, 2, x_51);
lean_ctor_set(x_56, 3, x_52);
lean_ctor_set(x_56, 4, x_53);
lean_ctor_set(x_56, 5, x_55);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_box(0);
x_58 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(x_2, x_3, x_4, x_5, x_11, x_57, x_56, x_9);
lean_dec(x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_59 = lean_ctor_get(x_7, 0);
lean_inc(x_59);
lean_dec(x_7);
x_60 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_56, x_9);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
lean_inc(x_2);
x_64 = lean_name_mk_string(x_2, x_63);
x_65 = l_prec_x28___x29___closed__3;
lean_inc(x_61);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_myMacro____x40_Init_Notation___hyg_14133____closed__7;
lean_inc(x_2);
x_68 = lean_name_mk_string(x_2, x_67);
x_69 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_61);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_61);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_72 = lean_array_push(x_71, x_70);
x_73 = lean_array_push(x_72, x_59);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_68);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_76 = lean_array_push(x_75, x_74);
x_77 = l_Lean_nullKind___closed__2;
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_array_push(x_71, x_11);
x_80 = lean_array_push(x_79, x_78);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_77);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_prec_x28___x29___closed__7;
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_61);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_85 = lean_array_push(x_84, x_66);
x_86 = lean_array_push(x_85, x_81);
x_87 = lean_array_push(x_86, x_83);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_64);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_box(0);
x_90 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(x_2, x_3, x_4, x_5, x_88, x_89, x_56, x_62);
lean_dec(x_56);
return x_90;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2(lean_object* x_1, size_t x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = x_5;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_11 = lean_array_uget(x_5, x_4);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_5, x_4, x_12);
x_22 = x_11;
x_23 = l_myMacro____x40_Init_Notation___hyg_14569____closed__5;
lean_inc(x_1);
x_24 = lean_name_mk_string(x_1, x_23);
lean_inc(x_22);
x_25 = l_Lean_Syntax_isOfKind(x_22, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_26 = lean_box(1);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_7);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = l_Lean_Syntax_getArg(x_22, x_12);
x_29 = l_Lean_identKind___closed__2;
lean_inc(x_28);
x_30 = l_Lean_Syntax_isOfKind(x_28, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_31 = lean_box(1);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_7);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_unsigned_to_nat(1u);
x_34 = l_Lean_Syntax_getArg(x_22, x_33);
x_35 = l_Lean_Syntax_getArgs(x_34);
lean_dec(x_34);
x_36 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__1;
x_37 = l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(x_35, x_36);
lean_dec(x_35);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_38 = lean_box(1);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_7);
return x_39;
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_unsigned_to_nat(2u);
x_43 = l_Lean_Syntax_getArg(x_22, x_42);
x_44 = l_Lean_Syntax_isNone(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = l_Lean_nullKind;
lean_inc(x_43);
x_46 = l_Lean_Syntax_isNodeOf(x_43, x_45, x_33);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_43);
lean_free_object(x_37);
lean_dec(x_41);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_47 = lean_box(1);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_7);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = l_Lean_Syntax_getArg(x_43, x_12);
lean_dec(x_43);
x_50 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__4;
lean_inc(x_1);
x_51 = lean_name_mk_string(x_1, x_50);
lean_inc(x_49);
x_52 = l_Lean_Syntax_isOfKind(x_49, x_51);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_49);
lean_free_object(x_37);
lean_dec(x_41);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_53 = lean_box(1);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_7);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = l_Lean_Syntax_getArg(x_49, x_33);
lean_dec(x_49);
lean_ctor_set(x_37, 0, x_55);
x_56 = lean_box(0);
lean_inc(x_6);
lean_inc(x_1);
x_57 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(x_22, x_1, x_28, x_41, x_2, x_56, x_37, x_6, x_7);
lean_dec(x_22);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_14 = x_58;
x_15 = x_59;
goto block_21;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_43);
lean_free_object(x_37);
x_60 = lean_box(0);
x_61 = lean_box(0);
lean_inc(x_6);
lean_inc(x_1);
x_62 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(x_22, x_1, x_28, x_41, x_2, x_61, x_60, x_6, x_7);
lean_dec(x_22);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_14 = x_63;
x_15 = x_64;
goto block_21;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_37, 0);
lean_inc(x_65);
lean_dec(x_37);
x_66 = lean_unsigned_to_nat(2u);
x_67 = l_Lean_Syntax_getArg(x_22, x_66);
x_68 = l_Lean_Syntax_isNone(x_67);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; 
x_69 = l_Lean_nullKind;
lean_inc(x_67);
x_70 = l_Lean_Syntax_isNodeOf(x_67, x_69, x_33);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_67);
lean_dec(x_65);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_71 = lean_box(1);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_7);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_73 = l_Lean_Syntax_getArg(x_67, x_12);
lean_dec(x_67);
x_74 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__4;
lean_inc(x_1);
x_75 = lean_name_mk_string(x_1, x_74);
lean_inc(x_73);
x_76 = l_Lean_Syntax_isOfKind(x_73, x_75);
lean_dec(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_73);
lean_dec(x_65);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_1);
x_77 = lean_box(1);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_7);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = l_Lean_Syntax_getArg(x_73, x_33);
lean_dec(x_73);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_box(0);
lean_inc(x_6);
lean_inc(x_1);
x_82 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(x_22, x_1, x_28, x_65, x_2, x_81, x_80, x_6, x_7);
lean_dec(x_22);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_14 = x_83;
x_15 = x_84;
goto block_21;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_67);
x_85 = lean_box(0);
x_86 = lean_box(0);
lean_inc(x_6);
lean_inc(x_1);
x_87 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(x_22, x_1, x_28, x_65, x_2, x_86, x_85, x_6, x_7);
lean_dec(x_22);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_14 = x_88;
x_15 = x_89;
goto block_21;
}
}
}
}
}
block_21:
{
size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = 1;
x_17 = x_4 + x_16;
x_18 = x_14;
x_19 = lean_array_uset(x_13, x_4, x_18);
x_4 = x_17;
x_5 = x_19;
x_7 = x_15;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
lean_inc(x_1);
x_13 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_15 = lean_array_push(x_14, x_13);
lean_inc(x_2);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_18 = lean_array_push(x_17, x_11);
x_19 = lean_array_push(x_18, x_16);
x_20 = l_Lean_groupKind___closed__2;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = 1;
x_23 = x_4 + x_22;
x_24 = x_21;
x_25 = lean_array_uset(x_10, x_4, x_24);
x_4 = x_23;
x_5 = x_25;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Term_whereDecls_formatter___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_11 = l_Lean_Elab_Term_expandWhereDecls___closed__1;
x_12 = l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(x_10, x_11);
lean_dec(x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_13 = lean_box(1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_array_get_size(x_15);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = x_15;
x_20 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_21 = lean_box_usize(x_17);
x_22 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1;
x_23 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___boxed), 6, 4);
lean_closure_set(x_23, 0, x_20);
lean_closure_set(x_23, 1, x_21);
lean_closure_set(x_23, 2, x_22);
lean_closure_set(x_23, 3, x_19);
x_24 = x_23;
lean_inc(x_2);
x_25 = lean_apply_2(x_24, x_2, x_3);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_array_get_size(x_26);
x_29 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_30 = x_26;
x_31 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1;
x_32 = lean_box_usize(x_29);
x_33 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1;
x_34 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___boxed), 7, 5);
lean_closure_set(x_34, 0, x_20);
lean_closure_set(x_34, 1, x_31);
lean_closure_set(x_34, 2, x_32);
lean_closure_set(x_34, 3, x_33);
lean_closure_set(x_34, 4, x_30);
x_35 = x_34;
lean_inc(x_2);
x_36 = lean_apply_2(x_35, x_2, x_27);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_38);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; size_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__4;
lean_inc(x_41);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_array_get_size(x_37);
x_45 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_46 = x_37;
x_47 = l_Lean_nullKind___closed__2;
lean_inc(x_41);
x_48 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3(x_41, x_47, x_45, x_18, x_46);
x_49 = x_48;
x_50 = l_Array_empty___closed__1;
x_51 = l_Array_append___rarg(x_50, x_49);
lean_dec(x_49);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_47);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_41);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_56 = lean_array_push(x_55, x_43);
x_57 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_58 = lean_array_push(x_56, x_57);
x_59 = lean_array_push(x_58, x_52);
x_60 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__17;
x_61 = lean_array_push(x_59, x_60);
x_62 = lean_array_push(x_61, x_57);
x_63 = lean_array_push(x_62, x_54);
x_64 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__2;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
lean_ctor_set(x_39, 0, x_65);
return x_39;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; size_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_66 = lean_ctor_get(x_39, 0);
x_67 = lean_ctor_get(x_39, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_39);
x_68 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__4;
lean_inc(x_66);
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_get_size(x_37);
x_71 = lean_usize_of_nat(x_70);
lean_dec(x_70);
x_72 = x_37;
x_73 = l_Lean_nullKind___closed__2;
lean_inc(x_66);
x_74 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3(x_66, x_73, x_71, x_18, x_72);
x_75 = x_74;
x_76 = l_Array_empty___closed__1;
x_77 = l_Array_append___rarg(x_76, x_75);
lean_dec(x_75);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_66);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_82 = lean_array_push(x_81, x_69);
x_83 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_84 = lean_array_push(x_82, x_83);
x_85 = lean_array_push(x_84, x_78);
x_86 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__17;
x_87 = lean_array_push(x_85, x_86);
x_88 = lean_array_push(x_87, x_83);
x_89 = lean_array_push(x_88, x_80);
x_90 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351____closed__2;
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_67);
return x_92;
}
}
else
{
uint8_t x_93; 
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_36);
if (x_93 == 0)
{
return x_36;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_36, 0);
x_95 = lean_ctor_get(x_36, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_36);
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
lean_dec(x_2);
x_97 = !lean_is_exclusive(x_25);
if (x_97 == 0)
{
return x_25;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_25, 0);
x_99 = lean_ctor_get(x_25, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_25);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; lean_object* x_10; 
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__2(x_1, x_2, x_3, x_9, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; lean_object* x_11; 
x_10 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___lambda__3(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__2(x_1, x_8, x_9, x_10, x_5, x_6, x_7);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__3(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected declaration body");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declaration body is missing");
return x_1;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 5);
x_8 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_ctor_set(x_2, 5, x_8);
if (x_5 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Parser_Command_declValEqns___elambda__1___closed__2;
lean_inc(x_1);
x_10 = l_Lean_Syntax_isOfKind(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Parser_Term_whereDecls_formatter___closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Syntax_isMissing(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1;
x_15 = l_Lean_Macro_throwErrorAt___rarg(x_1, x_14, x_2, x_3);
lean_dec(x_1);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2;
x_17 = l_Lean_Macro_throwErrorAt___rarg(x_1, x_16, x_2, x_3);
lean_dec(x_1);
return x_17;
}
}
else
{
lean_object* x_18; 
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst(x_1, x_2, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
lean_dec(x_1);
x_21 = l_Lean_Elab_Term_expandMatchAltsWhereDecls(x_20, x_2, x_3);
lean_dec(x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
lean_dec(x_1);
x_26 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_23, x_25, x_2, x_3);
lean_dec(x_2);
lean_dec(x_23);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
x_29 = lean_ctor_get(x_2, 2);
x_30 = lean_ctor_get(x_2, 3);
x_31 = lean_ctor_get(x_2, 4);
x_32 = lean_ctor_get(x_2, 5);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
x_33 = l_Lean_replaceRef(x_1, x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_28);
lean_ctor_set(x_34, 2, x_29);
lean_ctor_set(x_34, 3, x_30);
lean_ctor_set(x_34, 4, x_31);
lean_ctor_set(x_34, 5, x_33);
if (x_5 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = l_Lean_Parser_Command_declValEqns___elambda__1___closed__2;
lean_inc(x_1);
x_36 = l_Lean_Syntax_isOfKind(x_1, x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = l_Lean_Parser_Term_whereDecls_formatter___closed__2;
lean_inc(x_1);
x_38 = l_Lean_Syntax_isOfKind(x_1, x_37);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = l_Lean_Syntax_isMissing(x_1);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1;
x_41 = l_Lean_Macro_throwErrorAt___rarg(x_1, x_40, x_34, x_3);
lean_dec(x_1);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2;
x_43 = l_Lean_Macro_throwErrorAt___rarg(x_1, x_42, x_34, x_3);
lean_dec(x_1);
return x_43;
}
}
else
{
lean_object* x_44; 
x_44 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst(x_1, x_34, x_3);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_Lean_Syntax_getArg(x_1, x_45);
lean_dec(x_1);
x_47 = l_Lean_Elab_Term_expandMatchAltsWhereDecls(x_46, x_34, x_3);
lean_dec(x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_unsigned_to_nat(2u);
x_49 = l_Lean_Syntax_getArg(x_1, x_48);
x_50 = lean_unsigned_to_nat(1u);
x_51 = l_Lean_Syntax_getArg(x_1, x_50);
lean_dec(x_1);
x_52 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_49, x_51, x_34, x_3);
lean_dec(x_34);
lean_dec(x_49);
return x_52;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_6, x_7);
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
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_10 = lean_ctor_get(x_7, 4);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 5);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_12, 0, x_2);
lean_inc(x_10);
x_13 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_13, 0, x_10);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_15, 0, x_2);
lean_closure_set(x_15, 1, x_10);
lean_closure_set(x_15, 2, x_11);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_10);
lean_closure_set(x_16, 2, x_11);
x_17 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_13);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_15);
lean_ctor_set(x_17, 4, x_16);
x_18 = x_17;
x_19 = lean_ctor_get(x_7, 3);
lean_inc(x_19);
x_20 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_7, 2);
lean_inc(x_24);
x_25 = lean_st_ref_get(x_8, x_22);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_environment_main_module(x_2);
x_30 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_21);
lean_ctor_set(x_30, 3, x_23);
lean_ctor_set(x_30, 4, x_24);
lean_ctor_set(x_30, 5, x_19);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
x_33 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm(x_1, x_30, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_st_ref_take(x_8, x_27);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_41 = lean_ctor_get(x_38, 1);
lean_dec(x_41);
lean_ctor_set(x_38, 1, x_36);
x_42 = lean_st_ref_set(x_8, x_38, x_39);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_dec(x_35);
x_45 = l_List_reverse___rarg(x_44);
x_46 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_45, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
lean_dec(x_7);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
lean_ctor_set(x_46, 0, x_34);
return x_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_34);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_51 = lean_ctor_get(x_38, 0);
x_52 = lean_ctor_get(x_38, 2);
x_53 = lean_ctor_get(x_38, 3);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_38);
x_54 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_36);
lean_ctor_set(x_54, 2, x_52);
lean_ctor_set(x_54, 3, x_53);
x_55 = lean_st_ref_set(x_8, x_54, x_39);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_ctor_get(x_35, 1);
lean_inc(x_57);
lean_dec(x_35);
x_58 = l_List_reverse___rarg(x_57);
x_59 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_56);
lean_dec(x_7);
lean_dec(x_3);
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
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_34);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_33, 0);
lean_inc(x_63);
lean_dec(x_33);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_64, x_67, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_64);
return x_68;
}
else
{
lean_object* x_69; 
lean_dec(x_7);
lean_dec(x_3);
x_69 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_27);
return x_69;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_3);
x_12 = lean_box(0);
x_13 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_11, x_13, x_13, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 0;
x_18 = l_Lean_Meta_mkLambdaFVars(x_2, x_15, x_17, x_13, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 6);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 5);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__3), 10, 1);
lean_closure_set(x_13, 0, x_2);
x_14 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg(x_10, x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = lean_ctor_get(x_17, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 4);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 7);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__2___boxed), 9, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___closed__1;
x_23 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_23, 0, x_22);
lean_closure_set(x_23, 1, x_21);
x_24 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__4), 9, 1);
lean_closure_set(x_24, 0, x_17);
x_25 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 2);
lean_closure_set(x_26, 0, x_19);
lean_closure_set(x_26, 1, x_25);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_27 = l_Lean_Elab_Term_withDeclName___rarg(x_18, x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
x_31 = x_2 + x_30;
x_32 = x_28;
x_33 = lean_array_uset(x_16, x_2, x_32);
x_2 = x_31;
x_3 = x_33;
x_10 = x_29;
goto _start;
}
else
{
uint8_t x_35; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = x_1;
x_12 = lean_box_usize(x_10);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___boxed), 10, 3);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_11);
x_15 = x_14;
x_16 = lean_apply_7(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 7);
lean_inc(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_Lean_Elab_Term_collectUsedFVars(x_12, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_10, 8);
lean_inc(x_15);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_Elab_Term_collectUsedFVars(x_15, x_2, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_1 = x_11;
x_7 = x_17;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
else
{
uint8_t x_23; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 == x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_12 = lean_array_uget(x_1, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Elab_Term_collectUsedFVars(x_12, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_2 + x_16;
x_2 = x_17;
x_4 = x_14;
x_10 = x_15;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_10);
return x_23;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 == x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_12 = lean_array_uget(x_1, x_2);
x_13 = lean_ctor_get(x_12, 6);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = l_Lean_Elab_Term_collectUsedFVars(x_13, x_5, x_6, x_7, x_8, x_9, x_10);
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
x_10 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_10);
return x_24;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_array_get_size(x_1);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_lt(x_29, x_28);
if (x_30 == 0)
{
lean_dec(x_28);
x_10 = x_9;
goto block_27;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_le(x_28, x_28);
if (x_31 == 0)
{
lean_dec(x_28);
x_10 = x_9;
goto block_27;
}
else
{
size_t x_32; size_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_34 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_35 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__3(x_1, x_32, x_33, x_34, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_10 = x_36;
goto block_27;
}
else
{
uint8_t x_37; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
return x_35;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_35, 0);
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_35);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
block_27:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_10);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_11, x_11);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_11);
x_16 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_10);
return x_16;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_19 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__2(x_2, x_17, x_18, x_19, x_4, x_5, x_6, x_7, x_8, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_21);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
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
}
}
}
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__2(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___spec__3(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_st_ref_get(x_10, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_15 = lean_st_mk_ref(x_14, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_collectUsed(x_2, x_3, x_4, x_16, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_10, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_get(x_16, x_21);
lean_dec(x_16);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_removeUnused(x_1, x_23, x_7, x_8, x_9, x_10, x_24);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_removeUnusedVars(x_1, x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_apply_1(x_5, x_19);
x_21 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_17, x_18, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*6);
lean_dec(x_5);
x_7 = l_Lean_Elab_DefKind_isExample(x_6);
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
uint8_t l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
size_t x_8; size_t x_9; uint8_t x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___spec__1(x_1, x_8, x_9);
return x_10;
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*6);
lean_dec(x_5);
x_7 = l_Lean_Elab_DefKind_isTheorem(x_6);
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
uint8_t l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
size_t x_8; size_t x_9; uint8_t x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___spec__1(x_1, x_8, x_9);
return x_10;
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isTheorem(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
x_14 = lean_ctor_get(x_1, 4);
x_15 = lean_ctor_get(x_1, 5);
x_16 = lean_ctor_get(x_1, 6);
x_17 = lean_ctor_get(x_1, 7);
x_18 = l_Lean_Meta_instantiateMVars(x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_1, 6, x_20);
lean_ctor_set(x_18, 0, x_1);
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
lean_ctor_set(x_1, 6, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_free_object(x_1);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
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
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_31 = lean_ctor_get(x_1, 2);
x_32 = lean_ctor_get(x_1, 3);
x_33 = lean_ctor_get(x_1, 4);
x_34 = lean_ctor_get(x_1, 5);
x_35 = lean_ctor_get(x_1, 6);
x_36 = lean_ctor_get(x_1, 7);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_1);
x_37 = l_Lean_Meta_instantiateMVars(x_35, x_4, x_5, x_6, x_7, x_8);
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
x_41 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_41, 0, x_28);
lean_ctor_set(x_41, 1, x_29);
lean_ctor_set(x_41, 2, x_31);
lean_ctor_set(x_41, 3, x_32);
lean_ctor_set(x_41, 4, x_33);
lean_ctor_set(x_41, 5, x_34);
lean_ctor_set(x_41, 6, x_38);
lean_ctor_set(x_41, 7, x_36);
lean_ctor_set_uint8(x_41, sizeof(void*)*8, x_30);
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
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_28);
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
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtHeader___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtHeader(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
x_14 = lean_ctor_get(x_1, 4);
x_15 = lean_ctor_get(x_1, 5);
x_16 = lean_ctor_get(x_1, 6);
x_17 = lean_ctor_get(x_1, 7);
x_18 = lean_ctor_get(x_1, 8);
x_19 = lean_ctor_get(x_1, 9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Lean_Meta_instantiateMVars(x_17, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Meta_instantiateMVars(x_18, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_1, 8, x_25);
lean_ctor_set(x_1, 7, x_21);
lean_ctor_set(x_23, 0, x_1);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 0);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set(x_1, 8, x_26);
lean_ctor_set(x_1, 7, x_21);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_21);
lean_free_object(x_1);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
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
lean_free_object(x_1);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_37 = lean_ctor_get(x_1, 0);
x_38 = lean_ctor_get(x_1, 1);
x_39 = lean_ctor_get(x_1, 2);
x_40 = lean_ctor_get(x_1, 3);
x_41 = lean_ctor_get(x_1, 4);
x_42 = lean_ctor_get(x_1, 5);
x_43 = lean_ctor_get(x_1, 6);
x_44 = lean_ctor_get(x_1, 7);
x_45 = lean_ctor_get(x_1, 8);
x_46 = lean_ctor_get(x_1, 9);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_47 = l_Lean_Meta_instantiateMVars(x_44, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Meta_instantiateMVars(x_45, x_4, x_5, x_6, x_7, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
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
x_54 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_54, 0, x_37);
lean_ctor_set(x_54, 1, x_38);
lean_ctor_set(x_54, 2, x_39);
lean_ctor_set(x_54, 3, x_40);
lean_ctor_set(x_54, 4, x_41);
lean_ctor_set(x_54, 5, x_42);
lean_ctor_set(x_54, 6, x_43);
lean_ctor_set(x_54, 7, x_48);
lean_ctor_set(x_54, 8, x_51);
lean_ctor_set(x_54, 9, x_46);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_48);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
x_56 = lean_ctor_get(x_50, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_58 = x_50;
} else {
 lean_dec_ref(x_50);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_60 = lean_ctor_get(x_47, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_47, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_62 = x_47;
} else {
 lean_dec_ref(x_47);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_5, sizeof(void*)*1);
lean_dec(x_5);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun_match__2___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1(x_1, x_2, x_5);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_name_eq(x_7, x_1);
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
uint8_t l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = l_Array_contains___at_Lean_Meta_getElimInfo___spec__5(x_1, x_3);
if (x_5 == 0)
{
uint8_t x_6; uint8_t x_7; 
x_6 = 0;
x_7 = l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1(x_4, x_6, x_2);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___lambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = 8192;
x_6 = l_Lean_Expr_FindImpl_initCache;
x_7 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_4, x_5, x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; 
lean_free_object(x_8);
lean_dec(x_11);
x_13 = lean_box(0);
return x_13;
}
}
else
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_14);
x_17 = lean_box(0);
return x_17;
}
}
}
}
}
lean_object* l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_name_eq(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown function");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_findLocalDecl_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1___boxed), 2, 1);
lean_closure_set(x_15, 0, x_1);
x_16 = l_List_findSome_x3f___rarg(x_15, x_2);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_free_object(x_10);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2;
x_18 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
lean_dec(x_5);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_3);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1___boxed), 2, 1);
lean_closure_set(x_21, 0, x_1);
x_22 = l_List_findSome_x3f___rarg(x_21, x_2);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2;
x_24 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
lean_dec(x_5);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_5);
lean_dec(x_3);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_20);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_10, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_11, 0);
lean_inc(x_29);
lean_dec(x_11);
x_30 = l_Lean_LocalDecl_userName(x_29);
lean_dec(x_29);
lean_ctor_set(x_10, 0, x_30);
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_dec(x_10);
x_32 = lean_ctor_get(x_11, 0);
lean_inc(x_32);
lean_dec(x_11);
x_33 = l_Lean_LocalDecl_userName(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid type in 'let rec', it uses '");
return x_1;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' which is being defined simultaneously");
return x_1;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
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
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_ctor_get(x_13, 7);
lean_inc(x_15);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_typeHasRecFun(x_15, x_1, x_2);
if (lean_obj_tag(x_16) == 0)
{
lean_dec(x_13);
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_1);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_6);
lean_inc(x_4);
x_19 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName(x_18, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
x_23 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_23, 0, x_20);
x_24 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__2;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__4;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(x_22, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
lean_dec(x_6);
lean_dec(x_22);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
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
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_2);
x_10 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1(x_1, x_2, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
return x_11;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_6 = lean_array_uget(x_1, x_3);
x_7 = l_Lean_Expr_fvarId_x21(x_6);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_4, x_7, x_8);
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
x_4 = x_9;
goto _start;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_8 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_5, x_7, x_1);
x_9 = 1;
x_10 = x_4 + x_9;
x_4 = x_10;
x_5 = x_8;
goto _start;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_3, 9);
x_5 = l_Lean_MetavarContext_getDelayedRoot(x_1, x_2);
x_6 = lean_name_eq(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_array_uget(x_3, x_5);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___lambda__1___boxed), 3, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
lean_inc(x_2);
x_10 = l_List_findSome_x3f___rarg(x_9, x_2);
if (lean_obj_tag(x_10) == 0)
{
size_t x_11; size_t x_12; 
x_11 = 1;
x_12 = x_5 + x_11;
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_6, x_14, x_15);
x_17 = 1;
x_18 = x_5 + x_17;
x_5 = x_18;
x_6 = x_16;
goto _start;
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_6, 8);
lean_inc(x_8);
x_9 = l_Lean_CollectFVars_instInhabitedState___closed__1;
lean_inc(x_8);
x_10 = l_Lean_CollectFVars_main(x_8, x_9);
x_11 = lean_ctor_get(x_6, 7);
lean_inc(x_11);
x_12 = l_Lean_CollectFVars_main(x_11, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_CollectMVars_instInhabitedState___closed__1;
x_15 = l_Lean_Expr_collectMVars(x_14, x_8);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_array_get_size(x_16);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3(x_1, x_2, x_16, x_18, x_3, x_13);
lean_dec(x_16);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
lean_dec(x_6);
x_21 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_5, x_20, x_19);
x_4 = x_7;
x_5 = x_21;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Lean_NameSet_empty;
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__1(x_2, x_6, x_7, x_8);
x_10 = lean_box(0);
x_11 = lean_array_get_size(x_3);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__2(x_9, x_3, x_12, x_7, x_10);
lean_inc(x_4);
x_14 = l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__4(x_1, x_4, x_7, x_4, x_13);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__3(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___spec__4(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_MutualClosure_FixPoint_State_usedFVarsMap___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Term_MutualClosure_FixPoint_State_modified___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*1, x_3);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 1;
lean_ctor_set_uint8(x_1, sizeof(void*)*1, x_3);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = 1;
x_8 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_apply_1(x_1, x_5);
lean_ctor_set(x_3, 0, x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_apply_1(x_1, x_9);
x_12 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_10);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1(x_1, x_6, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_NameSet_contains(x_10, x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_markModified___rarg(x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_10, x_7, x_15);
x_1 = x_16;
x_2 = x_8;
x_4 = x_14;
goto _start;
}
else
{
lean_dec(x_7);
x_1 = x_10;
x_2 = x_8;
x_4 = x_11;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickCmp(x_2, x_5);
switch (x_8) {
case 0:
{
x_1 = x_4;
goto _start;
}
case 1:
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
default: 
{
x_1 = x_7;
goto _start;
}
}
}
}
}
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_4, 3);
x_11 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2(x_1, x_2, x_3, x_8, x_5, x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_name_eq(x_1, x_9);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(x_2, x_9);
if (lean_obj_tag(x_15) == 0)
{
x_3 = x_12;
x_4 = x_10;
x_6 = x_13;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_merge___spec__1(x_12, x_17, x_5, x_13);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_3 = x_19;
x_4 = x_10;
x_6 = x_20;
goto _start;
}
}
else
{
x_3 = x_12;
x_4 = x_10;
x_6 = x_13;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_getUsedFVarsMap___rarg(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(x_6, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = lean_box(0);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_free_object(x_4);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_10);
x_11 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2(x_1, x_6, x_10, x_10, x_2, x_7);
lean_dec(x_10);
lean_dec(x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___lambda__1), 3, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_12);
x_15 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars(x_14, x_2, x_13);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_18 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(x_16, x_1);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
lean_inc(x_21);
x_22 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2(x_1, x_16, x_21, x_21, x_2, x_17);
lean_dec(x_21);
lean_dec(x_16);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___lambda__1), 3, 2);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_23);
x_26 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_modifyUsedFVars(x_25, x_2, x_24);
return x_26;
}
}
}
}
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_RBNode_foldM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf(x_6, x_2, x_3);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_1 = x_7;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_resetModified___rarg(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___spec__1(x_1, x_1, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_isModified___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_2 = x_16;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_run_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_run_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MutualClosure_FixPoint_run_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_FixPoint_run(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = 0;
x_4 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*1, x_3);
x_5 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_fixpoint___rarg(x_1, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_List_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__1(lean_object* x_1) {
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
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__1(x_5);
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
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 3);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_2);
x_8 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2(x_1, x_2, x_3, x_5);
lean_inc(x_2);
x_9 = l_Lean_LocalContext_contains(x_2, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = l_Array_contains___at___private_Lean_Class_0__Lean_checkOutParam___spec__1(x_1, x_6);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_push(x_8, x_6);
x_3 = x_12;
x_4 = x_7;
goto _start;
}
else
{
lean_dec(x_6);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
}
}
}
}
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 3);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_2);
x_8 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3(x_1, x_2, x_3, x_5);
lean_inc(x_2);
x_9 = l_Lean_LocalContext_contains(x_2, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = l_Array_contains___at___private_Lean_Class_0__Lean_checkOutParam___spec__1(x_1, x_6);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_push(x_8, x_6);
x_3 = x_12;
x_4 = x_7;
goto _start;
}
else
{
lean_dec(x_6);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_5, 5);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_FixPoint_updateUsedVarsOf___spec__1(x_2, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = l_Lean_NameSet_instInhabitedNameSet;
x_11 = l_Option_get_x21___rarg___closed__4;
x_12 = lean_panic_fn(x_10, x_11);
x_13 = l_Array_empty___closed__1;
x_14 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2(x_1, x_7, x_13, x_12);
x_15 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_4, x_8, x_14);
x_3 = x_6;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l_Array_empty___closed__1;
x_19 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3(x_1, x_7, x_18, x_17);
x_20 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_4, x_8, x_19);
x_3 = x_6;
x_4 = x_20;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
x_6 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkInitialUsedFVarsMap(x_1, x_2, x_3, x_5);
lean_inc(x_5);
x_7 = l_List_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__1(x_5);
x_8 = l_Lean_Elab_Term_MutualClosure_FixPoint_run(x_7, x_6);
x_9 = lean_box(0);
x_10 = l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__4(x_4, x_8, x_5, x_9);
lean_dec(x_8);
return x_10;
}
}
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_forIn_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Term_MutualClosure_ClosureState_newLocalDecls___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_MutualClosure_ClosureState_localDecls___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_MutualClosure_ClosureState_newLetDecls___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_MutualClosure_ClosureState_exprArgs___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; size_t x_13; size_t x_14; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_5);
lean_inc(x_1);
x_8 = l_Lean_LocalContext_get_x21(x_1, x_5);
x_9 = l_Lean_LocalDecl_index(x_8);
lean_dec(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_10 = l_Lean_LocalContext_get_x21(x_1, x_7);
x_11 = l_Lean_LocalDecl_index(x_10);
lean_dec(x_10);
x_12 = lean_nat_dec_lt(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
x_13 = 1;
x_14 = x_3 + x_13;
if (x_12 == 0)
{
lean_dec(x_7);
x_3 = x_14;
goto _start;
}
else
{
lean_dec(x_5);
x_3 = x_14;
x_5 = x_7;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_lt(x_8, x_3);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_7);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_le(x_3, x_3);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_7);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = 1;
x_14 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__2(x_1, x_2, x_13, x_14, x_7);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_instantiateMVars(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = l_Lean_Meta_check(x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_10);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_10);
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
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
return x_9;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 3);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars___spec__1(x_1, x_3);
x_7 = l_Array_contains___at___private_Lean_Class_0__Lean_checkOutParam___spec__1(x_6, x_4);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_array_push(x_6, x_4);
x_1 = x_8;
x_2 = x_5;
goto _start;
}
else
{
lean_dec(x_4);
x_1 = x_6;
x_2 = x_5;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_Std_RBNode_fold___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars___spec__1(x_1, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_12, x_16);
lean_dec(x_12);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_take(x_6, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 3);
x_25 = lean_unsigned_to_nat(0u);
lean_inc(x_15);
lean_inc(x_2);
x_26 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
lean_ctor_set(x_26, 2, x_3);
lean_ctor_set(x_26, 3, x_15);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_5);
x_27 = lean_array_push(x_23, x_26);
x_28 = l_Lean_mkFVar(x_2);
x_29 = lean_array_push(x_24, x_28);
lean_ctor_set(x_20, 3, x_29);
lean_ctor_set(x_20, 0, x_27);
x_30 = lean_st_ref_set(x_6, x_20, x_21);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_34 = l_Lean_CollectFVars_main(x_15, x_33);
x_35 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(x_1, x_34);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_38 = l_Lean_CollectFVars_main(x_15, x_37);
x_39 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(x_1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_41 = lean_ctor_get(x_20, 0);
x_42 = lean_ctor_get(x_20, 1);
x_43 = lean_ctor_get(x_20, 2);
x_44 = lean_ctor_get(x_20, 3);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_20);
x_45 = lean_unsigned_to_nat(0u);
lean_inc(x_15);
lean_inc(x_2);
x_46 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_2);
lean_ctor_set(x_46, 2, x_3);
lean_ctor_set(x_46, 3, x_15);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_5);
x_47 = lean_array_push(x_41, x_46);
x_48 = l_Lean_mkFVar(x_2);
x_49 = lean_array_push(x_44, x_48);
x_50 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_42);
lean_ctor_set(x_50, 2, x_43);
lean_ctor_set(x_50, 3, x_49);
x_51 = lean_st_ref_set(x_6, x_50, x_21);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
x_54 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_55 = l_Lean_CollectFVars_main(x_15, x_54);
x_56 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(x_1, x_55);
if (lean_is_scalar(x_53)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_53;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_14);
if (x_58 == 0)
{
return x_14;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_14, 0);
x_60 = lean_ctor_get(x_14, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_14);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_erase___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Array_indexOfAux___at_Lean_LocalContext_erase___spec__3(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Array_feraseIdx___rarg(x_1, x_5);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_1);
x_12 = l_Lean_replaceFVarIdAtLocalDecl(x_1, x_2, x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_1);
x_12 = l_Lean_replaceFVarIdAtLocalDecl(x_1, x_2, x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_take(x_9, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_16, 3);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_1);
x_23 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_23, 0, x_1);
x_24 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__1;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__3;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_13);
x_29 = l_Lean_KernelException_toMessageData___closed__15;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_30);
lean_inc(x_11);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_11);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Std_PersistentArray_push___rarg(x_22, x_32);
lean_ctor_set(x_17, 0, x_33);
x_34 = lean_st_ref_set(x_9, x_16, x_18);
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
uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_41 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
x_42 = lean_ctor_get(x_17, 0);
lean_inc(x_42);
lean_dec(x_17);
lean_inc(x_1);
x_43 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_43, 0, x_1);
x_44 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__1;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__3;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_13);
x_49 = l_Lean_KernelException_toMessageData___closed__15;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_50);
lean_inc(x_11);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_11);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Std_PersistentArray_push___rarg(x_42, x_52);
x_54 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_41);
lean_ctor_set(x_16, 3, x_54);
x_55 = lean_st_ref_set(x_9, x_16, x_18);
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
x_58 = lean_box(0);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_60 = lean_ctor_get(x_16, 0);
x_61 = lean_ctor_get(x_16, 1);
x_62 = lean_ctor_get(x_16, 2);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_16);
x_63 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
x_64 = lean_ctor_get(x_17, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_65 = x_17;
} else {
 lean_dec_ref(x_17);
 x_65 = lean_box(0);
}
lean_inc(x_1);
x_66 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_66, 0, x_1);
x_67 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__1;
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1___closed__3;
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_13);
x_72 = l_Lean_KernelException_toMessageData___closed__15;
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_74, 0, x_1);
lean_ctor_set(x_74, 1, x_73);
lean_inc(x_11);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_11);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Std_PersistentArray_push___rarg(x_64, x_75);
if (lean_is_scalar(x_65)) {
 x_77 = lean_alloc_ctor(0, 1, 1);
} else {
 x_77 = x_65;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set_uint8(x_77, sizeof(void*)*1, x_63);
x_78 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_78, 0, x_60);
lean_ctor_set(x_78, 1, x_61);
lean_ctor_set(x_78, 2, x_62);
lean_ctor_set(x_78, 3, x_77);
x_79 = lean_st_ref_set(x_9, x_78, x_18);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_81 = x_79;
} else {
 lean_dec_ref(x_79);
 x_81 = lean_box(0);
}
x_82 = lean_box(0);
if (lean_is_scalar(x_81)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_81;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_80);
return x_83;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_checkTraceOption(x_10, x_1);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mkClosure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_initFn____x40_Lean_Elab_DefView___hyg_1253____closed__2;
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("toProcess: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", maxVar: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
x_11 = l_Array_getMax_x3f___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pickMaxFVar_x3f___spec__1(x_10, x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_189; lean_object* x_190; lean_object* x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_213 = lean_st_ref_get(x_8, x_9);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_214, 3);
lean_inc(x_215);
lean_dec(x_214);
x_216 = lean_ctor_get_uint8(x_215, sizeof(void*)*1);
lean_dec(x_215);
if (x_216 == 0)
{
lean_object* x_217; uint8_t x_218; 
x_217 = lean_ctor_get(x_213, 1);
lean_inc(x_217);
lean_dec(x_213);
x_218 = 0;
x_189 = x_218;
x_190 = x_217;
goto block_212;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
x_219 = lean_ctor_get(x_213, 1);
lean_inc(x_219);
lean_dec(x_213);
x_220 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2;
x_221 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__5(x_220, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_219);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = lean_unbox(x_222);
lean_dec(x_222);
x_189 = x_224;
x_190 = x_223;
goto block_212;
}
block_188:
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_Array_erase___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__1(x_1, x_14);
lean_inc(x_5);
lean_inc(x_14);
x_17 = l_Lean_Meta_getLocalDecl(x_14, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 3);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
lean_dec(x_18);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl(x_16, x_14, x_20, x_21, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_1 = x_24;
x_9 = x_25;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 0);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_23);
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
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_dec(x_17);
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_33 = lean_ctor_get(x_18, 2);
x_34 = lean_ctor_get(x_18, 3);
x_35 = lean_ctor_get(x_18, 4);
x_36 = lean_ctor_get(x_18, 1);
lean_dec(x_36);
x_37 = lean_ctor_get(x_18, 0);
lean_dec(x_37);
x_38 = l_Lean_Meta_getZetaFVarIds___rarg(x_6, x_7, x_8, x_31);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_NameSet_contains(x_39, x_14);
lean_dec(x_39);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; 
lean_free_object(x_18);
lean_dec(x_35);
x_42 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_43 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl(x_16, x_14, x_33, x_34, x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_1 = x_44;
x_9 = x_45;
goto _start;
}
else
{
uint8_t x_47; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_47 = !lean_is_exclusive(x_43);
if (x_47 == 0)
{
return x_43;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_43, 0);
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_43);
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
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_51 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_54 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_st_ref_get(x_8, x_56);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_st_ref_take(x_2, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; size_t x_67; size_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; size_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_63 = lean_ctor_get(x_60, 0);
x_64 = lean_ctor_get(x_60, 1);
x_65 = lean_ctor_get(x_60, 2);
x_66 = lean_array_get_size(x_63);
x_67 = lean_usize_of_nat(x_66);
lean_dec(x_66);
x_68 = 0;
x_69 = x_63;
lean_inc(x_14);
x_70 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2(x_14, x_55, x_67, x_68, x_69);
x_71 = x_70;
x_72 = lean_array_get_size(x_64);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = x_64;
lean_inc(x_14);
x_75 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3(x_14, x_55, x_73, x_68, x_74);
x_76 = x_75;
x_77 = lean_unsigned_to_nat(0u);
x_78 = 0;
lean_inc(x_55);
lean_inc(x_52);
lean_ctor_set(x_18, 4, x_55);
lean_ctor_set(x_18, 3, x_52);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 0, x_77);
lean_ctor_set_uint8(x_18, sizeof(void*)*5, x_78);
x_79 = lean_array_push(x_65, x_18);
lean_ctor_set(x_60, 2, x_79);
lean_ctor_set(x_60, 1, x_76);
lean_ctor_set(x_60, 0, x_71);
x_80 = lean_st_ref_set(x_2, x_60, x_61);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_83 = l_Lean_CollectFVars_main(x_52, x_82);
x_84 = l_Lean_CollectFVars_main(x_55, x_83);
x_85 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(x_16, x_84);
x_1 = x_85;
x_9 = x_81;
goto _start;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; size_t x_92; size_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; size_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_87 = lean_ctor_get(x_60, 0);
x_88 = lean_ctor_get(x_60, 1);
x_89 = lean_ctor_get(x_60, 2);
x_90 = lean_ctor_get(x_60, 3);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_60);
x_91 = lean_array_get_size(x_87);
x_92 = lean_usize_of_nat(x_91);
lean_dec(x_91);
x_93 = 0;
x_94 = x_87;
lean_inc(x_14);
x_95 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2(x_14, x_55, x_92, x_93, x_94);
x_96 = x_95;
x_97 = lean_array_get_size(x_88);
x_98 = lean_usize_of_nat(x_97);
lean_dec(x_97);
x_99 = x_88;
lean_inc(x_14);
x_100 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3(x_14, x_55, x_98, x_93, x_99);
x_101 = x_100;
x_102 = lean_unsigned_to_nat(0u);
x_103 = 0;
lean_inc(x_55);
lean_inc(x_52);
lean_ctor_set(x_18, 4, x_55);
lean_ctor_set(x_18, 3, x_52);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 0, x_102);
lean_ctor_set_uint8(x_18, sizeof(void*)*5, x_103);
x_104 = lean_array_push(x_89, x_18);
x_105 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_105, 0, x_96);
lean_ctor_set(x_105, 1, x_101);
lean_ctor_set(x_105, 2, x_104);
lean_ctor_set(x_105, 3, x_90);
x_106 = lean_st_ref_set(x_2, x_105, x_61);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_109 = l_Lean_CollectFVars_main(x_52, x_108);
x_110 = l_Lean_CollectFVars_main(x_55, x_109);
x_111 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(x_16, x_110);
x_1 = x_111;
x_9 = x_107;
goto _start;
}
}
else
{
uint8_t x_113; 
lean_dec(x_52);
lean_free_object(x_18);
lean_dec(x_33);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_113 = !lean_is_exclusive(x_54);
if (x_113 == 0)
{
return x_54;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_54, 0);
x_115 = lean_ctor_get(x_54, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_54);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_free_object(x_18);
lean_dec(x_35);
lean_dec(x_33);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_117 = !lean_is_exclusive(x_51);
if (x_117 == 0)
{
return x_51;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_51, 0);
x_119 = lean_ctor_get(x_51, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_51);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_121 = lean_ctor_get(x_18, 2);
x_122 = lean_ctor_get(x_18, 3);
x_123 = lean_ctor_get(x_18, 4);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_18);
x_124 = l_Lean_Meta_getZetaFVarIds___rarg(x_6, x_7, x_8, x_31);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = l_Lean_NameSet_contains(x_125, x_14);
lean_dec(x_125);
if (x_127 == 0)
{
uint8_t x_128; lean_object* x_129; 
lean_dec(x_123);
x_128 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_129 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushLocalDecl(x_16, x_14, x_121, x_122, x_128, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_126);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_1 = x_130;
x_9 = x_131;
goto _start;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_133 = lean_ctor_get(x_129, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_129, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_135 = x_129;
} else {
 lean_dec_ref(x_129);
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
else
{
lean_object* x_137; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_137 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(x_122, x_3, x_4, x_5, x_6, x_7, x_8, x_126);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_140 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_preprocess(x_123, x_3, x_4, x_5, x_6, x_7, x_8, x_139);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; size_t x_154; size_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; size_t x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = lean_st_ref_get(x_8, x_142);
x_144 = lean_ctor_get(x_143, 1);
lean_inc(x_144);
lean_dec(x_143);
x_145 = lean_st_ref_take(x_2, x_144);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_ctor_get(x_146, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
x_150 = lean_ctor_get(x_146, 2);
lean_inc(x_150);
x_151 = lean_ctor_get(x_146, 3);
lean_inc(x_151);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 lean_ctor_release(x_146, 2);
 lean_ctor_release(x_146, 3);
 x_152 = x_146;
} else {
 lean_dec_ref(x_146);
 x_152 = lean_box(0);
}
x_153 = lean_array_get_size(x_148);
x_154 = lean_usize_of_nat(x_153);
lean_dec(x_153);
x_155 = 0;
x_156 = x_148;
lean_inc(x_14);
x_157 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2(x_14, x_141, x_154, x_155, x_156);
x_158 = x_157;
x_159 = lean_array_get_size(x_149);
x_160 = lean_usize_of_nat(x_159);
lean_dec(x_159);
x_161 = x_149;
lean_inc(x_14);
x_162 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3(x_14, x_141, x_160, x_155, x_161);
x_163 = x_162;
x_164 = lean_unsigned_to_nat(0u);
x_165 = 0;
lean_inc(x_141);
lean_inc(x_138);
x_166 = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_14);
lean_ctor_set(x_166, 2, x_121);
lean_ctor_set(x_166, 3, x_138);
lean_ctor_set(x_166, 4, x_141);
lean_ctor_set_uint8(x_166, sizeof(void*)*5, x_165);
x_167 = lean_array_push(x_150, x_166);
if (lean_is_scalar(x_152)) {
 x_168 = lean_alloc_ctor(0, 4, 0);
} else {
 x_168 = x_152;
}
lean_ctor_set(x_168, 0, x_158);
lean_ctor_set(x_168, 1, x_163);
lean_ctor_set(x_168, 2, x_167);
lean_ctor_set(x_168, 3, x_151);
x_169 = lean_st_ref_set(x_2, x_168, x_147);
x_170 = lean_ctor_get(x_169, 1);
lean_inc(x_170);
lean_dec(x_169);
x_171 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_172 = l_Lean_CollectFVars_main(x_138, x_171);
x_173 = l_Lean_CollectFVars_main(x_141, x_172);
x_174 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_pushNewVars(x_16, x_173);
x_1 = x_174;
x_9 = x_170;
goto _start;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_138);
lean_dec(x_121);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_176 = lean_ctor_get(x_140, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_140, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_178 = x_140;
} else {
 lean_dec_ref(x_140);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_123);
lean_dec(x_121);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_180 = lean_ctor_get(x_137, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_137, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_182 = x_137;
} else {
 lean_dec_ref(x_137);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(1, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
}
}
}
else
{
uint8_t x_184; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_184 = !lean_is_exclusive(x_17);
if (x_184 == 0)
{
return x_17;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_185 = lean_ctor_get(x_17, 0);
x_186 = lean_ctor_get(x_17, 1);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_17);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
return x_187;
}
}
}
block_212:
{
if (x_189 == 0)
{
x_15 = x_190;
goto block_188;
}
else
{
lean_object* x_191; size_t x_192; size_t x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_191 = lean_array_get_size(x_1);
x_192 = lean_usize_of_nat(x_191);
lean_dec(x_191);
x_193 = 0;
lean_inc(x_1);
x_194 = x_1;
x_195 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_192, x_193, x_194);
x_196 = x_195;
x_197 = lean_array_to_list(lean_box(0), x_196);
x_198 = l_List_map___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_197);
x_199 = l_Lean_MessageData_ofList(x_198);
lean_dec(x_198);
x_200 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__4;
x_201 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_199);
x_202 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__6;
x_203 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
lean_inc(x_14);
x_204 = l_Lean_mkFVar(x_14);
x_205 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_205, 0, x_204);
x_206 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_205);
x_207 = l_Lean_KernelException_toMessageData___closed__15;
x_208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
x_209 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2;
x_210 = l_Lean_addTrace___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__4(x_209, x_208, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_190);
x_211 = lean_ctor_get(x_210, 1);
lean_inc(x_211);
lean_dec(x_210);
x_15 = x_211;
goto block_188;
}
}
}
}
}
lean_object* l_Array_erase___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_erase___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__3(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_addTrace___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = l_Array_empty___closed__1;
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_10);
x_12 = lean_st_ref_get(x_8, x_9);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_st_mk_ref(x_11, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_8);
x_17 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_get(x_8, x_18);
lean_dec(x_8);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_15, x_20);
lean_dec(x_15);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 2);
x_27 = lean_ctor_get(x_23, 3);
x_28 = l_Array_reverse___rarg(x_25);
x_29 = l_Array_reverse___rarg(x_26);
x_30 = l_Array_reverse___rarg(x_27);
lean_ctor_set(x_23, 3, x_30);
lean_ctor_set(x_23, 2, x_29);
lean_ctor_set(x_23, 0, x_28);
return x_21;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_23, 0);
x_32 = lean_ctor_get(x_23, 1);
x_33 = lean_ctor_get(x_23, 2);
x_34 = lean_ctor_get(x_23, 3);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_23);
x_35 = l_Array_reverse___rarg(x_31);
x_36 = l_Array_reverse___rarg(x_33);
x_37 = l_Array_reverse___rarg(x_34);
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_32);
lean_ctor_set(x_38, 2, x_36);
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_21, 0, x_38);
return x_21;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get(x_21, 0);
x_40 = lean_ctor_get(x_21, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_21);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_39, 2);
lean_inc(x_43);
x_44 = lean_ctor_get(x_39, 3);
lean_inc(x_44);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 lean_ctor_release(x_39, 3);
 x_45 = x_39;
} else {
 lean_dec_ref(x_39);
 x_45 = lean_box(0);
}
x_46 = l_Array_reverse___rarg(x_41);
x_47 = l_Array_reverse___rarg(x_43);
x_48 = l_Array_reverse___rarg(x_44);
if (lean_is_scalar(x_45)) {
 x_49 = lean_alloc_ctor(0, 4, 0);
} else {
 x_49 = x_45;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_42);
lean_ctor_set(x_49, 2, x_47);
lean_ctor_set(x_49, 3, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_40);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_15);
lean_dec(x_8);
x_51 = !lean_is_exclusive(x_17);
if (x_51 == 0)
{
return x_17;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_17, 0);
x_53 = lean_ctor_get(x_17, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_17);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = l_Lean_Expr_fvarId_x21(x_10);
lean_dec(x_10);
lean_inc(x_1);
x_12 = l_Lean_LocalContext_get_x21(x_1, x_11);
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
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1), 10, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = 0;
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_11, x_10, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__2___rarg), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_1, 7);
lean_inc(x_14);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_5, x_15, x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
x_20 = lean_array_get_size(x_5);
x_21 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_22 = 0;
x_23 = x_5;
x_24 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__1(x_19, x_21, x_22, x_23);
x_25 = x_24;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_26 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureFor(x_2, x_25, x_7, x_8, x_9, x_10, x_11, x_12, x_18);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 2);
lean_inc(x_30);
lean_inc(x_30);
x_31 = l_Lean_Meta_Closure_mkForall(x_30, x_17);
lean_dec(x_17);
lean_inc(x_29);
x_32 = l_Lean_Meta_Closure_mkForall(x_29, x_31);
lean_dec(x_31);
x_33 = l_Lean_Meta_Closure_mkLambda(x_30, x_6);
x_34 = l_Lean_Meta_Closure_mkLambda(x_29, x_33);
lean_dec(x_33);
x_35 = lean_ctor_get(x_1, 4);
lean_inc(x_35);
x_36 = lean_box(0);
lean_inc(x_35);
x_37 = l_Lean_mkConst(x_35, x_36);
x_38 = lean_ctor_get(x_27, 3);
lean_inc(x_38);
x_39 = l_Lean_mkAppN(x_37, x_38);
lean_dec(x_38);
x_40 = lean_ctor_get(x_1, 9);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_40);
x_41 = l_Lean_Meta_assignExprMVar(x_40, x_39, x_9, x_10, x_11, x_12, x_28);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_27, 0);
lean_inc(x_45);
lean_dec(x_27);
x_46 = lean_ctor_get(x_1, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 2);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 3);
lean_inc(x_48);
lean_dec(x_1);
lean_inc(x_44);
x_49 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_47);
lean_ctor_set(x_49, 3, x_48);
lean_ctor_set(x_49, 4, x_35);
lean_ctor_set(x_49, 5, x_3);
lean_ctor_set(x_49, 6, x_4);
lean_ctor_set(x_49, 7, x_32);
lean_ctor_set(x_49, 8, x_34);
lean_ctor_set(x_49, 9, x_40);
x_50 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_50, 2, x_39);
lean_ctor_set(x_50, 3, x_49);
lean_ctor_set(x_41, 0, x_50);
return x_41;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_51 = lean_ctor_get(x_41, 1);
lean_inc(x_51);
lean_dec(x_41);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_27, 0);
lean_inc(x_53);
lean_dec(x_27);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 3);
lean_inc(x_56);
lean_dec(x_1);
lean_inc(x_52);
x_57 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_57, 0, x_52);
lean_ctor_set(x_57, 1, x_54);
lean_ctor_set(x_57, 2, x_55);
lean_ctor_set(x_57, 3, x_56);
lean_ctor_set(x_57, 4, x_35);
lean_ctor_set(x_57, 5, x_3);
lean_ctor_set(x_57, 6, x_4);
lean_ctor_set(x_57, 7, x_32);
lean_ctor_set(x_57, 8, x_34);
lean_ctor_set(x_57, 9, x_40);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_39);
lean_ctor_set(x_58, 3, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_51);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_26);
if (x_60 == 0)
{
return x_26;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_26, 0);
x_62 = lean_ctor_get(x_26, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_26);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_16);
if (x_64 == 0)
{
return x_16;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_16, 0);
x_66 = lean_ctor_get(x_16, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_16);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 5);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 6);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 8);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___lambda__1___boxed), 13, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_10);
lean_closure_set(x_13, 3, x_11);
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__2___rarg), 9, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_10, x_11, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___spec__1(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickCmp(x_2, x_5);
switch (x_8) {
case 0:
{
x_1 = x_4;
goto _start;
}
case 1:
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
default: 
{
x_1 = x_7;
goto _start;
}
}
}
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
x_16 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = l_Array_empty___closed__1;
x_18 = l_Option_get_x21___rarg___closed__4;
x_19 = lean_panic_fn(x_17, x_18);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_20 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor(x_13, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_21);
lean_ctor_set(x_23, 0, x_2);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 0);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set(x_2, 1, x_26);
lean_ctor_set(x_2, 0, x_21);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_21);
lean_free_object(x_2);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
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
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
x_37 = lean_ctor_get(x_16, 0);
lean_inc(x_37);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_38 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor(x_13, x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_ctor_set(x_2, 1, x_43);
lean_ctor_set(x_2, 0, x_39);
lean_ctor_set(x_41, 0, x_2);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_41, 0);
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_41);
lean_ctor_set(x_2, 1, x_44);
lean_ctor_set(x_2, 0, x_39);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_2);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_39);
lean_free_object(x_2);
x_47 = !lean_is_exclusive(x_41);
if (x_47 == 0)
{
return x_41;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_41, 0);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_41);
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
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_51 = !lean_is_exclusive(x_38);
if (x_51 == 0)
{
return x_38;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_38, 0);
x_53 = lean_ctor_get(x_38, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_38);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_2, 0);
x_56 = lean_ctor_get(x_2, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_2);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
x_58 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1(x_1, x_57);
lean_dec(x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = l_Array_empty___closed__1;
x_60 = l_Option_get_x21___rarg___closed__4;
x_61 = lean_panic_fn(x_59, x_60);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_62 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor(x_55, x_61, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_1, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_68 = x_65;
} else {
 lean_dec_ref(x_65);
 x_68 = lean_box(0);
}
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_63);
lean_ctor_set(x_69, 1, x_66);
if (lean_is_scalar(x_68)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_68;
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_67);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_63);
x_71 = lean_ctor_get(x_65, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_65, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_73 = x_65;
} else {
 lean_dec_ref(x_65);
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
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_56);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_75 = lean_ctor_get(x_62, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_62, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_77 = x_62;
} else {
 lean_dec_ref(x_62);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_58, 0);
lean_inc(x_79);
lean_dec(x_58);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_80 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosureFor(x_55, x_79, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_1, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_86 = x_83;
} else {
 lean_dec_ref(x_83);
 x_86 = lean_box(0);
}
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_81);
lean_ctor_set(x_87, 1, x_84);
if (lean_is_scalar(x_86)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_86;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_81);
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_91 = x_83;
} else {
 lean_dec_ref(x_83);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_56);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_93 = lean_ctor_get(x_80, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_80, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_95 = x_80;
} else {
 lean_dec_ref(x_80);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Nat_foldAux___at_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_5, x_9);
lean_dec(x_5);
x_11 = lean_nat_add(x_10, x_9);
x_12 = lean_nat_sub(x_4, x_11);
lean_dec(x_11);
x_13 = l_Lean_instInhabitedExpr;
x_14 = lean_array_get(x_13, x_3, x_12);
x_15 = l_Lean_Expr_fvarId_x21(x_14);
lean_dec(x_14);
x_16 = l_Lean_Elab_instInhabitedDefViewElabHeader;
x_17 = lean_array_get(x_16, x_2, x_12);
lean_dec(x_12);
x_18 = lean_ctor_get(x_17, 3);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_box(0);
x_20 = l_Lean_mkConst(x_18, x_19);
x_21 = l_Lean_mkAppN(x_20, x_1);
x_22 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_6, x_15, x_21);
x_5 = x_10;
x_6 = x_22;
goto _start;
}
else
{
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_array_get_size(x_4);
lean_inc(x_5);
x_6 = l_Nat_foldAux___at_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___spec__1(x_2, x_3, x_4, x_5, x_5, x_1);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Nat_foldAux___at_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_foldAux___at_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_1, x_6, x_7);
x_1 = x_8;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MutualClosure_Replacement_apply_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_214; lean_object* x_215; size_t x_216; uint8_t x_217; 
x_5 = lean_ptr_addr(x_3);
x_6 = x_2 == 0 ? x_5 : x_5 % x_2;
x_214 = lean_ctor_get(x_4, 0);
lean_inc(x_214);
x_215 = lean_array_uget(x_214, x_6);
lean_dec(x_214);
x_216 = lean_ptr_addr(x_215);
lean_dec(x_215);
x_217 = x_216 == x_5;
if (x_217 == 0)
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_218; lean_object* x_219; 
x_218 = lean_ctor_get(x_3, 0);
lean_inc(x_218);
x_219 = l_Std_RBNode_find___at_Lean_Elab_Term_resolveName___spec__2(x_1, x_218);
lean_dec(x_218);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; 
x_220 = lean_box(0);
x_7 = x_220;
goto block_213;
}
else
{
lean_object* x_221; uint8_t x_222; 
x_221 = lean_ctor_get(x_219, 0);
lean_inc(x_221);
lean_dec(x_219);
x_222 = !lean_is_exclusive(x_4);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_223 = lean_ctor_get(x_4, 0);
x_224 = lean_ctor_get(x_4, 1);
x_225 = lean_array_uset(x_223, x_6, x_3);
lean_inc(x_221);
x_226 = lean_array_uset(x_224, x_6, x_221);
lean_ctor_set(x_4, 1, x_226);
lean_ctor_set(x_4, 0, x_225);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_221);
lean_ctor_set(x_227, 1, x_4);
return x_227;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_228 = lean_ctor_get(x_4, 0);
x_229 = lean_ctor_get(x_4, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_4);
x_230 = lean_array_uset(x_228, x_6, x_3);
lean_inc(x_221);
x_231 = lean_array_uset(x_229, x_6, x_221);
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_230);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_221);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
}
}
else
{
lean_object* x_234; 
x_234 = lean_box(0);
x_7 = x_234;
goto block_213;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; 
lean_dec(x_3);
x_235 = lean_ctor_get(x_4, 1);
lean_inc(x_235);
x_236 = lean_array_uget(x_235, x_6);
lean_dec(x_235);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_4);
return x_237;
}
block_213:
{
lean_dec(x_7);
switch (lean_obj_tag(x_3)) {
case 5:
{
lean_object* x_8; lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_3, sizeof(void*)*2);
lean_inc(x_8);
x_11 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_8, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
x_14 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_9, x_13);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_9);
lean_ctor_set_uint64(x_18, sizeof(void*)*2, x_10);
x_19 = lean_expr_update_app(x_18, x_12, x_16);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
x_23 = lean_array_uset(x_21, x_6, x_3);
lean_inc(x_19);
x_24 = lean_array_uset(x_22, x_6, x_19);
lean_ctor_set(x_17, 1, x_24);
lean_ctor_set(x_17, 0, x_23);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_array_uset(x_25, x_6, x_3);
lean_inc(x_19);
x_28 = lean_array_uset(x_26, x_6, x_19);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_14, 1, x_29);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_32, 0, x_8);
lean_ctor_set(x_32, 1, x_9);
lean_ctor_set_uint64(x_32, sizeof(void*)*2, x_10);
x_33 = lean_expr_update_app(x_32, x_12, x_30);
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_36 = x_31;
} else {
 lean_dec_ref(x_31);
 x_36 = lean_box(0);
}
x_37 = lean_array_uset(x_34, x_6, x_3);
lean_inc(x_33);
x_38 = lean_array_uset(x_35, x_6, x_33);
if (lean_is_scalar(x_36)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_36;
}
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
case 6:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint64_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_3, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_3, 2);
lean_inc(x_43);
x_44 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
lean_inc(x_42);
x_45 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_42, x_4);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
lean_inc(x_43);
x_48 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_43, x_47);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; uint8_t x_55; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
x_52 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_52, 0, x_41);
lean_ctor_set(x_52, 1, x_42);
lean_ctor_set(x_52, 2, x_43);
lean_ctor_set_uint64(x_52, sizeof(void*)*3, x_44);
x_53 = (uint8_t)((x_44 << 24) >> 61);
x_54 = lean_expr_update_lambda(x_52, x_53, x_46, x_50);
x_55 = !lean_is_exclusive(x_51);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_51, 0);
x_57 = lean_ctor_get(x_51, 1);
x_58 = lean_array_uset(x_56, x_6, x_3);
lean_inc(x_54);
x_59 = lean_array_uset(x_57, x_6, x_54);
lean_ctor_set(x_51, 1, x_59);
lean_ctor_set(x_51, 0, x_58);
lean_ctor_set(x_48, 0, x_54);
return x_48;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_51, 0);
x_61 = lean_ctor_get(x_51, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_51);
x_62 = lean_array_uset(x_60, x_6, x_3);
lean_inc(x_54);
x_63 = lean_array_uset(x_61, x_6, x_54);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_48, 1, x_64);
lean_ctor_set(x_48, 0, x_54);
return x_48;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_65 = lean_ctor_get(x_48, 0);
x_66 = lean_ctor_get(x_48, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_48);
x_67 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_67, 0, x_41);
lean_ctor_set(x_67, 1, x_42);
lean_ctor_set(x_67, 2, x_43);
lean_ctor_set_uint64(x_67, sizeof(void*)*3, x_44);
x_68 = (uint8_t)((x_44 << 24) >> 61);
x_69 = lean_expr_update_lambda(x_67, x_68, x_46, x_65);
x_70 = lean_ctor_get(x_66, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_72 = x_66;
} else {
 lean_dec_ref(x_66);
 x_72 = lean_box(0);
}
x_73 = lean_array_uset(x_70, x_6, x_3);
lean_inc(x_69);
x_74 = lean_array_uset(x_71, x_6, x_69);
if (lean_is_scalar(x_72)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_72;
}
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
case 7:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint64_t x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_77 = lean_ctor_get(x_3, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_3, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_3, 2);
lean_inc(x_79);
x_80 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
lean_inc(x_78);
x_81 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_78, x_4);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
lean_inc(x_79);
x_84 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_79, x_83);
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; uint8_t x_91; 
x_86 = lean_ctor_get(x_84, 0);
x_87 = lean_ctor_get(x_84, 1);
x_88 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_88, 0, x_77);
lean_ctor_set(x_88, 1, x_78);
lean_ctor_set(x_88, 2, x_79);
lean_ctor_set_uint64(x_88, sizeof(void*)*3, x_80);
x_89 = (uint8_t)((x_80 << 24) >> 61);
x_90 = lean_expr_update_forall(x_88, x_89, x_82, x_86);
x_91 = !lean_is_exclusive(x_87);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_87, 0);
x_93 = lean_ctor_get(x_87, 1);
x_94 = lean_array_uset(x_92, x_6, x_3);
lean_inc(x_90);
x_95 = lean_array_uset(x_93, x_6, x_90);
lean_ctor_set(x_87, 1, x_95);
lean_ctor_set(x_87, 0, x_94);
lean_ctor_set(x_84, 0, x_90);
return x_84;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_ctor_get(x_87, 0);
x_97 = lean_ctor_get(x_87, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_87);
x_98 = lean_array_uset(x_96, x_6, x_3);
lean_inc(x_90);
x_99 = lean_array_uset(x_97, x_6, x_90);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_84, 1, x_100);
lean_ctor_set(x_84, 0, x_90);
return x_84;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_101 = lean_ctor_get(x_84, 0);
x_102 = lean_ctor_get(x_84, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_84);
x_103 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_103, 0, x_77);
lean_ctor_set(x_103, 1, x_78);
lean_ctor_set(x_103, 2, x_79);
lean_ctor_set_uint64(x_103, sizeof(void*)*3, x_80);
x_104 = (uint8_t)((x_80 << 24) >> 61);
x_105 = lean_expr_update_forall(x_103, x_104, x_82, x_101);
x_106 = lean_ctor_get(x_102, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_102, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_108 = x_102;
} else {
 lean_dec_ref(x_102);
 x_108 = lean_box(0);
}
x_109 = lean_array_uset(x_106, x_6, x_3);
lean_inc(x_105);
x_110 = lean_array_uset(x_107, x_6, x_105);
if (lean_is_scalar(x_108)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_108;
}
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_105);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
case 8:
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint64_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_113 = lean_ctor_get(x_3, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_3, 1);
lean_inc(x_114);
x_115 = lean_ctor_get(x_3, 2);
lean_inc(x_115);
x_116 = lean_ctor_get(x_3, 3);
lean_inc(x_116);
x_117 = lean_ctor_get_uint64(x_3, sizeof(void*)*4);
lean_inc(x_114);
x_118 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_114, x_4);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
lean_inc(x_115);
x_121 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_115, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
lean_inc(x_116);
x_124 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_116, x_123);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_126 = lean_ctor_get(x_124, 0);
x_127 = lean_ctor_get(x_124, 1);
x_128 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_128, 0, x_113);
lean_ctor_set(x_128, 1, x_114);
lean_ctor_set(x_128, 2, x_115);
lean_ctor_set(x_128, 3, x_116);
lean_ctor_set_uint64(x_128, sizeof(void*)*4, x_117);
x_129 = lean_expr_update_let(x_128, x_119, x_122, x_126);
x_130 = !lean_is_exclusive(x_127);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_131 = lean_ctor_get(x_127, 0);
x_132 = lean_ctor_get(x_127, 1);
x_133 = lean_array_uset(x_131, x_6, x_3);
lean_inc(x_129);
x_134 = lean_array_uset(x_132, x_6, x_129);
lean_ctor_set(x_127, 1, x_134);
lean_ctor_set(x_127, 0, x_133);
lean_ctor_set(x_124, 0, x_129);
return x_124;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_135 = lean_ctor_get(x_127, 0);
x_136 = lean_ctor_get(x_127, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_127);
x_137 = lean_array_uset(x_135, x_6, x_3);
lean_inc(x_129);
x_138 = lean_array_uset(x_136, x_6, x_129);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
lean_ctor_set(x_124, 1, x_139);
lean_ctor_set(x_124, 0, x_129);
return x_124;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_140 = lean_ctor_get(x_124, 0);
x_141 = lean_ctor_get(x_124, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_124);
x_142 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_142, 0, x_113);
lean_ctor_set(x_142, 1, x_114);
lean_ctor_set(x_142, 2, x_115);
lean_ctor_set(x_142, 3, x_116);
lean_ctor_set_uint64(x_142, sizeof(void*)*4, x_117);
x_143 = lean_expr_update_let(x_142, x_119, x_122, x_140);
x_144 = lean_ctor_get(x_141, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_141, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_146 = x_141;
} else {
 lean_dec_ref(x_141);
 x_146 = lean_box(0);
}
x_147 = lean_array_uset(x_144, x_6, x_3);
lean_inc(x_143);
x_148 = lean_array_uset(x_145, x_6, x_143);
if (lean_is_scalar(x_146)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_146;
}
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_143);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
case 10:
{
lean_object* x_151; lean_object* x_152; uint64_t x_153; lean_object* x_154; uint8_t x_155; 
x_151 = lean_ctor_get(x_3, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_3, 1);
lean_inc(x_152);
x_153 = lean_ctor_get_uint64(x_3, sizeof(void*)*2);
lean_inc(x_152);
x_154 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_152, x_4);
x_155 = !lean_is_exclusive(x_154);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_156 = lean_ctor_get(x_154, 0);
x_157 = lean_ctor_get(x_154, 1);
x_158 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_158, 0, x_151);
lean_ctor_set(x_158, 1, x_152);
lean_ctor_set_uint64(x_158, sizeof(void*)*2, x_153);
x_159 = lean_expr_update_mdata(x_158, x_156);
x_160 = !lean_is_exclusive(x_157);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_161 = lean_ctor_get(x_157, 0);
x_162 = lean_ctor_get(x_157, 1);
x_163 = lean_array_uset(x_161, x_6, x_3);
lean_inc(x_159);
x_164 = lean_array_uset(x_162, x_6, x_159);
lean_ctor_set(x_157, 1, x_164);
lean_ctor_set(x_157, 0, x_163);
lean_ctor_set(x_154, 0, x_159);
return x_154;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_165 = lean_ctor_get(x_157, 0);
x_166 = lean_ctor_get(x_157, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_157);
x_167 = lean_array_uset(x_165, x_6, x_3);
lean_inc(x_159);
x_168 = lean_array_uset(x_166, x_6, x_159);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
lean_ctor_set(x_154, 1, x_169);
lean_ctor_set(x_154, 0, x_159);
return x_154;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_170 = lean_ctor_get(x_154, 0);
x_171 = lean_ctor_get(x_154, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_154);
x_172 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_172, 0, x_151);
lean_ctor_set(x_172, 1, x_152);
lean_ctor_set_uint64(x_172, sizeof(void*)*2, x_153);
x_173 = lean_expr_update_mdata(x_172, x_170);
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_171, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_176 = x_171;
} else {
 lean_dec_ref(x_171);
 x_176 = lean_box(0);
}
x_177 = lean_array_uset(x_174, x_6, x_3);
lean_inc(x_173);
x_178 = lean_array_uset(x_175, x_6, x_173);
if (lean_is_scalar(x_176)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_176;
}
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_173);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
case 11:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint64_t x_184; lean_object* x_185; uint8_t x_186; 
x_181 = lean_ctor_get(x_3, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_3, 1);
lean_inc(x_182);
x_183 = lean_ctor_get(x_3, 2);
lean_inc(x_183);
x_184 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
lean_inc(x_183);
x_185 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_2, x_183, x_4);
x_186 = !lean_is_exclusive(x_185);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_187 = lean_ctor_get(x_185, 0);
x_188 = lean_ctor_get(x_185, 1);
x_189 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_189, 0, x_181);
lean_ctor_set(x_189, 1, x_182);
lean_ctor_set(x_189, 2, x_183);
lean_ctor_set_uint64(x_189, sizeof(void*)*3, x_184);
x_190 = lean_expr_update_proj(x_189, x_187);
x_191 = !lean_is_exclusive(x_188);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_192 = lean_ctor_get(x_188, 0);
x_193 = lean_ctor_get(x_188, 1);
x_194 = lean_array_uset(x_192, x_6, x_3);
lean_inc(x_190);
x_195 = lean_array_uset(x_193, x_6, x_190);
lean_ctor_set(x_188, 1, x_195);
lean_ctor_set(x_188, 0, x_194);
lean_ctor_set(x_185, 0, x_190);
return x_185;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_196 = lean_ctor_get(x_188, 0);
x_197 = lean_ctor_get(x_188, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_188);
x_198 = lean_array_uset(x_196, x_6, x_3);
lean_inc(x_190);
x_199 = lean_array_uset(x_197, x_6, x_190);
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
lean_ctor_set(x_185, 1, x_200);
lean_ctor_set(x_185, 0, x_190);
return x_185;
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_201 = lean_ctor_get(x_185, 0);
x_202 = lean_ctor_get(x_185, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_185);
x_203 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_203, 0, x_181);
lean_ctor_set(x_203, 1, x_182);
lean_ctor_set(x_203, 2, x_183);
lean_ctor_set_uint64(x_203, sizeof(void*)*3, x_184);
x_204 = lean_expr_update_proj(x_203, x_201);
x_205 = lean_ctor_get(x_202, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_202, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_207 = x_202;
} else {
 lean_dec_ref(x_202);
 x_207 = lean_box(0);
}
x_208 = lean_array_uset(x_205, x_6, x_3);
lean_inc(x_204);
x_209 = lean_array_uset(x_206, x_6, x_204);
if (lean_is_scalar(x_207)) {
 x_210 = lean_alloc_ctor(0, 2, 0);
} else {
 x_210 = x_207;
}
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_204);
lean_ctor_set(x_211, 1, x_210);
return x_211;
}
}
default: 
{
lean_object* x_212; 
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_3);
lean_ctor_set(x_212, 1, x_4);
return x_212;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = 8192;
x_4 = l_Lean_Expr_ReplaceImpl_initCache;
x_5 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit___at_Lean_Elab_Term_MutualClosure_Replacement_apply___spec__1(x_1, x_5, x_3, x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_Replacement_apply___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_Elab_Term_MutualClosure_pushMain___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_5, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_5, x_16);
lean_dec(x_5);
x_18 = lean_nat_sub(x_4, x_17);
x_19 = lean_nat_sub(x_18, x_16);
lean_dec(x_18);
x_20 = l_Lean_Elab_instInhabitedDefViewElabHeader;
x_21 = lean_array_get(x_20, x_2, x_19);
x_22 = l_Lean_instInhabitedExpr;
x_23 = lean_array_get(x_22, x_3, x_19);
lean_dec(x_19);
x_24 = 0;
x_25 = 1;
lean_inc(x_9);
lean_inc(x_1);
x_26 = l_Lean_Meta_mkLambdaFVars(x_1, x_23, x_24, x_25, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
x_31 = lean_ctor_get_uint8(x_21, sizeof(void*)*8);
x_32 = lean_ctor_get(x_21, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_21, 6);
lean_inc(x_33);
lean_dec(x_21);
lean_inc(x_9);
lean_inc(x_1);
x_34 = l_Lean_Meta_mkForallFVars(x_1, x_33, x_24, x_25, x_9, x_10, x_11, x_12, x_28);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_getDeclarationSelectionRef(x_29);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_30);
lean_ctor_set(x_39, 3, x_32);
lean_ctor_set(x_39, 4, x_35);
lean_ctor_set(x_39, 5, x_27);
lean_ctor_set_uint8(x_39, sizeof(void*)*6, x_31);
x_40 = lean_array_push(x_6, x_39);
x_5 = x_17;
x_6 = x_40;
x_13 = x_36;
goto _start;
}
else
{
uint8_t x_42; 
lean_dec(x_32);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_34);
if (x_42 == 0)
{
return x_34;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_34, 0);
x_44 = lean_ctor_get(x_34, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_34);
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
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_26);
if (x_46 == 0)
{
return x_26;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_26, 0);
x_48 = lean_ctor_get(x_26, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_26);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_6);
lean_ctor_set(x_50, 1, x_13);
return x_50;
}
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_pushMain(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_get_size(x_3);
lean_inc(x_12);
x_13 = l_Nat_foldM_loop___at_Lean_Elab_Term_MutualClosure_pushMain___spec__1(x_2, x_3, x_4, x_12, x_12, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_12);
return x_13;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_Elab_Term_MutualClosure_pushMain___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Nat_foldM_loop___at_Lean_Elab_Term_MutualClosure_pushMain___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_pushMain___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_MutualClosure_pushMain(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_6, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 7);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 8);
lean_inc(x_13);
lean_dec(x_6);
lean_inc(x_9);
x_14 = l_Lean_Meta_Closure_mkForall(x_9, x_12);
lean_dec(x_12);
x_15 = l_Lean_Meta_Closure_mkLambda(x_9, x_13);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_19 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 2);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 3);
lean_inc(x_17);
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_10);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_18);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_21);
x_23 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_23, 0, x_8);
lean_ctor_set(x_23, 1, x_16);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_11);
lean_ctor_set(x_23, 4, x_14);
lean_ctor_set(x_23, 5, x_15);
lean_ctor_set_uint8(x_23, sizeof(void*)*6, x_1);
x_24 = lean_array_push(x_3, x_23);
x_3 = x_24;
x_4 = x_7;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_pushLetRecs(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(x_3, x_4, x_1, x_2);
return x_5;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(x_5, x_2, x_3, x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_pushLetRecs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Elab_Term_MutualClosure_pushLetRecs(x_1, x_2, x_5, x_4);
lean_dec(x_4);
return x_6;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getKindForLetRecs___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
lean_dec(x_5);
x_7 = l_Lean_Elab_DefKind_isTheorem(x_6);
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
uint8_t l_Lean_Elab_Term_MutualClosure_getKindForLetRecs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
size_t x_8; size_t x_9; uint8_t x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getKindForLetRecs___spec__1(x_1, x_8, x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getKindForLetRecs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getKindForLetRecs___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_getKindForLetRecs___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_MutualClosure_getKindForLetRecs(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get(x_5, 1);
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
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__2(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get(x_5, 1);
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
uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__3(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*2 + 1);
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
lean_object* l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_24; 
lean_dec(x_3);
x_24 = l_Lean_Elab_instInhabitedModifiers___closed__1;
return x_24;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_le(x_3, x_3);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = 0;
x_6 = x_26;
goto block_23;
}
else
{
size_t x_27; size_t x_28; uint8_t x_29; 
x_27 = 0;
x_28 = lean_usize_of_nat(x_3);
x_29 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__3(x_1, x_27, x_28);
x_6 = x_29;
goto block_23;
}
}
block_23:
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_8 = 0;
x_9 = 0;
x_10 = l_Array_empty___closed__1;
x_11 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_8);
lean_ctor_set_uint8(x_11, sizeof(void*)*2 + 1, x_6);
lean_ctor_set_uint8(x_11, sizeof(void*)*2 + 2, x_9);
lean_ctor_set_uint8(x_11, sizeof(void*)*2 + 3, x_9);
return x_11;
}
else
{
size_t x_12; size_t x_13; uint8_t x_14; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_14 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__1(x_1, x_12, x_13);
if (x_5 == 0)
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_15 = 0;
x_16 = 0;
x_17 = l_Array_empty___closed__1;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_14);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_16);
return x_18;
}
else
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__2(x_1, x_12, x_13);
x_20 = 0;
x_21 = l_Array_empty___closed__1;
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_14);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_19);
return x_22;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__2(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___spec__3(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = lean_ctor_get(x_9, 1);
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
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_check(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 8);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Meta_check(x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 5);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 6);
lean_inc(x_14);
x_15 = lean_ctor_get(x_11, 7);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__1___boxed), 8, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__2___boxed), 9, 1);
lean_closure_set(x_17, 0, x_11);
x_18 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_13, x_14, x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_1 = x_12;
x_8 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
x_18 = l_Lean_Meta_instantiateMVars(x_17, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
x_18 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtHeader(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_12, 2);
x_18 = lean_ctor_get(x_12, 3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_ctor_set(x_12, 3, x_20);
x_22 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_ctor_set(x_1, 1, x_24);
lean_ctor_set(x_22, 0, x_1);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_22, 0);
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_22);
lean_ctor_set(x_1, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_free_object(x_1);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
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
lean_free_object(x_12);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_12, 0);
x_38 = lean_ctor_get(x_12, 1);
x_39 = lean_ctor_get(x_12, 2);
x_40 = lean_ctor_get(x_12, 3);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_41 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_44, 0, x_37);
lean_ctor_set(x_44, 1, x_38);
lean_ctor_set(x_44, 2, x_39);
lean_ctor_set(x_44, 3, x_42);
x_45 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
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
lean_ctor_set(x_1, 1, x_46);
lean_ctor_set(x_1, 0, x_44);
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_1);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_44);
lean_free_object(x_1);
x_50 = lean_ctor_get(x_45, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_52 = x_45;
} else {
 lean_dec_ref(x_45);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_free_object(x_1);
lean_dec(x_36);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_54 = lean_ctor_get(x_41, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_41, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_56 = x_41;
} else {
 lean_dec_ref(x_41);
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
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_58 = lean_ctor_get(x_1, 0);
x_59 = lean_ctor_get(x_1, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_1);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_58, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_58, 3);
lean_inc(x_63);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 lean_ctor_release(x_58, 2);
 lean_ctor_release(x_58, 3);
 x_64 = x_58;
} else {
 lean_dec_ref(x_58);
 x_64 = lean_box(0);
}
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_65 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(x_63, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
if (lean_is_scalar(x_64)) {
 x_68 = lean_alloc_ctor(0, 4, 0);
} else {
 x_68 = x_64;
}
lean_ctor_set(x_68, 0, x_60);
lean_ctor_set(x_68, 1, x_61);
lean_ctor_set(x_68, 2, x_62);
lean_ctor_set(x_68, 3, x_66);
x_69 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_59, x_2, x_3, x_4, x_5, x_6, x_7, x_67);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_72 = x_69;
} else {
 lean_dec_ref(x_69);
 x_72 = lean_box(0);
}
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_70);
if (lean_is_scalar(x_72)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_72;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_71);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_68);
x_75 = lean_ctor_get(x_69, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_69, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_77 = x_69;
} else {
 lean_dec_ref(x_69);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_64);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_79 = lean_ctor_get(x_65, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_65, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_81 = x_65;
} else {
 lean_dec_ref(x_65);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_box(0);
x_9 = l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(x_8, x_1, x_3, x_2);
lean_inc(x_4);
x_10 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(x_9, x_4);
x_11 = x_6 < x_5;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_4);
x_12 = x_7;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_array_uget(x_7, x_6);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_7, x_6, x_14);
x_16 = x_13;
x_17 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_10, x_16);
lean_dec(x_10);
x_18 = 1;
x_19 = x_6 + x_18;
x_20 = x_17;
x_21 = lean_array_uset(x_15, x_6, x_20);
x_6 = x_19;
x_7 = x_21;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_10, 6);
x_13 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_12);
lean_ctor_set(x_10, 6, x_13);
x_14 = 1;
x_15 = x_3 + x_14;
x_16 = x_10;
x_17 = lean_array_uset(x_9, x_3, x_16);
x_3 = x_15;
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
x_21 = lean_ctor_get_uint8(x_10, sizeof(void*)*8);
x_22 = lean_ctor_get(x_10, 2);
x_23 = lean_ctor_get(x_10, 3);
x_24 = lean_ctor_get(x_10, 4);
x_25 = lean_ctor_get(x_10, 5);
x_26 = lean_ctor_get(x_10, 6);
x_27 = lean_ctor_get(x_10, 7);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_28 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_26);
x_29 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_20);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_23);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set(x_29, 6, x_28);
lean_ctor_set(x_29, 7, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*8, x_21);
x_30 = 1;
x_31 = x_3 + x_30;
x_32 = x_29;
x_33 = lean_array_uset(x_9, x_3, x_32);
x_3 = x_31;
x_4 = x_33;
goto _start;
}
}
}
}
lean_object* l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_10 = lean_ctor_get(x_4, 3);
lean_dec(x_10);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_5, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_5, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 4);
lean_inc(x_15);
x_16 = lean_ctor_get(x_5, 5);
lean_inc(x_16);
x_17 = lean_ctor_get(x_5, 6);
lean_inc(x_17);
x_18 = lean_ctor_get(x_5, 9);
lean_inc(x_18);
x_19 = lean_ctor_get(x_5, 7);
lean_inc(x_19);
x_20 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_19);
x_21 = !lean_is_exclusive(x_5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_5, 8);
x_23 = lean_ctor_get(x_5, 9);
lean_dec(x_23);
x_24 = lean_ctor_get(x_5, 7);
lean_dec(x_24);
x_25 = lean_ctor_get(x_5, 6);
lean_dec(x_25);
x_26 = lean_ctor_get(x_5, 5);
lean_dec(x_26);
x_27 = lean_ctor_get(x_5, 4);
lean_dec(x_27);
x_28 = lean_ctor_get(x_5, 3);
lean_dec(x_28);
x_29 = lean_ctor_get(x_5, 2);
lean_dec(x_29);
x_30 = lean_ctor_get(x_5, 1);
lean_dec(x_30);
x_31 = lean_ctor_get(x_5, 0);
lean_dec(x_31);
x_32 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_22);
lean_ctor_set(x_5, 8, x_32);
lean_ctor_set(x_5, 7, x_20);
x_33 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_1, x_7);
lean_ctor_set(x_2, 1, x_33);
return x_2;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_5, 8);
lean_inc(x_34);
lean_dec(x_5);
x_35 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_34);
x_36 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_36, 0, x_11);
lean_ctor_set(x_36, 1, x_12);
lean_ctor_set(x_36, 2, x_13);
lean_ctor_set(x_36, 3, x_14);
lean_ctor_set(x_36, 4, x_15);
lean_ctor_set(x_36, 5, x_16);
lean_ctor_set(x_36, 6, x_17);
lean_ctor_set(x_36, 7, x_20);
lean_ctor_set(x_36, 8, x_35);
lean_ctor_set(x_36, 9, x_18);
lean_ctor_set(x_4, 3, x_36);
x_37 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_1, x_7);
lean_ctor_set(x_2, 1, x_37);
return x_2;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_38 = lean_ctor_get(x_4, 0);
x_39 = lean_ctor_get(x_4, 1);
x_40 = lean_ctor_get(x_4, 2);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
x_41 = lean_ctor_get(x_5, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_5, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_5, 2);
lean_inc(x_43);
x_44 = lean_ctor_get(x_5, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_5, 4);
lean_inc(x_45);
x_46 = lean_ctor_get(x_5, 5);
lean_inc(x_46);
x_47 = lean_ctor_get(x_5, 6);
lean_inc(x_47);
x_48 = lean_ctor_get(x_5, 9);
lean_inc(x_48);
x_49 = lean_ctor_get(x_5, 7);
lean_inc(x_49);
x_50 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_49);
x_51 = lean_ctor_get(x_5, 8);
lean_inc(x_51);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 lean_ctor_release(x_5, 8);
 lean_ctor_release(x_5, 9);
 x_52 = x_5;
} else {
 lean_dec_ref(x_5);
 x_52 = lean_box(0);
}
x_53 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_51);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 10, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_41);
lean_ctor_set(x_54, 1, x_42);
lean_ctor_set(x_54, 2, x_43);
lean_ctor_set(x_54, 3, x_44);
lean_ctor_set(x_54, 4, x_45);
lean_ctor_set(x_54, 5, x_46);
lean_ctor_set(x_54, 6, x_47);
lean_ctor_set(x_54, 7, x_50);
lean_ctor_set(x_54, 8, x_53);
lean_ctor_set(x_54, 9, x_48);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_38);
lean_ctor_set(x_55, 1, x_39);
lean_ctor_set(x_55, 2, x_40);
lean_ctor_set(x_55, 3, x_54);
x_56 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_1, x_7);
lean_ctor_set(x_2, 1, x_56);
lean_ctor_set(x_2, 0, x_55);
return x_2;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_57 = lean_ctor_get(x_2, 1);
lean_inc(x_57);
lean_dec(x_2);
x_58 = lean_ctor_get(x_4, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_4, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_4, 2);
lean_inc(x_60);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 x_61 = x_4;
} else {
 lean_dec_ref(x_4);
 x_61 = lean_box(0);
}
x_62 = lean_ctor_get(x_5, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_5, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_5, 2);
lean_inc(x_64);
x_65 = lean_ctor_get(x_5, 3);
lean_inc(x_65);
x_66 = lean_ctor_get(x_5, 4);
lean_inc(x_66);
x_67 = lean_ctor_get(x_5, 5);
lean_inc(x_67);
x_68 = lean_ctor_get(x_5, 6);
lean_inc(x_68);
x_69 = lean_ctor_get(x_5, 9);
lean_inc(x_69);
x_70 = lean_ctor_get(x_5, 7);
lean_inc(x_70);
x_71 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_70);
x_72 = lean_ctor_get(x_5, 8);
lean_inc(x_72);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 lean_ctor_release(x_5, 8);
 lean_ctor_release(x_5, 9);
 x_73 = x_5;
} else {
 lean_dec_ref(x_5);
 x_73 = lean_box(0);
}
x_74 = l_Lean_Elab_Term_MutualClosure_Replacement_apply(x_1, x_72);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 10, 0);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_62);
lean_ctor_set(x_75, 1, x_63);
lean_ctor_set(x_75, 2, x_64);
lean_ctor_set(x_75, 3, x_65);
lean_ctor_set(x_75, 4, x_66);
lean_ctor_set(x_75, 5, x_67);
lean_ctor_set(x_75, 6, x_68);
lean_ctor_set(x_75, 7, x_71);
lean_ctor_set(x_75, 8, x_74);
lean_ctor_set(x_75, 9, x_69);
if (lean_is_scalar(x_61)) {
 x_76 = lean_alloc_ctor(0, 4, 0);
} else {
 x_76 = x_61;
}
lean_ctor_set(x_76, 0, x_58);
lean_ctor_set(x_76, 1, x_59);
lean_ctor_set(x_76, 2, x_60);
lean_ctor_set(x_76, 3, x_75);
x_77 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_1, x_57);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_MutualClosure_main___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MutualClosure_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_13 = lean_array_get_size(x_3);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
lean_inc(x_3);
x_16 = x_3;
x_17 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Intro_0__Lean_Meta_introNImp___spec__1(x_14, x_15, x_16);
x_18 = x_17;
x_19 = l_List_redLength___rarg(x_5);
x_20 = lean_mk_empty_array_with_capacity(x_19);
lean_dec(x_19);
lean_inc(x_5);
x_21 = l_List_toArrayAux___rarg(x_5, x_20);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_24 = x_21;
x_25 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__1(x_23, x_15, x_24);
x_26 = x_25;
x_27 = l_Array_append___rarg(x_26, x_18);
x_28 = lean_st_ref_get(x_11, x_12);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_get(x_9, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_5);
x_34 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkFreeVarMap(x_33, x_1, x_18, x_27, x_5);
lean_dec(x_27);
lean_dec(x_18);
x_35 = l_Lean_Meta_resetZetaFVarIds___rarg(x_9, x_10, x_11, x_32);
x_36 = lean_ctor_get(x_8, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_8);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_8, 0);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
uint8_t x_41; lean_object* x_42; 
x_41 = 1;
lean_ctor_set_uint8(x_36, 7, x_41);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_42 = l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_44 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_34, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_43);
lean_dec(x_34);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_array_get_size(x_4);
x_48 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_49 = x_4;
x_50 = lean_box_usize(x_48);
x_51 = l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
x_52 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3___boxed), 10, 3);
lean_closure_set(x_52, 0, x_50);
lean_closure_set(x_52, 1, x_51);
lean_closure_set(x_52, 2, x_49);
x_53 = x_52;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_54 = lean_apply_7(x_53, x_6, x_7, x_8, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; size_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_array_get_size(x_2);
x_58 = lean_usize_of_nat(x_57);
lean_dec(x_57);
x_59 = x_2;
x_60 = lean_box_usize(x_58);
x_61 = l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
x_62 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4___boxed), 10, 3);
lean_closure_set(x_62, 0, x_60);
lean_closure_set(x_62, 1, x_61);
lean_closure_set(x_62, 2, x_59);
x_63 = x_62;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_64 = lean_apply_7(x_63, x_6, x_7, x_8, x_9, x_10, x_11, x_56);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_67 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_45, x_6, x_7, x_8, x_9, x_10, x_11, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; size_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_box(0);
x_71 = l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(x_70, x_1, x_65, x_3);
lean_inc(x_68);
x_72 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(x_71, x_68);
x_73 = lean_array_get_size(x_55);
x_74 = lean_usize_of_nat(x_73);
lean_dec(x_73);
x_75 = x_55;
lean_inc(x_68);
x_76 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6(x_1, x_3, x_65, x_68, x_74, x_15, x_75);
lean_dec(x_3);
x_77 = x_76;
x_78 = lean_array_get_size(x_65);
x_79 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_80 = x_65;
x_81 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7(x_72, x_79, x_15, x_80);
x_82 = x_81;
x_83 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_72, x_68);
lean_dec(x_72);
x_84 = l_Lean_Elab_Term_MutualClosure_getKindForLetRecs(x_82);
x_85 = l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs(x_82);
x_86 = l_Array_empty___closed__1;
x_87 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(x_84, x_85, x_86, x_83);
lean_dec(x_85);
x_88 = l_Lean_Elab_Term_MutualClosure_pushMain(x_87, x_1, x_82, x_77, x_6, x_7, x_8, x_9, x_10, x_11, x_69);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_77);
lean_dec(x_82);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
return x_88;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_88);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_88);
if (x_93 == 0)
{
return x_88;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_88, 0);
x_95 = lean_ctor_get(x_88, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_88);
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
lean_dec(x_65);
lean_dec(x_55);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_67);
if (x_97 == 0)
{
return x_67;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_67, 0);
x_99 = lean_ctor_get(x_67, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_67);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_55);
lean_dec(x_45);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_64);
if (x_101 == 0)
{
return x_64;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_64, 0);
x_103 = lean_ctor_get(x_64, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_64);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_45);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_54);
if (x_105 == 0)
{
return x_54;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_54, 0);
x_107 = lean_ctor_get(x_54, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_54);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_44);
if (x_109 == 0)
{
return x_44;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_44, 0);
x_111 = lean_ctor_get(x_44, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_44);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_8);
lean_dec(x_34);
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
x_113 = !lean_is_exclusive(x_42);
if (x_113 == 0)
{
return x_42;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_42, 0);
x_115 = lean_ctor_get(x_42, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_42);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; uint8_t x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
x_117 = lean_ctor_get_uint8(x_36, 0);
x_118 = lean_ctor_get_uint8(x_36, 1);
x_119 = lean_ctor_get_uint8(x_36, 2);
x_120 = lean_ctor_get_uint8(x_36, 3);
x_121 = lean_ctor_get_uint8(x_36, 4);
x_122 = lean_ctor_get_uint8(x_36, 5);
x_123 = lean_ctor_get_uint8(x_36, 6);
x_124 = lean_ctor_get_uint8(x_36, 8);
x_125 = lean_ctor_get_uint8(x_36, 9);
lean_dec(x_36);
x_126 = 1;
x_127 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_127, 0, x_117);
lean_ctor_set_uint8(x_127, 1, x_118);
lean_ctor_set_uint8(x_127, 2, x_119);
lean_ctor_set_uint8(x_127, 3, x_120);
lean_ctor_set_uint8(x_127, 4, x_121);
lean_ctor_set_uint8(x_127, 5, x_122);
lean_ctor_set_uint8(x_127, 6, x_123);
lean_ctor_set_uint8(x_127, 7, x_126);
lean_ctor_set_uint8(x_127, 8, x_124);
lean_ctor_set_uint8(x_127, 9, x_125);
lean_ctor_set(x_8, 0, x_127);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_128 = l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
lean_dec(x_128);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_130 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_34, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_129);
lean_dec(x_34);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; size_t x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_array_get_size(x_4);
x_134 = lean_usize_of_nat(x_133);
lean_dec(x_133);
x_135 = x_4;
x_136 = lean_box_usize(x_134);
x_137 = l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
x_138 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3___boxed), 10, 3);
lean_closure_set(x_138, 0, x_136);
lean_closure_set(x_138, 1, x_137);
lean_closure_set(x_138, 2, x_135);
x_139 = x_138;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_140 = lean_apply_7(x_139, x_6, x_7, x_8, x_9, x_10, x_11, x_132);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; size_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = lean_array_get_size(x_2);
x_144 = lean_usize_of_nat(x_143);
lean_dec(x_143);
x_145 = x_2;
x_146 = lean_box_usize(x_144);
x_147 = l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
x_148 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4___boxed), 10, 3);
lean_closure_set(x_148, 0, x_146);
lean_closure_set(x_148, 1, x_147);
lean_closure_set(x_148, 2, x_145);
x_149 = x_148;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_150 = lean_apply_7(x_149, x_6, x_7, x_8, x_9, x_10, x_11, x_142);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_153 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_131, x_6, x_7, x_8, x_9, x_10, x_11, x_152);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; size_t x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; size_t x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
x_156 = lean_box(0);
x_157 = l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(x_156, x_1, x_151, x_3);
lean_inc(x_154);
x_158 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(x_157, x_154);
x_159 = lean_array_get_size(x_141);
x_160 = lean_usize_of_nat(x_159);
lean_dec(x_159);
x_161 = x_141;
lean_inc(x_154);
x_162 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6(x_1, x_3, x_151, x_154, x_160, x_15, x_161);
lean_dec(x_3);
x_163 = x_162;
x_164 = lean_array_get_size(x_151);
x_165 = lean_usize_of_nat(x_164);
lean_dec(x_164);
x_166 = x_151;
x_167 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7(x_158, x_165, x_15, x_166);
x_168 = x_167;
x_169 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_158, x_154);
lean_dec(x_158);
x_170 = l_Lean_Elab_Term_MutualClosure_getKindForLetRecs(x_168);
x_171 = l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs(x_168);
x_172 = l_Array_empty___closed__1;
x_173 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(x_170, x_171, x_172, x_169);
lean_dec(x_171);
x_174 = l_Lean_Elab_Term_MutualClosure_pushMain(x_173, x_1, x_168, x_163, x_6, x_7, x_8, x_9, x_10, x_11, x_155);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_163);
lean_dec(x_168);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_177 = x_174;
} else {
 lean_dec_ref(x_174);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_179 = lean_ctor_get(x_174, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_174, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_181 = x_174;
} else {
 lean_dec_ref(x_174);
 x_181 = lean_box(0);
}
if (lean_is_scalar(x_181)) {
 x_182 = lean_alloc_ctor(1, 2, 0);
} else {
 x_182 = x_181;
}
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_180);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_151);
lean_dec(x_141);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_183 = lean_ctor_get(x_153, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_153, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_185 = x_153;
} else {
 lean_dec_ref(x_153);
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
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_141);
lean_dec(x_131);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_187 = lean_ctor_get(x_150, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_150, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_189 = x_150;
} else {
 lean_dec_ref(x_150);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_131);
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_191 = lean_ctor_get(x_140, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_140, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_193 = x_140;
} else {
 lean_dec_ref(x_140);
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
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_195 = lean_ctor_get(x_130, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_130, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_197 = x_130;
} else {
 lean_dec_ref(x_130);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_8);
lean_dec(x_34);
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
x_199 = lean_ctor_get(x_128, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_128, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_201 = x_128;
} else {
 lean_dec_ref(x_128);
 x_201 = lean_box(0);
}
if (lean_is_scalar(x_201)) {
 x_202 = lean_alloc_ctor(1, 2, 0);
} else {
 x_202 = x_201;
}
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_200);
return x_202;
}
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; uint8_t x_207; uint8_t x_208; uint8_t x_209; uint8_t x_210; uint8_t x_211; uint8_t x_212; uint8_t x_213; uint8_t x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_203 = lean_ctor_get(x_8, 1);
x_204 = lean_ctor_get(x_8, 2);
x_205 = lean_ctor_get(x_8, 3);
lean_inc(x_205);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_8);
x_206 = lean_ctor_get_uint8(x_36, 0);
x_207 = lean_ctor_get_uint8(x_36, 1);
x_208 = lean_ctor_get_uint8(x_36, 2);
x_209 = lean_ctor_get_uint8(x_36, 3);
x_210 = lean_ctor_get_uint8(x_36, 4);
x_211 = lean_ctor_get_uint8(x_36, 5);
x_212 = lean_ctor_get_uint8(x_36, 6);
x_213 = lean_ctor_get_uint8(x_36, 8);
x_214 = lean_ctor_get_uint8(x_36, 9);
if (lean_is_exclusive(x_36)) {
 x_215 = x_36;
} else {
 lean_dec_ref(x_36);
 x_215 = lean_box(0);
}
x_216 = 1;
if (lean_is_scalar(x_215)) {
 x_217 = lean_alloc_ctor(0, 0, 10);
} else {
 x_217 = x_215;
}
lean_ctor_set_uint8(x_217, 0, x_206);
lean_ctor_set_uint8(x_217, 1, x_207);
lean_ctor_set_uint8(x_217, 2, x_208);
lean_ctor_set_uint8(x_217, 3, x_209);
lean_ctor_set_uint8(x_217, 4, x_210);
lean_ctor_set_uint8(x_217, 5, x_211);
lean_ctor_set_uint8(x_217, 6, x_212);
lean_ctor_set_uint8(x_217, 7, x_216);
lean_ctor_set_uint8(x_217, 8, x_213);
lean_ctor_set_uint8(x_217, 9, x_214);
x_218 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_203);
lean_ctor_set(x_218, 2, x_204);
lean_ctor_set(x_218, 3, x_205);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_218);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_219 = l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2(x_5, x_6, x_7, x_218, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
lean_dec(x_219);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_218);
lean_inc(x_7);
lean_inc(x_6);
x_221 = l_List_mapM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkLetRecClosures___spec__2(x_34, x_5, x_6, x_7, x_218, x_9, x_10, x_11, x_220);
lean_dec(x_34);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; size_t x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = lean_array_get_size(x_4);
x_225 = lean_usize_of_nat(x_224);
lean_dec(x_224);
x_226 = x_4;
x_227 = lean_box_usize(x_225);
x_228 = l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
x_229 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3___boxed), 10, 3);
lean_closure_set(x_229, 0, x_227);
lean_closure_set(x_229, 1, x_228);
lean_closure_set(x_229, 2, x_226);
x_230 = x_229;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_218);
lean_inc(x_7);
lean_inc(x_6);
x_231 = lean_apply_7(x_230, x_6, x_7, x_218, x_9, x_10, x_11, x_223);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; size_t x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
x_234 = lean_array_get_size(x_2);
x_235 = lean_usize_of_nat(x_234);
lean_dec(x_234);
x_236 = x_2;
x_237 = lean_box_usize(x_235);
x_238 = l_Lean_Elab_Term_MutualClosure_main___boxed__const__1;
x_239 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4___boxed), 10, 3);
lean_closure_set(x_239, 0, x_237);
lean_closure_set(x_239, 1, x_238);
lean_closure_set(x_239, 2, x_236);
x_240 = x_239;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_218);
lean_inc(x_7);
lean_inc(x_6);
x_241 = lean_apply_7(x_240, x_6, x_7, x_218, x_9, x_10, x_11, x_233);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_218);
x_244 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_222, x_6, x_7, x_218, x_9, x_10, x_11, x_243);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; size_t x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; size_t x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; uint8_t x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_244, 1);
lean_inc(x_246);
lean_dec(x_244);
x_247 = lean_box(0);
x_248 = l_Lean_Elab_Term_MutualClosure_insertReplacementForMainFns(x_247, x_1, x_242, x_3);
lean_inc(x_245);
x_249 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_insertReplacementForLetRecs___spec__1(x_248, x_245);
x_250 = lean_array_get_size(x_232);
x_251 = lean_usize_of_nat(x_250);
lean_dec(x_250);
x_252 = x_232;
lean_inc(x_245);
x_253 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6(x_1, x_3, x_242, x_245, x_251, x_15, x_252);
lean_dec(x_3);
x_254 = x_253;
x_255 = lean_array_get_size(x_242);
x_256 = lean_usize_of_nat(x_255);
lean_dec(x_255);
x_257 = x_242;
x_258 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7(x_249, x_256, x_15, x_257);
x_259 = x_258;
x_260 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_249, x_245);
lean_dec(x_249);
x_261 = l_Lean_Elab_Term_MutualClosure_getKindForLetRecs(x_259);
x_262 = l_Lean_Elab_Term_MutualClosure_getModifiersForLetRecs(x_259);
x_263 = l_Array_empty___closed__1;
x_264 = l_List_foldl___at_Lean_Elab_Term_MutualClosure_pushLetRecs___spec__1(x_261, x_262, x_263, x_260);
lean_dec(x_262);
x_265 = l_Lean_Elab_Term_MutualClosure_pushMain(x_264, x_1, x_259, x_254, x_6, x_7, x_218, x_9, x_10, x_11, x_246);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_254);
lean_dec(x_259);
if (lean_obj_tag(x_265) == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_268 = x_265;
} else {
 lean_dec_ref(x_265);
 x_268 = lean_box(0);
}
if (lean_is_scalar(x_268)) {
 x_269 = lean_alloc_ctor(0, 2, 0);
} else {
 x_269 = x_268;
}
lean_ctor_set(x_269, 0, x_266);
lean_ctor_set(x_269, 1, x_267);
return x_269;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_270 = lean_ctor_get(x_265, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_265, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_272 = x_265;
} else {
 lean_dec_ref(x_265);
 x_272 = lean_box(0);
}
if (lean_is_scalar(x_272)) {
 x_273 = lean_alloc_ctor(1, 2, 0);
} else {
 x_273 = x_272;
}
lean_ctor_set(x_273, 0, x_270);
lean_ctor_set(x_273, 1, x_271);
return x_273;
}
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
lean_dec(x_242);
lean_dec(x_232);
lean_dec(x_218);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_274 = lean_ctor_get(x_244, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_244, 1);
lean_inc(x_275);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_276 = x_244;
} else {
 lean_dec_ref(x_244);
 x_276 = lean_box(0);
}
if (lean_is_scalar(x_276)) {
 x_277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_277 = x_276;
}
lean_ctor_set(x_277, 0, x_274);
lean_ctor_set(x_277, 1, x_275);
return x_277;
}
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
lean_dec(x_232);
lean_dec(x_222);
lean_dec(x_218);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_278 = lean_ctor_get(x_241, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_241, 1);
lean_inc(x_279);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_280 = x_241;
} else {
 lean_dec_ref(x_241);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(1, 2, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_278);
lean_ctor_set(x_281, 1, x_279);
return x_281;
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_222);
lean_dec(x_218);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_282 = lean_ctor_get(x_231, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_231, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_284 = x_231;
} else {
 lean_dec_ref(x_231);
 x_284 = lean_box(0);
}
if (lean_is_scalar(x_284)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_284;
}
lean_ctor_set(x_285, 0, x_282);
lean_ctor_set(x_285, 1, x_283);
return x_285;
}
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
lean_dec(x_218);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_286 = lean_ctor_get(x_221, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_221, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_288 = x_221;
} else {
 lean_dec_ref(x_221);
 x_288 = lean_box(0);
}
if (lean_is_scalar(x_288)) {
 x_289 = lean_alloc_ctor(1, 2, 0);
} else {
 x_289 = x_288;
}
lean_ctor_set(x_289, 0, x_286);
lean_ctor_set(x_289, 1, x_287);
return x_289;
}
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
lean_dec(x_218);
lean_dec(x_34);
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
x_290 = lean_ctor_get(x_219, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_219, 1);
lean_inc(x_291);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_292 = x_219;
} else {
 lean_dec_ref(x_219);
 x_292 = lean_box(0);
}
if (lean_is_scalar(x_292)) {
 x_293 = lean_alloc_ctor(1, 2, 0);
} else {
 x_293 = x_292;
}
lean_ctor_set(x_293, 0, x_290);
lean_ctor_set(x_293, 1, x_291);
return x_293;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_forM___at_Lean_Elab_Term_MutualClosure_main___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_mapM___at_Lean_Elab_Term_MutualClosure_main___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__6(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at_Lean_Elab_Term_MutualClosure_main___spec__8(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getAllUserLevelNames(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
lean_dec(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_array_fget(x_1, x_3);
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getAllUserLevelNames___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getAllUserLevelNames(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 < x_2;
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_uget(x_1, x_3);
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_4, 1);
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 2);
lean_inc(x_21);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_12);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; 
x_25 = lean_ctor_get(x_17, 2);
lean_dec(x_25);
x_26 = lean_ctor_get(x_17, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_17, 0);
lean_dec(x_27);
x_28 = lean_array_fget(x_19, x_20);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_20, x_29);
lean_dec(x_20);
lean_ctor_set(x_17, 1, x_30);
x_31 = lean_ctor_get_uint8(x_15, sizeof(void*)*6);
lean_dec(x_15);
x_32 = l_Lean_Elab_DefKind_isTheorem(x_31);
if (x_32 == 0)
{
lean_object* x_33; size_t x_34; size_t x_35; 
x_33 = lean_array_push(x_18, x_28);
lean_ctor_set(x_4, 0, x_33);
x_34 = 1;
x_35 = x_3 + x_34;
x_3 = x_35;
goto _start;
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_28);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; 
x_38 = lean_ctor_get(x_28, 6);
x_39 = l_Lean_Elab_Term_levelMVarToParam_x27(x_38, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_ctor_set(x_28, 6, x_40);
x_42 = lean_array_push(x_18, x_28);
lean_ctor_set(x_4, 0, x_42);
x_43 = 1;
x_44 = x_3 + x_43;
x_3 = x_44;
x_12 = x_41;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; 
x_46 = lean_ctor_get(x_28, 0);
x_47 = lean_ctor_get(x_28, 1);
x_48 = lean_ctor_get_uint8(x_28, sizeof(void*)*8);
x_49 = lean_ctor_get(x_28, 2);
x_50 = lean_ctor_get(x_28, 3);
x_51 = lean_ctor_get(x_28, 4);
x_52 = lean_ctor_get(x_28, 5);
x_53 = lean_ctor_get(x_28, 6);
x_54 = lean_ctor_get(x_28, 7);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_28);
x_55 = l_Lean_Elab_Term_levelMVarToParam_x27(x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_58, 0, x_46);
lean_ctor_set(x_58, 1, x_47);
lean_ctor_set(x_58, 2, x_49);
lean_ctor_set(x_58, 3, x_50);
lean_ctor_set(x_58, 4, x_51);
lean_ctor_set(x_58, 5, x_52);
lean_ctor_set(x_58, 6, x_56);
lean_ctor_set(x_58, 7, x_54);
lean_ctor_set_uint8(x_58, sizeof(void*)*8, x_48);
x_59 = lean_array_push(x_18, x_58);
lean_ctor_set(x_4, 0, x_59);
x_60 = 1;
x_61 = x_3 + x_60;
x_3 = x_61;
x_12 = x_57;
goto _start;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; uint8_t x_68; 
lean_dec(x_17);
x_63 = lean_array_fget(x_19, x_20);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_add(x_20, x_64);
lean_dec(x_20);
x_66 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_66, 0, x_19);
lean_ctor_set(x_66, 1, x_65);
lean_ctor_set(x_66, 2, x_21);
x_67 = lean_ctor_get_uint8(x_15, sizeof(void*)*6);
lean_dec(x_15);
x_68 = l_Lean_Elab_DefKind_isTheorem(x_67);
if (x_68 == 0)
{
lean_object* x_69; size_t x_70; size_t x_71; 
x_69 = lean_array_push(x_18, x_63);
lean_ctor_set(x_4, 1, x_66);
lean_ctor_set(x_4, 0, x_69);
x_70 = 1;
x_71 = x_3 + x_70;
x_3 = x_71;
goto _start;
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; size_t x_88; size_t x_89; 
x_73 = lean_ctor_get(x_63, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_63, 1);
lean_inc(x_74);
x_75 = lean_ctor_get_uint8(x_63, sizeof(void*)*8);
x_76 = lean_ctor_get(x_63, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_63, 3);
lean_inc(x_77);
x_78 = lean_ctor_get(x_63, 4);
lean_inc(x_78);
x_79 = lean_ctor_get(x_63, 5);
lean_inc(x_79);
x_80 = lean_ctor_get(x_63, 6);
lean_inc(x_80);
x_81 = lean_ctor_get(x_63, 7);
lean_inc(x_81);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 lean_ctor_release(x_63, 4);
 lean_ctor_release(x_63, 5);
 lean_ctor_release(x_63, 6);
 lean_ctor_release(x_63, 7);
 x_82 = x_63;
} else {
 lean_dec_ref(x_63);
 x_82 = lean_box(0);
}
x_83 = l_Lean_Elab_Term_levelMVarToParam_x27(x_80, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
if (lean_is_scalar(x_82)) {
 x_86 = lean_alloc_ctor(0, 8, 1);
} else {
 x_86 = x_82;
}
lean_ctor_set(x_86, 0, x_73);
lean_ctor_set(x_86, 1, x_74);
lean_ctor_set(x_86, 2, x_76);
lean_ctor_set(x_86, 3, x_77);
lean_ctor_set(x_86, 4, x_78);
lean_ctor_set(x_86, 5, x_79);
lean_ctor_set(x_86, 6, x_84);
lean_ctor_set(x_86, 7, x_81);
lean_ctor_set_uint8(x_86, sizeof(void*)*8, x_75);
x_87 = lean_array_push(x_18, x_86);
lean_ctor_set(x_4, 1, x_66);
lean_ctor_set(x_4, 0, x_87);
x_88 = 1;
x_89 = x_3 + x_88;
x_3 = x_89;
x_12 = x_85;
goto _start;
}
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_91 = lean_ctor_get(x_4, 1);
x_92 = lean_ctor_get(x_4, 0);
lean_inc(x_91);
lean_inc(x_92);
lean_dec(x_4);
x_93 = lean_ctor_get(x_91, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_91, 2);
lean_inc(x_95);
x_96 = lean_nat_dec_lt(x_94, x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_15);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_92);
lean_ctor_set(x_97, 1, x_91);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_12);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; uint8_t x_105; 
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 lean_ctor_release(x_91, 2);
 x_99 = x_91;
} else {
 lean_dec_ref(x_91);
 x_99 = lean_box(0);
}
x_100 = lean_array_fget(x_93, x_94);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_94, x_101);
lean_dec(x_94);
if (lean_is_scalar(x_99)) {
 x_103 = lean_alloc_ctor(0, 3, 0);
} else {
 x_103 = x_99;
}
lean_ctor_set(x_103, 0, x_93);
lean_ctor_set(x_103, 1, x_102);
lean_ctor_set(x_103, 2, x_95);
x_104 = lean_ctor_get_uint8(x_15, sizeof(void*)*6);
lean_dec(x_15);
x_105 = l_Lean_Elab_DefKind_isTheorem(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; size_t x_108; size_t x_109; 
x_106 = lean_array_push(x_92, x_100);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_103);
x_108 = 1;
x_109 = x_3 + x_108;
x_3 = x_109;
x_4 = x_107;
goto _start;
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; size_t x_127; size_t x_128; 
x_111 = lean_ctor_get(x_100, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_100, 1);
lean_inc(x_112);
x_113 = lean_ctor_get_uint8(x_100, sizeof(void*)*8);
x_114 = lean_ctor_get(x_100, 2);
lean_inc(x_114);
x_115 = lean_ctor_get(x_100, 3);
lean_inc(x_115);
x_116 = lean_ctor_get(x_100, 4);
lean_inc(x_116);
x_117 = lean_ctor_get(x_100, 5);
lean_inc(x_117);
x_118 = lean_ctor_get(x_100, 6);
lean_inc(x_118);
x_119 = lean_ctor_get(x_100, 7);
lean_inc(x_119);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 lean_ctor_release(x_100, 2);
 lean_ctor_release(x_100, 3);
 lean_ctor_release(x_100, 4);
 lean_ctor_release(x_100, 5);
 lean_ctor_release(x_100, 6);
 lean_ctor_release(x_100, 7);
 x_120 = x_100;
} else {
 lean_dec_ref(x_100);
 x_120 = lean_box(0);
}
x_121 = l_Lean_Elab_Term_levelMVarToParam_x27(x_118, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
if (lean_is_scalar(x_120)) {
 x_124 = lean_alloc_ctor(0, 8, 1);
} else {
 x_124 = x_120;
}
lean_ctor_set(x_124, 0, x_111);
lean_ctor_set(x_124, 1, x_112);
lean_ctor_set(x_124, 2, x_114);
lean_ctor_set(x_124, 3, x_115);
lean_ctor_set(x_124, 4, x_116);
lean_ctor_set(x_124, 5, x_117);
lean_ctor_set(x_124, 6, x_122);
lean_ctor_set(x_124, 7, x_119);
lean_ctor_set_uint8(x_124, sizeof(void*)*8, x_113);
x_125 = lean_array_push(x_92, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_103);
x_127 = 1;
x_128 = x_3 + x_127;
x_3 = x_128;
x_4 = x_126;
x_12 = x_123;
goto _start;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_toSubarray___rarg(x_2, x_12, x_11);
x_14 = l_Array_empty___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_array_get_size(x_1);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___spec__1(x_1, x_17, x_18, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_17, 2);
x_22 = lean_ctor_get(x_17, 3);
x_23 = lean_ctor_get(x_17, 4);
x_24 = lean_ctor_get(x_17, 5);
x_25 = lean_ctor_get(x_17, 6);
x_26 = lean_ctor_get(x_17, 7);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_27 = l_Lean_Meta_instantiateMVars(x_25, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_ctor_set(x_17, 6, x_28);
x_30 = 1;
x_31 = x_2 + x_30;
x_32 = x_17;
x_33 = lean_array_uset(x_16, x_2, x_32);
x_2 = x_31;
x_3 = x_33;
x_10 = x_29;
goto _start;
}
else
{
uint8_t x_35; 
lean_free_object(x_17);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
x_41 = lean_ctor_get_uint8(x_17, sizeof(void*)*8);
x_42 = lean_ctor_get(x_17, 2);
x_43 = lean_ctor_get(x_17, 3);
x_44 = lean_ctor_get(x_17, 4);
x_45 = lean_ctor_get(x_17, 5);
x_46 = lean_ctor_get(x_17, 6);
x_47 = lean_ctor_get(x_17, 7);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_48 = l_Lean_Meta_instantiateMVars(x_46, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; size_t x_53; lean_object* x_54; lean_object* x_55; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_51, 0, x_39);
lean_ctor_set(x_51, 1, x_40);
lean_ctor_set(x_51, 2, x_42);
lean_ctor_set(x_51, 3, x_43);
lean_ctor_set(x_51, 4, x_44);
lean_ctor_set(x_51, 5, x_45);
lean_ctor_set(x_51, 6, x_49);
lean_ctor_set(x_51, 7, x_47);
lean_ctor_set_uint8(x_51, sizeof(void*)*8, x_41);
x_52 = 1;
x_53 = x_2 + x_52;
x_54 = x_51;
x_55 = lean_array_uset(x_16, x_2, x_54);
x_2 = x_53;
x_3 = x_55;
x_10 = x_50;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_57 = lean_ctor_get(x_48, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_48, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_59 = x_48;
} else {
 lean_dec_ref(x_48);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_st_mk_ref(x_12, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders_process(x_1, x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_8, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_14, x_20);
lean_dec(x_14);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_array_get_size(x_17);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = x_17;
x_26 = lean_box_usize(x_24);
x_27 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed__const__1;
x_28 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___spec__1___boxed), 10, 3);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_27);
lean_closure_set(x_28, 2, x_25);
x_29 = x_28;
x_30 = lean_apply_7(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
return x_30;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_1, 1, x_19);
lean_ctor_set(x_1, 0, x_15);
lean_ctor_set(x_17, 0, x_1);
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
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_free_object(x_1);
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
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
x_31 = lean_ctor_get(x_1, 0);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_33 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_instantiateMVarsAtLetRecToLift(x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_35);
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
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_15 = l_Lean_Elab_Term_MutualClosure_main(x_7, x_1, x_2, x_3, x_4, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Elab_levelMVarToParamPreDecls(x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_21 = l_Lean_Elab_instantiateMVarsAtPreDecls(x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_8);
x_24 = l_Lean_Elab_fixLevelParams(x_22, x_5, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_addPreDefinitions(x_25, x_8, x_9, x_10, x_11, x_12, x_13, x_26);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_21);
if (x_32 == 0)
{
return x_21;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_21, 0);
x_34 = lean_ctor_get(x_21, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_21);
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
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
return x_18;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
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
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 0;
x_17 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_18 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_16, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_array_get_size(x_14);
x_21 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_22 = x_14;
x_23 = lean_box_usize(x_21);
x_24 = l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1;
x_25 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__3___boxed), 10, 3);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
lean_closure_set(x_25, 2, x_22);
x_26 = x_25;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_27 = lean_apply_7(x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_array_get_size(x_1);
x_31 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_32 = x_1;
x_33 = lean_box_usize(x_31);
x_34 = l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1;
x_35 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_MutualClosure_main___spec__4___boxed), 10, 3);
lean_closure_set(x_35, 0, x_33);
lean_closure_set(x_35, 1, x_34);
lean_closure_set(x_35, 2, x_32);
x_36 = x_35;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_37 = lean_apply_7(x_36, x_6, x_7, x_8, x_9, x_10, x_11, x_29);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Elab_Term_getLetRecsToLift___rarg(x_7, x_8, x_9, x_10, x_11, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_43 = l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1(x_41, x_6, x_7, x_8, x_9, x_10, x_11, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_6);
lean_inc_n(x_44, 2);
lean_inc(x_5);
x_46 = l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1(x_5, x_44, x_44, x_6, x_7, x_8, x_9, x_10, x_11, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
lean_inc(x_44);
lean_inc(x_28);
lean_inc(x_38);
x_48 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMutualDef_go___lambda__1), 14, 6);
lean_closure_set(x_48, 0, x_38);
lean_closure_set(x_48, 1, x_5);
lean_closure_set(x_48, 2, x_28);
lean_closure_set(x_48, 3, x_44);
lean_closure_set(x_48, 4, x_2);
lean_closure_set(x_48, 5, x_3);
x_49 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withUsed___rarg(x_4, x_38, x_28, x_44, x_48, x_6, x_7, x_8, x_9, x_10, x_11, x_47);
lean_dec(x_28);
lean_dec(x_38);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_44);
lean_dec(x_38);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_46);
if (x_50 == 0)
{
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_46, 0);
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_46);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_38);
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_43);
if (x_54 == 0)
{
return x_43;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_43, 0);
x_56 = lean_ctor_get(x_43, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_43);
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
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_37);
if (x_58 == 0)
{
return x_37;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_37, 0);
x_60 = lean_ctor_get(x_37, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_37);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_27);
if (x_62 == 0)
{
return x_27;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_27, 0);
x_64 = lean_ctor_get(x_27, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_27);
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
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_18);
if (x_66 == 0)
{
return x_18;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_18, 0);
x_68 = lean_ctor_get(x_18, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_18);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_13);
if (x_70 == 0)
{
return x_13;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_13, 0);
x_72 = lean_ctor_get(x_13, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_13);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabMutualDef_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Elab_Term_getLevelNames___rarg(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders(x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getAllUserLevelNames(x_17);
lean_inc(x_17);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed), 12, 4);
lean_closure_set(x_20, 0, x_17);
lean_closure_set(x_20, 1, x_11);
lean_closure_set(x_20, 2, x_19);
lean_closure_set(x_20, 3, x_1);
x_21 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_withFunLocalDecls___rarg(x_17, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
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
lean_object* l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_mapM___at_Lean_Elab_Term_elabMutualDef_go___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_elabMutualDef_go___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabMutualDef_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabMutualDef_go(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_elabMutualDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_isExample(x_2);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabMutualDef_go(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_st_ref_get(x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_Elab_Term_elabMutualDef_go(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_17);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set_tag(x_26, 1);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_elabMutualDef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabMutualDef(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_isAttribute(x_10, x_3);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_2);
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_3);
x_13 = l_Lean_Elab_elabAttr___rarg___lambda__20___closed__2;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_Meta_Simp_simp_simpArrow___closed__11;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_16, x_4, x_5, x_9);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__1(x_1, x_3, x_2, x_22, x_4, x_5, x_9);
lean_dec(x_4);
return x_23;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_114 = lean_unsigned_to_nat(0u);
x_115 = l_Lean_Syntax_getArg(x_1, x_114);
x_116 = lean_st_ref_get(x_3, x_4);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_ctor_get(x_117, 0);
lean_inc(x_119);
lean_dec(x_117);
x_120 = l_Lean_Elab_Command_getScope___rarg(x_3, x_118);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_121, 2);
lean_inc(x_123);
lean_dec(x_121);
x_124 = l_Lean_Elab_Command_getScope___rarg(x_3, x_122);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 3);
lean_inc(x_127);
lean_dec(x_125);
lean_inc(x_119);
x_128 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_128, 0, x_119);
lean_inc(x_123);
x_129 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_129, 0, x_123);
lean_inc(x_119);
x_130 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_130, 0, x_119);
lean_inc(x_127);
lean_inc(x_123);
lean_inc(x_119);
x_131 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_131, 0, x_119);
lean_closure_set(x_131, 1, x_123);
lean_closure_set(x_131, 2, x_127);
lean_inc(x_119);
x_132 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_132, 0, x_119);
lean_closure_set(x_132, 1, x_123);
lean_closure_set(x_132, 2, x_127);
x_133 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_133, 0, x_128);
lean_ctor_set(x_133, 1, x_129);
lean_ctor_set(x_133, 2, x_130);
lean_ctor_set(x_133, 3, x_131);
lean_ctor_set(x_133, 4, x_132);
x_134 = x_133;
x_135 = l_Lean_Elab_Command_getRef(x_2, x_3, x_126);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_137);
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_ctor_get(x_2, 2);
lean_inc(x_141);
x_142 = lean_st_ref_get(x_3, x_140);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = lean_ctor_get(x_143, 4);
lean_inc(x_145);
lean_dec(x_143);
x_146 = lean_st_ref_get(x_3, x_144);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_ctor_get(x_147, 3);
lean_inc(x_149);
lean_dec(x_147);
x_150 = lean_environment_main_module(x_119);
x_151 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_151, 0, x_134);
lean_ctor_set(x_151, 1, x_150);
lean_ctor_set(x_151, 2, x_139);
lean_ctor_set(x_151, 3, x_141);
lean_ctor_set(x_151, 4, x_145);
lean_ctor_set(x_151, 5, x_136);
x_152 = lean_box(0);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_149);
lean_ctor_set(x_153, 1, x_152);
x_154 = l_Lean_Elab_toAttributeKind(x_115, x_151, x_153);
lean_dec(x_115);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_st_ref_take(x_3, x_148);
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
lean_dec(x_158);
x_161 = !lean_is_exclusive(x_159);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_162 = lean_ctor_get(x_159, 3);
lean_dec(x_162);
lean_ctor_set(x_159, 3, x_157);
x_163 = lean_st_ref_set(x_3, x_159, x_160);
x_164 = lean_ctor_get(x_163, 1);
lean_inc(x_164);
lean_dec(x_163);
x_165 = lean_ctor_get(x_156, 1);
lean_inc(x_165);
lean_dec(x_156);
x_166 = l_List_reverse___rarg(x_165);
x_167 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__8(x_166, x_2, x_3, x_164);
x_168 = lean_ctor_get(x_167, 1);
lean_inc(x_168);
lean_dec(x_167);
x_169 = lean_unbox(x_155);
lean_dec(x_155);
x_5 = x_169;
x_6 = x_168;
goto block_113;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_170 = lean_ctor_get(x_159, 0);
x_171 = lean_ctor_get(x_159, 1);
x_172 = lean_ctor_get(x_159, 2);
x_173 = lean_ctor_get(x_159, 4);
x_174 = lean_ctor_get(x_159, 5);
x_175 = lean_ctor_get(x_159, 6);
x_176 = lean_ctor_get(x_159, 7);
x_177 = lean_ctor_get(x_159, 8);
lean_inc(x_177);
lean_inc(x_176);
lean_inc(x_175);
lean_inc(x_174);
lean_inc(x_173);
lean_inc(x_172);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_159);
x_178 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_178, 0, x_170);
lean_ctor_set(x_178, 1, x_171);
lean_ctor_set(x_178, 2, x_172);
lean_ctor_set(x_178, 3, x_157);
lean_ctor_set(x_178, 4, x_173);
lean_ctor_set(x_178, 5, x_174);
lean_ctor_set(x_178, 6, x_175);
lean_ctor_set(x_178, 7, x_176);
lean_ctor_set(x_178, 8, x_177);
x_179 = lean_st_ref_set(x_3, x_178, x_160);
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
x_181 = lean_ctor_get(x_156, 1);
lean_inc(x_181);
lean_dec(x_156);
x_182 = l_List_reverse___rarg(x_181);
x_183 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__8(x_182, x_2, x_3, x_180);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_185 = lean_unbox(x_155);
lean_dec(x_155);
x_5 = x_185;
x_6 = x_184;
goto block_113;
}
}
else
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_154, 0);
lean_inc(x_186);
lean_dec(x_154);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_189 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_189, 0, x_188);
x_190 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_190, 0, x_189);
x_191 = l_Lean_throwErrorAt___at_Lean_Elab_Command_mkDefViewOfInstance___spec__4(x_187, x_190, x_2, x_3, x_148);
lean_dec(x_187);
x_192 = !lean_is_exclusive(x_191);
if (x_192 == 0)
{
return x_191;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_191, 0);
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_191);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
else
{
lean_object* x_196; uint8_t x_197; 
lean_dec(x_2);
x_196 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_mkDefViewOfInstance___spec__6___rarg(x_148);
x_197 = !lean_is_exclusive(x_196);
if (x_197 == 0)
{
return x_196;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_196, 0);
x_199 = lean_ctor_get(x_196, 1);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_196);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
return x_200;
}
}
}
block_113:
{
lean_object* x_7; lean_object* x_8; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = l_Lean_Syntax_getArg(x_1, x_28);
x_30 = lean_st_ref_get(x_3, x_6);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Command_getScope___rarg(x_3, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 2);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Elab_Command_getScope___rarg(x_3, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 3);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_33);
x_42 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_42, 0, x_33);
lean_inc(x_37);
x_43 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_43, 0, x_37);
lean_inc(x_33);
x_44 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_44, 0, x_33);
lean_inc(x_41);
lean_inc(x_37);
lean_inc(x_33);
x_45 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_45, 0, x_33);
lean_closure_set(x_45, 1, x_37);
lean_closure_set(x_45, 2, x_41);
lean_inc(x_33);
x_46 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_46, 0, x_33);
lean_closure_set(x_46, 1, x_37);
lean_closure_set(x_46, 2, x_41);
x_47 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_43);
lean_ctor_set(x_47, 2, x_44);
lean_ctor_set(x_47, 3, x_45);
lean_ctor_set(x_47, 4, x_46);
x_48 = x_47;
x_49 = l_Lean_Elab_Command_getRef(x_2, x_3, x_40);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_2, 2);
lean_inc(x_55);
x_56 = lean_st_ref_get(x_3, x_54);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_57, 4);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_st_ref_get(x_3, x_58);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_ctor_get(x_61, 3);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_environment_main_module(x_33);
x_65 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_53);
lean_ctor_set(x_65, 3, x_55);
lean_ctor_set(x_65, 4, x_59);
lean_ctor_set(x_65, 5, x_50);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_63);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_expandMacros(x_29, x_65, x_67);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_st_ref_take(x_3, x_62);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = !lean_is_exclusive(x_73);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_76 = lean_ctor_get(x_73, 3);
lean_dec(x_76);
lean_ctor_set(x_73, 3, x_71);
x_77 = lean_st_ref_set(x_3, x_73, x_74);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_ctor_get(x_70, 1);
lean_inc(x_79);
lean_dec(x_70);
x_80 = l_List_reverse___rarg(x_79);
x_81 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__8(x_80, x_2, x_3, x_78);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_7 = x_69;
x_8 = x_82;
goto block_27;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_83 = lean_ctor_get(x_73, 0);
x_84 = lean_ctor_get(x_73, 1);
x_85 = lean_ctor_get(x_73, 2);
x_86 = lean_ctor_get(x_73, 4);
x_87 = lean_ctor_get(x_73, 5);
x_88 = lean_ctor_get(x_73, 6);
x_89 = lean_ctor_get(x_73, 7);
x_90 = lean_ctor_get(x_73, 8);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_73);
x_91 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_91, 0, x_83);
lean_ctor_set(x_91, 1, x_84);
lean_ctor_set(x_91, 2, x_85);
lean_ctor_set(x_91, 3, x_71);
lean_ctor_set(x_91, 4, x_86);
lean_ctor_set(x_91, 5, x_87);
lean_ctor_set(x_91, 6, x_88);
lean_ctor_set(x_91, 7, x_89);
lean_ctor_set(x_91, 8, x_90);
x_92 = lean_st_ref_set(x_3, x_91, x_74);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = lean_ctor_get(x_70, 1);
lean_inc(x_94);
lean_dec(x_70);
x_95 = l_List_reverse___rarg(x_94);
x_96 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__8(x_95, x_2, x_3, x_93);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_7 = x_69;
x_8 = x_97;
goto block_27;
}
}
else
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_68, 0);
lean_inc(x_98);
lean_dec(x_68);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabCommand___spec__9(x_99, x_102, x_2, x_3, x_62);
lean_dec(x_99);
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
return x_103;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_103, 0);
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_103);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
else
{
lean_object* x_108; uint8_t x_109; 
lean_dec(x_2);
x_108 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabCommand___spec__11___rarg(x_62);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
return x_108;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_108, 0);
x_111 = lean_ctor_get(x_108, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_108);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
block_27:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_7);
x_9 = l_Lean_Syntax_getKind(x_7);
x_10 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__14;
x_11 = lean_name_eq(x_9, x_10);
if (x_11 == 0)
{
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_box(0);
x_14 = lean_name_mk_string(x_13, x_12);
x_15 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2(x_5, x_7, x_14, x_2, x_3, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_9);
x_16 = l_Lean_Elab_elabAttr___rarg___lambda__22___closed__2;
x_17 = l_Lean_throwErrorAt___at_Lean_Elab_Command_MkInstanceName_main___spec__1(x_7, x_16, x_2, x_3, x_8);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_9);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_7, x_22);
x_24 = l_Lean_Syntax_getId(x_23);
lean_dec(x_23);
x_25 = lean_erase_macro_scopes(x_24);
x_26 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2(x_5, x_7, x_25, x_2, x_3, x_8);
return x_26;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabMutualDef___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_1, x_3);
lean_inc(x_5);
x_11 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4(x_10, x_5, x_6, x_7);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_push(x_4, x_12);
x_15 = 1;
x_16 = x_3 + x_15;
x_3 = x_16;
x_4 = x_14;
x_7 = x_13;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Array_empty___closed__1;
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabMutualDef___spec__5(x_1, x_6, x_7, x_8, x_2, x_3, x_4);
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
lean_object* l_Lean_Elab_elabDeclAttrs___at_Lean_Elab_Command_elabMutualDef___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_getSepArgs(x_6);
lean_dec(x_6);
x_8 = l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(x_7, x_2, x_3, x_4);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_19, 6, x_9);
x_20 = l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7(x_2, x_19, x_4, x_8);
return x_20;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_19, 6, x_9);
x_20 = l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9(x_2, x_19, x_4, x_8);
return x_20;
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; uint8_t x_12; 
x_10 = l_Lean_Syntax_isNone(x_1);
x_11 = l_Lean_Syntax_isNone(x_2);
x_12 = l_Lean_Syntax_isNone(x_3);
if (x_10 == 0)
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 1;
x_14 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 1, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 2, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 3, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = 1;
x_17 = 0;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 1;
x_21 = 0;
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
return x_23;
}
else
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_6);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_9);
return x_27;
}
}
}
else
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
x_29 = 1;
x_30 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_6);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 1, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 2, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_9);
return x_31;
}
else
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = 1;
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_6);
lean_ctor_set_uint8(x_34, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 2, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 3, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_9);
return x_35;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = 0;
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_38, 0, x_4);
lean_ctor_set(x_38, 1, x_6);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 3, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_9);
return x_39;
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 0;
x_41 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_6);
lean_ctor_set_uint8(x_41, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 1, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 2, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 3, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_9);
return x_42;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Array_empty___closed__1;
x_12 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_11, x_7, x_8, x_9);
lean_dec(x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_7);
x_14 = l_Lean_Elab_elabDeclAttrs___at_Lean_Elab_Command_elabMutualDef___spec__2(x_13, x_7, x_8, x_9);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_15, x_7, x_8, x_16);
lean_dec(x_7);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_4);
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
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_11, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_13);
x_14 = l_Lean_Syntax_getKind(x_13);
x_15 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_16 = lean_name_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Parser_Command_protected___elambda__1___closed__1;
x_18 = lean_name_eq(x_14, x_17);
lean_dec(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_6);
x_19 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_20 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__6(x_13, x_19, x_7, x_8, x_9);
lean_dec(x_13);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
lean_dec(x_13);
x_25 = 1;
x_26 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_25, x_7, x_8, x_9);
return x_26;
}
}
else
{
uint8_t x_27; lean_object* x_28; 
lean_dec(x_14);
lean_dec(x_13);
x_27 = 2;
x_28 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_27, x_7, x_8, x_9);
return x_28;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(4u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(5u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_getOptional_x3f(x_6);
lean_dec(x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3(x_12, x_16, x_14, x_8, x_10, x_18, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = l_Lean_Syntax_getArg(x_21, x_7);
if (lean_obj_tag(x_22) == 2)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_string_utf8_byte_size(x_23);
x_25 = lean_nat_sub(x_24, x_9);
lean_dec(x_24);
x_26 = lean_string_utf8_extract(x_23, x_5, x_25);
lean_dec(x_25);
lean_dec(x_23);
lean_ctor_set(x_17, 0, x_26);
x_27 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3(x_12, x_16, x_14, x_8, x_10, x_17, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_free_object(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_22);
x_29 = l_Lean_indentD(x_28);
x_30 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_KernelException_toMessageData___closed__15;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8(x_21, x_33, x_2, x_3, x_4);
lean_dec(x_21);
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
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_17, 0);
lean_inc(x_39);
lean_dec(x_17);
x_40 = l_Lean_Syntax_getArg(x_39, x_7);
if (lean_obj_tag(x_40) == 2)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_39);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_string_utf8_byte_size(x_41);
x_43 = lean_nat_sub(x_42, x_9);
lean_dec(x_42);
x_44 = lean_string_utf8_extract(x_41, x_5, x_43);
lean_dec(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3(x_12, x_16, x_14, x_8, x_10, x_45, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_14);
lean_dec(x_16);
lean_dec(x_12);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_40);
x_48 = l_Lean_indentD(x_47);
x_49 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_KernelException_toMessageData___closed__15;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8(x_39, x_52, x_2, x_3, x_4);
lean_dec(x_39);
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
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabMutualDef___spec__10(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_array_uget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l_Lean_Syntax_getArg(x_13, x_11);
lean_inc(x_4);
x_15 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_14, x_4, x_5, x_6);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_getArg(x_13, x_18);
lean_dec(x_13);
lean_inc(x_4);
x_20 = l_Lean_Elab_Command_mkDefView(x_16, x_19, x_4, x_5, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_2 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_12, x_2, x_25);
x_2 = x_24;
x_3 = x_26;
x_6 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_4);
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
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_15);
if (x_32 == 0)
{
return x_15;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_15, 0);
x_34 = lean_ctor_get(x_15, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_15);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_elabMutualDef___lambda__1(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = lean_array_get_size(x_4);
x_18 = lean_unsigned_to_nat(0u);
lean_inc(x_4);
x_19 = l_Array_toSubarray___rarg(x_4, x_18, x_17);
x_20 = lean_ctor_get(x_1, 6);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_16);
x_22 = lean_array_get_size(x_20);
x_23 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_24 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_runTermElabM___spec__1(x_20, x_23, x_2, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_5);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_5, 7);
lean_dec(x_29);
lean_ctor_set(x_5, 7, x_27);
x_30 = l_Lean_Elab_Term_resetMessageLog(x_5, x_6, x_7, x_8, x_9, x_10, x_26);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
lean_inc(x_7);
lean_inc(x_5);
x_32 = l_Lean_Elab_Term_addAutoBoundImplicits(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
lean_dec(x_4);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMutualDef___boxed), 9, 2);
lean_closure_set(x_35, 0, x_33);
lean_closure_set(x_35, 1, x_3);
x_36 = l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_5);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_41 = lean_ctor_get(x_5, 0);
x_42 = lean_ctor_get(x_5, 1);
x_43 = lean_ctor_get(x_5, 2);
x_44 = lean_ctor_get(x_5, 3);
x_45 = lean_ctor_get(x_5, 4);
x_46 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_47 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_48 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
x_49 = lean_ctor_get(x_5, 5);
x_50 = lean_ctor_get(x_5, 6);
x_51 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 3);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_5);
x_52 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_52, 0, x_41);
lean_ctor_set(x_52, 1, x_42);
lean_ctor_set(x_52, 2, x_43);
lean_ctor_set(x_52, 3, x_44);
lean_ctor_set(x_52, 4, x_45);
lean_ctor_set(x_52, 5, x_49);
lean_ctor_set(x_52, 6, x_50);
lean_ctor_set(x_52, 7, x_27);
lean_ctor_set_uint8(x_52, sizeof(void*)*8, x_46);
lean_ctor_set_uint8(x_52, sizeof(void*)*8 + 1, x_47);
lean_ctor_set_uint8(x_52, sizeof(void*)*8 + 2, x_48);
lean_ctor_set_uint8(x_52, sizeof(void*)*8 + 3, x_51);
x_53 = l_Lean_Elab_Term_resetMessageLog(x_52, x_6, x_7, x_8, x_9, x_10, x_26);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
lean_inc(x_7);
lean_inc(x_52);
x_55 = l_Lean_Elab_Term_addAutoBoundImplicits(x_4, x_52, x_6, x_7, x_8, x_9, x_10, x_54);
lean_dec(x_4);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMutualDef___boxed), 9, 2);
lean_closure_set(x_58, 0, x_56);
lean_closure_set(x_58, 1, x_3);
x_59 = l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(x_58, x_52, x_6, x_7, x_8, x_9, x_10, x_57);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_52);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_60 = lean_ctor_get(x_55, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_62 = x_55;
} else {
 lean_dec_ref(x_55);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_14);
if (x_64 == 0)
{
return x_14;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_14, 0);
x_66 = lean_ctor_get(x_14, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_14);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMutualDef___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabMutualDef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = x_1;
x_8 = lean_box_usize(x_6);
x_9 = l_Lean_Elab_Command_elabMutualDef___boxed__const__1;
x_10 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabMutualDef___spec__10___boxed), 6, 3);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_7);
x_11 = x_10;
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_3(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = l_Lean_Elab_Command_getScope___rarg(x_3, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 5);
lean_inc(x_19);
x_20 = l_Lean_Elab_Command_elabMutualDef___boxed__const__1;
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMutualDef___lambda__1___boxed), 11, 3);
lean_closure_set(x_21, 0, x_17);
lean_closure_set(x_21, 1, x_20);
lean_closure_set(x_21, 2, x_13);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_22, 0, x_19);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicit___rarg), 8, 1);
lean_closure_set(x_23, 0, x_22);
x_24 = l_Lean_Elab_Command_liftTermElabM___rarg(x_15, x_23, x_2, x_3, x_18);
lean_dec(x_3);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_12);
if (x_25 == 0)
{
return x_12;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_12, 0);
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_12);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__1(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___lambda__2(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_8;
}
}
lean_object* l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabAttr___at_Lean_Elab_Command_elabMutualDef___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabMutualDef___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabMutualDef___spec__5(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at_Lean_Elab_Command_elabMutualDef___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabDeclAttrs___at_Lean_Elab_Command_elabMutualDef___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_elabMutualDef___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabMutualDef___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_10, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabMutualDef___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabMutualDef___spec__10(x_7, x_8, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_Elab_Command_elabMutualDef___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; lean_object* x_13; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Command_elabMutualDef___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_13;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
lean_object* initialize_Lean_Meta_Closure(lean_object*);
lean_object* initialize_Lean_Meta_Check(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
lean_object* initialize_Lean_Elab_DefView(lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition(lean_object*);
lean_object* initialize_Lean_Elab_DeclarationRange(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_MutualDef(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedDefViewElabHeader___closed__1 = _init_l_Lean_Elab_instInhabitedDefViewElabHeader___closed__1();
lean_mark_persistent(l_Lean_Elab_instInhabitedDefViewElabHeader___closed__1);
l_Lean_Elab_instInhabitedDefViewElabHeader = _init_l_Lean_Elab_instInhabitedDefViewElabHeader();
lean_mark_persistent(l_Lean_Elab_instInhabitedDefViewElabHeader);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__1___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___lambda__2___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkModifiers___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___lambda__1___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkKinds___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__3 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__3);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__2___closed__4);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__3___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__4___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__5___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__6___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___lambda__7___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_check___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__3 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__3();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_registerFailedToInferDefTypeInfo___closed__3);
l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__1 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__1);
l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__2 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__2);
l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__3 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabHeaders___spec__13___lambda__2___closed__3);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___spec__1___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_expandWhereDeclsAsStructInst___boxed__const__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_declValToTerm___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___spec__1___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___boxed__const__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_elabFunValues___boxed__const__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_getFunName___closed__2);
l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__1 = _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__1();
lean_mark_persistent(l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__1);
l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__2 = _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__2();
lean_mark_persistent(l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__2);
l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__3 = _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__3();
lean_mark_persistent(l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__3);
l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__4 = _init_l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__4();
lean_mark_persistent(l_List_forM___at___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_checkLetRecsToLiftTypes___spec__1___closed__4);
l_Lean_Elab_Term_MutualClosure_FixPoint_State_usedFVarsMap___default = _init_l_Lean_Elab_Term_MutualClosure_FixPoint_State_usedFVarsMap___default();
lean_mark_persistent(l_Lean_Elab_Term_MutualClosure_FixPoint_State_usedFVarsMap___default);
l_Lean_Elab_Term_MutualClosure_FixPoint_State_modified___default = _init_l_Lean_Elab_Term_MutualClosure_FixPoint_State_modified___default();
l_Lean_Elab_Term_MutualClosure_ClosureState_newLocalDecls___default = _init_l_Lean_Elab_Term_MutualClosure_ClosureState_newLocalDecls___default();
lean_mark_persistent(l_Lean_Elab_Term_MutualClosure_ClosureState_newLocalDecls___default);
l_Lean_Elab_Term_MutualClosure_ClosureState_localDecls___default = _init_l_Lean_Elab_Term_MutualClosure_ClosureState_localDecls___default();
lean_mark_persistent(l_Lean_Elab_Term_MutualClosure_ClosureState_localDecls___default);
l_Lean_Elab_Term_MutualClosure_ClosureState_newLetDecls___default = _init_l_Lean_Elab_Term_MutualClosure_ClosureState_newLetDecls___default();
lean_mark_persistent(l_Lean_Elab_Term_MutualClosure_ClosureState_newLetDecls___default);
l_Lean_Elab_Term_MutualClosure_ClosureState_exprArgs___default = _init_l_Lean_Elab_Term_MutualClosure_ClosureState_exprArgs___default();
lean_mark_persistent(l_Lean_Elab_Term_MutualClosure_ClosureState_exprArgs___default);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__2);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__3 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__3);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__4 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__4);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__5 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__5);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__6 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_MutualClosure_mkClosureForAux___closed__6);
l_Lean_Elab_Term_MutualClosure_main___boxed__const__1 = _init_l_Lean_Elab_Term_MutualClosure_main___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Term_MutualClosure_main___boxed__const__1);
l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed__const__1 = _init_l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_MutualDef_0__Lean_Elab_Term_levelMVarToParamHeaders___boxed__const__1);
l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1 = _init_l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Term_elabMutualDef_go___lambda__2___boxed__const__1);
l_Lean_Elab_Command_elabMutualDef___boxed__const__1 = _init_l_Lean_Elab_Command_elabMutualDef___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Command_elabMutualDef___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
