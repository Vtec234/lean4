// Lean compiler output
// Module: Lean.Elab.Binders
// Imports: Init Lean.Elab.Quotation.Precheck Lean.Elab.Term Lean.Parser.Term
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
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders(lean_object*);
lean_object* l_Lean_Meta_getResetPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_withNewLocals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__2(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_elabLetDeclAux_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2___boxed(lean_object**);
lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2;
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDecls(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDelayedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___boxed(lean_object**);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__2;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_let__fun___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__1___rarg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_precheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__3;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_arrow___closed__2;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__2;
lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkLetIdDeclView___boxed(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_let___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_5600_(lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102_(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setKind(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_precheckAttribute;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_let__delayed___closed__2;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at_Lean_ppExpr___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFun(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOptType(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___rarg(lean_object*);
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_depArrow___closed__2;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop(lean_object*);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__3(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Term_instMonadQuotationTermElabM;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind;
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_checkBinderAnnotations;
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop(lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1;
lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic_match__1(lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__3;
lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_fun___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_4____spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun(lean_object*);
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3;
lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType___boxed(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3;
lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_State_fvars___default;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_object*);
lean_object* l_Lean_Meta_setPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_forall___closed__2;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
lean_object* l_Lean_Meta_processPostponed(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_precheckFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder(lean_object*);
uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Syntax_getNumArgs(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_mkHole(x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_box(0);
x_9 = lean_mk_string("x");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_st_ref_take(x_6, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_15, x_16);
lean_ctor_set(x_12, 1, x_17);
x_18 = lean_st_ref_set(x_6, x_12, x_13);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = !lean_is_exclusive(x_1);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_1, 4);
lean_dec(x_21);
lean_ctor_set(x_1, 4, x_15);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_19);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_24);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l_Lean_addMacroScope(x_23, x_10, x_27);
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
x_31 = l_Lean_addMacroScope(x_23, x_10, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_33 = lean_ctor_get(x_1, 0);
x_34 = lean_ctor_get(x_1, 1);
x_35 = lean_ctor_get(x_1, 2);
x_36 = lean_ctor_get(x_1, 3);
x_37 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_38 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
x_39 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 2);
x_40 = lean_ctor_get(x_1, 5);
x_41 = lean_ctor_get(x_1, 6);
x_42 = lean_ctor_get(x_1, 7);
x_43 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_1);
x_44 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_34);
lean_ctor_set(x_44, 2, x_35);
lean_ctor_set(x_44, 3, x_36);
lean_ctor_set(x_44, 4, x_15);
lean_ctor_set(x_44, 5, x_40);
lean_ctor_set(x_44, 6, x_41);
lean_ctor_set(x_44, 7, x_42);
lean_ctor_set_uint8(x_44, sizeof(void*)*8, x_37);
lean_ctor_set_uint8(x_44, sizeof(void*)*8 + 1, x_38);
lean_ctor_set_uint8(x_44, sizeof(void*)*8 + 2, x_39);
lean_ctor_set_uint8(x_44, sizeof(void*)*8 + 3, x_43);
x_45 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_19);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l_Lean_Elab_Term_getCurrMacroScope(x_44, x_2, x_3, x_4, x_5, x_6, x_47);
lean_dec(x_44);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_51 = x_48;
} else {
 lean_dec_ref(x_48);
 x_51 = lean_box(0);
}
x_52 = l_Lean_addMacroScope(x_46, x_10, x_49);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_54 = lean_ctor_get(x_12, 0);
x_55 = lean_ctor_get(x_12, 1);
x_56 = lean_ctor_get(x_12, 2);
x_57 = lean_ctor_get(x_12, 3);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_12);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_nat_add(x_55, x_58);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_60, 2, x_56);
lean_ctor_set(x_60, 3, x_57);
x_61 = lean_st_ref_set(x_6, x_60, x_13);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_1, 2);
lean_inc(x_65);
x_66 = lean_ctor_get(x_1, 3);
lean_inc(x_66);
x_67 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_68 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
x_69 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 2);
x_70 = lean_ctor_get(x_1, 5);
lean_inc(x_70);
x_71 = lean_ctor_get(x_1, 6);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 7);
lean_inc(x_72);
x_73 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 lean_ctor_release(x_1, 7);
 x_74 = x_1;
} else {
 lean_dec_ref(x_1);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(0, 8, 4);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_63);
lean_ctor_set(x_75, 1, x_64);
lean_ctor_set(x_75, 2, x_65);
lean_ctor_set(x_75, 3, x_66);
lean_ctor_set(x_75, 4, x_55);
lean_ctor_set(x_75, 5, x_70);
lean_ctor_set(x_75, 6, x_71);
lean_ctor_set(x_75, 7, x_72);
lean_ctor_set_uint8(x_75, sizeof(void*)*8, x_67);
lean_ctor_set_uint8(x_75, sizeof(void*)*8 + 1, x_68);
lean_ctor_set_uint8(x_75, sizeof(void*)*8 + 2, x_69);
lean_ctor_set_uint8(x_75, sizeof(void*)*8 + 3, x_73);
x_76 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_62);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_Lean_Elab_Term_getCurrMacroScope(x_75, x_2, x_3, x_4, x_5, x_6, x_78);
lean_dec(x_75);
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
x_83 = l_Lean_addMacroScope(x_77, x_10, x_80);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_mkIdentFrom(x_1, x_11);
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
x_15 = l_Lean_mkIdentFrom(x_1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Lean");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("Parser");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("Term");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("hole");
x_17 = lean_name_mk_string(x_15, x_16);
lean_inc(x_1);
x_18 = l_Lean_Syntax_isOfKind(x_1, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_8);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Syntax_isNone(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_box(0);
x_14 = lean_mk_string("inst");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_st_ref_take(x_7, x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_20, x_21);
lean_ctor_set(x_17, 1, x_22);
x_23 = lean_st_ref_set(x_7, x_17, x_18);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = !lean_is_exclusive(x_2);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_2, 4);
lean_dec(x_26);
lean_ctor_set(x_2, 4, x_20);
x_27 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_24);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_29);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Lean_addMacroScope(x_28, x_15, x_32);
x_34 = l_Lean_mkIdentFrom(x_1, x_33);
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
x_37 = l_Lean_addMacroScope(x_28, x_15, x_35);
x_38 = l_Lean_mkIdentFrom(x_1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_40 = lean_ctor_get(x_2, 0);
x_41 = lean_ctor_get(x_2, 1);
x_42 = lean_ctor_get(x_2, 2);
x_43 = lean_ctor_get(x_2, 3);
x_44 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_45 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_46 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_47 = lean_ctor_get(x_2, 5);
x_48 = lean_ctor_get(x_2, 6);
x_49 = lean_ctor_get(x_2, 7);
x_50 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_2);
x_51 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_51, 0, x_40);
lean_ctor_set(x_51, 1, x_41);
lean_ctor_set(x_51, 2, x_42);
lean_ctor_set(x_51, 3, x_43);
lean_ctor_set(x_51, 4, x_20);
lean_ctor_set(x_51, 5, x_47);
lean_ctor_set(x_51, 6, x_48);
lean_ctor_set(x_51, 7, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*8, x_44);
lean_ctor_set_uint8(x_51, sizeof(void*)*8 + 1, x_45);
lean_ctor_set_uint8(x_51, sizeof(void*)*8 + 2, x_46);
lean_ctor_set_uint8(x_51, sizeof(void*)*8 + 3, x_50);
x_52 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_24);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Elab_Term_getCurrMacroScope(x_51, x_3, x_4, x_5, x_6, x_7, x_54);
lean_dec(x_51);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = l_Lean_addMacroScope(x_53, x_15, x_56);
x_60 = l_Lean_mkIdentFrom(x_1, x_59);
if (lean_is_scalar(x_58)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_58;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_57);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; uint8_t x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_62 = lean_ctor_get(x_17, 0);
x_63 = lean_ctor_get(x_17, 1);
x_64 = lean_ctor_get(x_17, 2);
x_65 = lean_ctor_get(x_17, 3);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_17);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_add(x_63, x_66);
x_68 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_64);
lean_ctor_set(x_68, 3, x_65);
x_69 = lean_st_ref_set(x_7, x_68, x_18);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get(x_2, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_2, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_2, 2);
lean_inc(x_73);
x_74 = lean_ctor_get(x_2, 3);
lean_inc(x_74);
x_75 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_76 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_77 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_78 = lean_ctor_get(x_2, 5);
lean_inc(x_78);
x_79 = lean_ctor_get(x_2, 6);
lean_inc(x_79);
x_80 = lean_ctor_get(x_2, 7);
lean_inc(x_80);
x_81 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_82 = x_2;
} else {
 lean_dec_ref(x_2);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 8, 4);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_71);
lean_ctor_set(x_83, 1, x_72);
lean_ctor_set(x_83, 2, x_73);
lean_ctor_set(x_83, 3, x_74);
lean_ctor_set(x_83, 4, x_63);
lean_ctor_set(x_83, 5, x_78);
lean_ctor_set(x_83, 6, x_79);
lean_ctor_set(x_83, 7, x_80);
lean_ctor_set_uint8(x_83, sizeof(void*)*8, x_75);
lean_ctor_set_uint8(x_83, sizeof(void*)*8 + 1, x_76);
lean_ctor_set_uint8(x_83, sizeof(void*)*8 + 2, x_77);
lean_ctor_set_uint8(x_83, sizeof(void*)*8 + 3, x_81);
x_84 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_70);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l_Lean_Elab_Term_getCurrMacroScope(x_83, x_3, x_4, x_5, x_6, x_7, x_86);
lean_dec(x_83);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_90 = x_87;
} else {
 lean_dec_ref(x_87);
 x_90 = lean_box(0);
}
x_91 = l_Lean_addMacroScope(x_85, x_15, x_88);
x_92 = l_Lean_mkIdentFrom(x_1, x_91);
if (lean_is_scalar(x_90)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_90;
}
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_89);
return x_93;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_quoteAutoTactic_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_apply_3(x_3, x_1, x_8, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
default: 
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 3);
lean_inc(x_17);
x_18 = lean_apply_5(x_2, x_1, x_14, x_15, x_16, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Term_quoteAutoTactic_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_quoteAutoTactic_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_SourceInfo_fromRef(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg___boxed), 3, 0);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_95; lean_object* x_104; uint8_t x_105; 
x_104 = l_Lean_nullKind;
x_105 = lean_name_eq(x_6, x_104);
if (x_105 == 0)
{
lean_object* x_106; 
x_106 = lean_box(0);
x_14 = x_106;
goto block_94;
}
else
{
uint8_t x_107; 
x_107 = l_Lean_Syntax_isAntiquotSuffixSplice(x_1);
if (x_107 == 0)
{
uint8_t x_108; 
x_108 = l_Lean_Syntax_isAntiquotSplice(x_1);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_box(0);
x_14 = x_109;
goto block_94;
}
else
{
lean_object* x_110; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_110 = lean_box(0);
x_95 = x_110;
goto block_103;
}
}
else
{
lean_object* x_111; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_111 = lean_box(0);
x_95 = x_111;
goto block_103;
}
}
block_94:
{
lean_object* x_15; 
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_11, x_12, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_23);
lean_dec(x_12);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Term");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("app");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("Array.push");
x_37 = lean_string_utf8_byte_size(x_36);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_37);
x_40 = lean_mk_string("push");
x_41 = lean_name_mk_string(x_2, x_40);
lean_inc(x_41);
x_42 = l_Lean_addMacroScope(x_26, x_41, x_22);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_3);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_4);
x_45 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_45, 0, x_19);
lean_ctor_set(x_45, 1, x_39);
lean_ctor_set(x_45, 2, x_42);
lean_ctor_set(x_45, 3, x_44);
x_46 = lean_mk_string("null");
x_47 = lean_name_mk_string(x_27, x_46);
x_48 = lean_unsigned_to_nat(2u);
x_49 = lean_mk_empty_array_with_capacity(x_48);
lean_inc(x_49);
x_50 = lean_array_push(x_49, x_5);
x_51 = lean_array_push(x_50, x_16);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_47);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_push(x_49, x_45);
x_54 = lean_array_push(x_53, x_52);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_35);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_24, 0, x_56);
return x_24;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_57 = lean_ctor_get(x_24, 0);
x_58 = lean_ctor_get(x_24, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_24);
x_59 = lean_box(0);
x_60 = lean_mk_string("Lean");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = lean_mk_string("Parser");
x_63 = lean_name_mk_string(x_61, x_62);
x_64 = lean_mk_string("Term");
x_65 = lean_name_mk_string(x_63, x_64);
x_66 = lean_mk_string("app");
x_67 = lean_name_mk_string(x_65, x_66);
x_68 = lean_mk_string("Array.push");
x_69 = lean_string_utf8_byte_size(x_68);
x_70 = lean_unsigned_to_nat(0u);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_71, 2, x_69);
x_72 = lean_mk_string("push");
x_73 = lean_name_mk_string(x_2, x_72);
lean_inc(x_73);
x_74 = l_Lean_addMacroScope(x_57, x_73, x_22);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_3);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_4);
x_77 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_77, 0, x_19);
lean_ctor_set(x_77, 1, x_71);
lean_ctor_set(x_77, 2, x_74);
lean_ctor_set(x_77, 3, x_76);
x_78 = lean_mk_string("null");
x_79 = lean_name_mk_string(x_59, x_78);
x_80 = lean_unsigned_to_nat(2u);
x_81 = lean_mk_empty_array_with_capacity(x_80);
lean_inc(x_81);
x_82 = lean_array_push(x_81, x_5);
x_83 = lean_array_push(x_82, x_16);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_array_push(x_81, x_77);
x_86 = lean_array_push(x_85, x_84);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_67);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_58);
return x_89;
}
}
else
{
uint8_t x_90; 
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
x_90 = !lean_is_exclusive(x_15);
if (x_90 == 0)
{
return x_15;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_15, 0);
x_92 = lean_ctor_get(x_15, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_15);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
block_103:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
lean_dec(x_95);
x_96 = lean_mk_string("invalid auto tactic, antiquotation is not allowed");
x_97 = l_Lean_stringToMessageData(x_96);
lean_dec(x_96);
x_98 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(x_1, x_97, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_98);
if (x_99 == 0)
{
return x_98;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_98, 0);
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_98);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, size_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_9(x_20, lean_box(0), x_18, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_21;
}
else
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = 1;
x_24 = x_2 + x_23;
x_25 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_3, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_24, x_22, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_25;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
uint8_t x_18; 
x_18 = x_9 < x_8;
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_9(x_20, lean_box(0), x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_array_uget(x_7, x_9);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___boxed), 13, 6);
lean_closure_set(x_24, 0, x_22);
lean_closure_set(x_24, 1, x_4);
lean_closure_set(x_24, 2, x_5);
lean_closure_set(x_24, 3, x_6);
lean_closure_set(x_24, 4, x_10);
lean_closure_set(x_24, 5, x_1);
x_25 = lean_box_usize(x_9);
x_26 = lean_box_usize(x_8);
x_27 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2___boxed), 17, 9);
lean_closure_set(x_27, 0, x_2);
lean_closure_set(x_27, 1, x_25);
lean_closure_set(x_27, 2, x_1);
lean_closure_set(x_27, 3, x_3);
lean_closure_set(x_27, 4, x_4);
lean_closure_set(x_27, 5, x_5);
lean_closure_set(x_27, 6, x_6);
lean_closure_set(x_27, 7, x_7);
lean_closure_set(x_27, 8, x_26);
x_28 = lean_apply_11(x_23, lean_box(0), lean_box(0), x_24, x_27, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_28;
}
}
}
lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_10 = lean_mk_string("Lean.Elab.Binders");
x_11 = lean_mk_string("Lean.Elab.Term.quoteAutoTactic");
x_12 = lean_unsigned_to_nat(59u);
x_13 = lean_unsigned_to_nat(28u);
x_14 = lean_mk_string("unreachable code has been reached");
x_15 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_panic_fn(x_9, x_15);
x_17 = lean_apply_7(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_17;
}
case 1:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = l_Lean_Syntax_isAntiquot(x_1);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; size_t x_57; size_t x_58; lean_object* x_59; 
x_22 = lean_ctor_get(x_1, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_1, 0);
lean_dec(x_23);
x_24 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_25 = l_ReaderT_instMonadReaderT___rarg(x_24);
x_26 = l_ReaderT_instMonadReaderT___rarg(x_25);
x_27 = l_ReaderT_instMonadReaderT___rarg(x_26);
x_28 = l_ReaderT_instMonadReaderT___rarg(x_27);
x_29 = l_ReaderT_instMonadReaderT___rarg(x_28);
x_30 = l_ReaderT_instMonadReaderT___rarg(x_29);
x_31 = l_Lean_Elab_Term_instMonadQuotationTermElabM;
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_mk_string("Array.empty");
x_43 = lean_string_utf8_byte_size(x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_45, 2, x_43);
x_46 = lean_box(0);
x_47 = lean_mk_string("Array");
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_mk_string("empty");
lean_inc(x_48);
x_50 = lean_name_mk_string(x_48, x_49);
lean_inc(x_50);
x_51 = l_Lean_addMacroScope(x_40, x_50, x_37);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_55, 0, x_34);
lean_ctor_set(x_55, 1, x_45);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_54);
x_56 = lean_array_get_size(x_19);
x_57 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_58 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_18);
x_59 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_18, x_30, x_32, x_48, x_52, x_52, x_19, x_57, x_58, x_55, x_2, x_3, x_4, x_5, x_6, x_7, x_41);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_61);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_64);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_67);
lean_dec(x_7);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_mk_string("Lean");
x_72 = lean_name_mk_string(x_46, x_71);
x_73 = lean_mk_string("Parser");
lean_inc(x_72);
x_74 = lean_name_mk_string(x_72, x_73);
x_75 = lean_mk_string("Term");
x_76 = lean_name_mk_string(x_74, x_75);
x_77 = lean_mk_string("app");
lean_inc(x_76);
x_78 = lean_name_mk_string(x_76, x_77);
x_79 = lean_mk_string("Syntax.node");
x_80 = lean_string_utf8_byte_size(x_79);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_44);
lean_ctor_set(x_81, 2, x_80);
x_82 = lean_mk_string("Syntax");
lean_inc(x_82);
x_83 = lean_name_mk_string(x_46, x_82);
x_84 = lean_mk_string("node");
lean_inc(x_84);
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = l_Lean_addMacroScope(x_70, x_85, x_66);
x_87 = lean_name_mk_string(x_72, x_82);
x_88 = lean_name_mk_string(x_87, x_84);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_52);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_52);
x_91 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_91, 0, x_63);
lean_ctor_set(x_91, 1, x_81);
lean_ctor_set(x_91, 2, x_86);
lean_ctor_set(x_91, 3, x_90);
x_92 = lean_mk_string("null");
x_93 = lean_name_mk_string(x_46, x_92);
lean_inc(x_18);
x_94 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_52, x_18);
x_95 = lean_unsigned_to_nat(2u);
x_96 = lean_mk_empty_array_with_capacity(x_95);
lean_inc(x_96);
x_97 = lean_array_push(x_96, x_91);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_76);
x_98 = l___private_Init_Meta_0__Lean_quoteNameMk(x_18);
x_99 = lean_array_push(x_96, x_98);
x_100 = lean_array_push(x_99, x_60);
lean_ctor_set(x_1, 1, x_100);
lean_ctor_set(x_1, 0, x_93);
x_101 = lean_array_push(x_97, x_1);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_78);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_68, 0, x_102);
return x_68;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_18);
x_103 = lean_ctor_get(x_94, 0);
lean_inc(x_103);
lean_dec(x_94);
x_104 = lean_mk_string("quotedName");
x_105 = lean_name_mk_string(x_76, x_104);
x_106 = lean_mk_string(".");
x_107 = l_String_intercalate(x_106, x_103);
x_108 = lean_mk_string("`");
x_109 = lean_string_append(x_108, x_107);
lean_dec(x_107);
x_110 = l_Lean_nameLitKind;
x_111 = lean_box(2);
x_112 = l_Lean_Syntax_mkLit(x_110, x_109, x_111);
x_113 = lean_unsigned_to_nat(1u);
x_114 = lean_mk_empty_array_with_capacity(x_113);
x_115 = lean_array_push(x_114, x_112);
lean_ctor_set(x_1, 1, x_115);
lean_ctor_set(x_1, 0, x_105);
x_116 = lean_array_push(x_96, x_1);
x_117 = lean_array_push(x_116, x_60);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_93);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_array_push(x_97, x_118);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_78);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_68, 0, x_120);
return x_68;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_121 = lean_ctor_get(x_68, 0);
x_122 = lean_ctor_get(x_68, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_68);
x_123 = lean_mk_string("Lean");
x_124 = lean_name_mk_string(x_46, x_123);
x_125 = lean_mk_string("Parser");
lean_inc(x_124);
x_126 = lean_name_mk_string(x_124, x_125);
x_127 = lean_mk_string("Term");
x_128 = lean_name_mk_string(x_126, x_127);
x_129 = lean_mk_string("app");
lean_inc(x_128);
x_130 = lean_name_mk_string(x_128, x_129);
x_131 = lean_mk_string("Syntax.node");
x_132 = lean_string_utf8_byte_size(x_131);
x_133 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_44);
lean_ctor_set(x_133, 2, x_132);
x_134 = lean_mk_string("Syntax");
lean_inc(x_134);
x_135 = lean_name_mk_string(x_46, x_134);
x_136 = lean_mk_string("node");
lean_inc(x_136);
x_137 = lean_name_mk_string(x_135, x_136);
x_138 = l_Lean_addMacroScope(x_121, x_137, x_66);
x_139 = lean_name_mk_string(x_124, x_134);
x_140 = lean_name_mk_string(x_139, x_136);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_52);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_52);
x_143 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_143, 0, x_63);
lean_ctor_set(x_143, 1, x_133);
lean_ctor_set(x_143, 2, x_138);
lean_ctor_set(x_143, 3, x_142);
x_144 = lean_mk_string("null");
x_145 = lean_name_mk_string(x_46, x_144);
lean_inc(x_18);
x_146 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_52, x_18);
x_147 = lean_unsigned_to_nat(2u);
x_148 = lean_mk_empty_array_with_capacity(x_147);
lean_inc(x_148);
x_149 = lean_array_push(x_148, x_143);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_128);
x_150 = l___private_Init_Meta_0__Lean_quoteNameMk(x_18);
x_151 = lean_array_push(x_148, x_150);
x_152 = lean_array_push(x_151, x_60);
lean_ctor_set(x_1, 1, x_152);
lean_ctor_set(x_1, 0, x_145);
x_153 = lean_array_push(x_149, x_1);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_130);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_122);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_18);
x_156 = lean_ctor_get(x_146, 0);
lean_inc(x_156);
lean_dec(x_146);
x_157 = lean_mk_string("quotedName");
x_158 = lean_name_mk_string(x_128, x_157);
x_159 = lean_mk_string(".");
x_160 = l_String_intercalate(x_159, x_156);
x_161 = lean_mk_string("`");
x_162 = lean_string_append(x_161, x_160);
lean_dec(x_160);
x_163 = l_Lean_nameLitKind;
x_164 = lean_box(2);
x_165 = l_Lean_Syntax_mkLit(x_163, x_162, x_164);
x_166 = lean_unsigned_to_nat(1u);
x_167 = lean_mk_empty_array_with_capacity(x_166);
x_168 = lean_array_push(x_167, x_165);
lean_ctor_set(x_1, 1, x_168);
lean_ctor_set(x_1, 0, x_158);
x_169 = lean_array_push(x_148, x_1);
x_170 = lean_array_push(x_169, x_60);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_145);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_array_push(x_149, x_171);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_130);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_122);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_free_object(x_1);
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_175 = !lean_is_exclusive(x_59);
if (x_175 == 0)
{
return x_59;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_59, 0);
x_177 = lean_ctor_get(x_59, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_59);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; size_t x_212; size_t x_213; lean_object* x_214; 
lean_dec(x_1);
x_179 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_180 = l_ReaderT_instMonadReaderT___rarg(x_179);
x_181 = l_ReaderT_instMonadReaderT___rarg(x_180);
x_182 = l_ReaderT_instMonadReaderT___rarg(x_181);
x_183 = l_ReaderT_instMonadReaderT___rarg(x_182);
x_184 = l_ReaderT_instMonadReaderT___rarg(x_183);
x_185 = l_ReaderT_instMonadReaderT___rarg(x_184);
x_186 = l_Lean_Elab_Term_instMonadQuotationTermElabM;
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_190);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_193);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = lean_mk_string("Array.empty");
x_198 = lean_string_utf8_byte_size(x_197);
x_199 = lean_unsigned_to_nat(0u);
x_200 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_200, 0, x_197);
lean_ctor_set(x_200, 1, x_199);
lean_ctor_set(x_200, 2, x_198);
x_201 = lean_box(0);
x_202 = lean_mk_string("Array");
x_203 = lean_name_mk_string(x_201, x_202);
x_204 = lean_mk_string("empty");
lean_inc(x_203);
x_205 = lean_name_mk_string(x_203, x_204);
lean_inc(x_205);
x_206 = l_Lean_addMacroScope(x_195, x_205, x_192);
x_207 = lean_box(0);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
x_210 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_210, 0, x_189);
lean_ctor_set(x_210, 1, x_200);
lean_ctor_set(x_210, 2, x_206);
lean_ctor_set(x_210, 3, x_209);
x_211 = lean_array_get_size(x_19);
x_212 = lean_usize_of_nat(x_211);
lean_dec(x_211);
x_213 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_18);
x_214 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_18, x_185, x_187, x_203, x_207, x_207, x_19, x_212, x_213, x_210, x_2, x_3, x_4, x_5, x_6, x_7, x_196);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_216);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_219);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_222);
lean_dec(x_7);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 lean_ctor_release(x_223, 1);
 x_226 = x_223;
} else {
 lean_dec_ref(x_223);
 x_226 = lean_box(0);
}
x_227 = lean_mk_string("Lean");
x_228 = lean_name_mk_string(x_201, x_227);
x_229 = lean_mk_string("Parser");
lean_inc(x_228);
x_230 = lean_name_mk_string(x_228, x_229);
x_231 = lean_mk_string("Term");
x_232 = lean_name_mk_string(x_230, x_231);
x_233 = lean_mk_string("app");
lean_inc(x_232);
x_234 = lean_name_mk_string(x_232, x_233);
x_235 = lean_mk_string("Syntax.node");
x_236 = lean_string_utf8_byte_size(x_235);
x_237 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set(x_237, 1, x_199);
lean_ctor_set(x_237, 2, x_236);
x_238 = lean_mk_string("Syntax");
lean_inc(x_238);
x_239 = lean_name_mk_string(x_201, x_238);
x_240 = lean_mk_string("node");
lean_inc(x_240);
x_241 = lean_name_mk_string(x_239, x_240);
x_242 = l_Lean_addMacroScope(x_224, x_241, x_221);
x_243 = lean_name_mk_string(x_228, x_238);
x_244 = lean_name_mk_string(x_243, x_240);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_207);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_207);
x_247 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_247, 0, x_218);
lean_ctor_set(x_247, 1, x_237);
lean_ctor_set(x_247, 2, x_242);
lean_ctor_set(x_247, 3, x_246);
x_248 = lean_mk_string("null");
x_249 = lean_name_mk_string(x_201, x_248);
lean_inc(x_18);
x_250 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_207, x_18);
x_251 = lean_unsigned_to_nat(2u);
x_252 = lean_mk_empty_array_with_capacity(x_251);
lean_inc(x_252);
x_253 = lean_array_push(x_252, x_247);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_232);
x_254 = l___private_Init_Meta_0__Lean_quoteNameMk(x_18);
x_255 = lean_array_push(x_252, x_254);
x_256 = lean_array_push(x_255, x_215);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_249);
lean_ctor_set(x_257, 1, x_256);
x_258 = lean_array_push(x_253, x_257);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_234);
lean_ctor_set(x_259, 1, x_258);
if (lean_is_scalar(x_226)) {
 x_260 = lean_alloc_ctor(0, 2, 0);
} else {
 x_260 = x_226;
}
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_225);
return x_260;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
lean_dec(x_18);
x_261 = lean_ctor_get(x_250, 0);
lean_inc(x_261);
lean_dec(x_250);
x_262 = lean_mk_string("quotedName");
x_263 = lean_name_mk_string(x_232, x_262);
x_264 = lean_mk_string(".");
x_265 = l_String_intercalate(x_264, x_261);
x_266 = lean_mk_string("`");
x_267 = lean_string_append(x_266, x_265);
lean_dec(x_265);
x_268 = l_Lean_nameLitKind;
x_269 = lean_box(2);
x_270 = l_Lean_Syntax_mkLit(x_268, x_267, x_269);
x_271 = lean_unsigned_to_nat(1u);
x_272 = lean_mk_empty_array_with_capacity(x_271);
x_273 = lean_array_push(x_272, x_270);
x_274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_274, 0, x_263);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_array_push(x_252, x_274);
x_276 = lean_array_push(x_275, x_215);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_249);
lean_ctor_set(x_277, 1, x_276);
x_278 = lean_array_push(x_253, x_277);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_234);
lean_ctor_set(x_279, 1, x_278);
if (lean_is_scalar(x_226)) {
 x_280 = lean_alloc_ctor(0, 2, 0);
} else {
 x_280 = x_226;
}
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_225);
return x_280;
}
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_281 = lean_ctor_get(x_214, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_214, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_283 = x_214;
} else {
 lean_dec_ref(x_214);
 x_283 = lean_box(0);
}
if (lean_is_scalar(x_283)) {
 x_284 = lean_alloc_ctor(1, 2, 0);
} else {
 x_284 = x_283;
}
lean_ctor_set(x_284, 0, x_281);
lean_ctor_set(x_284, 1, x_282);
return x_284;
}
}
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_19);
lean_dec(x_18);
x_285 = lean_mk_string("invalid auto tactic, antiquotation is not allowed");
x_286 = l_Lean_stringToMessageData(x_285);
lean_dec(x_285);
x_287 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_1, x_286, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_287;
}
}
case 2:
{
uint8_t x_288; 
x_288 = !lean_is_exclusive(x_1);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; 
x_289 = lean_ctor_get(x_1, 1);
x_290 = lean_ctor_get(x_1, 0);
lean_dec(x_290);
x_291 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
lean_dec(x_291);
x_294 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_293);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
lean_dec(x_294);
x_297 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_296);
lean_dec(x_7);
x_298 = !lean_is_exclusive(x_297);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_299 = lean_ctor_get(x_297, 0);
x_300 = lean_box(0);
x_301 = lean_mk_string("Lean");
x_302 = lean_name_mk_string(x_300, x_301);
x_303 = lean_mk_string("Parser");
lean_inc(x_302);
x_304 = lean_name_mk_string(x_302, x_303);
x_305 = lean_mk_string("Term");
x_306 = lean_name_mk_string(x_304, x_305);
x_307 = lean_mk_string("app");
x_308 = lean_name_mk_string(x_306, x_307);
x_309 = lean_mk_string("mkAtom");
x_310 = lean_string_utf8_byte_size(x_309);
x_311 = lean_unsigned_to_nat(0u);
lean_inc(x_309);
x_312 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_312, 0, x_309);
lean_ctor_set(x_312, 1, x_311);
lean_ctor_set(x_312, 2, x_310);
lean_inc(x_309);
x_313 = lean_name_mk_string(x_300, x_309);
x_314 = l_Lean_addMacroScope(x_299, x_313, x_295);
x_315 = lean_name_mk_string(x_302, x_309);
x_316 = lean_box(0);
x_317 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_316);
x_319 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_319, 0, x_292);
lean_ctor_set(x_319, 1, x_312);
lean_ctor_set(x_319, 2, x_314);
lean_ctor_set(x_319, 3, x_318);
x_320 = lean_mk_string("null");
x_321 = lean_name_mk_string(x_300, x_320);
x_322 = lean_box(2);
x_323 = l_Lean_Syntax_mkStrLit(x_289, x_322);
lean_dec(x_289);
x_324 = lean_unsigned_to_nat(1u);
x_325 = lean_mk_empty_array_with_capacity(x_324);
x_326 = lean_array_push(x_325, x_323);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_326);
lean_ctor_set(x_1, 0, x_321);
x_327 = lean_unsigned_to_nat(2u);
x_328 = lean_mk_empty_array_with_capacity(x_327);
x_329 = lean_array_push(x_328, x_319);
x_330 = lean_array_push(x_329, x_1);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_308);
lean_ctor_set(x_331, 1, x_330);
lean_ctor_set(x_297, 0, x_331);
return x_297;
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_332 = lean_ctor_get(x_297, 0);
x_333 = lean_ctor_get(x_297, 1);
lean_inc(x_333);
lean_inc(x_332);
lean_dec(x_297);
x_334 = lean_box(0);
x_335 = lean_mk_string("Lean");
x_336 = lean_name_mk_string(x_334, x_335);
x_337 = lean_mk_string("Parser");
lean_inc(x_336);
x_338 = lean_name_mk_string(x_336, x_337);
x_339 = lean_mk_string("Term");
x_340 = lean_name_mk_string(x_338, x_339);
x_341 = lean_mk_string("app");
x_342 = lean_name_mk_string(x_340, x_341);
x_343 = lean_mk_string("mkAtom");
x_344 = lean_string_utf8_byte_size(x_343);
x_345 = lean_unsigned_to_nat(0u);
lean_inc(x_343);
x_346 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_346, 0, x_343);
lean_ctor_set(x_346, 1, x_345);
lean_ctor_set(x_346, 2, x_344);
lean_inc(x_343);
x_347 = lean_name_mk_string(x_334, x_343);
x_348 = l_Lean_addMacroScope(x_332, x_347, x_295);
x_349 = lean_name_mk_string(x_336, x_343);
x_350 = lean_box(0);
x_351 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_351, 0, x_349);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_351);
lean_ctor_set(x_352, 1, x_350);
x_353 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_353, 0, x_292);
lean_ctor_set(x_353, 1, x_346);
lean_ctor_set(x_353, 2, x_348);
lean_ctor_set(x_353, 3, x_352);
x_354 = lean_mk_string("null");
x_355 = lean_name_mk_string(x_334, x_354);
x_356 = lean_box(2);
x_357 = l_Lean_Syntax_mkStrLit(x_289, x_356);
lean_dec(x_289);
x_358 = lean_unsigned_to_nat(1u);
x_359 = lean_mk_empty_array_with_capacity(x_358);
x_360 = lean_array_push(x_359, x_357);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_360);
lean_ctor_set(x_1, 0, x_355);
x_361 = lean_unsigned_to_nat(2u);
x_362 = lean_mk_empty_array_with_capacity(x_361);
x_363 = lean_array_push(x_362, x_353);
x_364 = lean_array_push(x_363, x_1);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_342);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_333);
return x_366;
}
}
else
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_367 = lean_ctor_get(x_1, 1);
lean_inc(x_367);
lean_dec(x_1);
x_368 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
lean_dec(x_368);
x_371 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_370);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
lean_dec(x_371);
x_374 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_373);
lean_dec(x_7);
x_375 = lean_ctor_get(x_374, 0);
lean_inc(x_375);
x_376 = lean_ctor_get(x_374, 1);
lean_inc(x_376);
if (lean_is_exclusive(x_374)) {
 lean_ctor_release(x_374, 0);
 lean_ctor_release(x_374, 1);
 x_377 = x_374;
} else {
 lean_dec_ref(x_374);
 x_377 = lean_box(0);
}
x_378 = lean_box(0);
x_379 = lean_mk_string("Lean");
x_380 = lean_name_mk_string(x_378, x_379);
x_381 = lean_mk_string("Parser");
lean_inc(x_380);
x_382 = lean_name_mk_string(x_380, x_381);
x_383 = lean_mk_string("Term");
x_384 = lean_name_mk_string(x_382, x_383);
x_385 = lean_mk_string("app");
x_386 = lean_name_mk_string(x_384, x_385);
x_387 = lean_mk_string("mkAtom");
x_388 = lean_string_utf8_byte_size(x_387);
x_389 = lean_unsigned_to_nat(0u);
lean_inc(x_387);
x_390 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_390, 0, x_387);
lean_ctor_set(x_390, 1, x_389);
lean_ctor_set(x_390, 2, x_388);
lean_inc(x_387);
x_391 = lean_name_mk_string(x_378, x_387);
x_392 = l_Lean_addMacroScope(x_375, x_391, x_372);
x_393 = lean_name_mk_string(x_380, x_387);
x_394 = lean_box(0);
x_395 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_394);
x_397 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_397, 0, x_369);
lean_ctor_set(x_397, 1, x_390);
lean_ctor_set(x_397, 2, x_392);
lean_ctor_set(x_397, 3, x_396);
x_398 = lean_mk_string("null");
x_399 = lean_name_mk_string(x_378, x_398);
x_400 = lean_box(2);
x_401 = l_Lean_Syntax_mkStrLit(x_367, x_400);
lean_dec(x_367);
x_402 = lean_unsigned_to_nat(1u);
x_403 = lean_mk_empty_array_with_capacity(x_402);
x_404 = lean_array_push(x_403, x_401);
x_405 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_405, 0, x_399);
lean_ctor_set(x_405, 1, x_404);
x_406 = lean_unsigned_to_nat(2u);
x_407 = lean_mk_empty_array_with_capacity(x_406);
x_408 = lean_array_push(x_407, x_397);
x_409 = lean_array_push(x_408, x_405);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_386);
lean_ctor_set(x_410, 1, x_409);
if (lean_is_scalar(x_377)) {
 x_411 = lean_alloc_ctor(0, 2, 0);
} else {
 x_411 = x_377;
}
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_376);
return x_411;
}
}
default: 
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_412 = lean_mk_string("invalid auto tactic, identifier is not allowed");
x_413 = l_Lean_stringToMessageData(x_412);
lean_dec(x_412);
x_414 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_1, x_413, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_414;
}
}
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2___boxed(lean_object** _args) {
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
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_19 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_20 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_19, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_20;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___boxed(lean_object** _args) {
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
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_19 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_20 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_18, x_19, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_20;
}
}
lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_box(0);
x_10 = lean_mk_string("_auto");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_st_ref_take(x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_16, x_17);
lean_ctor_set(x_13, 1, x_18);
x_19 = lean_st_ref_set(x_7, x_13, x_14);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = !lean_is_exclusive(x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_22 = lean_ctor_get(x_2, 4);
lean_dec(x_22);
lean_ctor_set(x_2, 4, x_16);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_20);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_addMacroScope(x_24, x_11, x_27);
x_30 = lean_mk_string("Lean");
x_31 = lean_name_mk_string(x_9, x_30);
x_32 = lean_mk_string("Syntax");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_box(0);
x_35 = l_Lean_mkConst(x_33, x_34);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_36 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_35);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_35);
x_40 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_41 = l_Lean_Elab_Term_elabTerm(x_37, x_39, x_40, x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_38);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_44 = l_Lean_Meta_instantiateMVars(x_42, x_4, x_5, x_6, x_7, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_69 = lean_mk_string("Elab");
x_70 = lean_name_mk_string(x_9, x_69);
x_71 = lean_mk_string("autoParam");
x_72 = lean_name_mk_string(x_70, x_71);
x_73 = lean_st_ref_get(x_7, x_46);
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
lean_dec(x_72);
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_47 = x_77;
goto block_68;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = lean_ctor_get(x_73, 1);
lean_inc(x_78);
lean_dec(x_73);
lean_inc(x_72);
x_79 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_78);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_unbox(x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_72);
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
lean_dec(x_79);
x_47 = x_82;
goto block_68;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_79, 1);
lean_inc(x_83);
lean_dec(x_79);
lean_inc(x_45);
x_84 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_84, 0, x_45);
x_85 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_72, x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_83);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
x_47 = x_86;
goto block_68;
}
}
block_68:
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_inc(x_29);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_29);
lean_ctor_set(x_48, 1, x_34);
lean_ctor_set(x_48, 2, x_35);
x_49 = lean_box(0);
x_50 = 1;
x_51 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_45);
lean_ctor_set(x_51, 2, x_49);
lean_ctor_set_uint8(x_51, sizeof(void*)*3, x_50);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_inc(x_6);
lean_inc(x_2);
x_53 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_52, x_2, x_3, x_4, x_5, x_6, x_7, x_47);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_52, x_2, x_3, x_4, x_5, x_6, x_7, x_54);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
lean_ctor_set(x_55, 0, x_29);
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_29);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_29);
x_60 = !lean_is_exclusive(x_55);
if (x_60 == 0)
{
return x_55;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_55, 0);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_55);
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
lean_dec(x_52);
lean_dec(x_29);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_53);
if (x_64 == 0)
{
return x_53;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_53, 0);
x_66 = lean_ctor_get(x_53, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = !lean_is_exclusive(x_44);
if (x_87 == 0)
{
return x_44;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_44, 0);
x_89 = lean_ctor_get(x_44, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_44);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_91 = !lean_is_exclusive(x_41);
if (x_91 == 0)
{
return x_41;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_41, 0);
x_93 = lean_ctor_get(x_41, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_41);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_95 = !lean_is_exclusive(x_36);
if (x_95 == 0)
{
return x_36;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_36, 0);
x_97 = lean_ctor_get(x_36, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_36);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_99 = lean_ctor_get(x_2, 0);
x_100 = lean_ctor_get(x_2, 1);
x_101 = lean_ctor_get(x_2, 2);
x_102 = lean_ctor_get(x_2, 3);
x_103 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_104 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_105 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_106 = lean_ctor_get(x_2, 5);
x_107 = lean_ctor_get(x_2, 6);
x_108 = lean_ctor_get(x_2, 7);
x_109 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_2);
x_110 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_110, 0, x_99);
lean_ctor_set(x_110, 1, x_100);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_102);
lean_ctor_set(x_110, 4, x_16);
lean_ctor_set(x_110, 5, x_106);
lean_ctor_set(x_110, 6, x_107);
lean_ctor_set(x_110, 7, x_108);
lean_ctor_set_uint8(x_110, sizeof(void*)*8, x_103);
lean_ctor_set_uint8(x_110, sizeof(void*)*8 + 1, x_104);
lean_ctor_set_uint8(x_110, sizeof(void*)*8 + 2, x_105);
lean_ctor_set_uint8(x_110, sizeof(void*)*8 + 3, x_109);
x_111 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_20);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = l_Lean_Elab_Term_getCurrMacroScope(x_110, x_3, x_4, x_5, x_6, x_7, x_113);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_addMacroScope(x_112, x_11, x_115);
x_118 = lean_mk_string("Lean");
x_119 = lean_name_mk_string(x_9, x_118);
x_120 = lean_mk_string("Syntax");
x_121 = lean_name_mk_string(x_119, x_120);
x_122 = lean_box(0);
x_123 = l_Lean_mkConst(x_121, x_122);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_110);
x_124 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_110, x_3, x_4, x_5, x_6, x_7, x_116);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
lean_inc(x_123);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_123);
x_128 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_110);
x_129 = l_Lean_Elab_Term_elabTerm(x_125, x_127, x_128, x_128, x_110, x_3, x_4, x_5, x_6, x_7, x_126);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_132 = l_Lean_Meta_instantiateMVars(x_130, x_4, x_5, x_6, x_7, x_131);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_156 = lean_mk_string("Elab");
x_157 = lean_name_mk_string(x_9, x_156);
x_158 = lean_mk_string("autoParam");
x_159 = lean_name_mk_string(x_157, x_158);
x_160 = lean_st_ref_get(x_7, x_134);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_161, 3);
lean_inc(x_162);
lean_dec(x_161);
x_163 = lean_ctor_get_uint8(x_162, sizeof(void*)*1);
lean_dec(x_162);
if (x_163 == 0)
{
lean_object* x_164; 
lean_dec(x_159);
x_164 = lean_ctor_get(x_160, 1);
lean_inc(x_164);
lean_dec(x_160);
x_135 = x_164;
goto block_155;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_165 = lean_ctor_get(x_160, 1);
lean_inc(x_165);
lean_dec(x_160);
lean_inc(x_159);
x_166 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_159, x_110, x_3, x_4, x_5, x_6, x_7, x_165);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_unbox(x_167);
lean_dec(x_167);
if (x_168 == 0)
{
lean_object* x_169; 
lean_dec(x_159);
x_169 = lean_ctor_get(x_166, 1);
lean_inc(x_169);
lean_dec(x_166);
x_135 = x_169;
goto block_155;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_170 = lean_ctor_get(x_166, 1);
lean_inc(x_170);
lean_dec(x_166);
lean_inc(x_133);
x_171 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_171, 0, x_133);
x_172 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_159, x_171, x_110, x_3, x_4, x_5, x_6, x_7, x_170);
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_135 = x_173;
goto block_155;
}
}
block_155:
{
lean_object* x_136; lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_inc(x_117);
x_136 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_136, 0, x_117);
lean_ctor_set(x_136, 1, x_122);
lean_ctor_set(x_136, 2, x_123);
x_137 = lean_box(0);
x_138 = 1;
x_139 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_133);
lean_ctor_set(x_139, 2, x_137);
lean_ctor_set_uint8(x_139, sizeof(void*)*3, x_138);
x_140 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_140, 0, x_139);
lean_inc(x_6);
lean_inc(x_110);
x_141 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_140, x_110, x_3, x_4, x_5, x_6, x_7, x_135);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
x_143 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_140, x_110, x_3, x_4, x_5, x_6, x_7, x_142);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_143, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_145 = x_143;
} else {
 lean_dec_ref(x_143);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_117);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_117);
x_147 = lean_ctor_get(x_143, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_143, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_149 = x_143;
} else {
 lean_dec_ref(x_143);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_140);
lean_dec(x_117);
lean_dec(x_110);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_151 = lean_ctor_get(x_141, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_141, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_153 = x_141;
} else {
 lean_dec_ref(x_141);
 x_153 = lean_box(0);
}
if (lean_is_scalar(x_153)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_153;
}
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_123);
lean_dec(x_117);
lean_dec(x_110);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_174 = lean_ctor_get(x_132, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_132, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_176 = x_132;
} else {
 lean_dec_ref(x_132);
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
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_123);
lean_dec(x_117);
lean_dec(x_110);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_178 = lean_ctor_get(x_129, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_129, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_180 = x_129;
} else {
 lean_dec_ref(x_129);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_123);
lean_dec(x_117);
lean_dec(x_110);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_182 = lean_ctor_get(x_124, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_124, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_184 = x_124;
} else {
 lean_dec_ref(x_124);
 x_184 = lean_box(0);
}
if (lean_is_scalar(x_184)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_184;
}
lean_ctor_set(x_185, 0, x_182);
lean_ctor_set(x_185, 1, x_183);
return x_185;
}
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; uint8_t x_200; uint8_t x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_186 = lean_ctor_get(x_13, 0);
x_187 = lean_ctor_get(x_13, 1);
x_188 = lean_ctor_get(x_13, 2);
x_189 = lean_ctor_get(x_13, 3);
lean_inc(x_189);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_13);
x_190 = lean_unsigned_to_nat(1u);
x_191 = lean_nat_add(x_187, x_190);
x_192 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_192, 0, x_186);
lean_ctor_set(x_192, 1, x_191);
lean_ctor_set(x_192, 2, x_188);
lean_ctor_set(x_192, 3, x_189);
x_193 = lean_st_ref_set(x_7, x_192, x_14);
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
lean_dec(x_193);
x_195 = lean_ctor_get(x_2, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_2, 1);
lean_inc(x_196);
x_197 = lean_ctor_get(x_2, 2);
lean_inc(x_197);
x_198 = lean_ctor_get(x_2, 3);
lean_inc(x_198);
x_199 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_200 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_201 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_202 = lean_ctor_get(x_2, 5);
lean_inc(x_202);
x_203 = lean_ctor_get(x_2, 6);
lean_inc(x_203);
x_204 = lean_ctor_get(x_2, 7);
lean_inc(x_204);
x_205 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_206 = x_2;
} else {
 lean_dec_ref(x_2);
 x_206 = lean_box(0);
}
if (lean_is_scalar(x_206)) {
 x_207 = lean_alloc_ctor(0, 8, 4);
} else {
 x_207 = x_206;
}
lean_ctor_set(x_207, 0, x_195);
lean_ctor_set(x_207, 1, x_196);
lean_ctor_set(x_207, 2, x_197);
lean_ctor_set(x_207, 3, x_198);
lean_ctor_set(x_207, 4, x_187);
lean_ctor_set(x_207, 5, x_202);
lean_ctor_set(x_207, 6, x_203);
lean_ctor_set(x_207, 7, x_204);
lean_ctor_set_uint8(x_207, sizeof(void*)*8, x_199);
lean_ctor_set_uint8(x_207, sizeof(void*)*8 + 1, x_200);
lean_ctor_set_uint8(x_207, sizeof(void*)*8 + 2, x_201);
lean_ctor_set_uint8(x_207, sizeof(void*)*8 + 3, x_205);
x_208 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_194);
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
lean_dec(x_208);
x_211 = l_Lean_Elab_Term_getCurrMacroScope(x_207, x_3, x_4, x_5, x_6, x_7, x_210);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = l_Lean_addMacroScope(x_209, x_11, x_212);
x_215 = lean_mk_string("Lean");
x_216 = lean_name_mk_string(x_9, x_215);
x_217 = lean_mk_string("Syntax");
x_218 = lean_name_mk_string(x_216, x_217);
x_219 = lean_box(0);
x_220 = l_Lean_mkConst(x_218, x_219);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_207);
x_221 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_207, x_3, x_4, x_5, x_6, x_7, x_213);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; lean_object* x_226; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
lean_inc(x_220);
x_224 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_224, 0, x_220);
x_225 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_207);
x_226 = l_Lean_Elab_Term_elabTerm(x_222, x_224, x_225, x_225, x_207, x_3, x_4, x_5, x_6, x_7, x_223);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_229 = l_Lean_Meta_instantiateMVars(x_227, x_4, x_5, x_6, x_7, x_228);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; uint8_t x_260; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_253 = lean_mk_string("Elab");
x_254 = lean_name_mk_string(x_9, x_253);
x_255 = lean_mk_string("autoParam");
x_256 = lean_name_mk_string(x_254, x_255);
x_257 = lean_st_ref_get(x_7, x_231);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_258, 3);
lean_inc(x_259);
lean_dec(x_258);
x_260 = lean_ctor_get_uint8(x_259, sizeof(void*)*1);
lean_dec(x_259);
if (x_260 == 0)
{
lean_object* x_261; 
lean_dec(x_256);
x_261 = lean_ctor_get(x_257, 1);
lean_inc(x_261);
lean_dec(x_257);
x_232 = x_261;
goto block_252;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_262 = lean_ctor_get(x_257, 1);
lean_inc(x_262);
lean_dec(x_257);
lean_inc(x_256);
x_263 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_256, x_207, x_3, x_4, x_5, x_6, x_7, x_262);
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
x_265 = lean_unbox(x_264);
lean_dec(x_264);
if (x_265 == 0)
{
lean_object* x_266; 
lean_dec(x_256);
x_266 = lean_ctor_get(x_263, 1);
lean_inc(x_266);
lean_dec(x_263);
x_232 = x_266;
goto block_252;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_267 = lean_ctor_get(x_263, 1);
lean_inc(x_267);
lean_dec(x_263);
lean_inc(x_230);
x_268 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_268, 0, x_230);
x_269 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_256, x_268, x_207, x_3, x_4, x_5, x_6, x_7, x_267);
x_270 = lean_ctor_get(x_269, 1);
lean_inc(x_270);
lean_dec(x_269);
x_232 = x_270;
goto block_252;
}
}
block_252:
{
lean_object* x_233; lean_object* x_234; uint8_t x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_inc(x_214);
x_233 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_233, 0, x_214);
lean_ctor_set(x_233, 1, x_219);
lean_ctor_set(x_233, 2, x_220);
x_234 = lean_box(0);
x_235 = 1;
x_236 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_236, 0, x_233);
lean_ctor_set(x_236, 1, x_230);
lean_ctor_set(x_236, 2, x_234);
lean_ctor_set_uint8(x_236, sizeof(void*)*3, x_235);
x_237 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_237, 0, x_236);
lean_inc(x_6);
lean_inc(x_207);
x_238 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_237, x_207, x_3, x_4, x_5, x_6, x_7, x_232);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; 
x_239 = lean_ctor_get(x_238, 1);
lean_inc(x_239);
lean_dec(x_238);
x_240 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_237, x_207, x_3, x_4, x_5, x_6, x_7, x_239);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_240) == 0)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_240, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_242 = x_240;
} else {
 lean_dec_ref(x_240);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(0, 2, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_214);
lean_ctor_set(x_243, 1, x_241);
return x_243;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
lean_dec(x_214);
x_244 = lean_ctor_get(x_240, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_246 = x_240;
} else {
 lean_dec_ref(x_240);
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
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_237);
lean_dec(x_214);
lean_dec(x_207);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_248 = lean_ctor_get(x_238, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_238, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 x_250 = x_238;
} else {
 lean_dec_ref(x_238);
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
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_220);
lean_dec(x_214);
lean_dec(x_207);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_271 = lean_ctor_get(x_229, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_229, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_229)) {
 lean_ctor_release(x_229, 0);
 lean_ctor_release(x_229, 1);
 x_273 = x_229;
} else {
 lean_dec_ref(x_229);
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
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_220);
lean_dec(x_214);
lean_dec(x_207);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_275 = lean_ctor_get(x_226, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_226, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_277 = x_226;
} else {
 lean_dec_ref(x_226);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(1, 2, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_220);
lean_dec(x_214);
lean_dec(x_207);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_279 = lean_ctor_get(x_221, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_221, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_281 = x_221;
} else {
 lean_dec_ref(x_221);
 x_281 = lean_box(0);
}
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 2, 0);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_280);
return x_282;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Syntax_isNone(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_2, x_11);
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = lean_box(0);
x_15 = lean_mk_string("Lean");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("Parser");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("Term");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("binderDefault");
lean_inc(x_20);
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_name_eq(x_13, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_mk_string("binderTactic");
lean_inc(x_20);
x_25 = lean_name_mk_string(x_20, x_24);
x_26 = lean_name_eq(x_13, x_25);
lean_dec(x_25);
lean_dec(x_13);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_9);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_unsigned_to_nat(2u);
x_29 = l_Lean_Syntax_getArg(x_12, x_28);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_29);
x_30 = l_Lean_Elab_Term_declareTacticSyntax(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_35);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_38);
lean_dec(x_8);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_mk_string("app");
x_43 = lean_name_mk_string(x_20, x_42);
x_44 = lean_mk_string("autoParam");
x_45 = lean_string_utf8_byte_size(x_44);
lean_inc(x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_11);
lean_ctor_set(x_46, 2, x_45);
x_47 = lean_name_mk_string(x_14, x_44);
lean_inc(x_47);
x_48 = l_Lean_addMacroScope(x_41, x_47, x_37);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_52, 0, x_34);
lean_ctor_set(x_52, 1, x_46);
lean_ctor_set(x_52, 2, x_48);
lean_ctor_set(x_52, 3, x_51);
x_53 = lean_mk_string("null");
x_54 = lean_name_mk_string(x_14, x_53);
x_55 = l_Lean_mkIdentFrom(x_29, x_31);
lean_dec(x_29);
x_56 = lean_mk_empty_array_with_capacity(x_28);
lean_inc(x_56);
x_57 = lean_array_push(x_56, x_1);
x_58 = lean_array_push(x_57, x_55);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_array_push(x_56, x_52);
x_61 = lean_array_push(x_60, x_59);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_43);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_39, 0, x_62);
return x_39;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_63 = lean_ctor_get(x_39, 0);
x_64 = lean_ctor_get(x_39, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_39);
x_65 = lean_mk_string("app");
x_66 = lean_name_mk_string(x_20, x_65);
x_67 = lean_mk_string("autoParam");
x_68 = lean_string_utf8_byte_size(x_67);
lean_inc(x_67);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_11);
lean_ctor_set(x_69, 2, x_68);
x_70 = lean_name_mk_string(x_14, x_67);
lean_inc(x_70);
x_71 = l_Lean_addMacroScope(x_63, x_70, x_37);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_75, 0, x_34);
lean_ctor_set(x_75, 1, x_69);
lean_ctor_set(x_75, 2, x_71);
lean_ctor_set(x_75, 3, x_74);
x_76 = lean_mk_string("null");
x_77 = lean_name_mk_string(x_14, x_76);
x_78 = l_Lean_mkIdentFrom(x_29, x_31);
lean_dec(x_29);
x_79 = lean_mk_empty_array_with_capacity(x_28);
lean_inc(x_79);
x_80 = lean_array_push(x_79, x_1);
x_81 = lean_array_push(x_80, x_78);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_77);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_79, x_75);
x_84 = lean_array_push(x_83, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_66);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_64);
return x_86;
}
}
else
{
uint8_t x_87; 
lean_dec(x_29);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_30);
if (x_87 == 0)
{
return x_30;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_30, 0);
x_89 = lean_ctor_get(x_30, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_30);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
lean_dec(x_13);
x_91 = lean_unsigned_to_nat(1u);
x_92 = l_Lean_Syntax_getArg(x_12, x_91);
lean_dec(x_12);
x_93 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_9);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_95);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_98);
lean_dec(x_8);
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_101 = lean_ctor_get(x_99, 0);
x_102 = lean_mk_string("app");
x_103 = lean_name_mk_string(x_20, x_102);
x_104 = lean_mk_string("optParam");
x_105 = lean_string_utf8_byte_size(x_104);
lean_inc(x_104);
x_106 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_11);
lean_ctor_set(x_106, 2, x_105);
x_107 = lean_name_mk_string(x_14, x_104);
lean_inc(x_107);
x_108 = l_Lean_addMacroScope(x_101, x_107, x_97);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_112, 0, x_94);
lean_ctor_set(x_112, 1, x_106);
lean_ctor_set(x_112, 2, x_108);
lean_ctor_set(x_112, 3, x_111);
x_113 = lean_mk_string("null");
x_114 = lean_name_mk_string(x_14, x_113);
x_115 = lean_unsigned_to_nat(2u);
x_116 = lean_mk_empty_array_with_capacity(x_115);
lean_inc(x_116);
x_117 = lean_array_push(x_116, x_1);
x_118 = lean_array_push(x_117, x_92);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_114);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_array_push(x_116, x_112);
x_121 = lean_array_push(x_120, x_119);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_103);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_99, 0, x_122);
return x_99;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_123 = lean_ctor_get(x_99, 0);
x_124 = lean_ctor_get(x_99, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_99);
x_125 = lean_mk_string("app");
x_126 = lean_name_mk_string(x_20, x_125);
x_127 = lean_mk_string("optParam");
x_128 = lean_string_utf8_byte_size(x_127);
lean_inc(x_127);
x_129 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_11);
lean_ctor_set(x_129, 2, x_128);
x_130 = lean_name_mk_string(x_14, x_127);
lean_inc(x_130);
x_131 = l_Lean_addMacroScope(x_123, x_130, x_97);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_135, 0, x_94);
lean_ctor_set(x_135, 1, x_129);
lean_ctor_set(x_135, 2, x_131);
lean_ctor_set(x_135, 3, x_134);
x_136 = lean_mk_string("null");
x_137 = lean_name_mk_string(x_14, x_136);
x_138 = lean_unsigned_to_nat(2u);
x_139 = lean_mk_empty_array_with_capacity(x_138);
lean_inc(x_139);
x_140 = lean_array_push(x_139, x_1);
x_141 = lean_array_push(x_140, x_92);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_137);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_array_push(x_139, x_135);
x_144 = lean_array_push(x_143, x_142);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_126);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_124);
return x_146;
}
}
}
else
{
lean_object* x_147; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_1);
lean_ctor_set(x_147, 1, x_9);
return x_147;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_4);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
lean_inc(x_17);
x_18 = l_Lean_Syntax_getKind(x_17);
x_19 = l_Lean_identKind;
x_20 = lean_name_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_21 = lean_box(0);
x_22 = lean_mk_string("Lean");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("Parser");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Term");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("hole");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_name_eq(x_18, x_29);
lean_dec(x_29);
lean_dec(x_18);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_16);
x_31 = lean_mk_string("identifier or `_` expected");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_17, x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
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
else
{
size_t x_38; size_t x_39; lean_object* x_40; lean_object* x_41; 
x_38 = 1;
x_39 = x_2 + x_38;
x_40 = x_17;
x_41 = lean_array_uset(x_16, x_2, x_40);
x_2 = x_39;
x_3 = x_41;
goto _start;
}
}
else
{
size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_18);
x_43 = 1;
x_44 = x_2 + x_43;
x_45 = x_17;
x_46 = lean_array_uset(x_16, x_2, x_45);
x_2 = x_44;
x_3 = x_46;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = l_Lean_Syntax_getArgs(x_1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = x_9;
x_13 = lean_box_usize(x_11);
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1;
x_15 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___boxed), 10, 3);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
lean_closure_set(x_15, 2, x_12);
x_16 = x_15;
x_17 = lean_apply_7(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_17;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_expandOptType(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Syntax_isNone(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_2, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_mkHole(x_1);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_expandOptType(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_1);
x_13 = x_4;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_array_uget(x_4, x_3);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_4, x_3, x_16);
x_18 = x_15;
lean_inc(x_5);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
lean_inc(x_1);
x_23 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_1);
lean_ctor_set_uint8(x_23, sizeof(void*)*2, x_22);
x_24 = 1;
x_25 = x_3 + x_24;
x_26 = x_23;
x_27 = lean_array_uset(x_17, x_3, x_26);
x_3 = x_25;
x_4 = x_27;
x_11 = x_21;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_1);
x_13 = x_4;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_array_uget(x_4, x_3);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_4, x_3, x_16);
x_18 = x_15;
lean_inc(x_5);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 0;
lean_inc(x_1);
x_23 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_1);
lean_ctor_set_uint8(x_23, sizeof(void*)*2, x_22);
x_24 = 1;
x_25 = x_3 + x_24;
x_26 = x_23;
x_27 = lean_array_uset(x_17, x_3, x_26);
x_3 = x_25;
x_4 = x_27;
x_11 = x_21;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_1);
x_13 = x_4;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_array_uget(x_4, x_3);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_4, x_3, x_16);
x_18 = x_15;
lean_inc(x_5);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 0;
lean_inc(x_1);
x_23 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_1);
lean_ctor_set_uint8(x_23, sizeof(void*)*2, x_22);
x_24 = 1;
x_25 = x_3 + x_24;
x_26 = x_23;
x_27 = lean_array_uset(x_17, x_3, x_26);
x_3 = x_25;
x_4 = x_27;
x_11 = x_21;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_inc(x_1);
x_9 = l_Lean_Syntax_getKind(x_1);
x_10 = lean_box(0);
x_11 = lean_mk_string("Lean");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Parser");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("Term");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("simpleBinder");
lean_inc(x_16);
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_name_eq(x_9, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_mk_string("explicitBinder");
lean_inc(x_16);
x_21 = lean_name_mk_string(x_16, x_20);
x_22 = lean_name_eq(x_9, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_mk_string("implicitBinder");
lean_inc(x_16);
x_24 = lean_name_mk_string(x_16, x_23);
x_25 = lean_name_eq(x_9, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_mk_string("instBinder");
x_27 = lean_name_mk_string(x_16, x_26);
x_28 = lean_name_eq(x_9, x_27);
lean_dec(x_27);
lean_dec(x_9);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___rarg(x_8);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = l_Lean_Syntax_getArg(x_1, x_30);
x_32 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_31);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_unsigned_to_nat(2u);
x_36 = l_Lean_Syntax_getArg(x_1, x_35);
lean_dec(x_1);
x_37 = 3;
x_38 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_37);
x_39 = lean_mk_empty_array_with_capacity(x_30);
x_40 = lean_array_push(x_39, x_38);
lean_ctor_set(x_32, 0, x_40);
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
x_43 = lean_unsigned_to_nat(2u);
x_44 = l_Lean_Syntax_getArg(x_1, x_43);
lean_dec(x_1);
x_45 = 3;
x_46 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*2, x_45);
x_47 = lean_mk_empty_array_with_capacity(x_30);
x_48 = lean_array_push(x_47, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_42);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_16);
lean_dec(x_9);
x_50 = lean_unsigned_to_nat(1u);
x_51 = l_Lean_Syntax_getArg(x_1, x_50);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_52 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_51, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; size_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_unsigned_to_nat(2u);
x_56 = l_Lean_Syntax_getArg(x_1, x_55);
x_57 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_1, x_56);
lean_dec(x_56);
lean_dec(x_1);
x_58 = lean_array_get_size(x_53);
x_59 = lean_usize_of_nat(x_58);
lean_dec(x_58);
x_60 = x_53;
x_61 = lean_box_usize(x_59);
x_62 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
x_63 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2___boxed), 11, 4);
lean_closure_set(x_63, 0, x_57);
lean_closure_set(x_63, 1, x_61);
lean_closure_set(x_63, 2, x_62);
lean_closure_set(x_63, 3, x_60);
x_64 = x_63;
x_65 = lean_apply_7(x_64, x_2, x_3, x_4, x_5, x_6, x_7, x_54);
return x_65;
}
else
{
uint8_t x_66; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_52);
if (x_66 == 0)
{
return x_52;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_52, 0);
x_68 = lean_ctor_get(x_52, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_52);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_16);
lean_dec(x_9);
x_70 = lean_unsigned_to_nat(1u);
x_71 = l_Lean_Syntax_getArg(x_1, x_70);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_72 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_71, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_unsigned_to_nat(2u);
x_76 = l_Lean_Syntax_getArg(x_1, x_75);
x_77 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_1, x_76);
lean_dec(x_76);
x_78 = lean_unsigned_to_nat(3u);
x_79 = l_Lean_Syntax_getArg(x_1, x_78);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_80 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(x_77, x_79, x_2, x_3, x_4, x_5, x_6, x_7, x_74);
lean_dec(x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; size_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_array_get_size(x_73);
x_84 = lean_usize_of_nat(x_83);
lean_dec(x_83);
x_85 = x_73;
x_86 = lean_box_usize(x_84);
x_87 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
x_88 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3___boxed), 11, 4);
lean_closure_set(x_88, 0, x_81);
lean_closure_set(x_88, 1, x_86);
lean_closure_set(x_88, 2, x_87);
lean_closure_set(x_88, 3, x_85);
x_89 = x_88;
x_90 = lean_apply_7(x_89, x_2, x_3, x_4, x_5, x_6, x_7, x_82);
return x_90;
}
else
{
uint8_t x_91; 
lean_dec(x_73);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_91 = !lean_is_exclusive(x_80);
if (x_91 == 0)
{
return x_80;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_80, 0);
x_93 = lean_ctor_get(x_80, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_80);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_95 = !lean_is_exclusive(x_72);
if (x_95 == 0)
{
return x_72;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_72, 0);
x_97 = lean_ctor_get(x_72, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_72);
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
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_16);
lean_dec(x_9);
x_99 = lean_unsigned_to_nat(0u);
x_100 = l_Lean_Syntax_getArg(x_1, x_99);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_101 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_100, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_100);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; size_t x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_unsigned_to_nat(1u);
x_105 = l_Lean_Syntax_getArg(x_1, x_104);
x_106 = l_Lean_Elab_Term_expandOptType(x_1, x_105);
lean_dec(x_105);
lean_dec(x_1);
x_107 = lean_array_get_size(x_102);
x_108 = lean_usize_of_nat(x_107);
lean_dec(x_107);
x_109 = x_102;
x_110 = lean_box_usize(x_108);
x_111 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
x_112 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4___boxed), 11, 4);
lean_closure_set(x_112, 0, x_106);
lean_closure_set(x_112, 1, x_110);
lean_closure_set(x_112, 2, x_111);
lean_closure_set(x_112, 3, x_109);
x_113 = x_112;
x_114 = lean_apply_7(x_113, x_2, x_3, x_4, x_5, x_6, x_7, x_103);
return x_114;
}
else
{
uint8_t x_115; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_115 = !lean_is_exclusive(x_101);
if (x_115 == 0)
{
return x_101;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_101, 0);
x_117 = lean_ctor_get(x_101, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_101);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_mk_string("failed to infer binder type");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_1, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_5, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 5);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*2);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_dec(x_13);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 2, x_2);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_unsigned_to_nat(32u);
x_27 = lean_mk_empty_array_with_capacity(x_26);
lean_inc(x_27);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = 5;
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_27);
lean_ctor_set(x_31, 2, x_30);
lean_ctor_set(x_31, 3, x_30);
lean_ctor_set_usize(x_31, 4, x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
return x_33;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_Lean_Syntax_getId(x_9);
x_11 = lean_erase_macro_scopes(x_10);
x_12 = l_Lean_Name_isAtomic(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_mk_string("invalid binder name '");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_11);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string("', it must be atomic");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(x_9, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
return x_22;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_box(0);
x_3 = lean_mk_string("checkBinderAnnotations");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = 1;
x_6 = lean_mk_string("");
x_7 = lean_mk_string("check whether type is a class instance whenever the binder annotation `[...]` is used");
x_8 = lean_box(x_5);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
x_10 = l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_4____spec__1(x_4, x_9, x_1);
lean_dec(x_9);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_9);
lean_inc(x_6);
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_2, x_16);
x_18 = lean_array_push(x_3, x_6);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(x_4, x_5, x_17, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_15);
return x_19;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getId(x_15);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1___boxed), 13, 5);
lean_closure_set(x_18, 0, x_15);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_5);
x_19 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(x_16, x_17, x_6, x_18, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_19;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_1, x_3);
lean_inc(x_9);
lean_inc(x_5);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_18);
x_19 = l_Lean_Elab_Term_elabType(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_18);
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(x_20, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_9, 0);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_15, sizeof(void*)*2);
x_26 = l_Lean_BinderInfo_isInstImplicit(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_18);
x_27 = lean_box(0);
x_28 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_15, x_3, x_4, x_1, x_2, x_20, x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
return x_28;
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_Elab_Term_checkBinderAnnotations;
x_30 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_24, x_29);
lean_dec(x_24);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_18);
x_31 = lean_box(0);
x_32 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_15, x_3, x_4, x_1, x_2, x_20, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
return x_32;
}
else
{
lean_object* x_33; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_20);
x_33 = l_Lean_Meta_isClass_x3f(x_20, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_mk_string("invalid binder annotation, type is not a class instance");
x_37 = l_Lean_stringToMessageData(x_36);
lean_dec(x_36);
x_38 = l_Lean_indentExpr(x_20);
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("\nuse the command `set_option checkBinderAnnotations false` to disable the check");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(x_18, x_42, x_5, x_6, x_7, x_8, x_9, x_10, x_35);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_18);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_34);
lean_dec(x_18);
x_48 = lean_ctor_get(x_33, 1);
lean_inc(x_48);
lean_dec(x_33);
x_49 = lean_box(0);
x_50 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_15, x_3, x_4, x_1, x_2, x_20, x_49, x_5, x_6, x_7, x_8, x_9, x_10, x_48);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_15);
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
x_51 = !lean_is_exclusive(x_33);
if (x_51 == 0)
{
return x_33;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_33, 0);
x_53 = lean_ctor_get(x_33, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_33);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_18);
lean_dec(x_15);
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
x_55 = !lean_is_exclusive(x_19);
if (x_55 == 0)
{
return x_19;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_19, 0);
x_57 = lean_ctor_get(x_19, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_19);
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
lean_dec(x_15);
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
x_59 = !lean_is_exclusive(x_16);
if (x_59 == 0)
{
return x_16;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_16, 0);
x_61 = lean_ctor_get(x_16, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_16);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(x_1, x_3, x_11, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_1, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_3, x_19);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed), 11, 3);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(x_17, x_21, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(x_1, x_2, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = l_Lean_Meta_getResetPostponed(x_5, x_6, x_7, x_8, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 0;
x_22 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_Meta_processPostponed(x_21, x_22, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_19);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_27 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr(x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_4);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_setPostponed(x_16, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set_tag(x_30, 1);
lean_ctor_set(x_30, 0, x_28);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_23, 1);
lean_inc(x_35);
lean_dec(x_23);
x_36 = lean_box(0);
x_37 = l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg___lambda__1(x_16, x_19, x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_10 = x_38;
x_11 = x_39;
goto block_14;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_19);
lean_dec(x_4);
lean_dec(x_3);
x_40 = lean_ctor_get(x_23, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_23, 1);
lean_inc(x_41);
lean_dec(x_23);
x_42 = l_Lean_Meta_setPostponed(x_16, x_5, x_6, x_7, x_8, x_41);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set_tag(x_42, 1);
lean_ctor_set(x_42, 0, x_40);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_dec(x_4);
lean_dec(x_3);
x_47 = lean_ctor_get(x_18, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_18, 1);
lean_inc(x_48);
lean_dec(x_18);
x_49 = l_Lean_Meta_setPostponed(x_16, x_5, x_6, x_7, x_8, x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set_tag(x_49, 1);
lean_ctor_set(x_49, 0, x_47);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
block_14:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Array_isEmpty___rarg(x_1);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = lean_apply_1(x_2, x_13);
x_15 = l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Term_elabBinders(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_instInhabitedExpr;
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_get(x_10, x_2, x_11);
x_13 = lean_apply_8(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_array_push(x_11, x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed), 9, 1);
lean_closure_set(x_13, 0, x_2);
x_14 = l_Lean_Elab_Term_elabBinders___rarg(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabBinder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabBinder___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Elab_Term_elabType(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_15 = l_Lean_Meta_mkForallFVars(x_2, x_11, x_13, x_14, x_5, x_6, x_7, x_8, x_12);
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
lean_dec(x_2);
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
lean_object* l_Lean_Elab_Term_elabForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_box(0);
x_11 = lean_mk_string("Lean");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Parser");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("Term");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("forall");
x_18 = lean_name_mk_string(x_16, x_17);
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_unsigned_to_nat(3u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
lean_dec(x_1);
x_25 = l_Lean_Syntax_getArgs(x_22);
lean_dec(x_22);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 9, 1);
lean_closure_set(x_26, 0, x_24);
x_27 = l_Lean_Elab_Term_elabBinders___rarg(x_25, x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_27;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabForall(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabForall");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_forall___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Lean");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("Parser");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("Term");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("arrow");
lean_inc(x_15);
x_17 = lean_name_mk_string(x_15, x_16);
lean_inc(x_1);
x_18 = l_Lean_Syntax_isOfKind(x_1, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_1);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_8);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
lean_dec(x_1);
x_24 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_mk_string("forall");
lean_inc(x_33);
lean_inc(x_15);
x_34 = lean_name_mk_string(x_15, x_33);
lean_inc(x_25);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_mk_string("null");
x_37 = lean_name_mk_string(x_9, x_36);
x_38 = lean_mk_string("explicitBinder");
x_39 = lean_name_mk_string(x_15, x_38);
x_40 = lean_mk_string("(");
lean_inc(x_25);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_25);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_mk_string("a");
x_43 = lean_string_utf8_byte_size(x_42);
lean_inc(x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_20);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_name_mk_string(x_9, x_42);
x_46 = l_Lean_addMacroScope(x_32, x_45, x_28);
x_47 = lean_box(0);
lean_inc(x_25);
x_48 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_48, 0, x_25);
lean_ctor_set(x_48, 1, x_44);
lean_ctor_set(x_48, 2, x_46);
lean_ctor_set(x_48, 3, x_47);
x_49 = lean_unsigned_to_nat(1u);
x_50 = lean_mk_empty_array_with_capacity(x_49);
lean_inc(x_50);
x_51 = lean_array_push(x_50, x_48);
lean_inc(x_37);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_mk_string(":");
lean_inc(x_25);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_25);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_mk_empty_array_with_capacity(x_22);
x_56 = lean_array_push(x_55, x_54);
x_57 = lean_array_push(x_56, x_21);
lean_inc(x_37);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_37);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_37);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_37);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string(")");
lean_inc(x_25);
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_25);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_unsigned_to_nat(5u);
x_64 = lean_mk_empty_array_with_capacity(x_63);
x_65 = lean_array_push(x_64, x_41);
x_66 = lean_array_push(x_65, x_52);
x_67 = lean_array_push(x_66, x_58);
x_68 = lean_array_push(x_67, x_60);
x_69 = lean_array_push(x_68, x_62);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_39);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_array_push(x_50, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_37);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string(",");
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_25);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_unsigned_to_nat(4u);
x_76 = lean_mk_empty_array_with_capacity(x_75);
x_77 = lean_array_push(x_76, x_35);
x_78 = lean_array_push(x_77, x_72);
x_79 = lean_array_push(x_78, x_74);
x_80 = lean_array_push(x_79, x_23);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_34);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_30, 0, x_81);
return x_30;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_82 = lean_ctor_get(x_30, 0);
x_83 = lean_ctor_get(x_30, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_30);
x_84 = lean_mk_string("forall");
lean_inc(x_84);
lean_inc(x_15);
x_85 = lean_name_mk_string(x_15, x_84);
lean_inc(x_25);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_25);
lean_ctor_set(x_86, 1, x_84);
x_87 = lean_mk_string("null");
x_88 = lean_name_mk_string(x_9, x_87);
x_89 = lean_mk_string("explicitBinder");
x_90 = lean_name_mk_string(x_15, x_89);
x_91 = lean_mk_string("(");
lean_inc(x_25);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_25);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string("a");
x_94 = lean_string_utf8_byte_size(x_93);
lean_inc(x_93);
x_95 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_20);
lean_ctor_set(x_95, 2, x_94);
x_96 = lean_name_mk_string(x_9, x_93);
x_97 = l_Lean_addMacroScope(x_82, x_96, x_28);
x_98 = lean_box(0);
lean_inc(x_25);
x_99 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_99, 0, x_25);
lean_ctor_set(x_99, 1, x_95);
lean_ctor_set(x_99, 2, x_97);
lean_ctor_set(x_99, 3, x_98);
x_100 = lean_unsigned_to_nat(1u);
x_101 = lean_mk_empty_array_with_capacity(x_100);
lean_inc(x_101);
x_102 = lean_array_push(x_101, x_99);
lean_inc(x_88);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_88);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string(":");
lean_inc(x_25);
x_105 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_105, 0, x_25);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_empty_array_with_capacity(x_22);
x_107 = lean_array_push(x_106, x_105);
x_108 = lean_array_push(x_107, x_21);
lean_inc(x_88);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_88);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_88);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_88);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_mk_string(")");
lean_inc(x_25);
x_113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_113, 0, x_25);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_unsigned_to_nat(5u);
x_115 = lean_mk_empty_array_with_capacity(x_114);
x_116 = lean_array_push(x_115, x_92);
x_117 = lean_array_push(x_116, x_103);
x_118 = lean_array_push(x_117, x_109);
x_119 = lean_array_push(x_118, x_111);
x_120 = lean_array_push(x_119, x_113);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_90);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_array_push(x_101, x_121);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_88);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_mk_string(",");
x_125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_125, 0, x_25);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_unsigned_to_nat(4u);
x_127 = lean_mk_empty_array_with_capacity(x_126);
x_128 = lean_array_push(x_127, x_86);
x_129 = lean_array_push(x_128, x_123);
x_130 = lean_array_push(x_129, x_125);
x_131 = lean_array_push(x_130, x_23);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_85);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_83);
return x_133;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrow___lambda__1___boxed), 8, 0);
x_11 = l_Lean_Elab_Term_adaptExpander(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabArrow___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabArrow");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrow), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_arrow___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_mk_empty_array_with_capacity(x_14);
x_16 = lean_array_push(x_15, x_11);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 9, 1);
lean_closure_set(x_17, 0, x_13);
x_18 = l_Lean_Elab_Term_elabBinders___rarg(x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabDepArrow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabDepArrow");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabDepArrow___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_depArrow___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_box(0);
x_4 = lean_mk_string("x");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_ctor_set(x_2, 0, x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_addMacroScope(x_10, x_5, x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_2);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_14, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_addMacroScope(x_19, x_5, x_14);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Lean_mkIdentFrom(x_1, x_8);
lean_ctor_set(x_6, 0, x_9);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_mkIdentFrom(x_1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_17 = l_Lean_mkIdentFrom(x_1, x_15);
if (lean_is_scalar(x_16)) {
 x_18 = lean_alloc_ctor(1, 1, 0);
} else {
 x_18 = x_16;
}
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_14);
return x_19;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_18; 
x_18 = x_4 < x_3;
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_1);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_5);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_7);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_array_uget(x_2, x_4);
x_22 = lean_mk_string("hole");
lean_inc(x_1);
x_23 = lean_name_mk_string(x_1, x_22);
lean_inc(x_21);
x_24 = l_Lean_Syntax_isOfKind(x_21, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_box(0);
x_26 = lean_mk_string("ident");
x_27 = lean_name_mk_string(x_25, x_26);
lean_inc(x_21);
x_28 = l_Lean_Syntax_isOfKind(x_21, x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_21);
x_29 = lean_box(0);
x_8 = x_29;
x_9 = x_7;
goto block_17;
}
else
{
lean_object* x_30; 
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_21);
x_8 = x_30;
x_9 = x_7;
goto block_17;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_inc(x_6);
x_31 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_21, x_6, x_7);
lean_dec(x_21);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
x_8 = x_32;
x_9 = x_33;
goto block_17;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_8 = x_36;
x_9 = x_33;
goto block_17;
}
}
}
block_17:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_array_push(x_5, x_12);
x_14 = 1;
x_15 = x_4 + x_14;
x_4 = x_15;
x_5 = x_13;
x_7 = x_9;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_21 = lean_box(0);
x_22 = lean_mk_string("Lean");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("Parser");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Term");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("app");
lean_inc(x_27);
x_29 = lean_name_mk_string(x_27, x_28);
lean_inc(x_1);
x_30 = l_Lean_Syntax_isOfKind(x_1, x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_mk_string("hole");
x_32 = lean_name_mk_string(x_27, x_31);
lean_inc(x_1);
x_33 = l_Lean_Syntax_isOfKind(x_1, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_2);
x_34 = lean_mk_string("ident");
x_35 = lean_name_mk_string(x_21, x_34);
lean_inc(x_1);
x_36 = l_Lean_Syntax_isOfKind(x_1, x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_1);
x_37 = lean_box(0);
x_4 = x_37;
x_5 = x_3;
goto block_20;
}
else
{
lean_object* x_38; 
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_1);
x_4 = x_38;
x_5 = x_3;
goto block_20;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = !lean_is_exclusive(x_40);
if (x_42 == 0)
{
x_4 = x_40;
x_5 = x_41;
goto block_20;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 0);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_4 = x_44;
x_5 = x_41;
goto block_20;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_Lean_Syntax_getArg(x_1, x_45);
x_47 = lean_unsigned_to_nat(1u);
x_48 = l_Lean_Syntax_getArg(x_1, x_47);
lean_dec(x_1);
x_49 = l_Lean_Syntax_getArgs(x_48);
lean_dec(x_48);
x_79 = lean_mk_string("hole");
lean_inc(x_27);
x_80 = lean_name_mk_string(x_27, x_79);
lean_inc(x_46);
x_81 = l_Lean_Syntax_isOfKind(x_46, x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_82 = lean_mk_string("ident");
x_83 = lean_name_mk_string(x_21, x_82);
lean_inc(x_46);
x_84 = l_Lean_Syntax_isOfKind(x_46, x_83);
lean_dec(x_83);
if (x_84 == 0)
{
lean_object* x_85; 
lean_dec(x_46);
x_85 = lean_box(0);
x_50 = x_85;
x_51 = x_3;
goto block_78;
}
else
{
lean_object* x_86; 
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_46);
x_50 = x_86;
x_51 = x_3;
goto block_78;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
lean_inc(x_2);
x_87 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_46, x_2, x_3);
lean_dec(x_46);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = !lean_is_exclusive(x_88);
if (x_90 == 0)
{
x_50 = x_88;
x_51 = x_89;
goto block_78;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_88, 0);
lean_inc(x_91);
lean_dec(x_88);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_50 = x_92;
x_51 = x_89;
goto block_78;
}
}
block_78:
{
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
lean_dec(x_27);
lean_dec(x_2);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; 
x_54 = lean_ctor_get(x_50, 0);
lean_inc(x_54);
lean_dec(x_50);
x_55 = lean_mk_empty_array_with_capacity(x_45);
x_56 = lean_array_push(x_55, x_54);
x_57 = lean_array_get_size(x_49);
x_58 = lean_usize_of_nat(x_57);
lean_dec(x_57);
x_59 = 0;
x_60 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3(x_27, x_49, x_58, x_59, x_56, x_2, x_51);
lean_dec(x_49);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
x_64 = lean_box(0);
lean_ctor_set(x_60, 0, x_64);
return x_60;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_60, 1);
lean_inc(x_65);
lean_dec(x_60);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_60);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; 
x_69 = lean_ctor_get(x_60, 0);
lean_dec(x_69);
x_70 = !lean_is_exclusive(x_61);
if (x_70 == 0)
{
return x_60;
}
else
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_61, 0);
lean_inc(x_71);
lean_dec(x_61);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_60, 0, x_72);
return x_60;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_ctor_get(x_60, 1);
lean_inc(x_73);
lean_dec(x_60);
x_74 = lean_ctor_get(x_61, 0);
lean_inc(x_74);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_75 = x_61;
} else {
 lean_dec_ref(x_61);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_74);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_73);
return x_77;
}
}
}
}
}
block_20:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_array_push(x_11, x_9);
lean_ctor_set(x_4, 0, x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_mk_empty_array_with_capacity(x_15);
x_17 = lean_array_push(x_16, x_14);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFunBinders_loop_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFunBinders_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
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
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
lean_object* x_17; uint64_t x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_10, 1);
x_18 = lean_ctor_get_uint64(x_10, sizeof(void*)*2);
x_19 = lean_ctor_get(x_10, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
lean_object* x_21; uint64_t x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_11, 1);
x_22 = lean_ctor_get_uint64(x_11, sizeof(void*)*2);
x_23 = lean_ctor_get(x_11, 0);
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_12);
if (x_24 == 0)
{
lean_object* x_25; uint64_t x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_12, 1);
x_26 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
x_27 = lean_ctor_get(x_12, 0);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
lean_object* x_29; uint64_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_13, 1);
x_30 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
x_31 = lean_ctor_get(x_13, 0);
lean_dec(x_31);
x_32 = lean_mk_string("Lean");
x_33 = lean_string_dec_eq(x_29, x_32);
lean_dec(x_29);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_25);
lean_free_object(x_11);
lean_dec(x_21);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_apply_1(x_9, x_1);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_1);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_1, 1);
lean_dec(x_36);
x_37 = lean_ctor_get(x_1, 0);
lean_dec(x_37);
x_38 = lean_mk_string("Parser");
x_39 = lean_string_dec_eq(x_25, x_38);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_13, 1, x_32);
x_40 = lean_apply_1(x_9, x_1);
return x_40;
}
else
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_25);
x_41 = lean_mk_string("Term");
x_42 = lean_string_dec_eq(x_21, x_41);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_13, 1, x_32);
lean_ctor_set(x_12, 1, x_38);
x_43 = lean_apply_1(x_9, x_1);
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; 
lean_dec(x_21);
x_44 = lean_mk_string("implicitBinder");
x_45 = lean_string_dec_eq(x_17, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_2);
x_46 = lean_mk_string("instBinder");
x_47 = lean_string_dec_eq(x_17, x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_3);
x_48 = lean_mk_string("explicitBinder");
x_49 = lean_string_dec_eq(x_17, x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_4);
x_50 = lean_mk_string("simpleBinder");
x_51 = lean_string_dec_eq(x_17, x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
lean_dec(x_5);
x_52 = lean_mk_string("hole");
x_53 = lean_string_dec_eq(x_17, x_52);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
lean_dec(x_6);
x_54 = lean_mk_string("paren");
x_55 = lean_string_dec_eq(x_17, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_7);
lean_ctor_set(x_13, 1, x_32);
lean_ctor_set(x_12, 1, x_38);
lean_ctor_set(x_11, 1, x_41);
x_56 = lean_apply_1(x_9, x_1);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_1);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
x_57 = lean_box_uint64(x_30);
x_58 = lean_box_uint64(x_26);
x_59 = lean_box_uint64(x_22);
x_60 = lean_box_uint64(x_18);
x_61 = lean_apply_5(x_7, x_15, x_57, x_58, x_59, x_60);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_1);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
x_62 = lean_box_uint64(x_30);
x_63 = lean_box_uint64(x_26);
x_64 = lean_box_uint64(x_22);
x_65 = lean_box_uint64(x_18);
x_66 = lean_apply_5(x_6, x_15, x_62, x_63, x_64, x_65);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_1);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_67 = lean_box_uint64(x_30);
x_68 = lean_box_uint64(x_26);
x_69 = lean_box_uint64(x_22);
x_70 = lean_box_uint64(x_18);
x_71 = lean_apply_5(x_5, x_15, x_67, x_68, x_69, x_70);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_1);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_72 = lean_box_uint64(x_30);
x_73 = lean_box_uint64(x_26);
x_74 = lean_box_uint64(x_22);
x_75 = lean_box_uint64(x_18);
x_76 = lean_apply_5(x_4, x_15, x_72, x_73, x_74, x_75);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_1);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_77 = lean_box_uint64(x_30);
x_78 = lean_box_uint64(x_26);
x_79 = lean_box_uint64(x_22);
x_80 = lean_box_uint64(x_18);
x_81 = lean_apply_5(x_3, x_15, x_77, x_78, x_79, x_80);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_1);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_82 = lean_box_uint64(x_30);
x_83 = lean_box_uint64(x_26);
x_84 = lean_box_uint64(x_22);
x_85 = lean_box_uint64(x_18);
x_86 = lean_apply_5(x_2, x_15, x_82, x_83, x_84, x_85);
return x_86;
}
}
}
}
else
{
lean_object* x_87; uint8_t x_88; 
lean_dec(x_1);
x_87 = lean_mk_string("Parser");
x_88 = lean_string_dec_eq(x_25, x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; 
lean_dec(x_87);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_13, 1, x_32);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_10);
lean_ctor_set(x_89, 1, x_15);
x_90 = lean_apply_1(x_9, x_89);
return x_90;
}
else
{
lean_object* x_91; uint8_t x_92; 
lean_dec(x_25);
x_91 = lean_mk_string("Term");
x_92 = lean_string_dec_eq(x_21, x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
lean_dec(x_91);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_13, 1, x_32);
lean_ctor_set(x_12, 1, x_87);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_10);
lean_ctor_set(x_93, 1, x_15);
x_94 = lean_apply_1(x_9, x_93);
return x_94;
}
else
{
lean_object* x_95; uint8_t x_96; 
lean_dec(x_21);
x_95 = lean_mk_string("implicitBinder");
x_96 = lean_string_dec_eq(x_17, x_95);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; uint8_t x_98; 
lean_dec(x_2);
x_97 = lean_mk_string("instBinder");
x_98 = lean_string_dec_eq(x_17, x_97);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; uint8_t x_100; 
lean_dec(x_3);
x_99 = lean_mk_string("explicitBinder");
x_100 = lean_string_dec_eq(x_17, x_99);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
lean_dec(x_4);
x_101 = lean_mk_string("simpleBinder");
x_102 = lean_string_dec_eq(x_17, x_101);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; uint8_t x_104; 
lean_dec(x_5);
x_103 = lean_mk_string("hole");
x_104 = lean_string_dec_eq(x_17, x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; 
lean_dec(x_6);
x_105 = lean_mk_string("paren");
x_106 = lean_string_dec_eq(x_17, x_105);
lean_dec(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_7);
lean_ctor_set(x_13, 1, x_32);
lean_ctor_set(x_12, 1, x_87);
lean_ctor_set(x_11, 1, x_91);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_10);
lean_ctor_set(x_107, 1, x_15);
x_108 = lean_apply_1(x_9, x_107);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_91);
lean_dec(x_87);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
x_109 = lean_box_uint64(x_30);
x_110 = lean_box_uint64(x_26);
x_111 = lean_box_uint64(x_22);
x_112 = lean_box_uint64(x_18);
x_113 = lean_apply_5(x_7, x_15, x_109, x_110, x_111, x_112);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_91);
lean_dec(x_87);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
x_114 = lean_box_uint64(x_30);
x_115 = lean_box_uint64(x_26);
x_116 = lean_box_uint64(x_22);
x_117 = lean_box_uint64(x_18);
x_118 = lean_apply_5(x_6, x_15, x_114, x_115, x_116, x_117);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_91);
lean_dec(x_87);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_119 = lean_box_uint64(x_30);
x_120 = lean_box_uint64(x_26);
x_121 = lean_box_uint64(x_22);
x_122 = lean_box_uint64(x_18);
x_123 = lean_apply_5(x_5, x_15, x_119, x_120, x_121, x_122);
return x_123;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_91);
lean_dec(x_87);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_124 = lean_box_uint64(x_30);
x_125 = lean_box_uint64(x_26);
x_126 = lean_box_uint64(x_22);
x_127 = lean_box_uint64(x_18);
x_128 = lean_apply_5(x_4, x_15, x_124, x_125, x_126, x_127);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_91);
lean_dec(x_87);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_129 = lean_box_uint64(x_30);
x_130 = lean_box_uint64(x_26);
x_131 = lean_box_uint64(x_22);
x_132 = lean_box_uint64(x_18);
x_133 = lean_apply_5(x_3, x_15, x_129, x_130, x_131, x_132);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_91);
lean_dec(x_87);
lean_dec(x_32);
lean_free_object(x_13);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_134 = lean_box_uint64(x_30);
x_135 = lean_box_uint64(x_26);
x_136 = lean_box_uint64(x_22);
x_137 = lean_box_uint64(x_18);
x_138 = lean_apply_5(x_2, x_15, x_134, x_135, x_136, x_137);
return x_138;
}
}
}
}
}
}
else
{
lean_object* x_139; uint64_t x_140; lean_object* x_141; uint8_t x_142; 
x_139 = lean_ctor_get(x_13, 1);
x_140 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
lean_inc(x_139);
lean_dec(x_13);
x_141 = lean_mk_string("Lean");
x_142 = lean_string_dec_eq(x_139, x_141);
lean_dec(x_139);
if (x_142 == 0)
{
lean_object* x_143; 
lean_dec(x_141);
lean_free_object(x_12);
lean_dec(x_25);
lean_free_object(x_11);
lean_dec(x_21);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = lean_apply_1(x_9, x_1);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; uint8_t x_146; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_144 = x_1;
} else {
 lean_dec_ref(x_1);
 x_144 = lean_box(0);
}
x_145 = lean_mk_string("Parser");
x_146 = lean_string_dec_eq(x_25, x_145);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_145);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_147, 0, x_14);
lean_ctor_set(x_147, 1, x_141);
lean_ctor_set_uint64(x_147, sizeof(void*)*2, x_140);
lean_ctor_set(x_12, 0, x_147);
if (lean_is_scalar(x_144)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_144;
}
lean_ctor_set(x_148, 0, x_10);
lean_ctor_set(x_148, 1, x_15);
x_149 = lean_apply_1(x_9, x_148);
return x_149;
}
else
{
lean_object* x_150; uint8_t x_151; 
lean_dec(x_25);
x_150 = lean_mk_string("Term");
x_151 = lean_string_dec_eq(x_21, x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_150);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_152 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_152, 0, x_14);
lean_ctor_set(x_152, 1, x_141);
lean_ctor_set_uint64(x_152, sizeof(void*)*2, x_140);
lean_ctor_set(x_12, 1, x_145);
lean_ctor_set(x_12, 0, x_152);
if (lean_is_scalar(x_144)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_144;
}
lean_ctor_set(x_153, 0, x_10);
lean_ctor_set(x_153, 1, x_15);
x_154 = lean_apply_1(x_9, x_153);
return x_154;
}
else
{
lean_object* x_155; uint8_t x_156; 
lean_dec(x_21);
x_155 = lean_mk_string("implicitBinder");
x_156 = lean_string_dec_eq(x_17, x_155);
lean_dec(x_155);
if (x_156 == 0)
{
lean_object* x_157; uint8_t x_158; 
lean_dec(x_2);
x_157 = lean_mk_string("instBinder");
x_158 = lean_string_dec_eq(x_17, x_157);
lean_dec(x_157);
if (x_158 == 0)
{
lean_object* x_159; uint8_t x_160; 
lean_dec(x_3);
x_159 = lean_mk_string("explicitBinder");
x_160 = lean_string_dec_eq(x_17, x_159);
lean_dec(x_159);
if (x_160 == 0)
{
lean_object* x_161; uint8_t x_162; 
lean_dec(x_4);
x_161 = lean_mk_string("simpleBinder");
x_162 = lean_string_dec_eq(x_17, x_161);
lean_dec(x_161);
if (x_162 == 0)
{
lean_object* x_163; uint8_t x_164; 
lean_dec(x_5);
x_163 = lean_mk_string("hole");
x_164 = lean_string_dec_eq(x_17, x_163);
lean_dec(x_163);
if (x_164 == 0)
{
lean_object* x_165; uint8_t x_166; 
lean_dec(x_6);
x_165 = lean_mk_string("paren");
x_166 = lean_string_dec_eq(x_17, x_165);
lean_dec(x_165);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_7);
x_167 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_167, 0, x_14);
lean_ctor_set(x_167, 1, x_141);
lean_ctor_set_uint64(x_167, sizeof(void*)*2, x_140);
lean_ctor_set(x_12, 1, x_145);
lean_ctor_set(x_12, 0, x_167);
lean_ctor_set(x_11, 1, x_150);
if (lean_is_scalar(x_144)) {
 x_168 = lean_alloc_ctor(1, 2, 0);
} else {
 x_168 = x_144;
}
lean_ctor_set(x_168, 0, x_10);
lean_ctor_set(x_168, 1, x_15);
x_169 = lean_apply_1(x_9, x_168);
return x_169;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_141);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
x_170 = lean_box_uint64(x_140);
x_171 = lean_box_uint64(x_26);
x_172 = lean_box_uint64(x_22);
x_173 = lean_box_uint64(x_18);
x_174 = lean_apply_5(x_7, x_15, x_170, x_171, x_172, x_173);
return x_174;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_141);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
x_175 = lean_box_uint64(x_140);
x_176 = lean_box_uint64(x_26);
x_177 = lean_box_uint64(x_22);
x_178 = lean_box_uint64(x_18);
x_179 = lean_apply_5(x_6, x_15, x_175, x_176, x_177, x_178);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_141);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_180 = lean_box_uint64(x_140);
x_181 = lean_box_uint64(x_26);
x_182 = lean_box_uint64(x_22);
x_183 = lean_box_uint64(x_18);
x_184 = lean_apply_5(x_5, x_15, x_180, x_181, x_182, x_183);
return x_184;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_141);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_185 = lean_box_uint64(x_140);
x_186 = lean_box_uint64(x_26);
x_187 = lean_box_uint64(x_22);
x_188 = lean_box_uint64(x_18);
x_189 = lean_apply_5(x_4, x_15, x_185, x_186, x_187, x_188);
return x_189;
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_141);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_190 = lean_box_uint64(x_140);
x_191 = lean_box_uint64(x_26);
x_192 = lean_box_uint64(x_22);
x_193 = lean_box_uint64(x_18);
x_194 = lean_apply_5(x_3, x_15, x_190, x_191, x_192, x_193);
return x_194;
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_141);
lean_free_object(x_12);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_195 = lean_box_uint64(x_140);
x_196 = lean_box_uint64(x_26);
x_197 = lean_box_uint64(x_22);
x_198 = lean_box_uint64(x_18);
x_199 = lean_apply_5(x_2, x_15, x_195, x_196, x_197, x_198);
return x_199;
}
}
}
}
}
}
else
{
lean_object* x_200; uint64_t x_201; lean_object* x_202; uint64_t x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_200 = lean_ctor_get(x_12, 1);
x_201 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
lean_inc(x_200);
lean_dec(x_12);
x_202 = lean_ctor_get(x_13, 1);
lean_inc(x_202);
x_203 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_204 = x_13;
} else {
 lean_dec_ref(x_13);
 x_204 = lean_box(0);
}
x_205 = lean_mk_string("Lean");
x_206 = lean_string_dec_eq(x_202, x_205);
lean_dec(x_202);
if (x_206 == 0)
{
lean_object* x_207; 
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_200);
lean_free_object(x_11);
lean_dec(x_21);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_207 = lean_apply_1(x_9, x_1);
return x_207;
}
else
{
lean_object* x_208; lean_object* x_209; uint8_t x_210; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_208 = x_1;
} else {
 lean_dec_ref(x_1);
 x_208 = lean_box(0);
}
x_209 = lean_mk_string("Parser");
x_210 = lean_string_dec_eq(x_200, x_209);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_209);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_204)) {
 x_211 = lean_alloc_ctor(1, 2, 8);
} else {
 x_211 = x_204;
}
lean_ctor_set(x_211, 0, x_14);
lean_ctor_set(x_211, 1, x_205);
lean_ctor_set_uint64(x_211, sizeof(void*)*2, x_203);
x_212 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_200);
lean_ctor_set_uint64(x_212, sizeof(void*)*2, x_201);
lean_ctor_set(x_11, 0, x_212);
if (lean_is_scalar(x_208)) {
 x_213 = lean_alloc_ctor(1, 2, 0);
} else {
 x_213 = x_208;
}
lean_ctor_set(x_213, 0, x_10);
lean_ctor_set(x_213, 1, x_15);
x_214 = lean_apply_1(x_9, x_213);
return x_214;
}
else
{
lean_object* x_215; uint8_t x_216; 
lean_dec(x_200);
x_215 = lean_mk_string("Term");
x_216 = lean_string_dec_eq(x_21, x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_215);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_204)) {
 x_217 = lean_alloc_ctor(1, 2, 8);
} else {
 x_217 = x_204;
}
lean_ctor_set(x_217, 0, x_14);
lean_ctor_set(x_217, 1, x_205);
lean_ctor_set_uint64(x_217, sizeof(void*)*2, x_203);
x_218 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_209);
lean_ctor_set_uint64(x_218, sizeof(void*)*2, x_201);
lean_ctor_set(x_11, 0, x_218);
if (lean_is_scalar(x_208)) {
 x_219 = lean_alloc_ctor(1, 2, 0);
} else {
 x_219 = x_208;
}
lean_ctor_set(x_219, 0, x_10);
lean_ctor_set(x_219, 1, x_15);
x_220 = lean_apply_1(x_9, x_219);
return x_220;
}
else
{
lean_object* x_221; uint8_t x_222; 
lean_dec(x_21);
x_221 = lean_mk_string("implicitBinder");
x_222 = lean_string_dec_eq(x_17, x_221);
lean_dec(x_221);
if (x_222 == 0)
{
lean_object* x_223; uint8_t x_224; 
lean_dec(x_2);
x_223 = lean_mk_string("instBinder");
x_224 = lean_string_dec_eq(x_17, x_223);
lean_dec(x_223);
if (x_224 == 0)
{
lean_object* x_225; uint8_t x_226; 
lean_dec(x_3);
x_225 = lean_mk_string("explicitBinder");
x_226 = lean_string_dec_eq(x_17, x_225);
lean_dec(x_225);
if (x_226 == 0)
{
lean_object* x_227; uint8_t x_228; 
lean_dec(x_4);
x_227 = lean_mk_string("simpleBinder");
x_228 = lean_string_dec_eq(x_17, x_227);
lean_dec(x_227);
if (x_228 == 0)
{
lean_object* x_229; uint8_t x_230; 
lean_dec(x_5);
x_229 = lean_mk_string("hole");
x_230 = lean_string_dec_eq(x_17, x_229);
lean_dec(x_229);
if (x_230 == 0)
{
lean_object* x_231; uint8_t x_232; 
lean_dec(x_6);
x_231 = lean_mk_string("paren");
x_232 = lean_string_dec_eq(x_17, x_231);
lean_dec(x_231);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_7);
if (lean_is_scalar(x_204)) {
 x_233 = lean_alloc_ctor(1, 2, 8);
} else {
 x_233 = x_204;
}
lean_ctor_set(x_233, 0, x_14);
lean_ctor_set(x_233, 1, x_205);
lean_ctor_set_uint64(x_233, sizeof(void*)*2, x_203);
x_234 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_209);
lean_ctor_set_uint64(x_234, sizeof(void*)*2, x_201);
lean_ctor_set(x_11, 1, x_215);
lean_ctor_set(x_11, 0, x_234);
if (lean_is_scalar(x_208)) {
 x_235 = lean_alloc_ctor(1, 2, 0);
} else {
 x_235 = x_208;
}
lean_ctor_set(x_235, 0, x_10);
lean_ctor_set(x_235, 1, x_15);
x_236 = lean_apply_1(x_9, x_235);
return x_236;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_215);
lean_dec(x_209);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_204);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
x_237 = lean_box_uint64(x_203);
x_238 = lean_box_uint64(x_201);
x_239 = lean_box_uint64(x_22);
x_240 = lean_box_uint64(x_18);
x_241 = lean_apply_5(x_7, x_15, x_237, x_238, x_239, x_240);
return x_241;
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_215);
lean_dec(x_209);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_204);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
x_242 = lean_box_uint64(x_203);
x_243 = lean_box_uint64(x_201);
x_244 = lean_box_uint64(x_22);
x_245 = lean_box_uint64(x_18);
x_246 = lean_apply_5(x_6, x_15, x_242, x_243, x_244, x_245);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_215);
lean_dec(x_209);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_204);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_247 = lean_box_uint64(x_203);
x_248 = lean_box_uint64(x_201);
x_249 = lean_box_uint64(x_22);
x_250 = lean_box_uint64(x_18);
x_251 = lean_apply_5(x_5, x_15, x_247, x_248, x_249, x_250);
return x_251;
}
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_215);
lean_dec(x_209);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_204);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_252 = lean_box_uint64(x_203);
x_253 = lean_box_uint64(x_201);
x_254 = lean_box_uint64(x_22);
x_255 = lean_box_uint64(x_18);
x_256 = lean_apply_5(x_4, x_15, x_252, x_253, x_254, x_255);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_215);
lean_dec(x_209);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_204);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_257 = lean_box_uint64(x_203);
x_258 = lean_box_uint64(x_201);
x_259 = lean_box_uint64(x_22);
x_260 = lean_box_uint64(x_18);
x_261 = lean_apply_5(x_3, x_15, x_257, x_258, x_259, x_260);
return x_261;
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_215);
lean_dec(x_209);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_204);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_262 = lean_box_uint64(x_203);
x_263 = lean_box_uint64(x_201);
x_264 = lean_box_uint64(x_22);
x_265 = lean_box_uint64(x_18);
x_266 = lean_apply_5(x_2, x_15, x_262, x_263, x_264, x_265);
return x_266;
}
}
}
}
}
}
else
{
lean_object* x_267; uint64_t x_268; lean_object* x_269; uint64_t x_270; lean_object* x_271; lean_object* x_272; uint64_t x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; 
x_267 = lean_ctor_get(x_11, 1);
x_268 = lean_ctor_get_uint64(x_11, sizeof(void*)*2);
lean_inc(x_267);
lean_dec(x_11);
x_269 = lean_ctor_get(x_12, 1);
lean_inc(x_269);
x_270 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_271 = x_12;
} else {
 lean_dec_ref(x_12);
 x_271 = lean_box(0);
}
x_272 = lean_ctor_get(x_13, 1);
lean_inc(x_272);
x_273 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_274 = x_13;
} else {
 lean_dec_ref(x_13);
 x_274 = lean_box(0);
}
x_275 = lean_mk_string("Lean");
x_276 = lean_string_dec_eq(x_272, x_275);
lean_dec(x_272);
if (x_276 == 0)
{
lean_object* x_277; 
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_dec(x_269);
lean_dec(x_267);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_277 = lean_apply_1(x_9, x_1);
return x_277;
}
else
{
lean_object* x_278; lean_object* x_279; uint8_t x_280; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_278 = x_1;
} else {
 lean_dec_ref(x_1);
 x_278 = lean_box(0);
}
x_279 = lean_mk_string("Parser");
x_280 = lean_string_dec_eq(x_269, x_279);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_279);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_274)) {
 x_281 = lean_alloc_ctor(1, 2, 8);
} else {
 x_281 = x_274;
}
lean_ctor_set(x_281, 0, x_14);
lean_ctor_set(x_281, 1, x_275);
lean_ctor_set_uint64(x_281, sizeof(void*)*2, x_273);
if (lean_is_scalar(x_271)) {
 x_282 = lean_alloc_ctor(1, 2, 8);
} else {
 x_282 = x_271;
}
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_269);
lean_ctor_set_uint64(x_282, sizeof(void*)*2, x_270);
x_283 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_267);
lean_ctor_set_uint64(x_283, sizeof(void*)*2, x_268);
lean_ctor_set(x_10, 0, x_283);
if (lean_is_scalar(x_278)) {
 x_284 = lean_alloc_ctor(1, 2, 0);
} else {
 x_284 = x_278;
}
lean_ctor_set(x_284, 0, x_10);
lean_ctor_set(x_284, 1, x_15);
x_285 = lean_apply_1(x_9, x_284);
return x_285;
}
else
{
lean_object* x_286; uint8_t x_287; 
lean_dec(x_269);
x_286 = lean_mk_string("Term");
x_287 = lean_string_dec_eq(x_267, x_286);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
lean_dec(x_286);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_274)) {
 x_288 = lean_alloc_ctor(1, 2, 8);
} else {
 x_288 = x_274;
}
lean_ctor_set(x_288, 0, x_14);
lean_ctor_set(x_288, 1, x_275);
lean_ctor_set_uint64(x_288, sizeof(void*)*2, x_273);
if (lean_is_scalar(x_271)) {
 x_289 = lean_alloc_ctor(1, 2, 8);
} else {
 x_289 = x_271;
}
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_279);
lean_ctor_set_uint64(x_289, sizeof(void*)*2, x_270);
x_290 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_267);
lean_ctor_set_uint64(x_290, sizeof(void*)*2, x_268);
lean_ctor_set(x_10, 0, x_290);
if (lean_is_scalar(x_278)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_278;
}
lean_ctor_set(x_291, 0, x_10);
lean_ctor_set(x_291, 1, x_15);
x_292 = lean_apply_1(x_9, x_291);
return x_292;
}
else
{
lean_object* x_293; uint8_t x_294; 
lean_dec(x_267);
x_293 = lean_mk_string("implicitBinder");
x_294 = lean_string_dec_eq(x_17, x_293);
lean_dec(x_293);
if (x_294 == 0)
{
lean_object* x_295; uint8_t x_296; 
lean_dec(x_2);
x_295 = lean_mk_string("instBinder");
x_296 = lean_string_dec_eq(x_17, x_295);
lean_dec(x_295);
if (x_296 == 0)
{
lean_object* x_297; uint8_t x_298; 
lean_dec(x_3);
x_297 = lean_mk_string("explicitBinder");
x_298 = lean_string_dec_eq(x_17, x_297);
lean_dec(x_297);
if (x_298 == 0)
{
lean_object* x_299; uint8_t x_300; 
lean_dec(x_4);
x_299 = lean_mk_string("simpleBinder");
x_300 = lean_string_dec_eq(x_17, x_299);
lean_dec(x_299);
if (x_300 == 0)
{
lean_object* x_301; uint8_t x_302; 
lean_dec(x_5);
x_301 = lean_mk_string("hole");
x_302 = lean_string_dec_eq(x_17, x_301);
lean_dec(x_301);
if (x_302 == 0)
{
lean_object* x_303; uint8_t x_304; 
lean_dec(x_6);
x_303 = lean_mk_string("paren");
x_304 = lean_string_dec_eq(x_17, x_303);
lean_dec(x_303);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_7);
if (lean_is_scalar(x_274)) {
 x_305 = lean_alloc_ctor(1, 2, 8);
} else {
 x_305 = x_274;
}
lean_ctor_set(x_305, 0, x_14);
lean_ctor_set(x_305, 1, x_275);
lean_ctor_set_uint64(x_305, sizeof(void*)*2, x_273);
if (lean_is_scalar(x_271)) {
 x_306 = lean_alloc_ctor(1, 2, 8);
} else {
 x_306 = x_271;
}
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_279);
lean_ctor_set_uint64(x_306, sizeof(void*)*2, x_270);
x_307 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_286);
lean_ctor_set_uint64(x_307, sizeof(void*)*2, x_268);
lean_ctor_set(x_10, 0, x_307);
if (lean_is_scalar(x_278)) {
 x_308 = lean_alloc_ctor(1, 2, 0);
} else {
 x_308 = x_278;
}
lean_ctor_set(x_308, 0, x_10);
lean_ctor_set(x_308, 1, x_15);
x_309 = lean_apply_1(x_9, x_308);
return x_309;
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
lean_dec(x_286);
lean_dec(x_279);
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
x_310 = lean_box_uint64(x_273);
x_311 = lean_box_uint64(x_270);
x_312 = lean_box_uint64(x_268);
x_313 = lean_box_uint64(x_18);
x_314 = lean_apply_5(x_7, x_15, x_310, x_311, x_312, x_313);
return x_314;
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_286);
lean_dec(x_279);
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
x_315 = lean_box_uint64(x_273);
x_316 = lean_box_uint64(x_270);
x_317 = lean_box_uint64(x_268);
x_318 = lean_box_uint64(x_18);
x_319 = lean_apply_5(x_6, x_15, x_315, x_316, x_317, x_318);
return x_319;
}
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_286);
lean_dec(x_279);
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_320 = lean_box_uint64(x_273);
x_321 = lean_box_uint64(x_270);
x_322 = lean_box_uint64(x_268);
x_323 = lean_box_uint64(x_18);
x_324 = lean_apply_5(x_5, x_15, x_320, x_321, x_322, x_323);
return x_324;
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
lean_dec(x_286);
lean_dec(x_279);
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_325 = lean_box_uint64(x_273);
x_326 = lean_box_uint64(x_270);
x_327 = lean_box_uint64(x_268);
x_328 = lean_box_uint64(x_18);
x_329 = lean_apply_5(x_4, x_15, x_325, x_326, x_327, x_328);
return x_329;
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
lean_dec(x_286);
lean_dec(x_279);
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_330 = lean_box_uint64(x_273);
x_331 = lean_box_uint64(x_270);
x_332 = lean_box_uint64(x_268);
x_333 = lean_box_uint64(x_18);
x_334 = lean_apply_5(x_3, x_15, x_330, x_331, x_332, x_333);
return x_334;
}
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
lean_dec(x_286);
lean_dec(x_279);
lean_dec(x_278);
lean_dec(x_275);
lean_dec(x_274);
lean_dec(x_271);
lean_free_object(x_10);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_335 = lean_box_uint64(x_273);
x_336 = lean_box_uint64(x_270);
x_337 = lean_box_uint64(x_268);
x_338 = lean_box_uint64(x_18);
x_339 = lean_apply_5(x_2, x_15, x_335, x_336, x_337, x_338);
return x_339;
}
}
}
}
}
}
else
{
lean_object* x_340; uint64_t x_341; lean_object* x_342; uint64_t x_343; lean_object* x_344; lean_object* x_345; uint64_t x_346; lean_object* x_347; lean_object* x_348; uint64_t x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; 
x_340 = lean_ctor_get(x_10, 1);
x_341 = lean_ctor_get_uint64(x_10, sizeof(void*)*2);
lean_inc(x_340);
lean_dec(x_10);
x_342 = lean_ctor_get(x_11, 1);
lean_inc(x_342);
x_343 = lean_ctor_get_uint64(x_11, sizeof(void*)*2);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_344 = x_11;
} else {
 lean_dec_ref(x_11);
 x_344 = lean_box(0);
}
x_345 = lean_ctor_get(x_12, 1);
lean_inc(x_345);
x_346 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_347 = x_12;
} else {
 lean_dec_ref(x_12);
 x_347 = lean_box(0);
}
x_348 = lean_ctor_get(x_13, 1);
lean_inc(x_348);
x_349 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_350 = x_13;
} else {
 lean_dec_ref(x_13);
 x_350 = lean_box(0);
}
x_351 = lean_mk_string("Lean");
x_352 = lean_string_dec_eq(x_348, x_351);
lean_dec(x_348);
if (x_352 == 0)
{
lean_object* x_353; 
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_345);
lean_dec(x_344);
lean_dec(x_342);
lean_dec(x_340);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_353 = lean_apply_1(x_9, x_1);
return x_353;
}
else
{
lean_object* x_354; lean_object* x_355; uint8_t x_356; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_354 = x_1;
} else {
 lean_dec_ref(x_1);
 x_354 = lean_box(0);
}
x_355 = lean_mk_string("Parser");
x_356 = lean_string_dec_eq(x_345, x_355);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_355);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_350)) {
 x_357 = lean_alloc_ctor(1, 2, 8);
} else {
 x_357 = x_350;
}
lean_ctor_set(x_357, 0, x_14);
lean_ctor_set(x_357, 1, x_351);
lean_ctor_set_uint64(x_357, sizeof(void*)*2, x_349);
if (lean_is_scalar(x_347)) {
 x_358 = lean_alloc_ctor(1, 2, 8);
} else {
 x_358 = x_347;
}
lean_ctor_set(x_358, 0, x_357);
lean_ctor_set(x_358, 1, x_345);
lean_ctor_set_uint64(x_358, sizeof(void*)*2, x_346);
if (lean_is_scalar(x_344)) {
 x_359 = lean_alloc_ctor(1, 2, 8);
} else {
 x_359 = x_344;
}
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_342);
lean_ctor_set_uint64(x_359, sizeof(void*)*2, x_343);
x_360 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_340);
lean_ctor_set_uint64(x_360, sizeof(void*)*2, x_341);
if (lean_is_scalar(x_354)) {
 x_361 = lean_alloc_ctor(1, 2, 0);
} else {
 x_361 = x_354;
}
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_15);
x_362 = lean_apply_1(x_9, x_361);
return x_362;
}
else
{
lean_object* x_363; uint8_t x_364; 
lean_dec(x_345);
x_363 = lean_mk_string("Term");
x_364 = lean_string_dec_eq(x_342, x_363);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
lean_dec(x_363);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_350)) {
 x_365 = lean_alloc_ctor(1, 2, 8);
} else {
 x_365 = x_350;
}
lean_ctor_set(x_365, 0, x_14);
lean_ctor_set(x_365, 1, x_351);
lean_ctor_set_uint64(x_365, sizeof(void*)*2, x_349);
if (lean_is_scalar(x_347)) {
 x_366 = lean_alloc_ctor(1, 2, 8);
} else {
 x_366 = x_347;
}
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_355);
lean_ctor_set_uint64(x_366, sizeof(void*)*2, x_346);
if (lean_is_scalar(x_344)) {
 x_367 = lean_alloc_ctor(1, 2, 8);
} else {
 x_367 = x_344;
}
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_342);
lean_ctor_set_uint64(x_367, sizeof(void*)*2, x_343);
x_368 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_340);
lean_ctor_set_uint64(x_368, sizeof(void*)*2, x_341);
if (lean_is_scalar(x_354)) {
 x_369 = lean_alloc_ctor(1, 2, 0);
} else {
 x_369 = x_354;
}
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_15);
x_370 = lean_apply_1(x_9, x_369);
return x_370;
}
else
{
lean_object* x_371; uint8_t x_372; 
lean_dec(x_342);
x_371 = lean_mk_string("implicitBinder");
x_372 = lean_string_dec_eq(x_340, x_371);
lean_dec(x_371);
if (x_372 == 0)
{
lean_object* x_373; uint8_t x_374; 
lean_dec(x_2);
x_373 = lean_mk_string("instBinder");
x_374 = lean_string_dec_eq(x_340, x_373);
lean_dec(x_373);
if (x_374 == 0)
{
lean_object* x_375; uint8_t x_376; 
lean_dec(x_3);
x_375 = lean_mk_string("explicitBinder");
x_376 = lean_string_dec_eq(x_340, x_375);
lean_dec(x_375);
if (x_376 == 0)
{
lean_object* x_377; uint8_t x_378; 
lean_dec(x_4);
x_377 = lean_mk_string("simpleBinder");
x_378 = lean_string_dec_eq(x_340, x_377);
lean_dec(x_377);
if (x_378 == 0)
{
lean_object* x_379; uint8_t x_380; 
lean_dec(x_5);
x_379 = lean_mk_string("hole");
x_380 = lean_string_dec_eq(x_340, x_379);
lean_dec(x_379);
if (x_380 == 0)
{
lean_object* x_381; uint8_t x_382; 
lean_dec(x_6);
x_381 = lean_mk_string("paren");
x_382 = lean_string_dec_eq(x_340, x_381);
lean_dec(x_381);
if (x_382 == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_7);
if (lean_is_scalar(x_350)) {
 x_383 = lean_alloc_ctor(1, 2, 8);
} else {
 x_383 = x_350;
}
lean_ctor_set(x_383, 0, x_14);
lean_ctor_set(x_383, 1, x_351);
lean_ctor_set_uint64(x_383, sizeof(void*)*2, x_349);
if (lean_is_scalar(x_347)) {
 x_384 = lean_alloc_ctor(1, 2, 8);
} else {
 x_384 = x_347;
}
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_355);
lean_ctor_set_uint64(x_384, sizeof(void*)*2, x_346);
if (lean_is_scalar(x_344)) {
 x_385 = lean_alloc_ctor(1, 2, 8);
} else {
 x_385 = x_344;
}
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_363);
lean_ctor_set_uint64(x_385, sizeof(void*)*2, x_343);
x_386 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_340);
lean_ctor_set_uint64(x_386, sizeof(void*)*2, x_341);
if (lean_is_scalar(x_354)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_354;
}
lean_ctor_set(x_387, 0, x_386);
lean_ctor_set(x_387, 1, x_15);
x_388 = lean_apply_1(x_9, x_387);
return x_388;
}
else
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; 
lean_dec(x_363);
lean_dec(x_355);
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_9);
x_389 = lean_box_uint64(x_349);
x_390 = lean_box_uint64(x_346);
x_391 = lean_box_uint64(x_343);
x_392 = lean_box_uint64(x_341);
x_393 = lean_apply_5(x_7, x_15, x_389, x_390, x_391, x_392);
return x_393;
}
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; 
lean_dec(x_363);
lean_dec(x_355);
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_9);
lean_dec(x_7);
x_394 = lean_box_uint64(x_349);
x_395 = lean_box_uint64(x_346);
x_396 = lean_box_uint64(x_343);
x_397 = lean_box_uint64(x_341);
x_398 = lean_apply_5(x_6, x_15, x_394, x_395, x_396, x_397);
return x_398;
}
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
lean_dec(x_363);
lean_dec(x_355);
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_399 = lean_box_uint64(x_349);
x_400 = lean_box_uint64(x_346);
x_401 = lean_box_uint64(x_343);
x_402 = lean_box_uint64(x_341);
x_403 = lean_apply_5(x_5, x_15, x_399, x_400, x_401, x_402);
return x_403;
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
lean_dec(x_363);
lean_dec(x_355);
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_404 = lean_box_uint64(x_349);
x_405 = lean_box_uint64(x_346);
x_406 = lean_box_uint64(x_343);
x_407 = lean_box_uint64(x_341);
x_408 = lean_apply_5(x_4, x_15, x_404, x_405, x_406, x_407);
return x_408;
}
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
lean_dec(x_363);
lean_dec(x_355);
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_409 = lean_box_uint64(x_349);
x_410 = lean_box_uint64(x_346);
x_411 = lean_box_uint64(x_343);
x_412 = lean_box_uint64(x_341);
x_413 = lean_apply_5(x_3, x_15, x_409, x_410, x_411, x_412);
return x_413;
}
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
lean_dec(x_363);
lean_dec(x_355);
lean_dec(x_354);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_347);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_414 = lean_box_uint64(x_349);
x_415 = lean_box_uint64(x_346);
x_416 = lean_box_uint64(x_343);
x_417 = lean_box_uint64(x_341);
x_418 = lean_apply_5(x_2, x_15, x_414, x_415, x_416, x_417);
return x_418;
}
}
}
}
}
}
else
{
lean_object* x_419; 
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
lean_dec(x_2);
x_419 = lean_apply_1(x_9, x_1);
return x_419;
}
}
else
{
lean_object* x_420; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_420 = lean_apply_1(x_9, x_1);
return x_420;
}
}
else
{
lean_object* x_421; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_421 = lean_apply_1(x_9, x_1);
return x_421;
}
}
else
{
lean_object* x_422; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_422 = lean_apply_1(x_9, x_1);
return x_422;
}
}
else
{
lean_object* x_423; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_423 = lean_apply_1(x_9, x_1);
return x_423;
}
}
case 3:
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_424 = lean_ctor_get(x_1, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_1, 1);
lean_inc(x_425);
x_426 = lean_ctor_get(x_1, 2);
lean_inc(x_426);
x_427 = lean_ctor_get(x_1, 3);
lean_inc(x_427);
lean_dec(x_1);
x_428 = lean_apply_4(x_8, x_424, x_425, x_426, x_427);
return x_428;
}
default: 
{
lean_object* x_429; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_429 = lean_apply_1(x_9, x_1);
return x_429;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFunBinders_loop_match__3___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_box(0);
x_4 = lean_mk_string("x");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_ctor_set(x_2, 0, x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_addMacroScope(x_10, x_5, x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_13, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = l_Lean_addMacroScope(x_18, x_5, x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_mkIdentFrom(x_1, x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = l_Lean_mkIdentFrom(x_1, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
x_11 = l_Lean_Elab_Term_mkExplicitBinder(x_10, x_1);
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
lean_object* l_Lean_Elab_Term_expandFunBinders_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_array_fget(x_1, x_3);
switch (lean_obj_tag(x_14)) {
case 0:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_20 = l_Lean_mkHole(x_14);
lean_inc(x_16);
x_21 = l_Lean_Elab_Term_mkExplicitBinder(x_16, x_20);
x_22 = lean_array_push(x_4, x_21);
lean_inc(x_5);
x_23 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_19, x_22, x_5, x_17);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_24, 1);
lean_dec(x_28);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_dec(x_31);
x_32 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_26);
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; lean_object* x_93; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_box(0);
x_36 = lean_mk_string("Lean");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("Parser");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("Term");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("match");
lean_inc(x_42);
lean_inc(x_41);
x_43 = lean_name_mk_string(x_41, x_42);
lean_inc(x_34);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_34);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_mk_string("null");
x_46 = lean_name_mk_string(x_35, x_45);
x_47 = lean_unsigned_to_nat(0u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
lean_inc(x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_mk_string("matchDiscr");
lean_inc(x_41);
x_51 = lean_name_mk_string(x_41, x_50);
x_52 = lean_unsigned_to_nat(2u);
x_53 = lean_mk_empty_array_with_capacity(x_52);
lean_inc(x_49);
x_54 = lean_array_push(x_53, x_49);
x_55 = lean_array_push(x_54, x_16);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_57);
x_58 = lean_array_push(x_57, x_56);
lean_inc(x_46);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_46);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_mk_string("with");
lean_inc(x_34);
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_34);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("matchAlts");
lean_inc(x_41);
x_63 = lean_name_mk_string(x_41, x_62);
x_64 = lean_mk_string("matchAlt");
x_65 = lean_name_mk_string(x_41, x_64);
x_66 = lean_mk_string("|");
lean_inc(x_34);
x_67 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_67, 0, x_34);
lean_ctor_set(x_67, 1, x_66);
lean_inc(x_57);
x_68 = lean_array_push(x_57, x_14);
lean_inc(x_46);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_46);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_string("=>");
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_34);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_unsigned_to_nat(4u);
x_73 = lean_mk_empty_array_with_capacity(x_72);
x_74 = lean_array_push(x_73, x_67);
x_75 = lean_array_push(x_74, x_69);
x_76 = lean_array_push(x_75, x_71);
x_77 = lean_array_push(x_76, x_30);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_65);
lean_ctor_set(x_78, 1, x_77);
lean_inc(x_57);
x_79 = lean_array_push(x_57, x_78);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_46);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_array_push(x_57, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_63);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_unsigned_to_nat(6u);
x_84 = lean_mk_empty_array_with_capacity(x_83);
x_85 = lean_array_push(x_84, x_44);
lean_inc(x_49);
x_86 = lean_array_push(x_85, x_49);
x_87 = lean_array_push(x_86, x_59);
x_88 = lean_array_push(x_87, x_49);
x_89 = lean_array_push(x_88, x_61);
x_90 = lean_array_push(x_89, x_82);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_43);
lean_ctor_set(x_91, 1, x_90);
x_92 = 1;
x_93 = lean_box(x_92);
lean_ctor_set(x_25, 1, x_93);
lean_ctor_set(x_25, 0, x_91);
lean_ctor_set(x_32, 0, x_24);
return x_32;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; lean_object* x_154; lean_object* x_155; 
x_94 = lean_ctor_get(x_32, 0);
x_95 = lean_ctor_get(x_32, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_32);
x_96 = lean_box(0);
x_97 = lean_mk_string("Lean");
x_98 = lean_name_mk_string(x_96, x_97);
x_99 = lean_mk_string("Parser");
x_100 = lean_name_mk_string(x_98, x_99);
x_101 = lean_mk_string("Term");
x_102 = lean_name_mk_string(x_100, x_101);
x_103 = lean_mk_string("match");
lean_inc(x_103);
lean_inc(x_102);
x_104 = lean_name_mk_string(x_102, x_103);
lean_inc(x_94);
x_105 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_105, 0, x_94);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_mk_string("null");
x_107 = lean_name_mk_string(x_96, x_106);
x_108 = lean_unsigned_to_nat(0u);
x_109 = lean_mk_empty_array_with_capacity(x_108);
lean_inc(x_107);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_mk_string("matchDiscr");
lean_inc(x_102);
x_112 = lean_name_mk_string(x_102, x_111);
x_113 = lean_unsigned_to_nat(2u);
x_114 = lean_mk_empty_array_with_capacity(x_113);
lean_inc(x_110);
x_115 = lean_array_push(x_114, x_110);
x_116 = lean_array_push(x_115, x_16);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_112);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_118);
x_119 = lean_array_push(x_118, x_117);
lean_inc(x_107);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_107);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string("with");
lean_inc(x_94);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_94);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_mk_string("matchAlts");
lean_inc(x_102);
x_124 = lean_name_mk_string(x_102, x_123);
x_125 = lean_mk_string("matchAlt");
x_126 = lean_name_mk_string(x_102, x_125);
x_127 = lean_mk_string("|");
lean_inc(x_94);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_94);
lean_ctor_set(x_128, 1, x_127);
lean_inc(x_118);
x_129 = lean_array_push(x_118, x_14);
lean_inc(x_107);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_107);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_mk_string("=>");
x_132 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_132, 0, x_94);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_unsigned_to_nat(4u);
x_134 = lean_mk_empty_array_with_capacity(x_133);
x_135 = lean_array_push(x_134, x_128);
x_136 = lean_array_push(x_135, x_130);
x_137 = lean_array_push(x_136, x_132);
x_138 = lean_array_push(x_137, x_30);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_126);
lean_ctor_set(x_139, 1, x_138);
lean_inc(x_118);
x_140 = lean_array_push(x_118, x_139);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_107);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_array_push(x_118, x_141);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_124);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_unsigned_to_nat(6u);
x_145 = lean_mk_empty_array_with_capacity(x_144);
x_146 = lean_array_push(x_145, x_105);
lean_inc(x_110);
x_147 = lean_array_push(x_146, x_110);
x_148 = lean_array_push(x_147, x_120);
x_149 = lean_array_push(x_148, x_110);
x_150 = lean_array_push(x_149, x_122);
x_151 = lean_array_push(x_150, x_143);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_104);
lean_ctor_set(x_152, 1, x_151);
x_153 = 1;
x_154 = lean_box(x_153);
lean_ctor_set(x_25, 1, x_154);
lean_ctor_set(x_25, 0, x_152);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_24);
lean_ctor_set(x_155, 1, x_95);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_156 = lean_ctor_get(x_25, 0);
lean_inc(x_156);
lean_dec(x_25);
x_157 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_26);
lean_dec(x_5);
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
x_161 = lean_box(0);
x_162 = lean_mk_string("Lean");
x_163 = lean_name_mk_string(x_161, x_162);
x_164 = lean_mk_string("Parser");
x_165 = lean_name_mk_string(x_163, x_164);
x_166 = lean_mk_string("Term");
x_167 = lean_name_mk_string(x_165, x_166);
x_168 = lean_mk_string("match");
lean_inc(x_168);
lean_inc(x_167);
x_169 = lean_name_mk_string(x_167, x_168);
lean_inc(x_158);
x_170 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_170, 0, x_158);
lean_ctor_set(x_170, 1, x_168);
x_171 = lean_mk_string("null");
x_172 = lean_name_mk_string(x_161, x_171);
x_173 = lean_unsigned_to_nat(0u);
x_174 = lean_mk_empty_array_with_capacity(x_173);
lean_inc(x_172);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_172);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_mk_string("matchDiscr");
lean_inc(x_167);
x_177 = lean_name_mk_string(x_167, x_176);
x_178 = lean_unsigned_to_nat(2u);
x_179 = lean_mk_empty_array_with_capacity(x_178);
lean_inc(x_175);
x_180 = lean_array_push(x_179, x_175);
x_181 = lean_array_push(x_180, x_16);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_177);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_183);
x_184 = lean_array_push(x_183, x_182);
lean_inc(x_172);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_172);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_mk_string("with");
lean_inc(x_158);
x_187 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_187, 0, x_158);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_mk_string("matchAlts");
lean_inc(x_167);
x_189 = lean_name_mk_string(x_167, x_188);
x_190 = lean_mk_string("matchAlt");
x_191 = lean_name_mk_string(x_167, x_190);
x_192 = lean_mk_string("|");
lean_inc(x_158);
x_193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_193, 0, x_158);
lean_ctor_set(x_193, 1, x_192);
lean_inc(x_183);
x_194 = lean_array_push(x_183, x_14);
lean_inc(x_172);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_172);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_mk_string("=>");
x_197 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_197, 0, x_158);
lean_ctor_set(x_197, 1, x_196);
x_198 = lean_unsigned_to_nat(4u);
x_199 = lean_mk_empty_array_with_capacity(x_198);
x_200 = lean_array_push(x_199, x_193);
x_201 = lean_array_push(x_200, x_195);
x_202 = lean_array_push(x_201, x_197);
x_203 = lean_array_push(x_202, x_156);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_191);
lean_ctor_set(x_204, 1, x_203);
lean_inc(x_183);
x_205 = lean_array_push(x_183, x_204);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_172);
lean_ctor_set(x_206, 1, x_205);
x_207 = lean_array_push(x_183, x_206);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_189);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_unsigned_to_nat(6u);
x_210 = lean_mk_empty_array_with_capacity(x_209);
x_211 = lean_array_push(x_210, x_170);
lean_inc(x_175);
x_212 = lean_array_push(x_211, x_175);
x_213 = lean_array_push(x_212, x_185);
x_214 = lean_array_push(x_213, x_175);
x_215 = lean_array_push(x_214, x_187);
x_216 = lean_array_push(x_215, x_208);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_169);
lean_ctor_set(x_217, 1, x_216);
x_218 = 1;
x_219 = lean_box(x_218);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_219);
lean_ctor_set(x_24, 1, x_220);
if (lean_is_scalar(x_160)) {
 x_221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_221 = x_160;
}
lean_ctor_set(x_221, 0, x_24);
lean_ctor_set(x_221, 1, x_159);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_222 = lean_ctor_get(x_24, 0);
lean_inc(x_222);
lean_dec(x_24);
x_223 = lean_ctor_get(x_25, 0);
lean_inc(x_223);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_224 = x_25;
} else {
 lean_dec_ref(x_25);
 x_224 = lean_box(0);
}
x_225 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_26);
lean_dec(x_5);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_228 = x_225;
} else {
 lean_dec_ref(x_225);
 x_228 = lean_box(0);
}
x_229 = lean_box(0);
x_230 = lean_mk_string("Lean");
x_231 = lean_name_mk_string(x_229, x_230);
x_232 = lean_mk_string("Parser");
x_233 = lean_name_mk_string(x_231, x_232);
x_234 = lean_mk_string("Term");
x_235 = lean_name_mk_string(x_233, x_234);
x_236 = lean_mk_string("match");
lean_inc(x_236);
lean_inc(x_235);
x_237 = lean_name_mk_string(x_235, x_236);
lean_inc(x_226);
x_238 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_238, 0, x_226);
lean_ctor_set(x_238, 1, x_236);
x_239 = lean_mk_string("null");
x_240 = lean_name_mk_string(x_229, x_239);
x_241 = lean_unsigned_to_nat(0u);
x_242 = lean_mk_empty_array_with_capacity(x_241);
lean_inc(x_240);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_240);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_mk_string("matchDiscr");
lean_inc(x_235);
x_245 = lean_name_mk_string(x_235, x_244);
x_246 = lean_unsigned_to_nat(2u);
x_247 = lean_mk_empty_array_with_capacity(x_246);
lean_inc(x_243);
x_248 = lean_array_push(x_247, x_243);
x_249 = lean_array_push(x_248, x_16);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_245);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_251);
x_252 = lean_array_push(x_251, x_250);
lean_inc(x_240);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_240);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_mk_string("with");
lean_inc(x_226);
x_255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_255, 0, x_226);
lean_ctor_set(x_255, 1, x_254);
x_256 = lean_mk_string("matchAlts");
lean_inc(x_235);
x_257 = lean_name_mk_string(x_235, x_256);
x_258 = lean_mk_string("matchAlt");
x_259 = lean_name_mk_string(x_235, x_258);
x_260 = lean_mk_string("|");
lean_inc(x_226);
x_261 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_261, 0, x_226);
lean_ctor_set(x_261, 1, x_260);
lean_inc(x_251);
x_262 = lean_array_push(x_251, x_14);
lean_inc(x_240);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_240);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_mk_string("=>");
x_265 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_265, 0, x_226);
lean_ctor_set(x_265, 1, x_264);
x_266 = lean_unsigned_to_nat(4u);
x_267 = lean_mk_empty_array_with_capacity(x_266);
x_268 = lean_array_push(x_267, x_261);
x_269 = lean_array_push(x_268, x_263);
x_270 = lean_array_push(x_269, x_265);
x_271 = lean_array_push(x_270, x_223);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_259);
lean_ctor_set(x_272, 1, x_271);
lean_inc(x_251);
x_273 = lean_array_push(x_251, x_272);
x_274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_274, 0, x_240);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_array_push(x_251, x_274);
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_257);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_unsigned_to_nat(6u);
x_278 = lean_mk_empty_array_with_capacity(x_277);
x_279 = lean_array_push(x_278, x_238);
lean_inc(x_243);
x_280 = lean_array_push(x_279, x_243);
x_281 = lean_array_push(x_280, x_253);
x_282 = lean_array_push(x_281, x_243);
x_283 = lean_array_push(x_282, x_255);
x_284 = lean_array_push(x_283, x_276);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_237);
lean_ctor_set(x_285, 1, x_284);
x_286 = 1;
x_287 = lean_box(x_286);
if (lean_is_scalar(x_224)) {
 x_288 = lean_alloc_ctor(0, 2, 0);
} else {
 x_288 = x_224;
}
lean_ctor_set(x_288, 0, x_285);
lean_ctor_set(x_288, 1, x_287);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_222);
lean_ctor_set(x_289, 1, x_288);
if (lean_is_scalar(x_228)) {
 x_290 = lean_alloc_ctor(0, 2, 0);
} else {
 x_290 = x_228;
}
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_227);
return x_290;
}
}
case 1:
{
lean_object* x_291; 
x_291 = lean_ctor_get(x_14, 0);
lean_inc(x_291);
if (lean_obj_tag(x_291) == 1)
{
lean_object* x_292; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
if (lean_obj_tag(x_292) == 1)
{
lean_object* x_293; 
x_293 = lean_ctor_get(x_292, 0);
lean_inc(x_293);
if (lean_obj_tag(x_293) == 1)
{
lean_object* x_294; 
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
if (lean_obj_tag(x_294) == 1)
{
lean_object* x_295; 
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
if (lean_obj_tag(x_295) == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_296 = lean_ctor_get(x_291, 1);
lean_inc(x_296);
lean_dec(x_291);
x_297 = lean_ctor_get(x_292, 1);
lean_inc(x_297);
lean_dec(x_292);
x_298 = lean_ctor_get(x_293, 1);
lean_inc(x_298);
lean_dec(x_293);
x_299 = lean_ctor_get(x_294, 1);
lean_inc(x_299);
lean_dec(x_294);
x_300 = lean_mk_string("Lean");
x_301 = lean_string_dec_eq(x_299, x_300);
lean_dec(x_299);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; uint8_t x_314; 
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_inc(x_5);
x_302 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_302, 1);
lean_inc(x_304);
lean_dec(x_302);
x_305 = lean_unsigned_to_nat(1u);
x_306 = lean_nat_add(x_3, x_305);
lean_dec(x_3);
x_307 = l_Lean_mkHole(x_14);
lean_inc(x_303);
x_308 = l_Lean_Elab_Term_mkExplicitBinder(x_303, x_307);
x_309 = lean_array_push(x_4, x_308);
lean_inc(x_5);
x_310 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_306, x_309, x_5, x_304);
x_311 = lean_ctor_get(x_310, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_311, 1);
lean_inc(x_312);
x_313 = lean_ctor_get(x_310, 1);
lean_inc(x_313);
lean_dec(x_310);
x_314 = !lean_is_exclusive(x_311);
if (x_314 == 0)
{
lean_object* x_315; uint8_t x_316; 
x_315 = lean_ctor_get(x_311, 1);
lean_dec(x_315);
x_316 = !lean_is_exclusive(x_312);
if (x_316 == 0)
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; uint8_t x_320; 
x_317 = lean_ctor_get(x_312, 0);
x_318 = lean_ctor_get(x_312, 1);
lean_dec(x_318);
x_319 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_313);
lean_dec(x_5);
x_320 = !lean_is_exclusive(x_319);
if (x_320 == 0)
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; uint8_t x_355; 
x_321 = lean_ctor_get(x_319, 0);
x_322 = lean_box(0);
x_323 = lean_name_mk_string(x_322, x_300);
x_324 = lean_mk_string("Parser");
x_325 = lean_name_mk_string(x_323, x_324);
x_326 = lean_mk_string("Term");
x_327 = lean_name_mk_string(x_325, x_326);
x_328 = lean_mk_string("match");
lean_inc(x_328);
lean_inc(x_327);
x_329 = lean_name_mk_string(x_327, x_328);
lean_inc(x_321);
x_330 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_330, 0, x_321);
lean_ctor_set(x_330, 1, x_328);
x_331 = lean_mk_string("null");
x_332 = lean_name_mk_string(x_322, x_331);
x_333 = lean_unsigned_to_nat(0u);
x_334 = lean_mk_empty_array_with_capacity(x_333);
lean_inc(x_332);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_332);
lean_ctor_set(x_335, 1, x_334);
x_336 = lean_mk_string("matchDiscr");
lean_inc(x_327);
x_337 = lean_name_mk_string(x_327, x_336);
x_338 = lean_unsigned_to_nat(2u);
x_339 = lean_mk_empty_array_with_capacity(x_338);
lean_inc(x_335);
x_340 = lean_array_push(x_339, x_335);
x_341 = lean_array_push(x_340, x_303);
x_342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_342, 0, x_337);
lean_ctor_set(x_342, 1, x_341);
x_343 = lean_mk_empty_array_with_capacity(x_305);
lean_inc(x_343);
x_344 = lean_array_push(x_343, x_342);
lean_inc(x_332);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_332);
lean_ctor_set(x_345, 1, x_344);
x_346 = lean_mk_string("with");
lean_inc(x_321);
x_347 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_347, 0, x_321);
lean_ctor_set(x_347, 1, x_346);
x_348 = lean_mk_string("matchAlts");
lean_inc(x_327);
x_349 = lean_name_mk_string(x_327, x_348);
x_350 = lean_mk_string("matchAlt");
x_351 = lean_name_mk_string(x_327, x_350);
x_352 = lean_mk_string("|");
lean_inc(x_321);
x_353 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_353, 0, x_321);
lean_ctor_set(x_353, 1, x_352);
lean_inc(x_14);
lean_inc(x_343);
x_354 = lean_array_push(x_343, x_14);
x_355 = !lean_is_exclusive(x_14);
if (x_355 == 0)
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; uint8_t x_380; lean_object* x_381; 
x_356 = lean_ctor_get(x_14, 1);
lean_dec(x_356);
x_357 = lean_ctor_get(x_14, 0);
lean_dec(x_357);
lean_inc(x_332);
lean_ctor_set(x_14, 1, x_354);
lean_ctor_set(x_14, 0, x_332);
x_358 = lean_mk_string("=>");
x_359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_359, 0, x_321);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_unsigned_to_nat(4u);
x_361 = lean_mk_empty_array_with_capacity(x_360);
x_362 = lean_array_push(x_361, x_353);
x_363 = lean_array_push(x_362, x_14);
x_364 = lean_array_push(x_363, x_359);
x_365 = lean_array_push(x_364, x_317);
x_366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_366, 0, x_351);
lean_ctor_set(x_366, 1, x_365);
lean_inc(x_343);
x_367 = lean_array_push(x_343, x_366);
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_332);
lean_ctor_set(x_368, 1, x_367);
x_369 = lean_array_push(x_343, x_368);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_349);
lean_ctor_set(x_370, 1, x_369);
x_371 = lean_unsigned_to_nat(6u);
x_372 = lean_mk_empty_array_with_capacity(x_371);
x_373 = lean_array_push(x_372, x_330);
lean_inc(x_335);
x_374 = lean_array_push(x_373, x_335);
x_375 = lean_array_push(x_374, x_345);
x_376 = lean_array_push(x_375, x_335);
x_377 = lean_array_push(x_376, x_347);
x_378 = lean_array_push(x_377, x_370);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_329);
lean_ctor_set(x_379, 1, x_378);
x_380 = 1;
x_381 = lean_box(x_380);
lean_ctor_set(x_312, 1, x_381);
lean_ctor_set(x_312, 0, x_379);
lean_ctor_set(x_319, 0, x_311);
return x_319;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; uint8_t x_405; lean_object* x_406; 
lean_dec(x_14);
lean_inc(x_332);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_332);
lean_ctor_set(x_382, 1, x_354);
x_383 = lean_mk_string("=>");
x_384 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_384, 0, x_321);
lean_ctor_set(x_384, 1, x_383);
x_385 = lean_unsigned_to_nat(4u);
x_386 = lean_mk_empty_array_with_capacity(x_385);
x_387 = lean_array_push(x_386, x_353);
x_388 = lean_array_push(x_387, x_382);
x_389 = lean_array_push(x_388, x_384);
x_390 = lean_array_push(x_389, x_317);
x_391 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_391, 0, x_351);
lean_ctor_set(x_391, 1, x_390);
lean_inc(x_343);
x_392 = lean_array_push(x_343, x_391);
x_393 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_393, 0, x_332);
lean_ctor_set(x_393, 1, x_392);
x_394 = lean_array_push(x_343, x_393);
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_349);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_unsigned_to_nat(6u);
x_397 = lean_mk_empty_array_with_capacity(x_396);
x_398 = lean_array_push(x_397, x_330);
lean_inc(x_335);
x_399 = lean_array_push(x_398, x_335);
x_400 = lean_array_push(x_399, x_345);
x_401 = lean_array_push(x_400, x_335);
x_402 = lean_array_push(x_401, x_347);
x_403 = lean_array_push(x_402, x_395);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_329);
lean_ctor_set(x_404, 1, x_403);
x_405 = 1;
x_406 = lean_box(x_405);
lean_ctor_set(x_312, 1, x_406);
lean_ctor_set(x_312, 0, x_404);
lean_ctor_set(x_319, 0, x_311);
return x_319;
}
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; uint8_t x_466; lean_object* x_467; lean_object* x_468; 
x_407 = lean_ctor_get(x_319, 0);
x_408 = lean_ctor_get(x_319, 1);
lean_inc(x_408);
lean_inc(x_407);
lean_dec(x_319);
x_409 = lean_box(0);
x_410 = lean_name_mk_string(x_409, x_300);
x_411 = lean_mk_string("Parser");
x_412 = lean_name_mk_string(x_410, x_411);
x_413 = lean_mk_string("Term");
x_414 = lean_name_mk_string(x_412, x_413);
x_415 = lean_mk_string("match");
lean_inc(x_415);
lean_inc(x_414);
x_416 = lean_name_mk_string(x_414, x_415);
lean_inc(x_407);
x_417 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_417, 0, x_407);
lean_ctor_set(x_417, 1, x_415);
x_418 = lean_mk_string("null");
x_419 = lean_name_mk_string(x_409, x_418);
x_420 = lean_unsigned_to_nat(0u);
x_421 = lean_mk_empty_array_with_capacity(x_420);
lean_inc(x_419);
x_422 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_421);
x_423 = lean_mk_string("matchDiscr");
lean_inc(x_414);
x_424 = lean_name_mk_string(x_414, x_423);
x_425 = lean_unsigned_to_nat(2u);
x_426 = lean_mk_empty_array_with_capacity(x_425);
lean_inc(x_422);
x_427 = lean_array_push(x_426, x_422);
x_428 = lean_array_push(x_427, x_303);
x_429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_429, 0, x_424);
lean_ctor_set(x_429, 1, x_428);
x_430 = lean_mk_empty_array_with_capacity(x_305);
lean_inc(x_430);
x_431 = lean_array_push(x_430, x_429);
lean_inc(x_419);
x_432 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_432, 0, x_419);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_mk_string("with");
lean_inc(x_407);
x_434 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_434, 0, x_407);
lean_ctor_set(x_434, 1, x_433);
x_435 = lean_mk_string("matchAlts");
lean_inc(x_414);
x_436 = lean_name_mk_string(x_414, x_435);
x_437 = lean_mk_string("matchAlt");
x_438 = lean_name_mk_string(x_414, x_437);
x_439 = lean_mk_string("|");
lean_inc(x_407);
x_440 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_440, 0, x_407);
lean_ctor_set(x_440, 1, x_439);
lean_inc(x_14);
lean_inc(x_430);
x_441 = lean_array_push(x_430, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_442 = x_14;
} else {
 lean_dec_ref(x_14);
 x_442 = lean_box(0);
}
lean_inc(x_419);
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(1, 2, 0);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_419);
lean_ctor_set(x_443, 1, x_441);
x_444 = lean_mk_string("=>");
x_445 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_445, 0, x_407);
lean_ctor_set(x_445, 1, x_444);
x_446 = lean_unsigned_to_nat(4u);
x_447 = lean_mk_empty_array_with_capacity(x_446);
x_448 = lean_array_push(x_447, x_440);
x_449 = lean_array_push(x_448, x_443);
x_450 = lean_array_push(x_449, x_445);
x_451 = lean_array_push(x_450, x_317);
x_452 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_452, 0, x_438);
lean_ctor_set(x_452, 1, x_451);
lean_inc(x_430);
x_453 = lean_array_push(x_430, x_452);
x_454 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_454, 0, x_419);
lean_ctor_set(x_454, 1, x_453);
x_455 = lean_array_push(x_430, x_454);
x_456 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_456, 0, x_436);
lean_ctor_set(x_456, 1, x_455);
x_457 = lean_unsigned_to_nat(6u);
x_458 = lean_mk_empty_array_with_capacity(x_457);
x_459 = lean_array_push(x_458, x_417);
lean_inc(x_422);
x_460 = lean_array_push(x_459, x_422);
x_461 = lean_array_push(x_460, x_432);
x_462 = lean_array_push(x_461, x_422);
x_463 = lean_array_push(x_462, x_434);
x_464 = lean_array_push(x_463, x_456);
x_465 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_465, 0, x_416);
lean_ctor_set(x_465, 1, x_464);
x_466 = 1;
x_467 = lean_box(x_466);
lean_ctor_set(x_312, 1, x_467);
lean_ctor_set(x_312, 0, x_465);
x_468 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_468, 0, x_311);
lean_ctor_set(x_468, 1, x_408);
return x_468;
}
}
else
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; uint8_t x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; 
x_469 = lean_ctor_get(x_312, 0);
lean_inc(x_469);
lean_dec(x_312);
x_470 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_313);
lean_dec(x_5);
x_471 = lean_ctor_get(x_470, 0);
lean_inc(x_471);
x_472 = lean_ctor_get(x_470, 1);
lean_inc(x_472);
if (lean_is_exclusive(x_470)) {
 lean_ctor_release(x_470, 0);
 lean_ctor_release(x_470, 1);
 x_473 = x_470;
} else {
 lean_dec_ref(x_470);
 x_473 = lean_box(0);
}
x_474 = lean_box(0);
x_475 = lean_name_mk_string(x_474, x_300);
x_476 = lean_mk_string("Parser");
x_477 = lean_name_mk_string(x_475, x_476);
x_478 = lean_mk_string("Term");
x_479 = lean_name_mk_string(x_477, x_478);
x_480 = lean_mk_string("match");
lean_inc(x_480);
lean_inc(x_479);
x_481 = lean_name_mk_string(x_479, x_480);
lean_inc(x_471);
x_482 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_482, 0, x_471);
lean_ctor_set(x_482, 1, x_480);
x_483 = lean_mk_string("null");
x_484 = lean_name_mk_string(x_474, x_483);
x_485 = lean_unsigned_to_nat(0u);
x_486 = lean_mk_empty_array_with_capacity(x_485);
lean_inc(x_484);
x_487 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_487, 0, x_484);
lean_ctor_set(x_487, 1, x_486);
x_488 = lean_mk_string("matchDiscr");
lean_inc(x_479);
x_489 = lean_name_mk_string(x_479, x_488);
x_490 = lean_unsigned_to_nat(2u);
x_491 = lean_mk_empty_array_with_capacity(x_490);
lean_inc(x_487);
x_492 = lean_array_push(x_491, x_487);
x_493 = lean_array_push(x_492, x_303);
x_494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_494, 0, x_489);
lean_ctor_set(x_494, 1, x_493);
x_495 = lean_mk_empty_array_with_capacity(x_305);
lean_inc(x_495);
x_496 = lean_array_push(x_495, x_494);
lean_inc(x_484);
x_497 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_497, 0, x_484);
lean_ctor_set(x_497, 1, x_496);
x_498 = lean_mk_string("with");
lean_inc(x_471);
x_499 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_499, 0, x_471);
lean_ctor_set(x_499, 1, x_498);
x_500 = lean_mk_string("matchAlts");
lean_inc(x_479);
x_501 = lean_name_mk_string(x_479, x_500);
x_502 = lean_mk_string("matchAlt");
x_503 = lean_name_mk_string(x_479, x_502);
x_504 = lean_mk_string("|");
lean_inc(x_471);
x_505 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_505, 0, x_471);
lean_ctor_set(x_505, 1, x_504);
lean_inc(x_14);
lean_inc(x_495);
x_506 = lean_array_push(x_495, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_507 = x_14;
} else {
 lean_dec_ref(x_14);
 x_507 = lean_box(0);
}
lean_inc(x_484);
if (lean_is_scalar(x_507)) {
 x_508 = lean_alloc_ctor(1, 2, 0);
} else {
 x_508 = x_507;
}
lean_ctor_set(x_508, 0, x_484);
lean_ctor_set(x_508, 1, x_506);
x_509 = lean_mk_string("=>");
x_510 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_510, 0, x_471);
lean_ctor_set(x_510, 1, x_509);
x_511 = lean_unsigned_to_nat(4u);
x_512 = lean_mk_empty_array_with_capacity(x_511);
x_513 = lean_array_push(x_512, x_505);
x_514 = lean_array_push(x_513, x_508);
x_515 = lean_array_push(x_514, x_510);
x_516 = lean_array_push(x_515, x_469);
x_517 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_517, 0, x_503);
lean_ctor_set(x_517, 1, x_516);
lean_inc(x_495);
x_518 = lean_array_push(x_495, x_517);
x_519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_519, 0, x_484);
lean_ctor_set(x_519, 1, x_518);
x_520 = lean_array_push(x_495, x_519);
x_521 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_521, 0, x_501);
lean_ctor_set(x_521, 1, x_520);
x_522 = lean_unsigned_to_nat(6u);
x_523 = lean_mk_empty_array_with_capacity(x_522);
x_524 = lean_array_push(x_523, x_482);
lean_inc(x_487);
x_525 = lean_array_push(x_524, x_487);
x_526 = lean_array_push(x_525, x_497);
x_527 = lean_array_push(x_526, x_487);
x_528 = lean_array_push(x_527, x_499);
x_529 = lean_array_push(x_528, x_521);
x_530 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_530, 0, x_481);
lean_ctor_set(x_530, 1, x_529);
x_531 = 1;
x_532 = lean_box(x_531);
x_533 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_533, 0, x_530);
lean_ctor_set(x_533, 1, x_532);
lean_ctor_set(x_311, 1, x_533);
if (lean_is_scalar(x_473)) {
 x_534 = lean_alloc_ctor(0, 2, 0);
} else {
 x_534 = x_473;
}
lean_ctor_set(x_534, 0, x_311);
lean_ctor_set(x_534, 1, x_472);
return x_534;
}
}
else
{
lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; uint8_t x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; 
x_535 = lean_ctor_get(x_311, 0);
lean_inc(x_535);
lean_dec(x_311);
x_536 = lean_ctor_get(x_312, 0);
lean_inc(x_536);
if (lean_is_exclusive(x_312)) {
 lean_ctor_release(x_312, 0);
 lean_ctor_release(x_312, 1);
 x_537 = x_312;
} else {
 lean_dec_ref(x_312);
 x_537 = lean_box(0);
}
x_538 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_313);
lean_dec(x_5);
x_539 = lean_ctor_get(x_538, 0);
lean_inc(x_539);
x_540 = lean_ctor_get(x_538, 1);
lean_inc(x_540);
if (lean_is_exclusive(x_538)) {
 lean_ctor_release(x_538, 0);
 lean_ctor_release(x_538, 1);
 x_541 = x_538;
} else {
 lean_dec_ref(x_538);
 x_541 = lean_box(0);
}
x_542 = lean_box(0);
x_543 = lean_name_mk_string(x_542, x_300);
x_544 = lean_mk_string("Parser");
x_545 = lean_name_mk_string(x_543, x_544);
x_546 = lean_mk_string("Term");
x_547 = lean_name_mk_string(x_545, x_546);
x_548 = lean_mk_string("match");
lean_inc(x_548);
lean_inc(x_547);
x_549 = lean_name_mk_string(x_547, x_548);
lean_inc(x_539);
x_550 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_550, 0, x_539);
lean_ctor_set(x_550, 1, x_548);
x_551 = lean_mk_string("null");
x_552 = lean_name_mk_string(x_542, x_551);
x_553 = lean_unsigned_to_nat(0u);
x_554 = lean_mk_empty_array_with_capacity(x_553);
lean_inc(x_552);
x_555 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_555, 0, x_552);
lean_ctor_set(x_555, 1, x_554);
x_556 = lean_mk_string("matchDiscr");
lean_inc(x_547);
x_557 = lean_name_mk_string(x_547, x_556);
x_558 = lean_unsigned_to_nat(2u);
x_559 = lean_mk_empty_array_with_capacity(x_558);
lean_inc(x_555);
x_560 = lean_array_push(x_559, x_555);
x_561 = lean_array_push(x_560, x_303);
x_562 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_562, 0, x_557);
lean_ctor_set(x_562, 1, x_561);
x_563 = lean_mk_empty_array_with_capacity(x_305);
lean_inc(x_563);
x_564 = lean_array_push(x_563, x_562);
lean_inc(x_552);
x_565 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_565, 0, x_552);
lean_ctor_set(x_565, 1, x_564);
x_566 = lean_mk_string("with");
lean_inc(x_539);
x_567 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_567, 0, x_539);
lean_ctor_set(x_567, 1, x_566);
x_568 = lean_mk_string("matchAlts");
lean_inc(x_547);
x_569 = lean_name_mk_string(x_547, x_568);
x_570 = lean_mk_string("matchAlt");
x_571 = lean_name_mk_string(x_547, x_570);
x_572 = lean_mk_string("|");
lean_inc(x_539);
x_573 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_573, 0, x_539);
lean_ctor_set(x_573, 1, x_572);
lean_inc(x_14);
lean_inc(x_563);
x_574 = lean_array_push(x_563, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_575 = x_14;
} else {
 lean_dec_ref(x_14);
 x_575 = lean_box(0);
}
lean_inc(x_552);
if (lean_is_scalar(x_575)) {
 x_576 = lean_alloc_ctor(1, 2, 0);
} else {
 x_576 = x_575;
}
lean_ctor_set(x_576, 0, x_552);
lean_ctor_set(x_576, 1, x_574);
x_577 = lean_mk_string("=>");
x_578 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_578, 0, x_539);
lean_ctor_set(x_578, 1, x_577);
x_579 = lean_unsigned_to_nat(4u);
x_580 = lean_mk_empty_array_with_capacity(x_579);
x_581 = lean_array_push(x_580, x_573);
x_582 = lean_array_push(x_581, x_576);
x_583 = lean_array_push(x_582, x_578);
x_584 = lean_array_push(x_583, x_536);
x_585 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_585, 0, x_571);
lean_ctor_set(x_585, 1, x_584);
lean_inc(x_563);
x_586 = lean_array_push(x_563, x_585);
x_587 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_587, 0, x_552);
lean_ctor_set(x_587, 1, x_586);
x_588 = lean_array_push(x_563, x_587);
x_589 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_589, 0, x_569);
lean_ctor_set(x_589, 1, x_588);
x_590 = lean_unsigned_to_nat(6u);
x_591 = lean_mk_empty_array_with_capacity(x_590);
x_592 = lean_array_push(x_591, x_550);
lean_inc(x_555);
x_593 = lean_array_push(x_592, x_555);
x_594 = lean_array_push(x_593, x_565);
x_595 = lean_array_push(x_594, x_555);
x_596 = lean_array_push(x_595, x_567);
x_597 = lean_array_push(x_596, x_589);
x_598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_598, 0, x_549);
lean_ctor_set(x_598, 1, x_597);
x_599 = 1;
x_600 = lean_box(x_599);
if (lean_is_scalar(x_537)) {
 x_601 = lean_alloc_ctor(0, 2, 0);
} else {
 x_601 = x_537;
}
lean_ctor_set(x_601, 0, x_598);
lean_ctor_set(x_601, 1, x_600);
x_602 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_602, 0, x_535);
lean_ctor_set(x_602, 1, x_601);
if (lean_is_scalar(x_541)) {
 x_603 = lean_alloc_ctor(0, 2, 0);
} else {
 x_603 = x_541;
}
lean_ctor_set(x_603, 0, x_602);
lean_ctor_set(x_603, 1, x_540);
return x_603;
}
}
else
{
lean_object* x_604; uint8_t x_605; 
x_604 = lean_mk_string("Parser");
x_605 = lean_string_dec_eq(x_298, x_604);
lean_dec(x_298);
if (x_605 == 0)
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; uint8_t x_618; 
lean_dec(x_297);
lean_dec(x_296);
lean_inc(x_5);
x_606 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_607 = lean_ctor_get(x_606, 0);
lean_inc(x_607);
x_608 = lean_ctor_get(x_606, 1);
lean_inc(x_608);
lean_dec(x_606);
x_609 = lean_unsigned_to_nat(1u);
x_610 = lean_nat_add(x_3, x_609);
lean_dec(x_3);
x_611 = l_Lean_mkHole(x_14);
lean_inc(x_607);
x_612 = l_Lean_Elab_Term_mkExplicitBinder(x_607, x_611);
x_613 = lean_array_push(x_4, x_612);
lean_inc(x_5);
x_614 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_610, x_613, x_5, x_608);
x_615 = lean_ctor_get(x_614, 0);
lean_inc(x_615);
x_616 = lean_ctor_get(x_615, 1);
lean_inc(x_616);
x_617 = lean_ctor_get(x_614, 1);
lean_inc(x_617);
lean_dec(x_614);
x_618 = !lean_is_exclusive(x_615);
if (x_618 == 0)
{
lean_object* x_619; uint8_t x_620; 
x_619 = lean_ctor_get(x_615, 1);
lean_dec(x_619);
x_620 = !lean_is_exclusive(x_616);
if (x_620 == 0)
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; uint8_t x_624; 
x_621 = lean_ctor_get(x_616, 0);
x_622 = lean_ctor_get(x_616, 1);
lean_dec(x_622);
x_623 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_617);
lean_dec(x_5);
x_624 = !lean_is_exclusive(x_623);
if (x_624 == 0)
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; uint8_t x_658; 
x_625 = lean_ctor_get(x_623, 0);
x_626 = lean_box(0);
x_627 = lean_name_mk_string(x_626, x_300);
x_628 = lean_name_mk_string(x_627, x_604);
x_629 = lean_mk_string("Term");
x_630 = lean_name_mk_string(x_628, x_629);
x_631 = lean_mk_string("match");
lean_inc(x_631);
lean_inc(x_630);
x_632 = lean_name_mk_string(x_630, x_631);
lean_inc(x_625);
x_633 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_633, 0, x_625);
lean_ctor_set(x_633, 1, x_631);
x_634 = lean_mk_string("null");
x_635 = lean_name_mk_string(x_626, x_634);
x_636 = lean_unsigned_to_nat(0u);
x_637 = lean_mk_empty_array_with_capacity(x_636);
lean_inc(x_635);
x_638 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_638, 0, x_635);
lean_ctor_set(x_638, 1, x_637);
x_639 = lean_mk_string("matchDiscr");
lean_inc(x_630);
x_640 = lean_name_mk_string(x_630, x_639);
x_641 = lean_unsigned_to_nat(2u);
x_642 = lean_mk_empty_array_with_capacity(x_641);
lean_inc(x_638);
x_643 = lean_array_push(x_642, x_638);
x_644 = lean_array_push(x_643, x_607);
x_645 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_645, 0, x_640);
lean_ctor_set(x_645, 1, x_644);
x_646 = lean_mk_empty_array_with_capacity(x_609);
lean_inc(x_646);
x_647 = lean_array_push(x_646, x_645);
lean_inc(x_635);
x_648 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_648, 0, x_635);
lean_ctor_set(x_648, 1, x_647);
x_649 = lean_mk_string("with");
lean_inc(x_625);
x_650 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_650, 0, x_625);
lean_ctor_set(x_650, 1, x_649);
x_651 = lean_mk_string("matchAlts");
lean_inc(x_630);
x_652 = lean_name_mk_string(x_630, x_651);
x_653 = lean_mk_string("matchAlt");
x_654 = lean_name_mk_string(x_630, x_653);
x_655 = lean_mk_string("|");
lean_inc(x_625);
x_656 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_656, 0, x_625);
lean_ctor_set(x_656, 1, x_655);
lean_inc(x_14);
lean_inc(x_646);
x_657 = lean_array_push(x_646, x_14);
x_658 = !lean_is_exclusive(x_14);
if (x_658 == 0)
{
lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; uint8_t x_683; lean_object* x_684; 
x_659 = lean_ctor_get(x_14, 1);
lean_dec(x_659);
x_660 = lean_ctor_get(x_14, 0);
lean_dec(x_660);
lean_inc(x_635);
lean_ctor_set(x_14, 1, x_657);
lean_ctor_set(x_14, 0, x_635);
x_661 = lean_mk_string("=>");
x_662 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_662, 0, x_625);
lean_ctor_set(x_662, 1, x_661);
x_663 = lean_unsigned_to_nat(4u);
x_664 = lean_mk_empty_array_with_capacity(x_663);
x_665 = lean_array_push(x_664, x_656);
x_666 = lean_array_push(x_665, x_14);
x_667 = lean_array_push(x_666, x_662);
x_668 = lean_array_push(x_667, x_621);
x_669 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_669, 0, x_654);
lean_ctor_set(x_669, 1, x_668);
lean_inc(x_646);
x_670 = lean_array_push(x_646, x_669);
x_671 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_671, 0, x_635);
lean_ctor_set(x_671, 1, x_670);
x_672 = lean_array_push(x_646, x_671);
x_673 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_673, 0, x_652);
lean_ctor_set(x_673, 1, x_672);
x_674 = lean_unsigned_to_nat(6u);
x_675 = lean_mk_empty_array_with_capacity(x_674);
x_676 = lean_array_push(x_675, x_633);
lean_inc(x_638);
x_677 = lean_array_push(x_676, x_638);
x_678 = lean_array_push(x_677, x_648);
x_679 = lean_array_push(x_678, x_638);
x_680 = lean_array_push(x_679, x_650);
x_681 = lean_array_push(x_680, x_673);
x_682 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_682, 0, x_632);
lean_ctor_set(x_682, 1, x_681);
x_683 = 1;
x_684 = lean_box(x_683);
lean_ctor_set(x_616, 1, x_684);
lean_ctor_set(x_616, 0, x_682);
lean_ctor_set(x_623, 0, x_615);
return x_623;
}
else
{
lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; uint8_t x_708; lean_object* x_709; 
lean_dec(x_14);
lean_inc(x_635);
x_685 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_685, 0, x_635);
lean_ctor_set(x_685, 1, x_657);
x_686 = lean_mk_string("=>");
x_687 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_687, 0, x_625);
lean_ctor_set(x_687, 1, x_686);
x_688 = lean_unsigned_to_nat(4u);
x_689 = lean_mk_empty_array_with_capacity(x_688);
x_690 = lean_array_push(x_689, x_656);
x_691 = lean_array_push(x_690, x_685);
x_692 = lean_array_push(x_691, x_687);
x_693 = lean_array_push(x_692, x_621);
x_694 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_694, 0, x_654);
lean_ctor_set(x_694, 1, x_693);
lean_inc(x_646);
x_695 = lean_array_push(x_646, x_694);
x_696 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_696, 0, x_635);
lean_ctor_set(x_696, 1, x_695);
x_697 = lean_array_push(x_646, x_696);
x_698 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_698, 0, x_652);
lean_ctor_set(x_698, 1, x_697);
x_699 = lean_unsigned_to_nat(6u);
x_700 = lean_mk_empty_array_with_capacity(x_699);
x_701 = lean_array_push(x_700, x_633);
lean_inc(x_638);
x_702 = lean_array_push(x_701, x_638);
x_703 = lean_array_push(x_702, x_648);
x_704 = lean_array_push(x_703, x_638);
x_705 = lean_array_push(x_704, x_650);
x_706 = lean_array_push(x_705, x_698);
x_707 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_707, 0, x_632);
lean_ctor_set(x_707, 1, x_706);
x_708 = 1;
x_709 = lean_box(x_708);
lean_ctor_set(x_616, 1, x_709);
lean_ctor_set(x_616, 0, x_707);
lean_ctor_set(x_623, 0, x_615);
return x_623;
}
}
else
{
lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; uint8_t x_768; lean_object* x_769; lean_object* x_770; 
x_710 = lean_ctor_get(x_623, 0);
x_711 = lean_ctor_get(x_623, 1);
lean_inc(x_711);
lean_inc(x_710);
lean_dec(x_623);
x_712 = lean_box(0);
x_713 = lean_name_mk_string(x_712, x_300);
x_714 = lean_name_mk_string(x_713, x_604);
x_715 = lean_mk_string("Term");
x_716 = lean_name_mk_string(x_714, x_715);
x_717 = lean_mk_string("match");
lean_inc(x_717);
lean_inc(x_716);
x_718 = lean_name_mk_string(x_716, x_717);
lean_inc(x_710);
x_719 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_719, 0, x_710);
lean_ctor_set(x_719, 1, x_717);
x_720 = lean_mk_string("null");
x_721 = lean_name_mk_string(x_712, x_720);
x_722 = lean_unsigned_to_nat(0u);
x_723 = lean_mk_empty_array_with_capacity(x_722);
lean_inc(x_721);
x_724 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_724, 0, x_721);
lean_ctor_set(x_724, 1, x_723);
x_725 = lean_mk_string("matchDiscr");
lean_inc(x_716);
x_726 = lean_name_mk_string(x_716, x_725);
x_727 = lean_unsigned_to_nat(2u);
x_728 = lean_mk_empty_array_with_capacity(x_727);
lean_inc(x_724);
x_729 = lean_array_push(x_728, x_724);
x_730 = lean_array_push(x_729, x_607);
x_731 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_731, 0, x_726);
lean_ctor_set(x_731, 1, x_730);
x_732 = lean_mk_empty_array_with_capacity(x_609);
lean_inc(x_732);
x_733 = lean_array_push(x_732, x_731);
lean_inc(x_721);
x_734 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_734, 0, x_721);
lean_ctor_set(x_734, 1, x_733);
x_735 = lean_mk_string("with");
lean_inc(x_710);
x_736 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_736, 0, x_710);
lean_ctor_set(x_736, 1, x_735);
x_737 = lean_mk_string("matchAlts");
lean_inc(x_716);
x_738 = lean_name_mk_string(x_716, x_737);
x_739 = lean_mk_string("matchAlt");
x_740 = lean_name_mk_string(x_716, x_739);
x_741 = lean_mk_string("|");
lean_inc(x_710);
x_742 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_742, 0, x_710);
lean_ctor_set(x_742, 1, x_741);
lean_inc(x_14);
lean_inc(x_732);
x_743 = lean_array_push(x_732, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_744 = x_14;
} else {
 lean_dec_ref(x_14);
 x_744 = lean_box(0);
}
lean_inc(x_721);
if (lean_is_scalar(x_744)) {
 x_745 = lean_alloc_ctor(1, 2, 0);
} else {
 x_745 = x_744;
}
lean_ctor_set(x_745, 0, x_721);
lean_ctor_set(x_745, 1, x_743);
x_746 = lean_mk_string("=>");
x_747 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_747, 0, x_710);
lean_ctor_set(x_747, 1, x_746);
x_748 = lean_unsigned_to_nat(4u);
x_749 = lean_mk_empty_array_with_capacity(x_748);
x_750 = lean_array_push(x_749, x_742);
x_751 = lean_array_push(x_750, x_745);
x_752 = lean_array_push(x_751, x_747);
x_753 = lean_array_push(x_752, x_621);
x_754 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_754, 0, x_740);
lean_ctor_set(x_754, 1, x_753);
lean_inc(x_732);
x_755 = lean_array_push(x_732, x_754);
x_756 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_756, 0, x_721);
lean_ctor_set(x_756, 1, x_755);
x_757 = lean_array_push(x_732, x_756);
x_758 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_758, 0, x_738);
lean_ctor_set(x_758, 1, x_757);
x_759 = lean_unsigned_to_nat(6u);
x_760 = lean_mk_empty_array_with_capacity(x_759);
x_761 = lean_array_push(x_760, x_719);
lean_inc(x_724);
x_762 = lean_array_push(x_761, x_724);
x_763 = lean_array_push(x_762, x_734);
x_764 = lean_array_push(x_763, x_724);
x_765 = lean_array_push(x_764, x_736);
x_766 = lean_array_push(x_765, x_758);
x_767 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_767, 0, x_718);
lean_ctor_set(x_767, 1, x_766);
x_768 = 1;
x_769 = lean_box(x_768);
lean_ctor_set(x_616, 1, x_769);
lean_ctor_set(x_616, 0, x_767);
x_770 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_770, 0, x_615);
lean_ctor_set(x_770, 1, x_711);
return x_770;
}
}
else
{
lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; uint8_t x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; 
x_771 = lean_ctor_get(x_616, 0);
lean_inc(x_771);
lean_dec(x_616);
x_772 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_617);
lean_dec(x_5);
x_773 = lean_ctor_get(x_772, 0);
lean_inc(x_773);
x_774 = lean_ctor_get(x_772, 1);
lean_inc(x_774);
if (lean_is_exclusive(x_772)) {
 lean_ctor_release(x_772, 0);
 lean_ctor_release(x_772, 1);
 x_775 = x_772;
} else {
 lean_dec_ref(x_772);
 x_775 = lean_box(0);
}
x_776 = lean_box(0);
x_777 = lean_name_mk_string(x_776, x_300);
x_778 = lean_name_mk_string(x_777, x_604);
x_779 = lean_mk_string("Term");
x_780 = lean_name_mk_string(x_778, x_779);
x_781 = lean_mk_string("match");
lean_inc(x_781);
lean_inc(x_780);
x_782 = lean_name_mk_string(x_780, x_781);
lean_inc(x_773);
x_783 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_783, 0, x_773);
lean_ctor_set(x_783, 1, x_781);
x_784 = lean_mk_string("null");
x_785 = lean_name_mk_string(x_776, x_784);
x_786 = lean_unsigned_to_nat(0u);
x_787 = lean_mk_empty_array_with_capacity(x_786);
lean_inc(x_785);
x_788 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_788, 0, x_785);
lean_ctor_set(x_788, 1, x_787);
x_789 = lean_mk_string("matchDiscr");
lean_inc(x_780);
x_790 = lean_name_mk_string(x_780, x_789);
x_791 = lean_unsigned_to_nat(2u);
x_792 = lean_mk_empty_array_with_capacity(x_791);
lean_inc(x_788);
x_793 = lean_array_push(x_792, x_788);
x_794 = lean_array_push(x_793, x_607);
x_795 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_795, 0, x_790);
lean_ctor_set(x_795, 1, x_794);
x_796 = lean_mk_empty_array_with_capacity(x_609);
lean_inc(x_796);
x_797 = lean_array_push(x_796, x_795);
lean_inc(x_785);
x_798 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_798, 0, x_785);
lean_ctor_set(x_798, 1, x_797);
x_799 = lean_mk_string("with");
lean_inc(x_773);
x_800 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_800, 0, x_773);
lean_ctor_set(x_800, 1, x_799);
x_801 = lean_mk_string("matchAlts");
lean_inc(x_780);
x_802 = lean_name_mk_string(x_780, x_801);
x_803 = lean_mk_string("matchAlt");
x_804 = lean_name_mk_string(x_780, x_803);
x_805 = lean_mk_string("|");
lean_inc(x_773);
x_806 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_806, 0, x_773);
lean_ctor_set(x_806, 1, x_805);
lean_inc(x_14);
lean_inc(x_796);
x_807 = lean_array_push(x_796, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_808 = x_14;
} else {
 lean_dec_ref(x_14);
 x_808 = lean_box(0);
}
lean_inc(x_785);
if (lean_is_scalar(x_808)) {
 x_809 = lean_alloc_ctor(1, 2, 0);
} else {
 x_809 = x_808;
}
lean_ctor_set(x_809, 0, x_785);
lean_ctor_set(x_809, 1, x_807);
x_810 = lean_mk_string("=>");
x_811 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_811, 0, x_773);
lean_ctor_set(x_811, 1, x_810);
x_812 = lean_unsigned_to_nat(4u);
x_813 = lean_mk_empty_array_with_capacity(x_812);
x_814 = lean_array_push(x_813, x_806);
x_815 = lean_array_push(x_814, x_809);
x_816 = lean_array_push(x_815, x_811);
x_817 = lean_array_push(x_816, x_771);
x_818 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_818, 0, x_804);
lean_ctor_set(x_818, 1, x_817);
lean_inc(x_796);
x_819 = lean_array_push(x_796, x_818);
x_820 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_820, 0, x_785);
lean_ctor_set(x_820, 1, x_819);
x_821 = lean_array_push(x_796, x_820);
x_822 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_822, 0, x_802);
lean_ctor_set(x_822, 1, x_821);
x_823 = lean_unsigned_to_nat(6u);
x_824 = lean_mk_empty_array_with_capacity(x_823);
x_825 = lean_array_push(x_824, x_783);
lean_inc(x_788);
x_826 = lean_array_push(x_825, x_788);
x_827 = lean_array_push(x_826, x_798);
x_828 = lean_array_push(x_827, x_788);
x_829 = lean_array_push(x_828, x_800);
x_830 = lean_array_push(x_829, x_822);
x_831 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_831, 0, x_782);
lean_ctor_set(x_831, 1, x_830);
x_832 = 1;
x_833 = lean_box(x_832);
x_834 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_834, 0, x_831);
lean_ctor_set(x_834, 1, x_833);
lean_ctor_set(x_615, 1, x_834);
if (lean_is_scalar(x_775)) {
 x_835 = lean_alloc_ctor(0, 2, 0);
} else {
 x_835 = x_775;
}
lean_ctor_set(x_835, 0, x_615);
lean_ctor_set(x_835, 1, x_774);
return x_835;
}
}
else
{
lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; uint8_t x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; 
x_836 = lean_ctor_get(x_615, 0);
lean_inc(x_836);
lean_dec(x_615);
x_837 = lean_ctor_get(x_616, 0);
lean_inc(x_837);
if (lean_is_exclusive(x_616)) {
 lean_ctor_release(x_616, 0);
 lean_ctor_release(x_616, 1);
 x_838 = x_616;
} else {
 lean_dec_ref(x_616);
 x_838 = lean_box(0);
}
x_839 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_617);
lean_dec(x_5);
x_840 = lean_ctor_get(x_839, 0);
lean_inc(x_840);
x_841 = lean_ctor_get(x_839, 1);
lean_inc(x_841);
if (lean_is_exclusive(x_839)) {
 lean_ctor_release(x_839, 0);
 lean_ctor_release(x_839, 1);
 x_842 = x_839;
} else {
 lean_dec_ref(x_839);
 x_842 = lean_box(0);
}
x_843 = lean_box(0);
x_844 = lean_name_mk_string(x_843, x_300);
x_845 = lean_name_mk_string(x_844, x_604);
x_846 = lean_mk_string("Term");
x_847 = lean_name_mk_string(x_845, x_846);
x_848 = lean_mk_string("match");
lean_inc(x_848);
lean_inc(x_847);
x_849 = lean_name_mk_string(x_847, x_848);
lean_inc(x_840);
x_850 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_850, 0, x_840);
lean_ctor_set(x_850, 1, x_848);
x_851 = lean_mk_string("null");
x_852 = lean_name_mk_string(x_843, x_851);
x_853 = lean_unsigned_to_nat(0u);
x_854 = lean_mk_empty_array_with_capacity(x_853);
lean_inc(x_852);
x_855 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_855, 0, x_852);
lean_ctor_set(x_855, 1, x_854);
x_856 = lean_mk_string("matchDiscr");
lean_inc(x_847);
x_857 = lean_name_mk_string(x_847, x_856);
x_858 = lean_unsigned_to_nat(2u);
x_859 = lean_mk_empty_array_with_capacity(x_858);
lean_inc(x_855);
x_860 = lean_array_push(x_859, x_855);
x_861 = lean_array_push(x_860, x_607);
x_862 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_862, 0, x_857);
lean_ctor_set(x_862, 1, x_861);
x_863 = lean_mk_empty_array_with_capacity(x_609);
lean_inc(x_863);
x_864 = lean_array_push(x_863, x_862);
lean_inc(x_852);
x_865 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_865, 0, x_852);
lean_ctor_set(x_865, 1, x_864);
x_866 = lean_mk_string("with");
lean_inc(x_840);
x_867 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_867, 0, x_840);
lean_ctor_set(x_867, 1, x_866);
x_868 = lean_mk_string("matchAlts");
lean_inc(x_847);
x_869 = lean_name_mk_string(x_847, x_868);
x_870 = lean_mk_string("matchAlt");
x_871 = lean_name_mk_string(x_847, x_870);
x_872 = lean_mk_string("|");
lean_inc(x_840);
x_873 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_873, 0, x_840);
lean_ctor_set(x_873, 1, x_872);
lean_inc(x_14);
lean_inc(x_863);
x_874 = lean_array_push(x_863, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_875 = x_14;
} else {
 lean_dec_ref(x_14);
 x_875 = lean_box(0);
}
lean_inc(x_852);
if (lean_is_scalar(x_875)) {
 x_876 = lean_alloc_ctor(1, 2, 0);
} else {
 x_876 = x_875;
}
lean_ctor_set(x_876, 0, x_852);
lean_ctor_set(x_876, 1, x_874);
x_877 = lean_mk_string("=>");
x_878 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_878, 0, x_840);
lean_ctor_set(x_878, 1, x_877);
x_879 = lean_unsigned_to_nat(4u);
x_880 = lean_mk_empty_array_with_capacity(x_879);
x_881 = lean_array_push(x_880, x_873);
x_882 = lean_array_push(x_881, x_876);
x_883 = lean_array_push(x_882, x_878);
x_884 = lean_array_push(x_883, x_837);
x_885 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_885, 0, x_871);
lean_ctor_set(x_885, 1, x_884);
lean_inc(x_863);
x_886 = lean_array_push(x_863, x_885);
x_887 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_887, 0, x_852);
lean_ctor_set(x_887, 1, x_886);
x_888 = lean_array_push(x_863, x_887);
x_889 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_889, 0, x_869);
lean_ctor_set(x_889, 1, x_888);
x_890 = lean_unsigned_to_nat(6u);
x_891 = lean_mk_empty_array_with_capacity(x_890);
x_892 = lean_array_push(x_891, x_850);
lean_inc(x_855);
x_893 = lean_array_push(x_892, x_855);
x_894 = lean_array_push(x_893, x_865);
x_895 = lean_array_push(x_894, x_855);
x_896 = lean_array_push(x_895, x_867);
x_897 = lean_array_push(x_896, x_889);
x_898 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_898, 0, x_849);
lean_ctor_set(x_898, 1, x_897);
x_899 = 1;
x_900 = lean_box(x_899);
if (lean_is_scalar(x_838)) {
 x_901 = lean_alloc_ctor(0, 2, 0);
} else {
 x_901 = x_838;
}
lean_ctor_set(x_901, 0, x_898);
lean_ctor_set(x_901, 1, x_900);
x_902 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_902, 0, x_836);
lean_ctor_set(x_902, 1, x_901);
if (lean_is_scalar(x_842)) {
 x_903 = lean_alloc_ctor(0, 2, 0);
} else {
 x_903 = x_842;
}
lean_ctor_set(x_903, 0, x_902);
lean_ctor_set(x_903, 1, x_841);
return x_903;
}
}
else
{
lean_object* x_904; uint8_t x_905; 
x_904 = lean_mk_string("Term");
x_905 = lean_string_dec_eq(x_297, x_904);
lean_dec(x_297);
if (x_905 == 0)
{
lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; uint8_t x_918; 
lean_dec(x_296);
lean_inc(x_5);
x_906 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_907 = lean_ctor_get(x_906, 0);
lean_inc(x_907);
x_908 = lean_ctor_get(x_906, 1);
lean_inc(x_908);
lean_dec(x_906);
x_909 = lean_unsigned_to_nat(1u);
x_910 = lean_nat_add(x_3, x_909);
lean_dec(x_3);
x_911 = l_Lean_mkHole(x_14);
lean_inc(x_907);
x_912 = l_Lean_Elab_Term_mkExplicitBinder(x_907, x_911);
x_913 = lean_array_push(x_4, x_912);
lean_inc(x_5);
x_914 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_910, x_913, x_5, x_908);
x_915 = lean_ctor_get(x_914, 0);
lean_inc(x_915);
x_916 = lean_ctor_get(x_915, 1);
lean_inc(x_916);
x_917 = lean_ctor_get(x_914, 1);
lean_inc(x_917);
lean_dec(x_914);
x_918 = !lean_is_exclusive(x_915);
if (x_918 == 0)
{
lean_object* x_919; uint8_t x_920; 
x_919 = lean_ctor_get(x_915, 1);
lean_dec(x_919);
x_920 = !lean_is_exclusive(x_916);
if (x_920 == 0)
{
lean_object* x_921; lean_object* x_922; lean_object* x_923; uint8_t x_924; 
x_921 = lean_ctor_get(x_916, 0);
x_922 = lean_ctor_get(x_916, 1);
lean_dec(x_922);
x_923 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_917);
lean_dec(x_5);
x_924 = !lean_is_exclusive(x_923);
if (x_924 == 0)
{
lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; uint8_t x_957; 
x_925 = lean_ctor_get(x_923, 0);
x_926 = lean_box(0);
x_927 = lean_name_mk_string(x_926, x_300);
x_928 = lean_name_mk_string(x_927, x_604);
x_929 = lean_name_mk_string(x_928, x_904);
x_930 = lean_mk_string("match");
lean_inc(x_930);
lean_inc(x_929);
x_931 = lean_name_mk_string(x_929, x_930);
lean_inc(x_925);
x_932 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_932, 0, x_925);
lean_ctor_set(x_932, 1, x_930);
x_933 = lean_mk_string("null");
x_934 = lean_name_mk_string(x_926, x_933);
x_935 = lean_unsigned_to_nat(0u);
x_936 = lean_mk_empty_array_with_capacity(x_935);
lean_inc(x_934);
x_937 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_937, 0, x_934);
lean_ctor_set(x_937, 1, x_936);
x_938 = lean_mk_string("matchDiscr");
lean_inc(x_929);
x_939 = lean_name_mk_string(x_929, x_938);
x_940 = lean_unsigned_to_nat(2u);
x_941 = lean_mk_empty_array_with_capacity(x_940);
lean_inc(x_937);
x_942 = lean_array_push(x_941, x_937);
x_943 = lean_array_push(x_942, x_907);
x_944 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_944, 0, x_939);
lean_ctor_set(x_944, 1, x_943);
x_945 = lean_mk_empty_array_with_capacity(x_909);
lean_inc(x_945);
x_946 = lean_array_push(x_945, x_944);
lean_inc(x_934);
x_947 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_947, 0, x_934);
lean_ctor_set(x_947, 1, x_946);
x_948 = lean_mk_string("with");
lean_inc(x_925);
x_949 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_949, 0, x_925);
lean_ctor_set(x_949, 1, x_948);
x_950 = lean_mk_string("matchAlts");
lean_inc(x_929);
x_951 = lean_name_mk_string(x_929, x_950);
x_952 = lean_mk_string("matchAlt");
x_953 = lean_name_mk_string(x_929, x_952);
x_954 = lean_mk_string("|");
lean_inc(x_925);
x_955 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_955, 0, x_925);
lean_ctor_set(x_955, 1, x_954);
lean_inc(x_14);
lean_inc(x_945);
x_956 = lean_array_push(x_945, x_14);
x_957 = !lean_is_exclusive(x_14);
if (x_957 == 0)
{
lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; uint8_t x_982; lean_object* x_983; 
x_958 = lean_ctor_get(x_14, 1);
lean_dec(x_958);
x_959 = lean_ctor_get(x_14, 0);
lean_dec(x_959);
lean_inc(x_934);
lean_ctor_set(x_14, 1, x_956);
lean_ctor_set(x_14, 0, x_934);
x_960 = lean_mk_string("=>");
x_961 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_961, 0, x_925);
lean_ctor_set(x_961, 1, x_960);
x_962 = lean_unsigned_to_nat(4u);
x_963 = lean_mk_empty_array_with_capacity(x_962);
x_964 = lean_array_push(x_963, x_955);
x_965 = lean_array_push(x_964, x_14);
x_966 = lean_array_push(x_965, x_961);
x_967 = lean_array_push(x_966, x_921);
x_968 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_968, 0, x_953);
lean_ctor_set(x_968, 1, x_967);
lean_inc(x_945);
x_969 = lean_array_push(x_945, x_968);
x_970 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_970, 0, x_934);
lean_ctor_set(x_970, 1, x_969);
x_971 = lean_array_push(x_945, x_970);
x_972 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_972, 0, x_951);
lean_ctor_set(x_972, 1, x_971);
x_973 = lean_unsigned_to_nat(6u);
x_974 = lean_mk_empty_array_with_capacity(x_973);
x_975 = lean_array_push(x_974, x_932);
lean_inc(x_937);
x_976 = lean_array_push(x_975, x_937);
x_977 = lean_array_push(x_976, x_947);
x_978 = lean_array_push(x_977, x_937);
x_979 = lean_array_push(x_978, x_949);
x_980 = lean_array_push(x_979, x_972);
x_981 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_981, 0, x_931);
lean_ctor_set(x_981, 1, x_980);
x_982 = 1;
x_983 = lean_box(x_982);
lean_ctor_set(x_916, 1, x_983);
lean_ctor_set(x_916, 0, x_981);
lean_ctor_set(x_923, 0, x_915);
return x_923;
}
else
{
lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; uint8_t x_1007; lean_object* x_1008; 
lean_dec(x_14);
lean_inc(x_934);
x_984 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_984, 0, x_934);
lean_ctor_set(x_984, 1, x_956);
x_985 = lean_mk_string("=>");
x_986 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_986, 0, x_925);
lean_ctor_set(x_986, 1, x_985);
x_987 = lean_unsigned_to_nat(4u);
x_988 = lean_mk_empty_array_with_capacity(x_987);
x_989 = lean_array_push(x_988, x_955);
x_990 = lean_array_push(x_989, x_984);
x_991 = lean_array_push(x_990, x_986);
x_992 = lean_array_push(x_991, x_921);
x_993 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_993, 0, x_953);
lean_ctor_set(x_993, 1, x_992);
lean_inc(x_945);
x_994 = lean_array_push(x_945, x_993);
x_995 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_995, 0, x_934);
lean_ctor_set(x_995, 1, x_994);
x_996 = lean_array_push(x_945, x_995);
x_997 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_997, 0, x_951);
lean_ctor_set(x_997, 1, x_996);
x_998 = lean_unsigned_to_nat(6u);
x_999 = lean_mk_empty_array_with_capacity(x_998);
x_1000 = lean_array_push(x_999, x_932);
lean_inc(x_937);
x_1001 = lean_array_push(x_1000, x_937);
x_1002 = lean_array_push(x_1001, x_947);
x_1003 = lean_array_push(x_1002, x_937);
x_1004 = lean_array_push(x_1003, x_949);
x_1005 = lean_array_push(x_1004, x_997);
x_1006 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1006, 0, x_931);
lean_ctor_set(x_1006, 1, x_1005);
x_1007 = 1;
x_1008 = lean_box(x_1007);
lean_ctor_set(x_916, 1, x_1008);
lean_ctor_set(x_916, 0, x_1006);
lean_ctor_set(x_923, 0, x_915);
return x_923;
}
}
else
{
lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; uint8_t x_1066; lean_object* x_1067; lean_object* x_1068; 
x_1009 = lean_ctor_get(x_923, 0);
x_1010 = lean_ctor_get(x_923, 1);
lean_inc(x_1010);
lean_inc(x_1009);
lean_dec(x_923);
x_1011 = lean_box(0);
x_1012 = lean_name_mk_string(x_1011, x_300);
x_1013 = lean_name_mk_string(x_1012, x_604);
x_1014 = lean_name_mk_string(x_1013, x_904);
x_1015 = lean_mk_string("match");
lean_inc(x_1015);
lean_inc(x_1014);
x_1016 = lean_name_mk_string(x_1014, x_1015);
lean_inc(x_1009);
x_1017 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1017, 0, x_1009);
lean_ctor_set(x_1017, 1, x_1015);
x_1018 = lean_mk_string("null");
x_1019 = lean_name_mk_string(x_1011, x_1018);
x_1020 = lean_unsigned_to_nat(0u);
x_1021 = lean_mk_empty_array_with_capacity(x_1020);
lean_inc(x_1019);
x_1022 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1022, 0, x_1019);
lean_ctor_set(x_1022, 1, x_1021);
x_1023 = lean_mk_string("matchDiscr");
lean_inc(x_1014);
x_1024 = lean_name_mk_string(x_1014, x_1023);
x_1025 = lean_unsigned_to_nat(2u);
x_1026 = lean_mk_empty_array_with_capacity(x_1025);
lean_inc(x_1022);
x_1027 = lean_array_push(x_1026, x_1022);
x_1028 = lean_array_push(x_1027, x_907);
x_1029 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1029, 0, x_1024);
lean_ctor_set(x_1029, 1, x_1028);
x_1030 = lean_mk_empty_array_with_capacity(x_909);
lean_inc(x_1030);
x_1031 = lean_array_push(x_1030, x_1029);
lean_inc(x_1019);
x_1032 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1032, 0, x_1019);
lean_ctor_set(x_1032, 1, x_1031);
x_1033 = lean_mk_string("with");
lean_inc(x_1009);
x_1034 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1034, 0, x_1009);
lean_ctor_set(x_1034, 1, x_1033);
x_1035 = lean_mk_string("matchAlts");
lean_inc(x_1014);
x_1036 = lean_name_mk_string(x_1014, x_1035);
x_1037 = lean_mk_string("matchAlt");
x_1038 = lean_name_mk_string(x_1014, x_1037);
x_1039 = lean_mk_string("|");
lean_inc(x_1009);
x_1040 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1040, 0, x_1009);
lean_ctor_set(x_1040, 1, x_1039);
lean_inc(x_14);
lean_inc(x_1030);
x_1041 = lean_array_push(x_1030, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1042 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1042 = lean_box(0);
}
lean_inc(x_1019);
if (lean_is_scalar(x_1042)) {
 x_1043 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1043 = x_1042;
}
lean_ctor_set(x_1043, 0, x_1019);
lean_ctor_set(x_1043, 1, x_1041);
x_1044 = lean_mk_string("=>");
x_1045 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1045, 0, x_1009);
lean_ctor_set(x_1045, 1, x_1044);
x_1046 = lean_unsigned_to_nat(4u);
x_1047 = lean_mk_empty_array_with_capacity(x_1046);
x_1048 = lean_array_push(x_1047, x_1040);
x_1049 = lean_array_push(x_1048, x_1043);
x_1050 = lean_array_push(x_1049, x_1045);
x_1051 = lean_array_push(x_1050, x_921);
x_1052 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1052, 0, x_1038);
lean_ctor_set(x_1052, 1, x_1051);
lean_inc(x_1030);
x_1053 = lean_array_push(x_1030, x_1052);
x_1054 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1054, 0, x_1019);
lean_ctor_set(x_1054, 1, x_1053);
x_1055 = lean_array_push(x_1030, x_1054);
x_1056 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1056, 0, x_1036);
lean_ctor_set(x_1056, 1, x_1055);
x_1057 = lean_unsigned_to_nat(6u);
x_1058 = lean_mk_empty_array_with_capacity(x_1057);
x_1059 = lean_array_push(x_1058, x_1017);
lean_inc(x_1022);
x_1060 = lean_array_push(x_1059, x_1022);
x_1061 = lean_array_push(x_1060, x_1032);
x_1062 = lean_array_push(x_1061, x_1022);
x_1063 = lean_array_push(x_1062, x_1034);
x_1064 = lean_array_push(x_1063, x_1056);
x_1065 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1065, 0, x_1016);
lean_ctor_set(x_1065, 1, x_1064);
x_1066 = 1;
x_1067 = lean_box(x_1066);
lean_ctor_set(x_916, 1, x_1067);
lean_ctor_set(x_916, 0, x_1065);
x_1068 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1068, 0, x_915);
lean_ctor_set(x_1068, 1, x_1010);
return x_1068;
}
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; uint8_t x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; 
x_1069 = lean_ctor_get(x_916, 0);
lean_inc(x_1069);
lean_dec(x_916);
x_1070 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_917);
lean_dec(x_5);
x_1071 = lean_ctor_get(x_1070, 0);
lean_inc(x_1071);
x_1072 = lean_ctor_get(x_1070, 1);
lean_inc(x_1072);
if (lean_is_exclusive(x_1070)) {
 lean_ctor_release(x_1070, 0);
 lean_ctor_release(x_1070, 1);
 x_1073 = x_1070;
} else {
 lean_dec_ref(x_1070);
 x_1073 = lean_box(0);
}
x_1074 = lean_box(0);
x_1075 = lean_name_mk_string(x_1074, x_300);
x_1076 = lean_name_mk_string(x_1075, x_604);
x_1077 = lean_name_mk_string(x_1076, x_904);
x_1078 = lean_mk_string("match");
lean_inc(x_1078);
lean_inc(x_1077);
x_1079 = lean_name_mk_string(x_1077, x_1078);
lean_inc(x_1071);
x_1080 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1080, 0, x_1071);
lean_ctor_set(x_1080, 1, x_1078);
x_1081 = lean_mk_string("null");
x_1082 = lean_name_mk_string(x_1074, x_1081);
x_1083 = lean_unsigned_to_nat(0u);
x_1084 = lean_mk_empty_array_with_capacity(x_1083);
lean_inc(x_1082);
x_1085 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1085, 0, x_1082);
lean_ctor_set(x_1085, 1, x_1084);
x_1086 = lean_mk_string("matchDiscr");
lean_inc(x_1077);
x_1087 = lean_name_mk_string(x_1077, x_1086);
x_1088 = lean_unsigned_to_nat(2u);
x_1089 = lean_mk_empty_array_with_capacity(x_1088);
lean_inc(x_1085);
x_1090 = lean_array_push(x_1089, x_1085);
x_1091 = lean_array_push(x_1090, x_907);
x_1092 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1092, 0, x_1087);
lean_ctor_set(x_1092, 1, x_1091);
x_1093 = lean_mk_empty_array_with_capacity(x_909);
lean_inc(x_1093);
x_1094 = lean_array_push(x_1093, x_1092);
lean_inc(x_1082);
x_1095 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1095, 0, x_1082);
lean_ctor_set(x_1095, 1, x_1094);
x_1096 = lean_mk_string("with");
lean_inc(x_1071);
x_1097 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1097, 0, x_1071);
lean_ctor_set(x_1097, 1, x_1096);
x_1098 = lean_mk_string("matchAlts");
lean_inc(x_1077);
x_1099 = lean_name_mk_string(x_1077, x_1098);
x_1100 = lean_mk_string("matchAlt");
x_1101 = lean_name_mk_string(x_1077, x_1100);
x_1102 = lean_mk_string("|");
lean_inc(x_1071);
x_1103 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1103, 0, x_1071);
lean_ctor_set(x_1103, 1, x_1102);
lean_inc(x_14);
lean_inc(x_1093);
x_1104 = lean_array_push(x_1093, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1105 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1105 = lean_box(0);
}
lean_inc(x_1082);
if (lean_is_scalar(x_1105)) {
 x_1106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1106 = x_1105;
}
lean_ctor_set(x_1106, 0, x_1082);
lean_ctor_set(x_1106, 1, x_1104);
x_1107 = lean_mk_string("=>");
x_1108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1108, 0, x_1071);
lean_ctor_set(x_1108, 1, x_1107);
x_1109 = lean_unsigned_to_nat(4u);
x_1110 = lean_mk_empty_array_with_capacity(x_1109);
x_1111 = lean_array_push(x_1110, x_1103);
x_1112 = lean_array_push(x_1111, x_1106);
x_1113 = lean_array_push(x_1112, x_1108);
x_1114 = lean_array_push(x_1113, x_1069);
x_1115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1115, 0, x_1101);
lean_ctor_set(x_1115, 1, x_1114);
lean_inc(x_1093);
x_1116 = lean_array_push(x_1093, x_1115);
x_1117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1117, 0, x_1082);
lean_ctor_set(x_1117, 1, x_1116);
x_1118 = lean_array_push(x_1093, x_1117);
x_1119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1119, 0, x_1099);
lean_ctor_set(x_1119, 1, x_1118);
x_1120 = lean_unsigned_to_nat(6u);
x_1121 = lean_mk_empty_array_with_capacity(x_1120);
x_1122 = lean_array_push(x_1121, x_1080);
lean_inc(x_1085);
x_1123 = lean_array_push(x_1122, x_1085);
x_1124 = lean_array_push(x_1123, x_1095);
x_1125 = lean_array_push(x_1124, x_1085);
x_1126 = lean_array_push(x_1125, x_1097);
x_1127 = lean_array_push(x_1126, x_1119);
x_1128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1128, 0, x_1079);
lean_ctor_set(x_1128, 1, x_1127);
x_1129 = 1;
x_1130 = lean_box(x_1129);
x_1131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1131, 0, x_1128);
lean_ctor_set(x_1131, 1, x_1130);
lean_ctor_set(x_915, 1, x_1131);
if (lean_is_scalar(x_1073)) {
 x_1132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1132 = x_1073;
}
lean_ctor_set(x_1132, 0, x_915);
lean_ctor_set(x_1132, 1, x_1072);
return x_1132;
}
}
else
{
lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; uint8_t x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; 
x_1133 = lean_ctor_get(x_915, 0);
lean_inc(x_1133);
lean_dec(x_915);
x_1134 = lean_ctor_get(x_916, 0);
lean_inc(x_1134);
if (lean_is_exclusive(x_916)) {
 lean_ctor_release(x_916, 0);
 lean_ctor_release(x_916, 1);
 x_1135 = x_916;
} else {
 lean_dec_ref(x_916);
 x_1135 = lean_box(0);
}
x_1136 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_917);
lean_dec(x_5);
x_1137 = lean_ctor_get(x_1136, 0);
lean_inc(x_1137);
x_1138 = lean_ctor_get(x_1136, 1);
lean_inc(x_1138);
if (lean_is_exclusive(x_1136)) {
 lean_ctor_release(x_1136, 0);
 lean_ctor_release(x_1136, 1);
 x_1139 = x_1136;
} else {
 lean_dec_ref(x_1136);
 x_1139 = lean_box(0);
}
x_1140 = lean_box(0);
x_1141 = lean_name_mk_string(x_1140, x_300);
x_1142 = lean_name_mk_string(x_1141, x_604);
x_1143 = lean_name_mk_string(x_1142, x_904);
x_1144 = lean_mk_string("match");
lean_inc(x_1144);
lean_inc(x_1143);
x_1145 = lean_name_mk_string(x_1143, x_1144);
lean_inc(x_1137);
x_1146 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1146, 0, x_1137);
lean_ctor_set(x_1146, 1, x_1144);
x_1147 = lean_mk_string("null");
x_1148 = lean_name_mk_string(x_1140, x_1147);
x_1149 = lean_unsigned_to_nat(0u);
x_1150 = lean_mk_empty_array_with_capacity(x_1149);
lean_inc(x_1148);
x_1151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1151, 0, x_1148);
lean_ctor_set(x_1151, 1, x_1150);
x_1152 = lean_mk_string("matchDiscr");
lean_inc(x_1143);
x_1153 = lean_name_mk_string(x_1143, x_1152);
x_1154 = lean_unsigned_to_nat(2u);
x_1155 = lean_mk_empty_array_with_capacity(x_1154);
lean_inc(x_1151);
x_1156 = lean_array_push(x_1155, x_1151);
x_1157 = lean_array_push(x_1156, x_907);
x_1158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1158, 0, x_1153);
lean_ctor_set(x_1158, 1, x_1157);
x_1159 = lean_mk_empty_array_with_capacity(x_909);
lean_inc(x_1159);
x_1160 = lean_array_push(x_1159, x_1158);
lean_inc(x_1148);
x_1161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1161, 0, x_1148);
lean_ctor_set(x_1161, 1, x_1160);
x_1162 = lean_mk_string("with");
lean_inc(x_1137);
x_1163 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1163, 0, x_1137);
lean_ctor_set(x_1163, 1, x_1162);
x_1164 = lean_mk_string("matchAlts");
lean_inc(x_1143);
x_1165 = lean_name_mk_string(x_1143, x_1164);
x_1166 = lean_mk_string("matchAlt");
x_1167 = lean_name_mk_string(x_1143, x_1166);
x_1168 = lean_mk_string("|");
lean_inc(x_1137);
x_1169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1169, 0, x_1137);
lean_ctor_set(x_1169, 1, x_1168);
lean_inc(x_14);
lean_inc(x_1159);
x_1170 = lean_array_push(x_1159, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1171 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1171 = lean_box(0);
}
lean_inc(x_1148);
if (lean_is_scalar(x_1171)) {
 x_1172 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1172 = x_1171;
}
lean_ctor_set(x_1172, 0, x_1148);
lean_ctor_set(x_1172, 1, x_1170);
x_1173 = lean_mk_string("=>");
x_1174 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1174, 0, x_1137);
lean_ctor_set(x_1174, 1, x_1173);
x_1175 = lean_unsigned_to_nat(4u);
x_1176 = lean_mk_empty_array_with_capacity(x_1175);
x_1177 = lean_array_push(x_1176, x_1169);
x_1178 = lean_array_push(x_1177, x_1172);
x_1179 = lean_array_push(x_1178, x_1174);
x_1180 = lean_array_push(x_1179, x_1134);
x_1181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1181, 0, x_1167);
lean_ctor_set(x_1181, 1, x_1180);
lean_inc(x_1159);
x_1182 = lean_array_push(x_1159, x_1181);
x_1183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1183, 0, x_1148);
lean_ctor_set(x_1183, 1, x_1182);
x_1184 = lean_array_push(x_1159, x_1183);
x_1185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1185, 0, x_1165);
lean_ctor_set(x_1185, 1, x_1184);
x_1186 = lean_unsigned_to_nat(6u);
x_1187 = lean_mk_empty_array_with_capacity(x_1186);
x_1188 = lean_array_push(x_1187, x_1146);
lean_inc(x_1151);
x_1189 = lean_array_push(x_1188, x_1151);
x_1190 = lean_array_push(x_1189, x_1161);
x_1191 = lean_array_push(x_1190, x_1151);
x_1192 = lean_array_push(x_1191, x_1163);
x_1193 = lean_array_push(x_1192, x_1185);
x_1194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1194, 0, x_1145);
lean_ctor_set(x_1194, 1, x_1193);
x_1195 = 1;
x_1196 = lean_box(x_1195);
if (lean_is_scalar(x_1135)) {
 x_1197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1197 = x_1135;
}
lean_ctor_set(x_1197, 0, x_1194);
lean_ctor_set(x_1197, 1, x_1196);
x_1198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1198, 0, x_1133);
lean_ctor_set(x_1198, 1, x_1197);
if (lean_is_scalar(x_1139)) {
 x_1199 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1199 = x_1139;
}
lean_ctor_set(x_1199, 0, x_1198);
lean_ctor_set(x_1199, 1, x_1138);
return x_1199;
}
}
else
{
lean_object* x_1200; uint8_t x_1201; 
x_1200 = lean_mk_string("implicitBinder");
x_1201 = lean_string_dec_eq(x_296, x_1200);
lean_dec(x_1200);
if (x_1201 == 0)
{
lean_object* x_1202; uint8_t x_1203; 
x_1202 = lean_mk_string("instBinder");
x_1203 = lean_string_dec_eq(x_296, x_1202);
lean_dec(x_1202);
if (x_1203 == 0)
{
lean_object* x_1204; uint8_t x_1205; 
x_1204 = lean_mk_string("explicitBinder");
x_1205 = lean_string_dec_eq(x_296, x_1204);
lean_dec(x_1204);
if (x_1205 == 0)
{
lean_object* x_1206; uint8_t x_1207; 
x_1206 = lean_mk_string("simpleBinder");
x_1207 = lean_string_dec_eq(x_296, x_1206);
lean_dec(x_1206);
if (x_1207 == 0)
{
lean_object* x_1208; uint8_t x_1209; 
x_1208 = lean_mk_string("hole");
x_1209 = lean_string_dec_eq(x_296, x_1208);
lean_dec(x_1208);
if (x_1209 == 0)
{
lean_object* x_1210; uint8_t x_1211; 
x_1210 = lean_mk_string("paren");
x_1211 = lean_string_dec_eq(x_296, x_1210);
lean_dec(x_1210);
lean_dec(x_296);
if (x_1211 == 0)
{
lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; uint8_t x_1224; 
lean_inc(x_5);
x_1212 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_1213 = lean_ctor_get(x_1212, 0);
lean_inc(x_1213);
x_1214 = lean_ctor_get(x_1212, 1);
lean_inc(x_1214);
lean_dec(x_1212);
x_1215 = lean_unsigned_to_nat(1u);
x_1216 = lean_nat_add(x_3, x_1215);
lean_dec(x_3);
x_1217 = l_Lean_mkHole(x_14);
lean_inc(x_1213);
x_1218 = l_Lean_Elab_Term_mkExplicitBinder(x_1213, x_1217);
x_1219 = lean_array_push(x_4, x_1218);
lean_inc(x_5);
x_1220 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1216, x_1219, x_5, x_1214);
x_1221 = lean_ctor_get(x_1220, 0);
lean_inc(x_1221);
x_1222 = lean_ctor_get(x_1221, 1);
lean_inc(x_1222);
x_1223 = lean_ctor_get(x_1220, 1);
lean_inc(x_1223);
lean_dec(x_1220);
x_1224 = !lean_is_exclusive(x_1221);
if (x_1224 == 0)
{
lean_object* x_1225; uint8_t x_1226; 
x_1225 = lean_ctor_get(x_1221, 1);
lean_dec(x_1225);
x_1226 = !lean_is_exclusive(x_1222);
if (x_1226 == 0)
{
lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; uint8_t x_1230; 
x_1227 = lean_ctor_get(x_1222, 0);
x_1228 = lean_ctor_get(x_1222, 1);
lean_dec(x_1228);
x_1229 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1223);
lean_dec(x_5);
x_1230 = !lean_is_exclusive(x_1229);
if (x_1230 == 0)
{
lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; uint8_t x_1263; 
x_1231 = lean_ctor_get(x_1229, 0);
x_1232 = lean_box(0);
x_1233 = lean_name_mk_string(x_1232, x_300);
x_1234 = lean_name_mk_string(x_1233, x_604);
x_1235 = lean_name_mk_string(x_1234, x_904);
x_1236 = lean_mk_string("match");
lean_inc(x_1236);
lean_inc(x_1235);
x_1237 = lean_name_mk_string(x_1235, x_1236);
lean_inc(x_1231);
x_1238 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1238, 0, x_1231);
lean_ctor_set(x_1238, 1, x_1236);
x_1239 = lean_mk_string("null");
x_1240 = lean_name_mk_string(x_1232, x_1239);
x_1241 = lean_unsigned_to_nat(0u);
x_1242 = lean_mk_empty_array_with_capacity(x_1241);
lean_inc(x_1240);
x_1243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1243, 0, x_1240);
lean_ctor_set(x_1243, 1, x_1242);
x_1244 = lean_mk_string("matchDiscr");
lean_inc(x_1235);
x_1245 = lean_name_mk_string(x_1235, x_1244);
x_1246 = lean_unsigned_to_nat(2u);
x_1247 = lean_mk_empty_array_with_capacity(x_1246);
lean_inc(x_1243);
x_1248 = lean_array_push(x_1247, x_1243);
x_1249 = lean_array_push(x_1248, x_1213);
x_1250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1250, 0, x_1245);
lean_ctor_set(x_1250, 1, x_1249);
x_1251 = lean_mk_empty_array_with_capacity(x_1215);
lean_inc(x_1251);
x_1252 = lean_array_push(x_1251, x_1250);
lean_inc(x_1240);
x_1253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1253, 0, x_1240);
lean_ctor_set(x_1253, 1, x_1252);
x_1254 = lean_mk_string("with");
lean_inc(x_1231);
x_1255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1255, 0, x_1231);
lean_ctor_set(x_1255, 1, x_1254);
x_1256 = lean_mk_string("matchAlts");
lean_inc(x_1235);
x_1257 = lean_name_mk_string(x_1235, x_1256);
x_1258 = lean_mk_string("matchAlt");
x_1259 = lean_name_mk_string(x_1235, x_1258);
x_1260 = lean_mk_string("|");
lean_inc(x_1231);
x_1261 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1261, 0, x_1231);
lean_ctor_set(x_1261, 1, x_1260);
lean_inc(x_14);
lean_inc(x_1251);
x_1262 = lean_array_push(x_1251, x_14);
x_1263 = !lean_is_exclusive(x_14);
if (x_1263 == 0)
{
lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; uint8_t x_1288; lean_object* x_1289; 
x_1264 = lean_ctor_get(x_14, 1);
lean_dec(x_1264);
x_1265 = lean_ctor_get(x_14, 0);
lean_dec(x_1265);
lean_inc(x_1240);
lean_ctor_set(x_14, 1, x_1262);
lean_ctor_set(x_14, 0, x_1240);
x_1266 = lean_mk_string("=>");
x_1267 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1267, 0, x_1231);
lean_ctor_set(x_1267, 1, x_1266);
x_1268 = lean_unsigned_to_nat(4u);
x_1269 = lean_mk_empty_array_with_capacity(x_1268);
x_1270 = lean_array_push(x_1269, x_1261);
x_1271 = lean_array_push(x_1270, x_14);
x_1272 = lean_array_push(x_1271, x_1267);
x_1273 = lean_array_push(x_1272, x_1227);
x_1274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1274, 0, x_1259);
lean_ctor_set(x_1274, 1, x_1273);
lean_inc(x_1251);
x_1275 = lean_array_push(x_1251, x_1274);
x_1276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1276, 0, x_1240);
lean_ctor_set(x_1276, 1, x_1275);
x_1277 = lean_array_push(x_1251, x_1276);
x_1278 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1278, 0, x_1257);
lean_ctor_set(x_1278, 1, x_1277);
x_1279 = lean_unsigned_to_nat(6u);
x_1280 = lean_mk_empty_array_with_capacity(x_1279);
x_1281 = lean_array_push(x_1280, x_1238);
lean_inc(x_1243);
x_1282 = lean_array_push(x_1281, x_1243);
x_1283 = lean_array_push(x_1282, x_1253);
x_1284 = lean_array_push(x_1283, x_1243);
x_1285 = lean_array_push(x_1284, x_1255);
x_1286 = lean_array_push(x_1285, x_1278);
x_1287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1287, 0, x_1237);
lean_ctor_set(x_1287, 1, x_1286);
x_1288 = 1;
x_1289 = lean_box(x_1288);
lean_ctor_set(x_1222, 1, x_1289);
lean_ctor_set(x_1222, 0, x_1287);
lean_ctor_set(x_1229, 0, x_1221);
return x_1229;
}
else
{
lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; uint8_t x_1313; lean_object* x_1314; 
lean_dec(x_14);
lean_inc(x_1240);
x_1290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1290, 0, x_1240);
lean_ctor_set(x_1290, 1, x_1262);
x_1291 = lean_mk_string("=>");
x_1292 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1292, 0, x_1231);
lean_ctor_set(x_1292, 1, x_1291);
x_1293 = lean_unsigned_to_nat(4u);
x_1294 = lean_mk_empty_array_with_capacity(x_1293);
x_1295 = lean_array_push(x_1294, x_1261);
x_1296 = lean_array_push(x_1295, x_1290);
x_1297 = lean_array_push(x_1296, x_1292);
x_1298 = lean_array_push(x_1297, x_1227);
x_1299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1299, 0, x_1259);
lean_ctor_set(x_1299, 1, x_1298);
lean_inc(x_1251);
x_1300 = lean_array_push(x_1251, x_1299);
x_1301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1301, 0, x_1240);
lean_ctor_set(x_1301, 1, x_1300);
x_1302 = lean_array_push(x_1251, x_1301);
x_1303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1303, 0, x_1257);
lean_ctor_set(x_1303, 1, x_1302);
x_1304 = lean_unsigned_to_nat(6u);
x_1305 = lean_mk_empty_array_with_capacity(x_1304);
x_1306 = lean_array_push(x_1305, x_1238);
lean_inc(x_1243);
x_1307 = lean_array_push(x_1306, x_1243);
x_1308 = lean_array_push(x_1307, x_1253);
x_1309 = lean_array_push(x_1308, x_1243);
x_1310 = lean_array_push(x_1309, x_1255);
x_1311 = lean_array_push(x_1310, x_1303);
x_1312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1312, 0, x_1237);
lean_ctor_set(x_1312, 1, x_1311);
x_1313 = 1;
x_1314 = lean_box(x_1313);
lean_ctor_set(x_1222, 1, x_1314);
lean_ctor_set(x_1222, 0, x_1312);
lean_ctor_set(x_1229, 0, x_1221);
return x_1229;
}
}
else
{
lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; uint8_t x_1372; lean_object* x_1373; lean_object* x_1374; 
x_1315 = lean_ctor_get(x_1229, 0);
x_1316 = lean_ctor_get(x_1229, 1);
lean_inc(x_1316);
lean_inc(x_1315);
lean_dec(x_1229);
x_1317 = lean_box(0);
x_1318 = lean_name_mk_string(x_1317, x_300);
x_1319 = lean_name_mk_string(x_1318, x_604);
x_1320 = lean_name_mk_string(x_1319, x_904);
x_1321 = lean_mk_string("match");
lean_inc(x_1321);
lean_inc(x_1320);
x_1322 = lean_name_mk_string(x_1320, x_1321);
lean_inc(x_1315);
x_1323 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1323, 0, x_1315);
lean_ctor_set(x_1323, 1, x_1321);
x_1324 = lean_mk_string("null");
x_1325 = lean_name_mk_string(x_1317, x_1324);
x_1326 = lean_unsigned_to_nat(0u);
x_1327 = lean_mk_empty_array_with_capacity(x_1326);
lean_inc(x_1325);
x_1328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1328, 0, x_1325);
lean_ctor_set(x_1328, 1, x_1327);
x_1329 = lean_mk_string("matchDiscr");
lean_inc(x_1320);
x_1330 = lean_name_mk_string(x_1320, x_1329);
x_1331 = lean_unsigned_to_nat(2u);
x_1332 = lean_mk_empty_array_with_capacity(x_1331);
lean_inc(x_1328);
x_1333 = lean_array_push(x_1332, x_1328);
x_1334 = lean_array_push(x_1333, x_1213);
x_1335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1335, 0, x_1330);
lean_ctor_set(x_1335, 1, x_1334);
x_1336 = lean_mk_empty_array_with_capacity(x_1215);
lean_inc(x_1336);
x_1337 = lean_array_push(x_1336, x_1335);
lean_inc(x_1325);
x_1338 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1338, 0, x_1325);
lean_ctor_set(x_1338, 1, x_1337);
x_1339 = lean_mk_string("with");
lean_inc(x_1315);
x_1340 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1340, 0, x_1315);
lean_ctor_set(x_1340, 1, x_1339);
x_1341 = lean_mk_string("matchAlts");
lean_inc(x_1320);
x_1342 = lean_name_mk_string(x_1320, x_1341);
x_1343 = lean_mk_string("matchAlt");
x_1344 = lean_name_mk_string(x_1320, x_1343);
x_1345 = lean_mk_string("|");
lean_inc(x_1315);
x_1346 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1346, 0, x_1315);
lean_ctor_set(x_1346, 1, x_1345);
lean_inc(x_14);
lean_inc(x_1336);
x_1347 = lean_array_push(x_1336, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1348 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1348 = lean_box(0);
}
lean_inc(x_1325);
if (lean_is_scalar(x_1348)) {
 x_1349 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1349 = x_1348;
}
lean_ctor_set(x_1349, 0, x_1325);
lean_ctor_set(x_1349, 1, x_1347);
x_1350 = lean_mk_string("=>");
x_1351 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1351, 0, x_1315);
lean_ctor_set(x_1351, 1, x_1350);
x_1352 = lean_unsigned_to_nat(4u);
x_1353 = lean_mk_empty_array_with_capacity(x_1352);
x_1354 = lean_array_push(x_1353, x_1346);
x_1355 = lean_array_push(x_1354, x_1349);
x_1356 = lean_array_push(x_1355, x_1351);
x_1357 = lean_array_push(x_1356, x_1227);
x_1358 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1358, 0, x_1344);
lean_ctor_set(x_1358, 1, x_1357);
lean_inc(x_1336);
x_1359 = lean_array_push(x_1336, x_1358);
x_1360 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1360, 0, x_1325);
lean_ctor_set(x_1360, 1, x_1359);
x_1361 = lean_array_push(x_1336, x_1360);
x_1362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1362, 0, x_1342);
lean_ctor_set(x_1362, 1, x_1361);
x_1363 = lean_unsigned_to_nat(6u);
x_1364 = lean_mk_empty_array_with_capacity(x_1363);
x_1365 = lean_array_push(x_1364, x_1323);
lean_inc(x_1328);
x_1366 = lean_array_push(x_1365, x_1328);
x_1367 = lean_array_push(x_1366, x_1338);
x_1368 = lean_array_push(x_1367, x_1328);
x_1369 = lean_array_push(x_1368, x_1340);
x_1370 = lean_array_push(x_1369, x_1362);
x_1371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1371, 0, x_1322);
lean_ctor_set(x_1371, 1, x_1370);
x_1372 = 1;
x_1373 = lean_box(x_1372);
lean_ctor_set(x_1222, 1, x_1373);
lean_ctor_set(x_1222, 0, x_1371);
x_1374 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1374, 0, x_1221);
lean_ctor_set(x_1374, 1, x_1316);
return x_1374;
}
}
else
{
lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; uint8_t x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; 
x_1375 = lean_ctor_get(x_1222, 0);
lean_inc(x_1375);
lean_dec(x_1222);
x_1376 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1223);
lean_dec(x_5);
x_1377 = lean_ctor_get(x_1376, 0);
lean_inc(x_1377);
x_1378 = lean_ctor_get(x_1376, 1);
lean_inc(x_1378);
if (lean_is_exclusive(x_1376)) {
 lean_ctor_release(x_1376, 0);
 lean_ctor_release(x_1376, 1);
 x_1379 = x_1376;
} else {
 lean_dec_ref(x_1376);
 x_1379 = lean_box(0);
}
x_1380 = lean_box(0);
x_1381 = lean_name_mk_string(x_1380, x_300);
x_1382 = lean_name_mk_string(x_1381, x_604);
x_1383 = lean_name_mk_string(x_1382, x_904);
x_1384 = lean_mk_string("match");
lean_inc(x_1384);
lean_inc(x_1383);
x_1385 = lean_name_mk_string(x_1383, x_1384);
lean_inc(x_1377);
x_1386 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1386, 0, x_1377);
lean_ctor_set(x_1386, 1, x_1384);
x_1387 = lean_mk_string("null");
x_1388 = lean_name_mk_string(x_1380, x_1387);
x_1389 = lean_unsigned_to_nat(0u);
x_1390 = lean_mk_empty_array_with_capacity(x_1389);
lean_inc(x_1388);
x_1391 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1391, 0, x_1388);
lean_ctor_set(x_1391, 1, x_1390);
x_1392 = lean_mk_string("matchDiscr");
lean_inc(x_1383);
x_1393 = lean_name_mk_string(x_1383, x_1392);
x_1394 = lean_unsigned_to_nat(2u);
x_1395 = lean_mk_empty_array_with_capacity(x_1394);
lean_inc(x_1391);
x_1396 = lean_array_push(x_1395, x_1391);
x_1397 = lean_array_push(x_1396, x_1213);
x_1398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1398, 0, x_1393);
lean_ctor_set(x_1398, 1, x_1397);
x_1399 = lean_mk_empty_array_with_capacity(x_1215);
lean_inc(x_1399);
x_1400 = lean_array_push(x_1399, x_1398);
lean_inc(x_1388);
x_1401 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1401, 0, x_1388);
lean_ctor_set(x_1401, 1, x_1400);
x_1402 = lean_mk_string("with");
lean_inc(x_1377);
x_1403 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1403, 0, x_1377);
lean_ctor_set(x_1403, 1, x_1402);
x_1404 = lean_mk_string("matchAlts");
lean_inc(x_1383);
x_1405 = lean_name_mk_string(x_1383, x_1404);
x_1406 = lean_mk_string("matchAlt");
x_1407 = lean_name_mk_string(x_1383, x_1406);
x_1408 = lean_mk_string("|");
lean_inc(x_1377);
x_1409 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1409, 0, x_1377);
lean_ctor_set(x_1409, 1, x_1408);
lean_inc(x_14);
lean_inc(x_1399);
x_1410 = lean_array_push(x_1399, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1411 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1411 = lean_box(0);
}
lean_inc(x_1388);
if (lean_is_scalar(x_1411)) {
 x_1412 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1412 = x_1411;
}
lean_ctor_set(x_1412, 0, x_1388);
lean_ctor_set(x_1412, 1, x_1410);
x_1413 = lean_mk_string("=>");
x_1414 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1414, 0, x_1377);
lean_ctor_set(x_1414, 1, x_1413);
x_1415 = lean_unsigned_to_nat(4u);
x_1416 = lean_mk_empty_array_with_capacity(x_1415);
x_1417 = lean_array_push(x_1416, x_1409);
x_1418 = lean_array_push(x_1417, x_1412);
x_1419 = lean_array_push(x_1418, x_1414);
x_1420 = lean_array_push(x_1419, x_1375);
x_1421 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1421, 0, x_1407);
lean_ctor_set(x_1421, 1, x_1420);
lean_inc(x_1399);
x_1422 = lean_array_push(x_1399, x_1421);
x_1423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1423, 0, x_1388);
lean_ctor_set(x_1423, 1, x_1422);
x_1424 = lean_array_push(x_1399, x_1423);
x_1425 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1425, 0, x_1405);
lean_ctor_set(x_1425, 1, x_1424);
x_1426 = lean_unsigned_to_nat(6u);
x_1427 = lean_mk_empty_array_with_capacity(x_1426);
x_1428 = lean_array_push(x_1427, x_1386);
lean_inc(x_1391);
x_1429 = lean_array_push(x_1428, x_1391);
x_1430 = lean_array_push(x_1429, x_1401);
x_1431 = lean_array_push(x_1430, x_1391);
x_1432 = lean_array_push(x_1431, x_1403);
x_1433 = lean_array_push(x_1432, x_1425);
x_1434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1434, 0, x_1385);
lean_ctor_set(x_1434, 1, x_1433);
x_1435 = 1;
x_1436 = lean_box(x_1435);
x_1437 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1437, 0, x_1434);
lean_ctor_set(x_1437, 1, x_1436);
lean_ctor_set(x_1221, 1, x_1437);
if (lean_is_scalar(x_1379)) {
 x_1438 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1438 = x_1379;
}
lean_ctor_set(x_1438, 0, x_1221);
lean_ctor_set(x_1438, 1, x_1378);
return x_1438;
}
}
else
{
lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; uint8_t x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; 
x_1439 = lean_ctor_get(x_1221, 0);
lean_inc(x_1439);
lean_dec(x_1221);
x_1440 = lean_ctor_get(x_1222, 0);
lean_inc(x_1440);
if (lean_is_exclusive(x_1222)) {
 lean_ctor_release(x_1222, 0);
 lean_ctor_release(x_1222, 1);
 x_1441 = x_1222;
} else {
 lean_dec_ref(x_1222);
 x_1441 = lean_box(0);
}
x_1442 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1223);
lean_dec(x_5);
x_1443 = lean_ctor_get(x_1442, 0);
lean_inc(x_1443);
x_1444 = lean_ctor_get(x_1442, 1);
lean_inc(x_1444);
if (lean_is_exclusive(x_1442)) {
 lean_ctor_release(x_1442, 0);
 lean_ctor_release(x_1442, 1);
 x_1445 = x_1442;
} else {
 lean_dec_ref(x_1442);
 x_1445 = lean_box(0);
}
x_1446 = lean_box(0);
x_1447 = lean_name_mk_string(x_1446, x_300);
x_1448 = lean_name_mk_string(x_1447, x_604);
x_1449 = lean_name_mk_string(x_1448, x_904);
x_1450 = lean_mk_string("match");
lean_inc(x_1450);
lean_inc(x_1449);
x_1451 = lean_name_mk_string(x_1449, x_1450);
lean_inc(x_1443);
x_1452 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1452, 0, x_1443);
lean_ctor_set(x_1452, 1, x_1450);
x_1453 = lean_mk_string("null");
x_1454 = lean_name_mk_string(x_1446, x_1453);
x_1455 = lean_unsigned_to_nat(0u);
x_1456 = lean_mk_empty_array_with_capacity(x_1455);
lean_inc(x_1454);
x_1457 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1457, 0, x_1454);
lean_ctor_set(x_1457, 1, x_1456);
x_1458 = lean_mk_string("matchDiscr");
lean_inc(x_1449);
x_1459 = lean_name_mk_string(x_1449, x_1458);
x_1460 = lean_unsigned_to_nat(2u);
x_1461 = lean_mk_empty_array_with_capacity(x_1460);
lean_inc(x_1457);
x_1462 = lean_array_push(x_1461, x_1457);
x_1463 = lean_array_push(x_1462, x_1213);
x_1464 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1464, 0, x_1459);
lean_ctor_set(x_1464, 1, x_1463);
x_1465 = lean_mk_empty_array_with_capacity(x_1215);
lean_inc(x_1465);
x_1466 = lean_array_push(x_1465, x_1464);
lean_inc(x_1454);
x_1467 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1467, 0, x_1454);
lean_ctor_set(x_1467, 1, x_1466);
x_1468 = lean_mk_string("with");
lean_inc(x_1443);
x_1469 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1469, 0, x_1443);
lean_ctor_set(x_1469, 1, x_1468);
x_1470 = lean_mk_string("matchAlts");
lean_inc(x_1449);
x_1471 = lean_name_mk_string(x_1449, x_1470);
x_1472 = lean_mk_string("matchAlt");
x_1473 = lean_name_mk_string(x_1449, x_1472);
x_1474 = lean_mk_string("|");
lean_inc(x_1443);
x_1475 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1475, 0, x_1443);
lean_ctor_set(x_1475, 1, x_1474);
lean_inc(x_14);
lean_inc(x_1465);
x_1476 = lean_array_push(x_1465, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1477 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1477 = lean_box(0);
}
lean_inc(x_1454);
if (lean_is_scalar(x_1477)) {
 x_1478 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1478 = x_1477;
}
lean_ctor_set(x_1478, 0, x_1454);
lean_ctor_set(x_1478, 1, x_1476);
x_1479 = lean_mk_string("=>");
x_1480 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1480, 0, x_1443);
lean_ctor_set(x_1480, 1, x_1479);
x_1481 = lean_unsigned_to_nat(4u);
x_1482 = lean_mk_empty_array_with_capacity(x_1481);
x_1483 = lean_array_push(x_1482, x_1475);
x_1484 = lean_array_push(x_1483, x_1478);
x_1485 = lean_array_push(x_1484, x_1480);
x_1486 = lean_array_push(x_1485, x_1440);
x_1487 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1487, 0, x_1473);
lean_ctor_set(x_1487, 1, x_1486);
lean_inc(x_1465);
x_1488 = lean_array_push(x_1465, x_1487);
x_1489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1489, 0, x_1454);
lean_ctor_set(x_1489, 1, x_1488);
x_1490 = lean_array_push(x_1465, x_1489);
x_1491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1491, 0, x_1471);
lean_ctor_set(x_1491, 1, x_1490);
x_1492 = lean_unsigned_to_nat(6u);
x_1493 = lean_mk_empty_array_with_capacity(x_1492);
x_1494 = lean_array_push(x_1493, x_1452);
lean_inc(x_1457);
x_1495 = lean_array_push(x_1494, x_1457);
x_1496 = lean_array_push(x_1495, x_1467);
x_1497 = lean_array_push(x_1496, x_1457);
x_1498 = lean_array_push(x_1497, x_1469);
x_1499 = lean_array_push(x_1498, x_1491);
x_1500 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1500, 0, x_1451);
lean_ctor_set(x_1500, 1, x_1499);
x_1501 = 1;
x_1502 = lean_box(x_1501);
if (lean_is_scalar(x_1441)) {
 x_1503 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1503 = x_1441;
}
lean_ctor_set(x_1503, 0, x_1500);
lean_ctor_set(x_1503, 1, x_1502);
x_1504 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1504, 0, x_1439);
lean_ctor_set(x_1504, 1, x_1503);
if (lean_is_scalar(x_1445)) {
 x_1505 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1505 = x_1445;
}
lean_ctor_set(x_1505, 0, x_1504);
lean_ctor_set(x_1505, 1, x_1444);
return x_1505;
}
}
else
{
lean_object* x_1506; lean_object* x_1507; uint8_t x_1508; 
x_1506 = lean_unsigned_to_nat(1u);
x_1507 = l_Lean_Syntax_getArg(x_14, x_1506);
x_1508 = l_Lean_Syntax_isNone(x_1507);
if (x_1508 == 0)
{
lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; uint8_t x_1512; 
x_1509 = lean_unsigned_to_nat(0u);
x_1510 = l_Lean_Syntax_getArg(x_1507, x_1509);
x_1511 = l_Lean_Syntax_getArg(x_1507, x_1506);
lean_dec(x_1507);
x_1512 = l_Lean_Syntax_isNone(x_1511);
if (x_1512 == 0)
{
lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; uint8_t x_1521; 
x_1513 = l_Lean_Syntax_getArg(x_1511, x_1509);
lean_dec(x_1511);
lean_inc(x_1513);
x_1514 = l_Lean_Syntax_getKind(x_1513);
x_1515 = lean_box(0);
x_1516 = lean_name_mk_string(x_1515, x_300);
x_1517 = lean_name_mk_string(x_1516, x_604);
x_1518 = lean_name_mk_string(x_1517, x_904);
x_1519 = lean_mk_string("typeAscription");
lean_inc(x_1518);
x_1520 = lean_name_mk_string(x_1518, x_1519);
x_1521 = lean_name_eq(x_1514, x_1520);
lean_dec(x_1520);
lean_dec(x_1514);
if (x_1521 == 0)
{
lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; uint8_t x_1533; 
lean_dec(x_1513);
lean_dec(x_1510);
lean_inc(x_5);
x_1522 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_1523 = lean_ctor_get(x_1522, 0);
lean_inc(x_1523);
x_1524 = lean_ctor_get(x_1522, 1);
lean_inc(x_1524);
lean_dec(x_1522);
x_1525 = lean_nat_add(x_3, x_1506);
lean_dec(x_3);
x_1526 = l_Lean_mkHole(x_14);
lean_inc(x_1523);
x_1527 = l_Lean_Elab_Term_mkExplicitBinder(x_1523, x_1526);
x_1528 = lean_array_push(x_4, x_1527);
lean_inc(x_5);
x_1529 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1525, x_1528, x_5, x_1524);
x_1530 = lean_ctor_get(x_1529, 0);
lean_inc(x_1530);
x_1531 = lean_ctor_get(x_1530, 1);
lean_inc(x_1531);
x_1532 = lean_ctor_get(x_1529, 1);
lean_inc(x_1532);
lean_dec(x_1529);
x_1533 = !lean_is_exclusive(x_1530);
if (x_1533 == 0)
{
lean_object* x_1534; uint8_t x_1535; 
x_1534 = lean_ctor_get(x_1530, 1);
lean_dec(x_1534);
x_1535 = !lean_is_exclusive(x_1531);
if (x_1535 == 0)
{
lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; uint8_t x_1539; 
x_1536 = lean_ctor_get(x_1531, 0);
x_1537 = lean_ctor_get(x_1531, 1);
lean_dec(x_1537);
x_1538 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1532);
lean_dec(x_5);
x_1539 = !lean_is_exclusive(x_1538);
if (x_1539 == 0)
{
lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; lean_object* x_1552; lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; lean_object* x_1562; lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; uint8_t x_1567; 
x_1540 = lean_ctor_get(x_1538, 0);
x_1541 = lean_mk_string("match");
lean_inc(x_1541);
lean_inc(x_1518);
x_1542 = lean_name_mk_string(x_1518, x_1541);
lean_inc(x_1540);
x_1543 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1543, 0, x_1540);
lean_ctor_set(x_1543, 1, x_1541);
x_1544 = lean_mk_string("null");
x_1545 = lean_name_mk_string(x_1515, x_1544);
x_1546 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1545);
x_1547 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1547, 0, x_1545);
lean_ctor_set(x_1547, 1, x_1546);
x_1548 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1549 = lean_name_mk_string(x_1518, x_1548);
x_1550 = lean_unsigned_to_nat(2u);
x_1551 = lean_mk_empty_array_with_capacity(x_1550);
lean_inc(x_1547);
x_1552 = lean_array_push(x_1551, x_1547);
x_1553 = lean_array_push(x_1552, x_1523);
x_1554 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1554, 0, x_1549);
lean_ctor_set(x_1554, 1, x_1553);
x_1555 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1555);
x_1556 = lean_array_push(x_1555, x_1554);
lean_inc(x_1545);
x_1557 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1557, 0, x_1545);
lean_ctor_set(x_1557, 1, x_1556);
x_1558 = lean_mk_string("with");
lean_inc(x_1540);
x_1559 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1559, 0, x_1540);
lean_ctor_set(x_1559, 1, x_1558);
x_1560 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1561 = lean_name_mk_string(x_1518, x_1560);
x_1562 = lean_mk_string("matchAlt");
x_1563 = lean_name_mk_string(x_1518, x_1562);
x_1564 = lean_mk_string("|");
lean_inc(x_1540);
x_1565 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1565, 0, x_1540);
lean_ctor_set(x_1565, 1, x_1564);
lean_inc(x_14);
lean_inc(x_1555);
x_1566 = lean_array_push(x_1555, x_14);
x_1567 = !lean_is_exclusive(x_14);
if (x_1567 == 0)
{
lean_object* x_1568; lean_object* x_1569; lean_object* x_1570; lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; lean_object* x_1574; lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; uint8_t x_1592; lean_object* x_1593; 
x_1568 = lean_ctor_get(x_14, 1);
lean_dec(x_1568);
x_1569 = lean_ctor_get(x_14, 0);
lean_dec(x_1569);
lean_inc(x_1545);
lean_ctor_set(x_14, 1, x_1566);
lean_ctor_set(x_14, 0, x_1545);
x_1570 = lean_mk_string("=>");
x_1571 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1571, 0, x_1540);
lean_ctor_set(x_1571, 1, x_1570);
x_1572 = lean_unsigned_to_nat(4u);
x_1573 = lean_mk_empty_array_with_capacity(x_1572);
x_1574 = lean_array_push(x_1573, x_1565);
x_1575 = lean_array_push(x_1574, x_14);
x_1576 = lean_array_push(x_1575, x_1571);
x_1577 = lean_array_push(x_1576, x_1536);
x_1578 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1578, 0, x_1563);
lean_ctor_set(x_1578, 1, x_1577);
lean_inc(x_1555);
x_1579 = lean_array_push(x_1555, x_1578);
x_1580 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1580, 0, x_1545);
lean_ctor_set(x_1580, 1, x_1579);
x_1581 = lean_array_push(x_1555, x_1580);
x_1582 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1582, 0, x_1561);
lean_ctor_set(x_1582, 1, x_1581);
x_1583 = lean_unsigned_to_nat(6u);
x_1584 = lean_mk_empty_array_with_capacity(x_1583);
x_1585 = lean_array_push(x_1584, x_1543);
lean_inc(x_1547);
x_1586 = lean_array_push(x_1585, x_1547);
x_1587 = lean_array_push(x_1586, x_1557);
x_1588 = lean_array_push(x_1587, x_1547);
x_1589 = lean_array_push(x_1588, x_1559);
x_1590 = lean_array_push(x_1589, x_1582);
x_1591 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1591, 0, x_1542);
lean_ctor_set(x_1591, 1, x_1590);
x_1592 = 1;
x_1593 = lean_box(x_1592);
lean_ctor_set(x_1531, 1, x_1593);
lean_ctor_set(x_1531, 0, x_1591);
lean_ctor_set(x_1538, 0, x_1530);
return x_1538;
}
else
{
lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; lean_object* x_1597; lean_object* x_1598; lean_object* x_1599; lean_object* x_1600; lean_object* x_1601; lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; lean_object* x_1616; uint8_t x_1617; lean_object* x_1618; 
lean_dec(x_14);
lean_inc(x_1545);
x_1594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1594, 0, x_1545);
lean_ctor_set(x_1594, 1, x_1566);
x_1595 = lean_mk_string("=>");
x_1596 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1596, 0, x_1540);
lean_ctor_set(x_1596, 1, x_1595);
x_1597 = lean_unsigned_to_nat(4u);
x_1598 = lean_mk_empty_array_with_capacity(x_1597);
x_1599 = lean_array_push(x_1598, x_1565);
x_1600 = lean_array_push(x_1599, x_1594);
x_1601 = lean_array_push(x_1600, x_1596);
x_1602 = lean_array_push(x_1601, x_1536);
x_1603 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1603, 0, x_1563);
lean_ctor_set(x_1603, 1, x_1602);
lean_inc(x_1555);
x_1604 = lean_array_push(x_1555, x_1603);
x_1605 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1605, 0, x_1545);
lean_ctor_set(x_1605, 1, x_1604);
x_1606 = lean_array_push(x_1555, x_1605);
x_1607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1607, 0, x_1561);
lean_ctor_set(x_1607, 1, x_1606);
x_1608 = lean_unsigned_to_nat(6u);
x_1609 = lean_mk_empty_array_with_capacity(x_1608);
x_1610 = lean_array_push(x_1609, x_1543);
lean_inc(x_1547);
x_1611 = lean_array_push(x_1610, x_1547);
x_1612 = lean_array_push(x_1611, x_1557);
x_1613 = lean_array_push(x_1612, x_1547);
x_1614 = lean_array_push(x_1613, x_1559);
x_1615 = lean_array_push(x_1614, x_1607);
x_1616 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1616, 0, x_1542);
lean_ctor_set(x_1616, 1, x_1615);
x_1617 = 1;
x_1618 = lean_box(x_1617);
lean_ctor_set(x_1531, 1, x_1618);
lean_ctor_set(x_1531, 0, x_1616);
lean_ctor_set(x_1538, 0, x_1530);
return x_1538;
}
}
else
{
lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; lean_object* x_1625; lean_object* x_1626; lean_object* x_1627; lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; lean_object* x_1663; lean_object* x_1664; lean_object* x_1665; lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; uint8_t x_1671; lean_object* x_1672; lean_object* x_1673; 
x_1619 = lean_ctor_get(x_1538, 0);
x_1620 = lean_ctor_get(x_1538, 1);
lean_inc(x_1620);
lean_inc(x_1619);
lean_dec(x_1538);
x_1621 = lean_mk_string("match");
lean_inc(x_1621);
lean_inc(x_1518);
x_1622 = lean_name_mk_string(x_1518, x_1621);
lean_inc(x_1619);
x_1623 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1623, 0, x_1619);
lean_ctor_set(x_1623, 1, x_1621);
x_1624 = lean_mk_string("null");
x_1625 = lean_name_mk_string(x_1515, x_1624);
x_1626 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1625);
x_1627 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1627, 0, x_1625);
lean_ctor_set(x_1627, 1, x_1626);
x_1628 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1629 = lean_name_mk_string(x_1518, x_1628);
x_1630 = lean_unsigned_to_nat(2u);
x_1631 = lean_mk_empty_array_with_capacity(x_1630);
lean_inc(x_1627);
x_1632 = lean_array_push(x_1631, x_1627);
x_1633 = lean_array_push(x_1632, x_1523);
x_1634 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1634, 0, x_1629);
lean_ctor_set(x_1634, 1, x_1633);
x_1635 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1635);
x_1636 = lean_array_push(x_1635, x_1634);
lean_inc(x_1625);
x_1637 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1637, 0, x_1625);
lean_ctor_set(x_1637, 1, x_1636);
x_1638 = lean_mk_string("with");
lean_inc(x_1619);
x_1639 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1639, 0, x_1619);
lean_ctor_set(x_1639, 1, x_1638);
x_1640 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1641 = lean_name_mk_string(x_1518, x_1640);
x_1642 = lean_mk_string("matchAlt");
x_1643 = lean_name_mk_string(x_1518, x_1642);
x_1644 = lean_mk_string("|");
lean_inc(x_1619);
x_1645 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1645, 0, x_1619);
lean_ctor_set(x_1645, 1, x_1644);
lean_inc(x_14);
lean_inc(x_1635);
x_1646 = lean_array_push(x_1635, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1647 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1647 = lean_box(0);
}
lean_inc(x_1625);
if (lean_is_scalar(x_1647)) {
 x_1648 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1648 = x_1647;
}
lean_ctor_set(x_1648, 0, x_1625);
lean_ctor_set(x_1648, 1, x_1646);
x_1649 = lean_mk_string("=>");
x_1650 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1650, 0, x_1619);
lean_ctor_set(x_1650, 1, x_1649);
x_1651 = lean_unsigned_to_nat(4u);
x_1652 = lean_mk_empty_array_with_capacity(x_1651);
x_1653 = lean_array_push(x_1652, x_1645);
x_1654 = lean_array_push(x_1653, x_1648);
x_1655 = lean_array_push(x_1654, x_1650);
x_1656 = lean_array_push(x_1655, x_1536);
x_1657 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1657, 0, x_1643);
lean_ctor_set(x_1657, 1, x_1656);
lean_inc(x_1635);
x_1658 = lean_array_push(x_1635, x_1657);
x_1659 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1659, 0, x_1625);
lean_ctor_set(x_1659, 1, x_1658);
x_1660 = lean_array_push(x_1635, x_1659);
x_1661 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1661, 0, x_1641);
lean_ctor_set(x_1661, 1, x_1660);
x_1662 = lean_unsigned_to_nat(6u);
x_1663 = lean_mk_empty_array_with_capacity(x_1662);
x_1664 = lean_array_push(x_1663, x_1623);
lean_inc(x_1627);
x_1665 = lean_array_push(x_1664, x_1627);
x_1666 = lean_array_push(x_1665, x_1637);
x_1667 = lean_array_push(x_1666, x_1627);
x_1668 = lean_array_push(x_1667, x_1639);
x_1669 = lean_array_push(x_1668, x_1661);
x_1670 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1670, 0, x_1622);
lean_ctor_set(x_1670, 1, x_1669);
x_1671 = 1;
x_1672 = lean_box(x_1671);
lean_ctor_set(x_1531, 1, x_1672);
lean_ctor_set(x_1531, 0, x_1670);
x_1673 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1673, 0, x_1530);
lean_ctor_set(x_1673, 1, x_1620);
return x_1673;
}
}
else
{
lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; lean_object* x_1680; lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; lean_object* x_1698; lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; lean_object* x_1706; lean_object* x_1707; lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; lean_object* x_1713; lean_object* x_1714; lean_object* x_1715; lean_object* x_1716; lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; lean_object* x_1728; uint8_t x_1729; lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; 
x_1674 = lean_ctor_get(x_1531, 0);
lean_inc(x_1674);
lean_dec(x_1531);
x_1675 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1532);
lean_dec(x_5);
x_1676 = lean_ctor_get(x_1675, 0);
lean_inc(x_1676);
x_1677 = lean_ctor_get(x_1675, 1);
lean_inc(x_1677);
if (lean_is_exclusive(x_1675)) {
 lean_ctor_release(x_1675, 0);
 lean_ctor_release(x_1675, 1);
 x_1678 = x_1675;
} else {
 lean_dec_ref(x_1675);
 x_1678 = lean_box(0);
}
x_1679 = lean_mk_string("match");
lean_inc(x_1679);
lean_inc(x_1518);
x_1680 = lean_name_mk_string(x_1518, x_1679);
lean_inc(x_1676);
x_1681 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1681, 0, x_1676);
lean_ctor_set(x_1681, 1, x_1679);
x_1682 = lean_mk_string("null");
x_1683 = lean_name_mk_string(x_1515, x_1682);
x_1684 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1683);
x_1685 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1685, 0, x_1683);
lean_ctor_set(x_1685, 1, x_1684);
x_1686 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1687 = lean_name_mk_string(x_1518, x_1686);
x_1688 = lean_unsigned_to_nat(2u);
x_1689 = lean_mk_empty_array_with_capacity(x_1688);
lean_inc(x_1685);
x_1690 = lean_array_push(x_1689, x_1685);
x_1691 = lean_array_push(x_1690, x_1523);
x_1692 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1692, 0, x_1687);
lean_ctor_set(x_1692, 1, x_1691);
x_1693 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1693);
x_1694 = lean_array_push(x_1693, x_1692);
lean_inc(x_1683);
x_1695 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1695, 0, x_1683);
lean_ctor_set(x_1695, 1, x_1694);
x_1696 = lean_mk_string("with");
lean_inc(x_1676);
x_1697 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1697, 0, x_1676);
lean_ctor_set(x_1697, 1, x_1696);
x_1698 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1699 = lean_name_mk_string(x_1518, x_1698);
x_1700 = lean_mk_string("matchAlt");
x_1701 = lean_name_mk_string(x_1518, x_1700);
x_1702 = lean_mk_string("|");
lean_inc(x_1676);
x_1703 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1703, 0, x_1676);
lean_ctor_set(x_1703, 1, x_1702);
lean_inc(x_14);
lean_inc(x_1693);
x_1704 = lean_array_push(x_1693, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1705 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1705 = lean_box(0);
}
lean_inc(x_1683);
if (lean_is_scalar(x_1705)) {
 x_1706 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1706 = x_1705;
}
lean_ctor_set(x_1706, 0, x_1683);
lean_ctor_set(x_1706, 1, x_1704);
x_1707 = lean_mk_string("=>");
x_1708 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1708, 0, x_1676);
lean_ctor_set(x_1708, 1, x_1707);
x_1709 = lean_unsigned_to_nat(4u);
x_1710 = lean_mk_empty_array_with_capacity(x_1709);
x_1711 = lean_array_push(x_1710, x_1703);
x_1712 = lean_array_push(x_1711, x_1706);
x_1713 = lean_array_push(x_1712, x_1708);
x_1714 = lean_array_push(x_1713, x_1674);
x_1715 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1715, 0, x_1701);
lean_ctor_set(x_1715, 1, x_1714);
lean_inc(x_1693);
x_1716 = lean_array_push(x_1693, x_1715);
x_1717 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1717, 0, x_1683);
lean_ctor_set(x_1717, 1, x_1716);
x_1718 = lean_array_push(x_1693, x_1717);
x_1719 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1719, 0, x_1699);
lean_ctor_set(x_1719, 1, x_1718);
x_1720 = lean_unsigned_to_nat(6u);
x_1721 = lean_mk_empty_array_with_capacity(x_1720);
x_1722 = lean_array_push(x_1721, x_1681);
lean_inc(x_1685);
x_1723 = lean_array_push(x_1722, x_1685);
x_1724 = lean_array_push(x_1723, x_1695);
x_1725 = lean_array_push(x_1724, x_1685);
x_1726 = lean_array_push(x_1725, x_1697);
x_1727 = lean_array_push(x_1726, x_1719);
x_1728 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1728, 0, x_1680);
lean_ctor_set(x_1728, 1, x_1727);
x_1729 = 1;
x_1730 = lean_box(x_1729);
x_1731 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1731, 0, x_1728);
lean_ctor_set(x_1731, 1, x_1730);
lean_ctor_set(x_1530, 1, x_1731);
if (lean_is_scalar(x_1678)) {
 x_1732 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1732 = x_1678;
}
lean_ctor_set(x_1732, 0, x_1530);
lean_ctor_set(x_1732, 1, x_1677);
return x_1732;
}
}
else
{
lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; lean_object* x_1737; lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; lean_object* x_1748; lean_object* x_1749; lean_object* x_1750; lean_object* x_1751; lean_object* x_1752; lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; lean_object* x_1757; lean_object* x_1758; lean_object* x_1759; lean_object* x_1760; lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; lean_object* x_1765; lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; lean_object* x_1774; lean_object* x_1775; lean_object* x_1776; lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; lean_object* x_1789; uint8_t x_1790; lean_object* x_1791; lean_object* x_1792; lean_object* x_1793; lean_object* x_1794; 
x_1733 = lean_ctor_get(x_1530, 0);
lean_inc(x_1733);
lean_dec(x_1530);
x_1734 = lean_ctor_get(x_1531, 0);
lean_inc(x_1734);
if (lean_is_exclusive(x_1531)) {
 lean_ctor_release(x_1531, 0);
 lean_ctor_release(x_1531, 1);
 x_1735 = x_1531;
} else {
 lean_dec_ref(x_1531);
 x_1735 = lean_box(0);
}
x_1736 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1532);
lean_dec(x_5);
x_1737 = lean_ctor_get(x_1736, 0);
lean_inc(x_1737);
x_1738 = lean_ctor_get(x_1736, 1);
lean_inc(x_1738);
if (lean_is_exclusive(x_1736)) {
 lean_ctor_release(x_1736, 0);
 lean_ctor_release(x_1736, 1);
 x_1739 = x_1736;
} else {
 lean_dec_ref(x_1736);
 x_1739 = lean_box(0);
}
x_1740 = lean_mk_string("match");
lean_inc(x_1740);
lean_inc(x_1518);
x_1741 = lean_name_mk_string(x_1518, x_1740);
lean_inc(x_1737);
x_1742 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1742, 0, x_1737);
lean_ctor_set(x_1742, 1, x_1740);
x_1743 = lean_mk_string("null");
x_1744 = lean_name_mk_string(x_1515, x_1743);
x_1745 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1744);
x_1746 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1746, 0, x_1744);
lean_ctor_set(x_1746, 1, x_1745);
x_1747 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1748 = lean_name_mk_string(x_1518, x_1747);
x_1749 = lean_unsigned_to_nat(2u);
x_1750 = lean_mk_empty_array_with_capacity(x_1749);
lean_inc(x_1746);
x_1751 = lean_array_push(x_1750, x_1746);
x_1752 = lean_array_push(x_1751, x_1523);
x_1753 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1753, 0, x_1748);
lean_ctor_set(x_1753, 1, x_1752);
x_1754 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1754);
x_1755 = lean_array_push(x_1754, x_1753);
lean_inc(x_1744);
x_1756 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1756, 0, x_1744);
lean_ctor_set(x_1756, 1, x_1755);
x_1757 = lean_mk_string("with");
lean_inc(x_1737);
x_1758 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1758, 0, x_1737);
lean_ctor_set(x_1758, 1, x_1757);
x_1759 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1760 = lean_name_mk_string(x_1518, x_1759);
x_1761 = lean_mk_string("matchAlt");
x_1762 = lean_name_mk_string(x_1518, x_1761);
x_1763 = lean_mk_string("|");
lean_inc(x_1737);
x_1764 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1764, 0, x_1737);
lean_ctor_set(x_1764, 1, x_1763);
lean_inc(x_14);
lean_inc(x_1754);
x_1765 = lean_array_push(x_1754, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1766 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1766 = lean_box(0);
}
lean_inc(x_1744);
if (lean_is_scalar(x_1766)) {
 x_1767 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1767 = x_1766;
}
lean_ctor_set(x_1767, 0, x_1744);
lean_ctor_set(x_1767, 1, x_1765);
x_1768 = lean_mk_string("=>");
x_1769 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1769, 0, x_1737);
lean_ctor_set(x_1769, 1, x_1768);
x_1770 = lean_unsigned_to_nat(4u);
x_1771 = lean_mk_empty_array_with_capacity(x_1770);
x_1772 = lean_array_push(x_1771, x_1764);
x_1773 = lean_array_push(x_1772, x_1767);
x_1774 = lean_array_push(x_1773, x_1769);
x_1775 = lean_array_push(x_1774, x_1734);
x_1776 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1776, 0, x_1762);
lean_ctor_set(x_1776, 1, x_1775);
lean_inc(x_1754);
x_1777 = lean_array_push(x_1754, x_1776);
x_1778 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1778, 0, x_1744);
lean_ctor_set(x_1778, 1, x_1777);
x_1779 = lean_array_push(x_1754, x_1778);
x_1780 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1780, 0, x_1760);
lean_ctor_set(x_1780, 1, x_1779);
x_1781 = lean_unsigned_to_nat(6u);
x_1782 = lean_mk_empty_array_with_capacity(x_1781);
x_1783 = lean_array_push(x_1782, x_1742);
lean_inc(x_1746);
x_1784 = lean_array_push(x_1783, x_1746);
x_1785 = lean_array_push(x_1784, x_1756);
x_1786 = lean_array_push(x_1785, x_1746);
x_1787 = lean_array_push(x_1786, x_1758);
x_1788 = lean_array_push(x_1787, x_1780);
x_1789 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1789, 0, x_1741);
lean_ctor_set(x_1789, 1, x_1788);
x_1790 = 1;
x_1791 = lean_box(x_1790);
if (lean_is_scalar(x_1735)) {
 x_1792 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1792 = x_1735;
}
lean_ctor_set(x_1792, 0, x_1789);
lean_ctor_set(x_1792, 1, x_1791);
x_1793 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1793, 0, x_1733);
lean_ctor_set(x_1793, 1, x_1792);
if (lean_is_scalar(x_1739)) {
 x_1794 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1794 = x_1739;
}
lean_ctor_set(x_1794, 0, x_1793);
lean_ctor_set(x_1794, 1, x_1738);
return x_1794;
}
}
else
{
lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; 
x_1795 = l_Lean_Syntax_getArg(x_1513, x_1506);
lean_dec(x_1513);
lean_inc(x_5);
x_1796 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(x_1510, x_5, x_6);
x_1797 = lean_ctor_get(x_1796, 0);
lean_inc(x_1797);
if (lean_obj_tag(x_1797) == 0)
{
lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; uint8_t x_1810; 
lean_dec(x_1795);
x_1798 = lean_ctor_get(x_1796, 1);
lean_inc(x_1798);
lean_dec(x_1796);
lean_inc(x_5);
x_1799 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_1798);
x_1800 = lean_ctor_get(x_1799, 0);
lean_inc(x_1800);
x_1801 = lean_ctor_get(x_1799, 1);
lean_inc(x_1801);
lean_dec(x_1799);
x_1802 = lean_nat_add(x_3, x_1506);
lean_dec(x_3);
x_1803 = l_Lean_mkHole(x_14);
lean_inc(x_1800);
x_1804 = l_Lean_Elab_Term_mkExplicitBinder(x_1800, x_1803);
x_1805 = lean_array_push(x_4, x_1804);
lean_inc(x_5);
x_1806 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1802, x_1805, x_5, x_1801);
x_1807 = lean_ctor_get(x_1806, 0);
lean_inc(x_1807);
x_1808 = lean_ctor_get(x_1807, 1);
lean_inc(x_1808);
x_1809 = lean_ctor_get(x_1806, 1);
lean_inc(x_1809);
lean_dec(x_1806);
x_1810 = !lean_is_exclusive(x_1807);
if (x_1810 == 0)
{
lean_object* x_1811; uint8_t x_1812; 
x_1811 = lean_ctor_get(x_1807, 1);
lean_dec(x_1811);
x_1812 = !lean_is_exclusive(x_1808);
if (x_1812 == 0)
{
lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; uint8_t x_1816; 
x_1813 = lean_ctor_get(x_1808, 0);
x_1814 = lean_ctor_get(x_1808, 1);
lean_dec(x_1814);
x_1815 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1809);
lean_dec(x_5);
x_1816 = !lean_is_exclusive(x_1815);
if (x_1816 == 0)
{
lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; lean_object* x_1839; lean_object* x_1840; lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; uint8_t x_1844; 
x_1817 = lean_ctor_get(x_1815, 0);
x_1818 = lean_mk_string("match");
lean_inc(x_1818);
lean_inc(x_1518);
x_1819 = lean_name_mk_string(x_1518, x_1818);
lean_inc(x_1817);
x_1820 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1820, 0, x_1817);
lean_ctor_set(x_1820, 1, x_1818);
x_1821 = lean_mk_string("null");
x_1822 = lean_name_mk_string(x_1515, x_1821);
x_1823 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1822);
x_1824 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1824, 0, x_1822);
lean_ctor_set(x_1824, 1, x_1823);
x_1825 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1826 = lean_name_mk_string(x_1518, x_1825);
x_1827 = lean_unsigned_to_nat(2u);
x_1828 = lean_mk_empty_array_with_capacity(x_1827);
lean_inc(x_1824);
x_1829 = lean_array_push(x_1828, x_1824);
x_1830 = lean_array_push(x_1829, x_1800);
x_1831 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1831, 0, x_1826);
lean_ctor_set(x_1831, 1, x_1830);
x_1832 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1832);
x_1833 = lean_array_push(x_1832, x_1831);
lean_inc(x_1822);
x_1834 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1834, 0, x_1822);
lean_ctor_set(x_1834, 1, x_1833);
x_1835 = lean_mk_string("with");
lean_inc(x_1817);
x_1836 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1836, 0, x_1817);
lean_ctor_set(x_1836, 1, x_1835);
x_1837 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1838 = lean_name_mk_string(x_1518, x_1837);
x_1839 = lean_mk_string("matchAlt");
x_1840 = lean_name_mk_string(x_1518, x_1839);
x_1841 = lean_mk_string("|");
lean_inc(x_1817);
x_1842 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1842, 0, x_1817);
lean_ctor_set(x_1842, 1, x_1841);
lean_inc(x_14);
lean_inc(x_1832);
x_1843 = lean_array_push(x_1832, x_14);
x_1844 = !lean_is_exclusive(x_14);
if (x_1844 == 0)
{
lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; lean_object* x_1848; lean_object* x_1849; lean_object* x_1850; lean_object* x_1851; lean_object* x_1852; lean_object* x_1853; lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; lean_object* x_1868; uint8_t x_1869; lean_object* x_1870; 
x_1845 = lean_ctor_get(x_14, 1);
lean_dec(x_1845);
x_1846 = lean_ctor_get(x_14, 0);
lean_dec(x_1846);
lean_inc(x_1822);
lean_ctor_set(x_14, 1, x_1843);
lean_ctor_set(x_14, 0, x_1822);
x_1847 = lean_mk_string("=>");
x_1848 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1848, 0, x_1817);
lean_ctor_set(x_1848, 1, x_1847);
x_1849 = lean_unsigned_to_nat(4u);
x_1850 = lean_mk_empty_array_with_capacity(x_1849);
x_1851 = lean_array_push(x_1850, x_1842);
x_1852 = lean_array_push(x_1851, x_14);
x_1853 = lean_array_push(x_1852, x_1848);
x_1854 = lean_array_push(x_1853, x_1813);
x_1855 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1855, 0, x_1840);
lean_ctor_set(x_1855, 1, x_1854);
lean_inc(x_1832);
x_1856 = lean_array_push(x_1832, x_1855);
x_1857 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1857, 0, x_1822);
lean_ctor_set(x_1857, 1, x_1856);
x_1858 = lean_array_push(x_1832, x_1857);
x_1859 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1859, 0, x_1838);
lean_ctor_set(x_1859, 1, x_1858);
x_1860 = lean_unsigned_to_nat(6u);
x_1861 = lean_mk_empty_array_with_capacity(x_1860);
x_1862 = lean_array_push(x_1861, x_1820);
lean_inc(x_1824);
x_1863 = lean_array_push(x_1862, x_1824);
x_1864 = lean_array_push(x_1863, x_1834);
x_1865 = lean_array_push(x_1864, x_1824);
x_1866 = lean_array_push(x_1865, x_1836);
x_1867 = lean_array_push(x_1866, x_1859);
x_1868 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1868, 0, x_1819);
lean_ctor_set(x_1868, 1, x_1867);
x_1869 = 1;
x_1870 = lean_box(x_1869);
lean_ctor_set(x_1808, 1, x_1870);
lean_ctor_set(x_1808, 0, x_1868);
lean_ctor_set(x_1815, 0, x_1807);
return x_1815;
}
else
{
lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; lean_object* x_1874; lean_object* x_1875; lean_object* x_1876; lean_object* x_1877; lean_object* x_1878; lean_object* x_1879; lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; lean_object* x_1886; lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; lean_object* x_1892; lean_object* x_1893; uint8_t x_1894; lean_object* x_1895; 
lean_dec(x_14);
lean_inc(x_1822);
x_1871 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1871, 0, x_1822);
lean_ctor_set(x_1871, 1, x_1843);
x_1872 = lean_mk_string("=>");
x_1873 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1873, 0, x_1817);
lean_ctor_set(x_1873, 1, x_1872);
x_1874 = lean_unsigned_to_nat(4u);
x_1875 = lean_mk_empty_array_with_capacity(x_1874);
x_1876 = lean_array_push(x_1875, x_1842);
x_1877 = lean_array_push(x_1876, x_1871);
x_1878 = lean_array_push(x_1877, x_1873);
x_1879 = lean_array_push(x_1878, x_1813);
x_1880 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1880, 0, x_1840);
lean_ctor_set(x_1880, 1, x_1879);
lean_inc(x_1832);
x_1881 = lean_array_push(x_1832, x_1880);
x_1882 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1882, 0, x_1822);
lean_ctor_set(x_1882, 1, x_1881);
x_1883 = lean_array_push(x_1832, x_1882);
x_1884 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1884, 0, x_1838);
lean_ctor_set(x_1884, 1, x_1883);
x_1885 = lean_unsigned_to_nat(6u);
x_1886 = lean_mk_empty_array_with_capacity(x_1885);
x_1887 = lean_array_push(x_1886, x_1820);
lean_inc(x_1824);
x_1888 = lean_array_push(x_1887, x_1824);
x_1889 = lean_array_push(x_1888, x_1834);
x_1890 = lean_array_push(x_1889, x_1824);
x_1891 = lean_array_push(x_1890, x_1836);
x_1892 = lean_array_push(x_1891, x_1884);
x_1893 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1893, 0, x_1819);
lean_ctor_set(x_1893, 1, x_1892);
x_1894 = 1;
x_1895 = lean_box(x_1894);
lean_ctor_set(x_1808, 1, x_1895);
lean_ctor_set(x_1808, 0, x_1893);
lean_ctor_set(x_1815, 0, x_1807);
return x_1815;
}
}
else
{
lean_object* x_1896; lean_object* x_1897; lean_object* x_1898; lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; lean_object* x_1903; lean_object* x_1904; lean_object* x_1905; lean_object* x_1906; lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; lean_object* x_1910; lean_object* x_1911; lean_object* x_1912; lean_object* x_1913; lean_object* x_1914; lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; lean_object* x_1923; lean_object* x_1924; lean_object* x_1925; lean_object* x_1926; lean_object* x_1927; lean_object* x_1928; lean_object* x_1929; lean_object* x_1930; lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; lean_object* x_1936; lean_object* x_1937; lean_object* x_1938; lean_object* x_1939; lean_object* x_1940; lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; lean_object* x_1944; lean_object* x_1945; lean_object* x_1946; lean_object* x_1947; uint8_t x_1948; lean_object* x_1949; lean_object* x_1950; 
x_1896 = lean_ctor_get(x_1815, 0);
x_1897 = lean_ctor_get(x_1815, 1);
lean_inc(x_1897);
lean_inc(x_1896);
lean_dec(x_1815);
x_1898 = lean_mk_string("match");
lean_inc(x_1898);
lean_inc(x_1518);
x_1899 = lean_name_mk_string(x_1518, x_1898);
lean_inc(x_1896);
x_1900 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1900, 0, x_1896);
lean_ctor_set(x_1900, 1, x_1898);
x_1901 = lean_mk_string("null");
x_1902 = lean_name_mk_string(x_1515, x_1901);
x_1903 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1902);
x_1904 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1904, 0, x_1902);
lean_ctor_set(x_1904, 1, x_1903);
x_1905 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1906 = lean_name_mk_string(x_1518, x_1905);
x_1907 = lean_unsigned_to_nat(2u);
x_1908 = lean_mk_empty_array_with_capacity(x_1907);
lean_inc(x_1904);
x_1909 = lean_array_push(x_1908, x_1904);
x_1910 = lean_array_push(x_1909, x_1800);
x_1911 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1911, 0, x_1906);
lean_ctor_set(x_1911, 1, x_1910);
x_1912 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1912);
x_1913 = lean_array_push(x_1912, x_1911);
lean_inc(x_1902);
x_1914 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1914, 0, x_1902);
lean_ctor_set(x_1914, 1, x_1913);
x_1915 = lean_mk_string("with");
lean_inc(x_1896);
x_1916 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1916, 0, x_1896);
lean_ctor_set(x_1916, 1, x_1915);
x_1917 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1918 = lean_name_mk_string(x_1518, x_1917);
x_1919 = lean_mk_string("matchAlt");
x_1920 = lean_name_mk_string(x_1518, x_1919);
x_1921 = lean_mk_string("|");
lean_inc(x_1896);
x_1922 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1922, 0, x_1896);
lean_ctor_set(x_1922, 1, x_1921);
lean_inc(x_14);
lean_inc(x_1912);
x_1923 = lean_array_push(x_1912, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1924 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1924 = lean_box(0);
}
lean_inc(x_1902);
if (lean_is_scalar(x_1924)) {
 x_1925 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1925 = x_1924;
}
lean_ctor_set(x_1925, 0, x_1902);
lean_ctor_set(x_1925, 1, x_1923);
x_1926 = lean_mk_string("=>");
x_1927 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1927, 0, x_1896);
lean_ctor_set(x_1927, 1, x_1926);
x_1928 = lean_unsigned_to_nat(4u);
x_1929 = lean_mk_empty_array_with_capacity(x_1928);
x_1930 = lean_array_push(x_1929, x_1922);
x_1931 = lean_array_push(x_1930, x_1925);
x_1932 = lean_array_push(x_1931, x_1927);
x_1933 = lean_array_push(x_1932, x_1813);
x_1934 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1934, 0, x_1920);
lean_ctor_set(x_1934, 1, x_1933);
lean_inc(x_1912);
x_1935 = lean_array_push(x_1912, x_1934);
x_1936 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1936, 0, x_1902);
lean_ctor_set(x_1936, 1, x_1935);
x_1937 = lean_array_push(x_1912, x_1936);
x_1938 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1938, 0, x_1918);
lean_ctor_set(x_1938, 1, x_1937);
x_1939 = lean_unsigned_to_nat(6u);
x_1940 = lean_mk_empty_array_with_capacity(x_1939);
x_1941 = lean_array_push(x_1940, x_1900);
lean_inc(x_1904);
x_1942 = lean_array_push(x_1941, x_1904);
x_1943 = lean_array_push(x_1942, x_1914);
x_1944 = lean_array_push(x_1943, x_1904);
x_1945 = lean_array_push(x_1944, x_1916);
x_1946 = lean_array_push(x_1945, x_1938);
x_1947 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1947, 0, x_1899);
lean_ctor_set(x_1947, 1, x_1946);
x_1948 = 1;
x_1949 = lean_box(x_1948);
lean_ctor_set(x_1808, 1, x_1949);
lean_ctor_set(x_1808, 0, x_1947);
x_1950 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1950, 0, x_1807);
lean_ctor_set(x_1950, 1, x_1897);
return x_1950;
}
}
else
{
lean_object* x_1951; lean_object* x_1952; lean_object* x_1953; lean_object* x_1954; lean_object* x_1955; lean_object* x_1956; lean_object* x_1957; lean_object* x_1958; lean_object* x_1959; lean_object* x_1960; lean_object* x_1961; lean_object* x_1962; lean_object* x_1963; lean_object* x_1964; lean_object* x_1965; lean_object* x_1966; lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; lean_object* x_1975; lean_object* x_1976; lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; lean_object* x_1980; lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; lean_object* x_1985; lean_object* x_1986; lean_object* x_1987; lean_object* x_1988; lean_object* x_1989; lean_object* x_1990; lean_object* x_1991; lean_object* x_1992; lean_object* x_1993; lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; lean_object* x_1997; lean_object* x_1998; lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; lean_object* x_2002; lean_object* x_2003; lean_object* x_2004; lean_object* x_2005; uint8_t x_2006; lean_object* x_2007; lean_object* x_2008; lean_object* x_2009; 
x_1951 = lean_ctor_get(x_1808, 0);
lean_inc(x_1951);
lean_dec(x_1808);
x_1952 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1809);
lean_dec(x_5);
x_1953 = lean_ctor_get(x_1952, 0);
lean_inc(x_1953);
x_1954 = lean_ctor_get(x_1952, 1);
lean_inc(x_1954);
if (lean_is_exclusive(x_1952)) {
 lean_ctor_release(x_1952, 0);
 lean_ctor_release(x_1952, 1);
 x_1955 = x_1952;
} else {
 lean_dec_ref(x_1952);
 x_1955 = lean_box(0);
}
x_1956 = lean_mk_string("match");
lean_inc(x_1956);
lean_inc(x_1518);
x_1957 = lean_name_mk_string(x_1518, x_1956);
lean_inc(x_1953);
x_1958 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1958, 0, x_1953);
lean_ctor_set(x_1958, 1, x_1956);
x_1959 = lean_mk_string("null");
x_1960 = lean_name_mk_string(x_1515, x_1959);
x_1961 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_1960);
x_1962 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1962, 0, x_1960);
lean_ctor_set(x_1962, 1, x_1961);
x_1963 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_1964 = lean_name_mk_string(x_1518, x_1963);
x_1965 = lean_unsigned_to_nat(2u);
x_1966 = lean_mk_empty_array_with_capacity(x_1965);
lean_inc(x_1962);
x_1967 = lean_array_push(x_1966, x_1962);
x_1968 = lean_array_push(x_1967, x_1800);
x_1969 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1969, 0, x_1964);
lean_ctor_set(x_1969, 1, x_1968);
x_1970 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_1970);
x_1971 = lean_array_push(x_1970, x_1969);
lean_inc(x_1960);
x_1972 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1972, 0, x_1960);
lean_ctor_set(x_1972, 1, x_1971);
x_1973 = lean_mk_string("with");
lean_inc(x_1953);
x_1974 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1974, 0, x_1953);
lean_ctor_set(x_1974, 1, x_1973);
x_1975 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_1976 = lean_name_mk_string(x_1518, x_1975);
x_1977 = lean_mk_string("matchAlt");
x_1978 = lean_name_mk_string(x_1518, x_1977);
x_1979 = lean_mk_string("|");
lean_inc(x_1953);
x_1980 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1980, 0, x_1953);
lean_ctor_set(x_1980, 1, x_1979);
lean_inc(x_14);
lean_inc(x_1970);
x_1981 = lean_array_push(x_1970, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1982 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1982 = lean_box(0);
}
lean_inc(x_1960);
if (lean_is_scalar(x_1982)) {
 x_1983 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1983 = x_1982;
}
lean_ctor_set(x_1983, 0, x_1960);
lean_ctor_set(x_1983, 1, x_1981);
x_1984 = lean_mk_string("=>");
x_1985 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1985, 0, x_1953);
lean_ctor_set(x_1985, 1, x_1984);
x_1986 = lean_unsigned_to_nat(4u);
x_1987 = lean_mk_empty_array_with_capacity(x_1986);
x_1988 = lean_array_push(x_1987, x_1980);
x_1989 = lean_array_push(x_1988, x_1983);
x_1990 = lean_array_push(x_1989, x_1985);
x_1991 = lean_array_push(x_1990, x_1951);
x_1992 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1992, 0, x_1978);
lean_ctor_set(x_1992, 1, x_1991);
lean_inc(x_1970);
x_1993 = lean_array_push(x_1970, x_1992);
x_1994 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1994, 0, x_1960);
lean_ctor_set(x_1994, 1, x_1993);
x_1995 = lean_array_push(x_1970, x_1994);
x_1996 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1996, 0, x_1976);
lean_ctor_set(x_1996, 1, x_1995);
x_1997 = lean_unsigned_to_nat(6u);
x_1998 = lean_mk_empty_array_with_capacity(x_1997);
x_1999 = lean_array_push(x_1998, x_1958);
lean_inc(x_1962);
x_2000 = lean_array_push(x_1999, x_1962);
x_2001 = lean_array_push(x_2000, x_1972);
x_2002 = lean_array_push(x_2001, x_1962);
x_2003 = lean_array_push(x_2002, x_1974);
x_2004 = lean_array_push(x_2003, x_1996);
x_2005 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2005, 0, x_1957);
lean_ctor_set(x_2005, 1, x_2004);
x_2006 = 1;
x_2007 = lean_box(x_2006);
x_2008 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2008, 0, x_2005);
lean_ctor_set(x_2008, 1, x_2007);
lean_ctor_set(x_1807, 1, x_2008);
if (lean_is_scalar(x_1955)) {
 x_2009 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2009 = x_1955;
}
lean_ctor_set(x_2009, 0, x_1807);
lean_ctor_set(x_2009, 1, x_1954);
return x_2009;
}
}
else
{
lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; lean_object* x_2014; lean_object* x_2015; lean_object* x_2016; lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; lean_object* x_2023; lean_object* x_2024; lean_object* x_2025; lean_object* x_2026; lean_object* x_2027; lean_object* x_2028; lean_object* x_2029; lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; lean_object* x_2039; lean_object* x_2040; lean_object* x_2041; lean_object* x_2042; lean_object* x_2043; lean_object* x_2044; lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; lean_object* x_2048; lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; lean_object* x_2052; lean_object* x_2053; lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; lean_object* x_2058; lean_object* x_2059; lean_object* x_2060; lean_object* x_2061; lean_object* x_2062; lean_object* x_2063; lean_object* x_2064; lean_object* x_2065; lean_object* x_2066; uint8_t x_2067; lean_object* x_2068; lean_object* x_2069; lean_object* x_2070; lean_object* x_2071; 
x_2010 = lean_ctor_get(x_1807, 0);
lean_inc(x_2010);
lean_dec(x_1807);
x_2011 = lean_ctor_get(x_1808, 0);
lean_inc(x_2011);
if (lean_is_exclusive(x_1808)) {
 lean_ctor_release(x_1808, 0);
 lean_ctor_release(x_1808, 1);
 x_2012 = x_1808;
} else {
 lean_dec_ref(x_1808);
 x_2012 = lean_box(0);
}
x_2013 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1809);
lean_dec(x_5);
x_2014 = lean_ctor_get(x_2013, 0);
lean_inc(x_2014);
x_2015 = lean_ctor_get(x_2013, 1);
lean_inc(x_2015);
if (lean_is_exclusive(x_2013)) {
 lean_ctor_release(x_2013, 0);
 lean_ctor_release(x_2013, 1);
 x_2016 = x_2013;
} else {
 lean_dec_ref(x_2013);
 x_2016 = lean_box(0);
}
x_2017 = lean_mk_string("match");
lean_inc(x_2017);
lean_inc(x_1518);
x_2018 = lean_name_mk_string(x_1518, x_2017);
lean_inc(x_2014);
x_2019 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2019, 0, x_2014);
lean_ctor_set(x_2019, 1, x_2017);
x_2020 = lean_mk_string("null");
x_2021 = lean_name_mk_string(x_1515, x_2020);
x_2022 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_2021);
x_2023 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2023, 0, x_2021);
lean_ctor_set(x_2023, 1, x_2022);
x_2024 = lean_mk_string("matchDiscr");
lean_inc(x_1518);
x_2025 = lean_name_mk_string(x_1518, x_2024);
x_2026 = lean_unsigned_to_nat(2u);
x_2027 = lean_mk_empty_array_with_capacity(x_2026);
lean_inc(x_2023);
x_2028 = lean_array_push(x_2027, x_2023);
x_2029 = lean_array_push(x_2028, x_1800);
x_2030 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2030, 0, x_2025);
lean_ctor_set(x_2030, 1, x_2029);
x_2031 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2031);
x_2032 = lean_array_push(x_2031, x_2030);
lean_inc(x_2021);
x_2033 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2033, 0, x_2021);
lean_ctor_set(x_2033, 1, x_2032);
x_2034 = lean_mk_string("with");
lean_inc(x_2014);
x_2035 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2035, 0, x_2014);
lean_ctor_set(x_2035, 1, x_2034);
x_2036 = lean_mk_string("matchAlts");
lean_inc(x_1518);
x_2037 = lean_name_mk_string(x_1518, x_2036);
x_2038 = lean_mk_string("matchAlt");
x_2039 = lean_name_mk_string(x_1518, x_2038);
x_2040 = lean_mk_string("|");
lean_inc(x_2014);
x_2041 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2041, 0, x_2014);
lean_ctor_set(x_2041, 1, x_2040);
lean_inc(x_14);
lean_inc(x_2031);
x_2042 = lean_array_push(x_2031, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2043 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2043 = lean_box(0);
}
lean_inc(x_2021);
if (lean_is_scalar(x_2043)) {
 x_2044 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2044 = x_2043;
}
lean_ctor_set(x_2044, 0, x_2021);
lean_ctor_set(x_2044, 1, x_2042);
x_2045 = lean_mk_string("=>");
x_2046 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2046, 0, x_2014);
lean_ctor_set(x_2046, 1, x_2045);
x_2047 = lean_unsigned_to_nat(4u);
x_2048 = lean_mk_empty_array_with_capacity(x_2047);
x_2049 = lean_array_push(x_2048, x_2041);
x_2050 = lean_array_push(x_2049, x_2044);
x_2051 = lean_array_push(x_2050, x_2046);
x_2052 = lean_array_push(x_2051, x_2011);
x_2053 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2053, 0, x_2039);
lean_ctor_set(x_2053, 1, x_2052);
lean_inc(x_2031);
x_2054 = lean_array_push(x_2031, x_2053);
x_2055 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2055, 0, x_2021);
lean_ctor_set(x_2055, 1, x_2054);
x_2056 = lean_array_push(x_2031, x_2055);
x_2057 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2057, 0, x_2037);
lean_ctor_set(x_2057, 1, x_2056);
x_2058 = lean_unsigned_to_nat(6u);
x_2059 = lean_mk_empty_array_with_capacity(x_2058);
x_2060 = lean_array_push(x_2059, x_2019);
lean_inc(x_2023);
x_2061 = lean_array_push(x_2060, x_2023);
x_2062 = lean_array_push(x_2061, x_2033);
x_2063 = lean_array_push(x_2062, x_2023);
x_2064 = lean_array_push(x_2063, x_2035);
x_2065 = lean_array_push(x_2064, x_2057);
x_2066 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2066, 0, x_2018);
lean_ctor_set(x_2066, 1, x_2065);
x_2067 = 1;
x_2068 = lean_box(x_2067);
if (lean_is_scalar(x_2012)) {
 x_2069 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2069 = x_2012;
}
lean_ctor_set(x_2069, 0, x_2066);
lean_ctor_set(x_2069, 1, x_2068);
x_2070 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2070, 0, x_2010);
lean_ctor_set(x_2070, 1, x_2069);
if (lean_is_scalar(x_2016)) {
 x_2071 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2071 = x_2016;
}
lean_ctor_set(x_2071, 0, x_2070);
lean_ctor_set(x_2071, 1, x_2015);
return x_2071;
}
}
else
{
lean_object* x_2072; lean_object* x_2073; lean_object* x_2074; lean_object* x_2075; size_t x_2076; size_t x_2077; lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; 
lean_dec(x_1518);
lean_dec(x_14);
x_2072 = lean_ctor_get(x_1796, 1);
lean_inc(x_2072);
lean_dec(x_1796);
x_2073 = lean_ctor_get(x_1797, 0);
lean_inc(x_2073);
lean_dec(x_1797);
x_2074 = lean_nat_add(x_3, x_1506);
lean_dec(x_3);
x_2075 = lean_array_get_size(x_2073);
x_2076 = lean_usize_of_nat(x_2075);
lean_dec(x_2075);
x_2077 = 0;
x_2078 = x_2073;
x_2079 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(x_1795, x_2076, x_2077, x_2078);
x_2080 = x_2079;
x_2081 = l_Array_append___rarg(x_4, x_2080);
lean_dec(x_2080);
x_3 = x_2074;
x_4 = x_2081;
x_6 = x_2072;
goto _start;
}
}
}
else
{
lean_object* x_2083; lean_object* x_2084; lean_object* x_2085; lean_object* x_2086; lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; lean_object* x_2093; uint8_t x_2094; 
lean_dec(x_1511);
lean_dec(x_1510);
lean_inc(x_5);
x_2083 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2084 = lean_ctor_get(x_2083, 0);
lean_inc(x_2084);
x_2085 = lean_ctor_get(x_2083, 1);
lean_inc(x_2085);
lean_dec(x_2083);
x_2086 = lean_nat_add(x_3, x_1506);
lean_dec(x_3);
x_2087 = l_Lean_mkHole(x_14);
lean_inc(x_2084);
x_2088 = l_Lean_Elab_Term_mkExplicitBinder(x_2084, x_2087);
x_2089 = lean_array_push(x_4, x_2088);
lean_inc(x_5);
x_2090 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2086, x_2089, x_5, x_2085);
x_2091 = lean_ctor_get(x_2090, 0);
lean_inc(x_2091);
x_2092 = lean_ctor_get(x_2091, 1);
lean_inc(x_2092);
x_2093 = lean_ctor_get(x_2090, 1);
lean_inc(x_2093);
lean_dec(x_2090);
x_2094 = !lean_is_exclusive(x_2091);
if (x_2094 == 0)
{
lean_object* x_2095; uint8_t x_2096; 
x_2095 = lean_ctor_get(x_2091, 1);
lean_dec(x_2095);
x_2096 = !lean_is_exclusive(x_2092);
if (x_2096 == 0)
{
lean_object* x_2097; lean_object* x_2098; lean_object* x_2099; uint8_t x_2100; 
x_2097 = lean_ctor_get(x_2092, 0);
x_2098 = lean_ctor_get(x_2092, 1);
lean_dec(x_2098);
x_2099 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2093);
lean_dec(x_5);
x_2100 = !lean_is_exclusive(x_2099);
if (x_2100 == 0)
{
lean_object* x_2101; lean_object* x_2102; lean_object* x_2103; lean_object* x_2104; lean_object* x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; lean_object* x_2109; lean_object* x_2110; lean_object* x_2111; lean_object* x_2112; lean_object* x_2113; lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; lean_object* x_2117; lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; lean_object* x_2121; lean_object* x_2122; lean_object* x_2123; lean_object* x_2124; lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; lean_object* x_2128; lean_object* x_2129; lean_object* x_2130; lean_object* x_2131; uint8_t x_2132; 
x_2101 = lean_ctor_get(x_2099, 0);
x_2102 = lean_box(0);
x_2103 = lean_name_mk_string(x_2102, x_300);
x_2104 = lean_name_mk_string(x_2103, x_604);
x_2105 = lean_name_mk_string(x_2104, x_904);
x_2106 = lean_mk_string("match");
lean_inc(x_2106);
lean_inc(x_2105);
x_2107 = lean_name_mk_string(x_2105, x_2106);
lean_inc(x_2101);
x_2108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2108, 0, x_2101);
lean_ctor_set(x_2108, 1, x_2106);
x_2109 = lean_mk_string("null");
x_2110 = lean_name_mk_string(x_2102, x_2109);
x_2111 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_2110);
x_2112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2112, 0, x_2110);
lean_ctor_set(x_2112, 1, x_2111);
x_2113 = lean_mk_string("matchDiscr");
lean_inc(x_2105);
x_2114 = lean_name_mk_string(x_2105, x_2113);
x_2115 = lean_unsigned_to_nat(2u);
x_2116 = lean_mk_empty_array_with_capacity(x_2115);
lean_inc(x_2112);
x_2117 = lean_array_push(x_2116, x_2112);
x_2118 = lean_array_push(x_2117, x_2084);
x_2119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2119, 0, x_2114);
lean_ctor_set(x_2119, 1, x_2118);
x_2120 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2120);
x_2121 = lean_array_push(x_2120, x_2119);
lean_inc(x_2110);
x_2122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2122, 0, x_2110);
lean_ctor_set(x_2122, 1, x_2121);
x_2123 = lean_mk_string("with");
lean_inc(x_2101);
x_2124 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2124, 0, x_2101);
lean_ctor_set(x_2124, 1, x_2123);
x_2125 = lean_mk_string("matchAlts");
lean_inc(x_2105);
x_2126 = lean_name_mk_string(x_2105, x_2125);
x_2127 = lean_mk_string("matchAlt");
x_2128 = lean_name_mk_string(x_2105, x_2127);
x_2129 = lean_mk_string("|");
lean_inc(x_2101);
x_2130 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2130, 0, x_2101);
lean_ctor_set(x_2130, 1, x_2129);
lean_inc(x_14);
lean_inc(x_2120);
x_2131 = lean_array_push(x_2120, x_14);
x_2132 = !lean_is_exclusive(x_14);
if (x_2132 == 0)
{
lean_object* x_2133; lean_object* x_2134; lean_object* x_2135; lean_object* x_2136; lean_object* x_2137; lean_object* x_2138; lean_object* x_2139; lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; lean_object* x_2145; lean_object* x_2146; lean_object* x_2147; lean_object* x_2148; lean_object* x_2149; lean_object* x_2150; lean_object* x_2151; lean_object* x_2152; lean_object* x_2153; lean_object* x_2154; lean_object* x_2155; lean_object* x_2156; uint8_t x_2157; lean_object* x_2158; 
x_2133 = lean_ctor_get(x_14, 1);
lean_dec(x_2133);
x_2134 = lean_ctor_get(x_14, 0);
lean_dec(x_2134);
lean_inc(x_2110);
lean_ctor_set(x_14, 1, x_2131);
lean_ctor_set(x_14, 0, x_2110);
x_2135 = lean_mk_string("=>");
x_2136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2136, 0, x_2101);
lean_ctor_set(x_2136, 1, x_2135);
x_2137 = lean_unsigned_to_nat(4u);
x_2138 = lean_mk_empty_array_with_capacity(x_2137);
x_2139 = lean_array_push(x_2138, x_2130);
x_2140 = lean_array_push(x_2139, x_14);
x_2141 = lean_array_push(x_2140, x_2136);
x_2142 = lean_array_push(x_2141, x_2097);
x_2143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2143, 0, x_2128);
lean_ctor_set(x_2143, 1, x_2142);
lean_inc(x_2120);
x_2144 = lean_array_push(x_2120, x_2143);
x_2145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2145, 0, x_2110);
lean_ctor_set(x_2145, 1, x_2144);
x_2146 = lean_array_push(x_2120, x_2145);
x_2147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2147, 0, x_2126);
lean_ctor_set(x_2147, 1, x_2146);
x_2148 = lean_unsigned_to_nat(6u);
x_2149 = lean_mk_empty_array_with_capacity(x_2148);
x_2150 = lean_array_push(x_2149, x_2108);
lean_inc(x_2112);
x_2151 = lean_array_push(x_2150, x_2112);
x_2152 = lean_array_push(x_2151, x_2122);
x_2153 = lean_array_push(x_2152, x_2112);
x_2154 = lean_array_push(x_2153, x_2124);
x_2155 = lean_array_push(x_2154, x_2147);
x_2156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2156, 0, x_2107);
lean_ctor_set(x_2156, 1, x_2155);
x_2157 = 1;
x_2158 = lean_box(x_2157);
lean_ctor_set(x_2092, 1, x_2158);
lean_ctor_set(x_2092, 0, x_2156);
lean_ctor_set(x_2099, 0, x_2091);
return x_2099;
}
else
{
lean_object* x_2159; lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; lean_object* x_2163; lean_object* x_2164; lean_object* x_2165; lean_object* x_2166; lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; lean_object* x_2170; lean_object* x_2171; lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; lean_object* x_2175; lean_object* x_2176; lean_object* x_2177; lean_object* x_2178; lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; uint8_t x_2182; lean_object* x_2183; 
lean_dec(x_14);
lean_inc(x_2110);
x_2159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2159, 0, x_2110);
lean_ctor_set(x_2159, 1, x_2131);
x_2160 = lean_mk_string("=>");
x_2161 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2161, 0, x_2101);
lean_ctor_set(x_2161, 1, x_2160);
x_2162 = lean_unsigned_to_nat(4u);
x_2163 = lean_mk_empty_array_with_capacity(x_2162);
x_2164 = lean_array_push(x_2163, x_2130);
x_2165 = lean_array_push(x_2164, x_2159);
x_2166 = lean_array_push(x_2165, x_2161);
x_2167 = lean_array_push(x_2166, x_2097);
x_2168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2168, 0, x_2128);
lean_ctor_set(x_2168, 1, x_2167);
lean_inc(x_2120);
x_2169 = lean_array_push(x_2120, x_2168);
x_2170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2170, 0, x_2110);
lean_ctor_set(x_2170, 1, x_2169);
x_2171 = lean_array_push(x_2120, x_2170);
x_2172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2172, 0, x_2126);
lean_ctor_set(x_2172, 1, x_2171);
x_2173 = lean_unsigned_to_nat(6u);
x_2174 = lean_mk_empty_array_with_capacity(x_2173);
x_2175 = lean_array_push(x_2174, x_2108);
lean_inc(x_2112);
x_2176 = lean_array_push(x_2175, x_2112);
x_2177 = lean_array_push(x_2176, x_2122);
x_2178 = lean_array_push(x_2177, x_2112);
x_2179 = lean_array_push(x_2178, x_2124);
x_2180 = lean_array_push(x_2179, x_2172);
x_2181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2181, 0, x_2107);
lean_ctor_set(x_2181, 1, x_2180);
x_2182 = 1;
x_2183 = lean_box(x_2182);
lean_ctor_set(x_2092, 1, x_2183);
lean_ctor_set(x_2092, 0, x_2181);
lean_ctor_set(x_2099, 0, x_2091);
return x_2099;
}
}
else
{
lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; lean_object* x_2187; lean_object* x_2188; lean_object* x_2189; lean_object* x_2190; lean_object* x_2191; lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; lean_object* x_2198; lean_object* x_2199; lean_object* x_2200; lean_object* x_2201; lean_object* x_2202; lean_object* x_2203; lean_object* x_2204; lean_object* x_2205; lean_object* x_2206; lean_object* x_2207; lean_object* x_2208; lean_object* x_2209; lean_object* x_2210; lean_object* x_2211; lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2216; lean_object* x_2217; lean_object* x_2218; lean_object* x_2219; lean_object* x_2220; lean_object* x_2221; lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; lean_object* x_2225; lean_object* x_2226; lean_object* x_2227; lean_object* x_2228; lean_object* x_2229; lean_object* x_2230; lean_object* x_2231; lean_object* x_2232; lean_object* x_2233; lean_object* x_2234; lean_object* x_2235; lean_object* x_2236; lean_object* x_2237; lean_object* x_2238; lean_object* x_2239; uint8_t x_2240; lean_object* x_2241; lean_object* x_2242; 
x_2184 = lean_ctor_get(x_2099, 0);
x_2185 = lean_ctor_get(x_2099, 1);
lean_inc(x_2185);
lean_inc(x_2184);
lean_dec(x_2099);
x_2186 = lean_box(0);
x_2187 = lean_name_mk_string(x_2186, x_300);
x_2188 = lean_name_mk_string(x_2187, x_604);
x_2189 = lean_name_mk_string(x_2188, x_904);
x_2190 = lean_mk_string("match");
lean_inc(x_2190);
lean_inc(x_2189);
x_2191 = lean_name_mk_string(x_2189, x_2190);
lean_inc(x_2184);
x_2192 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2192, 0, x_2184);
lean_ctor_set(x_2192, 1, x_2190);
x_2193 = lean_mk_string("null");
x_2194 = lean_name_mk_string(x_2186, x_2193);
x_2195 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_2194);
x_2196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2196, 0, x_2194);
lean_ctor_set(x_2196, 1, x_2195);
x_2197 = lean_mk_string("matchDiscr");
lean_inc(x_2189);
x_2198 = lean_name_mk_string(x_2189, x_2197);
x_2199 = lean_unsigned_to_nat(2u);
x_2200 = lean_mk_empty_array_with_capacity(x_2199);
lean_inc(x_2196);
x_2201 = lean_array_push(x_2200, x_2196);
x_2202 = lean_array_push(x_2201, x_2084);
x_2203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2203, 0, x_2198);
lean_ctor_set(x_2203, 1, x_2202);
x_2204 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2204);
x_2205 = lean_array_push(x_2204, x_2203);
lean_inc(x_2194);
x_2206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2206, 0, x_2194);
lean_ctor_set(x_2206, 1, x_2205);
x_2207 = lean_mk_string("with");
lean_inc(x_2184);
x_2208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2208, 0, x_2184);
lean_ctor_set(x_2208, 1, x_2207);
x_2209 = lean_mk_string("matchAlts");
lean_inc(x_2189);
x_2210 = lean_name_mk_string(x_2189, x_2209);
x_2211 = lean_mk_string("matchAlt");
x_2212 = lean_name_mk_string(x_2189, x_2211);
x_2213 = lean_mk_string("|");
lean_inc(x_2184);
x_2214 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2214, 0, x_2184);
lean_ctor_set(x_2214, 1, x_2213);
lean_inc(x_14);
lean_inc(x_2204);
x_2215 = lean_array_push(x_2204, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2216 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2216 = lean_box(0);
}
lean_inc(x_2194);
if (lean_is_scalar(x_2216)) {
 x_2217 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2217 = x_2216;
}
lean_ctor_set(x_2217, 0, x_2194);
lean_ctor_set(x_2217, 1, x_2215);
x_2218 = lean_mk_string("=>");
x_2219 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2219, 0, x_2184);
lean_ctor_set(x_2219, 1, x_2218);
x_2220 = lean_unsigned_to_nat(4u);
x_2221 = lean_mk_empty_array_with_capacity(x_2220);
x_2222 = lean_array_push(x_2221, x_2214);
x_2223 = lean_array_push(x_2222, x_2217);
x_2224 = lean_array_push(x_2223, x_2219);
x_2225 = lean_array_push(x_2224, x_2097);
x_2226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2226, 0, x_2212);
lean_ctor_set(x_2226, 1, x_2225);
lean_inc(x_2204);
x_2227 = lean_array_push(x_2204, x_2226);
x_2228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2228, 0, x_2194);
lean_ctor_set(x_2228, 1, x_2227);
x_2229 = lean_array_push(x_2204, x_2228);
x_2230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2230, 0, x_2210);
lean_ctor_set(x_2230, 1, x_2229);
x_2231 = lean_unsigned_to_nat(6u);
x_2232 = lean_mk_empty_array_with_capacity(x_2231);
x_2233 = lean_array_push(x_2232, x_2192);
lean_inc(x_2196);
x_2234 = lean_array_push(x_2233, x_2196);
x_2235 = lean_array_push(x_2234, x_2206);
x_2236 = lean_array_push(x_2235, x_2196);
x_2237 = lean_array_push(x_2236, x_2208);
x_2238 = lean_array_push(x_2237, x_2230);
x_2239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2239, 0, x_2191);
lean_ctor_set(x_2239, 1, x_2238);
x_2240 = 1;
x_2241 = lean_box(x_2240);
lean_ctor_set(x_2092, 1, x_2241);
lean_ctor_set(x_2092, 0, x_2239);
x_2242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2242, 0, x_2091);
lean_ctor_set(x_2242, 1, x_2185);
return x_2242;
}
}
else
{
lean_object* x_2243; lean_object* x_2244; lean_object* x_2245; lean_object* x_2246; lean_object* x_2247; lean_object* x_2248; lean_object* x_2249; lean_object* x_2250; lean_object* x_2251; lean_object* x_2252; lean_object* x_2253; lean_object* x_2254; lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; lean_object* x_2271; lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; lean_object* x_2276; lean_object* x_2277; lean_object* x_2278; lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; lean_object* x_2282; lean_object* x_2283; lean_object* x_2284; lean_object* x_2285; lean_object* x_2286; lean_object* x_2287; lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; lean_object* x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; lean_object* x_2297; lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; uint8_t x_2302; lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; 
x_2243 = lean_ctor_get(x_2092, 0);
lean_inc(x_2243);
lean_dec(x_2092);
x_2244 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2093);
lean_dec(x_5);
x_2245 = lean_ctor_get(x_2244, 0);
lean_inc(x_2245);
x_2246 = lean_ctor_get(x_2244, 1);
lean_inc(x_2246);
if (lean_is_exclusive(x_2244)) {
 lean_ctor_release(x_2244, 0);
 lean_ctor_release(x_2244, 1);
 x_2247 = x_2244;
} else {
 lean_dec_ref(x_2244);
 x_2247 = lean_box(0);
}
x_2248 = lean_box(0);
x_2249 = lean_name_mk_string(x_2248, x_300);
x_2250 = lean_name_mk_string(x_2249, x_604);
x_2251 = lean_name_mk_string(x_2250, x_904);
x_2252 = lean_mk_string("match");
lean_inc(x_2252);
lean_inc(x_2251);
x_2253 = lean_name_mk_string(x_2251, x_2252);
lean_inc(x_2245);
x_2254 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2254, 0, x_2245);
lean_ctor_set(x_2254, 1, x_2252);
x_2255 = lean_mk_string("null");
x_2256 = lean_name_mk_string(x_2248, x_2255);
x_2257 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_2256);
x_2258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2258, 0, x_2256);
lean_ctor_set(x_2258, 1, x_2257);
x_2259 = lean_mk_string("matchDiscr");
lean_inc(x_2251);
x_2260 = lean_name_mk_string(x_2251, x_2259);
x_2261 = lean_unsigned_to_nat(2u);
x_2262 = lean_mk_empty_array_with_capacity(x_2261);
lean_inc(x_2258);
x_2263 = lean_array_push(x_2262, x_2258);
x_2264 = lean_array_push(x_2263, x_2084);
x_2265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2265, 0, x_2260);
lean_ctor_set(x_2265, 1, x_2264);
x_2266 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2266);
x_2267 = lean_array_push(x_2266, x_2265);
lean_inc(x_2256);
x_2268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2268, 0, x_2256);
lean_ctor_set(x_2268, 1, x_2267);
x_2269 = lean_mk_string("with");
lean_inc(x_2245);
x_2270 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2270, 0, x_2245);
lean_ctor_set(x_2270, 1, x_2269);
x_2271 = lean_mk_string("matchAlts");
lean_inc(x_2251);
x_2272 = lean_name_mk_string(x_2251, x_2271);
x_2273 = lean_mk_string("matchAlt");
x_2274 = lean_name_mk_string(x_2251, x_2273);
x_2275 = lean_mk_string("|");
lean_inc(x_2245);
x_2276 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2276, 0, x_2245);
lean_ctor_set(x_2276, 1, x_2275);
lean_inc(x_14);
lean_inc(x_2266);
x_2277 = lean_array_push(x_2266, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2278 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2278 = lean_box(0);
}
lean_inc(x_2256);
if (lean_is_scalar(x_2278)) {
 x_2279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2279 = x_2278;
}
lean_ctor_set(x_2279, 0, x_2256);
lean_ctor_set(x_2279, 1, x_2277);
x_2280 = lean_mk_string("=>");
x_2281 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2281, 0, x_2245);
lean_ctor_set(x_2281, 1, x_2280);
x_2282 = lean_unsigned_to_nat(4u);
x_2283 = lean_mk_empty_array_with_capacity(x_2282);
x_2284 = lean_array_push(x_2283, x_2276);
x_2285 = lean_array_push(x_2284, x_2279);
x_2286 = lean_array_push(x_2285, x_2281);
x_2287 = lean_array_push(x_2286, x_2243);
x_2288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2288, 0, x_2274);
lean_ctor_set(x_2288, 1, x_2287);
lean_inc(x_2266);
x_2289 = lean_array_push(x_2266, x_2288);
x_2290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2290, 0, x_2256);
lean_ctor_set(x_2290, 1, x_2289);
x_2291 = lean_array_push(x_2266, x_2290);
x_2292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2292, 0, x_2272);
lean_ctor_set(x_2292, 1, x_2291);
x_2293 = lean_unsigned_to_nat(6u);
x_2294 = lean_mk_empty_array_with_capacity(x_2293);
x_2295 = lean_array_push(x_2294, x_2254);
lean_inc(x_2258);
x_2296 = lean_array_push(x_2295, x_2258);
x_2297 = lean_array_push(x_2296, x_2268);
x_2298 = lean_array_push(x_2297, x_2258);
x_2299 = lean_array_push(x_2298, x_2270);
x_2300 = lean_array_push(x_2299, x_2292);
x_2301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2301, 0, x_2253);
lean_ctor_set(x_2301, 1, x_2300);
x_2302 = 1;
x_2303 = lean_box(x_2302);
x_2304 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2304, 0, x_2301);
lean_ctor_set(x_2304, 1, x_2303);
lean_ctor_set(x_2091, 1, x_2304);
if (lean_is_scalar(x_2247)) {
 x_2305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2305 = x_2247;
}
lean_ctor_set(x_2305, 0, x_2091);
lean_ctor_set(x_2305, 1, x_2246);
return x_2305;
}
}
else
{
lean_object* x_2306; lean_object* x_2307; lean_object* x_2308; lean_object* x_2309; lean_object* x_2310; lean_object* x_2311; lean_object* x_2312; lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; lean_object* x_2316; lean_object* x_2317; lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; lean_object* x_2321; lean_object* x_2322; lean_object* x_2323; lean_object* x_2324; lean_object* x_2325; lean_object* x_2326; lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; lean_object* x_2330; lean_object* x_2331; lean_object* x_2332; lean_object* x_2333; lean_object* x_2334; lean_object* x_2335; lean_object* x_2336; lean_object* x_2337; lean_object* x_2338; lean_object* x_2339; lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; lean_object* x_2343; lean_object* x_2344; lean_object* x_2345; lean_object* x_2346; lean_object* x_2347; lean_object* x_2348; lean_object* x_2349; lean_object* x_2350; lean_object* x_2351; lean_object* x_2352; lean_object* x_2353; lean_object* x_2354; lean_object* x_2355; lean_object* x_2356; lean_object* x_2357; lean_object* x_2358; lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; lean_object* x_2362; lean_object* x_2363; lean_object* x_2364; lean_object* x_2365; lean_object* x_2366; uint8_t x_2367; lean_object* x_2368; lean_object* x_2369; lean_object* x_2370; lean_object* x_2371; 
x_2306 = lean_ctor_get(x_2091, 0);
lean_inc(x_2306);
lean_dec(x_2091);
x_2307 = lean_ctor_get(x_2092, 0);
lean_inc(x_2307);
if (lean_is_exclusive(x_2092)) {
 lean_ctor_release(x_2092, 0);
 lean_ctor_release(x_2092, 1);
 x_2308 = x_2092;
} else {
 lean_dec_ref(x_2092);
 x_2308 = lean_box(0);
}
x_2309 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2093);
lean_dec(x_5);
x_2310 = lean_ctor_get(x_2309, 0);
lean_inc(x_2310);
x_2311 = lean_ctor_get(x_2309, 1);
lean_inc(x_2311);
if (lean_is_exclusive(x_2309)) {
 lean_ctor_release(x_2309, 0);
 lean_ctor_release(x_2309, 1);
 x_2312 = x_2309;
} else {
 lean_dec_ref(x_2309);
 x_2312 = lean_box(0);
}
x_2313 = lean_box(0);
x_2314 = lean_name_mk_string(x_2313, x_300);
x_2315 = lean_name_mk_string(x_2314, x_604);
x_2316 = lean_name_mk_string(x_2315, x_904);
x_2317 = lean_mk_string("match");
lean_inc(x_2317);
lean_inc(x_2316);
x_2318 = lean_name_mk_string(x_2316, x_2317);
lean_inc(x_2310);
x_2319 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2319, 0, x_2310);
lean_ctor_set(x_2319, 1, x_2317);
x_2320 = lean_mk_string("null");
x_2321 = lean_name_mk_string(x_2313, x_2320);
x_2322 = lean_mk_empty_array_with_capacity(x_1509);
lean_inc(x_2321);
x_2323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2323, 0, x_2321);
lean_ctor_set(x_2323, 1, x_2322);
x_2324 = lean_mk_string("matchDiscr");
lean_inc(x_2316);
x_2325 = lean_name_mk_string(x_2316, x_2324);
x_2326 = lean_unsigned_to_nat(2u);
x_2327 = lean_mk_empty_array_with_capacity(x_2326);
lean_inc(x_2323);
x_2328 = lean_array_push(x_2327, x_2323);
x_2329 = lean_array_push(x_2328, x_2084);
x_2330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2330, 0, x_2325);
lean_ctor_set(x_2330, 1, x_2329);
x_2331 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2331);
x_2332 = lean_array_push(x_2331, x_2330);
lean_inc(x_2321);
x_2333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2333, 0, x_2321);
lean_ctor_set(x_2333, 1, x_2332);
x_2334 = lean_mk_string("with");
lean_inc(x_2310);
x_2335 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2335, 0, x_2310);
lean_ctor_set(x_2335, 1, x_2334);
x_2336 = lean_mk_string("matchAlts");
lean_inc(x_2316);
x_2337 = lean_name_mk_string(x_2316, x_2336);
x_2338 = lean_mk_string("matchAlt");
x_2339 = lean_name_mk_string(x_2316, x_2338);
x_2340 = lean_mk_string("|");
lean_inc(x_2310);
x_2341 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2341, 0, x_2310);
lean_ctor_set(x_2341, 1, x_2340);
lean_inc(x_14);
lean_inc(x_2331);
x_2342 = lean_array_push(x_2331, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2343 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2343 = lean_box(0);
}
lean_inc(x_2321);
if (lean_is_scalar(x_2343)) {
 x_2344 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2344 = x_2343;
}
lean_ctor_set(x_2344, 0, x_2321);
lean_ctor_set(x_2344, 1, x_2342);
x_2345 = lean_mk_string("=>");
x_2346 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2346, 0, x_2310);
lean_ctor_set(x_2346, 1, x_2345);
x_2347 = lean_unsigned_to_nat(4u);
x_2348 = lean_mk_empty_array_with_capacity(x_2347);
x_2349 = lean_array_push(x_2348, x_2341);
x_2350 = lean_array_push(x_2349, x_2344);
x_2351 = lean_array_push(x_2350, x_2346);
x_2352 = lean_array_push(x_2351, x_2307);
x_2353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2353, 0, x_2339);
lean_ctor_set(x_2353, 1, x_2352);
lean_inc(x_2331);
x_2354 = lean_array_push(x_2331, x_2353);
x_2355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2355, 0, x_2321);
lean_ctor_set(x_2355, 1, x_2354);
x_2356 = lean_array_push(x_2331, x_2355);
x_2357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2357, 0, x_2337);
lean_ctor_set(x_2357, 1, x_2356);
x_2358 = lean_unsigned_to_nat(6u);
x_2359 = lean_mk_empty_array_with_capacity(x_2358);
x_2360 = lean_array_push(x_2359, x_2319);
lean_inc(x_2323);
x_2361 = lean_array_push(x_2360, x_2323);
x_2362 = lean_array_push(x_2361, x_2333);
x_2363 = lean_array_push(x_2362, x_2323);
x_2364 = lean_array_push(x_2363, x_2335);
x_2365 = lean_array_push(x_2364, x_2357);
x_2366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2366, 0, x_2318);
lean_ctor_set(x_2366, 1, x_2365);
x_2367 = 1;
x_2368 = lean_box(x_2367);
if (lean_is_scalar(x_2308)) {
 x_2369 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2369 = x_2308;
}
lean_ctor_set(x_2369, 0, x_2366);
lean_ctor_set(x_2369, 1, x_2368);
x_2370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2370, 0, x_2306);
lean_ctor_set(x_2370, 1, x_2369);
if (lean_is_scalar(x_2312)) {
 x_2371 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2371 = x_2312;
}
lean_ctor_set(x_2371, 0, x_2370);
lean_ctor_set(x_2371, 1, x_2311);
return x_2371;
}
}
}
else
{
lean_object* x_2372; lean_object* x_2373; lean_object* x_2374; lean_object* x_2375; lean_object* x_2376; lean_object* x_2377; lean_object* x_2378; lean_object* x_2379; lean_object* x_2380; lean_object* x_2381; lean_object* x_2382; uint8_t x_2383; 
lean_dec(x_1507);
lean_inc(x_5);
x_2372 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2373 = lean_ctor_get(x_2372, 0);
lean_inc(x_2373);
x_2374 = lean_ctor_get(x_2372, 1);
lean_inc(x_2374);
lean_dec(x_2372);
x_2375 = lean_nat_add(x_3, x_1506);
lean_dec(x_3);
x_2376 = l_Lean_mkHole(x_14);
lean_inc(x_2373);
x_2377 = l_Lean_Elab_Term_mkExplicitBinder(x_2373, x_2376);
x_2378 = lean_array_push(x_4, x_2377);
lean_inc(x_5);
x_2379 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2375, x_2378, x_5, x_2374);
x_2380 = lean_ctor_get(x_2379, 0);
lean_inc(x_2380);
x_2381 = lean_ctor_get(x_2380, 1);
lean_inc(x_2381);
x_2382 = lean_ctor_get(x_2379, 1);
lean_inc(x_2382);
lean_dec(x_2379);
x_2383 = !lean_is_exclusive(x_2380);
if (x_2383 == 0)
{
lean_object* x_2384; uint8_t x_2385; 
x_2384 = lean_ctor_get(x_2380, 1);
lean_dec(x_2384);
x_2385 = !lean_is_exclusive(x_2381);
if (x_2385 == 0)
{
lean_object* x_2386; lean_object* x_2387; lean_object* x_2388; uint8_t x_2389; 
x_2386 = lean_ctor_get(x_2381, 0);
x_2387 = lean_ctor_get(x_2381, 1);
lean_dec(x_2387);
x_2388 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2382);
lean_dec(x_5);
x_2389 = !lean_is_exclusive(x_2388);
if (x_2389 == 0)
{
lean_object* x_2390; lean_object* x_2391; lean_object* x_2392; lean_object* x_2393; lean_object* x_2394; lean_object* x_2395; lean_object* x_2396; lean_object* x_2397; lean_object* x_2398; lean_object* x_2399; lean_object* x_2400; lean_object* x_2401; lean_object* x_2402; lean_object* x_2403; lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; lean_object* x_2409; lean_object* x_2410; lean_object* x_2411; lean_object* x_2412; lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; lean_object* x_2417; lean_object* x_2418; lean_object* x_2419; lean_object* x_2420; lean_object* x_2421; uint8_t x_2422; 
x_2390 = lean_ctor_get(x_2388, 0);
x_2391 = lean_box(0);
x_2392 = lean_name_mk_string(x_2391, x_300);
x_2393 = lean_name_mk_string(x_2392, x_604);
x_2394 = lean_name_mk_string(x_2393, x_904);
x_2395 = lean_mk_string("match");
lean_inc(x_2395);
lean_inc(x_2394);
x_2396 = lean_name_mk_string(x_2394, x_2395);
lean_inc(x_2390);
x_2397 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2397, 0, x_2390);
lean_ctor_set(x_2397, 1, x_2395);
x_2398 = lean_mk_string("null");
x_2399 = lean_name_mk_string(x_2391, x_2398);
x_2400 = lean_unsigned_to_nat(0u);
x_2401 = lean_mk_empty_array_with_capacity(x_2400);
lean_inc(x_2399);
x_2402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2402, 0, x_2399);
lean_ctor_set(x_2402, 1, x_2401);
x_2403 = lean_mk_string("matchDiscr");
lean_inc(x_2394);
x_2404 = lean_name_mk_string(x_2394, x_2403);
x_2405 = lean_unsigned_to_nat(2u);
x_2406 = lean_mk_empty_array_with_capacity(x_2405);
lean_inc(x_2402);
x_2407 = lean_array_push(x_2406, x_2402);
x_2408 = lean_array_push(x_2407, x_2373);
x_2409 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2409, 0, x_2404);
lean_ctor_set(x_2409, 1, x_2408);
x_2410 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2410);
x_2411 = lean_array_push(x_2410, x_2409);
lean_inc(x_2399);
x_2412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2412, 0, x_2399);
lean_ctor_set(x_2412, 1, x_2411);
x_2413 = lean_mk_string("with");
lean_inc(x_2390);
x_2414 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2414, 0, x_2390);
lean_ctor_set(x_2414, 1, x_2413);
x_2415 = lean_mk_string("matchAlts");
lean_inc(x_2394);
x_2416 = lean_name_mk_string(x_2394, x_2415);
x_2417 = lean_mk_string("matchAlt");
x_2418 = lean_name_mk_string(x_2394, x_2417);
x_2419 = lean_mk_string("|");
lean_inc(x_2390);
x_2420 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2420, 0, x_2390);
lean_ctor_set(x_2420, 1, x_2419);
lean_inc(x_14);
lean_inc(x_2410);
x_2421 = lean_array_push(x_2410, x_14);
x_2422 = !lean_is_exclusive(x_14);
if (x_2422 == 0)
{
lean_object* x_2423; lean_object* x_2424; lean_object* x_2425; lean_object* x_2426; lean_object* x_2427; lean_object* x_2428; lean_object* x_2429; lean_object* x_2430; lean_object* x_2431; lean_object* x_2432; lean_object* x_2433; lean_object* x_2434; lean_object* x_2435; lean_object* x_2436; lean_object* x_2437; lean_object* x_2438; lean_object* x_2439; lean_object* x_2440; lean_object* x_2441; lean_object* x_2442; lean_object* x_2443; lean_object* x_2444; lean_object* x_2445; lean_object* x_2446; uint8_t x_2447; lean_object* x_2448; 
x_2423 = lean_ctor_get(x_14, 1);
lean_dec(x_2423);
x_2424 = lean_ctor_get(x_14, 0);
lean_dec(x_2424);
lean_inc(x_2399);
lean_ctor_set(x_14, 1, x_2421);
lean_ctor_set(x_14, 0, x_2399);
x_2425 = lean_mk_string("=>");
x_2426 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2426, 0, x_2390);
lean_ctor_set(x_2426, 1, x_2425);
x_2427 = lean_unsigned_to_nat(4u);
x_2428 = lean_mk_empty_array_with_capacity(x_2427);
x_2429 = lean_array_push(x_2428, x_2420);
x_2430 = lean_array_push(x_2429, x_14);
x_2431 = lean_array_push(x_2430, x_2426);
x_2432 = lean_array_push(x_2431, x_2386);
x_2433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2433, 0, x_2418);
lean_ctor_set(x_2433, 1, x_2432);
lean_inc(x_2410);
x_2434 = lean_array_push(x_2410, x_2433);
x_2435 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2435, 0, x_2399);
lean_ctor_set(x_2435, 1, x_2434);
x_2436 = lean_array_push(x_2410, x_2435);
x_2437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2437, 0, x_2416);
lean_ctor_set(x_2437, 1, x_2436);
x_2438 = lean_unsigned_to_nat(6u);
x_2439 = lean_mk_empty_array_with_capacity(x_2438);
x_2440 = lean_array_push(x_2439, x_2397);
lean_inc(x_2402);
x_2441 = lean_array_push(x_2440, x_2402);
x_2442 = lean_array_push(x_2441, x_2412);
x_2443 = lean_array_push(x_2442, x_2402);
x_2444 = lean_array_push(x_2443, x_2414);
x_2445 = lean_array_push(x_2444, x_2437);
x_2446 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2446, 0, x_2396);
lean_ctor_set(x_2446, 1, x_2445);
x_2447 = 1;
x_2448 = lean_box(x_2447);
lean_ctor_set(x_2381, 1, x_2448);
lean_ctor_set(x_2381, 0, x_2446);
lean_ctor_set(x_2388, 0, x_2380);
return x_2388;
}
else
{
lean_object* x_2449; lean_object* x_2450; lean_object* x_2451; lean_object* x_2452; lean_object* x_2453; lean_object* x_2454; lean_object* x_2455; lean_object* x_2456; lean_object* x_2457; lean_object* x_2458; lean_object* x_2459; lean_object* x_2460; lean_object* x_2461; lean_object* x_2462; lean_object* x_2463; lean_object* x_2464; lean_object* x_2465; lean_object* x_2466; lean_object* x_2467; lean_object* x_2468; lean_object* x_2469; lean_object* x_2470; lean_object* x_2471; uint8_t x_2472; lean_object* x_2473; 
lean_dec(x_14);
lean_inc(x_2399);
x_2449 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2449, 0, x_2399);
lean_ctor_set(x_2449, 1, x_2421);
x_2450 = lean_mk_string("=>");
x_2451 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2451, 0, x_2390);
lean_ctor_set(x_2451, 1, x_2450);
x_2452 = lean_unsigned_to_nat(4u);
x_2453 = lean_mk_empty_array_with_capacity(x_2452);
x_2454 = lean_array_push(x_2453, x_2420);
x_2455 = lean_array_push(x_2454, x_2449);
x_2456 = lean_array_push(x_2455, x_2451);
x_2457 = lean_array_push(x_2456, x_2386);
x_2458 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2458, 0, x_2418);
lean_ctor_set(x_2458, 1, x_2457);
lean_inc(x_2410);
x_2459 = lean_array_push(x_2410, x_2458);
x_2460 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2460, 0, x_2399);
lean_ctor_set(x_2460, 1, x_2459);
x_2461 = lean_array_push(x_2410, x_2460);
x_2462 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2462, 0, x_2416);
lean_ctor_set(x_2462, 1, x_2461);
x_2463 = lean_unsigned_to_nat(6u);
x_2464 = lean_mk_empty_array_with_capacity(x_2463);
x_2465 = lean_array_push(x_2464, x_2397);
lean_inc(x_2402);
x_2466 = lean_array_push(x_2465, x_2402);
x_2467 = lean_array_push(x_2466, x_2412);
x_2468 = lean_array_push(x_2467, x_2402);
x_2469 = lean_array_push(x_2468, x_2414);
x_2470 = lean_array_push(x_2469, x_2462);
x_2471 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2471, 0, x_2396);
lean_ctor_set(x_2471, 1, x_2470);
x_2472 = 1;
x_2473 = lean_box(x_2472);
lean_ctor_set(x_2381, 1, x_2473);
lean_ctor_set(x_2381, 0, x_2471);
lean_ctor_set(x_2388, 0, x_2380);
return x_2388;
}
}
else
{
lean_object* x_2474; lean_object* x_2475; lean_object* x_2476; lean_object* x_2477; lean_object* x_2478; lean_object* x_2479; lean_object* x_2480; lean_object* x_2481; lean_object* x_2482; lean_object* x_2483; lean_object* x_2484; lean_object* x_2485; lean_object* x_2486; lean_object* x_2487; lean_object* x_2488; lean_object* x_2489; lean_object* x_2490; lean_object* x_2491; lean_object* x_2492; lean_object* x_2493; lean_object* x_2494; lean_object* x_2495; lean_object* x_2496; lean_object* x_2497; lean_object* x_2498; lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; lean_object* x_2502; lean_object* x_2503; lean_object* x_2504; lean_object* x_2505; lean_object* x_2506; lean_object* x_2507; lean_object* x_2508; lean_object* x_2509; lean_object* x_2510; lean_object* x_2511; lean_object* x_2512; lean_object* x_2513; lean_object* x_2514; lean_object* x_2515; lean_object* x_2516; lean_object* x_2517; lean_object* x_2518; lean_object* x_2519; lean_object* x_2520; lean_object* x_2521; lean_object* x_2522; lean_object* x_2523; lean_object* x_2524; lean_object* x_2525; lean_object* x_2526; lean_object* x_2527; lean_object* x_2528; lean_object* x_2529; lean_object* x_2530; uint8_t x_2531; lean_object* x_2532; lean_object* x_2533; 
x_2474 = lean_ctor_get(x_2388, 0);
x_2475 = lean_ctor_get(x_2388, 1);
lean_inc(x_2475);
lean_inc(x_2474);
lean_dec(x_2388);
x_2476 = lean_box(0);
x_2477 = lean_name_mk_string(x_2476, x_300);
x_2478 = lean_name_mk_string(x_2477, x_604);
x_2479 = lean_name_mk_string(x_2478, x_904);
x_2480 = lean_mk_string("match");
lean_inc(x_2480);
lean_inc(x_2479);
x_2481 = lean_name_mk_string(x_2479, x_2480);
lean_inc(x_2474);
x_2482 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2482, 0, x_2474);
lean_ctor_set(x_2482, 1, x_2480);
x_2483 = lean_mk_string("null");
x_2484 = lean_name_mk_string(x_2476, x_2483);
x_2485 = lean_unsigned_to_nat(0u);
x_2486 = lean_mk_empty_array_with_capacity(x_2485);
lean_inc(x_2484);
x_2487 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2487, 0, x_2484);
lean_ctor_set(x_2487, 1, x_2486);
x_2488 = lean_mk_string("matchDiscr");
lean_inc(x_2479);
x_2489 = lean_name_mk_string(x_2479, x_2488);
x_2490 = lean_unsigned_to_nat(2u);
x_2491 = lean_mk_empty_array_with_capacity(x_2490);
lean_inc(x_2487);
x_2492 = lean_array_push(x_2491, x_2487);
x_2493 = lean_array_push(x_2492, x_2373);
x_2494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2494, 0, x_2489);
lean_ctor_set(x_2494, 1, x_2493);
x_2495 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2495);
x_2496 = lean_array_push(x_2495, x_2494);
lean_inc(x_2484);
x_2497 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2497, 0, x_2484);
lean_ctor_set(x_2497, 1, x_2496);
x_2498 = lean_mk_string("with");
lean_inc(x_2474);
x_2499 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2499, 0, x_2474);
lean_ctor_set(x_2499, 1, x_2498);
x_2500 = lean_mk_string("matchAlts");
lean_inc(x_2479);
x_2501 = lean_name_mk_string(x_2479, x_2500);
x_2502 = lean_mk_string("matchAlt");
x_2503 = lean_name_mk_string(x_2479, x_2502);
x_2504 = lean_mk_string("|");
lean_inc(x_2474);
x_2505 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2505, 0, x_2474);
lean_ctor_set(x_2505, 1, x_2504);
lean_inc(x_14);
lean_inc(x_2495);
x_2506 = lean_array_push(x_2495, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2507 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2507 = lean_box(0);
}
lean_inc(x_2484);
if (lean_is_scalar(x_2507)) {
 x_2508 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2508 = x_2507;
}
lean_ctor_set(x_2508, 0, x_2484);
lean_ctor_set(x_2508, 1, x_2506);
x_2509 = lean_mk_string("=>");
x_2510 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2510, 0, x_2474);
lean_ctor_set(x_2510, 1, x_2509);
x_2511 = lean_unsigned_to_nat(4u);
x_2512 = lean_mk_empty_array_with_capacity(x_2511);
x_2513 = lean_array_push(x_2512, x_2505);
x_2514 = lean_array_push(x_2513, x_2508);
x_2515 = lean_array_push(x_2514, x_2510);
x_2516 = lean_array_push(x_2515, x_2386);
x_2517 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2517, 0, x_2503);
lean_ctor_set(x_2517, 1, x_2516);
lean_inc(x_2495);
x_2518 = lean_array_push(x_2495, x_2517);
x_2519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2519, 0, x_2484);
lean_ctor_set(x_2519, 1, x_2518);
x_2520 = lean_array_push(x_2495, x_2519);
x_2521 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2521, 0, x_2501);
lean_ctor_set(x_2521, 1, x_2520);
x_2522 = lean_unsigned_to_nat(6u);
x_2523 = lean_mk_empty_array_with_capacity(x_2522);
x_2524 = lean_array_push(x_2523, x_2482);
lean_inc(x_2487);
x_2525 = lean_array_push(x_2524, x_2487);
x_2526 = lean_array_push(x_2525, x_2497);
x_2527 = lean_array_push(x_2526, x_2487);
x_2528 = lean_array_push(x_2527, x_2499);
x_2529 = lean_array_push(x_2528, x_2521);
x_2530 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2530, 0, x_2481);
lean_ctor_set(x_2530, 1, x_2529);
x_2531 = 1;
x_2532 = lean_box(x_2531);
lean_ctor_set(x_2381, 1, x_2532);
lean_ctor_set(x_2381, 0, x_2530);
x_2533 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2533, 0, x_2380);
lean_ctor_set(x_2533, 1, x_2475);
return x_2533;
}
}
else
{
lean_object* x_2534; lean_object* x_2535; lean_object* x_2536; lean_object* x_2537; lean_object* x_2538; lean_object* x_2539; lean_object* x_2540; lean_object* x_2541; lean_object* x_2542; lean_object* x_2543; lean_object* x_2544; lean_object* x_2545; lean_object* x_2546; lean_object* x_2547; lean_object* x_2548; lean_object* x_2549; lean_object* x_2550; lean_object* x_2551; lean_object* x_2552; lean_object* x_2553; lean_object* x_2554; lean_object* x_2555; lean_object* x_2556; lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; lean_object* x_2561; lean_object* x_2562; lean_object* x_2563; lean_object* x_2564; lean_object* x_2565; lean_object* x_2566; lean_object* x_2567; lean_object* x_2568; lean_object* x_2569; lean_object* x_2570; lean_object* x_2571; lean_object* x_2572; lean_object* x_2573; lean_object* x_2574; lean_object* x_2575; lean_object* x_2576; lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; lean_object* x_2580; lean_object* x_2581; lean_object* x_2582; lean_object* x_2583; lean_object* x_2584; lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; lean_object* x_2588; lean_object* x_2589; lean_object* x_2590; lean_object* x_2591; lean_object* x_2592; lean_object* x_2593; uint8_t x_2594; lean_object* x_2595; lean_object* x_2596; lean_object* x_2597; 
x_2534 = lean_ctor_get(x_2381, 0);
lean_inc(x_2534);
lean_dec(x_2381);
x_2535 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2382);
lean_dec(x_5);
x_2536 = lean_ctor_get(x_2535, 0);
lean_inc(x_2536);
x_2537 = lean_ctor_get(x_2535, 1);
lean_inc(x_2537);
if (lean_is_exclusive(x_2535)) {
 lean_ctor_release(x_2535, 0);
 lean_ctor_release(x_2535, 1);
 x_2538 = x_2535;
} else {
 lean_dec_ref(x_2535);
 x_2538 = lean_box(0);
}
x_2539 = lean_box(0);
x_2540 = lean_name_mk_string(x_2539, x_300);
x_2541 = lean_name_mk_string(x_2540, x_604);
x_2542 = lean_name_mk_string(x_2541, x_904);
x_2543 = lean_mk_string("match");
lean_inc(x_2543);
lean_inc(x_2542);
x_2544 = lean_name_mk_string(x_2542, x_2543);
lean_inc(x_2536);
x_2545 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2545, 0, x_2536);
lean_ctor_set(x_2545, 1, x_2543);
x_2546 = lean_mk_string("null");
x_2547 = lean_name_mk_string(x_2539, x_2546);
x_2548 = lean_unsigned_to_nat(0u);
x_2549 = lean_mk_empty_array_with_capacity(x_2548);
lean_inc(x_2547);
x_2550 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2550, 0, x_2547);
lean_ctor_set(x_2550, 1, x_2549);
x_2551 = lean_mk_string("matchDiscr");
lean_inc(x_2542);
x_2552 = lean_name_mk_string(x_2542, x_2551);
x_2553 = lean_unsigned_to_nat(2u);
x_2554 = lean_mk_empty_array_with_capacity(x_2553);
lean_inc(x_2550);
x_2555 = lean_array_push(x_2554, x_2550);
x_2556 = lean_array_push(x_2555, x_2373);
x_2557 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2557, 0, x_2552);
lean_ctor_set(x_2557, 1, x_2556);
x_2558 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2558);
x_2559 = lean_array_push(x_2558, x_2557);
lean_inc(x_2547);
x_2560 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2560, 0, x_2547);
lean_ctor_set(x_2560, 1, x_2559);
x_2561 = lean_mk_string("with");
lean_inc(x_2536);
x_2562 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2562, 0, x_2536);
lean_ctor_set(x_2562, 1, x_2561);
x_2563 = lean_mk_string("matchAlts");
lean_inc(x_2542);
x_2564 = lean_name_mk_string(x_2542, x_2563);
x_2565 = lean_mk_string("matchAlt");
x_2566 = lean_name_mk_string(x_2542, x_2565);
x_2567 = lean_mk_string("|");
lean_inc(x_2536);
x_2568 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2568, 0, x_2536);
lean_ctor_set(x_2568, 1, x_2567);
lean_inc(x_14);
lean_inc(x_2558);
x_2569 = lean_array_push(x_2558, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2570 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2570 = lean_box(0);
}
lean_inc(x_2547);
if (lean_is_scalar(x_2570)) {
 x_2571 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2571 = x_2570;
}
lean_ctor_set(x_2571, 0, x_2547);
lean_ctor_set(x_2571, 1, x_2569);
x_2572 = lean_mk_string("=>");
x_2573 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2573, 0, x_2536);
lean_ctor_set(x_2573, 1, x_2572);
x_2574 = lean_unsigned_to_nat(4u);
x_2575 = lean_mk_empty_array_with_capacity(x_2574);
x_2576 = lean_array_push(x_2575, x_2568);
x_2577 = lean_array_push(x_2576, x_2571);
x_2578 = lean_array_push(x_2577, x_2573);
x_2579 = lean_array_push(x_2578, x_2534);
x_2580 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2580, 0, x_2566);
lean_ctor_set(x_2580, 1, x_2579);
lean_inc(x_2558);
x_2581 = lean_array_push(x_2558, x_2580);
x_2582 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2582, 0, x_2547);
lean_ctor_set(x_2582, 1, x_2581);
x_2583 = lean_array_push(x_2558, x_2582);
x_2584 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2584, 0, x_2564);
lean_ctor_set(x_2584, 1, x_2583);
x_2585 = lean_unsigned_to_nat(6u);
x_2586 = lean_mk_empty_array_with_capacity(x_2585);
x_2587 = lean_array_push(x_2586, x_2545);
lean_inc(x_2550);
x_2588 = lean_array_push(x_2587, x_2550);
x_2589 = lean_array_push(x_2588, x_2560);
x_2590 = lean_array_push(x_2589, x_2550);
x_2591 = lean_array_push(x_2590, x_2562);
x_2592 = lean_array_push(x_2591, x_2584);
x_2593 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2593, 0, x_2544);
lean_ctor_set(x_2593, 1, x_2592);
x_2594 = 1;
x_2595 = lean_box(x_2594);
x_2596 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2596, 0, x_2593);
lean_ctor_set(x_2596, 1, x_2595);
lean_ctor_set(x_2380, 1, x_2596);
if (lean_is_scalar(x_2538)) {
 x_2597 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2597 = x_2538;
}
lean_ctor_set(x_2597, 0, x_2380);
lean_ctor_set(x_2597, 1, x_2537);
return x_2597;
}
}
else
{
lean_object* x_2598; lean_object* x_2599; lean_object* x_2600; lean_object* x_2601; lean_object* x_2602; lean_object* x_2603; lean_object* x_2604; lean_object* x_2605; lean_object* x_2606; lean_object* x_2607; lean_object* x_2608; lean_object* x_2609; lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; lean_object* x_2614; lean_object* x_2615; lean_object* x_2616; lean_object* x_2617; lean_object* x_2618; lean_object* x_2619; lean_object* x_2620; lean_object* x_2621; lean_object* x_2622; lean_object* x_2623; lean_object* x_2624; lean_object* x_2625; lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; lean_object* x_2629; lean_object* x_2630; lean_object* x_2631; lean_object* x_2632; lean_object* x_2633; lean_object* x_2634; lean_object* x_2635; lean_object* x_2636; lean_object* x_2637; lean_object* x_2638; lean_object* x_2639; lean_object* x_2640; lean_object* x_2641; lean_object* x_2642; lean_object* x_2643; lean_object* x_2644; lean_object* x_2645; lean_object* x_2646; lean_object* x_2647; lean_object* x_2648; lean_object* x_2649; lean_object* x_2650; lean_object* x_2651; lean_object* x_2652; lean_object* x_2653; lean_object* x_2654; lean_object* x_2655; lean_object* x_2656; lean_object* x_2657; lean_object* x_2658; lean_object* x_2659; uint8_t x_2660; lean_object* x_2661; lean_object* x_2662; lean_object* x_2663; lean_object* x_2664; 
x_2598 = lean_ctor_get(x_2380, 0);
lean_inc(x_2598);
lean_dec(x_2380);
x_2599 = lean_ctor_get(x_2381, 0);
lean_inc(x_2599);
if (lean_is_exclusive(x_2381)) {
 lean_ctor_release(x_2381, 0);
 lean_ctor_release(x_2381, 1);
 x_2600 = x_2381;
} else {
 lean_dec_ref(x_2381);
 x_2600 = lean_box(0);
}
x_2601 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2382);
lean_dec(x_5);
x_2602 = lean_ctor_get(x_2601, 0);
lean_inc(x_2602);
x_2603 = lean_ctor_get(x_2601, 1);
lean_inc(x_2603);
if (lean_is_exclusive(x_2601)) {
 lean_ctor_release(x_2601, 0);
 lean_ctor_release(x_2601, 1);
 x_2604 = x_2601;
} else {
 lean_dec_ref(x_2601);
 x_2604 = lean_box(0);
}
x_2605 = lean_box(0);
x_2606 = lean_name_mk_string(x_2605, x_300);
x_2607 = lean_name_mk_string(x_2606, x_604);
x_2608 = lean_name_mk_string(x_2607, x_904);
x_2609 = lean_mk_string("match");
lean_inc(x_2609);
lean_inc(x_2608);
x_2610 = lean_name_mk_string(x_2608, x_2609);
lean_inc(x_2602);
x_2611 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2611, 0, x_2602);
lean_ctor_set(x_2611, 1, x_2609);
x_2612 = lean_mk_string("null");
x_2613 = lean_name_mk_string(x_2605, x_2612);
x_2614 = lean_unsigned_to_nat(0u);
x_2615 = lean_mk_empty_array_with_capacity(x_2614);
lean_inc(x_2613);
x_2616 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2616, 0, x_2613);
lean_ctor_set(x_2616, 1, x_2615);
x_2617 = lean_mk_string("matchDiscr");
lean_inc(x_2608);
x_2618 = lean_name_mk_string(x_2608, x_2617);
x_2619 = lean_unsigned_to_nat(2u);
x_2620 = lean_mk_empty_array_with_capacity(x_2619);
lean_inc(x_2616);
x_2621 = lean_array_push(x_2620, x_2616);
x_2622 = lean_array_push(x_2621, x_2373);
x_2623 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2623, 0, x_2618);
lean_ctor_set(x_2623, 1, x_2622);
x_2624 = lean_mk_empty_array_with_capacity(x_1506);
lean_inc(x_2624);
x_2625 = lean_array_push(x_2624, x_2623);
lean_inc(x_2613);
x_2626 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2626, 0, x_2613);
lean_ctor_set(x_2626, 1, x_2625);
x_2627 = lean_mk_string("with");
lean_inc(x_2602);
x_2628 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2628, 0, x_2602);
lean_ctor_set(x_2628, 1, x_2627);
x_2629 = lean_mk_string("matchAlts");
lean_inc(x_2608);
x_2630 = lean_name_mk_string(x_2608, x_2629);
x_2631 = lean_mk_string("matchAlt");
x_2632 = lean_name_mk_string(x_2608, x_2631);
x_2633 = lean_mk_string("|");
lean_inc(x_2602);
x_2634 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2634, 0, x_2602);
lean_ctor_set(x_2634, 1, x_2633);
lean_inc(x_14);
lean_inc(x_2624);
x_2635 = lean_array_push(x_2624, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2636 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2636 = lean_box(0);
}
lean_inc(x_2613);
if (lean_is_scalar(x_2636)) {
 x_2637 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2637 = x_2636;
}
lean_ctor_set(x_2637, 0, x_2613);
lean_ctor_set(x_2637, 1, x_2635);
x_2638 = lean_mk_string("=>");
x_2639 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2639, 0, x_2602);
lean_ctor_set(x_2639, 1, x_2638);
x_2640 = lean_unsigned_to_nat(4u);
x_2641 = lean_mk_empty_array_with_capacity(x_2640);
x_2642 = lean_array_push(x_2641, x_2634);
x_2643 = lean_array_push(x_2642, x_2637);
x_2644 = lean_array_push(x_2643, x_2639);
x_2645 = lean_array_push(x_2644, x_2599);
x_2646 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2646, 0, x_2632);
lean_ctor_set(x_2646, 1, x_2645);
lean_inc(x_2624);
x_2647 = lean_array_push(x_2624, x_2646);
x_2648 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2648, 0, x_2613);
lean_ctor_set(x_2648, 1, x_2647);
x_2649 = lean_array_push(x_2624, x_2648);
x_2650 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2650, 0, x_2630);
lean_ctor_set(x_2650, 1, x_2649);
x_2651 = lean_unsigned_to_nat(6u);
x_2652 = lean_mk_empty_array_with_capacity(x_2651);
x_2653 = lean_array_push(x_2652, x_2611);
lean_inc(x_2616);
x_2654 = lean_array_push(x_2653, x_2616);
x_2655 = lean_array_push(x_2654, x_2626);
x_2656 = lean_array_push(x_2655, x_2616);
x_2657 = lean_array_push(x_2656, x_2628);
x_2658 = lean_array_push(x_2657, x_2650);
x_2659 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2659, 0, x_2610);
lean_ctor_set(x_2659, 1, x_2658);
x_2660 = 1;
x_2661 = lean_box(x_2660);
if (lean_is_scalar(x_2600)) {
 x_2662 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2662 = x_2600;
}
lean_ctor_set(x_2662, 0, x_2659);
lean_ctor_set(x_2662, 1, x_2661);
x_2663 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2663, 0, x_2598);
lean_ctor_set(x_2663, 1, x_2662);
if (lean_is_scalar(x_2604)) {
 x_2664 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2664 = x_2604;
}
lean_ctor_set(x_2664, 0, x_2663);
lean_ctor_set(x_2664, 1, x_2603);
return x_2664;
}
}
}
}
else
{
lean_object* x_2665; lean_object* x_2666; lean_object* x_2667; lean_object* x_2668; lean_object* x_2669; lean_object* x_2670; lean_object* x_2671; 
lean_dec(x_904);
lean_dec(x_604);
lean_dec(x_300);
lean_dec(x_296);
lean_inc(x_5);
x_2665 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2666 = lean_ctor_get(x_2665, 0);
lean_inc(x_2666);
x_2667 = lean_ctor_get(x_2665, 1);
lean_inc(x_2667);
lean_dec(x_2665);
x_2668 = lean_unsigned_to_nat(1u);
x_2669 = lean_nat_add(x_3, x_2668);
lean_dec(x_3);
x_2670 = l_Lean_Elab_Term_mkExplicitBinder(x_2666, x_14);
x_2671 = lean_array_push(x_4, x_2670);
x_3 = x_2669;
x_4 = x_2671;
x_6 = x_2667;
goto _start;
}
}
else
{
lean_object* x_2673; lean_object* x_2674; lean_object* x_2675; 
lean_dec(x_904);
lean_dec(x_604);
lean_dec(x_300);
lean_dec(x_296);
x_2673 = lean_unsigned_to_nat(1u);
x_2674 = lean_nat_add(x_3, x_2673);
lean_dec(x_3);
x_2675 = lean_array_push(x_4, x_14);
x_3 = x_2674;
x_4 = x_2675;
goto _start;
}
}
else
{
lean_object* x_2677; lean_object* x_2678; lean_object* x_2679; 
lean_dec(x_904);
lean_dec(x_604);
lean_dec(x_300);
lean_dec(x_296);
x_2677 = lean_unsigned_to_nat(1u);
x_2678 = lean_nat_add(x_3, x_2677);
lean_dec(x_3);
x_2679 = lean_array_push(x_4, x_14);
x_3 = x_2678;
x_4 = x_2679;
goto _start;
}
}
else
{
lean_object* x_2681; lean_object* x_2682; lean_object* x_2683; 
lean_dec(x_904);
lean_dec(x_604);
lean_dec(x_300);
lean_dec(x_296);
x_2681 = lean_unsigned_to_nat(1u);
x_2682 = lean_nat_add(x_3, x_2681);
lean_dec(x_3);
x_2683 = lean_array_push(x_4, x_14);
x_3 = x_2682;
x_4 = x_2683;
goto _start;
}
}
else
{
lean_object* x_2685; lean_object* x_2686; lean_object* x_2687; 
lean_dec(x_904);
lean_dec(x_604);
lean_dec(x_300);
lean_dec(x_296);
x_2685 = lean_unsigned_to_nat(1u);
x_2686 = lean_nat_add(x_3, x_2685);
lean_dec(x_3);
x_2687 = lean_array_push(x_4, x_14);
x_3 = x_2686;
x_4 = x_2687;
goto _start;
}
}
}
}
}
else
{
lean_object* x_2689; lean_object* x_2690; lean_object* x_2691; lean_object* x_2692; lean_object* x_2693; lean_object* x_2694; lean_object* x_2695; lean_object* x_2696; lean_object* x_2697; lean_object* x_2698; lean_object* x_2699; lean_object* x_2700; uint8_t x_2701; 
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_inc(x_5);
x_2689 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2690 = lean_ctor_get(x_2689, 0);
lean_inc(x_2690);
x_2691 = lean_ctor_get(x_2689, 1);
lean_inc(x_2691);
lean_dec(x_2689);
x_2692 = lean_unsigned_to_nat(1u);
x_2693 = lean_nat_add(x_3, x_2692);
lean_dec(x_3);
x_2694 = l_Lean_mkHole(x_14);
lean_inc(x_2690);
x_2695 = l_Lean_Elab_Term_mkExplicitBinder(x_2690, x_2694);
x_2696 = lean_array_push(x_4, x_2695);
lean_inc(x_5);
x_2697 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2693, x_2696, x_5, x_2691);
x_2698 = lean_ctor_get(x_2697, 0);
lean_inc(x_2698);
x_2699 = lean_ctor_get(x_2698, 1);
lean_inc(x_2699);
x_2700 = lean_ctor_get(x_2697, 1);
lean_inc(x_2700);
lean_dec(x_2697);
x_2701 = !lean_is_exclusive(x_2698);
if (x_2701 == 0)
{
lean_object* x_2702; uint8_t x_2703; 
x_2702 = lean_ctor_get(x_2698, 1);
lean_dec(x_2702);
x_2703 = !lean_is_exclusive(x_2699);
if (x_2703 == 0)
{
lean_object* x_2704; lean_object* x_2705; lean_object* x_2706; uint8_t x_2707; 
x_2704 = lean_ctor_get(x_2699, 0);
x_2705 = lean_ctor_get(x_2699, 1);
lean_dec(x_2705);
x_2706 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2700);
lean_dec(x_5);
x_2707 = !lean_is_exclusive(x_2706);
if (x_2707 == 0)
{
lean_object* x_2708; lean_object* x_2709; lean_object* x_2710; lean_object* x_2711; lean_object* x_2712; lean_object* x_2713; lean_object* x_2714; lean_object* x_2715; lean_object* x_2716; lean_object* x_2717; lean_object* x_2718; lean_object* x_2719; lean_object* x_2720; lean_object* x_2721; lean_object* x_2722; lean_object* x_2723; lean_object* x_2724; lean_object* x_2725; lean_object* x_2726; lean_object* x_2727; lean_object* x_2728; lean_object* x_2729; lean_object* x_2730; lean_object* x_2731; lean_object* x_2732; lean_object* x_2733; lean_object* x_2734; lean_object* x_2735; lean_object* x_2736; lean_object* x_2737; lean_object* x_2738; lean_object* x_2739; lean_object* x_2740; lean_object* x_2741; lean_object* x_2742; uint8_t x_2743; 
x_2708 = lean_ctor_get(x_2706, 0);
x_2709 = lean_box(0);
x_2710 = lean_mk_string("Lean");
x_2711 = lean_name_mk_string(x_2709, x_2710);
x_2712 = lean_mk_string("Parser");
x_2713 = lean_name_mk_string(x_2711, x_2712);
x_2714 = lean_mk_string("Term");
x_2715 = lean_name_mk_string(x_2713, x_2714);
x_2716 = lean_mk_string("match");
lean_inc(x_2716);
lean_inc(x_2715);
x_2717 = lean_name_mk_string(x_2715, x_2716);
lean_inc(x_2708);
x_2718 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2718, 0, x_2708);
lean_ctor_set(x_2718, 1, x_2716);
x_2719 = lean_mk_string("null");
x_2720 = lean_name_mk_string(x_2709, x_2719);
x_2721 = lean_unsigned_to_nat(0u);
x_2722 = lean_mk_empty_array_with_capacity(x_2721);
lean_inc(x_2720);
x_2723 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2723, 0, x_2720);
lean_ctor_set(x_2723, 1, x_2722);
x_2724 = lean_mk_string("matchDiscr");
lean_inc(x_2715);
x_2725 = lean_name_mk_string(x_2715, x_2724);
x_2726 = lean_unsigned_to_nat(2u);
x_2727 = lean_mk_empty_array_with_capacity(x_2726);
lean_inc(x_2723);
x_2728 = lean_array_push(x_2727, x_2723);
x_2729 = lean_array_push(x_2728, x_2690);
x_2730 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2730, 0, x_2725);
lean_ctor_set(x_2730, 1, x_2729);
x_2731 = lean_mk_empty_array_with_capacity(x_2692);
lean_inc(x_2731);
x_2732 = lean_array_push(x_2731, x_2730);
lean_inc(x_2720);
x_2733 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2733, 0, x_2720);
lean_ctor_set(x_2733, 1, x_2732);
x_2734 = lean_mk_string("with");
lean_inc(x_2708);
x_2735 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2735, 0, x_2708);
lean_ctor_set(x_2735, 1, x_2734);
x_2736 = lean_mk_string("matchAlts");
lean_inc(x_2715);
x_2737 = lean_name_mk_string(x_2715, x_2736);
x_2738 = lean_mk_string("matchAlt");
x_2739 = lean_name_mk_string(x_2715, x_2738);
x_2740 = lean_mk_string("|");
lean_inc(x_2708);
x_2741 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2741, 0, x_2708);
lean_ctor_set(x_2741, 1, x_2740);
lean_inc(x_14);
lean_inc(x_2731);
x_2742 = lean_array_push(x_2731, x_14);
x_2743 = !lean_is_exclusive(x_14);
if (x_2743 == 0)
{
lean_object* x_2744; lean_object* x_2745; lean_object* x_2746; lean_object* x_2747; lean_object* x_2748; lean_object* x_2749; lean_object* x_2750; lean_object* x_2751; lean_object* x_2752; lean_object* x_2753; lean_object* x_2754; lean_object* x_2755; lean_object* x_2756; lean_object* x_2757; lean_object* x_2758; lean_object* x_2759; lean_object* x_2760; lean_object* x_2761; lean_object* x_2762; lean_object* x_2763; lean_object* x_2764; lean_object* x_2765; lean_object* x_2766; lean_object* x_2767; uint8_t x_2768; lean_object* x_2769; 
x_2744 = lean_ctor_get(x_14, 1);
lean_dec(x_2744);
x_2745 = lean_ctor_get(x_14, 0);
lean_dec(x_2745);
lean_inc(x_2720);
lean_ctor_set(x_14, 1, x_2742);
lean_ctor_set(x_14, 0, x_2720);
x_2746 = lean_mk_string("=>");
x_2747 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2747, 0, x_2708);
lean_ctor_set(x_2747, 1, x_2746);
x_2748 = lean_unsigned_to_nat(4u);
x_2749 = lean_mk_empty_array_with_capacity(x_2748);
x_2750 = lean_array_push(x_2749, x_2741);
x_2751 = lean_array_push(x_2750, x_14);
x_2752 = lean_array_push(x_2751, x_2747);
x_2753 = lean_array_push(x_2752, x_2704);
x_2754 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2754, 0, x_2739);
lean_ctor_set(x_2754, 1, x_2753);
lean_inc(x_2731);
x_2755 = lean_array_push(x_2731, x_2754);
x_2756 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2756, 0, x_2720);
lean_ctor_set(x_2756, 1, x_2755);
x_2757 = lean_array_push(x_2731, x_2756);
x_2758 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2758, 0, x_2737);
lean_ctor_set(x_2758, 1, x_2757);
x_2759 = lean_unsigned_to_nat(6u);
x_2760 = lean_mk_empty_array_with_capacity(x_2759);
x_2761 = lean_array_push(x_2760, x_2718);
lean_inc(x_2723);
x_2762 = lean_array_push(x_2761, x_2723);
x_2763 = lean_array_push(x_2762, x_2733);
x_2764 = lean_array_push(x_2763, x_2723);
x_2765 = lean_array_push(x_2764, x_2735);
x_2766 = lean_array_push(x_2765, x_2758);
x_2767 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2767, 0, x_2717);
lean_ctor_set(x_2767, 1, x_2766);
x_2768 = 1;
x_2769 = lean_box(x_2768);
lean_ctor_set(x_2699, 1, x_2769);
lean_ctor_set(x_2699, 0, x_2767);
lean_ctor_set(x_2706, 0, x_2698);
return x_2706;
}
else
{
lean_object* x_2770; lean_object* x_2771; lean_object* x_2772; lean_object* x_2773; lean_object* x_2774; lean_object* x_2775; lean_object* x_2776; lean_object* x_2777; lean_object* x_2778; lean_object* x_2779; lean_object* x_2780; lean_object* x_2781; lean_object* x_2782; lean_object* x_2783; lean_object* x_2784; lean_object* x_2785; lean_object* x_2786; lean_object* x_2787; lean_object* x_2788; lean_object* x_2789; lean_object* x_2790; lean_object* x_2791; lean_object* x_2792; uint8_t x_2793; lean_object* x_2794; 
lean_dec(x_14);
lean_inc(x_2720);
x_2770 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2770, 0, x_2720);
lean_ctor_set(x_2770, 1, x_2742);
x_2771 = lean_mk_string("=>");
x_2772 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2772, 0, x_2708);
lean_ctor_set(x_2772, 1, x_2771);
x_2773 = lean_unsigned_to_nat(4u);
x_2774 = lean_mk_empty_array_with_capacity(x_2773);
x_2775 = lean_array_push(x_2774, x_2741);
x_2776 = lean_array_push(x_2775, x_2770);
x_2777 = lean_array_push(x_2776, x_2772);
x_2778 = lean_array_push(x_2777, x_2704);
x_2779 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2779, 0, x_2739);
lean_ctor_set(x_2779, 1, x_2778);
lean_inc(x_2731);
x_2780 = lean_array_push(x_2731, x_2779);
x_2781 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2781, 0, x_2720);
lean_ctor_set(x_2781, 1, x_2780);
x_2782 = lean_array_push(x_2731, x_2781);
x_2783 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2783, 0, x_2737);
lean_ctor_set(x_2783, 1, x_2782);
x_2784 = lean_unsigned_to_nat(6u);
x_2785 = lean_mk_empty_array_with_capacity(x_2784);
x_2786 = lean_array_push(x_2785, x_2718);
lean_inc(x_2723);
x_2787 = lean_array_push(x_2786, x_2723);
x_2788 = lean_array_push(x_2787, x_2733);
x_2789 = lean_array_push(x_2788, x_2723);
x_2790 = lean_array_push(x_2789, x_2735);
x_2791 = lean_array_push(x_2790, x_2783);
x_2792 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2792, 0, x_2717);
lean_ctor_set(x_2792, 1, x_2791);
x_2793 = 1;
x_2794 = lean_box(x_2793);
lean_ctor_set(x_2699, 1, x_2794);
lean_ctor_set(x_2699, 0, x_2792);
lean_ctor_set(x_2706, 0, x_2698);
return x_2706;
}
}
else
{
lean_object* x_2795; lean_object* x_2796; lean_object* x_2797; lean_object* x_2798; lean_object* x_2799; lean_object* x_2800; lean_object* x_2801; lean_object* x_2802; lean_object* x_2803; lean_object* x_2804; lean_object* x_2805; lean_object* x_2806; lean_object* x_2807; lean_object* x_2808; lean_object* x_2809; lean_object* x_2810; lean_object* x_2811; lean_object* x_2812; lean_object* x_2813; lean_object* x_2814; lean_object* x_2815; lean_object* x_2816; lean_object* x_2817; lean_object* x_2818; lean_object* x_2819; lean_object* x_2820; lean_object* x_2821; lean_object* x_2822; lean_object* x_2823; lean_object* x_2824; lean_object* x_2825; lean_object* x_2826; lean_object* x_2827; lean_object* x_2828; lean_object* x_2829; lean_object* x_2830; lean_object* x_2831; lean_object* x_2832; lean_object* x_2833; lean_object* x_2834; lean_object* x_2835; lean_object* x_2836; lean_object* x_2837; lean_object* x_2838; lean_object* x_2839; lean_object* x_2840; lean_object* x_2841; lean_object* x_2842; lean_object* x_2843; lean_object* x_2844; lean_object* x_2845; lean_object* x_2846; lean_object* x_2847; lean_object* x_2848; lean_object* x_2849; lean_object* x_2850; lean_object* x_2851; lean_object* x_2852; lean_object* x_2853; lean_object* x_2854; uint8_t x_2855; lean_object* x_2856; lean_object* x_2857; 
x_2795 = lean_ctor_get(x_2706, 0);
x_2796 = lean_ctor_get(x_2706, 1);
lean_inc(x_2796);
lean_inc(x_2795);
lean_dec(x_2706);
x_2797 = lean_box(0);
x_2798 = lean_mk_string("Lean");
x_2799 = lean_name_mk_string(x_2797, x_2798);
x_2800 = lean_mk_string("Parser");
x_2801 = lean_name_mk_string(x_2799, x_2800);
x_2802 = lean_mk_string("Term");
x_2803 = lean_name_mk_string(x_2801, x_2802);
x_2804 = lean_mk_string("match");
lean_inc(x_2804);
lean_inc(x_2803);
x_2805 = lean_name_mk_string(x_2803, x_2804);
lean_inc(x_2795);
x_2806 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2806, 0, x_2795);
lean_ctor_set(x_2806, 1, x_2804);
x_2807 = lean_mk_string("null");
x_2808 = lean_name_mk_string(x_2797, x_2807);
x_2809 = lean_unsigned_to_nat(0u);
x_2810 = lean_mk_empty_array_with_capacity(x_2809);
lean_inc(x_2808);
x_2811 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2811, 0, x_2808);
lean_ctor_set(x_2811, 1, x_2810);
x_2812 = lean_mk_string("matchDiscr");
lean_inc(x_2803);
x_2813 = lean_name_mk_string(x_2803, x_2812);
x_2814 = lean_unsigned_to_nat(2u);
x_2815 = lean_mk_empty_array_with_capacity(x_2814);
lean_inc(x_2811);
x_2816 = lean_array_push(x_2815, x_2811);
x_2817 = lean_array_push(x_2816, x_2690);
x_2818 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2818, 0, x_2813);
lean_ctor_set(x_2818, 1, x_2817);
x_2819 = lean_mk_empty_array_with_capacity(x_2692);
lean_inc(x_2819);
x_2820 = lean_array_push(x_2819, x_2818);
lean_inc(x_2808);
x_2821 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2821, 0, x_2808);
lean_ctor_set(x_2821, 1, x_2820);
x_2822 = lean_mk_string("with");
lean_inc(x_2795);
x_2823 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2823, 0, x_2795);
lean_ctor_set(x_2823, 1, x_2822);
x_2824 = lean_mk_string("matchAlts");
lean_inc(x_2803);
x_2825 = lean_name_mk_string(x_2803, x_2824);
x_2826 = lean_mk_string("matchAlt");
x_2827 = lean_name_mk_string(x_2803, x_2826);
x_2828 = lean_mk_string("|");
lean_inc(x_2795);
x_2829 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2829, 0, x_2795);
lean_ctor_set(x_2829, 1, x_2828);
lean_inc(x_14);
lean_inc(x_2819);
x_2830 = lean_array_push(x_2819, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2831 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2831 = lean_box(0);
}
lean_inc(x_2808);
if (lean_is_scalar(x_2831)) {
 x_2832 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2832 = x_2831;
}
lean_ctor_set(x_2832, 0, x_2808);
lean_ctor_set(x_2832, 1, x_2830);
x_2833 = lean_mk_string("=>");
x_2834 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2834, 0, x_2795);
lean_ctor_set(x_2834, 1, x_2833);
x_2835 = lean_unsigned_to_nat(4u);
x_2836 = lean_mk_empty_array_with_capacity(x_2835);
x_2837 = lean_array_push(x_2836, x_2829);
x_2838 = lean_array_push(x_2837, x_2832);
x_2839 = lean_array_push(x_2838, x_2834);
x_2840 = lean_array_push(x_2839, x_2704);
x_2841 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2841, 0, x_2827);
lean_ctor_set(x_2841, 1, x_2840);
lean_inc(x_2819);
x_2842 = lean_array_push(x_2819, x_2841);
x_2843 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2843, 0, x_2808);
lean_ctor_set(x_2843, 1, x_2842);
x_2844 = lean_array_push(x_2819, x_2843);
x_2845 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2845, 0, x_2825);
lean_ctor_set(x_2845, 1, x_2844);
x_2846 = lean_unsigned_to_nat(6u);
x_2847 = lean_mk_empty_array_with_capacity(x_2846);
x_2848 = lean_array_push(x_2847, x_2806);
lean_inc(x_2811);
x_2849 = lean_array_push(x_2848, x_2811);
x_2850 = lean_array_push(x_2849, x_2821);
x_2851 = lean_array_push(x_2850, x_2811);
x_2852 = lean_array_push(x_2851, x_2823);
x_2853 = lean_array_push(x_2852, x_2845);
x_2854 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2854, 0, x_2805);
lean_ctor_set(x_2854, 1, x_2853);
x_2855 = 1;
x_2856 = lean_box(x_2855);
lean_ctor_set(x_2699, 1, x_2856);
lean_ctor_set(x_2699, 0, x_2854);
x_2857 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2857, 0, x_2698);
lean_ctor_set(x_2857, 1, x_2796);
return x_2857;
}
}
else
{
lean_object* x_2858; lean_object* x_2859; lean_object* x_2860; lean_object* x_2861; lean_object* x_2862; lean_object* x_2863; lean_object* x_2864; lean_object* x_2865; lean_object* x_2866; lean_object* x_2867; lean_object* x_2868; lean_object* x_2869; lean_object* x_2870; lean_object* x_2871; lean_object* x_2872; lean_object* x_2873; lean_object* x_2874; lean_object* x_2875; lean_object* x_2876; lean_object* x_2877; lean_object* x_2878; lean_object* x_2879; lean_object* x_2880; lean_object* x_2881; lean_object* x_2882; lean_object* x_2883; lean_object* x_2884; lean_object* x_2885; lean_object* x_2886; lean_object* x_2887; lean_object* x_2888; lean_object* x_2889; lean_object* x_2890; lean_object* x_2891; lean_object* x_2892; lean_object* x_2893; lean_object* x_2894; lean_object* x_2895; lean_object* x_2896; lean_object* x_2897; lean_object* x_2898; lean_object* x_2899; lean_object* x_2900; lean_object* x_2901; lean_object* x_2902; lean_object* x_2903; lean_object* x_2904; lean_object* x_2905; lean_object* x_2906; lean_object* x_2907; lean_object* x_2908; lean_object* x_2909; lean_object* x_2910; lean_object* x_2911; lean_object* x_2912; lean_object* x_2913; lean_object* x_2914; lean_object* x_2915; lean_object* x_2916; lean_object* x_2917; lean_object* x_2918; lean_object* x_2919; lean_object* x_2920; uint8_t x_2921; lean_object* x_2922; lean_object* x_2923; lean_object* x_2924; 
x_2858 = lean_ctor_get(x_2699, 0);
lean_inc(x_2858);
lean_dec(x_2699);
x_2859 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2700);
lean_dec(x_5);
x_2860 = lean_ctor_get(x_2859, 0);
lean_inc(x_2860);
x_2861 = lean_ctor_get(x_2859, 1);
lean_inc(x_2861);
if (lean_is_exclusive(x_2859)) {
 lean_ctor_release(x_2859, 0);
 lean_ctor_release(x_2859, 1);
 x_2862 = x_2859;
} else {
 lean_dec_ref(x_2859);
 x_2862 = lean_box(0);
}
x_2863 = lean_box(0);
x_2864 = lean_mk_string("Lean");
x_2865 = lean_name_mk_string(x_2863, x_2864);
x_2866 = lean_mk_string("Parser");
x_2867 = lean_name_mk_string(x_2865, x_2866);
x_2868 = lean_mk_string("Term");
x_2869 = lean_name_mk_string(x_2867, x_2868);
x_2870 = lean_mk_string("match");
lean_inc(x_2870);
lean_inc(x_2869);
x_2871 = lean_name_mk_string(x_2869, x_2870);
lean_inc(x_2860);
x_2872 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2872, 0, x_2860);
lean_ctor_set(x_2872, 1, x_2870);
x_2873 = lean_mk_string("null");
x_2874 = lean_name_mk_string(x_2863, x_2873);
x_2875 = lean_unsigned_to_nat(0u);
x_2876 = lean_mk_empty_array_with_capacity(x_2875);
lean_inc(x_2874);
x_2877 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2877, 0, x_2874);
lean_ctor_set(x_2877, 1, x_2876);
x_2878 = lean_mk_string("matchDiscr");
lean_inc(x_2869);
x_2879 = lean_name_mk_string(x_2869, x_2878);
x_2880 = lean_unsigned_to_nat(2u);
x_2881 = lean_mk_empty_array_with_capacity(x_2880);
lean_inc(x_2877);
x_2882 = lean_array_push(x_2881, x_2877);
x_2883 = lean_array_push(x_2882, x_2690);
x_2884 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2884, 0, x_2879);
lean_ctor_set(x_2884, 1, x_2883);
x_2885 = lean_mk_empty_array_with_capacity(x_2692);
lean_inc(x_2885);
x_2886 = lean_array_push(x_2885, x_2884);
lean_inc(x_2874);
x_2887 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2887, 0, x_2874);
lean_ctor_set(x_2887, 1, x_2886);
x_2888 = lean_mk_string("with");
lean_inc(x_2860);
x_2889 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2889, 0, x_2860);
lean_ctor_set(x_2889, 1, x_2888);
x_2890 = lean_mk_string("matchAlts");
lean_inc(x_2869);
x_2891 = lean_name_mk_string(x_2869, x_2890);
x_2892 = lean_mk_string("matchAlt");
x_2893 = lean_name_mk_string(x_2869, x_2892);
x_2894 = lean_mk_string("|");
lean_inc(x_2860);
x_2895 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2895, 0, x_2860);
lean_ctor_set(x_2895, 1, x_2894);
lean_inc(x_14);
lean_inc(x_2885);
x_2896 = lean_array_push(x_2885, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2897 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2897 = lean_box(0);
}
lean_inc(x_2874);
if (lean_is_scalar(x_2897)) {
 x_2898 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2898 = x_2897;
}
lean_ctor_set(x_2898, 0, x_2874);
lean_ctor_set(x_2898, 1, x_2896);
x_2899 = lean_mk_string("=>");
x_2900 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2900, 0, x_2860);
lean_ctor_set(x_2900, 1, x_2899);
x_2901 = lean_unsigned_to_nat(4u);
x_2902 = lean_mk_empty_array_with_capacity(x_2901);
x_2903 = lean_array_push(x_2902, x_2895);
x_2904 = lean_array_push(x_2903, x_2898);
x_2905 = lean_array_push(x_2904, x_2900);
x_2906 = lean_array_push(x_2905, x_2858);
x_2907 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2907, 0, x_2893);
lean_ctor_set(x_2907, 1, x_2906);
lean_inc(x_2885);
x_2908 = lean_array_push(x_2885, x_2907);
x_2909 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2909, 0, x_2874);
lean_ctor_set(x_2909, 1, x_2908);
x_2910 = lean_array_push(x_2885, x_2909);
x_2911 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2911, 0, x_2891);
lean_ctor_set(x_2911, 1, x_2910);
x_2912 = lean_unsigned_to_nat(6u);
x_2913 = lean_mk_empty_array_with_capacity(x_2912);
x_2914 = lean_array_push(x_2913, x_2872);
lean_inc(x_2877);
x_2915 = lean_array_push(x_2914, x_2877);
x_2916 = lean_array_push(x_2915, x_2887);
x_2917 = lean_array_push(x_2916, x_2877);
x_2918 = lean_array_push(x_2917, x_2889);
x_2919 = lean_array_push(x_2918, x_2911);
x_2920 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2920, 0, x_2871);
lean_ctor_set(x_2920, 1, x_2919);
x_2921 = 1;
x_2922 = lean_box(x_2921);
x_2923 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2923, 0, x_2920);
lean_ctor_set(x_2923, 1, x_2922);
lean_ctor_set(x_2698, 1, x_2923);
if (lean_is_scalar(x_2862)) {
 x_2924 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2924 = x_2862;
}
lean_ctor_set(x_2924, 0, x_2698);
lean_ctor_set(x_2924, 1, x_2861);
return x_2924;
}
}
else
{
lean_object* x_2925; lean_object* x_2926; lean_object* x_2927; lean_object* x_2928; lean_object* x_2929; lean_object* x_2930; lean_object* x_2931; lean_object* x_2932; lean_object* x_2933; lean_object* x_2934; lean_object* x_2935; lean_object* x_2936; lean_object* x_2937; lean_object* x_2938; lean_object* x_2939; lean_object* x_2940; lean_object* x_2941; lean_object* x_2942; lean_object* x_2943; lean_object* x_2944; lean_object* x_2945; lean_object* x_2946; lean_object* x_2947; lean_object* x_2948; lean_object* x_2949; lean_object* x_2950; lean_object* x_2951; lean_object* x_2952; lean_object* x_2953; lean_object* x_2954; lean_object* x_2955; lean_object* x_2956; lean_object* x_2957; lean_object* x_2958; lean_object* x_2959; lean_object* x_2960; lean_object* x_2961; lean_object* x_2962; lean_object* x_2963; lean_object* x_2964; lean_object* x_2965; lean_object* x_2966; lean_object* x_2967; lean_object* x_2968; lean_object* x_2969; lean_object* x_2970; lean_object* x_2971; lean_object* x_2972; lean_object* x_2973; lean_object* x_2974; lean_object* x_2975; lean_object* x_2976; lean_object* x_2977; lean_object* x_2978; lean_object* x_2979; lean_object* x_2980; lean_object* x_2981; lean_object* x_2982; lean_object* x_2983; lean_object* x_2984; lean_object* x_2985; lean_object* x_2986; lean_object* x_2987; lean_object* x_2988; lean_object* x_2989; uint8_t x_2990; lean_object* x_2991; lean_object* x_2992; lean_object* x_2993; lean_object* x_2994; 
x_2925 = lean_ctor_get(x_2698, 0);
lean_inc(x_2925);
lean_dec(x_2698);
x_2926 = lean_ctor_get(x_2699, 0);
lean_inc(x_2926);
if (lean_is_exclusive(x_2699)) {
 lean_ctor_release(x_2699, 0);
 lean_ctor_release(x_2699, 1);
 x_2927 = x_2699;
} else {
 lean_dec_ref(x_2699);
 x_2927 = lean_box(0);
}
x_2928 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2700);
lean_dec(x_5);
x_2929 = lean_ctor_get(x_2928, 0);
lean_inc(x_2929);
x_2930 = lean_ctor_get(x_2928, 1);
lean_inc(x_2930);
if (lean_is_exclusive(x_2928)) {
 lean_ctor_release(x_2928, 0);
 lean_ctor_release(x_2928, 1);
 x_2931 = x_2928;
} else {
 lean_dec_ref(x_2928);
 x_2931 = lean_box(0);
}
x_2932 = lean_box(0);
x_2933 = lean_mk_string("Lean");
x_2934 = lean_name_mk_string(x_2932, x_2933);
x_2935 = lean_mk_string("Parser");
x_2936 = lean_name_mk_string(x_2934, x_2935);
x_2937 = lean_mk_string("Term");
x_2938 = lean_name_mk_string(x_2936, x_2937);
x_2939 = lean_mk_string("match");
lean_inc(x_2939);
lean_inc(x_2938);
x_2940 = lean_name_mk_string(x_2938, x_2939);
lean_inc(x_2929);
x_2941 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2941, 0, x_2929);
lean_ctor_set(x_2941, 1, x_2939);
x_2942 = lean_mk_string("null");
x_2943 = lean_name_mk_string(x_2932, x_2942);
x_2944 = lean_unsigned_to_nat(0u);
x_2945 = lean_mk_empty_array_with_capacity(x_2944);
lean_inc(x_2943);
x_2946 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2946, 0, x_2943);
lean_ctor_set(x_2946, 1, x_2945);
x_2947 = lean_mk_string("matchDiscr");
lean_inc(x_2938);
x_2948 = lean_name_mk_string(x_2938, x_2947);
x_2949 = lean_unsigned_to_nat(2u);
x_2950 = lean_mk_empty_array_with_capacity(x_2949);
lean_inc(x_2946);
x_2951 = lean_array_push(x_2950, x_2946);
x_2952 = lean_array_push(x_2951, x_2690);
x_2953 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2953, 0, x_2948);
lean_ctor_set(x_2953, 1, x_2952);
x_2954 = lean_mk_empty_array_with_capacity(x_2692);
lean_inc(x_2954);
x_2955 = lean_array_push(x_2954, x_2953);
lean_inc(x_2943);
x_2956 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2956, 0, x_2943);
lean_ctor_set(x_2956, 1, x_2955);
x_2957 = lean_mk_string("with");
lean_inc(x_2929);
x_2958 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2958, 0, x_2929);
lean_ctor_set(x_2958, 1, x_2957);
x_2959 = lean_mk_string("matchAlts");
lean_inc(x_2938);
x_2960 = lean_name_mk_string(x_2938, x_2959);
x_2961 = lean_mk_string("matchAlt");
x_2962 = lean_name_mk_string(x_2938, x_2961);
x_2963 = lean_mk_string("|");
lean_inc(x_2929);
x_2964 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2964, 0, x_2929);
lean_ctor_set(x_2964, 1, x_2963);
lean_inc(x_14);
lean_inc(x_2954);
x_2965 = lean_array_push(x_2954, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2966 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2966 = lean_box(0);
}
lean_inc(x_2943);
if (lean_is_scalar(x_2966)) {
 x_2967 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2967 = x_2966;
}
lean_ctor_set(x_2967, 0, x_2943);
lean_ctor_set(x_2967, 1, x_2965);
x_2968 = lean_mk_string("=>");
x_2969 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2969, 0, x_2929);
lean_ctor_set(x_2969, 1, x_2968);
x_2970 = lean_unsigned_to_nat(4u);
x_2971 = lean_mk_empty_array_with_capacity(x_2970);
x_2972 = lean_array_push(x_2971, x_2964);
x_2973 = lean_array_push(x_2972, x_2967);
x_2974 = lean_array_push(x_2973, x_2969);
x_2975 = lean_array_push(x_2974, x_2926);
x_2976 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2976, 0, x_2962);
lean_ctor_set(x_2976, 1, x_2975);
lean_inc(x_2954);
x_2977 = lean_array_push(x_2954, x_2976);
x_2978 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2978, 0, x_2943);
lean_ctor_set(x_2978, 1, x_2977);
x_2979 = lean_array_push(x_2954, x_2978);
x_2980 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2980, 0, x_2960);
lean_ctor_set(x_2980, 1, x_2979);
x_2981 = lean_unsigned_to_nat(6u);
x_2982 = lean_mk_empty_array_with_capacity(x_2981);
x_2983 = lean_array_push(x_2982, x_2941);
lean_inc(x_2946);
x_2984 = lean_array_push(x_2983, x_2946);
x_2985 = lean_array_push(x_2984, x_2956);
x_2986 = lean_array_push(x_2985, x_2946);
x_2987 = lean_array_push(x_2986, x_2958);
x_2988 = lean_array_push(x_2987, x_2980);
x_2989 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2989, 0, x_2940);
lean_ctor_set(x_2989, 1, x_2988);
x_2990 = 1;
x_2991 = lean_box(x_2990);
if (lean_is_scalar(x_2927)) {
 x_2992 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2992 = x_2927;
}
lean_ctor_set(x_2992, 0, x_2989);
lean_ctor_set(x_2992, 1, x_2991);
x_2993 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2993, 0, x_2925);
lean_ctor_set(x_2993, 1, x_2992);
if (lean_is_scalar(x_2931)) {
 x_2994 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2994 = x_2931;
}
lean_ctor_set(x_2994, 0, x_2993);
lean_ctor_set(x_2994, 1, x_2930);
return x_2994;
}
}
}
else
{
lean_object* x_2995; lean_object* x_2996; lean_object* x_2997; lean_object* x_2998; lean_object* x_2999; lean_object* x_3000; lean_object* x_3001; lean_object* x_3002; lean_object* x_3003; lean_object* x_3004; lean_object* x_3005; lean_object* x_3006; uint8_t x_3007; 
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_inc(x_5);
x_2995 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2996 = lean_ctor_get(x_2995, 0);
lean_inc(x_2996);
x_2997 = lean_ctor_get(x_2995, 1);
lean_inc(x_2997);
lean_dec(x_2995);
x_2998 = lean_unsigned_to_nat(1u);
x_2999 = lean_nat_add(x_3, x_2998);
lean_dec(x_3);
x_3000 = l_Lean_mkHole(x_14);
lean_inc(x_2996);
x_3001 = l_Lean_Elab_Term_mkExplicitBinder(x_2996, x_3000);
x_3002 = lean_array_push(x_4, x_3001);
lean_inc(x_5);
x_3003 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2999, x_3002, x_5, x_2997);
x_3004 = lean_ctor_get(x_3003, 0);
lean_inc(x_3004);
x_3005 = lean_ctor_get(x_3004, 1);
lean_inc(x_3005);
x_3006 = lean_ctor_get(x_3003, 1);
lean_inc(x_3006);
lean_dec(x_3003);
x_3007 = !lean_is_exclusive(x_3004);
if (x_3007 == 0)
{
lean_object* x_3008; uint8_t x_3009; 
x_3008 = lean_ctor_get(x_3004, 1);
lean_dec(x_3008);
x_3009 = !lean_is_exclusive(x_3005);
if (x_3009 == 0)
{
lean_object* x_3010; lean_object* x_3011; lean_object* x_3012; uint8_t x_3013; 
x_3010 = lean_ctor_get(x_3005, 0);
x_3011 = lean_ctor_get(x_3005, 1);
lean_dec(x_3011);
x_3012 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3006);
lean_dec(x_5);
x_3013 = !lean_is_exclusive(x_3012);
if (x_3013 == 0)
{
lean_object* x_3014; lean_object* x_3015; lean_object* x_3016; lean_object* x_3017; lean_object* x_3018; lean_object* x_3019; lean_object* x_3020; lean_object* x_3021; lean_object* x_3022; lean_object* x_3023; lean_object* x_3024; lean_object* x_3025; lean_object* x_3026; lean_object* x_3027; lean_object* x_3028; lean_object* x_3029; lean_object* x_3030; lean_object* x_3031; lean_object* x_3032; lean_object* x_3033; lean_object* x_3034; lean_object* x_3035; lean_object* x_3036; lean_object* x_3037; lean_object* x_3038; lean_object* x_3039; lean_object* x_3040; lean_object* x_3041; lean_object* x_3042; lean_object* x_3043; lean_object* x_3044; lean_object* x_3045; lean_object* x_3046; lean_object* x_3047; lean_object* x_3048; uint8_t x_3049; 
x_3014 = lean_ctor_get(x_3012, 0);
x_3015 = lean_box(0);
x_3016 = lean_mk_string("Lean");
x_3017 = lean_name_mk_string(x_3015, x_3016);
x_3018 = lean_mk_string("Parser");
x_3019 = lean_name_mk_string(x_3017, x_3018);
x_3020 = lean_mk_string("Term");
x_3021 = lean_name_mk_string(x_3019, x_3020);
x_3022 = lean_mk_string("match");
lean_inc(x_3022);
lean_inc(x_3021);
x_3023 = lean_name_mk_string(x_3021, x_3022);
lean_inc(x_3014);
x_3024 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3024, 0, x_3014);
lean_ctor_set(x_3024, 1, x_3022);
x_3025 = lean_mk_string("null");
x_3026 = lean_name_mk_string(x_3015, x_3025);
x_3027 = lean_unsigned_to_nat(0u);
x_3028 = lean_mk_empty_array_with_capacity(x_3027);
lean_inc(x_3026);
x_3029 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3029, 0, x_3026);
lean_ctor_set(x_3029, 1, x_3028);
x_3030 = lean_mk_string("matchDiscr");
lean_inc(x_3021);
x_3031 = lean_name_mk_string(x_3021, x_3030);
x_3032 = lean_unsigned_to_nat(2u);
x_3033 = lean_mk_empty_array_with_capacity(x_3032);
lean_inc(x_3029);
x_3034 = lean_array_push(x_3033, x_3029);
x_3035 = lean_array_push(x_3034, x_2996);
x_3036 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3036, 0, x_3031);
lean_ctor_set(x_3036, 1, x_3035);
x_3037 = lean_mk_empty_array_with_capacity(x_2998);
lean_inc(x_3037);
x_3038 = lean_array_push(x_3037, x_3036);
lean_inc(x_3026);
x_3039 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3039, 0, x_3026);
lean_ctor_set(x_3039, 1, x_3038);
x_3040 = lean_mk_string("with");
lean_inc(x_3014);
x_3041 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3041, 0, x_3014);
lean_ctor_set(x_3041, 1, x_3040);
x_3042 = lean_mk_string("matchAlts");
lean_inc(x_3021);
x_3043 = lean_name_mk_string(x_3021, x_3042);
x_3044 = lean_mk_string("matchAlt");
x_3045 = lean_name_mk_string(x_3021, x_3044);
x_3046 = lean_mk_string("|");
lean_inc(x_3014);
x_3047 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3047, 0, x_3014);
lean_ctor_set(x_3047, 1, x_3046);
lean_inc(x_14);
lean_inc(x_3037);
x_3048 = lean_array_push(x_3037, x_14);
x_3049 = !lean_is_exclusive(x_14);
if (x_3049 == 0)
{
lean_object* x_3050; lean_object* x_3051; lean_object* x_3052; lean_object* x_3053; lean_object* x_3054; lean_object* x_3055; lean_object* x_3056; lean_object* x_3057; lean_object* x_3058; lean_object* x_3059; lean_object* x_3060; lean_object* x_3061; lean_object* x_3062; lean_object* x_3063; lean_object* x_3064; lean_object* x_3065; lean_object* x_3066; lean_object* x_3067; lean_object* x_3068; lean_object* x_3069; lean_object* x_3070; lean_object* x_3071; lean_object* x_3072; lean_object* x_3073; uint8_t x_3074; lean_object* x_3075; 
x_3050 = lean_ctor_get(x_14, 1);
lean_dec(x_3050);
x_3051 = lean_ctor_get(x_14, 0);
lean_dec(x_3051);
lean_inc(x_3026);
lean_ctor_set(x_14, 1, x_3048);
lean_ctor_set(x_14, 0, x_3026);
x_3052 = lean_mk_string("=>");
x_3053 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3053, 0, x_3014);
lean_ctor_set(x_3053, 1, x_3052);
x_3054 = lean_unsigned_to_nat(4u);
x_3055 = lean_mk_empty_array_with_capacity(x_3054);
x_3056 = lean_array_push(x_3055, x_3047);
x_3057 = lean_array_push(x_3056, x_14);
x_3058 = lean_array_push(x_3057, x_3053);
x_3059 = lean_array_push(x_3058, x_3010);
x_3060 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3060, 0, x_3045);
lean_ctor_set(x_3060, 1, x_3059);
lean_inc(x_3037);
x_3061 = lean_array_push(x_3037, x_3060);
x_3062 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3062, 0, x_3026);
lean_ctor_set(x_3062, 1, x_3061);
x_3063 = lean_array_push(x_3037, x_3062);
x_3064 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3064, 0, x_3043);
lean_ctor_set(x_3064, 1, x_3063);
x_3065 = lean_unsigned_to_nat(6u);
x_3066 = lean_mk_empty_array_with_capacity(x_3065);
x_3067 = lean_array_push(x_3066, x_3024);
lean_inc(x_3029);
x_3068 = lean_array_push(x_3067, x_3029);
x_3069 = lean_array_push(x_3068, x_3039);
x_3070 = lean_array_push(x_3069, x_3029);
x_3071 = lean_array_push(x_3070, x_3041);
x_3072 = lean_array_push(x_3071, x_3064);
x_3073 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3073, 0, x_3023);
lean_ctor_set(x_3073, 1, x_3072);
x_3074 = 1;
x_3075 = lean_box(x_3074);
lean_ctor_set(x_3005, 1, x_3075);
lean_ctor_set(x_3005, 0, x_3073);
lean_ctor_set(x_3012, 0, x_3004);
return x_3012;
}
else
{
lean_object* x_3076; lean_object* x_3077; lean_object* x_3078; lean_object* x_3079; lean_object* x_3080; lean_object* x_3081; lean_object* x_3082; lean_object* x_3083; lean_object* x_3084; lean_object* x_3085; lean_object* x_3086; lean_object* x_3087; lean_object* x_3088; lean_object* x_3089; lean_object* x_3090; lean_object* x_3091; lean_object* x_3092; lean_object* x_3093; lean_object* x_3094; lean_object* x_3095; lean_object* x_3096; lean_object* x_3097; lean_object* x_3098; uint8_t x_3099; lean_object* x_3100; 
lean_dec(x_14);
lean_inc(x_3026);
x_3076 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3076, 0, x_3026);
lean_ctor_set(x_3076, 1, x_3048);
x_3077 = lean_mk_string("=>");
x_3078 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3078, 0, x_3014);
lean_ctor_set(x_3078, 1, x_3077);
x_3079 = lean_unsigned_to_nat(4u);
x_3080 = lean_mk_empty_array_with_capacity(x_3079);
x_3081 = lean_array_push(x_3080, x_3047);
x_3082 = lean_array_push(x_3081, x_3076);
x_3083 = lean_array_push(x_3082, x_3078);
x_3084 = lean_array_push(x_3083, x_3010);
x_3085 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3085, 0, x_3045);
lean_ctor_set(x_3085, 1, x_3084);
lean_inc(x_3037);
x_3086 = lean_array_push(x_3037, x_3085);
x_3087 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3087, 0, x_3026);
lean_ctor_set(x_3087, 1, x_3086);
x_3088 = lean_array_push(x_3037, x_3087);
x_3089 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3089, 0, x_3043);
lean_ctor_set(x_3089, 1, x_3088);
x_3090 = lean_unsigned_to_nat(6u);
x_3091 = lean_mk_empty_array_with_capacity(x_3090);
x_3092 = lean_array_push(x_3091, x_3024);
lean_inc(x_3029);
x_3093 = lean_array_push(x_3092, x_3029);
x_3094 = lean_array_push(x_3093, x_3039);
x_3095 = lean_array_push(x_3094, x_3029);
x_3096 = lean_array_push(x_3095, x_3041);
x_3097 = lean_array_push(x_3096, x_3089);
x_3098 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3098, 0, x_3023);
lean_ctor_set(x_3098, 1, x_3097);
x_3099 = 1;
x_3100 = lean_box(x_3099);
lean_ctor_set(x_3005, 1, x_3100);
lean_ctor_set(x_3005, 0, x_3098);
lean_ctor_set(x_3012, 0, x_3004);
return x_3012;
}
}
else
{
lean_object* x_3101; lean_object* x_3102; lean_object* x_3103; lean_object* x_3104; lean_object* x_3105; lean_object* x_3106; lean_object* x_3107; lean_object* x_3108; lean_object* x_3109; lean_object* x_3110; lean_object* x_3111; lean_object* x_3112; lean_object* x_3113; lean_object* x_3114; lean_object* x_3115; lean_object* x_3116; lean_object* x_3117; lean_object* x_3118; lean_object* x_3119; lean_object* x_3120; lean_object* x_3121; lean_object* x_3122; lean_object* x_3123; lean_object* x_3124; lean_object* x_3125; lean_object* x_3126; lean_object* x_3127; lean_object* x_3128; lean_object* x_3129; lean_object* x_3130; lean_object* x_3131; lean_object* x_3132; lean_object* x_3133; lean_object* x_3134; lean_object* x_3135; lean_object* x_3136; lean_object* x_3137; lean_object* x_3138; lean_object* x_3139; lean_object* x_3140; lean_object* x_3141; lean_object* x_3142; lean_object* x_3143; lean_object* x_3144; lean_object* x_3145; lean_object* x_3146; lean_object* x_3147; lean_object* x_3148; lean_object* x_3149; lean_object* x_3150; lean_object* x_3151; lean_object* x_3152; lean_object* x_3153; lean_object* x_3154; lean_object* x_3155; lean_object* x_3156; lean_object* x_3157; lean_object* x_3158; lean_object* x_3159; lean_object* x_3160; uint8_t x_3161; lean_object* x_3162; lean_object* x_3163; 
x_3101 = lean_ctor_get(x_3012, 0);
x_3102 = lean_ctor_get(x_3012, 1);
lean_inc(x_3102);
lean_inc(x_3101);
lean_dec(x_3012);
x_3103 = lean_box(0);
x_3104 = lean_mk_string("Lean");
x_3105 = lean_name_mk_string(x_3103, x_3104);
x_3106 = lean_mk_string("Parser");
x_3107 = lean_name_mk_string(x_3105, x_3106);
x_3108 = lean_mk_string("Term");
x_3109 = lean_name_mk_string(x_3107, x_3108);
x_3110 = lean_mk_string("match");
lean_inc(x_3110);
lean_inc(x_3109);
x_3111 = lean_name_mk_string(x_3109, x_3110);
lean_inc(x_3101);
x_3112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3112, 0, x_3101);
lean_ctor_set(x_3112, 1, x_3110);
x_3113 = lean_mk_string("null");
x_3114 = lean_name_mk_string(x_3103, x_3113);
x_3115 = lean_unsigned_to_nat(0u);
x_3116 = lean_mk_empty_array_with_capacity(x_3115);
lean_inc(x_3114);
x_3117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3117, 0, x_3114);
lean_ctor_set(x_3117, 1, x_3116);
x_3118 = lean_mk_string("matchDiscr");
lean_inc(x_3109);
x_3119 = lean_name_mk_string(x_3109, x_3118);
x_3120 = lean_unsigned_to_nat(2u);
x_3121 = lean_mk_empty_array_with_capacity(x_3120);
lean_inc(x_3117);
x_3122 = lean_array_push(x_3121, x_3117);
x_3123 = lean_array_push(x_3122, x_2996);
x_3124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3124, 0, x_3119);
lean_ctor_set(x_3124, 1, x_3123);
x_3125 = lean_mk_empty_array_with_capacity(x_2998);
lean_inc(x_3125);
x_3126 = lean_array_push(x_3125, x_3124);
lean_inc(x_3114);
x_3127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3127, 0, x_3114);
lean_ctor_set(x_3127, 1, x_3126);
x_3128 = lean_mk_string("with");
lean_inc(x_3101);
x_3129 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3129, 0, x_3101);
lean_ctor_set(x_3129, 1, x_3128);
x_3130 = lean_mk_string("matchAlts");
lean_inc(x_3109);
x_3131 = lean_name_mk_string(x_3109, x_3130);
x_3132 = lean_mk_string("matchAlt");
x_3133 = lean_name_mk_string(x_3109, x_3132);
x_3134 = lean_mk_string("|");
lean_inc(x_3101);
x_3135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3135, 0, x_3101);
lean_ctor_set(x_3135, 1, x_3134);
lean_inc(x_14);
lean_inc(x_3125);
x_3136 = lean_array_push(x_3125, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3137 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3137 = lean_box(0);
}
lean_inc(x_3114);
if (lean_is_scalar(x_3137)) {
 x_3138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3138 = x_3137;
}
lean_ctor_set(x_3138, 0, x_3114);
lean_ctor_set(x_3138, 1, x_3136);
x_3139 = lean_mk_string("=>");
x_3140 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3140, 0, x_3101);
lean_ctor_set(x_3140, 1, x_3139);
x_3141 = lean_unsigned_to_nat(4u);
x_3142 = lean_mk_empty_array_with_capacity(x_3141);
x_3143 = lean_array_push(x_3142, x_3135);
x_3144 = lean_array_push(x_3143, x_3138);
x_3145 = lean_array_push(x_3144, x_3140);
x_3146 = lean_array_push(x_3145, x_3010);
x_3147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3147, 0, x_3133);
lean_ctor_set(x_3147, 1, x_3146);
lean_inc(x_3125);
x_3148 = lean_array_push(x_3125, x_3147);
x_3149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3149, 0, x_3114);
lean_ctor_set(x_3149, 1, x_3148);
x_3150 = lean_array_push(x_3125, x_3149);
x_3151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3151, 0, x_3131);
lean_ctor_set(x_3151, 1, x_3150);
x_3152 = lean_unsigned_to_nat(6u);
x_3153 = lean_mk_empty_array_with_capacity(x_3152);
x_3154 = lean_array_push(x_3153, x_3112);
lean_inc(x_3117);
x_3155 = lean_array_push(x_3154, x_3117);
x_3156 = lean_array_push(x_3155, x_3127);
x_3157 = lean_array_push(x_3156, x_3117);
x_3158 = lean_array_push(x_3157, x_3129);
x_3159 = lean_array_push(x_3158, x_3151);
x_3160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3160, 0, x_3111);
lean_ctor_set(x_3160, 1, x_3159);
x_3161 = 1;
x_3162 = lean_box(x_3161);
lean_ctor_set(x_3005, 1, x_3162);
lean_ctor_set(x_3005, 0, x_3160);
x_3163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3163, 0, x_3004);
lean_ctor_set(x_3163, 1, x_3102);
return x_3163;
}
}
else
{
lean_object* x_3164; lean_object* x_3165; lean_object* x_3166; lean_object* x_3167; lean_object* x_3168; lean_object* x_3169; lean_object* x_3170; lean_object* x_3171; lean_object* x_3172; lean_object* x_3173; lean_object* x_3174; lean_object* x_3175; lean_object* x_3176; lean_object* x_3177; lean_object* x_3178; lean_object* x_3179; lean_object* x_3180; lean_object* x_3181; lean_object* x_3182; lean_object* x_3183; lean_object* x_3184; lean_object* x_3185; lean_object* x_3186; lean_object* x_3187; lean_object* x_3188; lean_object* x_3189; lean_object* x_3190; lean_object* x_3191; lean_object* x_3192; lean_object* x_3193; lean_object* x_3194; lean_object* x_3195; lean_object* x_3196; lean_object* x_3197; lean_object* x_3198; lean_object* x_3199; lean_object* x_3200; lean_object* x_3201; lean_object* x_3202; lean_object* x_3203; lean_object* x_3204; lean_object* x_3205; lean_object* x_3206; lean_object* x_3207; lean_object* x_3208; lean_object* x_3209; lean_object* x_3210; lean_object* x_3211; lean_object* x_3212; lean_object* x_3213; lean_object* x_3214; lean_object* x_3215; lean_object* x_3216; lean_object* x_3217; lean_object* x_3218; lean_object* x_3219; lean_object* x_3220; lean_object* x_3221; lean_object* x_3222; lean_object* x_3223; lean_object* x_3224; lean_object* x_3225; lean_object* x_3226; uint8_t x_3227; lean_object* x_3228; lean_object* x_3229; lean_object* x_3230; 
x_3164 = lean_ctor_get(x_3005, 0);
lean_inc(x_3164);
lean_dec(x_3005);
x_3165 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3006);
lean_dec(x_5);
x_3166 = lean_ctor_get(x_3165, 0);
lean_inc(x_3166);
x_3167 = lean_ctor_get(x_3165, 1);
lean_inc(x_3167);
if (lean_is_exclusive(x_3165)) {
 lean_ctor_release(x_3165, 0);
 lean_ctor_release(x_3165, 1);
 x_3168 = x_3165;
} else {
 lean_dec_ref(x_3165);
 x_3168 = lean_box(0);
}
x_3169 = lean_box(0);
x_3170 = lean_mk_string("Lean");
x_3171 = lean_name_mk_string(x_3169, x_3170);
x_3172 = lean_mk_string("Parser");
x_3173 = lean_name_mk_string(x_3171, x_3172);
x_3174 = lean_mk_string("Term");
x_3175 = lean_name_mk_string(x_3173, x_3174);
x_3176 = lean_mk_string("match");
lean_inc(x_3176);
lean_inc(x_3175);
x_3177 = lean_name_mk_string(x_3175, x_3176);
lean_inc(x_3166);
x_3178 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3178, 0, x_3166);
lean_ctor_set(x_3178, 1, x_3176);
x_3179 = lean_mk_string("null");
x_3180 = lean_name_mk_string(x_3169, x_3179);
x_3181 = lean_unsigned_to_nat(0u);
x_3182 = lean_mk_empty_array_with_capacity(x_3181);
lean_inc(x_3180);
x_3183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3183, 0, x_3180);
lean_ctor_set(x_3183, 1, x_3182);
x_3184 = lean_mk_string("matchDiscr");
lean_inc(x_3175);
x_3185 = lean_name_mk_string(x_3175, x_3184);
x_3186 = lean_unsigned_to_nat(2u);
x_3187 = lean_mk_empty_array_with_capacity(x_3186);
lean_inc(x_3183);
x_3188 = lean_array_push(x_3187, x_3183);
x_3189 = lean_array_push(x_3188, x_2996);
x_3190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3190, 0, x_3185);
lean_ctor_set(x_3190, 1, x_3189);
x_3191 = lean_mk_empty_array_with_capacity(x_2998);
lean_inc(x_3191);
x_3192 = lean_array_push(x_3191, x_3190);
lean_inc(x_3180);
x_3193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3193, 0, x_3180);
lean_ctor_set(x_3193, 1, x_3192);
x_3194 = lean_mk_string("with");
lean_inc(x_3166);
x_3195 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3195, 0, x_3166);
lean_ctor_set(x_3195, 1, x_3194);
x_3196 = lean_mk_string("matchAlts");
lean_inc(x_3175);
x_3197 = lean_name_mk_string(x_3175, x_3196);
x_3198 = lean_mk_string("matchAlt");
x_3199 = lean_name_mk_string(x_3175, x_3198);
x_3200 = lean_mk_string("|");
lean_inc(x_3166);
x_3201 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3201, 0, x_3166);
lean_ctor_set(x_3201, 1, x_3200);
lean_inc(x_14);
lean_inc(x_3191);
x_3202 = lean_array_push(x_3191, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3203 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3203 = lean_box(0);
}
lean_inc(x_3180);
if (lean_is_scalar(x_3203)) {
 x_3204 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3204 = x_3203;
}
lean_ctor_set(x_3204, 0, x_3180);
lean_ctor_set(x_3204, 1, x_3202);
x_3205 = lean_mk_string("=>");
x_3206 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3206, 0, x_3166);
lean_ctor_set(x_3206, 1, x_3205);
x_3207 = lean_unsigned_to_nat(4u);
x_3208 = lean_mk_empty_array_with_capacity(x_3207);
x_3209 = lean_array_push(x_3208, x_3201);
x_3210 = lean_array_push(x_3209, x_3204);
x_3211 = lean_array_push(x_3210, x_3206);
x_3212 = lean_array_push(x_3211, x_3164);
x_3213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3213, 0, x_3199);
lean_ctor_set(x_3213, 1, x_3212);
lean_inc(x_3191);
x_3214 = lean_array_push(x_3191, x_3213);
x_3215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3215, 0, x_3180);
lean_ctor_set(x_3215, 1, x_3214);
x_3216 = lean_array_push(x_3191, x_3215);
x_3217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3217, 0, x_3197);
lean_ctor_set(x_3217, 1, x_3216);
x_3218 = lean_unsigned_to_nat(6u);
x_3219 = lean_mk_empty_array_with_capacity(x_3218);
x_3220 = lean_array_push(x_3219, x_3178);
lean_inc(x_3183);
x_3221 = lean_array_push(x_3220, x_3183);
x_3222 = lean_array_push(x_3221, x_3193);
x_3223 = lean_array_push(x_3222, x_3183);
x_3224 = lean_array_push(x_3223, x_3195);
x_3225 = lean_array_push(x_3224, x_3217);
x_3226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3226, 0, x_3177);
lean_ctor_set(x_3226, 1, x_3225);
x_3227 = 1;
x_3228 = lean_box(x_3227);
x_3229 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3229, 0, x_3226);
lean_ctor_set(x_3229, 1, x_3228);
lean_ctor_set(x_3004, 1, x_3229);
if (lean_is_scalar(x_3168)) {
 x_3230 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3230 = x_3168;
}
lean_ctor_set(x_3230, 0, x_3004);
lean_ctor_set(x_3230, 1, x_3167);
return x_3230;
}
}
else
{
lean_object* x_3231; lean_object* x_3232; lean_object* x_3233; lean_object* x_3234; lean_object* x_3235; lean_object* x_3236; lean_object* x_3237; lean_object* x_3238; lean_object* x_3239; lean_object* x_3240; lean_object* x_3241; lean_object* x_3242; lean_object* x_3243; lean_object* x_3244; lean_object* x_3245; lean_object* x_3246; lean_object* x_3247; lean_object* x_3248; lean_object* x_3249; lean_object* x_3250; lean_object* x_3251; lean_object* x_3252; lean_object* x_3253; lean_object* x_3254; lean_object* x_3255; lean_object* x_3256; lean_object* x_3257; lean_object* x_3258; lean_object* x_3259; lean_object* x_3260; lean_object* x_3261; lean_object* x_3262; lean_object* x_3263; lean_object* x_3264; lean_object* x_3265; lean_object* x_3266; lean_object* x_3267; lean_object* x_3268; lean_object* x_3269; lean_object* x_3270; lean_object* x_3271; lean_object* x_3272; lean_object* x_3273; lean_object* x_3274; lean_object* x_3275; lean_object* x_3276; lean_object* x_3277; lean_object* x_3278; lean_object* x_3279; lean_object* x_3280; lean_object* x_3281; lean_object* x_3282; lean_object* x_3283; lean_object* x_3284; lean_object* x_3285; lean_object* x_3286; lean_object* x_3287; lean_object* x_3288; lean_object* x_3289; lean_object* x_3290; lean_object* x_3291; lean_object* x_3292; lean_object* x_3293; lean_object* x_3294; lean_object* x_3295; uint8_t x_3296; lean_object* x_3297; lean_object* x_3298; lean_object* x_3299; lean_object* x_3300; 
x_3231 = lean_ctor_get(x_3004, 0);
lean_inc(x_3231);
lean_dec(x_3004);
x_3232 = lean_ctor_get(x_3005, 0);
lean_inc(x_3232);
if (lean_is_exclusive(x_3005)) {
 lean_ctor_release(x_3005, 0);
 lean_ctor_release(x_3005, 1);
 x_3233 = x_3005;
} else {
 lean_dec_ref(x_3005);
 x_3233 = lean_box(0);
}
x_3234 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3006);
lean_dec(x_5);
x_3235 = lean_ctor_get(x_3234, 0);
lean_inc(x_3235);
x_3236 = lean_ctor_get(x_3234, 1);
lean_inc(x_3236);
if (lean_is_exclusive(x_3234)) {
 lean_ctor_release(x_3234, 0);
 lean_ctor_release(x_3234, 1);
 x_3237 = x_3234;
} else {
 lean_dec_ref(x_3234);
 x_3237 = lean_box(0);
}
x_3238 = lean_box(0);
x_3239 = lean_mk_string("Lean");
x_3240 = lean_name_mk_string(x_3238, x_3239);
x_3241 = lean_mk_string("Parser");
x_3242 = lean_name_mk_string(x_3240, x_3241);
x_3243 = lean_mk_string("Term");
x_3244 = lean_name_mk_string(x_3242, x_3243);
x_3245 = lean_mk_string("match");
lean_inc(x_3245);
lean_inc(x_3244);
x_3246 = lean_name_mk_string(x_3244, x_3245);
lean_inc(x_3235);
x_3247 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3247, 0, x_3235);
lean_ctor_set(x_3247, 1, x_3245);
x_3248 = lean_mk_string("null");
x_3249 = lean_name_mk_string(x_3238, x_3248);
x_3250 = lean_unsigned_to_nat(0u);
x_3251 = lean_mk_empty_array_with_capacity(x_3250);
lean_inc(x_3249);
x_3252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3252, 0, x_3249);
lean_ctor_set(x_3252, 1, x_3251);
x_3253 = lean_mk_string("matchDiscr");
lean_inc(x_3244);
x_3254 = lean_name_mk_string(x_3244, x_3253);
x_3255 = lean_unsigned_to_nat(2u);
x_3256 = lean_mk_empty_array_with_capacity(x_3255);
lean_inc(x_3252);
x_3257 = lean_array_push(x_3256, x_3252);
x_3258 = lean_array_push(x_3257, x_2996);
x_3259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3259, 0, x_3254);
lean_ctor_set(x_3259, 1, x_3258);
x_3260 = lean_mk_empty_array_with_capacity(x_2998);
lean_inc(x_3260);
x_3261 = lean_array_push(x_3260, x_3259);
lean_inc(x_3249);
x_3262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3262, 0, x_3249);
lean_ctor_set(x_3262, 1, x_3261);
x_3263 = lean_mk_string("with");
lean_inc(x_3235);
x_3264 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3264, 0, x_3235);
lean_ctor_set(x_3264, 1, x_3263);
x_3265 = lean_mk_string("matchAlts");
lean_inc(x_3244);
x_3266 = lean_name_mk_string(x_3244, x_3265);
x_3267 = lean_mk_string("matchAlt");
x_3268 = lean_name_mk_string(x_3244, x_3267);
x_3269 = lean_mk_string("|");
lean_inc(x_3235);
x_3270 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3270, 0, x_3235);
lean_ctor_set(x_3270, 1, x_3269);
lean_inc(x_14);
lean_inc(x_3260);
x_3271 = lean_array_push(x_3260, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3272 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3272 = lean_box(0);
}
lean_inc(x_3249);
if (lean_is_scalar(x_3272)) {
 x_3273 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3273 = x_3272;
}
lean_ctor_set(x_3273, 0, x_3249);
lean_ctor_set(x_3273, 1, x_3271);
x_3274 = lean_mk_string("=>");
x_3275 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3275, 0, x_3235);
lean_ctor_set(x_3275, 1, x_3274);
x_3276 = lean_unsigned_to_nat(4u);
x_3277 = lean_mk_empty_array_with_capacity(x_3276);
x_3278 = lean_array_push(x_3277, x_3270);
x_3279 = lean_array_push(x_3278, x_3273);
x_3280 = lean_array_push(x_3279, x_3275);
x_3281 = lean_array_push(x_3280, x_3232);
x_3282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3282, 0, x_3268);
lean_ctor_set(x_3282, 1, x_3281);
lean_inc(x_3260);
x_3283 = lean_array_push(x_3260, x_3282);
x_3284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3284, 0, x_3249);
lean_ctor_set(x_3284, 1, x_3283);
x_3285 = lean_array_push(x_3260, x_3284);
x_3286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3286, 0, x_3266);
lean_ctor_set(x_3286, 1, x_3285);
x_3287 = lean_unsigned_to_nat(6u);
x_3288 = lean_mk_empty_array_with_capacity(x_3287);
x_3289 = lean_array_push(x_3288, x_3247);
lean_inc(x_3252);
x_3290 = lean_array_push(x_3289, x_3252);
x_3291 = lean_array_push(x_3290, x_3262);
x_3292 = lean_array_push(x_3291, x_3252);
x_3293 = lean_array_push(x_3292, x_3264);
x_3294 = lean_array_push(x_3293, x_3286);
x_3295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3295, 0, x_3246);
lean_ctor_set(x_3295, 1, x_3294);
x_3296 = 1;
x_3297 = lean_box(x_3296);
if (lean_is_scalar(x_3233)) {
 x_3298 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3298 = x_3233;
}
lean_ctor_set(x_3298, 0, x_3295);
lean_ctor_set(x_3298, 1, x_3297);
x_3299 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3299, 0, x_3231);
lean_ctor_set(x_3299, 1, x_3298);
if (lean_is_scalar(x_3237)) {
 x_3300 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3300 = x_3237;
}
lean_ctor_set(x_3300, 0, x_3299);
lean_ctor_set(x_3300, 1, x_3236);
return x_3300;
}
}
}
else
{
lean_object* x_3301; lean_object* x_3302; lean_object* x_3303; lean_object* x_3304; lean_object* x_3305; lean_object* x_3306; lean_object* x_3307; lean_object* x_3308; lean_object* x_3309; lean_object* x_3310; lean_object* x_3311; lean_object* x_3312; uint8_t x_3313; 
lean_dec(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_inc(x_5);
x_3301 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_3302 = lean_ctor_get(x_3301, 0);
lean_inc(x_3302);
x_3303 = lean_ctor_get(x_3301, 1);
lean_inc(x_3303);
lean_dec(x_3301);
x_3304 = lean_unsigned_to_nat(1u);
x_3305 = lean_nat_add(x_3, x_3304);
lean_dec(x_3);
x_3306 = l_Lean_mkHole(x_14);
lean_inc(x_3302);
x_3307 = l_Lean_Elab_Term_mkExplicitBinder(x_3302, x_3306);
x_3308 = lean_array_push(x_4, x_3307);
lean_inc(x_5);
x_3309 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3305, x_3308, x_5, x_3303);
x_3310 = lean_ctor_get(x_3309, 0);
lean_inc(x_3310);
x_3311 = lean_ctor_get(x_3310, 1);
lean_inc(x_3311);
x_3312 = lean_ctor_get(x_3309, 1);
lean_inc(x_3312);
lean_dec(x_3309);
x_3313 = !lean_is_exclusive(x_3310);
if (x_3313 == 0)
{
lean_object* x_3314; uint8_t x_3315; 
x_3314 = lean_ctor_get(x_3310, 1);
lean_dec(x_3314);
x_3315 = !lean_is_exclusive(x_3311);
if (x_3315 == 0)
{
lean_object* x_3316; lean_object* x_3317; lean_object* x_3318; uint8_t x_3319; 
x_3316 = lean_ctor_get(x_3311, 0);
x_3317 = lean_ctor_get(x_3311, 1);
lean_dec(x_3317);
x_3318 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3312);
lean_dec(x_5);
x_3319 = !lean_is_exclusive(x_3318);
if (x_3319 == 0)
{
lean_object* x_3320; lean_object* x_3321; lean_object* x_3322; lean_object* x_3323; lean_object* x_3324; lean_object* x_3325; lean_object* x_3326; lean_object* x_3327; lean_object* x_3328; lean_object* x_3329; lean_object* x_3330; lean_object* x_3331; lean_object* x_3332; lean_object* x_3333; lean_object* x_3334; lean_object* x_3335; lean_object* x_3336; lean_object* x_3337; lean_object* x_3338; lean_object* x_3339; lean_object* x_3340; lean_object* x_3341; lean_object* x_3342; lean_object* x_3343; lean_object* x_3344; lean_object* x_3345; lean_object* x_3346; lean_object* x_3347; lean_object* x_3348; lean_object* x_3349; lean_object* x_3350; lean_object* x_3351; lean_object* x_3352; lean_object* x_3353; lean_object* x_3354; uint8_t x_3355; 
x_3320 = lean_ctor_get(x_3318, 0);
x_3321 = lean_box(0);
x_3322 = lean_mk_string("Lean");
x_3323 = lean_name_mk_string(x_3321, x_3322);
x_3324 = lean_mk_string("Parser");
x_3325 = lean_name_mk_string(x_3323, x_3324);
x_3326 = lean_mk_string("Term");
x_3327 = lean_name_mk_string(x_3325, x_3326);
x_3328 = lean_mk_string("match");
lean_inc(x_3328);
lean_inc(x_3327);
x_3329 = lean_name_mk_string(x_3327, x_3328);
lean_inc(x_3320);
x_3330 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3330, 0, x_3320);
lean_ctor_set(x_3330, 1, x_3328);
x_3331 = lean_mk_string("null");
x_3332 = lean_name_mk_string(x_3321, x_3331);
x_3333 = lean_unsigned_to_nat(0u);
x_3334 = lean_mk_empty_array_with_capacity(x_3333);
lean_inc(x_3332);
x_3335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3335, 0, x_3332);
lean_ctor_set(x_3335, 1, x_3334);
x_3336 = lean_mk_string("matchDiscr");
lean_inc(x_3327);
x_3337 = lean_name_mk_string(x_3327, x_3336);
x_3338 = lean_unsigned_to_nat(2u);
x_3339 = lean_mk_empty_array_with_capacity(x_3338);
lean_inc(x_3335);
x_3340 = lean_array_push(x_3339, x_3335);
x_3341 = lean_array_push(x_3340, x_3302);
x_3342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3342, 0, x_3337);
lean_ctor_set(x_3342, 1, x_3341);
x_3343 = lean_mk_empty_array_with_capacity(x_3304);
lean_inc(x_3343);
x_3344 = lean_array_push(x_3343, x_3342);
lean_inc(x_3332);
x_3345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3345, 0, x_3332);
lean_ctor_set(x_3345, 1, x_3344);
x_3346 = lean_mk_string("with");
lean_inc(x_3320);
x_3347 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3347, 0, x_3320);
lean_ctor_set(x_3347, 1, x_3346);
x_3348 = lean_mk_string("matchAlts");
lean_inc(x_3327);
x_3349 = lean_name_mk_string(x_3327, x_3348);
x_3350 = lean_mk_string("matchAlt");
x_3351 = lean_name_mk_string(x_3327, x_3350);
x_3352 = lean_mk_string("|");
lean_inc(x_3320);
x_3353 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3353, 0, x_3320);
lean_ctor_set(x_3353, 1, x_3352);
lean_inc(x_14);
lean_inc(x_3343);
x_3354 = lean_array_push(x_3343, x_14);
x_3355 = !lean_is_exclusive(x_14);
if (x_3355 == 0)
{
lean_object* x_3356; lean_object* x_3357; lean_object* x_3358; lean_object* x_3359; lean_object* x_3360; lean_object* x_3361; lean_object* x_3362; lean_object* x_3363; lean_object* x_3364; lean_object* x_3365; lean_object* x_3366; lean_object* x_3367; lean_object* x_3368; lean_object* x_3369; lean_object* x_3370; lean_object* x_3371; lean_object* x_3372; lean_object* x_3373; lean_object* x_3374; lean_object* x_3375; lean_object* x_3376; lean_object* x_3377; lean_object* x_3378; lean_object* x_3379; uint8_t x_3380; lean_object* x_3381; 
x_3356 = lean_ctor_get(x_14, 1);
lean_dec(x_3356);
x_3357 = lean_ctor_get(x_14, 0);
lean_dec(x_3357);
lean_inc(x_3332);
lean_ctor_set(x_14, 1, x_3354);
lean_ctor_set(x_14, 0, x_3332);
x_3358 = lean_mk_string("=>");
x_3359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3359, 0, x_3320);
lean_ctor_set(x_3359, 1, x_3358);
x_3360 = lean_unsigned_to_nat(4u);
x_3361 = lean_mk_empty_array_with_capacity(x_3360);
x_3362 = lean_array_push(x_3361, x_3353);
x_3363 = lean_array_push(x_3362, x_14);
x_3364 = lean_array_push(x_3363, x_3359);
x_3365 = lean_array_push(x_3364, x_3316);
x_3366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3366, 0, x_3351);
lean_ctor_set(x_3366, 1, x_3365);
lean_inc(x_3343);
x_3367 = lean_array_push(x_3343, x_3366);
x_3368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3368, 0, x_3332);
lean_ctor_set(x_3368, 1, x_3367);
x_3369 = lean_array_push(x_3343, x_3368);
x_3370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3370, 0, x_3349);
lean_ctor_set(x_3370, 1, x_3369);
x_3371 = lean_unsigned_to_nat(6u);
x_3372 = lean_mk_empty_array_with_capacity(x_3371);
x_3373 = lean_array_push(x_3372, x_3330);
lean_inc(x_3335);
x_3374 = lean_array_push(x_3373, x_3335);
x_3375 = lean_array_push(x_3374, x_3345);
x_3376 = lean_array_push(x_3375, x_3335);
x_3377 = lean_array_push(x_3376, x_3347);
x_3378 = lean_array_push(x_3377, x_3370);
x_3379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3379, 0, x_3329);
lean_ctor_set(x_3379, 1, x_3378);
x_3380 = 1;
x_3381 = lean_box(x_3380);
lean_ctor_set(x_3311, 1, x_3381);
lean_ctor_set(x_3311, 0, x_3379);
lean_ctor_set(x_3318, 0, x_3310);
return x_3318;
}
else
{
lean_object* x_3382; lean_object* x_3383; lean_object* x_3384; lean_object* x_3385; lean_object* x_3386; lean_object* x_3387; lean_object* x_3388; lean_object* x_3389; lean_object* x_3390; lean_object* x_3391; lean_object* x_3392; lean_object* x_3393; lean_object* x_3394; lean_object* x_3395; lean_object* x_3396; lean_object* x_3397; lean_object* x_3398; lean_object* x_3399; lean_object* x_3400; lean_object* x_3401; lean_object* x_3402; lean_object* x_3403; lean_object* x_3404; uint8_t x_3405; lean_object* x_3406; 
lean_dec(x_14);
lean_inc(x_3332);
x_3382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3382, 0, x_3332);
lean_ctor_set(x_3382, 1, x_3354);
x_3383 = lean_mk_string("=>");
x_3384 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3384, 0, x_3320);
lean_ctor_set(x_3384, 1, x_3383);
x_3385 = lean_unsigned_to_nat(4u);
x_3386 = lean_mk_empty_array_with_capacity(x_3385);
x_3387 = lean_array_push(x_3386, x_3353);
x_3388 = lean_array_push(x_3387, x_3382);
x_3389 = lean_array_push(x_3388, x_3384);
x_3390 = lean_array_push(x_3389, x_3316);
x_3391 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3391, 0, x_3351);
lean_ctor_set(x_3391, 1, x_3390);
lean_inc(x_3343);
x_3392 = lean_array_push(x_3343, x_3391);
x_3393 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3393, 0, x_3332);
lean_ctor_set(x_3393, 1, x_3392);
x_3394 = lean_array_push(x_3343, x_3393);
x_3395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3395, 0, x_3349);
lean_ctor_set(x_3395, 1, x_3394);
x_3396 = lean_unsigned_to_nat(6u);
x_3397 = lean_mk_empty_array_with_capacity(x_3396);
x_3398 = lean_array_push(x_3397, x_3330);
lean_inc(x_3335);
x_3399 = lean_array_push(x_3398, x_3335);
x_3400 = lean_array_push(x_3399, x_3345);
x_3401 = lean_array_push(x_3400, x_3335);
x_3402 = lean_array_push(x_3401, x_3347);
x_3403 = lean_array_push(x_3402, x_3395);
x_3404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3404, 0, x_3329);
lean_ctor_set(x_3404, 1, x_3403);
x_3405 = 1;
x_3406 = lean_box(x_3405);
lean_ctor_set(x_3311, 1, x_3406);
lean_ctor_set(x_3311, 0, x_3404);
lean_ctor_set(x_3318, 0, x_3310);
return x_3318;
}
}
else
{
lean_object* x_3407; lean_object* x_3408; lean_object* x_3409; lean_object* x_3410; lean_object* x_3411; lean_object* x_3412; lean_object* x_3413; lean_object* x_3414; lean_object* x_3415; lean_object* x_3416; lean_object* x_3417; lean_object* x_3418; lean_object* x_3419; lean_object* x_3420; lean_object* x_3421; lean_object* x_3422; lean_object* x_3423; lean_object* x_3424; lean_object* x_3425; lean_object* x_3426; lean_object* x_3427; lean_object* x_3428; lean_object* x_3429; lean_object* x_3430; lean_object* x_3431; lean_object* x_3432; lean_object* x_3433; lean_object* x_3434; lean_object* x_3435; lean_object* x_3436; lean_object* x_3437; lean_object* x_3438; lean_object* x_3439; lean_object* x_3440; lean_object* x_3441; lean_object* x_3442; lean_object* x_3443; lean_object* x_3444; lean_object* x_3445; lean_object* x_3446; lean_object* x_3447; lean_object* x_3448; lean_object* x_3449; lean_object* x_3450; lean_object* x_3451; lean_object* x_3452; lean_object* x_3453; lean_object* x_3454; lean_object* x_3455; lean_object* x_3456; lean_object* x_3457; lean_object* x_3458; lean_object* x_3459; lean_object* x_3460; lean_object* x_3461; lean_object* x_3462; lean_object* x_3463; lean_object* x_3464; lean_object* x_3465; lean_object* x_3466; uint8_t x_3467; lean_object* x_3468; lean_object* x_3469; 
x_3407 = lean_ctor_get(x_3318, 0);
x_3408 = lean_ctor_get(x_3318, 1);
lean_inc(x_3408);
lean_inc(x_3407);
lean_dec(x_3318);
x_3409 = lean_box(0);
x_3410 = lean_mk_string("Lean");
x_3411 = lean_name_mk_string(x_3409, x_3410);
x_3412 = lean_mk_string("Parser");
x_3413 = lean_name_mk_string(x_3411, x_3412);
x_3414 = lean_mk_string("Term");
x_3415 = lean_name_mk_string(x_3413, x_3414);
x_3416 = lean_mk_string("match");
lean_inc(x_3416);
lean_inc(x_3415);
x_3417 = lean_name_mk_string(x_3415, x_3416);
lean_inc(x_3407);
x_3418 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3418, 0, x_3407);
lean_ctor_set(x_3418, 1, x_3416);
x_3419 = lean_mk_string("null");
x_3420 = lean_name_mk_string(x_3409, x_3419);
x_3421 = lean_unsigned_to_nat(0u);
x_3422 = lean_mk_empty_array_with_capacity(x_3421);
lean_inc(x_3420);
x_3423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3423, 0, x_3420);
lean_ctor_set(x_3423, 1, x_3422);
x_3424 = lean_mk_string("matchDiscr");
lean_inc(x_3415);
x_3425 = lean_name_mk_string(x_3415, x_3424);
x_3426 = lean_unsigned_to_nat(2u);
x_3427 = lean_mk_empty_array_with_capacity(x_3426);
lean_inc(x_3423);
x_3428 = lean_array_push(x_3427, x_3423);
x_3429 = lean_array_push(x_3428, x_3302);
x_3430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3430, 0, x_3425);
lean_ctor_set(x_3430, 1, x_3429);
x_3431 = lean_mk_empty_array_with_capacity(x_3304);
lean_inc(x_3431);
x_3432 = lean_array_push(x_3431, x_3430);
lean_inc(x_3420);
x_3433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3433, 0, x_3420);
lean_ctor_set(x_3433, 1, x_3432);
x_3434 = lean_mk_string("with");
lean_inc(x_3407);
x_3435 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3435, 0, x_3407);
lean_ctor_set(x_3435, 1, x_3434);
x_3436 = lean_mk_string("matchAlts");
lean_inc(x_3415);
x_3437 = lean_name_mk_string(x_3415, x_3436);
x_3438 = lean_mk_string("matchAlt");
x_3439 = lean_name_mk_string(x_3415, x_3438);
x_3440 = lean_mk_string("|");
lean_inc(x_3407);
x_3441 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3441, 0, x_3407);
lean_ctor_set(x_3441, 1, x_3440);
lean_inc(x_14);
lean_inc(x_3431);
x_3442 = lean_array_push(x_3431, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3443 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3443 = lean_box(0);
}
lean_inc(x_3420);
if (lean_is_scalar(x_3443)) {
 x_3444 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3444 = x_3443;
}
lean_ctor_set(x_3444, 0, x_3420);
lean_ctor_set(x_3444, 1, x_3442);
x_3445 = lean_mk_string("=>");
x_3446 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3446, 0, x_3407);
lean_ctor_set(x_3446, 1, x_3445);
x_3447 = lean_unsigned_to_nat(4u);
x_3448 = lean_mk_empty_array_with_capacity(x_3447);
x_3449 = lean_array_push(x_3448, x_3441);
x_3450 = lean_array_push(x_3449, x_3444);
x_3451 = lean_array_push(x_3450, x_3446);
x_3452 = lean_array_push(x_3451, x_3316);
x_3453 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3453, 0, x_3439);
lean_ctor_set(x_3453, 1, x_3452);
lean_inc(x_3431);
x_3454 = lean_array_push(x_3431, x_3453);
x_3455 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3455, 0, x_3420);
lean_ctor_set(x_3455, 1, x_3454);
x_3456 = lean_array_push(x_3431, x_3455);
x_3457 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3457, 0, x_3437);
lean_ctor_set(x_3457, 1, x_3456);
x_3458 = lean_unsigned_to_nat(6u);
x_3459 = lean_mk_empty_array_with_capacity(x_3458);
x_3460 = lean_array_push(x_3459, x_3418);
lean_inc(x_3423);
x_3461 = lean_array_push(x_3460, x_3423);
x_3462 = lean_array_push(x_3461, x_3433);
x_3463 = lean_array_push(x_3462, x_3423);
x_3464 = lean_array_push(x_3463, x_3435);
x_3465 = lean_array_push(x_3464, x_3457);
x_3466 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3466, 0, x_3417);
lean_ctor_set(x_3466, 1, x_3465);
x_3467 = 1;
x_3468 = lean_box(x_3467);
lean_ctor_set(x_3311, 1, x_3468);
lean_ctor_set(x_3311, 0, x_3466);
x_3469 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3469, 0, x_3310);
lean_ctor_set(x_3469, 1, x_3408);
return x_3469;
}
}
else
{
lean_object* x_3470; lean_object* x_3471; lean_object* x_3472; lean_object* x_3473; lean_object* x_3474; lean_object* x_3475; lean_object* x_3476; lean_object* x_3477; lean_object* x_3478; lean_object* x_3479; lean_object* x_3480; lean_object* x_3481; lean_object* x_3482; lean_object* x_3483; lean_object* x_3484; lean_object* x_3485; lean_object* x_3486; lean_object* x_3487; lean_object* x_3488; lean_object* x_3489; lean_object* x_3490; lean_object* x_3491; lean_object* x_3492; lean_object* x_3493; lean_object* x_3494; lean_object* x_3495; lean_object* x_3496; lean_object* x_3497; lean_object* x_3498; lean_object* x_3499; lean_object* x_3500; lean_object* x_3501; lean_object* x_3502; lean_object* x_3503; lean_object* x_3504; lean_object* x_3505; lean_object* x_3506; lean_object* x_3507; lean_object* x_3508; lean_object* x_3509; lean_object* x_3510; lean_object* x_3511; lean_object* x_3512; lean_object* x_3513; lean_object* x_3514; lean_object* x_3515; lean_object* x_3516; lean_object* x_3517; lean_object* x_3518; lean_object* x_3519; lean_object* x_3520; lean_object* x_3521; lean_object* x_3522; lean_object* x_3523; lean_object* x_3524; lean_object* x_3525; lean_object* x_3526; lean_object* x_3527; lean_object* x_3528; lean_object* x_3529; lean_object* x_3530; lean_object* x_3531; lean_object* x_3532; uint8_t x_3533; lean_object* x_3534; lean_object* x_3535; lean_object* x_3536; 
x_3470 = lean_ctor_get(x_3311, 0);
lean_inc(x_3470);
lean_dec(x_3311);
x_3471 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3312);
lean_dec(x_5);
x_3472 = lean_ctor_get(x_3471, 0);
lean_inc(x_3472);
x_3473 = lean_ctor_get(x_3471, 1);
lean_inc(x_3473);
if (lean_is_exclusive(x_3471)) {
 lean_ctor_release(x_3471, 0);
 lean_ctor_release(x_3471, 1);
 x_3474 = x_3471;
} else {
 lean_dec_ref(x_3471);
 x_3474 = lean_box(0);
}
x_3475 = lean_box(0);
x_3476 = lean_mk_string("Lean");
x_3477 = lean_name_mk_string(x_3475, x_3476);
x_3478 = lean_mk_string("Parser");
x_3479 = lean_name_mk_string(x_3477, x_3478);
x_3480 = lean_mk_string("Term");
x_3481 = lean_name_mk_string(x_3479, x_3480);
x_3482 = lean_mk_string("match");
lean_inc(x_3482);
lean_inc(x_3481);
x_3483 = lean_name_mk_string(x_3481, x_3482);
lean_inc(x_3472);
x_3484 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3484, 0, x_3472);
lean_ctor_set(x_3484, 1, x_3482);
x_3485 = lean_mk_string("null");
x_3486 = lean_name_mk_string(x_3475, x_3485);
x_3487 = lean_unsigned_to_nat(0u);
x_3488 = lean_mk_empty_array_with_capacity(x_3487);
lean_inc(x_3486);
x_3489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3489, 0, x_3486);
lean_ctor_set(x_3489, 1, x_3488);
x_3490 = lean_mk_string("matchDiscr");
lean_inc(x_3481);
x_3491 = lean_name_mk_string(x_3481, x_3490);
x_3492 = lean_unsigned_to_nat(2u);
x_3493 = lean_mk_empty_array_with_capacity(x_3492);
lean_inc(x_3489);
x_3494 = lean_array_push(x_3493, x_3489);
x_3495 = lean_array_push(x_3494, x_3302);
x_3496 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3496, 0, x_3491);
lean_ctor_set(x_3496, 1, x_3495);
x_3497 = lean_mk_empty_array_with_capacity(x_3304);
lean_inc(x_3497);
x_3498 = lean_array_push(x_3497, x_3496);
lean_inc(x_3486);
x_3499 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3499, 0, x_3486);
lean_ctor_set(x_3499, 1, x_3498);
x_3500 = lean_mk_string("with");
lean_inc(x_3472);
x_3501 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3501, 0, x_3472);
lean_ctor_set(x_3501, 1, x_3500);
x_3502 = lean_mk_string("matchAlts");
lean_inc(x_3481);
x_3503 = lean_name_mk_string(x_3481, x_3502);
x_3504 = lean_mk_string("matchAlt");
x_3505 = lean_name_mk_string(x_3481, x_3504);
x_3506 = lean_mk_string("|");
lean_inc(x_3472);
x_3507 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3507, 0, x_3472);
lean_ctor_set(x_3507, 1, x_3506);
lean_inc(x_14);
lean_inc(x_3497);
x_3508 = lean_array_push(x_3497, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3509 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3509 = lean_box(0);
}
lean_inc(x_3486);
if (lean_is_scalar(x_3509)) {
 x_3510 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3510 = x_3509;
}
lean_ctor_set(x_3510, 0, x_3486);
lean_ctor_set(x_3510, 1, x_3508);
x_3511 = lean_mk_string("=>");
x_3512 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3512, 0, x_3472);
lean_ctor_set(x_3512, 1, x_3511);
x_3513 = lean_unsigned_to_nat(4u);
x_3514 = lean_mk_empty_array_with_capacity(x_3513);
x_3515 = lean_array_push(x_3514, x_3507);
x_3516 = lean_array_push(x_3515, x_3510);
x_3517 = lean_array_push(x_3516, x_3512);
x_3518 = lean_array_push(x_3517, x_3470);
x_3519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3519, 0, x_3505);
lean_ctor_set(x_3519, 1, x_3518);
lean_inc(x_3497);
x_3520 = lean_array_push(x_3497, x_3519);
x_3521 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3521, 0, x_3486);
lean_ctor_set(x_3521, 1, x_3520);
x_3522 = lean_array_push(x_3497, x_3521);
x_3523 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3523, 0, x_3503);
lean_ctor_set(x_3523, 1, x_3522);
x_3524 = lean_unsigned_to_nat(6u);
x_3525 = lean_mk_empty_array_with_capacity(x_3524);
x_3526 = lean_array_push(x_3525, x_3484);
lean_inc(x_3489);
x_3527 = lean_array_push(x_3526, x_3489);
x_3528 = lean_array_push(x_3527, x_3499);
x_3529 = lean_array_push(x_3528, x_3489);
x_3530 = lean_array_push(x_3529, x_3501);
x_3531 = lean_array_push(x_3530, x_3523);
x_3532 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3532, 0, x_3483);
lean_ctor_set(x_3532, 1, x_3531);
x_3533 = 1;
x_3534 = lean_box(x_3533);
x_3535 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3535, 0, x_3532);
lean_ctor_set(x_3535, 1, x_3534);
lean_ctor_set(x_3310, 1, x_3535);
if (lean_is_scalar(x_3474)) {
 x_3536 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3536 = x_3474;
}
lean_ctor_set(x_3536, 0, x_3310);
lean_ctor_set(x_3536, 1, x_3473);
return x_3536;
}
}
else
{
lean_object* x_3537; lean_object* x_3538; lean_object* x_3539; lean_object* x_3540; lean_object* x_3541; lean_object* x_3542; lean_object* x_3543; lean_object* x_3544; lean_object* x_3545; lean_object* x_3546; lean_object* x_3547; lean_object* x_3548; lean_object* x_3549; lean_object* x_3550; lean_object* x_3551; lean_object* x_3552; lean_object* x_3553; lean_object* x_3554; lean_object* x_3555; lean_object* x_3556; lean_object* x_3557; lean_object* x_3558; lean_object* x_3559; lean_object* x_3560; lean_object* x_3561; lean_object* x_3562; lean_object* x_3563; lean_object* x_3564; lean_object* x_3565; lean_object* x_3566; lean_object* x_3567; lean_object* x_3568; lean_object* x_3569; lean_object* x_3570; lean_object* x_3571; lean_object* x_3572; lean_object* x_3573; lean_object* x_3574; lean_object* x_3575; lean_object* x_3576; lean_object* x_3577; lean_object* x_3578; lean_object* x_3579; lean_object* x_3580; lean_object* x_3581; lean_object* x_3582; lean_object* x_3583; lean_object* x_3584; lean_object* x_3585; lean_object* x_3586; lean_object* x_3587; lean_object* x_3588; lean_object* x_3589; lean_object* x_3590; lean_object* x_3591; lean_object* x_3592; lean_object* x_3593; lean_object* x_3594; lean_object* x_3595; lean_object* x_3596; lean_object* x_3597; lean_object* x_3598; lean_object* x_3599; lean_object* x_3600; lean_object* x_3601; uint8_t x_3602; lean_object* x_3603; lean_object* x_3604; lean_object* x_3605; lean_object* x_3606; 
x_3537 = lean_ctor_get(x_3310, 0);
lean_inc(x_3537);
lean_dec(x_3310);
x_3538 = lean_ctor_get(x_3311, 0);
lean_inc(x_3538);
if (lean_is_exclusive(x_3311)) {
 lean_ctor_release(x_3311, 0);
 lean_ctor_release(x_3311, 1);
 x_3539 = x_3311;
} else {
 lean_dec_ref(x_3311);
 x_3539 = lean_box(0);
}
x_3540 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3312);
lean_dec(x_5);
x_3541 = lean_ctor_get(x_3540, 0);
lean_inc(x_3541);
x_3542 = lean_ctor_get(x_3540, 1);
lean_inc(x_3542);
if (lean_is_exclusive(x_3540)) {
 lean_ctor_release(x_3540, 0);
 lean_ctor_release(x_3540, 1);
 x_3543 = x_3540;
} else {
 lean_dec_ref(x_3540);
 x_3543 = lean_box(0);
}
x_3544 = lean_box(0);
x_3545 = lean_mk_string("Lean");
x_3546 = lean_name_mk_string(x_3544, x_3545);
x_3547 = lean_mk_string("Parser");
x_3548 = lean_name_mk_string(x_3546, x_3547);
x_3549 = lean_mk_string("Term");
x_3550 = lean_name_mk_string(x_3548, x_3549);
x_3551 = lean_mk_string("match");
lean_inc(x_3551);
lean_inc(x_3550);
x_3552 = lean_name_mk_string(x_3550, x_3551);
lean_inc(x_3541);
x_3553 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3553, 0, x_3541);
lean_ctor_set(x_3553, 1, x_3551);
x_3554 = lean_mk_string("null");
x_3555 = lean_name_mk_string(x_3544, x_3554);
x_3556 = lean_unsigned_to_nat(0u);
x_3557 = lean_mk_empty_array_with_capacity(x_3556);
lean_inc(x_3555);
x_3558 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3558, 0, x_3555);
lean_ctor_set(x_3558, 1, x_3557);
x_3559 = lean_mk_string("matchDiscr");
lean_inc(x_3550);
x_3560 = lean_name_mk_string(x_3550, x_3559);
x_3561 = lean_unsigned_to_nat(2u);
x_3562 = lean_mk_empty_array_with_capacity(x_3561);
lean_inc(x_3558);
x_3563 = lean_array_push(x_3562, x_3558);
x_3564 = lean_array_push(x_3563, x_3302);
x_3565 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3565, 0, x_3560);
lean_ctor_set(x_3565, 1, x_3564);
x_3566 = lean_mk_empty_array_with_capacity(x_3304);
lean_inc(x_3566);
x_3567 = lean_array_push(x_3566, x_3565);
lean_inc(x_3555);
x_3568 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3568, 0, x_3555);
lean_ctor_set(x_3568, 1, x_3567);
x_3569 = lean_mk_string("with");
lean_inc(x_3541);
x_3570 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3570, 0, x_3541);
lean_ctor_set(x_3570, 1, x_3569);
x_3571 = lean_mk_string("matchAlts");
lean_inc(x_3550);
x_3572 = lean_name_mk_string(x_3550, x_3571);
x_3573 = lean_mk_string("matchAlt");
x_3574 = lean_name_mk_string(x_3550, x_3573);
x_3575 = lean_mk_string("|");
lean_inc(x_3541);
x_3576 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3576, 0, x_3541);
lean_ctor_set(x_3576, 1, x_3575);
lean_inc(x_14);
lean_inc(x_3566);
x_3577 = lean_array_push(x_3566, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3578 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3578 = lean_box(0);
}
lean_inc(x_3555);
if (lean_is_scalar(x_3578)) {
 x_3579 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3579 = x_3578;
}
lean_ctor_set(x_3579, 0, x_3555);
lean_ctor_set(x_3579, 1, x_3577);
x_3580 = lean_mk_string("=>");
x_3581 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3581, 0, x_3541);
lean_ctor_set(x_3581, 1, x_3580);
x_3582 = lean_unsigned_to_nat(4u);
x_3583 = lean_mk_empty_array_with_capacity(x_3582);
x_3584 = lean_array_push(x_3583, x_3576);
x_3585 = lean_array_push(x_3584, x_3579);
x_3586 = lean_array_push(x_3585, x_3581);
x_3587 = lean_array_push(x_3586, x_3538);
x_3588 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3588, 0, x_3574);
lean_ctor_set(x_3588, 1, x_3587);
lean_inc(x_3566);
x_3589 = lean_array_push(x_3566, x_3588);
x_3590 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3590, 0, x_3555);
lean_ctor_set(x_3590, 1, x_3589);
x_3591 = lean_array_push(x_3566, x_3590);
x_3592 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3592, 0, x_3572);
lean_ctor_set(x_3592, 1, x_3591);
x_3593 = lean_unsigned_to_nat(6u);
x_3594 = lean_mk_empty_array_with_capacity(x_3593);
x_3595 = lean_array_push(x_3594, x_3553);
lean_inc(x_3558);
x_3596 = lean_array_push(x_3595, x_3558);
x_3597 = lean_array_push(x_3596, x_3568);
x_3598 = lean_array_push(x_3597, x_3558);
x_3599 = lean_array_push(x_3598, x_3570);
x_3600 = lean_array_push(x_3599, x_3592);
x_3601 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3601, 0, x_3552);
lean_ctor_set(x_3601, 1, x_3600);
x_3602 = 1;
x_3603 = lean_box(x_3602);
if (lean_is_scalar(x_3539)) {
 x_3604 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3604 = x_3539;
}
lean_ctor_set(x_3604, 0, x_3601);
lean_ctor_set(x_3604, 1, x_3603);
x_3605 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3605, 0, x_3537);
lean_ctor_set(x_3605, 1, x_3604);
if (lean_is_scalar(x_3543)) {
 x_3606 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3606 = x_3543;
}
lean_ctor_set(x_3606, 0, x_3605);
lean_ctor_set(x_3606, 1, x_3542);
return x_3606;
}
}
}
else
{
lean_object* x_3607; lean_object* x_3608; lean_object* x_3609; lean_object* x_3610; lean_object* x_3611; lean_object* x_3612; lean_object* x_3613; lean_object* x_3614; lean_object* x_3615; lean_object* x_3616; lean_object* x_3617; lean_object* x_3618; uint8_t x_3619; 
lean_dec(x_292);
lean_dec(x_291);
lean_inc(x_5);
x_3607 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_3608 = lean_ctor_get(x_3607, 0);
lean_inc(x_3608);
x_3609 = lean_ctor_get(x_3607, 1);
lean_inc(x_3609);
lean_dec(x_3607);
x_3610 = lean_unsigned_to_nat(1u);
x_3611 = lean_nat_add(x_3, x_3610);
lean_dec(x_3);
x_3612 = l_Lean_mkHole(x_14);
lean_inc(x_3608);
x_3613 = l_Lean_Elab_Term_mkExplicitBinder(x_3608, x_3612);
x_3614 = lean_array_push(x_4, x_3613);
lean_inc(x_5);
x_3615 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3611, x_3614, x_5, x_3609);
x_3616 = lean_ctor_get(x_3615, 0);
lean_inc(x_3616);
x_3617 = lean_ctor_get(x_3616, 1);
lean_inc(x_3617);
x_3618 = lean_ctor_get(x_3615, 1);
lean_inc(x_3618);
lean_dec(x_3615);
x_3619 = !lean_is_exclusive(x_3616);
if (x_3619 == 0)
{
lean_object* x_3620; uint8_t x_3621; 
x_3620 = lean_ctor_get(x_3616, 1);
lean_dec(x_3620);
x_3621 = !lean_is_exclusive(x_3617);
if (x_3621 == 0)
{
lean_object* x_3622; lean_object* x_3623; lean_object* x_3624; uint8_t x_3625; 
x_3622 = lean_ctor_get(x_3617, 0);
x_3623 = lean_ctor_get(x_3617, 1);
lean_dec(x_3623);
x_3624 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3618);
lean_dec(x_5);
x_3625 = !lean_is_exclusive(x_3624);
if (x_3625 == 0)
{
lean_object* x_3626; lean_object* x_3627; lean_object* x_3628; lean_object* x_3629; lean_object* x_3630; lean_object* x_3631; lean_object* x_3632; lean_object* x_3633; lean_object* x_3634; lean_object* x_3635; lean_object* x_3636; lean_object* x_3637; lean_object* x_3638; lean_object* x_3639; lean_object* x_3640; lean_object* x_3641; lean_object* x_3642; lean_object* x_3643; lean_object* x_3644; lean_object* x_3645; lean_object* x_3646; lean_object* x_3647; lean_object* x_3648; lean_object* x_3649; lean_object* x_3650; lean_object* x_3651; lean_object* x_3652; lean_object* x_3653; lean_object* x_3654; lean_object* x_3655; lean_object* x_3656; lean_object* x_3657; lean_object* x_3658; lean_object* x_3659; lean_object* x_3660; uint8_t x_3661; 
x_3626 = lean_ctor_get(x_3624, 0);
x_3627 = lean_box(0);
x_3628 = lean_mk_string("Lean");
x_3629 = lean_name_mk_string(x_3627, x_3628);
x_3630 = lean_mk_string("Parser");
x_3631 = lean_name_mk_string(x_3629, x_3630);
x_3632 = lean_mk_string("Term");
x_3633 = lean_name_mk_string(x_3631, x_3632);
x_3634 = lean_mk_string("match");
lean_inc(x_3634);
lean_inc(x_3633);
x_3635 = lean_name_mk_string(x_3633, x_3634);
lean_inc(x_3626);
x_3636 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3636, 0, x_3626);
lean_ctor_set(x_3636, 1, x_3634);
x_3637 = lean_mk_string("null");
x_3638 = lean_name_mk_string(x_3627, x_3637);
x_3639 = lean_unsigned_to_nat(0u);
x_3640 = lean_mk_empty_array_with_capacity(x_3639);
lean_inc(x_3638);
x_3641 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3641, 0, x_3638);
lean_ctor_set(x_3641, 1, x_3640);
x_3642 = lean_mk_string("matchDiscr");
lean_inc(x_3633);
x_3643 = lean_name_mk_string(x_3633, x_3642);
x_3644 = lean_unsigned_to_nat(2u);
x_3645 = lean_mk_empty_array_with_capacity(x_3644);
lean_inc(x_3641);
x_3646 = lean_array_push(x_3645, x_3641);
x_3647 = lean_array_push(x_3646, x_3608);
x_3648 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3648, 0, x_3643);
lean_ctor_set(x_3648, 1, x_3647);
x_3649 = lean_mk_empty_array_with_capacity(x_3610);
lean_inc(x_3649);
x_3650 = lean_array_push(x_3649, x_3648);
lean_inc(x_3638);
x_3651 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3651, 0, x_3638);
lean_ctor_set(x_3651, 1, x_3650);
x_3652 = lean_mk_string("with");
lean_inc(x_3626);
x_3653 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3653, 0, x_3626);
lean_ctor_set(x_3653, 1, x_3652);
x_3654 = lean_mk_string("matchAlts");
lean_inc(x_3633);
x_3655 = lean_name_mk_string(x_3633, x_3654);
x_3656 = lean_mk_string("matchAlt");
x_3657 = lean_name_mk_string(x_3633, x_3656);
x_3658 = lean_mk_string("|");
lean_inc(x_3626);
x_3659 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3659, 0, x_3626);
lean_ctor_set(x_3659, 1, x_3658);
lean_inc(x_14);
lean_inc(x_3649);
x_3660 = lean_array_push(x_3649, x_14);
x_3661 = !lean_is_exclusive(x_14);
if (x_3661 == 0)
{
lean_object* x_3662; lean_object* x_3663; lean_object* x_3664; lean_object* x_3665; lean_object* x_3666; lean_object* x_3667; lean_object* x_3668; lean_object* x_3669; lean_object* x_3670; lean_object* x_3671; lean_object* x_3672; lean_object* x_3673; lean_object* x_3674; lean_object* x_3675; lean_object* x_3676; lean_object* x_3677; lean_object* x_3678; lean_object* x_3679; lean_object* x_3680; lean_object* x_3681; lean_object* x_3682; lean_object* x_3683; lean_object* x_3684; lean_object* x_3685; uint8_t x_3686; lean_object* x_3687; 
x_3662 = lean_ctor_get(x_14, 1);
lean_dec(x_3662);
x_3663 = lean_ctor_get(x_14, 0);
lean_dec(x_3663);
lean_inc(x_3638);
lean_ctor_set(x_14, 1, x_3660);
lean_ctor_set(x_14, 0, x_3638);
x_3664 = lean_mk_string("=>");
x_3665 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3665, 0, x_3626);
lean_ctor_set(x_3665, 1, x_3664);
x_3666 = lean_unsigned_to_nat(4u);
x_3667 = lean_mk_empty_array_with_capacity(x_3666);
x_3668 = lean_array_push(x_3667, x_3659);
x_3669 = lean_array_push(x_3668, x_14);
x_3670 = lean_array_push(x_3669, x_3665);
x_3671 = lean_array_push(x_3670, x_3622);
x_3672 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3672, 0, x_3657);
lean_ctor_set(x_3672, 1, x_3671);
lean_inc(x_3649);
x_3673 = lean_array_push(x_3649, x_3672);
x_3674 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3674, 0, x_3638);
lean_ctor_set(x_3674, 1, x_3673);
x_3675 = lean_array_push(x_3649, x_3674);
x_3676 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3676, 0, x_3655);
lean_ctor_set(x_3676, 1, x_3675);
x_3677 = lean_unsigned_to_nat(6u);
x_3678 = lean_mk_empty_array_with_capacity(x_3677);
x_3679 = lean_array_push(x_3678, x_3636);
lean_inc(x_3641);
x_3680 = lean_array_push(x_3679, x_3641);
x_3681 = lean_array_push(x_3680, x_3651);
x_3682 = lean_array_push(x_3681, x_3641);
x_3683 = lean_array_push(x_3682, x_3653);
x_3684 = lean_array_push(x_3683, x_3676);
x_3685 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3685, 0, x_3635);
lean_ctor_set(x_3685, 1, x_3684);
x_3686 = 1;
x_3687 = lean_box(x_3686);
lean_ctor_set(x_3617, 1, x_3687);
lean_ctor_set(x_3617, 0, x_3685);
lean_ctor_set(x_3624, 0, x_3616);
return x_3624;
}
else
{
lean_object* x_3688; lean_object* x_3689; lean_object* x_3690; lean_object* x_3691; lean_object* x_3692; lean_object* x_3693; lean_object* x_3694; lean_object* x_3695; lean_object* x_3696; lean_object* x_3697; lean_object* x_3698; lean_object* x_3699; lean_object* x_3700; lean_object* x_3701; lean_object* x_3702; lean_object* x_3703; lean_object* x_3704; lean_object* x_3705; lean_object* x_3706; lean_object* x_3707; lean_object* x_3708; lean_object* x_3709; lean_object* x_3710; uint8_t x_3711; lean_object* x_3712; 
lean_dec(x_14);
lean_inc(x_3638);
x_3688 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3688, 0, x_3638);
lean_ctor_set(x_3688, 1, x_3660);
x_3689 = lean_mk_string("=>");
x_3690 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3690, 0, x_3626);
lean_ctor_set(x_3690, 1, x_3689);
x_3691 = lean_unsigned_to_nat(4u);
x_3692 = lean_mk_empty_array_with_capacity(x_3691);
x_3693 = lean_array_push(x_3692, x_3659);
x_3694 = lean_array_push(x_3693, x_3688);
x_3695 = lean_array_push(x_3694, x_3690);
x_3696 = lean_array_push(x_3695, x_3622);
x_3697 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3697, 0, x_3657);
lean_ctor_set(x_3697, 1, x_3696);
lean_inc(x_3649);
x_3698 = lean_array_push(x_3649, x_3697);
x_3699 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3699, 0, x_3638);
lean_ctor_set(x_3699, 1, x_3698);
x_3700 = lean_array_push(x_3649, x_3699);
x_3701 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3701, 0, x_3655);
lean_ctor_set(x_3701, 1, x_3700);
x_3702 = lean_unsigned_to_nat(6u);
x_3703 = lean_mk_empty_array_with_capacity(x_3702);
x_3704 = lean_array_push(x_3703, x_3636);
lean_inc(x_3641);
x_3705 = lean_array_push(x_3704, x_3641);
x_3706 = lean_array_push(x_3705, x_3651);
x_3707 = lean_array_push(x_3706, x_3641);
x_3708 = lean_array_push(x_3707, x_3653);
x_3709 = lean_array_push(x_3708, x_3701);
x_3710 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3710, 0, x_3635);
lean_ctor_set(x_3710, 1, x_3709);
x_3711 = 1;
x_3712 = lean_box(x_3711);
lean_ctor_set(x_3617, 1, x_3712);
lean_ctor_set(x_3617, 0, x_3710);
lean_ctor_set(x_3624, 0, x_3616);
return x_3624;
}
}
else
{
lean_object* x_3713; lean_object* x_3714; lean_object* x_3715; lean_object* x_3716; lean_object* x_3717; lean_object* x_3718; lean_object* x_3719; lean_object* x_3720; lean_object* x_3721; lean_object* x_3722; lean_object* x_3723; lean_object* x_3724; lean_object* x_3725; lean_object* x_3726; lean_object* x_3727; lean_object* x_3728; lean_object* x_3729; lean_object* x_3730; lean_object* x_3731; lean_object* x_3732; lean_object* x_3733; lean_object* x_3734; lean_object* x_3735; lean_object* x_3736; lean_object* x_3737; lean_object* x_3738; lean_object* x_3739; lean_object* x_3740; lean_object* x_3741; lean_object* x_3742; lean_object* x_3743; lean_object* x_3744; lean_object* x_3745; lean_object* x_3746; lean_object* x_3747; lean_object* x_3748; lean_object* x_3749; lean_object* x_3750; lean_object* x_3751; lean_object* x_3752; lean_object* x_3753; lean_object* x_3754; lean_object* x_3755; lean_object* x_3756; lean_object* x_3757; lean_object* x_3758; lean_object* x_3759; lean_object* x_3760; lean_object* x_3761; lean_object* x_3762; lean_object* x_3763; lean_object* x_3764; lean_object* x_3765; lean_object* x_3766; lean_object* x_3767; lean_object* x_3768; lean_object* x_3769; lean_object* x_3770; lean_object* x_3771; lean_object* x_3772; uint8_t x_3773; lean_object* x_3774; lean_object* x_3775; 
x_3713 = lean_ctor_get(x_3624, 0);
x_3714 = lean_ctor_get(x_3624, 1);
lean_inc(x_3714);
lean_inc(x_3713);
lean_dec(x_3624);
x_3715 = lean_box(0);
x_3716 = lean_mk_string("Lean");
x_3717 = lean_name_mk_string(x_3715, x_3716);
x_3718 = lean_mk_string("Parser");
x_3719 = lean_name_mk_string(x_3717, x_3718);
x_3720 = lean_mk_string("Term");
x_3721 = lean_name_mk_string(x_3719, x_3720);
x_3722 = lean_mk_string("match");
lean_inc(x_3722);
lean_inc(x_3721);
x_3723 = lean_name_mk_string(x_3721, x_3722);
lean_inc(x_3713);
x_3724 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3724, 0, x_3713);
lean_ctor_set(x_3724, 1, x_3722);
x_3725 = lean_mk_string("null");
x_3726 = lean_name_mk_string(x_3715, x_3725);
x_3727 = lean_unsigned_to_nat(0u);
x_3728 = lean_mk_empty_array_with_capacity(x_3727);
lean_inc(x_3726);
x_3729 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3729, 0, x_3726);
lean_ctor_set(x_3729, 1, x_3728);
x_3730 = lean_mk_string("matchDiscr");
lean_inc(x_3721);
x_3731 = lean_name_mk_string(x_3721, x_3730);
x_3732 = lean_unsigned_to_nat(2u);
x_3733 = lean_mk_empty_array_with_capacity(x_3732);
lean_inc(x_3729);
x_3734 = lean_array_push(x_3733, x_3729);
x_3735 = lean_array_push(x_3734, x_3608);
x_3736 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3736, 0, x_3731);
lean_ctor_set(x_3736, 1, x_3735);
x_3737 = lean_mk_empty_array_with_capacity(x_3610);
lean_inc(x_3737);
x_3738 = lean_array_push(x_3737, x_3736);
lean_inc(x_3726);
x_3739 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3739, 0, x_3726);
lean_ctor_set(x_3739, 1, x_3738);
x_3740 = lean_mk_string("with");
lean_inc(x_3713);
x_3741 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3741, 0, x_3713);
lean_ctor_set(x_3741, 1, x_3740);
x_3742 = lean_mk_string("matchAlts");
lean_inc(x_3721);
x_3743 = lean_name_mk_string(x_3721, x_3742);
x_3744 = lean_mk_string("matchAlt");
x_3745 = lean_name_mk_string(x_3721, x_3744);
x_3746 = lean_mk_string("|");
lean_inc(x_3713);
x_3747 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3747, 0, x_3713);
lean_ctor_set(x_3747, 1, x_3746);
lean_inc(x_14);
lean_inc(x_3737);
x_3748 = lean_array_push(x_3737, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3749 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3749 = lean_box(0);
}
lean_inc(x_3726);
if (lean_is_scalar(x_3749)) {
 x_3750 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3750 = x_3749;
}
lean_ctor_set(x_3750, 0, x_3726);
lean_ctor_set(x_3750, 1, x_3748);
x_3751 = lean_mk_string("=>");
x_3752 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3752, 0, x_3713);
lean_ctor_set(x_3752, 1, x_3751);
x_3753 = lean_unsigned_to_nat(4u);
x_3754 = lean_mk_empty_array_with_capacity(x_3753);
x_3755 = lean_array_push(x_3754, x_3747);
x_3756 = lean_array_push(x_3755, x_3750);
x_3757 = lean_array_push(x_3756, x_3752);
x_3758 = lean_array_push(x_3757, x_3622);
x_3759 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3759, 0, x_3745);
lean_ctor_set(x_3759, 1, x_3758);
lean_inc(x_3737);
x_3760 = lean_array_push(x_3737, x_3759);
x_3761 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3761, 0, x_3726);
lean_ctor_set(x_3761, 1, x_3760);
x_3762 = lean_array_push(x_3737, x_3761);
x_3763 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3763, 0, x_3743);
lean_ctor_set(x_3763, 1, x_3762);
x_3764 = lean_unsigned_to_nat(6u);
x_3765 = lean_mk_empty_array_with_capacity(x_3764);
x_3766 = lean_array_push(x_3765, x_3724);
lean_inc(x_3729);
x_3767 = lean_array_push(x_3766, x_3729);
x_3768 = lean_array_push(x_3767, x_3739);
x_3769 = lean_array_push(x_3768, x_3729);
x_3770 = lean_array_push(x_3769, x_3741);
x_3771 = lean_array_push(x_3770, x_3763);
x_3772 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3772, 0, x_3723);
lean_ctor_set(x_3772, 1, x_3771);
x_3773 = 1;
x_3774 = lean_box(x_3773);
lean_ctor_set(x_3617, 1, x_3774);
lean_ctor_set(x_3617, 0, x_3772);
x_3775 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3775, 0, x_3616);
lean_ctor_set(x_3775, 1, x_3714);
return x_3775;
}
}
else
{
lean_object* x_3776; lean_object* x_3777; lean_object* x_3778; lean_object* x_3779; lean_object* x_3780; lean_object* x_3781; lean_object* x_3782; lean_object* x_3783; lean_object* x_3784; lean_object* x_3785; lean_object* x_3786; lean_object* x_3787; lean_object* x_3788; lean_object* x_3789; lean_object* x_3790; lean_object* x_3791; lean_object* x_3792; lean_object* x_3793; lean_object* x_3794; lean_object* x_3795; lean_object* x_3796; lean_object* x_3797; lean_object* x_3798; lean_object* x_3799; lean_object* x_3800; lean_object* x_3801; lean_object* x_3802; lean_object* x_3803; lean_object* x_3804; lean_object* x_3805; lean_object* x_3806; lean_object* x_3807; lean_object* x_3808; lean_object* x_3809; lean_object* x_3810; lean_object* x_3811; lean_object* x_3812; lean_object* x_3813; lean_object* x_3814; lean_object* x_3815; lean_object* x_3816; lean_object* x_3817; lean_object* x_3818; lean_object* x_3819; lean_object* x_3820; lean_object* x_3821; lean_object* x_3822; lean_object* x_3823; lean_object* x_3824; lean_object* x_3825; lean_object* x_3826; lean_object* x_3827; lean_object* x_3828; lean_object* x_3829; lean_object* x_3830; lean_object* x_3831; lean_object* x_3832; lean_object* x_3833; lean_object* x_3834; lean_object* x_3835; lean_object* x_3836; lean_object* x_3837; lean_object* x_3838; uint8_t x_3839; lean_object* x_3840; lean_object* x_3841; lean_object* x_3842; 
x_3776 = lean_ctor_get(x_3617, 0);
lean_inc(x_3776);
lean_dec(x_3617);
x_3777 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3618);
lean_dec(x_5);
x_3778 = lean_ctor_get(x_3777, 0);
lean_inc(x_3778);
x_3779 = lean_ctor_get(x_3777, 1);
lean_inc(x_3779);
if (lean_is_exclusive(x_3777)) {
 lean_ctor_release(x_3777, 0);
 lean_ctor_release(x_3777, 1);
 x_3780 = x_3777;
} else {
 lean_dec_ref(x_3777);
 x_3780 = lean_box(0);
}
x_3781 = lean_box(0);
x_3782 = lean_mk_string("Lean");
x_3783 = lean_name_mk_string(x_3781, x_3782);
x_3784 = lean_mk_string("Parser");
x_3785 = lean_name_mk_string(x_3783, x_3784);
x_3786 = lean_mk_string("Term");
x_3787 = lean_name_mk_string(x_3785, x_3786);
x_3788 = lean_mk_string("match");
lean_inc(x_3788);
lean_inc(x_3787);
x_3789 = lean_name_mk_string(x_3787, x_3788);
lean_inc(x_3778);
x_3790 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3790, 0, x_3778);
lean_ctor_set(x_3790, 1, x_3788);
x_3791 = lean_mk_string("null");
x_3792 = lean_name_mk_string(x_3781, x_3791);
x_3793 = lean_unsigned_to_nat(0u);
x_3794 = lean_mk_empty_array_with_capacity(x_3793);
lean_inc(x_3792);
x_3795 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3795, 0, x_3792);
lean_ctor_set(x_3795, 1, x_3794);
x_3796 = lean_mk_string("matchDiscr");
lean_inc(x_3787);
x_3797 = lean_name_mk_string(x_3787, x_3796);
x_3798 = lean_unsigned_to_nat(2u);
x_3799 = lean_mk_empty_array_with_capacity(x_3798);
lean_inc(x_3795);
x_3800 = lean_array_push(x_3799, x_3795);
x_3801 = lean_array_push(x_3800, x_3608);
x_3802 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3802, 0, x_3797);
lean_ctor_set(x_3802, 1, x_3801);
x_3803 = lean_mk_empty_array_with_capacity(x_3610);
lean_inc(x_3803);
x_3804 = lean_array_push(x_3803, x_3802);
lean_inc(x_3792);
x_3805 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3805, 0, x_3792);
lean_ctor_set(x_3805, 1, x_3804);
x_3806 = lean_mk_string("with");
lean_inc(x_3778);
x_3807 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3807, 0, x_3778);
lean_ctor_set(x_3807, 1, x_3806);
x_3808 = lean_mk_string("matchAlts");
lean_inc(x_3787);
x_3809 = lean_name_mk_string(x_3787, x_3808);
x_3810 = lean_mk_string("matchAlt");
x_3811 = lean_name_mk_string(x_3787, x_3810);
x_3812 = lean_mk_string("|");
lean_inc(x_3778);
x_3813 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3813, 0, x_3778);
lean_ctor_set(x_3813, 1, x_3812);
lean_inc(x_14);
lean_inc(x_3803);
x_3814 = lean_array_push(x_3803, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3815 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3815 = lean_box(0);
}
lean_inc(x_3792);
if (lean_is_scalar(x_3815)) {
 x_3816 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3816 = x_3815;
}
lean_ctor_set(x_3816, 0, x_3792);
lean_ctor_set(x_3816, 1, x_3814);
x_3817 = lean_mk_string("=>");
x_3818 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3818, 0, x_3778);
lean_ctor_set(x_3818, 1, x_3817);
x_3819 = lean_unsigned_to_nat(4u);
x_3820 = lean_mk_empty_array_with_capacity(x_3819);
x_3821 = lean_array_push(x_3820, x_3813);
x_3822 = lean_array_push(x_3821, x_3816);
x_3823 = lean_array_push(x_3822, x_3818);
x_3824 = lean_array_push(x_3823, x_3776);
x_3825 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3825, 0, x_3811);
lean_ctor_set(x_3825, 1, x_3824);
lean_inc(x_3803);
x_3826 = lean_array_push(x_3803, x_3825);
x_3827 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3827, 0, x_3792);
lean_ctor_set(x_3827, 1, x_3826);
x_3828 = lean_array_push(x_3803, x_3827);
x_3829 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3829, 0, x_3809);
lean_ctor_set(x_3829, 1, x_3828);
x_3830 = lean_unsigned_to_nat(6u);
x_3831 = lean_mk_empty_array_with_capacity(x_3830);
x_3832 = lean_array_push(x_3831, x_3790);
lean_inc(x_3795);
x_3833 = lean_array_push(x_3832, x_3795);
x_3834 = lean_array_push(x_3833, x_3805);
x_3835 = lean_array_push(x_3834, x_3795);
x_3836 = lean_array_push(x_3835, x_3807);
x_3837 = lean_array_push(x_3836, x_3829);
x_3838 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3838, 0, x_3789);
lean_ctor_set(x_3838, 1, x_3837);
x_3839 = 1;
x_3840 = lean_box(x_3839);
x_3841 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3841, 0, x_3838);
lean_ctor_set(x_3841, 1, x_3840);
lean_ctor_set(x_3616, 1, x_3841);
if (lean_is_scalar(x_3780)) {
 x_3842 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3842 = x_3780;
}
lean_ctor_set(x_3842, 0, x_3616);
lean_ctor_set(x_3842, 1, x_3779);
return x_3842;
}
}
else
{
lean_object* x_3843; lean_object* x_3844; lean_object* x_3845; lean_object* x_3846; lean_object* x_3847; lean_object* x_3848; lean_object* x_3849; lean_object* x_3850; lean_object* x_3851; lean_object* x_3852; lean_object* x_3853; lean_object* x_3854; lean_object* x_3855; lean_object* x_3856; lean_object* x_3857; lean_object* x_3858; lean_object* x_3859; lean_object* x_3860; lean_object* x_3861; lean_object* x_3862; lean_object* x_3863; lean_object* x_3864; lean_object* x_3865; lean_object* x_3866; lean_object* x_3867; lean_object* x_3868; lean_object* x_3869; lean_object* x_3870; lean_object* x_3871; lean_object* x_3872; lean_object* x_3873; lean_object* x_3874; lean_object* x_3875; lean_object* x_3876; lean_object* x_3877; lean_object* x_3878; lean_object* x_3879; lean_object* x_3880; lean_object* x_3881; lean_object* x_3882; lean_object* x_3883; lean_object* x_3884; lean_object* x_3885; lean_object* x_3886; lean_object* x_3887; lean_object* x_3888; lean_object* x_3889; lean_object* x_3890; lean_object* x_3891; lean_object* x_3892; lean_object* x_3893; lean_object* x_3894; lean_object* x_3895; lean_object* x_3896; lean_object* x_3897; lean_object* x_3898; lean_object* x_3899; lean_object* x_3900; lean_object* x_3901; lean_object* x_3902; lean_object* x_3903; lean_object* x_3904; lean_object* x_3905; lean_object* x_3906; lean_object* x_3907; uint8_t x_3908; lean_object* x_3909; lean_object* x_3910; lean_object* x_3911; lean_object* x_3912; 
x_3843 = lean_ctor_get(x_3616, 0);
lean_inc(x_3843);
lean_dec(x_3616);
x_3844 = lean_ctor_get(x_3617, 0);
lean_inc(x_3844);
if (lean_is_exclusive(x_3617)) {
 lean_ctor_release(x_3617, 0);
 lean_ctor_release(x_3617, 1);
 x_3845 = x_3617;
} else {
 lean_dec_ref(x_3617);
 x_3845 = lean_box(0);
}
x_3846 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3618);
lean_dec(x_5);
x_3847 = lean_ctor_get(x_3846, 0);
lean_inc(x_3847);
x_3848 = lean_ctor_get(x_3846, 1);
lean_inc(x_3848);
if (lean_is_exclusive(x_3846)) {
 lean_ctor_release(x_3846, 0);
 lean_ctor_release(x_3846, 1);
 x_3849 = x_3846;
} else {
 lean_dec_ref(x_3846);
 x_3849 = lean_box(0);
}
x_3850 = lean_box(0);
x_3851 = lean_mk_string("Lean");
x_3852 = lean_name_mk_string(x_3850, x_3851);
x_3853 = lean_mk_string("Parser");
x_3854 = lean_name_mk_string(x_3852, x_3853);
x_3855 = lean_mk_string("Term");
x_3856 = lean_name_mk_string(x_3854, x_3855);
x_3857 = lean_mk_string("match");
lean_inc(x_3857);
lean_inc(x_3856);
x_3858 = lean_name_mk_string(x_3856, x_3857);
lean_inc(x_3847);
x_3859 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3859, 0, x_3847);
lean_ctor_set(x_3859, 1, x_3857);
x_3860 = lean_mk_string("null");
x_3861 = lean_name_mk_string(x_3850, x_3860);
x_3862 = lean_unsigned_to_nat(0u);
x_3863 = lean_mk_empty_array_with_capacity(x_3862);
lean_inc(x_3861);
x_3864 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3864, 0, x_3861);
lean_ctor_set(x_3864, 1, x_3863);
x_3865 = lean_mk_string("matchDiscr");
lean_inc(x_3856);
x_3866 = lean_name_mk_string(x_3856, x_3865);
x_3867 = lean_unsigned_to_nat(2u);
x_3868 = lean_mk_empty_array_with_capacity(x_3867);
lean_inc(x_3864);
x_3869 = lean_array_push(x_3868, x_3864);
x_3870 = lean_array_push(x_3869, x_3608);
x_3871 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3871, 0, x_3866);
lean_ctor_set(x_3871, 1, x_3870);
x_3872 = lean_mk_empty_array_with_capacity(x_3610);
lean_inc(x_3872);
x_3873 = lean_array_push(x_3872, x_3871);
lean_inc(x_3861);
x_3874 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3874, 0, x_3861);
lean_ctor_set(x_3874, 1, x_3873);
x_3875 = lean_mk_string("with");
lean_inc(x_3847);
x_3876 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3876, 0, x_3847);
lean_ctor_set(x_3876, 1, x_3875);
x_3877 = lean_mk_string("matchAlts");
lean_inc(x_3856);
x_3878 = lean_name_mk_string(x_3856, x_3877);
x_3879 = lean_mk_string("matchAlt");
x_3880 = lean_name_mk_string(x_3856, x_3879);
x_3881 = lean_mk_string("|");
lean_inc(x_3847);
x_3882 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3882, 0, x_3847);
lean_ctor_set(x_3882, 1, x_3881);
lean_inc(x_14);
lean_inc(x_3872);
x_3883 = lean_array_push(x_3872, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3884 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3884 = lean_box(0);
}
lean_inc(x_3861);
if (lean_is_scalar(x_3884)) {
 x_3885 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3885 = x_3884;
}
lean_ctor_set(x_3885, 0, x_3861);
lean_ctor_set(x_3885, 1, x_3883);
x_3886 = lean_mk_string("=>");
x_3887 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3887, 0, x_3847);
lean_ctor_set(x_3887, 1, x_3886);
x_3888 = lean_unsigned_to_nat(4u);
x_3889 = lean_mk_empty_array_with_capacity(x_3888);
x_3890 = lean_array_push(x_3889, x_3882);
x_3891 = lean_array_push(x_3890, x_3885);
x_3892 = lean_array_push(x_3891, x_3887);
x_3893 = lean_array_push(x_3892, x_3844);
x_3894 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3894, 0, x_3880);
lean_ctor_set(x_3894, 1, x_3893);
lean_inc(x_3872);
x_3895 = lean_array_push(x_3872, x_3894);
x_3896 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3896, 0, x_3861);
lean_ctor_set(x_3896, 1, x_3895);
x_3897 = lean_array_push(x_3872, x_3896);
x_3898 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3898, 0, x_3878);
lean_ctor_set(x_3898, 1, x_3897);
x_3899 = lean_unsigned_to_nat(6u);
x_3900 = lean_mk_empty_array_with_capacity(x_3899);
x_3901 = lean_array_push(x_3900, x_3859);
lean_inc(x_3864);
x_3902 = lean_array_push(x_3901, x_3864);
x_3903 = lean_array_push(x_3902, x_3874);
x_3904 = lean_array_push(x_3903, x_3864);
x_3905 = lean_array_push(x_3904, x_3876);
x_3906 = lean_array_push(x_3905, x_3898);
x_3907 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3907, 0, x_3858);
lean_ctor_set(x_3907, 1, x_3906);
x_3908 = 1;
x_3909 = lean_box(x_3908);
if (lean_is_scalar(x_3845)) {
 x_3910 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3910 = x_3845;
}
lean_ctor_set(x_3910, 0, x_3907);
lean_ctor_set(x_3910, 1, x_3909);
x_3911 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3911, 0, x_3843);
lean_ctor_set(x_3911, 1, x_3910);
if (lean_is_scalar(x_3849)) {
 x_3912 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3912 = x_3849;
}
lean_ctor_set(x_3912, 0, x_3911);
lean_ctor_set(x_3912, 1, x_3848);
return x_3912;
}
}
}
else
{
lean_object* x_3913; lean_object* x_3914; lean_object* x_3915; lean_object* x_3916; lean_object* x_3917; lean_object* x_3918; lean_object* x_3919; lean_object* x_3920; lean_object* x_3921; lean_object* x_3922; lean_object* x_3923; lean_object* x_3924; uint8_t x_3925; 
lean_dec(x_291);
lean_inc(x_5);
x_3913 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_3914 = lean_ctor_get(x_3913, 0);
lean_inc(x_3914);
x_3915 = lean_ctor_get(x_3913, 1);
lean_inc(x_3915);
lean_dec(x_3913);
x_3916 = lean_unsigned_to_nat(1u);
x_3917 = lean_nat_add(x_3, x_3916);
lean_dec(x_3);
x_3918 = l_Lean_mkHole(x_14);
lean_inc(x_3914);
x_3919 = l_Lean_Elab_Term_mkExplicitBinder(x_3914, x_3918);
x_3920 = lean_array_push(x_4, x_3919);
lean_inc(x_5);
x_3921 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3917, x_3920, x_5, x_3915);
x_3922 = lean_ctor_get(x_3921, 0);
lean_inc(x_3922);
x_3923 = lean_ctor_get(x_3922, 1);
lean_inc(x_3923);
x_3924 = lean_ctor_get(x_3921, 1);
lean_inc(x_3924);
lean_dec(x_3921);
x_3925 = !lean_is_exclusive(x_3922);
if (x_3925 == 0)
{
lean_object* x_3926; uint8_t x_3927; 
x_3926 = lean_ctor_get(x_3922, 1);
lean_dec(x_3926);
x_3927 = !lean_is_exclusive(x_3923);
if (x_3927 == 0)
{
lean_object* x_3928; lean_object* x_3929; lean_object* x_3930; uint8_t x_3931; 
x_3928 = lean_ctor_get(x_3923, 0);
x_3929 = lean_ctor_get(x_3923, 1);
lean_dec(x_3929);
x_3930 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3924);
lean_dec(x_5);
x_3931 = !lean_is_exclusive(x_3930);
if (x_3931 == 0)
{
lean_object* x_3932; lean_object* x_3933; lean_object* x_3934; lean_object* x_3935; lean_object* x_3936; lean_object* x_3937; lean_object* x_3938; lean_object* x_3939; lean_object* x_3940; lean_object* x_3941; lean_object* x_3942; lean_object* x_3943; lean_object* x_3944; lean_object* x_3945; lean_object* x_3946; lean_object* x_3947; lean_object* x_3948; lean_object* x_3949; lean_object* x_3950; lean_object* x_3951; lean_object* x_3952; lean_object* x_3953; lean_object* x_3954; lean_object* x_3955; lean_object* x_3956; lean_object* x_3957; lean_object* x_3958; lean_object* x_3959; lean_object* x_3960; lean_object* x_3961; lean_object* x_3962; lean_object* x_3963; lean_object* x_3964; lean_object* x_3965; lean_object* x_3966; uint8_t x_3967; 
x_3932 = lean_ctor_get(x_3930, 0);
x_3933 = lean_box(0);
x_3934 = lean_mk_string("Lean");
x_3935 = lean_name_mk_string(x_3933, x_3934);
x_3936 = lean_mk_string("Parser");
x_3937 = lean_name_mk_string(x_3935, x_3936);
x_3938 = lean_mk_string("Term");
x_3939 = lean_name_mk_string(x_3937, x_3938);
x_3940 = lean_mk_string("match");
lean_inc(x_3940);
lean_inc(x_3939);
x_3941 = lean_name_mk_string(x_3939, x_3940);
lean_inc(x_3932);
x_3942 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3942, 0, x_3932);
lean_ctor_set(x_3942, 1, x_3940);
x_3943 = lean_mk_string("null");
x_3944 = lean_name_mk_string(x_3933, x_3943);
x_3945 = lean_unsigned_to_nat(0u);
x_3946 = lean_mk_empty_array_with_capacity(x_3945);
lean_inc(x_3944);
x_3947 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3947, 0, x_3944);
lean_ctor_set(x_3947, 1, x_3946);
x_3948 = lean_mk_string("matchDiscr");
lean_inc(x_3939);
x_3949 = lean_name_mk_string(x_3939, x_3948);
x_3950 = lean_unsigned_to_nat(2u);
x_3951 = lean_mk_empty_array_with_capacity(x_3950);
lean_inc(x_3947);
x_3952 = lean_array_push(x_3951, x_3947);
x_3953 = lean_array_push(x_3952, x_3914);
x_3954 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3954, 0, x_3949);
lean_ctor_set(x_3954, 1, x_3953);
x_3955 = lean_mk_empty_array_with_capacity(x_3916);
lean_inc(x_3955);
x_3956 = lean_array_push(x_3955, x_3954);
lean_inc(x_3944);
x_3957 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3957, 0, x_3944);
lean_ctor_set(x_3957, 1, x_3956);
x_3958 = lean_mk_string("with");
lean_inc(x_3932);
x_3959 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3959, 0, x_3932);
lean_ctor_set(x_3959, 1, x_3958);
x_3960 = lean_mk_string("matchAlts");
lean_inc(x_3939);
x_3961 = lean_name_mk_string(x_3939, x_3960);
x_3962 = lean_mk_string("matchAlt");
x_3963 = lean_name_mk_string(x_3939, x_3962);
x_3964 = lean_mk_string("|");
lean_inc(x_3932);
x_3965 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3965, 0, x_3932);
lean_ctor_set(x_3965, 1, x_3964);
lean_inc(x_14);
lean_inc(x_3955);
x_3966 = lean_array_push(x_3955, x_14);
x_3967 = !lean_is_exclusive(x_14);
if (x_3967 == 0)
{
lean_object* x_3968; lean_object* x_3969; lean_object* x_3970; lean_object* x_3971; lean_object* x_3972; lean_object* x_3973; lean_object* x_3974; lean_object* x_3975; lean_object* x_3976; lean_object* x_3977; lean_object* x_3978; lean_object* x_3979; lean_object* x_3980; lean_object* x_3981; lean_object* x_3982; lean_object* x_3983; lean_object* x_3984; lean_object* x_3985; lean_object* x_3986; lean_object* x_3987; lean_object* x_3988; lean_object* x_3989; lean_object* x_3990; lean_object* x_3991; uint8_t x_3992; lean_object* x_3993; 
x_3968 = lean_ctor_get(x_14, 1);
lean_dec(x_3968);
x_3969 = lean_ctor_get(x_14, 0);
lean_dec(x_3969);
lean_inc(x_3944);
lean_ctor_set(x_14, 1, x_3966);
lean_ctor_set(x_14, 0, x_3944);
x_3970 = lean_mk_string("=>");
x_3971 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3971, 0, x_3932);
lean_ctor_set(x_3971, 1, x_3970);
x_3972 = lean_unsigned_to_nat(4u);
x_3973 = lean_mk_empty_array_with_capacity(x_3972);
x_3974 = lean_array_push(x_3973, x_3965);
x_3975 = lean_array_push(x_3974, x_14);
x_3976 = lean_array_push(x_3975, x_3971);
x_3977 = lean_array_push(x_3976, x_3928);
x_3978 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3978, 0, x_3963);
lean_ctor_set(x_3978, 1, x_3977);
lean_inc(x_3955);
x_3979 = lean_array_push(x_3955, x_3978);
x_3980 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3980, 0, x_3944);
lean_ctor_set(x_3980, 1, x_3979);
x_3981 = lean_array_push(x_3955, x_3980);
x_3982 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3982, 0, x_3961);
lean_ctor_set(x_3982, 1, x_3981);
x_3983 = lean_unsigned_to_nat(6u);
x_3984 = lean_mk_empty_array_with_capacity(x_3983);
x_3985 = lean_array_push(x_3984, x_3942);
lean_inc(x_3947);
x_3986 = lean_array_push(x_3985, x_3947);
x_3987 = lean_array_push(x_3986, x_3957);
x_3988 = lean_array_push(x_3987, x_3947);
x_3989 = lean_array_push(x_3988, x_3959);
x_3990 = lean_array_push(x_3989, x_3982);
x_3991 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3991, 0, x_3941);
lean_ctor_set(x_3991, 1, x_3990);
x_3992 = 1;
x_3993 = lean_box(x_3992);
lean_ctor_set(x_3923, 1, x_3993);
lean_ctor_set(x_3923, 0, x_3991);
lean_ctor_set(x_3930, 0, x_3922);
return x_3930;
}
else
{
lean_object* x_3994; lean_object* x_3995; lean_object* x_3996; lean_object* x_3997; lean_object* x_3998; lean_object* x_3999; lean_object* x_4000; lean_object* x_4001; lean_object* x_4002; lean_object* x_4003; lean_object* x_4004; lean_object* x_4005; lean_object* x_4006; lean_object* x_4007; lean_object* x_4008; lean_object* x_4009; lean_object* x_4010; lean_object* x_4011; lean_object* x_4012; lean_object* x_4013; lean_object* x_4014; lean_object* x_4015; lean_object* x_4016; uint8_t x_4017; lean_object* x_4018; 
lean_dec(x_14);
lean_inc(x_3944);
x_3994 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3994, 0, x_3944);
lean_ctor_set(x_3994, 1, x_3966);
x_3995 = lean_mk_string("=>");
x_3996 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3996, 0, x_3932);
lean_ctor_set(x_3996, 1, x_3995);
x_3997 = lean_unsigned_to_nat(4u);
x_3998 = lean_mk_empty_array_with_capacity(x_3997);
x_3999 = lean_array_push(x_3998, x_3965);
x_4000 = lean_array_push(x_3999, x_3994);
x_4001 = lean_array_push(x_4000, x_3996);
x_4002 = lean_array_push(x_4001, x_3928);
x_4003 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4003, 0, x_3963);
lean_ctor_set(x_4003, 1, x_4002);
lean_inc(x_3955);
x_4004 = lean_array_push(x_3955, x_4003);
x_4005 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4005, 0, x_3944);
lean_ctor_set(x_4005, 1, x_4004);
x_4006 = lean_array_push(x_3955, x_4005);
x_4007 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4007, 0, x_3961);
lean_ctor_set(x_4007, 1, x_4006);
x_4008 = lean_unsigned_to_nat(6u);
x_4009 = lean_mk_empty_array_with_capacity(x_4008);
x_4010 = lean_array_push(x_4009, x_3942);
lean_inc(x_3947);
x_4011 = lean_array_push(x_4010, x_3947);
x_4012 = lean_array_push(x_4011, x_3957);
x_4013 = lean_array_push(x_4012, x_3947);
x_4014 = lean_array_push(x_4013, x_3959);
x_4015 = lean_array_push(x_4014, x_4007);
x_4016 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4016, 0, x_3941);
lean_ctor_set(x_4016, 1, x_4015);
x_4017 = 1;
x_4018 = lean_box(x_4017);
lean_ctor_set(x_3923, 1, x_4018);
lean_ctor_set(x_3923, 0, x_4016);
lean_ctor_set(x_3930, 0, x_3922);
return x_3930;
}
}
else
{
lean_object* x_4019; lean_object* x_4020; lean_object* x_4021; lean_object* x_4022; lean_object* x_4023; lean_object* x_4024; lean_object* x_4025; lean_object* x_4026; lean_object* x_4027; lean_object* x_4028; lean_object* x_4029; lean_object* x_4030; lean_object* x_4031; lean_object* x_4032; lean_object* x_4033; lean_object* x_4034; lean_object* x_4035; lean_object* x_4036; lean_object* x_4037; lean_object* x_4038; lean_object* x_4039; lean_object* x_4040; lean_object* x_4041; lean_object* x_4042; lean_object* x_4043; lean_object* x_4044; lean_object* x_4045; lean_object* x_4046; lean_object* x_4047; lean_object* x_4048; lean_object* x_4049; lean_object* x_4050; lean_object* x_4051; lean_object* x_4052; lean_object* x_4053; lean_object* x_4054; lean_object* x_4055; lean_object* x_4056; lean_object* x_4057; lean_object* x_4058; lean_object* x_4059; lean_object* x_4060; lean_object* x_4061; lean_object* x_4062; lean_object* x_4063; lean_object* x_4064; lean_object* x_4065; lean_object* x_4066; lean_object* x_4067; lean_object* x_4068; lean_object* x_4069; lean_object* x_4070; lean_object* x_4071; lean_object* x_4072; lean_object* x_4073; lean_object* x_4074; lean_object* x_4075; lean_object* x_4076; lean_object* x_4077; lean_object* x_4078; uint8_t x_4079; lean_object* x_4080; lean_object* x_4081; 
x_4019 = lean_ctor_get(x_3930, 0);
x_4020 = lean_ctor_get(x_3930, 1);
lean_inc(x_4020);
lean_inc(x_4019);
lean_dec(x_3930);
x_4021 = lean_box(0);
x_4022 = lean_mk_string("Lean");
x_4023 = lean_name_mk_string(x_4021, x_4022);
x_4024 = lean_mk_string("Parser");
x_4025 = lean_name_mk_string(x_4023, x_4024);
x_4026 = lean_mk_string("Term");
x_4027 = lean_name_mk_string(x_4025, x_4026);
x_4028 = lean_mk_string("match");
lean_inc(x_4028);
lean_inc(x_4027);
x_4029 = lean_name_mk_string(x_4027, x_4028);
lean_inc(x_4019);
x_4030 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4030, 0, x_4019);
lean_ctor_set(x_4030, 1, x_4028);
x_4031 = lean_mk_string("null");
x_4032 = lean_name_mk_string(x_4021, x_4031);
x_4033 = lean_unsigned_to_nat(0u);
x_4034 = lean_mk_empty_array_with_capacity(x_4033);
lean_inc(x_4032);
x_4035 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4035, 0, x_4032);
lean_ctor_set(x_4035, 1, x_4034);
x_4036 = lean_mk_string("matchDiscr");
lean_inc(x_4027);
x_4037 = lean_name_mk_string(x_4027, x_4036);
x_4038 = lean_unsigned_to_nat(2u);
x_4039 = lean_mk_empty_array_with_capacity(x_4038);
lean_inc(x_4035);
x_4040 = lean_array_push(x_4039, x_4035);
x_4041 = lean_array_push(x_4040, x_3914);
x_4042 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4042, 0, x_4037);
lean_ctor_set(x_4042, 1, x_4041);
x_4043 = lean_mk_empty_array_with_capacity(x_3916);
lean_inc(x_4043);
x_4044 = lean_array_push(x_4043, x_4042);
lean_inc(x_4032);
x_4045 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4045, 0, x_4032);
lean_ctor_set(x_4045, 1, x_4044);
x_4046 = lean_mk_string("with");
lean_inc(x_4019);
x_4047 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4047, 0, x_4019);
lean_ctor_set(x_4047, 1, x_4046);
x_4048 = lean_mk_string("matchAlts");
lean_inc(x_4027);
x_4049 = lean_name_mk_string(x_4027, x_4048);
x_4050 = lean_mk_string("matchAlt");
x_4051 = lean_name_mk_string(x_4027, x_4050);
x_4052 = lean_mk_string("|");
lean_inc(x_4019);
x_4053 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4053, 0, x_4019);
lean_ctor_set(x_4053, 1, x_4052);
lean_inc(x_14);
lean_inc(x_4043);
x_4054 = lean_array_push(x_4043, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4055 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4055 = lean_box(0);
}
lean_inc(x_4032);
if (lean_is_scalar(x_4055)) {
 x_4056 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4056 = x_4055;
}
lean_ctor_set(x_4056, 0, x_4032);
lean_ctor_set(x_4056, 1, x_4054);
x_4057 = lean_mk_string("=>");
x_4058 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4058, 0, x_4019);
lean_ctor_set(x_4058, 1, x_4057);
x_4059 = lean_unsigned_to_nat(4u);
x_4060 = lean_mk_empty_array_with_capacity(x_4059);
x_4061 = lean_array_push(x_4060, x_4053);
x_4062 = lean_array_push(x_4061, x_4056);
x_4063 = lean_array_push(x_4062, x_4058);
x_4064 = lean_array_push(x_4063, x_3928);
x_4065 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4065, 0, x_4051);
lean_ctor_set(x_4065, 1, x_4064);
lean_inc(x_4043);
x_4066 = lean_array_push(x_4043, x_4065);
x_4067 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4067, 0, x_4032);
lean_ctor_set(x_4067, 1, x_4066);
x_4068 = lean_array_push(x_4043, x_4067);
x_4069 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4069, 0, x_4049);
lean_ctor_set(x_4069, 1, x_4068);
x_4070 = lean_unsigned_to_nat(6u);
x_4071 = lean_mk_empty_array_with_capacity(x_4070);
x_4072 = lean_array_push(x_4071, x_4030);
lean_inc(x_4035);
x_4073 = lean_array_push(x_4072, x_4035);
x_4074 = lean_array_push(x_4073, x_4045);
x_4075 = lean_array_push(x_4074, x_4035);
x_4076 = lean_array_push(x_4075, x_4047);
x_4077 = lean_array_push(x_4076, x_4069);
x_4078 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4078, 0, x_4029);
lean_ctor_set(x_4078, 1, x_4077);
x_4079 = 1;
x_4080 = lean_box(x_4079);
lean_ctor_set(x_3923, 1, x_4080);
lean_ctor_set(x_3923, 0, x_4078);
x_4081 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4081, 0, x_3922);
lean_ctor_set(x_4081, 1, x_4020);
return x_4081;
}
}
else
{
lean_object* x_4082; lean_object* x_4083; lean_object* x_4084; lean_object* x_4085; lean_object* x_4086; lean_object* x_4087; lean_object* x_4088; lean_object* x_4089; lean_object* x_4090; lean_object* x_4091; lean_object* x_4092; lean_object* x_4093; lean_object* x_4094; lean_object* x_4095; lean_object* x_4096; lean_object* x_4097; lean_object* x_4098; lean_object* x_4099; lean_object* x_4100; lean_object* x_4101; lean_object* x_4102; lean_object* x_4103; lean_object* x_4104; lean_object* x_4105; lean_object* x_4106; lean_object* x_4107; lean_object* x_4108; lean_object* x_4109; lean_object* x_4110; lean_object* x_4111; lean_object* x_4112; lean_object* x_4113; lean_object* x_4114; lean_object* x_4115; lean_object* x_4116; lean_object* x_4117; lean_object* x_4118; lean_object* x_4119; lean_object* x_4120; lean_object* x_4121; lean_object* x_4122; lean_object* x_4123; lean_object* x_4124; lean_object* x_4125; lean_object* x_4126; lean_object* x_4127; lean_object* x_4128; lean_object* x_4129; lean_object* x_4130; lean_object* x_4131; lean_object* x_4132; lean_object* x_4133; lean_object* x_4134; lean_object* x_4135; lean_object* x_4136; lean_object* x_4137; lean_object* x_4138; lean_object* x_4139; lean_object* x_4140; lean_object* x_4141; lean_object* x_4142; lean_object* x_4143; lean_object* x_4144; uint8_t x_4145; lean_object* x_4146; lean_object* x_4147; lean_object* x_4148; 
x_4082 = lean_ctor_get(x_3923, 0);
lean_inc(x_4082);
lean_dec(x_3923);
x_4083 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3924);
lean_dec(x_5);
x_4084 = lean_ctor_get(x_4083, 0);
lean_inc(x_4084);
x_4085 = lean_ctor_get(x_4083, 1);
lean_inc(x_4085);
if (lean_is_exclusive(x_4083)) {
 lean_ctor_release(x_4083, 0);
 lean_ctor_release(x_4083, 1);
 x_4086 = x_4083;
} else {
 lean_dec_ref(x_4083);
 x_4086 = lean_box(0);
}
x_4087 = lean_box(0);
x_4088 = lean_mk_string("Lean");
x_4089 = lean_name_mk_string(x_4087, x_4088);
x_4090 = lean_mk_string("Parser");
x_4091 = lean_name_mk_string(x_4089, x_4090);
x_4092 = lean_mk_string("Term");
x_4093 = lean_name_mk_string(x_4091, x_4092);
x_4094 = lean_mk_string("match");
lean_inc(x_4094);
lean_inc(x_4093);
x_4095 = lean_name_mk_string(x_4093, x_4094);
lean_inc(x_4084);
x_4096 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4096, 0, x_4084);
lean_ctor_set(x_4096, 1, x_4094);
x_4097 = lean_mk_string("null");
x_4098 = lean_name_mk_string(x_4087, x_4097);
x_4099 = lean_unsigned_to_nat(0u);
x_4100 = lean_mk_empty_array_with_capacity(x_4099);
lean_inc(x_4098);
x_4101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4101, 0, x_4098);
lean_ctor_set(x_4101, 1, x_4100);
x_4102 = lean_mk_string("matchDiscr");
lean_inc(x_4093);
x_4103 = lean_name_mk_string(x_4093, x_4102);
x_4104 = lean_unsigned_to_nat(2u);
x_4105 = lean_mk_empty_array_with_capacity(x_4104);
lean_inc(x_4101);
x_4106 = lean_array_push(x_4105, x_4101);
x_4107 = lean_array_push(x_4106, x_3914);
x_4108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4108, 0, x_4103);
lean_ctor_set(x_4108, 1, x_4107);
x_4109 = lean_mk_empty_array_with_capacity(x_3916);
lean_inc(x_4109);
x_4110 = lean_array_push(x_4109, x_4108);
lean_inc(x_4098);
x_4111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4111, 0, x_4098);
lean_ctor_set(x_4111, 1, x_4110);
x_4112 = lean_mk_string("with");
lean_inc(x_4084);
x_4113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4113, 0, x_4084);
lean_ctor_set(x_4113, 1, x_4112);
x_4114 = lean_mk_string("matchAlts");
lean_inc(x_4093);
x_4115 = lean_name_mk_string(x_4093, x_4114);
x_4116 = lean_mk_string("matchAlt");
x_4117 = lean_name_mk_string(x_4093, x_4116);
x_4118 = lean_mk_string("|");
lean_inc(x_4084);
x_4119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4119, 0, x_4084);
lean_ctor_set(x_4119, 1, x_4118);
lean_inc(x_14);
lean_inc(x_4109);
x_4120 = lean_array_push(x_4109, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4121 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4121 = lean_box(0);
}
lean_inc(x_4098);
if (lean_is_scalar(x_4121)) {
 x_4122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4122 = x_4121;
}
lean_ctor_set(x_4122, 0, x_4098);
lean_ctor_set(x_4122, 1, x_4120);
x_4123 = lean_mk_string("=>");
x_4124 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4124, 0, x_4084);
lean_ctor_set(x_4124, 1, x_4123);
x_4125 = lean_unsigned_to_nat(4u);
x_4126 = lean_mk_empty_array_with_capacity(x_4125);
x_4127 = lean_array_push(x_4126, x_4119);
x_4128 = lean_array_push(x_4127, x_4122);
x_4129 = lean_array_push(x_4128, x_4124);
x_4130 = lean_array_push(x_4129, x_4082);
x_4131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4131, 0, x_4117);
lean_ctor_set(x_4131, 1, x_4130);
lean_inc(x_4109);
x_4132 = lean_array_push(x_4109, x_4131);
x_4133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4133, 0, x_4098);
lean_ctor_set(x_4133, 1, x_4132);
x_4134 = lean_array_push(x_4109, x_4133);
x_4135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4135, 0, x_4115);
lean_ctor_set(x_4135, 1, x_4134);
x_4136 = lean_unsigned_to_nat(6u);
x_4137 = lean_mk_empty_array_with_capacity(x_4136);
x_4138 = lean_array_push(x_4137, x_4096);
lean_inc(x_4101);
x_4139 = lean_array_push(x_4138, x_4101);
x_4140 = lean_array_push(x_4139, x_4111);
x_4141 = lean_array_push(x_4140, x_4101);
x_4142 = lean_array_push(x_4141, x_4113);
x_4143 = lean_array_push(x_4142, x_4135);
x_4144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4144, 0, x_4095);
lean_ctor_set(x_4144, 1, x_4143);
x_4145 = 1;
x_4146 = lean_box(x_4145);
x_4147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4147, 0, x_4144);
lean_ctor_set(x_4147, 1, x_4146);
lean_ctor_set(x_3922, 1, x_4147);
if (lean_is_scalar(x_4086)) {
 x_4148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4148 = x_4086;
}
lean_ctor_set(x_4148, 0, x_3922);
lean_ctor_set(x_4148, 1, x_4085);
return x_4148;
}
}
else
{
lean_object* x_4149; lean_object* x_4150; lean_object* x_4151; lean_object* x_4152; lean_object* x_4153; lean_object* x_4154; lean_object* x_4155; lean_object* x_4156; lean_object* x_4157; lean_object* x_4158; lean_object* x_4159; lean_object* x_4160; lean_object* x_4161; lean_object* x_4162; lean_object* x_4163; lean_object* x_4164; lean_object* x_4165; lean_object* x_4166; lean_object* x_4167; lean_object* x_4168; lean_object* x_4169; lean_object* x_4170; lean_object* x_4171; lean_object* x_4172; lean_object* x_4173; lean_object* x_4174; lean_object* x_4175; lean_object* x_4176; lean_object* x_4177; lean_object* x_4178; lean_object* x_4179; lean_object* x_4180; lean_object* x_4181; lean_object* x_4182; lean_object* x_4183; lean_object* x_4184; lean_object* x_4185; lean_object* x_4186; lean_object* x_4187; lean_object* x_4188; lean_object* x_4189; lean_object* x_4190; lean_object* x_4191; lean_object* x_4192; lean_object* x_4193; lean_object* x_4194; lean_object* x_4195; lean_object* x_4196; lean_object* x_4197; lean_object* x_4198; lean_object* x_4199; lean_object* x_4200; lean_object* x_4201; lean_object* x_4202; lean_object* x_4203; lean_object* x_4204; lean_object* x_4205; lean_object* x_4206; lean_object* x_4207; lean_object* x_4208; lean_object* x_4209; lean_object* x_4210; lean_object* x_4211; lean_object* x_4212; lean_object* x_4213; uint8_t x_4214; lean_object* x_4215; lean_object* x_4216; lean_object* x_4217; lean_object* x_4218; 
x_4149 = lean_ctor_get(x_3922, 0);
lean_inc(x_4149);
lean_dec(x_3922);
x_4150 = lean_ctor_get(x_3923, 0);
lean_inc(x_4150);
if (lean_is_exclusive(x_3923)) {
 lean_ctor_release(x_3923, 0);
 lean_ctor_release(x_3923, 1);
 x_4151 = x_3923;
} else {
 lean_dec_ref(x_3923);
 x_4151 = lean_box(0);
}
x_4152 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3924);
lean_dec(x_5);
x_4153 = lean_ctor_get(x_4152, 0);
lean_inc(x_4153);
x_4154 = lean_ctor_get(x_4152, 1);
lean_inc(x_4154);
if (lean_is_exclusive(x_4152)) {
 lean_ctor_release(x_4152, 0);
 lean_ctor_release(x_4152, 1);
 x_4155 = x_4152;
} else {
 lean_dec_ref(x_4152);
 x_4155 = lean_box(0);
}
x_4156 = lean_box(0);
x_4157 = lean_mk_string("Lean");
x_4158 = lean_name_mk_string(x_4156, x_4157);
x_4159 = lean_mk_string("Parser");
x_4160 = lean_name_mk_string(x_4158, x_4159);
x_4161 = lean_mk_string("Term");
x_4162 = lean_name_mk_string(x_4160, x_4161);
x_4163 = lean_mk_string("match");
lean_inc(x_4163);
lean_inc(x_4162);
x_4164 = lean_name_mk_string(x_4162, x_4163);
lean_inc(x_4153);
x_4165 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4165, 0, x_4153);
lean_ctor_set(x_4165, 1, x_4163);
x_4166 = lean_mk_string("null");
x_4167 = lean_name_mk_string(x_4156, x_4166);
x_4168 = lean_unsigned_to_nat(0u);
x_4169 = lean_mk_empty_array_with_capacity(x_4168);
lean_inc(x_4167);
x_4170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4170, 0, x_4167);
lean_ctor_set(x_4170, 1, x_4169);
x_4171 = lean_mk_string("matchDiscr");
lean_inc(x_4162);
x_4172 = lean_name_mk_string(x_4162, x_4171);
x_4173 = lean_unsigned_to_nat(2u);
x_4174 = lean_mk_empty_array_with_capacity(x_4173);
lean_inc(x_4170);
x_4175 = lean_array_push(x_4174, x_4170);
x_4176 = lean_array_push(x_4175, x_3914);
x_4177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4177, 0, x_4172);
lean_ctor_set(x_4177, 1, x_4176);
x_4178 = lean_mk_empty_array_with_capacity(x_3916);
lean_inc(x_4178);
x_4179 = lean_array_push(x_4178, x_4177);
lean_inc(x_4167);
x_4180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4180, 0, x_4167);
lean_ctor_set(x_4180, 1, x_4179);
x_4181 = lean_mk_string("with");
lean_inc(x_4153);
x_4182 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4182, 0, x_4153);
lean_ctor_set(x_4182, 1, x_4181);
x_4183 = lean_mk_string("matchAlts");
lean_inc(x_4162);
x_4184 = lean_name_mk_string(x_4162, x_4183);
x_4185 = lean_mk_string("matchAlt");
x_4186 = lean_name_mk_string(x_4162, x_4185);
x_4187 = lean_mk_string("|");
lean_inc(x_4153);
x_4188 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4188, 0, x_4153);
lean_ctor_set(x_4188, 1, x_4187);
lean_inc(x_14);
lean_inc(x_4178);
x_4189 = lean_array_push(x_4178, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4190 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4190 = lean_box(0);
}
lean_inc(x_4167);
if (lean_is_scalar(x_4190)) {
 x_4191 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4191 = x_4190;
}
lean_ctor_set(x_4191, 0, x_4167);
lean_ctor_set(x_4191, 1, x_4189);
x_4192 = lean_mk_string("=>");
x_4193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4193, 0, x_4153);
lean_ctor_set(x_4193, 1, x_4192);
x_4194 = lean_unsigned_to_nat(4u);
x_4195 = lean_mk_empty_array_with_capacity(x_4194);
x_4196 = lean_array_push(x_4195, x_4188);
x_4197 = lean_array_push(x_4196, x_4191);
x_4198 = lean_array_push(x_4197, x_4193);
x_4199 = lean_array_push(x_4198, x_4150);
x_4200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4200, 0, x_4186);
lean_ctor_set(x_4200, 1, x_4199);
lean_inc(x_4178);
x_4201 = lean_array_push(x_4178, x_4200);
x_4202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4202, 0, x_4167);
lean_ctor_set(x_4202, 1, x_4201);
x_4203 = lean_array_push(x_4178, x_4202);
x_4204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4204, 0, x_4184);
lean_ctor_set(x_4204, 1, x_4203);
x_4205 = lean_unsigned_to_nat(6u);
x_4206 = lean_mk_empty_array_with_capacity(x_4205);
x_4207 = lean_array_push(x_4206, x_4165);
lean_inc(x_4170);
x_4208 = lean_array_push(x_4207, x_4170);
x_4209 = lean_array_push(x_4208, x_4180);
x_4210 = lean_array_push(x_4209, x_4170);
x_4211 = lean_array_push(x_4210, x_4182);
x_4212 = lean_array_push(x_4211, x_4204);
x_4213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4213, 0, x_4164);
lean_ctor_set(x_4213, 1, x_4212);
x_4214 = 1;
x_4215 = lean_box(x_4214);
if (lean_is_scalar(x_4151)) {
 x_4216 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4216 = x_4151;
}
lean_ctor_set(x_4216, 0, x_4213);
lean_ctor_set(x_4216, 1, x_4215);
x_4217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4217, 0, x_4149);
lean_ctor_set(x_4217, 1, x_4216);
if (lean_is_scalar(x_4155)) {
 x_4218 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4218 = x_4155;
}
lean_ctor_set(x_4218, 0, x_4217);
lean_ctor_set(x_4218, 1, x_4154);
return x_4218;
}
}
}
case 2:
{
lean_object* x_4219; lean_object* x_4220; lean_object* x_4221; lean_object* x_4222; lean_object* x_4223; lean_object* x_4224; lean_object* x_4225; lean_object* x_4226; lean_object* x_4227; lean_object* x_4228; lean_object* x_4229; lean_object* x_4230; uint8_t x_4231; 
lean_inc(x_5);
x_4219 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_4220 = lean_ctor_get(x_4219, 0);
lean_inc(x_4220);
x_4221 = lean_ctor_get(x_4219, 1);
lean_inc(x_4221);
lean_dec(x_4219);
x_4222 = lean_unsigned_to_nat(1u);
x_4223 = lean_nat_add(x_3, x_4222);
lean_dec(x_3);
x_4224 = l_Lean_mkHole(x_14);
lean_inc(x_4220);
x_4225 = l_Lean_Elab_Term_mkExplicitBinder(x_4220, x_4224);
x_4226 = lean_array_push(x_4, x_4225);
lean_inc(x_5);
x_4227 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_4223, x_4226, x_5, x_4221);
x_4228 = lean_ctor_get(x_4227, 0);
lean_inc(x_4228);
x_4229 = lean_ctor_get(x_4228, 1);
lean_inc(x_4229);
x_4230 = lean_ctor_get(x_4227, 1);
lean_inc(x_4230);
lean_dec(x_4227);
x_4231 = !lean_is_exclusive(x_4228);
if (x_4231 == 0)
{
lean_object* x_4232; uint8_t x_4233; 
x_4232 = lean_ctor_get(x_4228, 1);
lean_dec(x_4232);
x_4233 = !lean_is_exclusive(x_4229);
if (x_4233 == 0)
{
lean_object* x_4234; lean_object* x_4235; lean_object* x_4236; uint8_t x_4237; 
x_4234 = lean_ctor_get(x_4229, 0);
x_4235 = lean_ctor_get(x_4229, 1);
lean_dec(x_4235);
x_4236 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_4230);
lean_dec(x_5);
x_4237 = !lean_is_exclusive(x_4236);
if (x_4237 == 0)
{
lean_object* x_4238; lean_object* x_4239; lean_object* x_4240; lean_object* x_4241; lean_object* x_4242; lean_object* x_4243; lean_object* x_4244; lean_object* x_4245; lean_object* x_4246; lean_object* x_4247; lean_object* x_4248; lean_object* x_4249; lean_object* x_4250; lean_object* x_4251; lean_object* x_4252; lean_object* x_4253; lean_object* x_4254; lean_object* x_4255; lean_object* x_4256; lean_object* x_4257; lean_object* x_4258; lean_object* x_4259; lean_object* x_4260; lean_object* x_4261; lean_object* x_4262; lean_object* x_4263; lean_object* x_4264; lean_object* x_4265; lean_object* x_4266; lean_object* x_4267; lean_object* x_4268; lean_object* x_4269; lean_object* x_4270; lean_object* x_4271; lean_object* x_4272; uint8_t x_4273; 
x_4238 = lean_ctor_get(x_4236, 0);
x_4239 = lean_box(0);
x_4240 = lean_mk_string("Lean");
x_4241 = lean_name_mk_string(x_4239, x_4240);
x_4242 = lean_mk_string("Parser");
x_4243 = lean_name_mk_string(x_4241, x_4242);
x_4244 = lean_mk_string("Term");
x_4245 = lean_name_mk_string(x_4243, x_4244);
x_4246 = lean_mk_string("match");
lean_inc(x_4246);
lean_inc(x_4245);
x_4247 = lean_name_mk_string(x_4245, x_4246);
lean_inc(x_4238);
x_4248 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4248, 0, x_4238);
lean_ctor_set(x_4248, 1, x_4246);
x_4249 = lean_mk_string("null");
x_4250 = lean_name_mk_string(x_4239, x_4249);
x_4251 = lean_unsigned_to_nat(0u);
x_4252 = lean_mk_empty_array_with_capacity(x_4251);
lean_inc(x_4250);
x_4253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4253, 0, x_4250);
lean_ctor_set(x_4253, 1, x_4252);
x_4254 = lean_mk_string("matchDiscr");
lean_inc(x_4245);
x_4255 = lean_name_mk_string(x_4245, x_4254);
x_4256 = lean_unsigned_to_nat(2u);
x_4257 = lean_mk_empty_array_with_capacity(x_4256);
lean_inc(x_4253);
x_4258 = lean_array_push(x_4257, x_4253);
x_4259 = lean_array_push(x_4258, x_4220);
x_4260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4260, 0, x_4255);
lean_ctor_set(x_4260, 1, x_4259);
x_4261 = lean_mk_empty_array_with_capacity(x_4222);
lean_inc(x_4261);
x_4262 = lean_array_push(x_4261, x_4260);
lean_inc(x_4250);
x_4263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4263, 0, x_4250);
lean_ctor_set(x_4263, 1, x_4262);
x_4264 = lean_mk_string("with");
lean_inc(x_4238);
x_4265 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4265, 0, x_4238);
lean_ctor_set(x_4265, 1, x_4264);
x_4266 = lean_mk_string("matchAlts");
lean_inc(x_4245);
x_4267 = lean_name_mk_string(x_4245, x_4266);
x_4268 = lean_mk_string("matchAlt");
x_4269 = lean_name_mk_string(x_4245, x_4268);
x_4270 = lean_mk_string("|");
lean_inc(x_4238);
x_4271 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4271, 0, x_4238);
lean_ctor_set(x_4271, 1, x_4270);
lean_inc(x_14);
lean_inc(x_4261);
x_4272 = lean_array_push(x_4261, x_14);
x_4273 = !lean_is_exclusive(x_14);
if (x_4273 == 0)
{
lean_object* x_4274; lean_object* x_4275; lean_object* x_4276; lean_object* x_4277; lean_object* x_4278; lean_object* x_4279; lean_object* x_4280; lean_object* x_4281; lean_object* x_4282; lean_object* x_4283; lean_object* x_4284; lean_object* x_4285; lean_object* x_4286; lean_object* x_4287; lean_object* x_4288; lean_object* x_4289; lean_object* x_4290; lean_object* x_4291; lean_object* x_4292; lean_object* x_4293; lean_object* x_4294; lean_object* x_4295; lean_object* x_4296; lean_object* x_4297; uint8_t x_4298; lean_object* x_4299; 
x_4274 = lean_ctor_get(x_14, 1);
lean_dec(x_4274);
x_4275 = lean_ctor_get(x_14, 0);
lean_dec(x_4275);
lean_inc(x_4250);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_4272);
lean_ctor_set(x_14, 0, x_4250);
x_4276 = lean_mk_string("=>");
x_4277 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4277, 0, x_4238);
lean_ctor_set(x_4277, 1, x_4276);
x_4278 = lean_unsigned_to_nat(4u);
x_4279 = lean_mk_empty_array_with_capacity(x_4278);
x_4280 = lean_array_push(x_4279, x_4271);
x_4281 = lean_array_push(x_4280, x_14);
x_4282 = lean_array_push(x_4281, x_4277);
x_4283 = lean_array_push(x_4282, x_4234);
x_4284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4284, 0, x_4269);
lean_ctor_set(x_4284, 1, x_4283);
lean_inc(x_4261);
x_4285 = lean_array_push(x_4261, x_4284);
x_4286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4286, 0, x_4250);
lean_ctor_set(x_4286, 1, x_4285);
x_4287 = lean_array_push(x_4261, x_4286);
x_4288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4288, 0, x_4267);
lean_ctor_set(x_4288, 1, x_4287);
x_4289 = lean_unsigned_to_nat(6u);
x_4290 = lean_mk_empty_array_with_capacity(x_4289);
x_4291 = lean_array_push(x_4290, x_4248);
lean_inc(x_4253);
x_4292 = lean_array_push(x_4291, x_4253);
x_4293 = lean_array_push(x_4292, x_4263);
x_4294 = lean_array_push(x_4293, x_4253);
x_4295 = lean_array_push(x_4294, x_4265);
x_4296 = lean_array_push(x_4295, x_4288);
x_4297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4297, 0, x_4247);
lean_ctor_set(x_4297, 1, x_4296);
x_4298 = 1;
x_4299 = lean_box(x_4298);
lean_ctor_set(x_4229, 1, x_4299);
lean_ctor_set(x_4229, 0, x_4297);
lean_ctor_set(x_4236, 0, x_4228);
return x_4236;
}
else
{
lean_object* x_4300; lean_object* x_4301; lean_object* x_4302; lean_object* x_4303; lean_object* x_4304; lean_object* x_4305; lean_object* x_4306; lean_object* x_4307; lean_object* x_4308; lean_object* x_4309; lean_object* x_4310; lean_object* x_4311; lean_object* x_4312; lean_object* x_4313; lean_object* x_4314; lean_object* x_4315; lean_object* x_4316; lean_object* x_4317; lean_object* x_4318; lean_object* x_4319; lean_object* x_4320; lean_object* x_4321; lean_object* x_4322; uint8_t x_4323; lean_object* x_4324; 
lean_dec(x_14);
lean_inc(x_4250);
x_4300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4300, 0, x_4250);
lean_ctor_set(x_4300, 1, x_4272);
x_4301 = lean_mk_string("=>");
x_4302 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4302, 0, x_4238);
lean_ctor_set(x_4302, 1, x_4301);
x_4303 = lean_unsigned_to_nat(4u);
x_4304 = lean_mk_empty_array_with_capacity(x_4303);
x_4305 = lean_array_push(x_4304, x_4271);
x_4306 = lean_array_push(x_4305, x_4300);
x_4307 = lean_array_push(x_4306, x_4302);
x_4308 = lean_array_push(x_4307, x_4234);
x_4309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4309, 0, x_4269);
lean_ctor_set(x_4309, 1, x_4308);
lean_inc(x_4261);
x_4310 = lean_array_push(x_4261, x_4309);
x_4311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4311, 0, x_4250);
lean_ctor_set(x_4311, 1, x_4310);
x_4312 = lean_array_push(x_4261, x_4311);
x_4313 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4313, 0, x_4267);
lean_ctor_set(x_4313, 1, x_4312);
x_4314 = lean_unsigned_to_nat(6u);
x_4315 = lean_mk_empty_array_with_capacity(x_4314);
x_4316 = lean_array_push(x_4315, x_4248);
lean_inc(x_4253);
x_4317 = lean_array_push(x_4316, x_4253);
x_4318 = lean_array_push(x_4317, x_4263);
x_4319 = lean_array_push(x_4318, x_4253);
x_4320 = lean_array_push(x_4319, x_4265);
x_4321 = lean_array_push(x_4320, x_4313);
x_4322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4322, 0, x_4247);
lean_ctor_set(x_4322, 1, x_4321);
x_4323 = 1;
x_4324 = lean_box(x_4323);
lean_ctor_set(x_4229, 1, x_4324);
lean_ctor_set(x_4229, 0, x_4322);
lean_ctor_set(x_4236, 0, x_4228);
return x_4236;
}
}
else
{
lean_object* x_4325; lean_object* x_4326; lean_object* x_4327; lean_object* x_4328; lean_object* x_4329; lean_object* x_4330; lean_object* x_4331; lean_object* x_4332; lean_object* x_4333; lean_object* x_4334; lean_object* x_4335; lean_object* x_4336; lean_object* x_4337; lean_object* x_4338; lean_object* x_4339; lean_object* x_4340; lean_object* x_4341; lean_object* x_4342; lean_object* x_4343; lean_object* x_4344; lean_object* x_4345; lean_object* x_4346; lean_object* x_4347; lean_object* x_4348; lean_object* x_4349; lean_object* x_4350; lean_object* x_4351; lean_object* x_4352; lean_object* x_4353; lean_object* x_4354; lean_object* x_4355; lean_object* x_4356; lean_object* x_4357; lean_object* x_4358; lean_object* x_4359; lean_object* x_4360; lean_object* x_4361; lean_object* x_4362; lean_object* x_4363; lean_object* x_4364; lean_object* x_4365; lean_object* x_4366; lean_object* x_4367; lean_object* x_4368; lean_object* x_4369; lean_object* x_4370; lean_object* x_4371; lean_object* x_4372; lean_object* x_4373; lean_object* x_4374; lean_object* x_4375; lean_object* x_4376; lean_object* x_4377; lean_object* x_4378; lean_object* x_4379; lean_object* x_4380; lean_object* x_4381; lean_object* x_4382; lean_object* x_4383; lean_object* x_4384; uint8_t x_4385; lean_object* x_4386; lean_object* x_4387; 
x_4325 = lean_ctor_get(x_4236, 0);
x_4326 = lean_ctor_get(x_4236, 1);
lean_inc(x_4326);
lean_inc(x_4325);
lean_dec(x_4236);
x_4327 = lean_box(0);
x_4328 = lean_mk_string("Lean");
x_4329 = lean_name_mk_string(x_4327, x_4328);
x_4330 = lean_mk_string("Parser");
x_4331 = lean_name_mk_string(x_4329, x_4330);
x_4332 = lean_mk_string("Term");
x_4333 = lean_name_mk_string(x_4331, x_4332);
x_4334 = lean_mk_string("match");
lean_inc(x_4334);
lean_inc(x_4333);
x_4335 = lean_name_mk_string(x_4333, x_4334);
lean_inc(x_4325);
x_4336 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4336, 0, x_4325);
lean_ctor_set(x_4336, 1, x_4334);
x_4337 = lean_mk_string("null");
x_4338 = lean_name_mk_string(x_4327, x_4337);
x_4339 = lean_unsigned_to_nat(0u);
x_4340 = lean_mk_empty_array_with_capacity(x_4339);
lean_inc(x_4338);
x_4341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4341, 0, x_4338);
lean_ctor_set(x_4341, 1, x_4340);
x_4342 = lean_mk_string("matchDiscr");
lean_inc(x_4333);
x_4343 = lean_name_mk_string(x_4333, x_4342);
x_4344 = lean_unsigned_to_nat(2u);
x_4345 = lean_mk_empty_array_with_capacity(x_4344);
lean_inc(x_4341);
x_4346 = lean_array_push(x_4345, x_4341);
x_4347 = lean_array_push(x_4346, x_4220);
x_4348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4348, 0, x_4343);
lean_ctor_set(x_4348, 1, x_4347);
x_4349 = lean_mk_empty_array_with_capacity(x_4222);
lean_inc(x_4349);
x_4350 = lean_array_push(x_4349, x_4348);
lean_inc(x_4338);
x_4351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4351, 0, x_4338);
lean_ctor_set(x_4351, 1, x_4350);
x_4352 = lean_mk_string("with");
lean_inc(x_4325);
x_4353 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4353, 0, x_4325);
lean_ctor_set(x_4353, 1, x_4352);
x_4354 = lean_mk_string("matchAlts");
lean_inc(x_4333);
x_4355 = lean_name_mk_string(x_4333, x_4354);
x_4356 = lean_mk_string("matchAlt");
x_4357 = lean_name_mk_string(x_4333, x_4356);
x_4358 = lean_mk_string("|");
lean_inc(x_4325);
x_4359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4359, 0, x_4325);
lean_ctor_set(x_4359, 1, x_4358);
lean_inc(x_14);
lean_inc(x_4349);
x_4360 = lean_array_push(x_4349, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4361 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4361 = lean_box(0);
}
lean_inc(x_4338);
if (lean_is_scalar(x_4361)) {
 x_4362 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4362 = x_4361;
 lean_ctor_set_tag(x_4362, 1);
}
lean_ctor_set(x_4362, 0, x_4338);
lean_ctor_set(x_4362, 1, x_4360);
x_4363 = lean_mk_string("=>");
x_4364 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4364, 0, x_4325);
lean_ctor_set(x_4364, 1, x_4363);
x_4365 = lean_unsigned_to_nat(4u);
x_4366 = lean_mk_empty_array_with_capacity(x_4365);
x_4367 = lean_array_push(x_4366, x_4359);
x_4368 = lean_array_push(x_4367, x_4362);
x_4369 = lean_array_push(x_4368, x_4364);
x_4370 = lean_array_push(x_4369, x_4234);
x_4371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4371, 0, x_4357);
lean_ctor_set(x_4371, 1, x_4370);
lean_inc(x_4349);
x_4372 = lean_array_push(x_4349, x_4371);
x_4373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4373, 0, x_4338);
lean_ctor_set(x_4373, 1, x_4372);
x_4374 = lean_array_push(x_4349, x_4373);
x_4375 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4375, 0, x_4355);
lean_ctor_set(x_4375, 1, x_4374);
x_4376 = lean_unsigned_to_nat(6u);
x_4377 = lean_mk_empty_array_with_capacity(x_4376);
x_4378 = lean_array_push(x_4377, x_4336);
lean_inc(x_4341);
x_4379 = lean_array_push(x_4378, x_4341);
x_4380 = lean_array_push(x_4379, x_4351);
x_4381 = lean_array_push(x_4380, x_4341);
x_4382 = lean_array_push(x_4381, x_4353);
x_4383 = lean_array_push(x_4382, x_4375);
x_4384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4384, 0, x_4335);
lean_ctor_set(x_4384, 1, x_4383);
x_4385 = 1;
x_4386 = lean_box(x_4385);
lean_ctor_set(x_4229, 1, x_4386);
lean_ctor_set(x_4229, 0, x_4384);
x_4387 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4387, 0, x_4228);
lean_ctor_set(x_4387, 1, x_4326);
return x_4387;
}
}
else
{
lean_object* x_4388; lean_object* x_4389; lean_object* x_4390; lean_object* x_4391; lean_object* x_4392; lean_object* x_4393; lean_object* x_4394; lean_object* x_4395; lean_object* x_4396; lean_object* x_4397; lean_object* x_4398; lean_object* x_4399; lean_object* x_4400; lean_object* x_4401; lean_object* x_4402; lean_object* x_4403; lean_object* x_4404; lean_object* x_4405; lean_object* x_4406; lean_object* x_4407; lean_object* x_4408; lean_object* x_4409; lean_object* x_4410; lean_object* x_4411; lean_object* x_4412; lean_object* x_4413; lean_object* x_4414; lean_object* x_4415; lean_object* x_4416; lean_object* x_4417; lean_object* x_4418; lean_object* x_4419; lean_object* x_4420; lean_object* x_4421; lean_object* x_4422; lean_object* x_4423; lean_object* x_4424; lean_object* x_4425; lean_object* x_4426; lean_object* x_4427; lean_object* x_4428; lean_object* x_4429; lean_object* x_4430; lean_object* x_4431; lean_object* x_4432; lean_object* x_4433; lean_object* x_4434; lean_object* x_4435; lean_object* x_4436; lean_object* x_4437; lean_object* x_4438; lean_object* x_4439; lean_object* x_4440; lean_object* x_4441; lean_object* x_4442; lean_object* x_4443; lean_object* x_4444; lean_object* x_4445; lean_object* x_4446; lean_object* x_4447; lean_object* x_4448; lean_object* x_4449; lean_object* x_4450; uint8_t x_4451; lean_object* x_4452; lean_object* x_4453; lean_object* x_4454; 
x_4388 = lean_ctor_get(x_4229, 0);
lean_inc(x_4388);
lean_dec(x_4229);
x_4389 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_4230);
lean_dec(x_5);
x_4390 = lean_ctor_get(x_4389, 0);
lean_inc(x_4390);
x_4391 = lean_ctor_get(x_4389, 1);
lean_inc(x_4391);
if (lean_is_exclusive(x_4389)) {
 lean_ctor_release(x_4389, 0);
 lean_ctor_release(x_4389, 1);
 x_4392 = x_4389;
} else {
 lean_dec_ref(x_4389);
 x_4392 = lean_box(0);
}
x_4393 = lean_box(0);
x_4394 = lean_mk_string("Lean");
x_4395 = lean_name_mk_string(x_4393, x_4394);
x_4396 = lean_mk_string("Parser");
x_4397 = lean_name_mk_string(x_4395, x_4396);
x_4398 = lean_mk_string("Term");
x_4399 = lean_name_mk_string(x_4397, x_4398);
x_4400 = lean_mk_string("match");
lean_inc(x_4400);
lean_inc(x_4399);
x_4401 = lean_name_mk_string(x_4399, x_4400);
lean_inc(x_4390);
x_4402 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4402, 0, x_4390);
lean_ctor_set(x_4402, 1, x_4400);
x_4403 = lean_mk_string("null");
x_4404 = lean_name_mk_string(x_4393, x_4403);
x_4405 = lean_unsigned_to_nat(0u);
x_4406 = lean_mk_empty_array_with_capacity(x_4405);
lean_inc(x_4404);
x_4407 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4407, 0, x_4404);
lean_ctor_set(x_4407, 1, x_4406);
x_4408 = lean_mk_string("matchDiscr");
lean_inc(x_4399);
x_4409 = lean_name_mk_string(x_4399, x_4408);
x_4410 = lean_unsigned_to_nat(2u);
x_4411 = lean_mk_empty_array_with_capacity(x_4410);
lean_inc(x_4407);
x_4412 = lean_array_push(x_4411, x_4407);
x_4413 = lean_array_push(x_4412, x_4220);
x_4414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4414, 0, x_4409);
lean_ctor_set(x_4414, 1, x_4413);
x_4415 = lean_mk_empty_array_with_capacity(x_4222);
lean_inc(x_4415);
x_4416 = lean_array_push(x_4415, x_4414);
lean_inc(x_4404);
x_4417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4417, 0, x_4404);
lean_ctor_set(x_4417, 1, x_4416);
x_4418 = lean_mk_string("with");
lean_inc(x_4390);
x_4419 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4419, 0, x_4390);
lean_ctor_set(x_4419, 1, x_4418);
x_4420 = lean_mk_string("matchAlts");
lean_inc(x_4399);
x_4421 = lean_name_mk_string(x_4399, x_4420);
x_4422 = lean_mk_string("matchAlt");
x_4423 = lean_name_mk_string(x_4399, x_4422);
x_4424 = lean_mk_string("|");
lean_inc(x_4390);
x_4425 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4425, 0, x_4390);
lean_ctor_set(x_4425, 1, x_4424);
lean_inc(x_14);
lean_inc(x_4415);
x_4426 = lean_array_push(x_4415, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4427 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4427 = lean_box(0);
}
lean_inc(x_4404);
if (lean_is_scalar(x_4427)) {
 x_4428 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4428 = x_4427;
 lean_ctor_set_tag(x_4428, 1);
}
lean_ctor_set(x_4428, 0, x_4404);
lean_ctor_set(x_4428, 1, x_4426);
x_4429 = lean_mk_string("=>");
x_4430 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4430, 0, x_4390);
lean_ctor_set(x_4430, 1, x_4429);
x_4431 = lean_unsigned_to_nat(4u);
x_4432 = lean_mk_empty_array_with_capacity(x_4431);
x_4433 = lean_array_push(x_4432, x_4425);
x_4434 = lean_array_push(x_4433, x_4428);
x_4435 = lean_array_push(x_4434, x_4430);
x_4436 = lean_array_push(x_4435, x_4388);
x_4437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4437, 0, x_4423);
lean_ctor_set(x_4437, 1, x_4436);
lean_inc(x_4415);
x_4438 = lean_array_push(x_4415, x_4437);
x_4439 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4439, 0, x_4404);
lean_ctor_set(x_4439, 1, x_4438);
x_4440 = lean_array_push(x_4415, x_4439);
x_4441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4441, 0, x_4421);
lean_ctor_set(x_4441, 1, x_4440);
x_4442 = lean_unsigned_to_nat(6u);
x_4443 = lean_mk_empty_array_with_capacity(x_4442);
x_4444 = lean_array_push(x_4443, x_4402);
lean_inc(x_4407);
x_4445 = lean_array_push(x_4444, x_4407);
x_4446 = lean_array_push(x_4445, x_4417);
x_4447 = lean_array_push(x_4446, x_4407);
x_4448 = lean_array_push(x_4447, x_4419);
x_4449 = lean_array_push(x_4448, x_4441);
x_4450 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4450, 0, x_4401);
lean_ctor_set(x_4450, 1, x_4449);
x_4451 = 1;
x_4452 = lean_box(x_4451);
x_4453 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4453, 0, x_4450);
lean_ctor_set(x_4453, 1, x_4452);
lean_ctor_set(x_4228, 1, x_4453);
if (lean_is_scalar(x_4392)) {
 x_4454 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4454 = x_4392;
}
lean_ctor_set(x_4454, 0, x_4228);
lean_ctor_set(x_4454, 1, x_4391);
return x_4454;
}
}
else
{
lean_object* x_4455; lean_object* x_4456; lean_object* x_4457; lean_object* x_4458; lean_object* x_4459; lean_object* x_4460; lean_object* x_4461; lean_object* x_4462; lean_object* x_4463; lean_object* x_4464; lean_object* x_4465; lean_object* x_4466; lean_object* x_4467; lean_object* x_4468; lean_object* x_4469; lean_object* x_4470; lean_object* x_4471; lean_object* x_4472; lean_object* x_4473; lean_object* x_4474; lean_object* x_4475; lean_object* x_4476; lean_object* x_4477; lean_object* x_4478; lean_object* x_4479; lean_object* x_4480; lean_object* x_4481; lean_object* x_4482; lean_object* x_4483; lean_object* x_4484; lean_object* x_4485; lean_object* x_4486; lean_object* x_4487; lean_object* x_4488; lean_object* x_4489; lean_object* x_4490; lean_object* x_4491; lean_object* x_4492; lean_object* x_4493; lean_object* x_4494; lean_object* x_4495; lean_object* x_4496; lean_object* x_4497; lean_object* x_4498; lean_object* x_4499; lean_object* x_4500; lean_object* x_4501; lean_object* x_4502; lean_object* x_4503; lean_object* x_4504; lean_object* x_4505; lean_object* x_4506; lean_object* x_4507; lean_object* x_4508; lean_object* x_4509; lean_object* x_4510; lean_object* x_4511; lean_object* x_4512; lean_object* x_4513; lean_object* x_4514; lean_object* x_4515; lean_object* x_4516; lean_object* x_4517; lean_object* x_4518; lean_object* x_4519; uint8_t x_4520; lean_object* x_4521; lean_object* x_4522; lean_object* x_4523; lean_object* x_4524; 
x_4455 = lean_ctor_get(x_4228, 0);
lean_inc(x_4455);
lean_dec(x_4228);
x_4456 = lean_ctor_get(x_4229, 0);
lean_inc(x_4456);
if (lean_is_exclusive(x_4229)) {
 lean_ctor_release(x_4229, 0);
 lean_ctor_release(x_4229, 1);
 x_4457 = x_4229;
} else {
 lean_dec_ref(x_4229);
 x_4457 = lean_box(0);
}
x_4458 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_4230);
lean_dec(x_5);
x_4459 = lean_ctor_get(x_4458, 0);
lean_inc(x_4459);
x_4460 = lean_ctor_get(x_4458, 1);
lean_inc(x_4460);
if (lean_is_exclusive(x_4458)) {
 lean_ctor_release(x_4458, 0);
 lean_ctor_release(x_4458, 1);
 x_4461 = x_4458;
} else {
 lean_dec_ref(x_4458);
 x_4461 = lean_box(0);
}
x_4462 = lean_box(0);
x_4463 = lean_mk_string("Lean");
x_4464 = lean_name_mk_string(x_4462, x_4463);
x_4465 = lean_mk_string("Parser");
x_4466 = lean_name_mk_string(x_4464, x_4465);
x_4467 = lean_mk_string("Term");
x_4468 = lean_name_mk_string(x_4466, x_4467);
x_4469 = lean_mk_string("match");
lean_inc(x_4469);
lean_inc(x_4468);
x_4470 = lean_name_mk_string(x_4468, x_4469);
lean_inc(x_4459);
x_4471 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4471, 0, x_4459);
lean_ctor_set(x_4471, 1, x_4469);
x_4472 = lean_mk_string("null");
x_4473 = lean_name_mk_string(x_4462, x_4472);
x_4474 = lean_unsigned_to_nat(0u);
x_4475 = lean_mk_empty_array_with_capacity(x_4474);
lean_inc(x_4473);
x_4476 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4476, 0, x_4473);
lean_ctor_set(x_4476, 1, x_4475);
x_4477 = lean_mk_string("matchDiscr");
lean_inc(x_4468);
x_4478 = lean_name_mk_string(x_4468, x_4477);
x_4479 = lean_unsigned_to_nat(2u);
x_4480 = lean_mk_empty_array_with_capacity(x_4479);
lean_inc(x_4476);
x_4481 = lean_array_push(x_4480, x_4476);
x_4482 = lean_array_push(x_4481, x_4220);
x_4483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4483, 0, x_4478);
lean_ctor_set(x_4483, 1, x_4482);
x_4484 = lean_mk_empty_array_with_capacity(x_4222);
lean_inc(x_4484);
x_4485 = lean_array_push(x_4484, x_4483);
lean_inc(x_4473);
x_4486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4486, 0, x_4473);
lean_ctor_set(x_4486, 1, x_4485);
x_4487 = lean_mk_string("with");
lean_inc(x_4459);
x_4488 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4488, 0, x_4459);
lean_ctor_set(x_4488, 1, x_4487);
x_4489 = lean_mk_string("matchAlts");
lean_inc(x_4468);
x_4490 = lean_name_mk_string(x_4468, x_4489);
x_4491 = lean_mk_string("matchAlt");
x_4492 = lean_name_mk_string(x_4468, x_4491);
x_4493 = lean_mk_string("|");
lean_inc(x_4459);
x_4494 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4494, 0, x_4459);
lean_ctor_set(x_4494, 1, x_4493);
lean_inc(x_14);
lean_inc(x_4484);
x_4495 = lean_array_push(x_4484, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_4496 = x_14;
} else {
 lean_dec_ref(x_14);
 x_4496 = lean_box(0);
}
lean_inc(x_4473);
if (lean_is_scalar(x_4496)) {
 x_4497 = lean_alloc_ctor(1, 2, 0);
} else {
 x_4497 = x_4496;
 lean_ctor_set_tag(x_4497, 1);
}
lean_ctor_set(x_4497, 0, x_4473);
lean_ctor_set(x_4497, 1, x_4495);
x_4498 = lean_mk_string("=>");
x_4499 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4499, 0, x_4459);
lean_ctor_set(x_4499, 1, x_4498);
x_4500 = lean_unsigned_to_nat(4u);
x_4501 = lean_mk_empty_array_with_capacity(x_4500);
x_4502 = lean_array_push(x_4501, x_4494);
x_4503 = lean_array_push(x_4502, x_4497);
x_4504 = lean_array_push(x_4503, x_4499);
x_4505 = lean_array_push(x_4504, x_4456);
x_4506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4506, 0, x_4492);
lean_ctor_set(x_4506, 1, x_4505);
lean_inc(x_4484);
x_4507 = lean_array_push(x_4484, x_4506);
x_4508 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4508, 0, x_4473);
lean_ctor_set(x_4508, 1, x_4507);
x_4509 = lean_array_push(x_4484, x_4508);
x_4510 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4510, 0, x_4490);
lean_ctor_set(x_4510, 1, x_4509);
x_4511 = lean_unsigned_to_nat(6u);
x_4512 = lean_mk_empty_array_with_capacity(x_4511);
x_4513 = lean_array_push(x_4512, x_4471);
lean_inc(x_4476);
x_4514 = lean_array_push(x_4513, x_4476);
x_4515 = lean_array_push(x_4514, x_4486);
x_4516 = lean_array_push(x_4515, x_4476);
x_4517 = lean_array_push(x_4516, x_4488);
x_4518 = lean_array_push(x_4517, x_4510);
x_4519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4519, 0, x_4470);
lean_ctor_set(x_4519, 1, x_4518);
x_4520 = 1;
x_4521 = lean_box(x_4520);
if (lean_is_scalar(x_4457)) {
 x_4522 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4522 = x_4457;
}
lean_ctor_set(x_4522, 0, x_4519);
lean_ctor_set(x_4522, 1, x_4521);
x_4523 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4523, 0, x_4455);
lean_ctor_set(x_4523, 1, x_4522);
if (lean_is_scalar(x_4461)) {
 x_4524 = lean_alloc_ctor(0, 2, 0);
} else {
 x_4524 = x_4461;
}
lean_ctor_set(x_4524, 0, x_4523);
lean_ctor_set(x_4524, 1, x_4460);
return x_4524;
}
}
default: 
{
lean_object* x_4525; lean_object* x_4526; lean_object* x_4527; lean_object* x_4528; lean_object* x_4529; 
x_4525 = l_Lean_mkHole(x_14);
x_4526 = lean_unsigned_to_nat(1u);
x_4527 = lean_nat_add(x_3, x_4526);
lean_dec(x_3);
x_4528 = l_Lean_Elab_Term_mkExplicitBinder(x_14, x_4525);
x_4529 = lean_array_push(x_4, x_4528);
x_3 = x_4527;
x_4 = x_4529;
goto _start;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
x_7 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_5, x_6, x_3, x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandFunBinders(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_FunBinders_State_fvars___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_3, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
x_17 = lean_ctor_get(x_3, 3);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_Lean_Meta_whnfForall(x_19, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 7)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 2);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_Meta_isExprDefEq(x_2, x_23, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
x_28 = lean_expr_instantiate1(x_24, x_1);
lean_dec(x_24);
lean_ctor_set(x_11, 0, x_28);
lean_ctor_set(x_25, 0, x_3);
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_expr_instantiate1(x_24, x_1);
lean_dec(x_24);
lean_ctor_set(x_11, 0, x_30);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_3);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_24);
lean_free_object(x_11);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
return x_25;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_25, 0);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_25);
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
lean_dec(x_21);
lean_free_object(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_20);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_20, 0);
lean_dec(x_37);
x_38 = lean_box(0);
lean_ctor_set(x_3, 3, x_38);
lean_ctor_set(x_20, 0, x_3);
return x_20;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_20, 1);
lean_inc(x_39);
lean_dec(x_20);
x_40 = lean_box(0);
lean_ctor_set(x_3, 3, x_40);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_3);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_free_object(x_11);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_20);
if (x_42 == 0)
{
return x_20;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_20, 0);
x_44 = lean_ctor_get(x_20, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_20);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_11, 0);
lean_inc(x_46);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_47 = l_Lean_Meta_whnfForall(x_46, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 7)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
x_51 = lean_ctor_get(x_48, 2);
lean_inc(x_51);
lean_dec(x_48);
x_52 = l_Lean_Meta_isExprDefEq(x_2, x_50, x_6, x_7, x_8, x_9, x_49);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
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
x_55 = lean_expr_instantiate1(x_51, x_1);
lean_dec(x_51);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_3, 3, x_56);
if (lean_is_scalar(x_54)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_54;
}
lean_ctor_set(x_57, 0, x_3);
lean_ctor_set(x_57, 1, x_53);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_51);
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_48);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_62 = lean_ctor_get(x_47, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_63 = x_47;
} else {
 lean_dec_ref(x_47);
 x_63 = lean_box(0);
}
x_64 = lean_box(0);
lean_ctor_set(x_3, 3, x_64);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_3);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_66 = lean_ctor_get(x_47, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_47, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_68 = x_47;
} else {
 lean_dec_ref(x_47);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_70 = lean_ctor_get(x_3, 0);
x_71 = lean_ctor_get(x_3, 1);
x_72 = lean_ctor_get(x_3, 2);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_3);
x_73 = lean_ctor_get(x_11, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_74 = x_11;
} else {
 lean_dec_ref(x_11);
 x_74 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_75 = l_Lean_Meta_whnfForall(x_73, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
if (lean_obj_tag(x_76) == 7)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 2);
lean_inc(x_79);
lean_dec(x_76);
x_80 = l_Lean_Meta_isExprDefEq(x_2, x_78, x_6, x_7, x_8, x_9, x_77);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
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
x_83 = lean_expr_instantiate1(x_79, x_1);
lean_dec(x_79);
if (lean_is_scalar(x_74)) {
 x_84 = lean_alloc_ctor(1, 1, 0);
} else {
 x_84 = x_74;
}
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_85, 0, x_70);
lean_ctor_set(x_85, 1, x_71);
lean_ctor_set(x_85, 2, x_72);
lean_ctor_set(x_85, 3, x_84);
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
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_79);
lean_dec(x_74);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
x_87 = lean_ctor_get(x_80, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_80, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_89 = x_80;
} else {
 lean_dec_ref(x_80);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_76);
lean_dec(x_74);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_91 = lean_ctor_get(x_75, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_92 = x_75;
} else {
 lean_dec_ref(x_75);
 x_92 = lean_box(0);
}
x_93 = lean_box(0);
x_94 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_94, 0, x_70);
lean_ctor_set(x_94, 1, x_71);
lean_ctor_set(x_94, 2, x_72);
lean_ctor_set(x_94, 3, x_93);
if (lean_is_scalar(x_92)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_92;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_91);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_74);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_96 = lean_ctor_get(x_75, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_75, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_98 = x_75;
} else {
 lean_dec_ref(x_75);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
x_10 = lean_name_mk_numeral(x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_12);
x_13 = lean_st_ref_take(x_1, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 2);
lean_dec(x_17);
lean_ctor_set(x_14, 2, x_5);
x_18 = lean_st_ref_set(x_1, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = lean_ctor_get(x_14, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_5);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_st_ref_set(x_1, x_26, x_15);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_31 = lean_ctor_get(x_5, 0);
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_5);
lean_inc(x_32);
lean_inc(x_31);
x_33 = lean_name_mk_numeral(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_32, x_34);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_st_ref_take(x_1, x_6);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 3);
lean_inc(x_42);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_43 = x_38;
} else {
 lean_dec_ref(x_38);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 4, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_36);
lean_ctor_set(x_44, 3, x_42);
x_45 = lean_st_ref_set(x_1, x_44, x_39);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_33);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(x_8, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg(x_14, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_19);
x_21 = l_Lean_mkFVar(x_19);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_inc(x_21);
x_23 = lean_array_push(x_22, x_21);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
lean_dec(x_2);
lean_inc(x_3);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_3);
lean_ctor_set(x_25, 2, x_4);
lean_ctor_set(x_25, 3, x_24);
x_26 = lean_ctor_get(x_5, 0);
lean_inc(x_26);
x_27 = l_Lean_Syntax_getId(x_26);
x_28 = lean_ctor_get_uint8(x_5, sizeof(void*)*2);
lean_dec(x_5);
lean_inc(x_8);
x_29 = lean_local_ctx_mk_local_decl(x_3, x_19, x_27, x_8, x_28);
lean_inc(x_21);
lean_inc(x_26);
lean_inc(x_29);
x_30 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore(x_29, x_26, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_20);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_13, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_13, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_13, 3);
lean_inc(x_35);
x_36 = lean_ctor_get(x_13, 4);
lean_inc(x_36);
x_37 = lean_ctor_get(x_13, 5);
lean_inc(x_37);
x_38 = lean_ctor_get(x_13, 6);
lean_inc(x_38);
x_39 = lean_ctor_get(x_13, 7);
lean_inc(x_39);
x_40 = l_Lean_replaceRef(x_26, x_35);
lean_dec(x_35);
lean_dec(x_26);
x_41 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_41, 0, x_32);
lean_ctor_set(x_41, 1, x_33);
lean_ctor_set(x_41, 2, x_34);
lean_ctor_set(x_41, 3, x_40);
lean_ctor_set(x_41, 4, x_36);
lean_ctor_set(x_41, 5, x_37);
lean_ctor_set(x_41, 6, x_38);
lean_ctor_set(x_41, 7, x_39);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_8);
x_42 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(x_21, x_8, x_25, x_9, x_10, x_11, x_12, x_41, x_14, x_31);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_43, 0);
x_47 = lean_ctor_get(x_43, 2);
x_48 = lean_ctor_get(x_43, 3);
x_49 = lean_ctor_get(x_43, 1);
lean_dec(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_29);
lean_inc(x_46);
lean_ctor_set(x_43, 1, x_29);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_50 = l_Lean_Meta_isClass_x3f(x_8, x_11, x_12, x_13, x_14, x_44);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_29);
lean_dec(x_21);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_unsigned_to_nat(1u);
x_54 = lean_nat_add(x_6, x_53);
x_55 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_54, x_43, x_9, x_10, x_11, x_12, x_13, x_14, x_52);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_43);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_ctor_get(x_51, 0);
lean_inc(x_57);
lean_dec(x_51);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_21);
x_59 = lean_array_push(x_47, x_58);
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_add(x_6, x_60);
x_62 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_62, 0, x_46);
lean_ctor_set(x_62, 1, x_29);
lean_ctor_set(x_62, 2, x_59);
lean_ctor_set(x_62, 3, x_48);
x_63 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_12, x_13, x_14, x_56);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_66 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_61, x_62, x_9, x_10, x_11, x_12, x_13, x_14, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_Meta_restoreSynthInstanceCache(x_64, x_11, x_12, x_13, x_14, x_68);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_69, 0);
lean_dec(x_71);
lean_ctor_set(x_69, 0, x_67);
return x_69;
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
lean_dec(x_69);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_67);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_74 = lean_ctor_get(x_66, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_66, 1);
lean_inc(x_75);
lean_dec(x_66);
x_76 = l_Lean_Meta_restoreSynthInstanceCache(x_64, x_11, x_12, x_13, x_14, x_75);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_76, 0);
lean_dec(x_78);
lean_ctor_set_tag(x_76, 1);
lean_ctor_set(x_76, 0, x_74);
return x_76;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_74);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_43);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_81 = !lean_is_exclusive(x_50);
if (x_81 == 0)
{
return x_50;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_50, 0);
x_83 = lean_ctor_get(x_50, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_50);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_ctor_get(x_43, 0);
x_86 = lean_ctor_get(x_43, 2);
x_87 = lean_ctor_get(x_43, 3);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_43);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_29);
lean_inc(x_85);
x_88 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_29);
lean_ctor_set(x_88, 2, x_86);
lean_ctor_set(x_88, 3, x_87);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_89 = l_Lean_Meta_isClass_x3f(x_8, x_11, x_12, x_13, x_14, x_44);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_29);
lean_dec(x_21);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_unsigned_to_nat(1u);
x_93 = lean_nat_add(x_6, x_92);
x_94 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_93, x_88, x_9, x_10, x_11, x_12, x_13, x_14, x_91);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_88);
x_95 = lean_ctor_get(x_89, 1);
lean_inc(x_95);
lean_dec(x_89);
x_96 = lean_ctor_get(x_90, 0);
lean_inc(x_96);
lean_dec(x_90);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_21);
x_98 = lean_array_push(x_86, x_97);
x_99 = lean_unsigned_to_nat(1u);
x_100 = lean_nat_add(x_6, x_99);
x_101 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_101, 0, x_85);
lean_ctor_set(x_101, 1, x_29);
lean_ctor_set(x_101, 2, x_98);
lean_ctor_set(x_101, 3, x_87);
x_102 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_12, x_13, x_14, x_95);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_105 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_100, x_101, x_9, x_10, x_11, x_12, x_13, x_14, x_104);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = l_Lean_Meta_restoreSynthInstanceCache(x_103, x_11, x_12, x_13, x_14, x_107);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_110 = x_108;
} else {
 lean_dec_ref(x_108);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_106);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_112 = lean_ctor_get(x_105, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_105, 1);
lean_inc(x_113);
lean_dec(x_105);
x_114 = l_Lean_Meta_restoreSynthInstanceCache(x_103, x_11, x_12, x_13, x_14, x_113);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
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
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
 lean_ctor_set_tag(x_117, 1);
}
lean_ctor_set(x_117, 0, x_112);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_118 = lean_ctor_get(x_89, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_89, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_120 = x_89;
} else {
 lean_dec_ref(x_89);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_122 = !lean_is_exclusive(x_42);
if (x_122 == 0)
{
return x_42;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_42, 0);
x_124 = lean_ctor_get(x_42, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_42);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_1, x_2);
lean_inc(x_8);
lean_inc(x_4);
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
lean_inc(x_17);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabType), 8, 1);
lean_closure_set(x_20, 0, x_17);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1___boxed), 15, 7);
lean_closure_set(x_21, 0, x_17);
lean_closure_set(x_21, 1, x_3);
lean_closure_set(x_21, 2, x_18);
lean_closure_set(x_21, 3, x_19);
lean_closure_set(x_21, 4, x_14);
lean_closure_set(x_21, 5, x_2);
lean_closure_set(x_21, 6, x_1);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = !lean_is_exclusive(x_8);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_8, 3);
x_25 = l_Lean_replaceRef(x_17, x_24);
lean_dec(x_24);
lean_dec(x_17);
lean_ctor_set(x_8, 3, x_25);
x_26 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_18, x_19, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_ctor_get(x_8, 0);
x_28 = lean_ctor_get(x_8, 1);
x_29 = lean_ctor_get(x_8, 2);
x_30 = lean_ctor_get(x_8, 3);
x_31 = lean_ctor_get(x_8, 4);
x_32 = lean_ctor_get(x_8, 5);
x_33 = lean_ctor_get(x_8, 6);
x_34 = lean_ctor_get(x_8, 7);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_8);
x_35 = l_Lean_replaceRef(x_17, x_30);
lean_dec(x_30);
lean_dec(x_17);
x_36 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_36, 0, x_27);
lean_ctor_set(x_36, 1, x_28);
lean_ctor_set(x_36, 2, x_29);
lean_ctor_set(x_36, 3, x_35);
lean_ctor_set(x_36, 4, x_31);
lean_ctor_set(x_36, 5, x_32);
lean_ctor_set(x_36, 6, x_33);
lean_ctor_set(x_36, 7, x_34);
x_37 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_18, x_19, x_22, x_4, x_5, x_6, x_7, x_36, x_9, x_16);
return x_37;
}
}
else
{
uint8_t x_38; 
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
x_38 = !lean_is_exclusive(x_15);
if (x_38 == 0)
{
return x_15;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_15, 0);
x_40 = lean_ctor_get(x_15, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_15);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
return x_16;
}
}
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_1, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_16, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_2, x_22);
lean_dec(x_2);
x_2 = x_23;
x_3 = x_20;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
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
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_15);
if (x_29 == 0)
{
return x_15;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Array_isEmpty___rarg(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
x_13 = l_Lean_Meta_getLocalInstances(x_6, x_7, x_8, x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_14);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux(x_1, x_16, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_get_size(x_14);
lean_dec(x_14);
x_23 = lean_ctor_get(x_20, 2);
lean_inc(x_23);
x_24 = lean_array_get_size(x_23);
x_25 = lean_nat_dec_lt(x_22, x_24);
lean_dec(x_24);
lean_dec(x_22);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_20, 3);
lean_inc(x_28);
lean_dec(x_20);
x_29 = lean_apply_2(x_3, x_27, x_28);
if (x_25 == 0)
{
lean_object* x_30; 
x_30 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_26, x_23, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_7, x_8, x_9, x_21);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_34 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_26, x_23, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Meta_restoreSynthInstanceCache(x_32, x_6, x_7, x_8, x_9, x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
lean_ctor_set(x_37, 0, x_35);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_34, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_34, 1);
lean_inc(x_43);
lean_dec(x_34);
x_44 = l_Lean_Meta_restoreSynthInstanceCache(x_32, x_6, x_7, x_8, x_9, x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 0, x_42);
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_19);
if (x_49 == 0)
{
return x_19;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_19, 0);
x_51 = lean_ctor_get(x_19, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_19);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_unsigned_to_nat(0u);
x_54 = lean_mk_empty_array_with_capacity(x_53);
x_55 = lean_apply_9(x_3, x_54, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_55;
}
}
}
lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFunBinders___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabFunBinders___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArg(x_3, x_2);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_4, x_5);
lean_dec(x_4);
x_7 = l_Lean_Syntax_getSepArgs(x_6);
lean_dec(x_6);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_box(0);
x_4 = lean_mk_string("group");
x_5 = lean_name_mk_string(x_3, x_4);
lean_inc(x_2);
x_6 = l_Lean_Syntax_isOfKind(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = lean_mk_string("letRecDecl");
x_11 = lean_name_mk_string(x_1, x_10);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isOfKind(x_9, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_2);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_2, x_14);
lean_dec(x_2);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_nullKind;
x_18 = l_Lean_Syntax_isNodeOf(x_15, x_17, x_14);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_9);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_9);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_9);
return x_21;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandWhereDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_box(0);
x_6 = lean_mk_string("Lean");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Parser");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("Term");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("whereDecls");
lean_inc(x_11);
x_13 = lean_name_mk_string(x_11, x_12);
lean_inc(x_1);
x_14 = l_Lean_Syntax_isOfKind(x_1, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
lean_dec(x_1);
x_19 = l_Lean_Syntax_getArgs(x_18);
lean_dec(x_18);
lean_inc(x_11);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandWhereDecls___lambda__1), 2, 1);
lean_closure_set(x_20, 0, x_11);
x_21 = l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(x_19, x_20);
lean_dec(x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_2);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_3, x_4);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_mk_string("letrec");
lean_inc(x_11);
x_29 = lean_name_mk_string(x_11, x_28);
x_30 = lean_mk_string("group");
x_31 = lean_name_mk_string(x_5, x_30);
x_32 = lean_mk_string("let");
lean_inc(x_27);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_string("rec");
lean_inc(x_27);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_27);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_unsigned_to_nat(2u);
x_37 = lean_mk_empty_array_with_capacity(x_36);
x_38 = lean_array_push(x_37, x_33);
x_39 = lean_array_push(x_38, x_35);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_31);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_string("letRecDecls");
x_42 = lean_name_mk_string(x_11, x_41);
x_43 = lean_mk_string("null");
x_44 = lean_name_mk_string(x_5, x_43);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_mk_empty_array_with_capacity(x_45);
x_47 = lean_mk_string(",");
x_48 = l_Lean_Syntax_SepArray_ofElems(x_47, x_24);
lean_dec(x_24);
x_49 = l_Array_append___rarg(x_46, x_48);
lean_dec(x_48);
lean_inc(x_44);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_mk_empty_array_with_capacity(x_17);
lean_inc(x_51);
x_52 = lean_array_push(x_51, x_50);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_mk_string(";");
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_27);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_array_push(x_51, x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_44);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_unsigned_to_nat(4u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_array_push(x_59, x_40);
x_61 = lean_array_push(x_60, x_53);
x_62 = lean_array_push(x_61, x_57);
x_63 = lean_array_push(x_62, x_2);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_29);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_25, 0, x_64);
return x_25;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_65 = lean_ctor_get(x_25, 0);
x_66 = lean_ctor_get(x_25, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_25);
x_67 = lean_mk_string("letrec");
lean_inc(x_11);
x_68 = lean_name_mk_string(x_11, x_67);
x_69 = lean_mk_string("group");
x_70 = lean_name_mk_string(x_5, x_69);
x_71 = lean_mk_string("let");
lean_inc(x_65);
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("rec");
lean_inc(x_65);
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_65);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_unsigned_to_nat(2u);
x_76 = lean_mk_empty_array_with_capacity(x_75);
x_77 = lean_array_push(x_76, x_72);
x_78 = lean_array_push(x_77, x_74);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_70);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_mk_string("letRecDecls");
x_81 = lean_name_mk_string(x_11, x_80);
x_82 = lean_mk_string("null");
x_83 = lean_name_mk_string(x_5, x_82);
x_84 = lean_unsigned_to_nat(0u);
x_85 = lean_mk_empty_array_with_capacity(x_84);
x_86 = lean_mk_string(",");
x_87 = l_Lean_Syntax_SepArray_ofElems(x_86, x_24);
lean_dec(x_24);
x_88 = l_Array_append___rarg(x_85, x_87);
lean_dec(x_87);
lean_inc(x_83);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_83);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_mk_empty_array_with_capacity(x_17);
lean_inc(x_90);
x_91 = lean_array_push(x_90, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_81);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string(";");
x_94 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_94, 0, x_65);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_90, x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_83);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(4u);
x_98 = lean_mk_empty_array_with_capacity(x_97);
x_99 = lean_array_push(x_98, x_79);
x_100 = lean_array_push(x_99, x_92);
x_101 = lean_array_push(x_100, x_96);
x_102 = lean_array_push(x_101, x_2);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_68);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_66);
return x_104;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandWhereDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandWhereDecls(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Syntax_isNone(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Elab_Term_expandWhereDecls(x_7, x_2, x_3, x_4);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_1(x_3, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = lean_mk_string("matchDiscr");
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_2);
x_16 = lean_array_push(x_15, x_2);
x_17 = lean_array_push(x_16, x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = 1;
x_20 = x_4 + x_19;
x_21 = x_18;
x_22 = lean_array_uset(x_10, x_4, x_21);
x_4 = x_20;
x_5 = x_22;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = lean_mk_string("Term");
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_mk_string("matchDiscr");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_2);
x_18 = lean_array_push(x_17, x_2);
x_19 = lean_array_push(x_18, x_11);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
x_21 = 1;
x_22 = x_4 + x_21;
x_23 = x_20;
x_24 = lean_array_uset(x_10, x_4, x_23);
x_4 = x_22;
x_5 = x_24;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_nat_add(x_12, x_9);
lean_ctor_set(x_6, 0, x_13);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 2);
lean_dec(x_16);
lean_inc(x_12);
lean_inc(x_15);
lean_ctor_set(x_5, 2, x_12);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_mk_string("x");
x_21 = lean_string_utf8_byte_size(x_20);
lean_inc(x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_7);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_box(0);
x_24 = lean_name_mk_string(x_23, x_20);
x_25 = l_Lean_addMacroScope(x_15, x_24, x_12);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_25);
lean_ctor_set(x_27, 3, x_26);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_19);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_mk_string("Lean");
x_32 = lean_name_mk_string(x_23, x_31);
x_33 = lean_mk_string("Parser");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_string("Term");
lean_inc(x_34);
x_36 = lean_name_mk_string(x_34, x_35);
x_37 = lean_mk_string("explicit");
lean_inc(x_36);
x_38 = lean_name_mk_string(x_36, x_37);
x_39 = lean_mk_string("@");
lean_inc(x_39);
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_29);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_unsigned_to_nat(2u);
x_42 = lean_mk_empty_array_with_capacity(x_41);
lean_inc(x_42);
x_43 = lean_array_push(x_42, x_40);
lean_inc(x_27);
x_44 = lean_array_push(x_43, x_27);
lean_inc(x_38);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_38);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_push(x_4, x_45);
lean_inc(x_5);
x_47 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_10, x_46, x_5, x_30);
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_34);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_49);
lean_dec(x_5);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_39);
x_54 = lean_mk_string("fun");
lean_inc(x_54);
lean_inc(x_36);
x_55 = lean_name_mk_string(x_36, x_54);
lean_inc(x_52);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_52);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_mk_string("basicFun");
x_58 = lean_name_mk_string(x_36, x_57);
x_59 = lean_mk_string("null");
x_60 = lean_name_mk_string(x_23, x_59);
x_61 = lean_mk_empty_array_with_capacity(x_9);
x_62 = lean_array_push(x_61, x_27);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string("=>");
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_52);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_unsigned_to_nat(3u);
x_67 = lean_mk_empty_array_with_capacity(x_66);
x_68 = lean_array_push(x_67, x_63);
x_69 = lean_array_push(x_68, x_65);
x_70 = lean_array_push(x_69, x_48);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_58);
lean_ctor_set(x_71, 1, x_70);
lean_inc(x_42);
x_72 = lean_array_push(x_42, x_56);
x_73 = lean_array_push(x_72, x_71);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_55);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_array_push(x_42, x_53);
x_76 = lean_array_push(x_75, x_74);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_38);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_50, 0, x_77);
return x_50;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_78 = lean_ctor_get(x_50, 0);
x_79 = lean_ctor_get(x_50, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_50);
lean_inc(x_78);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_39);
x_81 = lean_mk_string("fun");
lean_inc(x_81);
lean_inc(x_36);
x_82 = lean_name_mk_string(x_36, x_81);
lean_inc(x_78);
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_78);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_mk_string("basicFun");
x_85 = lean_name_mk_string(x_36, x_84);
x_86 = lean_mk_string("null");
x_87 = lean_name_mk_string(x_23, x_86);
x_88 = lean_mk_empty_array_with_capacity(x_9);
x_89 = lean_array_push(x_88, x_27);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_mk_string("=>");
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_78);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_unsigned_to_nat(3u);
x_94 = lean_mk_empty_array_with_capacity(x_93);
x_95 = lean_array_push(x_94, x_90);
x_96 = lean_array_push(x_95, x_92);
x_97 = lean_array_push(x_96, x_48);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_85);
lean_ctor_set(x_98, 1, x_97);
lean_inc(x_42);
x_99 = lean_array_push(x_42, x_83);
x_100 = lean_array_push(x_99, x_98);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_82);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_array_push(x_42, x_80);
x_103 = lean_array_push(x_102, x_101);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_38);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_79);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_36);
x_106 = lean_ctor_get(x_47, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_47, 1);
lean_inc(x_107);
lean_dec(x_47);
x_108 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_107);
lean_dec(x_5);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_110 = lean_ctor_get(x_108, 0);
x_111 = lean_mk_string("Tactic");
x_112 = lean_name_mk_string(x_34, x_111);
x_113 = lean_mk_string("seq1");
lean_inc(x_112);
x_114 = lean_name_mk_string(x_112, x_113);
x_115 = lean_mk_string("null");
x_116 = lean_name_mk_string(x_23, x_115);
x_117 = lean_mk_string("intro");
lean_inc(x_117);
x_118 = lean_name_mk_string(x_112, x_117);
lean_inc(x_110);
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_110);
lean_ctor_set(x_119, 1, x_117);
x_120 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_120);
x_121 = lean_array_push(x_120, x_27);
lean_inc(x_116);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_116);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_array_push(x_42, x_119);
x_124 = lean_array_push(x_123, x_122);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_118);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_mk_string(";");
x_127 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_127, 0, x_110);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_unsigned_to_nat(3u);
x_129 = lean_mk_empty_array_with_capacity(x_128);
x_130 = lean_array_push(x_129, x_125);
x_131 = lean_array_push(x_130, x_127);
x_132 = lean_array_push(x_131, x_106);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_116);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_120, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_114);
lean_ctor_set(x_135, 1, x_134);
lean_ctor_set(x_108, 0, x_135);
return x_108;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_136 = lean_ctor_get(x_108, 0);
x_137 = lean_ctor_get(x_108, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_108);
x_138 = lean_mk_string("Tactic");
x_139 = lean_name_mk_string(x_34, x_138);
x_140 = lean_mk_string("seq1");
lean_inc(x_139);
x_141 = lean_name_mk_string(x_139, x_140);
x_142 = lean_mk_string("null");
x_143 = lean_name_mk_string(x_23, x_142);
x_144 = lean_mk_string("intro");
lean_inc(x_144);
x_145 = lean_name_mk_string(x_139, x_144);
lean_inc(x_136);
x_146 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_146, 0, x_136);
lean_ctor_set(x_146, 1, x_144);
x_147 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_147);
x_148 = lean_array_push(x_147, x_27);
lean_inc(x_143);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_143);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_array_push(x_42, x_146);
x_151 = lean_array_push(x_150, x_149);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_145);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_mk_string(";");
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_136);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_unsigned_to_nat(3u);
x_156 = lean_mk_empty_array_with_capacity(x_155);
x_157 = lean_array_push(x_156, x_152);
x_158 = lean_array_push(x_157, x_154);
x_159 = lean_array_push(x_158, x_106);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_143);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_array_push(x_147, x_160);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_141);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_137);
return x_163;
}
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_164 = lean_ctor_get(x_5, 0);
x_165 = lean_ctor_get(x_5, 1);
x_166 = lean_ctor_get(x_5, 3);
x_167 = lean_ctor_get(x_5, 4);
x_168 = lean_ctor_get(x_5, 5);
lean_inc(x_168);
lean_inc(x_167);
lean_inc(x_166);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_5);
lean_inc(x_12);
lean_inc(x_165);
x_169 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_169, 0, x_164);
lean_ctor_set(x_169, 1, x_165);
lean_ctor_set(x_169, 2, x_12);
lean_ctor_set(x_169, 3, x_166);
lean_ctor_set(x_169, 4, x_167);
lean_ctor_set(x_169, 5, x_168);
x_170 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_169, x_6);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = lean_mk_string("x");
x_174 = lean_string_utf8_byte_size(x_173);
lean_inc(x_173);
x_175 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_7);
lean_ctor_set(x_175, 2, x_174);
x_176 = lean_box(0);
x_177 = lean_name_mk_string(x_176, x_173);
x_178 = l_Lean_addMacroScope(x_165, x_177, x_12);
x_179 = lean_box(0);
x_180 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_180, 0, x_171);
lean_ctor_set(x_180, 1, x_175);
lean_ctor_set(x_180, 2, x_178);
lean_ctor_set(x_180, 3, x_179);
x_181 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_169, x_172);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = lean_mk_string("Lean");
x_185 = lean_name_mk_string(x_176, x_184);
x_186 = lean_mk_string("Parser");
x_187 = lean_name_mk_string(x_185, x_186);
x_188 = lean_mk_string("Term");
lean_inc(x_187);
x_189 = lean_name_mk_string(x_187, x_188);
x_190 = lean_mk_string("explicit");
lean_inc(x_189);
x_191 = lean_name_mk_string(x_189, x_190);
x_192 = lean_mk_string("@");
lean_inc(x_192);
x_193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_193, 0, x_182);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_unsigned_to_nat(2u);
x_195 = lean_mk_empty_array_with_capacity(x_194);
lean_inc(x_195);
x_196 = lean_array_push(x_195, x_193);
lean_inc(x_180);
x_197 = lean_array_push(x_196, x_180);
lean_inc(x_191);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_191);
lean_ctor_set(x_198, 1, x_197);
x_199 = lean_array_push(x_4, x_198);
lean_inc(x_169);
x_200 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_10, x_199, x_169, x_183);
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_dec(x_187);
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_169, x_202);
lean_dec(x_169);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_206 = x_203;
} else {
 lean_dec_ref(x_203);
 x_206 = lean_box(0);
}
lean_inc(x_204);
x_207 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_207, 0, x_204);
lean_ctor_set(x_207, 1, x_192);
x_208 = lean_mk_string("fun");
lean_inc(x_208);
lean_inc(x_189);
x_209 = lean_name_mk_string(x_189, x_208);
lean_inc(x_204);
x_210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_210, 0, x_204);
lean_ctor_set(x_210, 1, x_208);
x_211 = lean_mk_string("basicFun");
x_212 = lean_name_mk_string(x_189, x_211);
x_213 = lean_mk_string("null");
x_214 = lean_name_mk_string(x_176, x_213);
x_215 = lean_mk_empty_array_with_capacity(x_9);
x_216 = lean_array_push(x_215, x_180);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_mk_string("=>");
x_219 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_219, 0, x_204);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_unsigned_to_nat(3u);
x_221 = lean_mk_empty_array_with_capacity(x_220);
x_222 = lean_array_push(x_221, x_217);
x_223 = lean_array_push(x_222, x_219);
x_224 = lean_array_push(x_223, x_201);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_212);
lean_ctor_set(x_225, 1, x_224);
lean_inc(x_195);
x_226 = lean_array_push(x_195, x_210);
x_227 = lean_array_push(x_226, x_225);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_209);
lean_ctor_set(x_228, 1, x_227);
x_229 = lean_array_push(x_195, x_207);
x_230 = lean_array_push(x_229, x_228);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_191);
lean_ctor_set(x_231, 1, x_230);
if (lean_is_scalar(x_206)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_206;
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_205);
return x_232;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
lean_dec(x_192);
lean_dec(x_191);
lean_dec(x_189);
x_233 = lean_ctor_get(x_200, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_200, 1);
lean_inc(x_234);
lean_dec(x_200);
x_235 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_169, x_234);
lean_dec(x_169);
x_236 = lean_ctor_get(x_235, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_235, 1);
lean_inc(x_237);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 x_238 = x_235;
} else {
 lean_dec_ref(x_235);
 x_238 = lean_box(0);
}
x_239 = lean_mk_string("Tactic");
x_240 = lean_name_mk_string(x_187, x_239);
x_241 = lean_mk_string("seq1");
lean_inc(x_240);
x_242 = lean_name_mk_string(x_240, x_241);
x_243 = lean_mk_string("null");
x_244 = lean_name_mk_string(x_176, x_243);
x_245 = lean_mk_string("intro");
lean_inc(x_245);
x_246 = lean_name_mk_string(x_240, x_245);
lean_inc(x_236);
x_247 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_247, 0, x_236);
lean_ctor_set(x_247, 1, x_245);
x_248 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_248);
x_249 = lean_array_push(x_248, x_180);
lean_inc(x_244);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_244);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_array_push(x_195, x_247);
x_252 = lean_array_push(x_251, x_250);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_246);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_mk_string(";");
x_255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_255, 0, x_236);
lean_ctor_set(x_255, 1, x_254);
x_256 = lean_unsigned_to_nat(3u);
x_257 = lean_mk_empty_array_with_capacity(x_256);
x_258 = lean_array_push(x_257, x_253);
x_259 = lean_array_push(x_258, x_255);
x_260 = lean_array_push(x_259, x_233);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_244);
lean_ctor_set(x_261, 1, x_260);
x_262 = lean_array_push(x_248, x_261);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_242);
lean_ctor_set(x_263, 1, x_262);
if (lean_is_scalar(x_238)) {
 x_264 = lean_alloc_ctor(0, 2, 0);
} else {
 x_264 = x_238;
}
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_237);
return x_264;
}
}
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_265 = lean_ctor_get(x_6, 0);
x_266 = lean_ctor_get(x_6, 1);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_6);
x_267 = lean_nat_add(x_265, x_9);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_266);
x_269 = lean_ctor_get(x_5, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_5, 1);
lean_inc(x_270);
x_271 = lean_ctor_get(x_5, 3);
lean_inc(x_271);
x_272 = lean_ctor_get(x_5, 4);
lean_inc(x_272);
x_273 = lean_ctor_get(x_5, 5);
lean_inc(x_273);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 x_274 = x_5;
} else {
 lean_dec_ref(x_5);
 x_274 = lean_box(0);
}
lean_inc(x_265);
lean_inc(x_270);
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(0, 6, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_269);
lean_ctor_set(x_275, 1, x_270);
lean_ctor_set(x_275, 2, x_265);
lean_ctor_set(x_275, 3, x_271);
lean_ctor_set(x_275, 4, x_272);
lean_ctor_set(x_275, 5, x_273);
x_276 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_275, x_268);
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
lean_dec(x_276);
x_279 = lean_mk_string("x");
x_280 = lean_string_utf8_byte_size(x_279);
lean_inc(x_279);
x_281 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_7);
lean_ctor_set(x_281, 2, x_280);
x_282 = lean_box(0);
x_283 = lean_name_mk_string(x_282, x_279);
x_284 = l_Lean_addMacroScope(x_270, x_283, x_265);
x_285 = lean_box(0);
x_286 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_286, 0, x_277);
lean_ctor_set(x_286, 1, x_281);
lean_ctor_set(x_286, 2, x_284);
lean_ctor_set(x_286, 3, x_285);
x_287 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_275, x_278);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 1);
lean_inc(x_289);
lean_dec(x_287);
x_290 = lean_mk_string("Lean");
x_291 = lean_name_mk_string(x_282, x_290);
x_292 = lean_mk_string("Parser");
x_293 = lean_name_mk_string(x_291, x_292);
x_294 = lean_mk_string("Term");
lean_inc(x_293);
x_295 = lean_name_mk_string(x_293, x_294);
x_296 = lean_mk_string("explicit");
lean_inc(x_295);
x_297 = lean_name_mk_string(x_295, x_296);
x_298 = lean_mk_string("@");
lean_inc(x_298);
x_299 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_299, 0, x_288);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_unsigned_to_nat(2u);
x_301 = lean_mk_empty_array_with_capacity(x_300);
lean_inc(x_301);
x_302 = lean_array_push(x_301, x_299);
lean_inc(x_286);
x_303 = lean_array_push(x_302, x_286);
lean_inc(x_297);
x_304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_304, 0, x_297);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_array_push(x_4, x_304);
lean_inc(x_275);
x_306 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_10, x_305, x_275, x_289);
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_293);
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
x_309 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_275, x_308);
lean_dec(x_275);
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
lean_inc(x_310);
x_313 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_298);
x_314 = lean_mk_string("fun");
lean_inc(x_314);
lean_inc(x_295);
x_315 = lean_name_mk_string(x_295, x_314);
lean_inc(x_310);
x_316 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_316, 0, x_310);
lean_ctor_set(x_316, 1, x_314);
x_317 = lean_mk_string("basicFun");
x_318 = lean_name_mk_string(x_295, x_317);
x_319 = lean_mk_string("null");
x_320 = lean_name_mk_string(x_282, x_319);
x_321 = lean_mk_empty_array_with_capacity(x_9);
x_322 = lean_array_push(x_321, x_286);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_320);
lean_ctor_set(x_323, 1, x_322);
x_324 = lean_mk_string("=>");
x_325 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_325, 0, x_310);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_unsigned_to_nat(3u);
x_327 = lean_mk_empty_array_with_capacity(x_326);
x_328 = lean_array_push(x_327, x_323);
x_329 = lean_array_push(x_328, x_325);
x_330 = lean_array_push(x_329, x_307);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_318);
lean_ctor_set(x_331, 1, x_330);
lean_inc(x_301);
x_332 = lean_array_push(x_301, x_316);
x_333 = lean_array_push(x_332, x_331);
x_334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_334, 0, x_315);
lean_ctor_set(x_334, 1, x_333);
x_335 = lean_array_push(x_301, x_313);
x_336 = lean_array_push(x_335, x_334);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_297);
lean_ctor_set(x_337, 1, x_336);
if (lean_is_scalar(x_312)) {
 x_338 = lean_alloc_ctor(0, 2, 0);
} else {
 x_338 = x_312;
}
lean_ctor_set(x_338, 0, x_337);
lean_ctor_set(x_338, 1, x_311);
return x_338;
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_295);
x_339 = lean_ctor_get(x_306, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_306, 1);
lean_inc(x_340);
lean_dec(x_306);
x_341 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_275, x_340);
lean_dec(x_275);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
if (lean_is_exclusive(x_341)) {
 lean_ctor_release(x_341, 0);
 lean_ctor_release(x_341, 1);
 x_344 = x_341;
} else {
 lean_dec_ref(x_341);
 x_344 = lean_box(0);
}
x_345 = lean_mk_string("Tactic");
x_346 = lean_name_mk_string(x_293, x_345);
x_347 = lean_mk_string("seq1");
lean_inc(x_346);
x_348 = lean_name_mk_string(x_346, x_347);
x_349 = lean_mk_string("null");
x_350 = lean_name_mk_string(x_282, x_349);
x_351 = lean_mk_string("intro");
lean_inc(x_351);
x_352 = lean_name_mk_string(x_346, x_351);
lean_inc(x_342);
x_353 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_353, 0, x_342);
lean_ctor_set(x_353, 1, x_351);
x_354 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_354);
x_355 = lean_array_push(x_354, x_286);
lean_inc(x_350);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_350);
lean_ctor_set(x_356, 1, x_355);
x_357 = lean_array_push(x_301, x_353);
x_358 = lean_array_push(x_357, x_356);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_352);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_mk_string(";");
x_361 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_361, 0, x_342);
lean_ctor_set(x_361, 1, x_360);
x_362 = lean_unsigned_to_nat(3u);
x_363 = lean_mk_empty_array_with_capacity(x_362);
x_364 = lean_array_push(x_363, x_359);
x_365 = lean_array_push(x_364, x_361);
x_366 = lean_array_push(x_365, x_339);
x_367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_367, 0, x_350);
lean_ctor_set(x_367, 1, x_366);
x_368 = lean_array_push(x_354, x_367);
x_369 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_369, 0, x_348);
lean_ctor_set(x_369, 1, x_368);
if (lean_is_scalar(x_344)) {
 x_370 = lean_alloc_ctor(0, 2, 0);
} else {
 x_370 = x_344;
}
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_343);
return x_370;
}
}
}
else
{
if (x_2 == 0)
{
lean_object* x_371; uint8_t x_372; 
x_371 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
lean_dec(x_5);
x_372 = !lean_is_exclusive(x_371);
if (x_372 == 0)
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; size_t x_389; size_t x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_373 = lean_ctor_get(x_371, 0);
x_374 = lean_box(0);
x_375 = lean_mk_string("Lean");
x_376 = lean_name_mk_string(x_374, x_375);
x_377 = lean_mk_string("Parser");
x_378 = lean_name_mk_string(x_376, x_377);
x_379 = lean_mk_string("Term");
x_380 = lean_name_mk_string(x_378, x_379);
x_381 = lean_mk_string("match");
lean_inc(x_381);
lean_inc(x_380);
x_382 = lean_name_mk_string(x_380, x_381);
lean_inc(x_373);
x_383 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_383, 0, x_373);
lean_ctor_set(x_383, 1, x_381);
x_384 = lean_mk_string("null");
x_385 = lean_name_mk_string(x_374, x_384);
x_386 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_386);
lean_inc(x_385);
x_387 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_386);
x_388 = lean_array_get_size(x_4);
x_389 = lean_usize_of_nat(x_388);
lean_dec(x_388);
x_390 = 0;
x_391 = x_4;
lean_inc(x_387);
x_392 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_380, x_387, x_389, x_390, x_391);
x_393 = x_392;
x_394 = lean_box(2);
x_395 = lean_mk_string(",");
x_396 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_396, 0, x_394);
lean_ctor_set(x_396, 1, x_395);
x_397 = l_Lean_mkSepArray(x_393, x_396);
lean_dec(x_393);
x_398 = l_Array_append___rarg(x_386, x_397);
lean_dec(x_397);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_385);
lean_ctor_set(x_399, 1, x_398);
x_400 = lean_mk_string("with");
x_401 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_401, 0, x_373);
lean_ctor_set(x_401, 1, x_400);
x_402 = lean_unsigned_to_nat(6u);
x_403 = lean_mk_empty_array_with_capacity(x_402);
x_404 = lean_array_push(x_403, x_383);
lean_inc(x_387);
x_405 = lean_array_push(x_404, x_387);
x_406 = lean_array_push(x_405, x_399);
x_407 = lean_array_push(x_406, x_387);
x_408 = lean_array_push(x_407, x_401);
x_409 = lean_array_push(x_408, x_1);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_382);
lean_ctor_set(x_410, 1, x_409);
lean_ctor_set(x_371, 0, x_410);
return x_371;
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; size_t x_428; size_t x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_411 = lean_ctor_get(x_371, 0);
x_412 = lean_ctor_get(x_371, 1);
lean_inc(x_412);
lean_inc(x_411);
lean_dec(x_371);
x_413 = lean_box(0);
x_414 = lean_mk_string("Lean");
x_415 = lean_name_mk_string(x_413, x_414);
x_416 = lean_mk_string("Parser");
x_417 = lean_name_mk_string(x_415, x_416);
x_418 = lean_mk_string("Term");
x_419 = lean_name_mk_string(x_417, x_418);
x_420 = lean_mk_string("match");
lean_inc(x_420);
lean_inc(x_419);
x_421 = lean_name_mk_string(x_419, x_420);
lean_inc(x_411);
x_422 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_422, 0, x_411);
lean_ctor_set(x_422, 1, x_420);
x_423 = lean_mk_string("null");
x_424 = lean_name_mk_string(x_413, x_423);
x_425 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_425);
lean_inc(x_424);
x_426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_426, 0, x_424);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_array_get_size(x_4);
x_428 = lean_usize_of_nat(x_427);
lean_dec(x_427);
x_429 = 0;
x_430 = x_4;
lean_inc(x_426);
x_431 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_419, x_426, x_428, x_429, x_430);
x_432 = x_431;
x_433 = lean_box(2);
x_434 = lean_mk_string(",");
x_435 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_435, 0, x_433);
lean_ctor_set(x_435, 1, x_434);
x_436 = l_Lean_mkSepArray(x_432, x_435);
lean_dec(x_432);
x_437 = l_Array_append___rarg(x_425, x_436);
lean_dec(x_436);
x_438 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_438, 0, x_424);
lean_ctor_set(x_438, 1, x_437);
x_439 = lean_mk_string("with");
x_440 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_440, 0, x_411);
lean_ctor_set(x_440, 1, x_439);
x_441 = lean_unsigned_to_nat(6u);
x_442 = lean_mk_empty_array_with_capacity(x_441);
x_443 = lean_array_push(x_442, x_422);
lean_inc(x_426);
x_444 = lean_array_push(x_443, x_426);
x_445 = lean_array_push(x_444, x_438);
x_446 = lean_array_push(x_445, x_426);
x_447 = lean_array_push(x_446, x_440);
x_448 = lean_array_push(x_447, x_1);
x_449 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_449, 0, x_421);
lean_ctor_set(x_449, 1, x_448);
x_450 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_450, 0, x_449);
lean_ctor_set(x_450, 1, x_412);
return x_450;
}
}
else
{
lean_object* x_451; uint8_t x_452; 
x_451 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
lean_dec(x_5);
x_452 = !lean_is_exclusive(x_451);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; size_t x_469; size_t x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; 
x_453 = lean_ctor_get(x_451, 0);
x_454 = lean_box(0);
x_455 = lean_mk_string("Lean");
x_456 = lean_name_mk_string(x_454, x_455);
x_457 = lean_mk_string("Parser");
x_458 = lean_name_mk_string(x_456, x_457);
x_459 = lean_mk_string("Tactic");
lean_inc(x_458);
x_460 = lean_name_mk_string(x_458, x_459);
x_461 = lean_mk_string("match");
lean_inc(x_461);
x_462 = lean_name_mk_string(x_460, x_461);
lean_inc(x_453);
x_463 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_463, 0, x_453);
lean_ctor_set(x_463, 1, x_461);
x_464 = lean_mk_string("null");
x_465 = lean_name_mk_string(x_454, x_464);
x_466 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_466);
lean_inc(x_465);
x_467 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_466);
x_468 = lean_array_get_size(x_4);
x_469 = lean_usize_of_nat(x_468);
lean_dec(x_468);
x_470 = 0;
x_471 = x_4;
lean_inc(x_467);
x_472 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_458, x_467, x_469, x_470, x_471);
x_473 = x_472;
x_474 = lean_box(2);
x_475 = lean_mk_string(",");
x_476 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_476, 0, x_474);
lean_ctor_set(x_476, 1, x_475);
x_477 = l_Lean_mkSepArray(x_473, x_476);
lean_dec(x_473);
x_478 = l_Array_append___rarg(x_466, x_477);
lean_dec(x_477);
x_479 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_479, 0, x_465);
lean_ctor_set(x_479, 1, x_478);
x_480 = lean_mk_string("with");
x_481 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_481, 0, x_453);
lean_ctor_set(x_481, 1, x_480);
x_482 = lean_unsigned_to_nat(6u);
x_483 = lean_mk_empty_array_with_capacity(x_482);
x_484 = lean_array_push(x_483, x_463);
lean_inc(x_467);
x_485 = lean_array_push(x_484, x_467);
x_486 = lean_array_push(x_485, x_479);
x_487 = lean_array_push(x_486, x_467);
x_488 = lean_array_push(x_487, x_481);
x_489 = lean_array_push(x_488, x_1);
x_490 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_490, 0, x_462);
lean_ctor_set(x_490, 1, x_489);
lean_ctor_set(x_451, 0, x_490);
return x_451;
}
else
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; size_t x_508; size_t x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; 
x_491 = lean_ctor_get(x_451, 0);
x_492 = lean_ctor_get(x_451, 1);
lean_inc(x_492);
lean_inc(x_491);
lean_dec(x_451);
x_493 = lean_box(0);
x_494 = lean_mk_string("Lean");
x_495 = lean_name_mk_string(x_493, x_494);
x_496 = lean_mk_string("Parser");
x_497 = lean_name_mk_string(x_495, x_496);
x_498 = lean_mk_string("Tactic");
lean_inc(x_497);
x_499 = lean_name_mk_string(x_497, x_498);
x_500 = lean_mk_string("match");
lean_inc(x_500);
x_501 = lean_name_mk_string(x_499, x_500);
lean_inc(x_491);
x_502 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_502, 0, x_491);
lean_ctor_set(x_502, 1, x_500);
x_503 = lean_mk_string("null");
x_504 = lean_name_mk_string(x_493, x_503);
x_505 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_505);
lean_inc(x_504);
x_506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_506, 0, x_504);
lean_ctor_set(x_506, 1, x_505);
x_507 = lean_array_get_size(x_4);
x_508 = lean_usize_of_nat(x_507);
lean_dec(x_507);
x_509 = 0;
x_510 = x_4;
lean_inc(x_506);
x_511 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_497, x_506, x_508, x_509, x_510);
x_512 = x_511;
x_513 = lean_box(2);
x_514 = lean_mk_string(",");
x_515 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_515, 0, x_513);
lean_ctor_set(x_515, 1, x_514);
x_516 = l_Lean_mkSepArray(x_512, x_515);
lean_dec(x_512);
x_517 = l_Array_append___rarg(x_505, x_516);
lean_dec(x_516);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_504);
lean_ctor_set(x_518, 1, x_517);
x_519 = lean_mk_string("with");
x_520 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_520, 0, x_491);
lean_ctor_set(x_520, 1, x_519);
x_521 = lean_unsigned_to_nat(6u);
x_522 = lean_mk_empty_array_with_capacity(x_521);
x_523 = lean_array_push(x_522, x_502);
lean_inc(x_506);
x_524 = lean_array_push(x_523, x_506);
x_525 = lean_array_push(x_524, x_518);
x_526 = lean_array_push(x_525, x_506);
x_527 = lean_array_push(x_526, x_520);
x_528 = lean_array_push(x_527, x_1);
x_529 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_529, 0, x_501);
lean_ctor_set(x_529, 1, x_528);
x_530 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_530, 0, x_529);
lean_ctor_set(x_530, 1, x_492);
return x_530;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_7, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 5);
x_11 = l_Lean_replaceRef(x_1, x_10);
lean_dec(x_10);
lean_ctor_set(x_4, 5, x_11);
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_3, x_6, x_8, x_4, x_5);
lean_dec(x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 2);
x_16 = lean_ctor_get(x_4, 3);
x_17 = lean_ctor_get(x_4, 4);
x_18 = lean_ctor_get(x_4, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_19 = l_Lean_replaceRef(x_1, x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_19);
x_21 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_3, x_6, x_8, x_20, x_5);
lean_dec(x_6);
return x_21;
}
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_mk_empty_array_with_capacity(x_6);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 5);
x_10 = l_Lean_replaceRef(x_1, x_9);
lean_dec(x_9);
lean_ctor_set(x_3, 5, x_10);
x_11 = 1;
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_11, x_5, x_7, x_3, x_4);
lean_dec(x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
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
x_19 = l_Lean_replaceRef(x_1, x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_19);
x_21 = 1;
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_21, x_5, x_7, x_20, x_4);
lean_dec(x_5);
return x_22;
}
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = lean_mk_string("matchDiscr");
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_2);
x_16 = lean_array_push(x_15, x_2);
x_17 = lean_array_push(x_16, x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = 1;
x_20 = x_4 + x_19;
x_21 = x_18;
x_22 = lean_array_uset(x_10, x_4, x_21);
x_4 = x_20;
x_5 = x_22;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_nat_add(x_12, x_9);
lean_ctor_set(x_6, 0, x_13);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 2);
lean_dec(x_16);
lean_inc(x_12);
lean_inc(x_15);
lean_ctor_set(x_5, 2, x_12);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_box(0);
x_21 = lean_mk_string("Lean");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("Parser");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("Term");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("explicit");
lean_inc(x_26);
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("@");
lean_inc(x_29);
lean_inc(x_18);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_mk_string("x");
x_32 = lean_string_utf8_byte_size(x_31);
lean_inc(x_31);
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_7);
lean_ctor_set(x_33, 2, x_32);
x_34 = lean_name_mk_string(x_20, x_31);
x_35 = l_Lean_addMacroScope(x_15, x_34, x_12);
x_36 = lean_box(0);
lean_inc(x_35);
lean_inc(x_33);
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_18);
lean_ctor_set(x_37, 1, x_33);
lean_ctor_set(x_37, 2, x_35);
lean_ctor_set(x_37, 3, x_36);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_mk_empty_array_with_capacity(x_38);
lean_inc(x_39);
x_40 = lean_array_push(x_39, x_30);
x_41 = lean_array_push(x_40, x_37);
lean_inc(x_28);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_28);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_array_push(x_4, x_42);
lean_inc(x_5);
x_44 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_43, x_5, x_19);
lean_dec(x_10);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_46);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_29);
x_51 = lean_mk_string("fun");
lean_inc(x_51);
lean_inc(x_26);
x_52 = lean_name_mk_string(x_26, x_51);
lean_inc(x_49);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_49);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_mk_string("basicFun");
x_55 = lean_name_mk_string(x_26, x_54);
x_56 = lean_mk_string("null");
x_57 = lean_name_mk_string(x_20, x_56);
lean_inc(x_49);
x_58 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_58, 0, x_49);
lean_ctor_set(x_58, 1, x_33);
lean_ctor_set(x_58, 2, x_35);
lean_ctor_set(x_58, 3, x_36);
x_59 = lean_mk_empty_array_with_capacity(x_9);
x_60 = lean_array_push(x_59, x_58);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("=>");
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_49);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_unsigned_to_nat(3u);
x_65 = lean_mk_empty_array_with_capacity(x_64);
x_66 = lean_array_push(x_65, x_61);
x_67 = lean_array_push(x_66, x_63);
x_68 = lean_array_push(x_67, x_45);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_55);
lean_ctor_set(x_69, 1, x_68);
lean_inc(x_39);
x_70 = lean_array_push(x_39, x_53);
x_71 = lean_array_push(x_70, x_69);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_52);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_39, x_50);
x_74 = lean_array_push(x_73, x_72);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_28);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_47, 0, x_75);
return x_47;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_76 = lean_ctor_get(x_47, 0);
x_77 = lean_ctor_get(x_47, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_47);
lean_inc(x_76);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_29);
x_79 = lean_mk_string("fun");
lean_inc(x_79);
lean_inc(x_26);
x_80 = lean_name_mk_string(x_26, x_79);
lean_inc(x_76);
x_81 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_mk_string("basicFun");
x_83 = lean_name_mk_string(x_26, x_82);
x_84 = lean_mk_string("null");
x_85 = lean_name_mk_string(x_20, x_84);
lean_inc(x_76);
x_86 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_86, 0, x_76);
lean_ctor_set(x_86, 1, x_33);
lean_ctor_set(x_86, 2, x_35);
lean_ctor_set(x_86, 3, x_36);
x_87 = lean_mk_empty_array_with_capacity(x_9);
x_88 = lean_array_push(x_87, x_86);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_85);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_mk_string("=>");
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_76);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_unsigned_to_nat(3u);
x_93 = lean_mk_empty_array_with_capacity(x_92);
x_94 = lean_array_push(x_93, x_89);
x_95 = lean_array_push(x_94, x_91);
x_96 = lean_array_push(x_95, x_45);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_83);
lean_ctor_set(x_97, 1, x_96);
lean_inc(x_39);
x_98 = lean_array_push(x_39, x_81);
x_99 = lean_array_push(x_98, x_97);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_80);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_array_push(x_39, x_78);
x_102 = lean_array_push(x_101, x_100);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_28);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_77);
return x_104;
}
}
else
{
uint8_t x_105; 
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_5);
x_105 = !lean_is_exclusive(x_44);
if (x_105 == 0)
{
return x_44;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_44, 0);
x_107 = lean_ctor_get(x_44, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_44);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_109 = lean_ctor_get(x_5, 0);
x_110 = lean_ctor_get(x_5, 1);
x_111 = lean_ctor_get(x_5, 3);
x_112 = lean_ctor_get(x_5, 4);
x_113 = lean_ctor_get(x_5, 5);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_5);
lean_inc(x_12);
lean_inc(x_110);
x_114 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_114, 0, x_109);
lean_ctor_set(x_114, 1, x_110);
lean_ctor_set(x_114, 2, x_12);
lean_ctor_set(x_114, 3, x_111);
lean_ctor_set(x_114, 4, x_112);
lean_ctor_set(x_114, 5, x_113);
x_115 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_114, x_6);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = lean_box(0);
x_119 = lean_mk_string("Lean");
x_120 = lean_name_mk_string(x_118, x_119);
x_121 = lean_mk_string("Parser");
x_122 = lean_name_mk_string(x_120, x_121);
x_123 = lean_mk_string("Term");
x_124 = lean_name_mk_string(x_122, x_123);
x_125 = lean_mk_string("explicit");
lean_inc(x_124);
x_126 = lean_name_mk_string(x_124, x_125);
x_127 = lean_mk_string("@");
lean_inc(x_127);
lean_inc(x_116);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_116);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_mk_string("x");
x_130 = lean_string_utf8_byte_size(x_129);
lean_inc(x_129);
x_131 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_7);
lean_ctor_set(x_131, 2, x_130);
x_132 = lean_name_mk_string(x_118, x_129);
x_133 = l_Lean_addMacroScope(x_110, x_132, x_12);
x_134 = lean_box(0);
lean_inc(x_133);
lean_inc(x_131);
x_135 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_135, 0, x_116);
lean_ctor_set(x_135, 1, x_131);
lean_ctor_set(x_135, 2, x_133);
lean_ctor_set(x_135, 3, x_134);
x_136 = lean_unsigned_to_nat(2u);
x_137 = lean_mk_empty_array_with_capacity(x_136);
lean_inc(x_137);
x_138 = lean_array_push(x_137, x_128);
x_139 = lean_array_push(x_138, x_135);
lean_inc(x_126);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_126);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_array_push(x_4, x_140);
lean_inc(x_114);
x_142 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_141, x_114, x_117);
lean_dec(x_10);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_145 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_114, x_144);
lean_dec(x_114);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
lean_inc(x_146);
x_149 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_127);
x_150 = lean_mk_string("fun");
lean_inc(x_150);
lean_inc(x_124);
x_151 = lean_name_mk_string(x_124, x_150);
lean_inc(x_146);
x_152 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_152, 0, x_146);
lean_ctor_set(x_152, 1, x_150);
x_153 = lean_mk_string("basicFun");
x_154 = lean_name_mk_string(x_124, x_153);
x_155 = lean_mk_string("null");
x_156 = lean_name_mk_string(x_118, x_155);
lean_inc(x_146);
x_157 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_157, 0, x_146);
lean_ctor_set(x_157, 1, x_131);
lean_ctor_set(x_157, 2, x_133);
lean_ctor_set(x_157, 3, x_134);
x_158 = lean_mk_empty_array_with_capacity(x_9);
x_159 = lean_array_push(x_158, x_157);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_156);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_mk_string("=>");
x_162 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_162, 0, x_146);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_unsigned_to_nat(3u);
x_164 = lean_mk_empty_array_with_capacity(x_163);
x_165 = lean_array_push(x_164, x_160);
x_166 = lean_array_push(x_165, x_162);
x_167 = lean_array_push(x_166, x_143);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_154);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_137);
x_169 = lean_array_push(x_137, x_152);
x_170 = lean_array_push(x_169, x_168);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_151);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_array_push(x_137, x_149);
x_173 = lean_array_push(x_172, x_171);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_126);
lean_ctor_set(x_174, 1, x_173);
if (lean_is_scalar(x_148)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_148;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_147);
return x_175;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_137);
lean_dec(x_133);
lean_dec(x_131);
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_124);
lean_dec(x_114);
x_176 = lean_ctor_get(x_142, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_142, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_178 = x_142;
} else {
 lean_dec_ref(x_142);
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
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_180 = lean_ctor_get(x_6, 0);
x_181 = lean_ctor_get(x_6, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_6);
x_182 = lean_nat_add(x_180, x_9);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
x_184 = lean_ctor_get(x_5, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_5, 1);
lean_inc(x_185);
x_186 = lean_ctor_get(x_5, 3);
lean_inc(x_186);
x_187 = lean_ctor_get(x_5, 4);
lean_inc(x_187);
x_188 = lean_ctor_get(x_5, 5);
lean_inc(x_188);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 x_189 = x_5;
} else {
 lean_dec_ref(x_5);
 x_189 = lean_box(0);
}
lean_inc(x_180);
lean_inc(x_185);
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(0, 6, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_184);
lean_ctor_set(x_190, 1, x_185);
lean_ctor_set(x_190, 2, x_180);
lean_ctor_set(x_190, 3, x_186);
lean_ctor_set(x_190, 4, x_187);
lean_ctor_set(x_190, 5, x_188);
x_191 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_190, x_183);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_box(0);
x_195 = lean_mk_string("Lean");
x_196 = lean_name_mk_string(x_194, x_195);
x_197 = lean_mk_string("Parser");
x_198 = lean_name_mk_string(x_196, x_197);
x_199 = lean_mk_string("Term");
x_200 = lean_name_mk_string(x_198, x_199);
x_201 = lean_mk_string("explicit");
lean_inc(x_200);
x_202 = lean_name_mk_string(x_200, x_201);
x_203 = lean_mk_string("@");
lean_inc(x_203);
lean_inc(x_192);
x_204 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_204, 0, x_192);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_mk_string("x");
x_206 = lean_string_utf8_byte_size(x_205);
lean_inc(x_205);
x_207 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_7);
lean_ctor_set(x_207, 2, x_206);
x_208 = lean_name_mk_string(x_194, x_205);
x_209 = l_Lean_addMacroScope(x_185, x_208, x_180);
x_210 = lean_box(0);
lean_inc(x_209);
lean_inc(x_207);
x_211 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_211, 0, x_192);
lean_ctor_set(x_211, 1, x_207);
lean_ctor_set(x_211, 2, x_209);
lean_ctor_set(x_211, 3, x_210);
x_212 = lean_unsigned_to_nat(2u);
x_213 = lean_mk_empty_array_with_capacity(x_212);
lean_inc(x_213);
x_214 = lean_array_push(x_213, x_204);
x_215 = lean_array_push(x_214, x_211);
lean_inc(x_202);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_202);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_array_push(x_4, x_216);
lean_inc(x_190);
x_218 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_217, x_190, x_193);
lean_dec(x_10);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
lean_dec(x_218);
x_221 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_190, x_220);
lean_dec(x_190);
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
lean_inc(x_222);
x_225 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_225, 0, x_222);
lean_ctor_set(x_225, 1, x_203);
x_226 = lean_mk_string("fun");
lean_inc(x_226);
lean_inc(x_200);
x_227 = lean_name_mk_string(x_200, x_226);
lean_inc(x_222);
x_228 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_228, 0, x_222);
lean_ctor_set(x_228, 1, x_226);
x_229 = lean_mk_string("basicFun");
x_230 = lean_name_mk_string(x_200, x_229);
x_231 = lean_mk_string("null");
x_232 = lean_name_mk_string(x_194, x_231);
lean_inc(x_222);
x_233 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_233, 0, x_222);
lean_ctor_set(x_233, 1, x_207);
lean_ctor_set(x_233, 2, x_209);
lean_ctor_set(x_233, 3, x_210);
x_234 = lean_mk_empty_array_with_capacity(x_9);
x_235 = lean_array_push(x_234, x_233);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_232);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_mk_string("=>");
x_238 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_238, 0, x_222);
lean_ctor_set(x_238, 1, x_237);
x_239 = lean_unsigned_to_nat(3u);
x_240 = lean_mk_empty_array_with_capacity(x_239);
x_241 = lean_array_push(x_240, x_236);
x_242 = lean_array_push(x_241, x_238);
x_243 = lean_array_push(x_242, x_219);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_230);
lean_ctor_set(x_244, 1, x_243);
lean_inc(x_213);
x_245 = lean_array_push(x_213, x_228);
x_246 = lean_array_push(x_245, x_244);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_227);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_array_push(x_213, x_225);
x_249 = lean_array_push(x_248, x_247);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_202);
lean_ctor_set(x_250, 1, x_249);
if (lean_is_scalar(x_224)) {
 x_251 = lean_alloc_ctor(0, 2, 0);
} else {
 x_251 = x_224;
}
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_223);
return x_251;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_213);
lean_dec(x_209);
lean_dec(x_207);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_200);
lean_dec(x_190);
x_252 = lean_ctor_get(x_218, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_218, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_254 = x_218;
} else {
 lean_dec_ref(x_218);
 x_254 = lean_box(0);
}
if (lean_is_scalar(x_254)) {
 x_255 = lean_alloc_ctor(1, 2, 0);
} else {
 x_255 = x_254;
}
lean_ctor_set(x_255, 0, x_252);
lean_ctor_set(x_255, 1, x_253);
return x_255;
}
}
}
else
{
lean_object* x_256; uint8_t x_257; 
x_256 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
x_257 = !lean_is_exclusive(x_256);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; size_t x_275; size_t x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; uint8_t x_297; 
x_258 = lean_ctor_get(x_256, 0);
x_259 = lean_ctor_get(x_256, 1);
x_260 = lean_box(0);
x_261 = lean_mk_string("Lean");
x_262 = lean_name_mk_string(x_260, x_261);
x_263 = lean_mk_string("Parser");
x_264 = lean_name_mk_string(x_262, x_263);
x_265 = lean_mk_string("Term");
x_266 = lean_name_mk_string(x_264, x_265);
x_267 = lean_mk_string("match");
lean_inc(x_267);
lean_inc(x_266);
x_268 = lean_name_mk_string(x_266, x_267);
lean_inc(x_258);
x_269 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_269, 0, x_258);
lean_ctor_set(x_269, 1, x_267);
x_270 = lean_mk_string("null");
x_271 = lean_name_mk_string(x_260, x_270);
x_272 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_272);
lean_inc(x_271);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
x_274 = lean_array_get_size(x_4);
x_275 = lean_usize_of_nat(x_274);
lean_dec(x_274);
x_276 = 0;
x_277 = x_4;
lean_inc(x_273);
x_278 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_266, x_273, x_275, x_276, x_277);
x_279 = x_278;
x_280 = lean_box(2);
x_281 = lean_mk_string(",");
x_282 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
x_283 = l_Lean_mkSepArray(x_279, x_282);
lean_dec(x_279);
x_284 = l_Array_append___rarg(x_272, x_283);
lean_dec(x_283);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_271);
lean_ctor_set(x_285, 1, x_284);
x_286 = lean_mk_string("with");
x_287 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_287, 0, x_258);
lean_ctor_set(x_287, 1, x_286);
x_288 = lean_unsigned_to_nat(6u);
x_289 = lean_mk_empty_array_with_capacity(x_288);
x_290 = lean_array_push(x_289, x_269);
lean_inc(x_273);
x_291 = lean_array_push(x_290, x_273);
x_292 = lean_array_push(x_291, x_285);
x_293 = lean_array_push(x_292, x_273);
x_294 = lean_array_push(x_293, x_287);
x_295 = lean_array_push(x_294, x_1);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_268);
lean_ctor_set(x_296, 1, x_295);
x_297 = l_Lean_Syntax_isNone(x_2);
if (x_297 == 0)
{
lean_object* x_298; 
lean_free_object(x_256);
x_298 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_2, x_296, x_5, x_259);
lean_dec(x_5);
return x_298;
}
else
{
lean_dec(x_5);
lean_ctor_set(x_256, 0, x_296);
return x_256;
}
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; size_t x_316; size_t x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; uint8_t x_338; 
x_299 = lean_ctor_get(x_256, 0);
x_300 = lean_ctor_get(x_256, 1);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_256);
x_301 = lean_box(0);
x_302 = lean_mk_string("Lean");
x_303 = lean_name_mk_string(x_301, x_302);
x_304 = lean_mk_string("Parser");
x_305 = lean_name_mk_string(x_303, x_304);
x_306 = lean_mk_string("Term");
x_307 = lean_name_mk_string(x_305, x_306);
x_308 = lean_mk_string("match");
lean_inc(x_308);
lean_inc(x_307);
x_309 = lean_name_mk_string(x_307, x_308);
lean_inc(x_299);
x_310 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_310, 0, x_299);
lean_ctor_set(x_310, 1, x_308);
x_311 = lean_mk_string("null");
x_312 = lean_name_mk_string(x_301, x_311);
x_313 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_313);
lean_inc(x_312);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_313);
x_315 = lean_array_get_size(x_4);
x_316 = lean_usize_of_nat(x_315);
lean_dec(x_315);
x_317 = 0;
x_318 = x_4;
lean_inc(x_314);
x_319 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_307, x_314, x_316, x_317, x_318);
x_320 = x_319;
x_321 = lean_box(2);
x_322 = lean_mk_string(",");
x_323 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
x_324 = l_Lean_mkSepArray(x_320, x_323);
lean_dec(x_320);
x_325 = l_Array_append___rarg(x_313, x_324);
lean_dec(x_324);
x_326 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_326, 0, x_312);
lean_ctor_set(x_326, 1, x_325);
x_327 = lean_mk_string("with");
x_328 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_328, 0, x_299);
lean_ctor_set(x_328, 1, x_327);
x_329 = lean_unsigned_to_nat(6u);
x_330 = lean_mk_empty_array_with_capacity(x_329);
x_331 = lean_array_push(x_330, x_310);
lean_inc(x_314);
x_332 = lean_array_push(x_331, x_314);
x_333 = lean_array_push(x_332, x_326);
x_334 = lean_array_push(x_333, x_314);
x_335 = lean_array_push(x_334, x_328);
x_336 = lean_array_push(x_335, x_1);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_309);
lean_ctor_set(x_337, 1, x_336);
x_338 = l_Lean_Syntax_isNone(x_2);
if (x_338 == 0)
{
lean_object* x_339; 
x_339 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_2, x_337, x_5, x_300);
lean_dec(x_5);
return x_339;
}
else
{
lean_object* x_340; 
lean_dec(x_5);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_337);
lean_ctor_set(x_340, 1, x_300);
return x_340;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(x_5);
x_9 = lean_mk_empty_array_with_capacity(x_4);
x_10 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_5, x_7, x_8, x_9, x_2, x_3);
lean_dec(x_8);
lean_dec(x_7);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMatchAltsWhereDecls(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_expandFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Term");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("fun");
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_mk_string("basicFun");
lean_inc(x_10);
x_19 = lean_name_mk_string(x_10, x_18);
lean_inc(x_17);
x_20 = l_Lean_Syntax_isOfKind(x_17, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
x_21 = lean_mk_string("matchAlts");
x_22 = lean_name_mk_string(x_10, x_21);
lean_inc(x_17);
x_23 = l_Lean_Syntax_isOfKind(x_17, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_box(1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 0;
x_27 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_17, x_26, x_2, x_3);
lean_dec(x_1);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_10);
lean_dec(x_1);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Syntax_getArg(x_17, x_28);
x_30 = lean_unsigned_to_nat(2u);
x_31 = l_Lean_Syntax_getArg(x_17, x_30);
lean_dec(x_17);
x_32 = l_Lean_Syntax_getArgs(x_29);
lean_dec(x_29);
lean_inc(x_2);
x_33 = l_Lean_Elab_Term_expandFunBinders(x_32, x_31, x_2, x_3);
lean_dec(x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
uint8_t x_38; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_33, 0);
lean_dec(x_39);
x_40 = lean_box(1);
lean_ctor_set_tag(x_33, 1);
lean_ctor_set(x_33, 0, x_40);
return x_33;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_33, 1);
lean_inc(x_41);
lean_dec(x_33);
x_42 = lean_box(1);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_33, 1);
lean_inc(x_44);
lean_dec(x_33);
x_45 = lean_ctor_get(x_34, 0);
lean_inc(x_45);
lean_dec(x_34);
x_46 = lean_ctor_get(x_35, 0);
lean_inc(x_46);
lean_dec(x_35);
x_47 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_44);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_11);
x_51 = lean_mk_string("null");
x_52 = lean_name_mk_string(x_4, x_51);
x_53 = lean_mk_empty_array_with_capacity(x_28);
x_54 = l_Array_append___rarg(x_53, x_45);
lean_dec(x_45);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_mk_string("=>");
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_49);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_unsigned_to_nat(3u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_array_push(x_59, x_55);
x_61 = lean_array_push(x_60, x_57);
x_62 = lean_array_push(x_61, x_46);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_19);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_30);
x_65 = lean_array_push(x_64, x_50);
x_66 = lean_array_push(x_65, x_63);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_12);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set(x_47, 0, x_67);
return x_47;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_68 = lean_ctor_get(x_47, 0);
x_69 = lean_ctor_get(x_47, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_47);
lean_inc(x_68);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_11);
x_71 = lean_mk_string("null");
x_72 = lean_name_mk_string(x_4, x_71);
x_73 = lean_mk_empty_array_with_capacity(x_28);
x_74 = l_Array_append___rarg(x_73, x_45);
lean_dec(x_45);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_mk_string("=>");
x_77 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_77, 0, x_68);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_unsigned_to_nat(3u);
x_79 = lean_mk_empty_array_with_capacity(x_78);
x_80 = lean_array_push(x_79, x_75);
x_81 = lean_array_push(x_80, x_77);
x_82 = lean_array_push(x_81, x_46);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_19);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_mk_empty_array_with_capacity(x_30);
x_85 = lean_array_push(x_84, x_70);
x_86 = lean_array_push(x_85, x_83);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_12);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_69);
return x_88;
}
}
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandFun");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFun), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_fun___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 < x_2;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_1, x_3);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Quotation_precheck), 9, 1);
lean_closure_set(x_17, 0, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Elab_Term_Quotation_withNewLocals___rarg(x_4, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l_Lean_Syntax_getId(x_20);
lean_dec(x_20);
x_22 = lean_array_push(x_4, x_21);
x_23 = 1;
x_24 = x_3 + x_23;
x_3 = x_24;
x_4 = x_22;
x_12 = x_19;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
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
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 < x_2;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_uget(x_1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder(x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_get_size(x_17);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1(x_17, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_17);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = x_3 + x_25;
x_3 = x_26;
x_4 = x_23;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_16);
if (x_32 == 0)
{
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_1, x_12);
lean_dec(x_12);
lean_ctor_set(x_8, 3, x_13);
x_14 = l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
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
lean_inc(x_15);
lean_dec(x_8);
x_23 = l_Lean_replaceRef(x_1, x_18);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set(x_24, 4, x_19);
lean_ctor_set(x_24, 5, x_20);
lean_ctor_set(x_24, 6, x_21);
lean_ctor_set(x_24, 7, x_22);
x_25 = l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_24, x_9, x_10);
lean_dec(x_24);
return x_25;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg), 1, 0);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_precheckFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_box(0);
x_11 = lean_mk_string("Lean");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Parser");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("Term");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("fun");
lean_inc(x_16);
x_18 = lean_name_mk_string(x_16, x_17);
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
lean_dec(x_1);
x_23 = lean_mk_string("basicFun");
x_24 = lean_name_mk_string(x_16, x_23);
lean_inc(x_22);
x_25 = l_Lean_Syntax_isOfKind(x_22, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_Syntax_getArg(x_22, x_27);
x_29 = lean_unsigned_to_nat(2u);
x_30 = l_Lean_Syntax_getArg(x_22, x_29);
lean_dec(x_22);
x_31 = l_Lean_Syntax_getArgs(x_28);
lean_dec(x_28);
x_51 = lean_st_ref_get(x_8, x_9);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_7, 4);
lean_inc(x_55);
x_56 = lean_ctor_get(x_7, 5);
lean_inc(x_56);
lean_inc(x_54);
x_57 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_57, 0, x_54);
lean_inc(x_55);
x_58 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_58, 0, x_55);
lean_inc(x_54);
x_59 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_59, 0, x_54);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
x_60 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_60, 0, x_54);
lean_closure_set(x_60, 1, x_55);
lean_closure_set(x_60, 2, x_56);
lean_inc(x_54);
x_61 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_61, 0, x_54);
lean_closure_set(x_61, 1, x_55);
lean_closure_set(x_61, 2, x_56);
x_62 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set(x_62, 2, x_59);
lean_ctor_set(x_62, 3, x_60);
lean_ctor_set(x_62, 4, x_61);
x_63 = x_62;
x_64 = lean_ctor_get(x_7, 3);
lean_inc(x_64);
x_65 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_53);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_ctor_get(x_7, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_7, 2);
lean_inc(x_69);
x_70 = lean_st_ref_get(x_8, x_67);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_environment_main_module(x_54);
x_75 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_75, 0, x_63);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_75, 2, x_66);
lean_ctor_set(x_75, 3, x_68);
lean_ctor_set(x_75, 4, x_69);
lean_ctor_set(x_75, 5, x_64);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_73);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_Elab_Term_expandFunBinders(x_31, x_30, x_75, x_77);
lean_dec(x_31);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_st_ref_take(x_8, x_72);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = !lean_is_exclusive(x_83);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_86 = lean_ctor_get(x_83, 1);
lean_dec(x_86);
lean_ctor_set(x_83, 1, x_81);
x_87 = lean_st_ref_set(x_8, x_83, x_84);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_ctor_get(x_80, 1);
lean_inc(x_89);
lean_dec(x_80);
x_90 = l_List_reverse___rarg(x_89);
x_91 = l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__5(x_90, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_88);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_32 = x_79;
x_33 = x_92;
goto block_50;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_93 = lean_ctor_get(x_83, 0);
x_94 = lean_ctor_get(x_83, 2);
x_95 = lean_ctor_get(x_83, 3);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_83);
x_96 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_81);
lean_ctor_set(x_96, 2, x_94);
lean_ctor_set(x_96, 3, x_95);
x_97 = lean_st_ref_set(x_8, x_96, x_84);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = lean_ctor_get(x_80, 1);
lean_inc(x_99);
lean_dec(x_80);
x_100 = l_List_reverse___rarg(x_99);
x_101 = l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__5(x_100, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_98);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_32 = x_79;
x_33 = x_102;
goto block_50;
}
block_50:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_mk_empty_array_with_capacity(x_27);
x_38 = lean_array_get_size(x_35);
x_39 = lean_usize_of_nat(x_38);
lean_dec(x_38);
x_40 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2(x_35, x_39, x_40, x_37, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_35);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Quotation_precheck), 9, 1);
lean_closure_set(x_44, 0, x_36);
x_45 = l_Lean_Elab_Term_Quotation_withNewLocals___rarg(x_42, x_44, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
lean_dec(x_42);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_36);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("precheckFun");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_precheckFun), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_Quotation_precheckAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_fun___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_box(0);
x_12 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_3, x_12, x_12, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 0;
x_17 = l_Lean_Meta_mkLambdaFVars(x_2, x_14, x_16, x_12, x_6, x_7, x_8, x_9, x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
lean_object* l_Lean_Elab_Term_elabFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_18 = lean_box(0);
x_19 = lean_mk_string("Lean");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Parser");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("Term");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("fun");
lean_inc(x_24);
x_26 = lean_name_mk_string(x_24, x_25);
lean_inc(x_1);
x_27 = l_Lean_Syntax_isOfKind(x_1, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = l_Lean_Syntax_getArg(x_1, x_29);
lean_dec(x_1);
x_31 = lean_mk_string("basicFun");
x_32 = lean_name_mk_string(x_24, x_31);
lean_inc(x_30);
x_33 = l_Lean_Syntax_isOfKind(x_30, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_30);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Lean_Syntax_getArg(x_30, x_35);
x_37 = lean_unsigned_to_nat(2u);
x_38 = l_Lean_Syntax_getArg(x_30, x_37);
lean_dec(x_30);
x_39 = l_Lean_Syntax_getArgs(x_36);
lean_dec(x_36);
x_40 = lean_st_ref_get(x_8, x_9);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_7, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_7, 5);
lean_inc(x_45);
lean_inc(x_43);
x_46 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_46, 0, x_43);
lean_inc(x_44);
x_47 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_47, 0, x_44);
lean_inc(x_43);
x_48 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_48, 0, x_43);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
x_49 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_49, 0, x_43);
lean_closure_set(x_49, 1, x_44);
lean_closure_set(x_49, 2, x_45);
lean_inc(x_43);
x_50 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_50, 0, x_43);
lean_closure_set(x_50, 1, x_44);
lean_closure_set(x_50, 2, x_45);
x_51 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_51, 0, x_46);
lean_ctor_set(x_51, 1, x_47);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_49);
lean_ctor_set(x_51, 4, x_50);
x_52 = x_51;
x_53 = lean_ctor_get(x_7, 3);
lean_inc(x_53);
x_54 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_42);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_7, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_7, 2);
lean_inc(x_58);
x_59 = lean_st_ref_get(x_8, x_56);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_environment_main_module(x_43);
x_64 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_64, 0, x_52);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_55);
lean_ctor_set(x_64, 3, x_57);
lean_ctor_set(x_64, 4, x_58);
lean_ctor_set(x_64, 5, x_53);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_62);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_Elab_Term_expandFunBinders(x_39, x_38, x_64, x_66);
lean_dec(x_39);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_st_ref_take(x_8, x_61);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = !lean_is_exclusive(x_72);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_75 = lean_ctor_get(x_72, 1);
lean_dec(x_75);
lean_ctor_set(x_72, 1, x_70);
x_76 = lean_st_ref_set(x_8, x_72, x_73);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = lean_ctor_get(x_69, 1);
lean_inc(x_78);
lean_dec(x_69);
x_79 = l_List_reverse___rarg(x_78);
x_80 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_79, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_10 = x_68;
x_11 = x_81;
goto block_17;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_82 = lean_ctor_get(x_72, 0);
x_83 = lean_ctor_get(x_72, 2);
x_84 = lean_ctor_get(x_72, 3);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_72);
x_85 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_70);
lean_ctor_set(x_85, 2, x_83);
lean_ctor_set(x_85, 3, x_84);
x_86 = lean_st_ref_set(x_8, x_85, x_73);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_ctor_get(x_69, 1);
lean_inc(x_88);
lean_dec(x_69);
x_89 = l_List_reverse___rarg(x_88);
x_90 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_89, x_3, x_4, x_5, x_6, x_7, x_8, x_87);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_10 = x_68;
x_11 = x_91;
goto block_17;
}
}
}
block_17:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFun___lambda__1), 10, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = l_Lean_Elab_Term_elabFunBinders___rarg(x_13, x_2, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
lean_dec(x_13);
return x_16;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabFun");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFun), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_fun___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_elabLetDeclAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1), 10, 3);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_2, x_11, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg___lambda__1), 9, 3);
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
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_12 = l_Lean_Elab_Term_elabType(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_mk_string("failed to infer 'let' declaration type");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_13, x_1, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (x_2 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_13);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_13);
x_21 = lean_box(0);
x_22 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_23 = l_Lean_Elab_Term_elabTermEnsuringType(x_3, x_20, x_22, x_22, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = 0;
lean_inc(x_7);
lean_inc(x_4);
x_27 = l_Lean_Meta_mkForallFVars(x_4, x_13, x_26, x_22, x_7, x_8, x_9, x_10, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_4);
x_30 = l_Lean_Meta_mkLambdaFVars(x_4, x_24, x_26, x_26, x_7, x_8, x_9, x_10, x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_array_get_size(x_4);
lean_dec(x_4);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
x_38 = lean_array_get_size(x_4);
lean_dec(x_4);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_28);
lean_dec(x_4);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_30;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 0);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_30);
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
lean_dec(x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_27);
if (x_46 == 0)
{
return x_27;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_27, 0);
x_48 = lean_ctor_get(x_27, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_27);
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
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
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
lean_object* x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_54 = lean_ctor_get(x_18, 1);
lean_inc(x_54);
lean_dec(x_18);
x_55 = 0;
x_56 = 1;
lean_inc(x_7);
lean_inc(x_4);
x_57 = l_Lean_Meta_mkForallFVars(x_4, x_13, x_55, x_56, x_7, x_8, x_9, x_10, x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_58);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_58);
x_61 = 0;
x_62 = lean_box(0);
x_63 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_60, x_61, x_62, x_7, x_8, x_9, x_10, x_59);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_array_get_size(x_4);
lean_dec(x_4);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_63, 0, x_68);
return x_63;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_63, 0);
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_63);
x_71 = lean_array_get_size(x_4);
lean_dec(x_4);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_58);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_70);
return x_74;
}
}
else
{
uint8_t x_75; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_75 = !lean_is_exclusive(x_57);
if (x_75 == 0)
{
return x_57;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_57, 0);
x_77 = lean_ctor_get(x_57, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_57);
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
uint8_t x_79; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_12);
if (x_79 == 0)
{
return x_12;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_12, 0);
x_81 = lean_ctor_get(x_12, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_12);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_4);
x_13 = lean_box(0);
x_14 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_12, x_14, x_14, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 0;
lean_inc(x_7);
x_19 = l_Lean_Meta_mkLambdaFVars(x_3, x_16, x_18, x_18, x_7, x_8, x_9, x_10, x_17);
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
x_22 = l_Lean_Meta_isExprDefEq(x_2, x_20, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_mk_string("unexpected error when elaborating 'let'");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_22, 0);
lean_dec(x_30);
x_31 = lean_box(0);
lean_ctor_set(x_22, 0, x_31);
return x_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_dec(x_22);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
uint8_t x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_19);
if (x_39 == 0)
{
return x_19;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_19, 0);
x_41 = lean_ctor_get(x_19, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_19);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_15);
if (x_43 == 0)
{
return x_15;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_15, 0);
x_45 = lean_ctor_get(x_15, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_15);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (x_1 == 0)
{
lean_object* x_14; 
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
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__2), 11, 2);
lean_closure_set(x_16, 0, x_3);
lean_closure_set(x_16, 1, x_4);
x_17 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg(x_5, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_6);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_6);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_6);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
lean_inc(x_7);
lean_inc(x_4);
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Elab_Term_elabTermEnsuringType(x_2, x_3, x_15, x_15, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_19 = l_Lean_Meta_instantiateMVars(x_17, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_array_push(x_23, x_4);
x_25 = 0;
x_26 = l_Lean_Meta_mkLambdaFVars(x_24, x_20, x_25, x_25, x_7, x_8, x_9, x_10, x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
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
else
{
uint8_t x_31; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_box(x_8);
lean_inc(x_4);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed), 11, 3);
lean_closure_set(x_17, 0, x_3);
lean_closure_set(x_17, 1, x_16);
lean_closure_set(x_17, 2, x_4);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_18 = l_Lean_Elab_Term_elabBinders___rarg(x_2, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_49 = lean_box(0);
x_50 = lean_mk_string("Elab");
x_51 = lean_name_mk_string(x_49, x_50);
x_52 = lean_mk_string("let");
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_mk_string("decl");
x_55 = lean_name_mk_string(x_53, x_54);
x_77 = lean_st_ref_get(x_14, x_21);
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
x_56 = x_82;
x_57 = x_81;
goto block_76;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
lean_dec(x_77);
lean_inc(x_55);
x_84 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_55, x_9, x_10, x_11, x_12, x_13, x_14, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_unbox(x_85);
lean_dec(x_85);
x_56 = x_87;
x_57 = x_86;
goto block_76;
}
block_48:
{
if (x_7 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_26 = l_Lean_Syntax_getId(x_1);
x_27 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__4), 11, 3);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_5);
lean_closure_set(x_27, 2, x_6);
x_28 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_22);
x_29 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(x_26, x_28, x_22, x_27, x_9, x_10, x_11, x_12, x_13, x_14, x_25);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_23);
x_32 = l_Lean_mkApp(x_30, x_23);
x_33 = l_Lean_Elab_Term_elabLetDeclAux___lambda__3(x_8, x_24, x_4, x_23, x_22, x_32, x_9, x_10, x_11, x_12, x_13, x_14, x_31);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = l_Lean_Syntax_getId(x_1);
x_39 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__4), 11, 3);
lean_closure_set(x_39, 0, x_1);
lean_closure_set(x_39, 1, x_5);
lean_closure_set(x_39, 2, x_6);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_23);
lean_inc(x_22);
x_40 = l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(x_38, x_22, x_23, x_39, x_9, x_10, x_11, x_12, x_13, x_14, x_25);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Elab_Term_elabLetDeclAux___lambda__3(x_8, x_24, x_4, x_23, x_22, x_41, x_9, x_10, x_11, x_12, x_13, x_14, x_42);
return x_43;
}
else
{
uint8_t x_44; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_40);
if (x_44 == 0)
{
return x_40;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_40, 0);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_40);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
block_76:
{
if (x_56 == 0)
{
lean_dec(x_55);
x_25 = x_57;
goto block_48;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_58 = lean_mk_string("");
x_59 = l_Lean_stringToMessageData(x_58);
lean_dec(x_58);
x_60 = l_Lean_Syntax_getId(x_1);
x_61 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_61, 0, x_60);
lean_inc(x_59);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string(" : ");
x_64 = l_Lean_stringToMessageData(x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
lean_inc(x_22);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_22);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_string(" := ");
x_69 = l_Lean_stringToMessageData(x_68);
lean_dec(x_68);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_69);
lean_inc(x_23);
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_23);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_59);
x_74 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_55, x_73, x_9, x_10, x_11, x_12, x_13, x_14, x_57);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_25 = x_75;
goto block_48;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_18);
if (x_88 == 0)
{
return x_18;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_18, 0);
x_90 = lean_ctor_get(x_18, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_18);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = l_Lean_Elab_Term_elabLetDeclAux___lambda__3(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_7);
lean_dec(x_7);
x_17 = lean_unbox(x_8);
lean_dec(x_8);
x_18 = l_Lean_Elab_Term_elabLetDeclAux(x_1, x_2, x_3, x_4, x_5, x_6, x_16, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_18;
}
}
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = l_Lean_Elab_Term_expandOptType(x_1, x_8);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(4u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_mkLetIdDeclView___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_mkLetIdDeclView(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_unsigned_to_nat(3u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = 0;
x_7 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_5, x_6, x_2, x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_box(0);
x_11 = lean_mk_string("Lean");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Parser");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("Term");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("letIdDecl");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = lean_mk_string(" := ");
x_26 = l_Lean_mkAtomFrom(x_1, x_25);
x_27 = lean_unsigned_to_nat(5u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_array_push(x_28, x_20);
x_30 = lean_array_push(x_29, x_22);
x_31 = lean_array_push(x_30, x_24);
x_32 = lean_array_push(x_31, x_26);
x_33 = lean_array_push(x_32, x_9);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_18);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_7, 0, x_34);
return x_7;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_35 = lean_ctor_get(x_7, 0);
x_36 = lean_ctor_get(x_7, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_7);
x_37 = lean_box(0);
x_38 = lean_mk_string("Lean");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("Parser");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("Term");
x_43 = lean_name_mk_string(x_41, x_42);
x_44 = lean_mk_string("letIdDecl");
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_Lean_Syntax_getArg(x_1, x_46);
x_48 = lean_unsigned_to_nat(1u);
x_49 = l_Lean_Syntax_getArg(x_1, x_48);
x_50 = lean_unsigned_to_nat(2u);
x_51 = l_Lean_Syntax_getArg(x_1, x_50);
x_52 = lean_mk_string(" := ");
x_53 = l_Lean_mkAtomFrom(x_1, x_52);
x_54 = lean_unsigned_to_nat(5u);
x_55 = lean_mk_empty_array_with_capacity(x_54);
x_56 = lean_array_push(x_55, x_47);
x_57 = lean_array_push(x_56, x_49);
x_58 = lean_array_push(x_57, x_51);
x_59 = lean_array_push(x_58, x_53);
x_60 = lean_array_push(x_59, x_35);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_45);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_36);
return x_62;
}
}
}
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandLetEqnsDecl(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclCore_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (x_1 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_6, x_9);
return x_10;
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
if (x_2 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_3, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg(x_7, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_13, x_22);
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
lean_inc(x_23);
x_26 = l_Lean_Syntax_getKind(x_23);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Term");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("letIdDecl");
lean_inc(x_33);
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_name_eq(x_26, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_mk_string("letPatDecl");
lean_inc(x_33);
x_38 = lean_name_mk_string(x_33, x_37);
x_39 = lean_name_eq(x_26, x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_35);
lean_dec(x_25);
x_40 = lean_mk_string("letEqnsDecl");
x_41 = lean_name_mk_string(x_33, x_40);
x_42 = lean_name_eq(x_26, x_41);
lean_dec(x_41);
lean_dec(x_26);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_43 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_11);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_44 = lean_st_ref_get(x_10, x_11);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_9, 4);
lean_inc(x_48);
x_49 = lean_ctor_get(x_9, 5);
lean_inc(x_49);
lean_inc(x_47);
x_50 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_50, 0, x_47);
lean_inc(x_48);
x_51 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_51, 0, x_48);
lean_inc(x_47);
x_52 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_52, 0, x_47);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
x_53 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_53, 0, x_47);
lean_closure_set(x_53, 1, x_48);
lean_closure_set(x_53, 2, x_49);
lean_inc(x_47);
x_54 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_54, 0, x_47);
lean_closure_set(x_54, 1, x_48);
lean_closure_set(x_54, 2, x_49);
x_55 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_51);
lean_ctor_set(x_55, 2, x_52);
lean_ctor_set(x_55, 3, x_53);
lean_ctor_set(x_55, 4, x_54);
x_56 = x_55;
x_57 = lean_ctor_get(x_9, 3);
lean_inc(x_57);
x_58 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_46);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_ctor_get(x_9, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_9, 2);
lean_inc(x_62);
x_63 = lean_st_ref_get(x_10, x_60);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_environment_main_module(x_47);
x_68 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_68, 0, x_56);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_59);
lean_ctor_set(x_68, 3, x_61);
lean_ctor_set(x_68, 4, x_62);
lean_ctor_set(x_68, 5, x_57);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_Lean_Elab_Term_expandLetEqnsDecl(x_23, x_68, x_70);
lean_dec(x_23);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_st_ref_take(x_10, x_65);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_79 = lean_ctor_get(x_76, 1);
lean_dec(x_79);
lean_ctor_set(x_76, 1, x_74);
x_80 = lean_st_ref_set(x_10, x_76, x_77);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = lean_ctor_get(x_73, 1);
lean_inc(x_82);
lean_dec(x_73);
x_83 = l_List_reverse___rarg(x_82);
x_84 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_83, x_5, x_6, x_7, x_8, x_9, x_10, x_81);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_14 = x_72;
x_15 = x_85;
goto block_21;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_86 = lean_ctor_get(x_76, 0);
x_87 = lean_ctor_get(x_76, 2);
x_88 = lean_ctor_get(x_76, 3);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_76);
x_89 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_74);
lean_ctor_set(x_89, 2, x_87);
lean_ctor_set(x_89, 3, x_88);
x_90 = lean_st_ref_set(x_10, x_89, x_77);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_ctor_get(x_73, 1);
lean_inc(x_92);
lean_dec(x_73);
x_93 = l_List_reverse___rarg(x_92);
x_94 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_93, x_5, x_6, x_7, x_8, x_9, x_10, x_91);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_14 = x_72;
x_15 = x_95;
goto block_21;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_26);
lean_dec(x_13);
x_96 = l_Lean_Syntax_getArg(x_23, x_22);
x_97 = lean_unsigned_to_nat(2u);
x_98 = l_Lean_Syntax_getArg(x_23, x_97);
x_99 = l_Lean_Elab_Term_expandOptType(x_1, x_98);
lean_dec(x_98);
x_100 = lean_unsigned_to_nat(4u);
x_101 = l_Lean_Syntax_getArg(x_23, x_100);
lean_dec(x_23);
x_102 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_9, x_10, x_11);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_mk_string("let");
lean_inc(x_111);
lean_inc(x_33);
x_112 = lean_name_mk_string(x_33, x_111);
lean_inc(x_103);
x_113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_113, 0, x_103);
lean_ctor_set(x_113, 1, x_111);
x_114 = lean_mk_string("letDecl");
lean_inc(x_33);
x_115 = lean_name_mk_string(x_33, x_114);
x_116 = lean_mk_string("x");
x_117 = lean_string_utf8_byte_size(x_116);
lean_inc(x_116);
x_118 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_22);
lean_ctor_set(x_118, 2, x_117);
x_119 = lean_name_mk_string(x_27, x_116);
x_120 = l_Lean_addMacroScope(x_109, x_119, x_106);
x_121 = lean_box(0);
lean_inc(x_103);
x_122 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_122, 0, x_103);
lean_ctor_set(x_122, 1, x_118);
lean_ctor_set(x_122, 2, x_120);
lean_ctor_set(x_122, 3, x_121);
x_123 = lean_mk_string("null");
x_124 = lean_name_mk_string(x_27, x_123);
x_125 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_124);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_mk_string("typeSpec");
lean_inc(x_33);
x_128 = lean_name_mk_string(x_33, x_127);
x_129 = lean_mk_string(":");
lean_inc(x_103);
x_130 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_130, 0, x_103);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_mk_empty_array_with_capacity(x_97);
lean_inc(x_131);
x_132 = lean_array_push(x_131, x_130);
x_133 = lean_array_push(x_132, x_99);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_128);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_135);
x_136 = lean_array_push(x_135, x_134);
lean_inc(x_124);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_124);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_mk_string(":=");
lean_inc(x_103);
x_139 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_139, 0, x_103);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_unsigned_to_nat(5u);
x_141 = lean_mk_empty_array_with_capacity(x_140);
lean_inc(x_122);
x_142 = lean_array_push(x_141, x_122);
lean_inc(x_126);
x_143 = lean_array_push(x_142, x_126);
x_144 = lean_array_push(x_143, x_137);
x_145 = lean_array_push(x_144, x_139);
x_146 = lean_array_push(x_145, x_101);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_35);
lean_ctor_set(x_147, 1, x_146);
lean_inc(x_135);
x_148 = lean_array_push(x_135, x_147);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_115);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_mk_string(";");
lean_inc(x_103);
x_151 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_151, 0, x_103);
lean_ctor_set(x_151, 1, x_150);
lean_inc(x_135);
x_152 = lean_array_push(x_135, x_151);
lean_inc(x_124);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_124);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_string("match");
lean_inc(x_154);
lean_inc(x_33);
x_155 = lean_name_mk_string(x_33, x_154);
lean_inc(x_103);
x_156 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_156, 0, x_103);
lean_ctor_set(x_156, 1, x_154);
x_157 = lean_mk_string("matchDiscr");
lean_inc(x_33);
x_158 = lean_name_mk_string(x_33, x_157);
lean_inc(x_126);
x_159 = lean_array_push(x_131, x_126);
x_160 = lean_array_push(x_159, x_122);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_160);
lean_inc(x_135);
x_162 = lean_array_push(x_135, x_161);
lean_inc(x_124);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_124);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_mk_string("with");
lean_inc(x_103);
x_165 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_165, 0, x_103);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_mk_string("matchAlts");
lean_inc(x_33);
x_167 = lean_name_mk_string(x_33, x_166);
x_168 = lean_mk_string("matchAlt");
lean_inc(x_33);
x_169 = lean_name_mk_string(x_33, x_168);
x_170 = lean_mk_string("|");
lean_inc(x_103);
x_171 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_171, 0, x_103);
lean_ctor_set(x_171, 1, x_170);
lean_inc(x_135);
x_172 = lean_array_push(x_135, x_96);
lean_inc(x_124);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_124);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_string("=>");
x_175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_175, 0, x_103);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_mk_empty_array_with_capacity(x_100);
lean_inc(x_176);
x_177 = lean_array_push(x_176, x_171);
x_178 = lean_array_push(x_177, x_173);
x_179 = lean_array_push(x_178, x_175);
x_180 = lean_array_push(x_179, x_25);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_169);
lean_ctor_set(x_181, 1, x_180);
lean_inc(x_135);
x_182 = lean_array_push(x_135, x_181);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_124);
lean_ctor_set(x_183, 1, x_182);
x_184 = lean_array_push(x_135, x_183);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_167);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_unsigned_to_nat(6u);
x_187 = lean_mk_empty_array_with_capacity(x_186);
x_188 = lean_array_push(x_187, x_156);
lean_inc(x_126);
x_189 = lean_array_push(x_188, x_126);
x_190 = lean_array_push(x_189, x_163);
x_191 = lean_array_push(x_190, x_126);
x_192 = lean_array_push(x_191, x_165);
x_193 = lean_array_push(x_192, x_185);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_155);
lean_ctor_set(x_194, 1, x_193);
x_195 = lean_array_push(x_176, x_113);
x_196 = lean_array_push(x_195, x_149);
x_197 = lean_array_push(x_196, x_153);
x_198 = lean_array_push(x_197, x_194);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_112);
lean_ctor_set(x_199, 1, x_198);
if (x_3 == 0)
{
if (x_4 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_200 = lean_mk_string("let_fun");
x_201 = lean_name_mk_string(x_33, x_200);
x_202 = l_Lean_Syntax_setKind(x_199, x_201);
lean_inc(x_202);
lean_inc(x_1);
x_203 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_203, 0, x_1);
lean_closure_set(x_203, 1, x_202);
lean_closure_set(x_203, 2, x_2);
x_204 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_202, x_203, x_5, x_6, x_7, x_8, x_9, x_10, x_110);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_199);
lean_dec(x_33);
x_205 = lean_mk_string("Lean.Elab.Binders");
x_206 = lean_mk_string("Lean.Elab.Term.elabLetDeclCore");
x_207 = lean_unsigned_to_nat(623u);
x_208 = lean_unsigned_to_nat(24u);
x_209 = lean_mk_string("unreachable code has been reached");
x_210 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_205, x_206, x_207, x_208, x_209);
lean_dec(x_209);
lean_dec(x_206);
lean_dec(x_205);
x_211 = l_Lean_instInhabitedSyntax;
x_212 = lean_panic_fn(x_211, x_210);
lean_inc(x_212);
lean_inc(x_1);
x_213 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_213, 0, x_1);
lean_closure_set(x_213, 1, x_212);
lean_closure_set(x_213, 2, x_2);
x_214 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_212, x_213, x_5, x_6, x_7, x_8, x_9, x_10, x_110);
return x_214;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_215; lean_object* x_216; 
lean_dec(x_33);
lean_inc(x_199);
lean_inc(x_1);
x_215 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_215, 0, x_1);
lean_closure_set(x_215, 1, x_199);
lean_closure_set(x_215, 2, x_2);
x_216 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_199, x_215, x_5, x_6, x_7, x_8, x_9, x_10, x_110);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_217 = lean_mk_string("let_delayed");
x_218 = lean_name_mk_string(x_33, x_217);
x_219 = l_Lean_Syntax_setKind(x_199, x_218);
lean_inc(x_219);
lean_inc(x_1);
x_220 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_220, 0, x_1);
lean_closure_set(x_220, 1, x_219);
lean_closure_set(x_220, 2, x_2);
x_221 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_219, x_220, x_5, x_6, x_7, x_8, x_9, x_10, x_110);
return x_221;
}
}
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_35);
lean_dec(x_33);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_1);
x_222 = l_Lean_Elab_Term_mkLetIdDeclView(x_23);
lean_dec(x_23);
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
x_225 = lean_ctor_get(x_222, 2);
lean_inc(x_225);
x_226 = lean_ctor_get(x_222, 3);
lean_inc(x_226);
lean_dec(x_222);
x_227 = l_Lean_Elab_Term_elabLetDeclAux(x_223, x_224, x_225, x_226, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_227;
}
block_21:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_setArg(x_13, x_16, x_14);
lean_inc(x_1);
x_18 = l_Lean_Syntax_setArg(x_1, x_12, x_17);
lean_inc(x_18);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_18);
lean_closure_set(x_19, 2, x_2);
x_20 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_18, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabLetDecl");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDecl), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_let___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabLetFunDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
x_11 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabLetFunDecl");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetFunDecl), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_let__fun___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabLetDelayedDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabLetDelayedDecl");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDelayedDecl), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_let__delayed___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_5600_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Elab");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("let");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_Lean_registerTraceClass(x_6, x_1);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Quotation_Precheck(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Binders(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Quotation_Precheck(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1);
res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_checkBinderAnnotations = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_checkBinderAnnotations);
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__1);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__2);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabForall(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_FunBinders_State_fvars___default = _init_l_Lean_Elab_Term_FunBinders_State_fvars___default();
lean_mark_persistent(l_Lean_Elab_Term_FunBinders_State_fvars___default);
l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default = _init_l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default();
lean_mark_persistent(l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default);
l___regBuiltin_Lean_Elab_Term_expandFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun___closed__1);
l___regBuiltin_Lean_Elab_Term_expandFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun___closed__2);
l___regBuiltin_Lean_Elab_Term_expandFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1);
l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2);
l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_precheckFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__1);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__2);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_5600_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
