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
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__6;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_withNewLocals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__4;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_term_____x5b___x3a___x5d___closed__2;
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__3;
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__1;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__2(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__25;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_letEqnsDecl___closed__2;
lean_object* l_Lean_Elab_Term_elabArrow___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__5;
lean_object* l_Lean_Elab_Term_elabLetDeclAux_match__1(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__1;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
extern lean_object* l_Lean_Parser_Term_explicit___elambda__1___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__29;
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2___boxed(lean_object**);
extern lean_object* l_Lean_Parser_Tactic_intro___closed__4;
lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
extern lean_object* l_Lean_Parser_Term_forall___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2;
extern lean_object* l_Lean_identKind___closed__2;
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_letPatDecl___closed__2;
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__6;
lean_object* l_Lean_Elab_Term_expandWhereDecls(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tryUnificationHints_tryCandidate___closed__3;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__8;
extern lean_object* l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1;
extern lean_object* l_Lean_instInhabitedParserDescr___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
extern lean_object* l_Std_PersistentArray_empty___closed__1;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__4;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2;
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3;
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__2;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__22;
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__18;
lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__15;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDelayedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___boxed(lean_object**);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6;
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_object* lean_string_utf8_byte_size(lean_object*);
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
extern lean_object* l_Lean_Parser_Term_whereDecls_formatter___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__2;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutPostponingUniverseConstraints___at_Lean_Elab_Term_elabBinders___spec__1(lean_object*);
extern lean_object* l_Lean_Parser_Term_binderTactic___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__4;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_precheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getOptParamDefault_x3f___closed__2;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__2;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__3;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_forInUnsafe_loop___at___private_Init_NotationExtra_0__Lean_mkHintBody___spec__1___closed__2;
lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_groupKind___closed__2;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__14;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__28;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__3;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__1;
extern lean_object* l_Lean_Parser_Term_instBinder___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__2;
lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkArrow___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3;
lean_object* l_Lean_Elab_Term_mkLetIdDeclView___boxed(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__4;
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14133____closed__8;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__5;
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_5600_(lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102_(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__20;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setKind(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfoCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_precheckAttribute;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at_Lean_ppExpr___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_autoBoundImplicitLocal___closed__1;
lean_object* l_Lean_Elab_Term_expandFun(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4;
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
extern lean_object* l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__10;
lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOptType(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__24;
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__7;
extern lean_object* l_termIfLet___x3a_x3d__Then__Else_____closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_let__delayed___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__19;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__2(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
extern lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3___closed__5;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
extern lean_object* l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5;
lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_71____closed__2;
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15488____closed__2;
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__3(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1;
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkArrow___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1;
extern lean_object* l_Lean_Parser_Tactic_inductionAlt___closed__5;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_DiscrTree_Trie_format___rarg___closed__1;
lean_object* l_Lean_Elab_Term_expandOptType___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__26;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_928____closed__7;
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instQuoteName___closed__2;
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__4;
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3;
extern lean_object* l_Lean_Elab_Term_instMonadQuotationTermElabM;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1217____closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
extern lean_object* l_Lean_identKind;
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
extern lean_object* l_Lean_Name_instReprName___closed__1;
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_checkBinderAnnotations;
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default;
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__16;
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop(lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getOptParamDefault_x3f___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__1(lean_object*);
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__3;
extern lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_object* l_Lean_Elab_Term_elabLetDeclCore_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__12;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1;
lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic_match__1(lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_elabLetDeclAux___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2;
lean_object* l_Lean_Elab_Term_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__3;
lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__23;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__1;
extern lean_object* l_Lean_Parser_Term_binderDefault___elambda__1___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_let__fun___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__3;
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_4____spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
extern lean_object* l_Lean_expandExplicitBindersAux_loop___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun(lean_object*);
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__17;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__5;
lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__4;
extern lean_object* l_Lean_expandExplicitBindersAux_loop___closed__2;
extern lean_object* l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__11;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_expandFunBinders_loop_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3;
lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__1;
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_intro___closed__3;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__3;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType___boxed(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__2;
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__2;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3;
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__21;
lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_forall___elambda__1___closed__1;
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_FunBinders_State_fvars___default;
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__3;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_object*);
lean_object* l_Lean_Meta_setPostponed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
lean_object* l_Lean_Meta_processPostponed(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1;
lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_precheckFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__13;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__27;
extern lean_object* l_Lean_Parser_Term_letRecDecl___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__9;
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
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__2;
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_12, x_13);
lean_ctor_set(x_9, 1, x_14);
x_15 = lean_st_ref_set(x_6, x_9, x_10);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_1, 4);
lean_dec(x_18);
lean_ctor_set(x_1, 4, x_12);
x_19 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_16);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_21);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_Meta_mkArrow___closed__2;
x_26 = l_Lean_addMacroScope(x_20, x_25, x_24);
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
x_29 = l_Lean_Meta_mkArrow___closed__2;
x_30 = l_Lean_addMacroScope(x_20, x_29, x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_ctor_get(x_1, 1);
x_34 = lean_ctor_get(x_1, 2);
x_35 = lean_ctor_get(x_1, 3);
x_36 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
x_37 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 1);
x_38 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 2);
x_39 = lean_ctor_get(x_1, 5);
x_40 = lean_ctor_get(x_1, 6);
x_41 = lean_ctor_get(x_1, 7);
x_42 = lean_ctor_get_uint8(x_1, sizeof(void*)*8 + 3);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_1);
x_43 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_33);
lean_ctor_set(x_43, 2, x_34);
lean_ctor_set(x_43, 3, x_35);
lean_ctor_set(x_43, 4, x_12);
lean_ctor_set(x_43, 5, x_39);
lean_ctor_set(x_43, 6, x_40);
lean_ctor_set(x_43, 7, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*8, x_36);
lean_ctor_set_uint8(x_43, sizeof(void*)*8 + 1, x_37);
lean_ctor_set_uint8(x_43, sizeof(void*)*8 + 2, x_38);
lean_ctor_set_uint8(x_43, sizeof(void*)*8 + 3, x_42);
x_44 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_16);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Elab_Term_getCurrMacroScope(x_43, x_2, x_3, x_4, x_5, x_6, x_46);
lean_dec(x_43);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_51 = l_Lean_Meta_mkArrow___closed__2;
x_52 = l_Lean_addMacroScope(x_45, x_51, x_48);
if (lean_is_scalar(x_50)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_50;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_49);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_54 = lean_ctor_get(x_9, 0);
x_55 = lean_ctor_get(x_9, 1);
x_56 = lean_ctor_get(x_9, 2);
x_57 = lean_ctor_get(x_9, 3);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_9);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_nat_add(x_55, x_58);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_60, 2, x_56);
lean_ctor_set(x_60, 3, x_57);
x_61 = lean_st_ref_set(x_6, x_60, x_10);
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
x_83 = l_Lean_Meta_mkArrow___closed__2;
x_84 = l_Lean_addMacroScope(x_77, x_83, x_80);
if (lean_is_scalar(x_82)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_82;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_81);
return x_85;
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
lean_object* x_9; uint8_t x_10; 
x_9 = l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
lean_inc(x_1);
x_10 = l_Lean_Syntax_isOfKind(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_12;
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
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inst");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
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
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_st_ref_take(x_7, x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_17, x_18);
lean_ctor_set(x_14, 1, x_19);
x_20 = lean_st_ref_set(x_7, x_14, x_15);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = !lean_is_exclusive(x_2);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_2, 4);
lean_dec(x_23);
lean_ctor_set(x_2, 4, x_17);
x_24 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_21);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
x_31 = l_Lean_addMacroScope(x_25, x_30, x_29);
x_32 = l_Lean_mkIdentFrom(x_1, x_31);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
x_36 = l_Lean_addMacroScope(x_25, x_35, x_33);
x_37 = l_Lean_mkIdentFrom(x_1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_34);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_39 = lean_ctor_get(x_2, 0);
x_40 = lean_ctor_get(x_2, 1);
x_41 = lean_ctor_get(x_2, 2);
x_42 = lean_ctor_get(x_2, 3);
x_43 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_44 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_45 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_46 = lean_ctor_get(x_2, 5);
x_47 = lean_ctor_get(x_2, 6);
x_48 = lean_ctor_get(x_2, 7);
x_49 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_2);
x_50 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_50, 0, x_39);
lean_ctor_set(x_50, 1, x_40);
lean_ctor_set(x_50, 2, x_41);
lean_ctor_set(x_50, 3, x_42);
lean_ctor_set(x_50, 4, x_17);
lean_ctor_set(x_50, 5, x_46);
lean_ctor_set(x_50, 6, x_47);
lean_ctor_set(x_50, 7, x_48);
lean_ctor_set_uint8(x_50, sizeof(void*)*8, x_43);
lean_ctor_set_uint8(x_50, sizeof(void*)*8 + 1, x_44);
lean_ctor_set_uint8(x_50, sizeof(void*)*8 + 2, x_45);
lean_ctor_set_uint8(x_50, sizeof(void*)*8 + 3, x_49);
x_51 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_21);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Elab_Term_getCurrMacroScope(x_50, x_3, x_4, x_5, x_6, x_7, x_53);
lean_dec(x_50);
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
x_58 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
x_59 = l_Lean_addMacroScope(x_52, x_58, x_55);
x_60 = l_Lean_mkIdentFrom(x_1, x_59);
if (lean_is_scalar(x_57)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_57;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_56);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; uint8_t x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_62 = lean_ctor_get(x_14, 0);
x_63 = lean_ctor_get(x_14, 1);
x_64 = lean_ctor_get(x_14, 2);
x_65 = lean_ctor_get(x_14, 3);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_14);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_add(x_63, x_66);
x_68 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_64);
lean_ctor_set(x_68, 3, x_65);
x_69 = lean_st_ref_set(x_7, x_68, x_15);
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
x_91 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
x_92 = l_Lean_addMacroScope(x_85, x_91, x_88);
x_93 = l_Lean_mkIdentFrom(x_1, x_92);
if (lean_is_scalar(x_90)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_90;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_89);
return x_94;
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
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Array.push");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("push");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid auto tactic, antiquotation is not allowed");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_69; lean_object* x_77; uint8_t x_78; 
x_77 = l_Lean_nullKind;
x_78 = lean_name_eq(x_6, x_77);
if (x_78 == 0)
{
lean_object* x_79; 
x_79 = lean_box(0);
x_14 = x_79;
goto block_68;
}
else
{
uint8_t x_80; 
x_80 = l_Lean_Syntax_isAntiquotSuffixSplice(x_1);
if (x_80 == 0)
{
uint8_t x_81; 
x_81 = l_Lean_Syntax_isAntiquotSplice(x_1);
if (x_81 == 0)
{
lean_object* x_82; 
x_82 = lean_box(0);
x_14 = x_82;
goto block_68;
}
else
{
lean_object* x_83; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_box(0);
x_69 = x_83;
goto block_76;
}
}
else
{
lean_object* x_84; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_84 = lean_box(0);
x_69 = x_84;
goto block_76;
}
}
block_68:
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
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4;
x_28 = lean_name_mk_string(x_2, x_27);
lean_inc(x_28);
x_29 = l_Lean_addMacroScope(x_26, x_28, x_22);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_3);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_4);
x_32 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3;
x_33 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_33, 0, x_19);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_29);
lean_ctor_set(x_33, 3, x_31);
x_34 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_35 = lean_array_push(x_34, x_5);
x_36 = lean_array_push(x_35, x_16);
x_37 = l_Lean_nullKind___closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = lean_array_push(x_34, x_33);
x_40 = lean_array_push(x_39, x_38);
x_41 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_24, 0, x_43);
return x_24;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_44 = lean_ctor_get(x_24, 0);
x_45 = lean_ctor_get(x_24, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_24);
x_46 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4;
x_47 = lean_name_mk_string(x_2, x_46);
lean_inc(x_47);
x_48 = l_Lean_addMacroScope(x_44, x_47, x_22);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_3);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_4);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3;
x_52 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_52, 0, x_19);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_52, 2, x_48);
lean_ctor_set(x_52, 3, x_50);
x_53 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_54 = lean_array_push(x_53, x_5);
x_55 = lean_array_push(x_54, x_16);
x_56 = l_Lean_nullKind___closed__2;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_array_push(x_53, x_52);
x_59 = lean_array_push(x_58, x_57);
x_60 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_45);
return x_63;
}
}
else
{
uint8_t x_64; 
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
x_64 = !lean_is_exclusive(x_15);
if (x_64 == 0)
{
return x_15;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_15, 0);
x_66 = lean_ctor_get(x_15, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_15);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
block_76:
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_dec(x_69);
x_70 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6;
x_71 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(x_1, x_70, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
return x_71;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_71);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
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
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Binders");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.quoteAutoTactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__2;
x_3 = lean_unsigned_to_nat(59u);
x_4 = lean_unsigned_to_nat(28u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_tryUnificationHints_tryCandidate___closed__3;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__4;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Array.empty");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__6;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__6;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__7;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("empty");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_term_____x5b___x3a___x5d___closed__2;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__10;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Syntax.node");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__13;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__13;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__14;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Syntax_addPrec___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__16;
x_2 = l_Lean_Meta_DiscrTree_Trie_format___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1;
x_2 = l_Lean_Meta_DiscrTree_Trie_format___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__18;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mkAtom");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__22;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Syntax_addPrec___closed__2;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__25;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__26;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid auto tactic, identifier is not allowed");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__28;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_10 = l_Lean_Elab_Term_quoteAutoTactic___closed__3;
x_11 = lean_panic_fn(x_9, x_10);
x_12 = lean_apply_7(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = l_Lean_Syntax_isAntiquot(x_1);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_17 = lean_ctor_get(x_1, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 0);
lean_dec(x_18);
x_19 = l_Lean_Elab_Term_instMonadQuotationTermElabM;
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_quoteAutoTactic___closed__10;
x_31 = l_Lean_addMacroScope(x_28, x_30, x_25);
x_32 = lean_box(0);
x_33 = l_Lean_Elab_Term_quoteAutoTactic___closed__8;
x_34 = l_Lean_Elab_Term_quoteAutoTactic___closed__12;
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_31);
lean_ctor_set(x_35, 3, x_34);
x_36 = lean_array_get_size(x_14);
x_37 = lean_usize_of_nat(x_36);
lean_dec(x_36);
x_38 = 0;
x_39 = l_Lean_Elab_Term_quoteAutoTactic___closed__5;
x_40 = l_Array_term_____x5b___x3a___x5d___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_13, x_39, x_20, x_40, x_32, x_32, x_14, x_37, x_38, x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_46);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_49);
lean_dec(x_7);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = l_Lean_Elab_Term_quoteAutoTactic___closed__17;
x_54 = l_Lean_addMacroScope(x_52, x_53, x_48);
x_55 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
x_56 = l_Lean_Elab_Term_quoteAutoTactic___closed__20;
x_57 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_57, 0, x_45);
lean_ctor_set(x_57, 1, x_55);
lean_ctor_set(x_57, 2, x_54);
lean_ctor_set(x_57, 3, x_56);
lean_inc(x_13);
x_58 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_32, x_13);
x_59 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_60 = lean_array_push(x_59, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_61 = l___private_Init_Meta_0__Lean_quoteNameMk(x_13);
x_62 = lean_array_push(x_59, x_61);
x_63 = lean_array_push(x_62, x_42);
x_64 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_63);
lean_ctor_set(x_1, 0, x_64);
x_65 = lean_array_push(x_60, x_1);
x_66 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
lean_ctor_set(x_50, 0, x_67);
return x_50;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_13);
x_68 = lean_ctor_get(x_58, 0);
lean_inc(x_68);
lean_dec(x_58);
x_69 = l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
x_70 = l_String_intercalate(x_69, x_68);
x_71 = l_Lean_Name_instReprName___closed__1;
x_72 = lean_string_append(x_71, x_70);
lean_dec(x_70);
x_73 = l_Lean_nameLitKind;
x_74 = lean_box(2);
x_75 = l_Lean_Syntax_mkLit(x_73, x_72, x_74);
x_76 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_77 = lean_array_push(x_76, x_75);
x_78 = l_Lean_instQuoteName___closed__2;
lean_ctor_set(x_1, 1, x_77);
lean_ctor_set(x_1, 0, x_78);
x_79 = lean_array_push(x_59, x_1);
x_80 = lean_array_push(x_79, x_42);
x_81 = l_Lean_nullKind___closed__2;
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = lean_array_push(x_60, x_82);
x_84 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
lean_ctor_set(x_50, 0, x_85);
return x_50;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_86 = lean_ctor_get(x_50, 0);
x_87 = lean_ctor_get(x_50, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_50);
x_88 = l_Lean_Elab_Term_quoteAutoTactic___closed__17;
x_89 = l_Lean_addMacroScope(x_86, x_88, x_48);
x_90 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
x_91 = l_Lean_Elab_Term_quoteAutoTactic___closed__20;
x_92 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_92, 0, x_45);
lean_ctor_set(x_92, 1, x_90);
lean_ctor_set(x_92, 2, x_89);
lean_ctor_set(x_92, 3, x_91);
lean_inc(x_13);
x_93 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_32, x_13);
x_94 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_95 = lean_array_push(x_94, x_92);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_96 = l___private_Init_Meta_0__Lean_quoteNameMk(x_13);
x_97 = lean_array_push(x_94, x_96);
x_98 = lean_array_push(x_97, x_42);
x_99 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_98);
lean_ctor_set(x_1, 0, x_99);
x_100 = lean_array_push(x_95, x_1);
x_101 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_87);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_13);
x_104 = lean_ctor_get(x_93, 0);
lean_inc(x_104);
lean_dec(x_93);
x_105 = l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
x_106 = l_String_intercalate(x_105, x_104);
x_107 = l_Lean_Name_instReprName___closed__1;
x_108 = lean_string_append(x_107, x_106);
lean_dec(x_106);
x_109 = l_Lean_nameLitKind;
x_110 = lean_box(2);
x_111 = l_Lean_Syntax_mkLit(x_109, x_108, x_110);
x_112 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_113 = lean_array_push(x_112, x_111);
x_114 = l_Lean_instQuoteName___closed__2;
lean_ctor_set(x_1, 1, x_113);
lean_ctor_set(x_1, 0, x_114);
x_115 = lean_array_push(x_94, x_1);
x_116 = lean_array_push(x_115, x_42);
x_117 = l_Lean_nullKind___closed__2;
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
x_119 = lean_array_push(x_95, x_118);
x_120 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_87);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_123 = !lean_is_exclusive(x_41);
if (x_123 == 0)
{
return x_41;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_41, 0);
x_125 = lean_ctor_get(x_41, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_41);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; size_t x_145; size_t x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_1);
x_127 = l_Lean_Elab_Term_instMonadQuotationTermElabM;
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_131);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_135 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = l_Lean_Elab_Term_quoteAutoTactic___closed__10;
x_139 = l_Lean_addMacroScope(x_136, x_138, x_133);
x_140 = lean_box(0);
x_141 = l_Lean_Elab_Term_quoteAutoTactic___closed__8;
x_142 = l_Lean_Elab_Term_quoteAutoTactic___closed__12;
x_143 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_143, 0, x_130);
lean_ctor_set(x_143, 1, x_141);
lean_ctor_set(x_143, 2, x_139);
lean_ctor_set(x_143, 3, x_142);
x_144 = lean_array_get_size(x_14);
x_145 = lean_usize_of_nat(x_144);
lean_dec(x_144);
x_146 = 0;
x_147 = l_Lean_Elab_Term_quoteAutoTactic___closed__5;
x_148 = l_Array_term_____x5b___x3a___x5d___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
x_149 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_13, x_147, x_128, x_148, x_140, x_140, x_14, x_145, x_146, x_143, x_2, x_3, x_4, x_5, x_6, x_7, x_137);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_154);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_157);
lean_dec(x_7);
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_161 = x_158;
} else {
 lean_dec_ref(x_158);
 x_161 = lean_box(0);
}
x_162 = l_Lean_Elab_Term_quoteAutoTactic___closed__17;
x_163 = l_Lean_addMacroScope(x_159, x_162, x_156);
x_164 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
x_165 = l_Lean_Elab_Term_quoteAutoTactic___closed__20;
x_166 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_166, 0, x_153);
lean_ctor_set(x_166, 1, x_164);
lean_ctor_set(x_166, 2, x_163);
lean_ctor_set(x_166, 3, x_165);
lean_inc(x_13);
x_167 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_140, x_13);
x_168 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_169 = lean_array_push(x_168, x_166);
if (lean_obj_tag(x_167) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_170 = l___private_Init_Meta_0__Lean_quoteNameMk(x_13);
x_171 = lean_array_push(x_168, x_170);
x_172 = lean_array_push(x_171, x_150);
x_173 = l_Lean_nullKind___closed__2;
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
x_175 = lean_array_push(x_169, x_174);
x_176 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_175);
if (lean_is_scalar(x_161)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_161;
}
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_160);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_13);
x_179 = lean_ctor_get(x_167, 0);
lean_inc(x_179);
lean_dec(x_167);
x_180 = l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
x_181 = l_String_intercalate(x_180, x_179);
x_182 = l_Lean_Name_instReprName___closed__1;
x_183 = lean_string_append(x_182, x_181);
lean_dec(x_181);
x_184 = l_Lean_nameLitKind;
x_185 = lean_box(2);
x_186 = l_Lean_Syntax_mkLit(x_184, x_183, x_185);
x_187 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_188 = lean_array_push(x_187, x_186);
x_189 = l_Lean_instQuoteName___closed__2;
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_188);
x_191 = lean_array_push(x_168, x_190);
x_192 = lean_array_push(x_191, x_150);
x_193 = l_Lean_nullKind___closed__2;
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_192);
x_195 = lean_array_push(x_169, x_194);
x_196 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
if (lean_is_scalar(x_161)) {
 x_198 = lean_alloc_ctor(0, 2, 0);
} else {
 x_198 = x_161;
}
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_160);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_199 = lean_ctor_get(x_149, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_149, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_201 = x_149;
} else {
 lean_dec_ref(x_149);
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
lean_object* x_203; lean_object* x_204; 
lean_dec(x_14);
lean_dec(x_13);
x_203 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6;
x_204 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_1, x_203, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_204;
}
}
case 2:
{
uint8_t x_205; 
x_205 = !lean_is_exclusive(x_1);
if (x_205 == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_215; 
x_206 = lean_ctor_get(x_1, 1);
x_207 = lean_ctor_get(x_1, 0);
lean_dec(x_207);
x_208 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
lean_dec(x_208);
x_211 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_210);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_213);
lean_dec(x_7);
x_215 = !lean_is_exclusive(x_214);
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_216 = lean_ctor_get(x_214, 0);
x_217 = l_Lean_Elab_Term_quoteAutoTactic___closed__24;
x_218 = l_Lean_addMacroScope(x_216, x_217, x_212);
x_219 = l_Lean_Elab_Term_quoteAutoTactic___closed__23;
x_220 = l_Lean_Elab_Term_quoteAutoTactic___closed__27;
x_221 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_221, 0, x_209);
lean_ctor_set(x_221, 1, x_219);
lean_ctor_set(x_221, 2, x_218);
lean_ctor_set(x_221, 3, x_220);
x_222 = lean_box(2);
x_223 = l_Lean_Syntax_mkStrLit(x_206, x_222);
lean_dec(x_206);
x_224 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_225 = lean_array_push(x_224, x_223);
x_226 = l_Lean_nullKind___closed__2;
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_225);
lean_ctor_set(x_1, 0, x_226);
x_227 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_228 = lean_array_push(x_227, x_221);
x_229 = lean_array_push(x_228, x_1);
x_230 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_229);
lean_ctor_set(x_214, 0, x_231);
return x_214;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_232 = lean_ctor_get(x_214, 0);
x_233 = lean_ctor_get(x_214, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_214);
x_234 = l_Lean_Elab_Term_quoteAutoTactic___closed__24;
x_235 = l_Lean_addMacroScope(x_232, x_234, x_212);
x_236 = l_Lean_Elab_Term_quoteAutoTactic___closed__23;
x_237 = l_Lean_Elab_Term_quoteAutoTactic___closed__27;
x_238 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_238, 0, x_209);
lean_ctor_set(x_238, 1, x_236);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_238, 3, x_237);
x_239 = lean_box(2);
x_240 = l_Lean_Syntax_mkStrLit(x_206, x_239);
lean_dec(x_206);
x_241 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_242 = lean_array_push(x_241, x_240);
x_243 = l_Lean_nullKind___closed__2;
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_242);
lean_ctor_set(x_1, 0, x_243);
x_244 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_245 = lean_array_push(x_244, x_238);
x_246 = lean_array_push(x_245, x_1);
x_247 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_246);
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_233);
return x_249;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_250 = lean_ctor_get(x_1, 1);
lean_inc(x_250);
lean_dec(x_1);
x_251 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_251, 1);
lean_inc(x_253);
lean_dec(x_251);
x_254 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_253);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
lean_dec(x_254);
x_257 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_256);
lean_dec(x_7);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_260 = x_257;
} else {
 lean_dec_ref(x_257);
 x_260 = lean_box(0);
}
x_261 = l_Lean_Elab_Term_quoteAutoTactic___closed__24;
x_262 = l_Lean_addMacroScope(x_258, x_261, x_255);
x_263 = l_Lean_Elab_Term_quoteAutoTactic___closed__23;
x_264 = l_Lean_Elab_Term_quoteAutoTactic___closed__27;
x_265 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_265, 0, x_252);
lean_ctor_set(x_265, 1, x_263);
lean_ctor_set(x_265, 2, x_262);
lean_ctor_set(x_265, 3, x_264);
x_266 = lean_box(2);
x_267 = l_Lean_Syntax_mkStrLit(x_250, x_266);
lean_dec(x_250);
x_268 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_269 = lean_array_push(x_268, x_267);
x_270 = l_Lean_nullKind___closed__2;
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_269);
x_272 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_273 = lean_array_push(x_272, x_265);
x_274 = lean_array_push(x_273, x_271);
x_275 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_274);
if (lean_is_scalar(x_260)) {
 x_277 = lean_alloc_ctor(0, 2, 0);
} else {
 x_277 = x_260;
}
lean_ctor_set(x_277, 0, x_276);
lean_ctor_set(x_277, 1, x_259);
return x_277;
}
}
default: 
{
lean_object* x_278; lean_object* x_279; 
x_278 = l_Lean_Elab_Term_quoteAutoTactic___closed__29;
x_279 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_1, x_278, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_279;
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
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_auto");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_declareTacticSyntax___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1217____closed__1;
x_2 = l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_ctor_set(x_10, 1, x_15);
x_16 = lean_st_ref_set(x_7, x_10, x_11);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_19 = lean_ctor_get(x_2, 4);
lean_dec(x_19);
lean_ctor_set(x_2, 4, x_13);
x_20 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_17);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_27 = l_Lean_addMacroScope(x_21, x_26, x_24);
x_28 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_29 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_25);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_Term_declareTacticSyntax___closed__4;
x_33 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_34 = l_Lean_Elab_Term_elabTerm(x_30, x_32, x_33, x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_37 = l_Lean_Meta_instantiateMVars(x_35, x_4, x_5, x_6, x_7, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_63 = lean_st_ref_get(x_7, x_39);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_64, 3);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_ctor_get_uint8(x_65, sizeof(void*)*1);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
lean_dec(x_63);
x_40 = x_67;
goto block_62;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
lean_dec(x_63);
x_69 = l_Lean_Elab_Term_declareTacticSyntax___closed__5;
x_70 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_69, x_2, x_3, x_4, x_5, x_6, x_7, x_68);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_40 = x_73;
goto block_62;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_74 = lean_ctor_get(x_70, 1);
lean_inc(x_74);
lean_dec(x_70);
lean_inc(x_38);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_38);
x_76 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_69, x_75, x_2, x_3, x_4, x_5, x_6, x_7, x_74);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_40 = x_77;
goto block_62;
}
}
block_62:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_inc(x_27);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_27);
lean_ctor_set(x_42, 1, x_28);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_box(0);
x_44 = 1;
x_45 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_38);
lean_ctor_set(x_45, 2, x_43);
lean_ctor_set_uint8(x_45, sizeof(void*)*3, x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_inc(x_6);
lean_inc(x_2);
x_47 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_40);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set(x_49, 0, x_27);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_27);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
uint8_t x_54; 
lean_dec(x_27);
x_54 = !lean_is_exclusive(x_49);
if (x_54 == 0)
{
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_49, 0);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_49);
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
lean_dec(x_46);
lean_dec(x_27);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = !lean_is_exclusive(x_47);
if (x_58 == 0)
{
return x_47;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_47, 0);
x_60 = lean_ctor_get(x_47, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_47);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_27);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_78 = !lean_is_exclusive(x_37);
if (x_78 == 0)
{
return x_37;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_37, 0);
x_80 = lean_ctor_get(x_37, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_37);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_27);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_82 = !lean_is_exclusive(x_34);
if (x_82 == 0)
{
return x_34;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_34, 0);
x_84 = lean_ctor_get(x_34, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_34);
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
lean_dec(x_27);
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_86 = !lean_is_exclusive(x_29);
if (x_86 == 0)
{
return x_29;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_29, 0);
x_88 = lean_ctor_get(x_29, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_29);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_90 = lean_ctor_get(x_2, 0);
x_91 = lean_ctor_get(x_2, 1);
x_92 = lean_ctor_get(x_2, 2);
x_93 = lean_ctor_get(x_2, 3);
x_94 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_95 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_96 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_97 = lean_ctor_get(x_2, 5);
x_98 = lean_ctor_get(x_2, 6);
x_99 = lean_ctor_get(x_2, 7);
x_100 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_2);
x_101 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_101, 0, x_90);
lean_ctor_set(x_101, 1, x_91);
lean_ctor_set(x_101, 2, x_92);
lean_ctor_set(x_101, 3, x_93);
lean_ctor_set(x_101, 4, x_13);
lean_ctor_set(x_101, 5, x_97);
lean_ctor_set(x_101, 6, x_98);
lean_ctor_set(x_101, 7, x_99);
lean_ctor_set_uint8(x_101, sizeof(void*)*8, x_94);
lean_ctor_set_uint8(x_101, sizeof(void*)*8 + 1, x_95);
lean_ctor_set_uint8(x_101, sizeof(void*)*8 + 2, x_96);
lean_ctor_set_uint8(x_101, sizeof(void*)*8 + 3, x_100);
x_102 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_17);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_Elab_Term_getCurrMacroScope(x_101, x_3, x_4, x_5, x_6, x_7, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_109 = l_Lean_addMacroScope(x_103, x_108, x_106);
x_110 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_101);
x_111 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_101, x_3, x_4, x_5, x_6, x_7, x_107);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = l_Lean_Elab_Term_declareTacticSyntax___closed__4;
x_115 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_101);
x_116 = l_Lean_Elab_Term_elabTerm(x_112, x_114, x_115, x_115, x_101, x_3, x_4, x_5, x_6, x_7, x_113);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_119 = l_Lean_Meta_instantiateMVars(x_117, x_4, x_5, x_6, x_7, x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_144 = lean_st_ref_get(x_7, x_121);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_145, 3);
lean_inc(x_146);
lean_dec(x_145);
x_147 = lean_ctor_get_uint8(x_146, sizeof(void*)*1);
lean_dec(x_146);
if (x_147 == 0)
{
lean_object* x_148; 
x_148 = lean_ctor_get(x_144, 1);
lean_inc(x_148);
lean_dec(x_144);
x_122 = x_148;
goto block_143;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_149 = lean_ctor_get(x_144, 1);
lean_inc(x_149);
lean_dec(x_144);
x_150 = l_Lean_Elab_Term_declareTacticSyntax___closed__5;
x_151 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_150, x_101, x_3, x_4, x_5, x_6, x_7, x_149);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
lean_dec(x_152);
if (x_153 == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
x_122 = x_154;
goto block_143;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_155 = lean_ctor_get(x_151, 1);
lean_inc(x_155);
lean_dec(x_151);
lean_inc(x_120);
x_156 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_156, 0, x_120);
x_157 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_150, x_156, x_101, x_3, x_4, x_5, x_6, x_7, x_155);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_122 = x_158;
goto block_143;
}
}
block_143:
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_123 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_inc(x_109);
x_124 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_124, 0, x_109);
lean_ctor_set(x_124, 1, x_110);
lean_ctor_set(x_124, 2, x_123);
x_125 = lean_box(0);
x_126 = 1;
x_127 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_120);
lean_ctor_set(x_127, 2, x_125);
lean_ctor_set_uint8(x_127, sizeof(void*)*3, x_126);
x_128 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_128, 0, x_127);
lean_inc(x_6);
lean_inc(x_101);
x_129 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_128, x_101, x_3, x_4, x_5, x_6, x_7, x_122);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
lean_dec(x_129);
x_131 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_128, x_101, x_3, x_4, x_5, x_6, x_7, x_130);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
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
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_109);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_109);
x_135 = lean_ctor_get(x_131, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_131, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_137 = x_131;
} else {
 lean_dec_ref(x_131);
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
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_128);
lean_dec(x_109);
lean_dec(x_101);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_139 = lean_ctor_get(x_129, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_129, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_141 = x_129;
} else {
 lean_dec_ref(x_129);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_141)) {
 x_142 = lean_alloc_ctor(1, 2, 0);
} else {
 x_142 = x_141;
}
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_140);
return x_142;
}
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_109);
lean_dec(x_101);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_159 = lean_ctor_get(x_119, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_119, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_161 = x_119;
} else {
 lean_dec_ref(x_119);
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
lean_dec(x_109);
lean_dec(x_101);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_163 = lean_ctor_get(x_116, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_116, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_165 = x_116;
} else {
 lean_dec_ref(x_116);
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
lean_dec(x_109);
lean_dec(x_101);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_167 = lean_ctor_get(x_111, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_111, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_169 = x_111;
} else {
 lean_dec_ref(x_111);
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
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; uint8_t x_185; uint8_t x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_171 = lean_ctor_get(x_10, 0);
x_172 = lean_ctor_get(x_10, 1);
x_173 = lean_ctor_get(x_10, 2);
x_174 = lean_ctor_get(x_10, 3);
lean_inc(x_174);
lean_inc(x_173);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_10);
x_175 = lean_unsigned_to_nat(1u);
x_176 = lean_nat_add(x_172, x_175);
x_177 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_177, 0, x_171);
lean_ctor_set(x_177, 1, x_176);
lean_ctor_set(x_177, 2, x_173);
lean_ctor_set(x_177, 3, x_174);
x_178 = lean_st_ref_set(x_7, x_177, x_11);
x_179 = lean_ctor_get(x_178, 1);
lean_inc(x_179);
lean_dec(x_178);
x_180 = lean_ctor_get(x_2, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_2, 1);
lean_inc(x_181);
x_182 = lean_ctor_get(x_2, 2);
lean_inc(x_182);
x_183 = lean_ctor_get(x_2, 3);
lean_inc(x_183);
x_184 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_185 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_186 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_187 = lean_ctor_get(x_2, 5);
lean_inc(x_187);
x_188 = lean_ctor_get(x_2, 6);
lean_inc(x_188);
x_189 = lean_ctor_get(x_2, 7);
lean_inc(x_189);
x_190 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_191 = x_2;
} else {
 lean_dec_ref(x_2);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(0, 8, 4);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_180);
lean_ctor_set(x_192, 1, x_181);
lean_ctor_set(x_192, 2, x_182);
lean_ctor_set(x_192, 3, x_183);
lean_ctor_set(x_192, 4, x_172);
lean_ctor_set(x_192, 5, x_187);
lean_ctor_set(x_192, 6, x_188);
lean_ctor_set(x_192, 7, x_189);
lean_ctor_set_uint8(x_192, sizeof(void*)*8, x_184);
lean_ctor_set_uint8(x_192, sizeof(void*)*8 + 1, x_185);
lean_ctor_set_uint8(x_192, sizeof(void*)*8 + 2, x_186);
lean_ctor_set_uint8(x_192, sizeof(void*)*8 + 3, x_190);
x_193 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_179);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = l_Lean_Elab_Term_getCurrMacroScope(x_192, x_3, x_4, x_5, x_6, x_7, x_195);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec(x_196);
x_199 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_200 = l_Lean_addMacroScope(x_194, x_199, x_197);
x_201 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_192);
x_202 = l_Lean_Elab_Term_quoteAutoTactic(x_1, x_192, x_3, x_4, x_5, x_6, x_7, x_198);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
lean_dec(x_202);
x_205 = l_Lean_Elab_Term_declareTacticSyntax___closed__4;
x_206 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_192);
x_207 = l_Lean_Elab_Term_elabTerm(x_203, x_205, x_206, x_206, x_192, x_3, x_4, x_5, x_6, x_7, x_204);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_210 = l_Lean_Meta_instantiateMVars(x_208, x_4, x_5, x_6, x_7, x_209);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_235 = lean_st_ref_get(x_7, x_212);
x_236 = lean_ctor_get(x_235, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_236, 3);
lean_inc(x_237);
lean_dec(x_236);
x_238 = lean_ctor_get_uint8(x_237, sizeof(void*)*1);
lean_dec(x_237);
if (x_238 == 0)
{
lean_object* x_239; 
x_239 = lean_ctor_get(x_235, 1);
lean_inc(x_239);
lean_dec(x_235);
x_213 = x_239;
goto block_234;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_240 = lean_ctor_get(x_235, 1);
lean_inc(x_240);
lean_dec(x_235);
x_241 = l_Lean_Elab_Term_declareTacticSyntax___closed__5;
x_242 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_241, x_192, x_3, x_4, x_5, x_6, x_7, x_240);
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
x_244 = lean_unbox(x_243);
lean_dec(x_243);
if (x_244 == 0)
{
lean_object* x_245; 
x_245 = lean_ctor_get(x_242, 1);
lean_inc(x_245);
lean_dec(x_242);
x_213 = x_245;
goto block_234;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_246 = lean_ctor_get(x_242, 1);
lean_inc(x_246);
lean_dec(x_242);
lean_inc(x_211);
x_247 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_247, 0, x_211);
x_248 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_241, x_247, x_192, x_3, x_4, x_5, x_6, x_7, x_246);
x_249 = lean_ctor_get(x_248, 1);
lean_inc(x_249);
lean_dec(x_248);
x_213 = x_249;
goto block_234;
}
}
block_234:
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_214 = l_Lean_Elab_Term_declareTacticSyntax___closed__3;
lean_inc(x_200);
x_215 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_215, 0, x_200);
lean_ctor_set(x_215, 1, x_201);
lean_ctor_set(x_215, 2, x_214);
x_216 = lean_box(0);
x_217 = 1;
x_218 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_218, 0, x_215);
lean_ctor_set(x_218, 1, x_211);
lean_ctor_set(x_218, 2, x_216);
lean_ctor_set_uint8(x_218, sizeof(void*)*3, x_217);
x_219 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_219, 0, x_218);
lean_inc(x_6);
lean_inc(x_192);
x_220 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_219, x_192, x_3, x_4, x_5, x_6, x_7, x_213);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
lean_dec(x_220);
x_222 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_219, x_192, x_3, x_4, x_5, x_6, x_7, x_221);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_224 = x_222;
} else {
 lean_dec_ref(x_222);
 x_224 = lean_box(0);
}
if (lean_is_scalar(x_224)) {
 x_225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_225 = x_224;
}
lean_ctor_set(x_225, 0, x_200);
lean_ctor_set(x_225, 1, x_223);
return x_225;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_200);
x_226 = lean_ctor_get(x_222, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_222, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_228 = x_222;
} else {
 lean_dec_ref(x_222);
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
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
lean_dec(x_219);
lean_dec(x_200);
lean_dec(x_192);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_230 = lean_ctor_get(x_220, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_220, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_232 = x_220;
} else {
 lean_dec_ref(x_220);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(1, 2, 0);
} else {
 x_233 = x_232;
}
lean_ctor_set(x_233, 0, x_230);
lean_ctor_set(x_233, 1, x_231);
return x_233;
}
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_200);
lean_dec(x_192);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_250 = lean_ctor_get(x_210, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_210, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_252 = x_210;
} else {
 lean_dec_ref(x_210);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_200);
lean_dec(x_192);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_254 = lean_ctor_get(x_207, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_207, 1);
lean_inc(x_255);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_256 = x_207;
} else {
 lean_dec_ref(x_207);
 x_256 = lean_box(0);
}
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(1, 2, 0);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_254);
lean_ctor_set(x_257, 1, x_255);
return x_257;
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_200);
lean_dec(x_192);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_258 = lean_ctor_get(x_202, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_202, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_260 = x_202;
} else {
 lean_dec_ref(x_202);
 x_260 = lean_box(0);
}
if (lean_is_scalar(x_260)) {
 x_261 = lean_alloc_ctor(1, 2, 0);
} else {
 x_261 = x_260;
}
lean_ctor_set(x_261, 0, x_258);
lean_ctor_set(x_261, 1, x_259);
return x_261;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Expr_getAutoParamTactic_x3f___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_getOptParamDefault_x3f___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Expr_getOptParamDefault_x3f___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_getOptParamDefault_x3f___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Syntax_isNone(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_2, x_11);
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_Parser_Term_binderDefault___elambda__1___closed__2;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Parser_Term_binderTactic___elambda__1___closed__2;
x_17 = lean_name_eq(x_13, x_16);
lean_dec(x_13);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_Lean_Syntax_getArg(x_12, x_19);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_20);
x_21 = l_Lean_Elab_Term_declareTacticSyntax(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_29);
lean_dec(x_8);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
x_34 = l_Lean_addMacroScope(x_32, x_33, x_28);
x_35 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2;
x_36 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4;
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_25);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = l_Lean_mkIdentFrom(x_20, x_22);
lean_dec(x_20);
x_39 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_40 = lean_array_push(x_39, x_1);
x_41 = lean_array_push(x_40, x_38);
x_42 = l_Lean_nullKind___closed__2;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_array_push(x_39, x_37);
x_45 = lean_array_push(x_44, x_43);
x_46 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_30, 0, x_47);
return x_30;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_48 = lean_ctor_get(x_30, 0);
x_49 = lean_ctor_get(x_30, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_30);
x_50 = l_Lean_Expr_getAutoParamTactic_x3f___closed__2;
x_51 = l_Lean_addMacroScope(x_48, x_50, x_28);
x_52 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2;
x_53 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4;
x_54 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_54, 0, x_25);
lean_ctor_set(x_54, 1, x_52);
lean_ctor_set(x_54, 2, x_51);
lean_ctor_set(x_54, 3, x_53);
x_55 = l_Lean_mkIdentFrom(x_20, x_22);
lean_dec(x_20);
x_56 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_57 = lean_array_push(x_56, x_1);
x_58 = lean_array_push(x_57, x_55);
x_59 = l_Lean_nullKind___closed__2;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_56, x_54);
x_62 = lean_array_push(x_61, x_60);
x_63 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_49);
return x_65;
}
}
else
{
uint8_t x_66; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_21);
if (x_66 == 0)
{
return x_21;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_21, 0);
x_68 = lean_ctor_get(x_21, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_21);
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
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
lean_dec(x_13);
x_70 = lean_unsigned_to_nat(1u);
x_71 = l_Lean_Syntax_getArg(x_12, x_70);
lean_dec(x_12);
x_72 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_9);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_74);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_77);
lean_dec(x_8);
x_79 = !lean_is_exclusive(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_80 = lean_ctor_get(x_78, 0);
x_81 = l_Lean_Expr_getOptParamDefault_x3f___closed__2;
x_82 = l_Lean_addMacroScope(x_80, x_81, x_76);
x_83 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
x_84 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8;
x_85 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_85, 0, x_73);
lean_ctor_set(x_85, 1, x_83);
lean_ctor_set(x_85, 2, x_82);
lean_ctor_set(x_85, 3, x_84);
x_86 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_87 = lean_array_push(x_86, x_1);
x_88 = lean_array_push(x_87, x_71);
x_89 = l_Lean_nullKind___closed__2;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = lean_array_push(x_86, x_85);
x_92 = lean_array_push(x_91, x_90);
x_93 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
lean_ctor_set(x_78, 0, x_94);
return x_78;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_95 = lean_ctor_get(x_78, 0);
x_96 = lean_ctor_get(x_78, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_78);
x_97 = l_Lean_Expr_getOptParamDefault_x3f___closed__2;
x_98 = l_Lean_addMacroScope(x_95, x_97, x_76);
x_99 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
x_100 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8;
x_101 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_101, 0, x_73);
lean_ctor_set(x_101, 1, x_99);
lean_ctor_set(x_101, 2, x_98);
lean_ctor_set(x_101, 3, x_100);
x_102 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_103 = lean_array_push(x_102, x_1);
x_104 = lean_array_push(x_103, x_71);
x_105 = l_Lean_nullKind___closed__2;
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
x_107 = lean_array_push(x_102, x_101);
x_108 = lean_array_push(x_107, x_106);
x_109 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_96);
return x_111;
}
}
}
else
{
lean_object* x_112; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_1);
lean_ctor_set(x_112, 1, x_9);
return x_112;
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
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("identifier or `_` expected");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
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
lean_object* x_21; uint8_t x_22; 
x_21 = l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
x_22 = lean_name_eq(x_18, x_21);
lean_dec(x_18);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_16);
x_23 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
x_24 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_17, x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
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
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = 1;
x_30 = x_2 + x_29;
x_31 = x_17;
x_32 = lean_array_uset(x_16, x_2, x_31);
x_2 = x_30;
x_3 = x_32;
goto _start;
}
}
else
{
size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_18);
x_34 = 1;
x_35 = x_2 + x_34;
x_36 = x_17;
x_37 = lean_array_uset(x_16, x_2, x_36);
x_2 = x_35;
x_3 = x_37;
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
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
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
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_9 = l_Lean_Syntax_getKind(x_1);
x_10 = l_Lean_expandExplicitBindersAux_loop___closed__2;
x_11 = lean_name_eq(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_13 = lean_name_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
x_15 = lean_name_eq(x_9, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Parser_Term_instBinder___elambda__1___closed__2;
x_17 = lean_name_eq(x_9, x_16);
lean_dec(x_9);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__1___rarg(x_8);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_unsigned_to_nat(2u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
lean_dec(x_1);
x_26 = 3;
x_27 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*2, x_26);
x_28 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_29 = lean_array_push(x_28, x_27);
lean_ctor_set(x_21, 0, x_29);
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_unsigned_to_nat(2u);
x_33 = l_Lean_Syntax_getArg(x_1, x_32);
lean_dec(x_1);
x_34 = 3;
x_35 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set_uint8(x_35, sizeof(void*)*2, x_34);
x_36 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_37 = lean_array_push(x_36, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_31);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_9);
x_39 = lean_unsigned_to_nat(1u);
x_40 = l_Lean_Syntax_getArg(x_1, x_39);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_41 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_unsigned_to_nat(2u);
x_45 = l_Lean_Syntax_getArg(x_1, x_44);
x_46 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_1, x_45);
lean_dec(x_45);
lean_dec(x_1);
x_47 = lean_array_get_size(x_42);
x_48 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_49 = x_42;
x_50 = lean_box_usize(x_48);
x_51 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
x_52 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__2___boxed), 11, 4);
lean_closure_set(x_52, 0, x_46);
lean_closure_set(x_52, 1, x_50);
lean_closure_set(x_52, 2, x_51);
lean_closure_set(x_52, 3, x_49);
x_53 = x_52;
x_54 = lean_apply_7(x_53, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
return x_54;
}
else
{
uint8_t x_55; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_41);
if (x_55 == 0)
{
return x_41;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_41, 0);
x_57 = lean_ctor_get(x_41, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_41);
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
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_9);
x_59 = lean_unsigned_to_nat(1u);
x_60 = l_Lean_Syntax_getArg(x_1, x_59);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_61 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_60, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unsigned_to_nat(2u);
x_65 = l_Lean_Syntax_getArg(x_1, x_64);
x_66 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_1, x_65);
lean_dec(x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = l_Lean_Syntax_getArg(x_1, x_67);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_69 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(x_66, x_68, x_2, x_3, x_4, x_5, x_6, x_7, x_63);
lean_dec(x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; size_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_array_get_size(x_62);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = x_62;
x_75 = lean_box_usize(x_73);
x_76 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
x_77 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__3___boxed), 11, 4);
lean_closure_set(x_77, 0, x_70);
lean_closure_set(x_77, 1, x_75);
lean_closure_set(x_77, 2, x_76);
lean_closure_set(x_77, 3, x_74);
x_78 = x_77;
x_79 = lean_apply_7(x_78, x_2, x_3, x_4, x_5, x_6, x_7, x_71);
return x_79;
}
else
{
uint8_t x_80; 
lean_dec(x_62);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_69);
if (x_80 == 0)
{
return x_69;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_69, 0);
x_82 = lean_ctor_get(x_69, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_69);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_61);
if (x_84 == 0)
{
return x_61;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_61, 0);
x_86 = lean_ctor_get(x_61, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_61);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_9);
x_88 = lean_unsigned_to_nat(0u);
x_89 = l_Lean_Syntax_getArg(x_1, x_88);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_90 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_89, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; size_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_unsigned_to_nat(1u);
x_94 = l_Lean_Syntax_getArg(x_1, x_93);
x_95 = l_Lean_Elab_Term_expandOptType(x_1, x_94);
lean_dec(x_94);
lean_dec(x_1);
x_96 = lean_array_get_size(x_91);
x_97 = lean_usize_of_nat(x_96);
lean_dec(x_96);
x_98 = x_91;
x_99 = lean_box_usize(x_97);
x_100 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1;
x_101 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___spec__4___boxed), 11, 4);
lean_closure_set(x_101, 0, x_95);
lean_closure_set(x_101, 1, x_99);
lean_closure_set(x_101, 2, x_100);
lean_closure_set(x_101, 3, x_98);
x_102 = x_101;
x_103 = lean_apply_7(x_102, x_2, x_3, x_4, x_5, x_6, x_7, x_92);
return x_103;
}
else
{
uint8_t x_104; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_90);
if (x_104 == 0)
{
return x_90;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_90, 0);
x_106 = lean_ctor_get(x_90, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_90);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
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
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to infer binder type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3;
x_11 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_1, x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
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
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_dec(x_13);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 2, x_2);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Std_PersistentArray_empty___closed__1;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
return x_28;
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
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid binder name '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', it must be atomic");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
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
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_11);
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(x_9, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_8);
return x_20;
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
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("checkBinderAnnotations");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("check whether type is a class instance whenever the binder annotation `[...]` is used");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = l_Lean_instInhabitedParserDescr___closed__1;
x_3 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__3;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__2;
x_3 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__4;
x_4 = l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_4____spec__1(x_2, x_3, x_1);
return x_4;
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
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid binder annotation, type is not a class instance");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nuse the command `set_option checkBinderAnnotations false` to disable the check");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
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
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_indentExpr(x_20);
x_37 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(x_18, x_40, x_5, x_6, x_7, x_8, x_9, x_10, x_35);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_18);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_34);
lean_dec(x_18);
x_46 = lean_ctor_get(x_33, 1);
lean_inc(x_46);
lean_dec(x_33);
x_47 = lean_box(0);
x_48 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_15, x_3, x_4, x_1, x_2, x_20, x_47, x_5, x_6, x_7, x_8, x_9, x_10, x_46);
return x_48;
}
}
else
{
uint8_t x_49; 
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
x_49 = !lean_is_exclusive(x_33);
if (x_49 == 0)
{
return x_33;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_33, 0);
x_51 = lean_ctor_get(x_33, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_33);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
else
{
uint8_t x_53; 
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
x_57 = !lean_is_exclusive(x_16);
if (x_57 == 0)
{
return x_16;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_16, 0);
x_59 = lean_ctor_get(x_16, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_16);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
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
x_11 = l_Array_empty___closed__1;
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_12 = l_Array_empty___closed__1;
x_13 = lean_apply_1(x_2, x_12);
x_14 = l_Lean_Elab_Term_withoutPostponingUniverseConstraints___rarg(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_11 = lean_array_push(x_10, x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed), 9, 1);
lean_closure_set(x_12, 0, x_2);
x_13 = l_Lean_Elab_Term_elabBinders___rarg(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
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
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
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
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(3u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 9, 1);
lean_closure_set(x_18, 0, x_16);
x_19 = l_Lean_Elab_Term_elabBinders___rarg(x_17, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_19;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabArrow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Array_forInUnsafe_loop___at___private_Init_NotationExtra_0__Lean_mkHintBody___spec__1___closed__2;
lean_inc(x_1);
x_10 = l_Lean_Syntax_isOfKind(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_1);
x_11 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_Parser_Term_forall___elambda__1___closed__1;
lean_inc(x_17);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_prec_x28___x29___closed__3;
lean_inc(x_17);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_17);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__4;
x_30 = l_Lean_addMacroScope(x_24, x_29, x_20);
x_31 = lean_box(0);
x_32 = l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__3;
lean_inc(x_17);
x_33 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_33, 0, x_17);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_31);
x_34 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_35 = lean_array_push(x_34, x_33);
x_36 = l_Lean_nullKind___closed__2;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_17);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_17);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_41 = lean_array_push(x_40, x_39);
x_42 = lean_array_push(x_41, x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_prec_x28___x29___closed__7;
lean_inc(x_17);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_17);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
x_47 = lean_array_push(x_46, x_28);
x_48 = lean_array_push(x_47, x_37);
x_49 = lean_array_push(x_48, x_43);
x_50 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_51 = lean_array_push(x_49, x_50);
x_52 = lean_array_push(x_51, x_45);
x_53 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_array_push(x_34, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_36);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_17);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_60 = lean_array_push(x_59, x_26);
x_61 = lean_array_push(x_60, x_56);
x_62 = lean_array_push(x_61, x_58);
x_63 = lean_array_push(x_62, x_15);
x_64 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
lean_ctor_set(x_22, 0, x_65);
return x_22;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_66 = lean_ctor_get(x_22, 0);
x_67 = lean_ctor_get(x_22, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_22);
x_68 = l_Lean_Parser_Term_forall___elambda__1___closed__1;
lean_inc(x_17);
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_17);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_prec_x28___x29___closed__3;
lean_inc(x_17);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_17);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__4;
x_73 = l_Lean_addMacroScope(x_66, x_72, x_20);
x_74 = lean_box(0);
x_75 = l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__3;
lean_inc(x_17);
x_76 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_76, 0, x_17);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_73);
lean_ctor_set(x_76, 3, x_74);
x_77 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_78 = lean_array_push(x_77, x_76);
x_79 = l_Lean_nullKind___closed__2;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_17);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_17);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_84 = lean_array_push(x_83, x_82);
x_85 = lean_array_push(x_84, x_13);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_79);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_prec_x28___x29___closed__7;
lean_inc(x_17);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_17);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
x_90 = lean_array_push(x_89, x_71);
x_91 = lean_array_push(x_90, x_80);
x_92 = lean_array_push(x_91, x_86);
x_93 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_94 = lean_array_push(x_92, x_93);
x_95 = lean_array_push(x_94, x_88);
x_96 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_array_push(x_77, x_97);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_79);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_17);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_103 = lean_array_push(x_102, x_69);
x_104 = lean_array_push(x_103, x_99);
x_105 = lean_array_push(x_104, x_101);
x_106 = lean_array_push(x_105, x_15);
x_107 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_67);
return x_109;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_elabArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrow___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_elabArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_elabArrow___closed__1;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_Array_forInUnsafe_loop___at___private_Init_NotationExtra_0__Lean_mkHintBody___spec__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_15 = lean_array_push(x_14, x_11);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 9, 1);
lean_closure_set(x_16, 0, x_13);
x_17 = l_Lean_Elab_Term_elabBinders___rarg(x_15, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_ctor_set(x_2, 0, x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_Meta_mkArrow___closed__2;
x_9 = l_Lean_addMacroScope(x_7, x_8, x_4);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_2);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_12, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l_Lean_Meta_mkArrow___closed__2;
x_19 = l_Lean_addMacroScope(x_17, x_18, x_12);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
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
x_22 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
lean_inc(x_1);
x_23 = lean_name_mk_string(x_1, x_22);
lean_inc(x_21);
x_24 = l_Lean_Syntax_isOfKind(x_21, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_identKind___closed__2;
lean_inc(x_21);
x_26 = l_Lean_Syntax_isOfKind(x_21, x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_21);
x_27 = lean_box(0);
x_8 = x_27;
x_9 = x_7;
goto block_17;
}
else
{
lean_object* x_28; 
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_21);
x_8 = x_28;
x_9 = x_7;
goto block_17;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_inc(x_6);
x_29 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_21, x_6, x_7);
lean_dec(x_21);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
x_8 = x_30;
x_9 = x_31;
goto block_17;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_8 = x_34;
x_9 = x_31;
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
lean_object* x_4; lean_object* x_5; lean_object* x_19; uint8_t x_20; 
x_19 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
lean_inc(x_1);
x_20 = l_Lean_Syntax_isOfKind(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
lean_inc(x_1);
x_22 = l_Lean_Syntax_isOfKind(x_1, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_2);
x_23 = l_Lean_identKind___closed__2;
lean_inc(x_1);
x_24 = l_Lean_Syntax_isOfKind(x_1, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_box(0);
x_4 = x_25;
x_5 = x_3;
goto block_18;
}
else
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_1);
x_4 = x_26;
x_5 = x_3;
goto block_18;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
x_4 = x_28;
x_5 = x_29;
goto block_18;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 0);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_4 = x_32;
x_5 = x_29;
goto block_18;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_68; uint8_t x_69; 
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Lean_Syntax_getArg(x_1, x_33);
x_35 = lean_unsigned_to_nat(1u);
x_36 = l_Lean_Syntax_getArg(x_1, x_35);
lean_dec(x_1);
x_37 = l_Lean_Syntax_getArgs(x_36);
lean_dec(x_36);
x_68 = l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
lean_inc(x_34);
x_69 = l_Lean_Syntax_isOfKind(x_34, x_68);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = l_Lean_identKind___closed__2;
lean_inc(x_34);
x_71 = l_Lean_Syntax_isOfKind(x_34, x_70);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_34);
x_72 = lean_box(0);
x_38 = x_72;
x_39 = x_3;
goto block_67;
}
else
{
lean_object* x_73; 
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_34);
x_38 = x_73;
x_39 = x_3;
goto block_67;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
lean_inc(x_2);
x_74 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_34, x_2, x_3);
lean_dec(x_34);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
x_38 = x_75;
x_39 = x_76;
goto block_67;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_75, 0);
lean_inc(x_78);
lean_dec(x_75);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_38 = x_79;
x_39 = x_76;
goto block_67;
}
}
block_67:
{
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_37);
lean_dec(x_2);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
lean_dec(x_38);
x_43 = l_Array_empty___closed__1;
x_44 = lean_array_push(x_43, x_42);
x_45 = lean_array_get_size(x_37);
x_46 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_47 = 0;
x_48 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_49 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__3(x_48, x_37, x_46, x_47, x_44, x_2, x_39);
lean_dec(x_37);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 0);
lean_dec(x_52);
x_53 = lean_box(0);
lean_ctor_set(x_49, 0, x_53);
return x_49;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
lean_dec(x_49);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_49);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_49, 0);
lean_dec(x_58);
x_59 = !lean_is_exclusive(x_50);
if (x_59 == 0)
{
return x_49;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_50, 0);
lean_inc(x_60);
lean_dec(x_50);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_49, 0, x_61);
return x_49;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_49, 1);
lean_inc(x_62);
lean_dec(x_49);
x_63 = lean_ctor_get(x_50, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 x_64 = x_50;
} else {
 lean_dec_ref(x_50);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 1, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
}
}
}
}
block_18:
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = l_Array_empty___closed__1;
x_11 = lean_array_push(x_10, x_9);
lean_ctor_set(x_4, 0, x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = l_Array_empty___closed__1;
x_15 = lean_array_push(x_14, x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_5);
return x_17;
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
x_32 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_33 = lean_string_dec_eq(x_29, x_32);
lean_dec(x_29);
if (x_33 == 0)
{
lean_object* x_34; 
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
x_38 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_39 = lean_string_dec_eq(x_25, x_38);
if (x_39 == 0)
{
lean_object* x_40; 
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
x_41 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_42 = lean_string_dec_eq(x_21, x_41);
if (x_42 == 0)
{
lean_object* x_43; 
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
x_44 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_45 = lean_string_dec_eq(x_17, x_44);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_2);
x_46 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_47 = lean_string_dec_eq(x_17, x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_3);
x_48 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_49 = lean_string_dec_eq(x_17, x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_4);
x_50 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_51 = lean_string_dec_eq(x_17, x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
lean_dec(x_5);
x_52 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_53 = lean_string_dec_eq(x_17, x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
lean_dec(x_6);
x_54 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_55 = lean_string_dec_eq(x_17, x_54);
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
lean_free_object(x_1);
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
lean_free_object(x_1);
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
lean_free_object(x_1);
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
lean_free_object(x_1);
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
lean_free_object(x_1);
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
lean_free_object(x_1);
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
x_87 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_88 = lean_string_dec_eq(x_25, x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; 
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
x_91 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_92 = lean_string_dec_eq(x_21, x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
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
x_95 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_96 = lean_string_dec_eq(x_17, x_95);
if (x_96 == 0)
{
lean_object* x_97; uint8_t x_98; 
lean_dec(x_2);
x_97 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_98 = lean_string_dec_eq(x_17, x_97);
if (x_98 == 0)
{
lean_object* x_99; uint8_t x_100; 
lean_dec(x_3);
x_99 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_100 = lean_string_dec_eq(x_17, x_99);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
lean_dec(x_4);
x_101 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_102 = lean_string_dec_eq(x_17, x_101);
if (x_102 == 0)
{
lean_object* x_103; uint8_t x_104; 
lean_dec(x_5);
x_103 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_104 = lean_string_dec_eq(x_17, x_103);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; 
lean_dec(x_6);
x_105 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_106 = lean_string_dec_eq(x_17, x_105);
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
x_141 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_142 = lean_string_dec_eq(x_139, x_141);
lean_dec(x_139);
if (x_142 == 0)
{
lean_object* x_143; 
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
x_145 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_146 = lean_string_dec_eq(x_25, x_145);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
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
x_150 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_151 = lean_string_dec_eq(x_21, x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
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
x_155 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_156 = lean_string_dec_eq(x_17, x_155);
if (x_156 == 0)
{
lean_object* x_157; uint8_t x_158; 
lean_dec(x_2);
x_157 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_158 = lean_string_dec_eq(x_17, x_157);
if (x_158 == 0)
{
lean_object* x_159; uint8_t x_160; 
lean_dec(x_3);
x_159 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_160 = lean_string_dec_eq(x_17, x_159);
if (x_160 == 0)
{
lean_object* x_161; uint8_t x_162; 
lean_dec(x_4);
x_161 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_162 = lean_string_dec_eq(x_17, x_161);
if (x_162 == 0)
{
lean_object* x_163; uint8_t x_164; 
lean_dec(x_5);
x_163 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_164 = lean_string_dec_eq(x_17, x_163);
if (x_164 == 0)
{
lean_object* x_165; uint8_t x_166; 
lean_dec(x_6);
x_165 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_166 = lean_string_dec_eq(x_17, x_165);
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
lean_dec(x_144);
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
lean_dec(x_144);
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
lean_dec(x_144);
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
lean_dec(x_144);
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
lean_dec(x_144);
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
lean_dec(x_144);
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
x_205 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_206 = lean_string_dec_eq(x_202, x_205);
lean_dec(x_202);
if (x_206 == 0)
{
lean_object* x_207; 
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
x_209 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_210 = lean_string_dec_eq(x_200, x_209);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
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
x_215 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_216 = lean_string_dec_eq(x_21, x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
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
x_221 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_222 = lean_string_dec_eq(x_17, x_221);
if (x_222 == 0)
{
lean_object* x_223; uint8_t x_224; 
lean_dec(x_2);
x_223 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_224 = lean_string_dec_eq(x_17, x_223);
if (x_224 == 0)
{
lean_object* x_225; uint8_t x_226; 
lean_dec(x_3);
x_225 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_226 = lean_string_dec_eq(x_17, x_225);
if (x_226 == 0)
{
lean_object* x_227; uint8_t x_228; 
lean_dec(x_4);
x_227 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_228 = lean_string_dec_eq(x_17, x_227);
if (x_228 == 0)
{
lean_object* x_229; uint8_t x_230; 
lean_dec(x_5);
x_229 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_230 = lean_string_dec_eq(x_17, x_229);
if (x_230 == 0)
{
lean_object* x_231; uint8_t x_232; 
lean_dec(x_6);
x_231 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_232 = lean_string_dec_eq(x_17, x_231);
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
lean_dec(x_208);
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
lean_dec(x_208);
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
lean_dec(x_208);
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
lean_dec(x_208);
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
lean_dec(x_208);
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
lean_dec(x_208);
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
x_275 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_276 = lean_string_dec_eq(x_272, x_275);
lean_dec(x_272);
if (x_276 == 0)
{
lean_object* x_277; 
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
x_279 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_280 = lean_string_dec_eq(x_269, x_279);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
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
x_286 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_287 = lean_string_dec_eq(x_267, x_286);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
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
x_293 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_294 = lean_string_dec_eq(x_17, x_293);
if (x_294 == 0)
{
lean_object* x_295; uint8_t x_296; 
lean_dec(x_2);
x_295 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_296 = lean_string_dec_eq(x_17, x_295);
if (x_296 == 0)
{
lean_object* x_297; uint8_t x_298; 
lean_dec(x_3);
x_297 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_298 = lean_string_dec_eq(x_17, x_297);
if (x_298 == 0)
{
lean_object* x_299; uint8_t x_300; 
lean_dec(x_4);
x_299 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_300 = lean_string_dec_eq(x_17, x_299);
if (x_300 == 0)
{
lean_object* x_301; uint8_t x_302; 
lean_dec(x_5);
x_301 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_302 = lean_string_dec_eq(x_17, x_301);
if (x_302 == 0)
{
lean_object* x_303; uint8_t x_304; 
lean_dec(x_6);
x_303 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_304 = lean_string_dec_eq(x_17, x_303);
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
lean_dec(x_278);
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
lean_dec(x_278);
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
lean_dec(x_278);
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
lean_dec(x_278);
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
lean_dec(x_278);
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
lean_dec(x_278);
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
x_351 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_352 = lean_string_dec_eq(x_348, x_351);
lean_dec(x_348);
if (x_352 == 0)
{
lean_object* x_353; 
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
x_355 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_356 = lean_string_dec_eq(x_345, x_355);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
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
x_363 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_364 = lean_string_dec_eq(x_342, x_363);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
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
x_371 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_372 = lean_string_dec_eq(x_340, x_371);
if (x_372 == 0)
{
lean_object* x_373; uint8_t x_374; 
lean_dec(x_2);
x_373 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_374 = lean_string_dec_eq(x_340, x_373);
if (x_374 == 0)
{
lean_object* x_375; uint8_t x_376; 
lean_dec(x_3);
x_375 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_376 = lean_string_dec_eq(x_340, x_375);
if (x_376 == 0)
{
lean_object* x_377; uint8_t x_378; 
lean_dec(x_4);
x_377 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_378 = lean_string_dec_eq(x_340, x_377);
if (x_378 == 0)
{
lean_object* x_379; uint8_t x_380; 
lean_dec(x_5);
x_379 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_380 = lean_string_dec_eq(x_340, x_379);
if (x_380 == 0)
{
lean_object* x_381; uint8_t x_382; 
lean_dec(x_6);
x_381 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_382 = lean_string_dec_eq(x_340, x_381);
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
lean_dec(x_354);
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
lean_dec(x_354);
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
lean_dec(x_354);
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
lean_dec(x_354);
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
lean_dec(x_354);
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
lean_dec(x_354);
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_ctor_set(x_2, 0, x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_Meta_mkArrow___closed__2;
x_9 = l_Lean_addMacroScope(x_7, x_8, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_11, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_Lean_Meta_mkArrow___closed__2;
x_18 = l_Lean_addMacroScope(x_16, x_17, x_11);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
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
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_34);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_38 = lean_array_push(x_37, x_16);
x_39 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_42 = lean_array_push(x_41, x_40);
x_43 = l_Lean_nullKind___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_34);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_34);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_34);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_34);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_array_push(x_41, x_14);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_43);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_34);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_54 = lean_array_push(x_53, x_48);
x_55 = lean_array_push(x_54, x_50);
x_56 = lean_array_push(x_55, x_52);
x_57 = lean_array_push(x_56, x_30);
x_58 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_array_push(x_41, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_43);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_array_push(x_41, x_61);
x_63 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_66 = lean_array_push(x_65, x_36);
x_67 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_68 = lean_array_push(x_66, x_67);
x_69 = lean_array_push(x_68, x_44);
x_70 = lean_array_push(x_69, x_67);
x_71 = lean_array_push(x_70, x_46);
x_72 = lean_array_push(x_71, x_64);
x_73 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = 1;
x_76 = lean_box(x_75);
lean_ctor_set(x_25, 1, x_76);
lean_ctor_set(x_25, 0, x_74);
lean_ctor_set(x_32, 0, x_24);
return x_32;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; lean_object* x_121; 
x_77 = lean_ctor_get(x_32, 0);
x_78 = lean_ctor_get(x_32, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_32);
x_79 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_77);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_82 = lean_array_push(x_81, x_16);
x_83 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_86 = lean_array_push(x_85, x_84);
x_87 = l_Lean_nullKind___closed__2;
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
x_89 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_77);
x_90 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_90, 0, x_77);
lean_ctor_set(x_90, 1, x_89);
x_91 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_77);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_77);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_array_push(x_85, x_14);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_87);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_96 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_96, 0, x_77);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_98 = lean_array_push(x_97, x_92);
x_99 = lean_array_push(x_98, x_94);
x_100 = lean_array_push(x_99, x_96);
x_101 = lean_array_push(x_100, x_30);
x_102 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
x_104 = lean_array_push(x_85, x_103);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_87);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_array_push(x_85, x_105);
x_107 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_110 = lean_array_push(x_109, x_80);
x_111 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_112 = lean_array_push(x_110, x_111);
x_113 = lean_array_push(x_112, x_88);
x_114 = lean_array_push(x_113, x_111);
x_115 = lean_array_push(x_114, x_90);
x_116 = lean_array_push(x_115, x_108);
x_117 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
x_119 = 1;
x_120 = lean_box(x_119);
lean_ctor_set(x_25, 1, x_120);
lean_ctor_set(x_25, 0, x_118);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_24);
lean_ctor_set(x_121, 1, x_78);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_122 = lean_ctor_get(x_25, 0);
lean_inc(x_122);
lean_dec(x_25);
x_123 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_26);
lean_dec(x_5);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_126 = x_123;
} else {
 lean_dec_ref(x_123);
 x_126 = lean_box(0);
}
x_127 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_124);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_124);
lean_ctor_set(x_128, 1, x_127);
x_129 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_130 = lean_array_push(x_129, x_16);
x_131 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_130);
x_133 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_134 = lean_array_push(x_133, x_132);
x_135 = l_Lean_nullKind___closed__2;
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
x_137 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_124);
x_138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_138, 0, x_124);
lean_ctor_set(x_138, 1, x_137);
x_139 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_124);
x_140 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_140, 0, x_124);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_array_push(x_133, x_14);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_135);
lean_ctor_set(x_142, 1, x_141);
x_143 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_144, 0, x_124);
lean_ctor_set(x_144, 1, x_143);
x_145 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_146 = lean_array_push(x_145, x_140);
x_147 = lean_array_push(x_146, x_142);
x_148 = lean_array_push(x_147, x_144);
x_149 = lean_array_push(x_148, x_122);
x_150 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
x_152 = lean_array_push(x_133, x_151);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_135);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_array_push(x_133, x_153);
x_155 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
x_157 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_158 = lean_array_push(x_157, x_128);
x_159 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_160 = lean_array_push(x_158, x_159);
x_161 = lean_array_push(x_160, x_136);
x_162 = lean_array_push(x_161, x_159);
x_163 = lean_array_push(x_162, x_138);
x_164 = lean_array_push(x_163, x_156);
x_165 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_164);
x_167 = 1;
x_168 = lean_box(x_167);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_168);
lean_ctor_set(x_24, 1, x_169);
if (lean_is_scalar(x_126)) {
 x_170 = lean_alloc_ctor(0, 2, 0);
} else {
 x_170 = x_126;
}
lean_ctor_set(x_170, 0, x_24);
lean_ctor_set(x_170, 1, x_125);
return x_170;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_171 = lean_ctor_get(x_24, 0);
lean_inc(x_171);
lean_dec(x_24);
x_172 = lean_ctor_get(x_25, 0);
lean_inc(x_172);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_173 = x_25;
} else {
 lean_dec_ref(x_25);
 x_173 = lean_box(0);
}
x_174 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_26);
lean_dec(x_5);
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
x_178 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_175);
x_179 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_179, 0, x_175);
lean_ctor_set(x_179, 1, x_178);
x_180 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_181 = lean_array_push(x_180, x_16);
x_182 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
x_184 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_185 = lean_array_push(x_184, x_183);
x_186 = l_Lean_nullKind___closed__2;
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_185);
x_188 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_175);
x_189 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_189, 0, x_175);
lean_ctor_set(x_189, 1, x_188);
x_190 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_175);
x_191 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_191, 0, x_175);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_array_push(x_184, x_14);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_186);
lean_ctor_set(x_193, 1, x_192);
x_194 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_195 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_195, 0, x_175);
lean_ctor_set(x_195, 1, x_194);
x_196 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_197 = lean_array_push(x_196, x_191);
x_198 = lean_array_push(x_197, x_193);
x_199 = lean_array_push(x_198, x_195);
x_200 = lean_array_push(x_199, x_172);
x_201 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
x_203 = lean_array_push(x_184, x_202);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_186);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_array_push(x_184, x_204);
x_206 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_205);
x_208 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_209 = lean_array_push(x_208, x_179);
x_210 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_211 = lean_array_push(x_209, x_210);
x_212 = lean_array_push(x_211, x_187);
x_213 = lean_array_push(x_212, x_210);
x_214 = lean_array_push(x_213, x_189);
x_215 = lean_array_push(x_214, x_207);
x_216 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_215);
x_218 = 1;
x_219 = lean_box(x_218);
if (lean_is_scalar(x_173)) {
 x_220 = lean_alloc_ctor(0, 2, 0);
} else {
 x_220 = x_173;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_171);
lean_ctor_set(x_221, 1, x_220);
if (lean_is_scalar(x_177)) {
 x_222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_222 = x_177;
}
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_176);
return x_222;
}
}
case 1:
{
lean_object* x_223; 
x_223 = lean_ctor_get(x_14, 0);
lean_inc(x_223);
if (lean_obj_tag(x_223) == 1)
{
lean_object* x_224; 
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
if (lean_obj_tag(x_224) == 1)
{
lean_object* x_225; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
if (lean_obj_tag(x_225) == 1)
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
if (lean_obj_tag(x_226) == 1)
{
lean_object* x_227; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; uint8_t x_233; 
x_228 = lean_ctor_get(x_223, 1);
lean_inc(x_228);
lean_dec(x_223);
x_229 = lean_ctor_get(x_224, 1);
lean_inc(x_229);
lean_dec(x_224);
x_230 = lean_ctor_get(x_225, 1);
lean_inc(x_230);
lean_dec(x_225);
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
lean_dec(x_226);
x_232 = l_Lean_Parser_Syntax_addPrec___closed__1;
x_233 = lean_string_dec_eq(x_231, x_232);
lean_dec(x_231);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; 
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
lean_inc(x_5);
x_234 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = lean_unsigned_to_nat(1u);
x_238 = lean_nat_add(x_3, x_237);
lean_dec(x_3);
x_239 = l_Lean_mkHole(x_14);
lean_inc(x_235);
x_240 = l_Lean_Elab_Term_mkExplicitBinder(x_235, x_239);
x_241 = lean_array_push(x_4, x_240);
lean_inc(x_5);
x_242 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_238, x_241, x_5, x_236);
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
x_245 = lean_ctor_get(x_242, 1);
lean_inc(x_245);
lean_dec(x_242);
x_246 = !lean_is_exclusive(x_243);
if (x_246 == 0)
{
lean_object* x_247; uint8_t x_248; 
x_247 = lean_ctor_get(x_243, 1);
lean_dec(x_247);
x_248 = !lean_is_exclusive(x_244);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; 
x_249 = lean_ctor_get(x_244, 0);
x_250 = lean_ctor_get(x_244, 1);
lean_dec(x_250);
x_251 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_245);
lean_dec(x_5);
x_252 = !lean_is_exclusive(x_251);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; 
x_253 = lean_ctor_get(x_251, 0);
x_254 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_253);
x_255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
x_256 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_257 = lean_array_push(x_256, x_235);
x_258 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_257);
x_260 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_261 = lean_array_push(x_260, x_259);
x_262 = l_Lean_nullKind___closed__2;
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_261);
x_264 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_253);
x_265 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_265, 0, x_253);
lean_ctor_set(x_265, 1, x_264);
x_266 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_253);
x_267 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_267, 0, x_253);
lean_ctor_set(x_267, 1, x_266);
lean_inc(x_14);
x_268 = lean_array_push(x_260, x_14);
x_269 = !lean_is_exclusive(x_14);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; 
x_270 = lean_ctor_get(x_14, 1);
lean_dec(x_270);
x_271 = lean_ctor_get(x_14, 0);
lean_dec(x_271);
lean_ctor_set(x_14, 1, x_268);
lean_ctor_set(x_14, 0, x_262);
x_272 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_273 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_273, 0, x_253);
lean_ctor_set(x_273, 1, x_272);
x_274 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_275 = lean_array_push(x_274, x_267);
x_276 = lean_array_push(x_275, x_14);
x_277 = lean_array_push(x_276, x_273);
x_278 = lean_array_push(x_277, x_249);
x_279 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_278);
x_281 = lean_array_push(x_260, x_280);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_262);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_array_push(x_260, x_282);
x_284 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_283);
x_286 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_287 = lean_array_push(x_286, x_255);
x_288 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_289 = lean_array_push(x_287, x_288);
x_290 = lean_array_push(x_289, x_263);
x_291 = lean_array_push(x_290, x_288);
x_292 = lean_array_push(x_291, x_265);
x_293 = lean_array_push(x_292, x_285);
x_294 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_293);
x_296 = 1;
x_297 = lean_box(x_296);
lean_ctor_set(x_244, 1, x_297);
lean_ctor_set(x_244, 0, x_295);
lean_ctor_set(x_251, 0, x_243);
return x_251;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; 
lean_dec(x_14);
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_262);
lean_ctor_set(x_298, 1, x_268);
x_299 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_300 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_300, 0, x_253);
lean_ctor_set(x_300, 1, x_299);
x_301 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_302 = lean_array_push(x_301, x_267);
x_303 = lean_array_push(x_302, x_298);
x_304 = lean_array_push(x_303, x_300);
x_305 = lean_array_push(x_304, x_249);
x_306 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_307 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_305);
x_308 = lean_array_push(x_260, x_307);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_262);
lean_ctor_set(x_309, 1, x_308);
x_310 = lean_array_push(x_260, x_309);
x_311 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_312, 0, x_311);
lean_ctor_set(x_312, 1, x_310);
x_313 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_314 = lean_array_push(x_313, x_255);
x_315 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_316 = lean_array_push(x_314, x_315);
x_317 = lean_array_push(x_316, x_263);
x_318 = lean_array_push(x_317, x_315);
x_319 = lean_array_push(x_318, x_265);
x_320 = lean_array_push(x_319, x_312);
x_321 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_321);
lean_ctor_set(x_322, 1, x_320);
x_323 = 1;
x_324 = lean_box(x_323);
lean_ctor_set(x_244, 1, x_324);
lean_ctor_set(x_244, 0, x_322);
lean_ctor_set(x_251, 0, x_243);
return x_251;
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; uint8_t x_368; lean_object* x_369; lean_object* x_370; 
x_325 = lean_ctor_get(x_251, 0);
x_326 = lean_ctor_get(x_251, 1);
lean_inc(x_326);
lean_inc(x_325);
lean_dec(x_251);
x_327 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_325);
x_328 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_328, 0, x_325);
lean_ctor_set(x_328, 1, x_327);
x_329 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_330 = lean_array_push(x_329, x_235);
x_331 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_330);
x_333 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_334 = lean_array_push(x_333, x_332);
x_335 = l_Lean_nullKind___closed__2;
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_334);
x_337 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_325);
x_338 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_338, 0, x_325);
lean_ctor_set(x_338, 1, x_337);
x_339 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_325);
x_340 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_340, 0, x_325);
lean_ctor_set(x_340, 1, x_339);
lean_inc(x_14);
x_341 = lean_array_push(x_333, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_342 = x_14;
} else {
 lean_dec_ref(x_14);
 x_342 = lean_box(0);
}
if (lean_is_scalar(x_342)) {
 x_343 = lean_alloc_ctor(1, 2, 0);
} else {
 x_343 = x_342;
}
lean_ctor_set(x_343, 0, x_335);
lean_ctor_set(x_343, 1, x_341);
x_344 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_345 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_345, 0, x_325);
lean_ctor_set(x_345, 1, x_344);
x_346 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_347 = lean_array_push(x_346, x_340);
x_348 = lean_array_push(x_347, x_343);
x_349 = lean_array_push(x_348, x_345);
x_350 = lean_array_push(x_349, x_249);
x_351 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_351);
lean_ctor_set(x_352, 1, x_350);
x_353 = lean_array_push(x_333, x_352);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_335);
lean_ctor_set(x_354, 1, x_353);
x_355 = lean_array_push(x_333, x_354);
x_356 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_355);
x_358 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_359 = lean_array_push(x_358, x_328);
x_360 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_361 = lean_array_push(x_359, x_360);
x_362 = lean_array_push(x_361, x_336);
x_363 = lean_array_push(x_362, x_360);
x_364 = lean_array_push(x_363, x_338);
x_365 = lean_array_push(x_364, x_357);
x_366 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_365);
x_368 = 1;
x_369 = lean_box(x_368);
lean_ctor_set(x_244, 1, x_369);
lean_ctor_set(x_244, 0, x_367);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_243);
lean_ctor_set(x_370, 1, x_326);
return x_370;
}
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; 
x_371 = lean_ctor_get(x_244, 0);
lean_inc(x_371);
lean_dec(x_244);
x_372 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_245);
lean_dec(x_5);
x_373 = lean_ctor_get(x_372, 0);
lean_inc(x_373);
x_374 = lean_ctor_get(x_372, 1);
lean_inc(x_374);
if (lean_is_exclusive(x_372)) {
 lean_ctor_release(x_372, 0);
 lean_ctor_release(x_372, 1);
 x_375 = x_372;
} else {
 lean_dec_ref(x_372);
 x_375 = lean_box(0);
}
x_376 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_373);
x_377 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_377, 0, x_373);
lean_ctor_set(x_377, 1, x_376);
x_378 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_379 = lean_array_push(x_378, x_235);
x_380 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_381 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_381, 1, x_379);
x_382 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_383 = lean_array_push(x_382, x_381);
x_384 = l_Lean_nullKind___closed__2;
x_385 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_383);
x_386 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_373);
x_387 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_387, 0, x_373);
lean_ctor_set(x_387, 1, x_386);
x_388 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_373);
x_389 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_389, 0, x_373);
lean_ctor_set(x_389, 1, x_388);
lean_inc(x_14);
x_390 = lean_array_push(x_382, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_391 = x_14;
} else {
 lean_dec_ref(x_14);
 x_391 = lean_box(0);
}
if (lean_is_scalar(x_391)) {
 x_392 = lean_alloc_ctor(1, 2, 0);
} else {
 x_392 = x_391;
}
lean_ctor_set(x_392, 0, x_384);
lean_ctor_set(x_392, 1, x_390);
x_393 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_394 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_394, 0, x_373);
lean_ctor_set(x_394, 1, x_393);
x_395 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_396 = lean_array_push(x_395, x_389);
x_397 = lean_array_push(x_396, x_392);
x_398 = lean_array_push(x_397, x_394);
x_399 = lean_array_push(x_398, x_371);
x_400 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_401 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_401, 0, x_400);
lean_ctor_set(x_401, 1, x_399);
x_402 = lean_array_push(x_382, x_401);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_384);
lean_ctor_set(x_403, 1, x_402);
x_404 = lean_array_push(x_382, x_403);
x_405 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_405);
lean_ctor_set(x_406, 1, x_404);
x_407 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_408 = lean_array_push(x_407, x_377);
x_409 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_410 = lean_array_push(x_408, x_409);
x_411 = lean_array_push(x_410, x_385);
x_412 = lean_array_push(x_411, x_409);
x_413 = lean_array_push(x_412, x_387);
x_414 = lean_array_push(x_413, x_406);
x_415 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_416, 0, x_415);
lean_ctor_set(x_416, 1, x_414);
x_417 = 1;
x_418 = lean_box(x_417);
x_419 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_419, 0, x_416);
lean_ctor_set(x_419, 1, x_418);
lean_ctor_set(x_243, 1, x_419);
if (lean_is_scalar(x_375)) {
 x_420 = lean_alloc_ctor(0, 2, 0);
} else {
 x_420 = x_375;
}
lean_ctor_set(x_420, 0, x_243);
lean_ctor_set(x_420, 1, x_374);
return x_420;
}
}
else
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; 
x_421 = lean_ctor_get(x_243, 0);
lean_inc(x_421);
lean_dec(x_243);
x_422 = lean_ctor_get(x_244, 0);
lean_inc(x_422);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_423 = x_244;
} else {
 lean_dec_ref(x_244);
 x_423 = lean_box(0);
}
x_424 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_245);
lean_dec(x_5);
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
if (lean_is_exclusive(x_424)) {
 lean_ctor_release(x_424, 0);
 lean_ctor_release(x_424, 1);
 x_427 = x_424;
} else {
 lean_dec_ref(x_424);
 x_427 = lean_box(0);
}
x_428 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_425);
x_429 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_429, 0, x_425);
lean_ctor_set(x_429, 1, x_428);
x_430 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_431 = lean_array_push(x_430, x_235);
x_432 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_431);
x_434 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_435 = lean_array_push(x_434, x_433);
x_436 = l_Lean_nullKind___closed__2;
x_437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_437, 0, x_436);
lean_ctor_set(x_437, 1, x_435);
x_438 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_425);
x_439 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_439, 0, x_425);
lean_ctor_set(x_439, 1, x_438);
x_440 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_425);
x_441 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_441, 0, x_425);
lean_ctor_set(x_441, 1, x_440);
lean_inc(x_14);
x_442 = lean_array_push(x_434, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_443 = x_14;
} else {
 lean_dec_ref(x_14);
 x_443 = lean_box(0);
}
if (lean_is_scalar(x_443)) {
 x_444 = lean_alloc_ctor(1, 2, 0);
} else {
 x_444 = x_443;
}
lean_ctor_set(x_444, 0, x_436);
lean_ctor_set(x_444, 1, x_442);
x_445 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_446 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_446, 0, x_425);
lean_ctor_set(x_446, 1, x_445);
x_447 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_448 = lean_array_push(x_447, x_441);
x_449 = lean_array_push(x_448, x_444);
x_450 = lean_array_push(x_449, x_446);
x_451 = lean_array_push(x_450, x_422);
x_452 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_453 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_453, 0, x_452);
lean_ctor_set(x_453, 1, x_451);
x_454 = lean_array_push(x_434, x_453);
x_455 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_455, 0, x_436);
lean_ctor_set(x_455, 1, x_454);
x_456 = lean_array_push(x_434, x_455);
x_457 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_458 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_458, 0, x_457);
lean_ctor_set(x_458, 1, x_456);
x_459 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_460 = lean_array_push(x_459, x_429);
x_461 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_462 = lean_array_push(x_460, x_461);
x_463 = lean_array_push(x_462, x_437);
x_464 = lean_array_push(x_463, x_461);
x_465 = lean_array_push(x_464, x_439);
x_466 = lean_array_push(x_465, x_458);
x_467 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_468 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_468, 0, x_467);
lean_ctor_set(x_468, 1, x_466);
x_469 = 1;
x_470 = lean_box(x_469);
if (lean_is_scalar(x_423)) {
 x_471 = lean_alloc_ctor(0, 2, 0);
} else {
 x_471 = x_423;
}
lean_ctor_set(x_471, 0, x_468);
lean_ctor_set(x_471, 1, x_470);
x_472 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_472, 0, x_421);
lean_ctor_set(x_472, 1, x_471);
if (lean_is_scalar(x_427)) {
 x_473 = lean_alloc_ctor(0, 2, 0);
} else {
 x_473 = x_427;
}
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_426);
return x_473;
}
}
else
{
lean_object* x_474; uint8_t x_475; 
x_474 = l_Lean_Parser_Syntax_addPrec___closed__3;
x_475 = lean_string_dec_eq(x_230, x_474);
lean_dec(x_230);
if (x_475 == 0)
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; uint8_t x_488; 
lean_dec(x_229);
lean_dec(x_228);
lean_inc(x_5);
x_476 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_476, 1);
lean_inc(x_478);
lean_dec(x_476);
x_479 = lean_unsigned_to_nat(1u);
x_480 = lean_nat_add(x_3, x_479);
lean_dec(x_3);
x_481 = l_Lean_mkHole(x_14);
lean_inc(x_477);
x_482 = l_Lean_Elab_Term_mkExplicitBinder(x_477, x_481);
x_483 = lean_array_push(x_4, x_482);
lean_inc(x_5);
x_484 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_480, x_483, x_5, x_478);
x_485 = lean_ctor_get(x_484, 0);
lean_inc(x_485);
x_486 = lean_ctor_get(x_485, 1);
lean_inc(x_486);
x_487 = lean_ctor_get(x_484, 1);
lean_inc(x_487);
lean_dec(x_484);
x_488 = !lean_is_exclusive(x_485);
if (x_488 == 0)
{
lean_object* x_489; uint8_t x_490; 
x_489 = lean_ctor_get(x_485, 1);
lean_dec(x_489);
x_490 = !lean_is_exclusive(x_486);
if (x_490 == 0)
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; uint8_t x_494; 
x_491 = lean_ctor_get(x_486, 0);
x_492 = lean_ctor_get(x_486, 1);
lean_dec(x_492);
x_493 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_487);
lean_dec(x_5);
x_494 = !lean_is_exclusive(x_493);
if (x_494 == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; uint8_t x_511; 
x_495 = lean_ctor_get(x_493, 0);
x_496 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_495);
x_497 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_497, 0, x_495);
lean_ctor_set(x_497, 1, x_496);
x_498 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_499 = lean_array_push(x_498, x_477);
x_500 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_501 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_501, 0, x_500);
lean_ctor_set(x_501, 1, x_499);
x_502 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_503 = lean_array_push(x_502, x_501);
x_504 = l_Lean_nullKind___closed__2;
x_505 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_505, 0, x_504);
lean_ctor_set(x_505, 1, x_503);
x_506 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_495);
x_507 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_507, 0, x_495);
lean_ctor_set(x_507, 1, x_506);
x_508 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_495);
x_509 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_509, 0, x_495);
lean_ctor_set(x_509, 1, x_508);
lean_inc(x_14);
x_510 = lean_array_push(x_502, x_14);
x_511 = !lean_is_exclusive(x_14);
if (x_511 == 0)
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; uint8_t x_538; lean_object* x_539; 
x_512 = lean_ctor_get(x_14, 1);
lean_dec(x_512);
x_513 = lean_ctor_get(x_14, 0);
lean_dec(x_513);
lean_ctor_set(x_14, 1, x_510);
lean_ctor_set(x_14, 0, x_504);
x_514 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_515 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_515, 0, x_495);
lean_ctor_set(x_515, 1, x_514);
x_516 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_517 = lean_array_push(x_516, x_509);
x_518 = lean_array_push(x_517, x_14);
x_519 = lean_array_push(x_518, x_515);
x_520 = lean_array_push(x_519, x_491);
x_521 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_522 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_522, 0, x_521);
lean_ctor_set(x_522, 1, x_520);
x_523 = lean_array_push(x_502, x_522);
x_524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_524, 0, x_504);
lean_ctor_set(x_524, 1, x_523);
x_525 = lean_array_push(x_502, x_524);
x_526 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_527, 0, x_526);
lean_ctor_set(x_527, 1, x_525);
x_528 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_529 = lean_array_push(x_528, x_497);
x_530 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_531 = lean_array_push(x_529, x_530);
x_532 = lean_array_push(x_531, x_505);
x_533 = lean_array_push(x_532, x_530);
x_534 = lean_array_push(x_533, x_507);
x_535 = lean_array_push(x_534, x_527);
x_536 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_537 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_537, 0, x_536);
lean_ctor_set(x_537, 1, x_535);
x_538 = 1;
x_539 = lean_box(x_538);
lean_ctor_set(x_486, 1, x_539);
lean_ctor_set(x_486, 0, x_537);
lean_ctor_set(x_493, 0, x_485);
return x_493;
}
else
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; uint8_t x_565; lean_object* x_566; 
lean_dec(x_14);
x_540 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_540, 0, x_504);
lean_ctor_set(x_540, 1, x_510);
x_541 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_542 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_542, 0, x_495);
lean_ctor_set(x_542, 1, x_541);
x_543 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_544 = lean_array_push(x_543, x_509);
x_545 = lean_array_push(x_544, x_540);
x_546 = lean_array_push(x_545, x_542);
x_547 = lean_array_push(x_546, x_491);
x_548 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_549 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_549, 0, x_548);
lean_ctor_set(x_549, 1, x_547);
x_550 = lean_array_push(x_502, x_549);
x_551 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_551, 0, x_504);
lean_ctor_set(x_551, 1, x_550);
x_552 = lean_array_push(x_502, x_551);
x_553 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_554 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_554, 0, x_553);
lean_ctor_set(x_554, 1, x_552);
x_555 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_556 = lean_array_push(x_555, x_497);
x_557 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_558 = lean_array_push(x_556, x_557);
x_559 = lean_array_push(x_558, x_505);
x_560 = lean_array_push(x_559, x_557);
x_561 = lean_array_push(x_560, x_507);
x_562 = lean_array_push(x_561, x_554);
x_563 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_564 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_564, 0, x_563);
lean_ctor_set(x_564, 1, x_562);
x_565 = 1;
x_566 = lean_box(x_565);
lean_ctor_set(x_486, 1, x_566);
lean_ctor_set(x_486, 0, x_564);
lean_ctor_set(x_493, 0, x_485);
return x_493;
}
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; uint8_t x_610; lean_object* x_611; lean_object* x_612; 
x_567 = lean_ctor_get(x_493, 0);
x_568 = lean_ctor_get(x_493, 1);
lean_inc(x_568);
lean_inc(x_567);
lean_dec(x_493);
x_569 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_567);
x_570 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_570, 0, x_567);
lean_ctor_set(x_570, 1, x_569);
x_571 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_572 = lean_array_push(x_571, x_477);
x_573 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_574, 0, x_573);
lean_ctor_set(x_574, 1, x_572);
x_575 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_576 = lean_array_push(x_575, x_574);
x_577 = l_Lean_nullKind___closed__2;
x_578 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_578, 0, x_577);
lean_ctor_set(x_578, 1, x_576);
x_579 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_567);
x_580 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_580, 0, x_567);
lean_ctor_set(x_580, 1, x_579);
x_581 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_567);
x_582 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_582, 0, x_567);
lean_ctor_set(x_582, 1, x_581);
lean_inc(x_14);
x_583 = lean_array_push(x_575, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_584 = x_14;
} else {
 lean_dec_ref(x_14);
 x_584 = lean_box(0);
}
if (lean_is_scalar(x_584)) {
 x_585 = lean_alloc_ctor(1, 2, 0);
} else {
 x_585 = x_584;
}
lean_ctor_set(x_585, 0, x_577);
lean_ctor_set(x_585, 1, x_583);
x_586 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_587 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_587, 0, x_567);
lean_ctor_set(x_587, 1, x_586);
x_588 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_589 = lean_array_push(x_588, x_582);
x_590 = lean_array_push(x_589, x_585);
x_591 = lean_array_push(x_590, x_587);
x_592 = lean_array_push(x_591, x_491);
x_593 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_594, 0, x_593);
lean_ctor_set(x_594, 1, x_592);
x_595 = lean_array_push(x_575, x_594);
x_596 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_596, 0, x_577);
lean_ctor_set(x_596, 1, x_595);
x_597 = lean_array_push(x_575, x_596);
x_598 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_599 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_599, 0, x_598);
lean_ctor_set(x_599, 1, x_597);
x_600 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_601 = lean_array_push(x_600, x_570);
x_602 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_603 = lean_array_push(x_601, x_602);
x_604 = lean_array_push(x_603, x_578);
x_605 = lean_array_push(x_604, x_602);
x_606 = lean_array_push(x_605, x_580);
x_607 = lean_array_push(x_606, x_599);
x_608 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_609 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_609, 0, x_608);
lean_ctor_set(x_609, 1, x_607);
x_610 = 1;
x_611 = lean_box(x_610);
lean_ctor_set(x_486, 1, x_611);
lean_ctor_set(x_486, 0, x_609);
x_612 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_612, 0, x_485);
lean_ctor_set(x_612, 1, x_568);
return x_612;
}
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; uint8_t x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; 
x_613 = lean_ctor_get(x_486, 0);
lean_inc(x_613);
lean_dec(x_486);
x_614 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_487);
lean_dec(x_5);
x_615 = lean_ctor_get(x_614, 0);
lean_inc(x_615);
x_616 = lean_ctor_get(x_614, 1);
lean_inc(x_616);
if (lean_is_exclusive(x_614)) {
 lean_ctor_release(x_614, 0);
 lean_ctor_release(x_614, 1);
 x_617 = x_614;
} else {
 lean_dec_ref(x_614);
 x_617 = lean_box(0);
}
x_618 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_615);
x_619 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_619, 0, x_615);
lean_ctor_set(x_619, 1, x_618);
x_620 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_621 = lean_array_push(x_620, x_477);
x_622 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_623 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_623, 0, x_622);
lean_ctor_set(x_623, 1, x_621);
x_624 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_625 = lean_array_push(x_624, x_623);
x_626 = l_Lean_nullKind___closed__2;
x_627 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_627, 0, x_626);
lean_ctor_set(x_627, 1, x_625);
x_628 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_615);
x_629 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_629, 0, x_615);
lean_ctor_set(x_629, 1, x_628);
x_630 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_615);
x_631 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_631, 0, x_615);
lean_ctor_set(x_631, 1, x_630);
lean_inc(x_14);
x_632 = lean_array_push(x_624, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_633 = x_14;
} else {
 lean_dec_ref(x_14);
 x_633 = lean_box(0);
}
if (lean_is_scalar(x_633)) {
 x_634 = lean_alloc_ctor(1, 2, 0);
} else {
 x_634 = x_633;
}
lean_ctor_set(x_634, 0, x_626);
lean_ctor_set(x_634, 1, x_632);
x_635 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_636 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_636, 0, x_615);
lean_ctor_set(x_636, 1, x_635);
x_637 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_638 = lean_array_push(x_637, x_631);
x_639 = lean_array_push(x_638, x_634);
x_640 = lean_array_push(x_639, x_636);
x_641 = lean_array_push(x_640, x_613);
x_642 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_643 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_643, 0, x_642);
lean_ctor_set(x_643, 1, x_641);
x_644 = lean_array_push(x_624, x_643);
x_645 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_645, 0, x_626);
lean_ctor_set(x_645, 1, x_644);
x_646 = lean_array_push(x_624, x_645);
x_647 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_648 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_648, 0, x_647);
lean_ctor_set(x_648, 1, x_646);
x_649 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_650 = lean_array_push(x_649, x_619);
x_651 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_652 = lean_array_push(x_650, x_651);
x_653 = lean_array_push(x_652, x_627);
x_654 = lean_array_push(x_653, x_651);
x_655 = lean_array_push(x_654, x_629);
x_656 = lean_array_push(x_655, x_648);
x_657 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_658 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_658, 0, x_657);
lean_ctor_set(x_658, 1, x_656);
x_659 = 1;
x_660 = lean_box(x_659);
x_661 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_661, 0, x_658);
lean_ctor_set(x_661, 1, x_660);
lean_ctor_set(x_485, 1, x_661);
if (lean_is_scalar(x_617)) {
 x_662 = lean_alloc_ctor(0, 2, 0);
} else {
 x_662 = x_617;
}
lean_ctor_set(x_662, 0, x_485);
lean_ctor_set(x_662, 1, x_616);
return x_662;
}
}
else
{
lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; uint8_t x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; 
x_663 = lean_ctor_get(x_485, 0);
lean_inc(x_663);
lean_dec(x_485);
x_664 = lean_ctor_get(x_486, 0);
lean_inc(x_664);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_665 = x_486;
} else {
 lean_dec_ref(x_486);
 x_665 = lean_box(0);
}
x_666 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_487);
lean_dec(x_5);
x_667 = lean_ctor_get(x_666, 0);
lean_inc(x_667);
x_668 = lean_ctor_get(x_666, 1);
lean_inc(x_668);
if (lean_is_exclusive(x_666)) {
 lean_ctor_release(x_666, 0);
 lean_ctor_release(x_666, 1);
 x_669 = x_666;
} else {
 lean_dec_ref(x_666);
 x_669 = lean_box(0);
}
x_670 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_667);
x_671 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_671, 0, x_667);
lean_ctor_set(x_671, 1, x_670);
x_672 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_673 = lean_array_push(x_672, x_477);
x_674 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_675, 0, x_674);
lean_ctor_set(x_675, 1, x_673);
x_676 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_677 = lean_array_push(x_676, x_675);
x_678 = l_Lean_nullKind___closed__2;
x_679 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_679, 0, x_678);
lean_ctor_set(x_679, 1, x_677);
x_680 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_667);
x_681 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_681, 0, x_667);
lean_ctor_set(x_681, 1, x_680);
x_682 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_667);
x_683 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_683, 0, x_667);
lean_ctor_set(x_683, 1, x_682);
lean_inc(x_14);
x_684 = lean_array_push(x_676, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_685 = x_14;
} else {
 lean_dec_ref(x_14);
 x_685 = lean_box(0);
}
if (lean_is_scalar(x_685)) {
 x_686 = lean_alloc_ctor(1, 2, 0);
} else {
 x_686 = x_685;
}
lean_ctor_set(x_686, 0, x_678);
lean_ctor_set(x_686, 1, x_684);
x_687 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_688 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_688, 0, x_667);
lean_ctor_set(x_688, 1, x_687);
x_689 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_690 = lean_array_push(x_689, x_683);
x_691 = lean_array_push(x_690, x_686);
x_692 = lean_array_push(x_691, x_688);
x_693 = lean_array_push(x_692, x_664);
x_694 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_695 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_695, 0, x_694);
lean_ctor_set(x_695, 1, x_693);
x_696 = lean_array_push(x_676, x_695);
x_697 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_697, 0, x_678);
lean_ctor_set(x_697, 1, x_696);
x_698 = lean_array_push(x_676, x_697);
x_699 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_700 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_700, 0, x_699);
lean_ctor_set(x_700, 1, x_698);
x_701 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_702 = lean_array_push(x_701, x_671);
x_703 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_704 = lean_array_push(x_702, x_703);
x_705 = lean_array_push(x_704, x_679);
x_706 = lean_array_push(x_705, x_703);
x_707 = lean_array_push(x_706, x_681);
x_708 = lean_array_push(x_707, x_700);
x_709 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_710 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_710, 0, x_709);
lean_ctor_set(x_710, 1, x_708);
x_711 = 1;
x_712 = lean_box(x_711);
if (lean_is_scalar(x_665)) {
 x_713 = lean_alloc_ctor(0, 2, 0);
} else {
 x_713 = x_665;
}
lean_ctor_set(x_713, 0, x_710);
lean_ctor_set(x_713, 1, x_712);
x_714 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_714, 0, x_663);
lean_ctor_set(x_714, 1, x_713);
if (lean_is_scalar(x_669)) {
 x_715 = lean_alloc_ctor(0, 2, 0);
} else {
 x_715 = x_669;
}
lean_ctor_set(x_715, 0, x_714);
lean_ctor_set(x_715, 1, x_668);
return x_715;
}
}
else
{
lean_object* x_716; uint8_t x_717; 
x_716 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
x_717 = lean_string_dec_eq(x_229, x_716);
lean_dec(x_229);
if (x_717 == 0)
{
lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; uint8_t x_730; 
lean_dec(x_228);
lean_inc(x_5);
x_718 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_719 = lean_ctor_get(x_718, 0);
lean_inc(x_719);
x_720 = lean_ctor_get(x_718, 1);
lean_inc(x_720);
lean_dec(x_718);
x_721 = lean_unsigned_to_nat(1u);
x_722 = lean_nat_add(x_3, x_721);
lean_dec(x_3);
x_723 = l_Lean_mkHole(x_14);
lean_inc(x_719);
x_724 = l_Lean_Elab_Term_mkExplicitBinder(x_719, x_723);
x_725 = lean_array_push(x_4, x_724);
lean_inc(x_5);
x_726 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_722, x_725, x_5, x_720);
x_727 = lean_ctor_get(x_726, 0);
lean_inc(x_727);
x_728 = lean_ctor_get(x_727, 1);
lean_inc(x_728);
x_729 = lean_ctor_get(x_726, 1);
lean_inc(x_729);
lean_dec(x_726);
x_730 = !lean_is_exclusive(x_727);
if (x_730 == 0)
{
lean_object* x_731; uint8_t x_732; 
x_731 = lean_ctor_get(x_727, 1);
lean_dec(x_731);
x_732 = !lean_is_exclusive(x_728);
if (x_732 == 0)
{
lean_object* x_733; lean_object* x_734; lean_object* x_735; uint8_t x_736; 
x_733 = lean_ctor_get(x_728, 0);
x_734 = lean_ctor_get(x_728, 1);
lean_dec(x_734);
x_735 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_729);
lean_dec(x_5);
x_736 = !lean_is_exclusive(x_735);
if (x_736 == 0)
{
lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; uint8_t x_753; 
x_737 = lean_ctor_get(x_735, 0);
x_738 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_737);
x_739 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_739, 0, x_737);
lean_ctor_set(x_739, 1, x_738);
x_740 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_741 = lean_array_push(x_740, x_719);
x_742 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_743 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_743, 0, x_742);
lean_ctor_set(x_743, 1, x_741);
x_744 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_745 = lean_array_push(x_744, x_743);
x_746 = l_Lean_nullKind___closed__2;
x_747 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_747, 0, x_746);
lean_ctor_set(x_747, 1, x_745);
x_748 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_737);
x_749 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_749, 0, x_737);
lean_ctor_set(x_749, 1, x_748);
x_750 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_737);
x_751 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_751, 0, x_737);
lean_ctor_set(x_751, 1, x_750);
lean_inc(x_14);
x_752 = lean_array_push(x_744, x_14);
x_753 = !lean_is_exclusive(x_14);
if (x_753 == 0)
{
lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; uint8_t x_780; lean_object* x_781; 
x_754 = lean_ctor_get(x_14, 1);
lean_dec(x_754);
x_755 = lean_ctor_get(x_14, 0);
lean_dec(x_755);
lean_ctor_set(x_14, 1, x_752);
lean_ctor_set(x_14, 0, x_746);
x_756 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_757 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_757, 0, x_737);
lean_ctor_set(x_757, 1, x_756);
x_758 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_759 = lean_array_push(x_758, x_751);
x_760 = lean_array_push(x_759, x_14);
x_761 = lean_array_push(x_760, x_757);
x_762 = lean_array_push(x_761, x_733);
x_763 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_764 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_764, 0, x_763);
lean_ctor_set(x_764, 1, x_762);
x_765 = lean_array_push(x_744, x_764);
x_766 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_766, 0, x_746);
lean_ctor_set(x_766, 1, x_765);
x_767 = lean_array_push(x_744, x_766);
x_768 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_769 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_769, 0, x_768);
lean_ctor_set(x_769, 1, x_767);
x_770 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_771 = lean_array_push(x_770, x_739);
x_772 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_773 = lean_array_push(x_771, x_772);
x_774 = lean_array_push(x_773, x_747);
x_775 = lean_array_push(x_774, x_772);
x_776 = lean_array_push(x_775, x_749);
x_777 = lean_array_push(x_776, x_769);
x_778 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_779 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_779, 0, x_778);
lean_ctor_set(x_779, 1, x_777);
x_780 = 1;
x_781 = lean_box(x_780);
lean_ctor_set(x_728, 1, x_781);
lean_ctor_set(x_728, 0, x_779);
lean_ctor_set(x_735, 0, x_727);
return x_735;
}
else
{
lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; uint8_t x_807; lean_object* x_808; 
lean_dec(x_14);
x_782 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_782, 0, x_746);
lean_ctor_set(x_782, 1, x_752);
x_783 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_784 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_784, 0, x_737);
lean_ctor_set(x_784, 1, x_783);
x_785 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_786 = lean_array_push(x_785, x_751);
x_787 = lean_array_push(x_786, x_782);
x_788 = lean_array_push(x_787, x_784);
x_789 = lean_array_push(x_788, x_733);
x_790 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_791 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_791, 0, x_790);
lean_ctor_set(x_791, 1, x_789);
x_792 = lean_array_push(x_744, x_791);
x_793 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_793, 0, x_746);
lean_ctor_set(x_793, 1, x_792);
x_794 = lean_array_push(x_744, x_793);
x_795 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_796 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_796, 0, x_795);
lean_ctor_set(x_796, 1, x_794);
x_797 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_798 = lean_array_push(x_797, x_739);
x_799 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_800 = lean_array_push(x_798, x_799);
x_801 = lean_array_push(x_800, x_747);
x_802 = lean_array_push(x_801, x_799);
x_803 = lean_array_push(x_802, x_749);
x_804 = lean_array_push(x_803, x_796);
x_805 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_806 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_806, 0, x_805);
lean_ctor_set(x_806, 1, x_804);
x_807 = 1;
x_808 = lean_box(x_807);
lean_ctor_set(x_728, 1, x_808);
lean_ctor_set(x_728, 0, x_806);
lean_ctor_set(x_735, 0, x_727);
return x_735;
}
}
else
{
lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; uint8_t x_852; lean_object* x_853; lean_object* x_854; 
x_809 = lean_ctor_get(x_735, 0);
x_810 = lean_ctor_get(x_735, 1);
lean_inc(x_810);
lean_inc(x_809);
lean_dec(x_735);
x_811 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_809);
x_812 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_812, 0, x_809);
lean_ctor_set(x_812, 1, x_811);
x_813 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_814 = lean_array_push(x_813, x_719);
x_815 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_816 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_816, 0, x_815);
lean_ctor_set(x_816, 1, x_814);
x_817 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_818 = lean_array_push(x_817, x_816);
x_819 = l_Lean_nullKind___closed__2;
x_820 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_820, 0, x_819);
lean_ctor_set(x_820, 1, x_818);
x_821 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_809);
x_822 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_822, 0, x_809);
lean_ctor_set(x_822, 1, x_821);
x_823 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_809);
x_824 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_824, 0, x_809);
lean_ctor_set(x_824, 1, x_823);
lean_inc(x_14);
x_825 = lean_array_push(x_817, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_826 = x_14;
} else {
 lean_dec_ref(x_14);
 x_826 = lean_box(0);
}
if (lean_is_scalar(x_826)) {
 x_827 = lean_alloc_ctor(1, 2, 0);
} else {
 x_827 = x_826;
}
lean_ctor_set(x_827, 0, x_819);
lean_ctor_set(x_827, 1, x_825);
x_828 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_829 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_829, 0, x_809);
lean_ctor_set(x_829, 1, x_828);
x_830 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_831 = lean_array_push(x_830, x_824);
x_832 = lean_array_push(x_831, x_827);
x_833 = lean_array_push(x_832, x_829);
x_834 = lean_array_push(x_833, x_733);
x_835 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_836 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_836, 0, x_835);
lean_ctor_set(x_836, 1, x_834);
x_837 = lean_array_push(x_817, x_836);
x_838 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_838, 0, x_819);
lean_ctor_set(x_838, 1, x_837);
x_839 = lean_array_push(x_817, x_838);
x_840 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_841 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_841, 0, x_840);
lean_ctor_set(x_841, 1, x_839);
x_842 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_843 = lean_array_push(x_842, x_812);
x_844 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_845 = lean_array_push(x_843, x_844);
x_846 = lean_array_push(x_845, x_820);
x_847 = lean_array_push(x_846, x_844);
x_848 = lean_array_push(x_847, x_822);
x_849 = lean_array_push(x_848, x_841);
x_850 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_851 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_851, 0, x_850);
lean_ctor_set(x_851, 1, x_849);
x_852 = 1;
x_853 = lean_box(x_852);
lean_ctor_set(x_728, 1, x_853);
lean_ctor_set(x_728, 0, x_851);
x_854 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_854, 0, x_727);
lean_ctor_set(x_854, 1, x_810);
return x_854;
}
}
else
{
lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; uint8_t x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; 
x_855 = lean_ctor_get(x_728, 0);
lean_inc(x_855);
lean_dec(x_728);
x_856 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_729);
lean_dec(x_5);
x_857 = lean_ctor_get(x_856, 0);
lean_inc(x_857);
x_858 = lean_ctor_get(x_856, 1);
lean_inc(x_858);
if (lean_is_exclusive(x_856)) {
 lean_ctor_release(x_856, 0);
 lean_ctor_release(x_856, 1);
 x_859 = x_856;
} else {
 lean_dec_ref(x_856);
 x_859 = lean_box(0);
}
x_860 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_857);
x_861 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_861, 0, x_857);
lean_ctor_set(x_861, 1, x_860);
x_862 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_863 = lean_array_push(x_862, x_719);
x_864 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_865 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_865, 0, x_864);
lean_ctor_set(x_865, 1, x_863);
x_866 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_867 = lean_array_push(x_866, x_865);
x_868 = l_Lean_nullKind___closed__2;
x_869 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_869, 0, x_868);
lean_ctor_set(x_869, 1, x_867);
x_870 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_857);
x_871 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_871, 0, x_857);
lean_ctor_set(x_871, 1, x_870);
x_872 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_857);
x_873 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_873, 0, x_857);
lean_ctor_set(x_873, 1, x_872);
lean_inc(x_14);
x_874 = lean_array_push(x_866, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_875 = x_14;
} else {
 lean_dec_ref(x_14);
 x_875 = lean_box(0);
}
if (lean_is_scalar(x_875)) {
 x_876 = lean_alloc_ctor(1, 2, 0);
} else {
 x_876 = x_875;
}
lean_ctor_set(x_876, 0, x_868);
lean_ctor_set(x_876, 1, x_874);
x_877 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_878 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_878, 0, x_857);
lean_ctor_set(x_878, 1, x_877);
x_879 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_880 = lean_array_push(x_879, x_873);
x_881 = lean_array_push(x_880, x_876);
x_882 = lean_array_push(x_881, x_878);
x_883 = lean_array_push(x_882, x_855);
x_884 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_885 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_885, 0, x_884);
lean_ctor_set(x_885, 1, x_883);
x_886 = lean_array_push(x_866, x_885);
x_887 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_887, 0, x_868);
lean_ctor_set(x_887, 1, x_886);
x_888 = lean_array_push(x_866, x_887);
x_889 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_890 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_890, 0, x_889);
lean_ctor_set(x_890, 1, x_888);
x_891 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_892 = lean_array_push(x_891, x_861);
x_893 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_894 = lean_array_push(x_892, x_893);
x_895 = lean_array_push(x_894, x_869);
x_896 = lean_array_push(x_895, x_893);
x_897 = lean_array_push(x_896, x_871);
x_898 = lean_array_push(x_897, x_890);
x_899 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_900 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_900, 0, x_899);
lean_ctor_set(x_900, 1, x_898);
x_901 = 1;
x_902 = lean_box(x_901);
x_903 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_903, 0, x_900);
lean_ctor_set(x_903, 1, x_902);
lean_ctor_set(x_727, 1, x_903);
if (lean_is_scalar(x_859)) {
 x_904 = lean_alloc_ctor(0, 2, 0);
} else {
 x_904 = x_859;
}
lean_ctor_set(x_904, 0, x_727);
lean_ctor_set(x_904, 1, x_858);
return x_904;
}
}
else
{
lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; uint8_t x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; 
x_905 = lean_ctor_get(x_727, 0);
lean_inc(x_905);
lean_dec(x_727);
x_906 = lean_ctor_get(x_728, 0);
lean_inc(x_906);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_907 = x_728;
} else {
 lean_dec_ref(x_728);
 x_907 = lean_box(0);
}
x_908 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_729);
lean_dec(x_5);
x_909 = lean_ctor_get(x_908, 0);
lean_inc(x_909);
x_910 = lean_ctor_get(x_908, 1);
lean_inc(x_910);
if (lean_is_exclusive(x_908)) {
 lean_ctor_release(x_908, 0);
 lean_ctor_release(x_908, 1);
 x_911 = x_908;
} else {
 lean_dec_ref(x_908);
 x_911 = lean_box(0);
}
x_912 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_909);
x_913 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_913, 0, x_909);
lean_ctor_set(x_913, 1, x_912);
x_914 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_915 = lean_array_push(x_914, x_719);
x_916 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_917 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_917, 0, x_916);
lean_ctor_set(x_917, 1, x_915);
x_918 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_919 = lean_array_push(x_918, x_917);
x_920 = l_Lean_nullKind___closed__2;
x_921 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_921, 0, x_920);
lean_ctor_set(x_921, 1, x_919);
x_922 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_909);
x_923 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_923, 0, x_909);
lean_ctor_set(x_923, 1, x_922);
x_924 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_909);
x_925 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_925, 0, x_909);
lean_ctor_set(x_925, 1, x_924);
lean_inc(x_14);
x_926 = lean_array_push(x_918, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_927 = x_14;
} else {
 lean_dec_ref(x_14);
 x_927 = lean_box(0);
}
if (lean_is_scalar(x_927)) {
 x_928 = lean_alloc_ctor(1, 2, 0);
} else {
 x_928 = x_927;
}
lean_ctor_set(x_928, 0, x_920);
lean_ctor_set(x_928, 1, x_926);
x_929 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_930 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_930, 0, x_909);
lean_ctor_set(x_930, 1, x_929);
x_931 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_932 = lean_array_push(x_931, x_925);
x_933 = lean_array_push(x_932, x_928);
x_934 = lean_array_push(x_933, x_930);
x_935 = lean_array_push(x_934, x_906);
x_936 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_937 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_937, 0, x_936);
lean_ctor_set(x_937, 1, x_935);
x_938 = lean_array_push(x_918, x_937);
x_939 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_939, 0, x_920);
lean_ctor_set(x_939, 1, x_938);
x_940 = lean_array_push(x_918, x_939);
x_941 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_942 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_942, 0, x_941);
lean_ctor_set(x_942, 1, x_940);
x_943 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_944 = lean_array_push(x_943, x_913);
x_945 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_946 = lean_array_push(x_944, x_945);
x_947 = lean_array_push(x_946, x_921);
x_948 = lean_array_push(x_947, x_945);
x_949 = lean_array_push(x_948, x_923);
x_950 = lean_array_push(x_949, x_942);
x_951 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_952 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_952, 0, x_951);
lean_ctor_set(x_952, 1, x_950);
x_953 = 1;
x_954 = lean_box(x_953);
if (lean_is_scalar(x_907)) {
 x_955 = lean_alloc_ctor(0, 2, 0);
} else {
 x_955 = x_907;
}
lean_ctor_set(x_955, 0, x_952);
lean_ctor_set(x_955, 1, x_954);
x_956 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_956, 0, x_905);
lean_ctor_set(x_956, 1, x_955);
if (lean_is_scalar(x_911)) {
 x_957 = lean_alloc_ctor(0, 2, 0);
} else {
 x_957 = x_911;
}
lean_ctor_set(x_957, 0, x_956);
lean_ctor_set(x_957, 1, x_910);
return x_957;
}
}
else
{
lean_object* x_958; uint8_t x_959; 
x_958 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_959 = lean_string_dec_eq(x_228, x_958);
if (x_959 == 0)
{
lean_object* x_960; uint8_t x_961; 
x_960 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
x_961 = lean_string_dec_eq(x_228, x_960);
if (x_961 == 0)
{
lean_object* x_962; uint8_t x_963; 
x_962 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_963 = lean_string_dec_eq(x_228, x_962);
if (x_963 == 0)
{
lean_object* x_964; uint8_t x_965; 
x_964 = l_Lean_expandExplicitBindersAux_loop___closed__1;
x_965 = lean_string_dec_eq(x_228, x_964);
if (x_965 == 0)
{
lean_object* x_966; uint8_t x_967; 
x_966 = l_myMacro____x40_Init_Notation___hyg_13362____closed__12;
x_967 = lean_string_dec_eq(x_228, x_966);
if (x_967 == 0)
{
lean_object* x_968; uint8_t x_969; 
x_968 = l_myMacro____x40_Init_Notation___hyg_12862____closed__7;
x_969 = lean_string_dec_eq(x_228, x_968);
lean_dec(x_228);
if (x_969 == 0)
{
lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; uint8_t x_982; 
lean_inc(x_5);
x_970 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_971 = lean_ctor_get(x_970, 0);
lean_inc(x_971);
x_972 = lean_ctor_get(x_970, 1);
lean_inc(x_972);
lean_dec(x_970);
x_973 = lean_unsigned_to_nat(1u);
x_974 = lean_nat_add(x_3, x_973);
lean_dec(x_3);
x_975 = l_Lean_mkHole(x_14);
lean_inc(x_971);
x_976 = l_Lean_Elab_Term_mkExplicitBinder(x_971, x_975);
x_977 = lean_array_push(x_4, x_976);
lean_inc(x_5);
x_978 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_974, x_977, x_5, x_972);
x_979 = lean_ctor_get(x_978, 0);
lean_inc(x_979);
x_980 = lean_ctor_get(x_979, 1);
lean_inc(x_980);
x_981 = lean_ctor_get(x_978, 1);
lean_inc(x_981);
lean_dec(x_978);
x_982 = !lean_is_exclusive(x_979);
if (x_982 == 0)
{
lean_object* x_983; uint8_t x_984; 
x_983 = lean_ctor_get(x_979, 1);
lean_dec(x_983);
x_984 = !lean_is_exclusive(x_980);
if (x_984 == 0)
{
lean_object* x_985; lean_object* x_986; lean_object* x_987; uint8_t x_988; 
x_985 = lean_ctor_get(x_980, 0);
x_986 = lean_ctor_get(x_980, 1);
lean_dec(x_986);
x_987 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_981);
lean_dec(x_5);
x_988 = !lean_is_exclusive(x_987);
if (x_988 == 0)
{
lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; uint8_t x_1005; 
x_989 = lean_ctor_get(x_987, 0);
x_990 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_989);
x_991 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_991, 0, x_989);
lean_ctor_set(x_991, 1, x_990);
x_992 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_993 = lean_array_push(x_992, x_971);
x_994 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_995 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_995, 0, x_994);
lean_ctor_set(x_995, 1, x_993);
x_996 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_997 = lean_array_push(x_996, x_995);
x_998 = l_Lean_nullKind___closed__2;
x_999 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_999, 0, x_998);
lean_ctor_set(x_999, 1, x_997);
x_1000 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_989);
x_1001 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1001, 0, x_989);
lean_ctor_set(x_1001, 1, x_1000);
x_1002 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_989);
x_1003 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1003, 0, x_989);
lean_ctor_set(x_1003, 1, x_1002);
lean_inc(x_14);
x_1004 = lean_array_push(x_996, x_14);
x_1005 = !lean_is_exclusive(x_14);
if (x_1005 == 0)
{
lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; uint8_t x_1032; lean_object* x_1033; 
x_1006 = lean_ctor_get(x_14, 1);
lean_dec(x_1006);
x_1007 = lean_ctor_get(x_14, 0);
lean_dec(x_1007);
lean_ctor_set(x_14, 1, x_1004);
lean_ctor_set(x_14, 0, x_998);
x_1008 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1009 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1009, 0, x_989);
lean_ctor_set(x_1009, 1, x_1008);
x_1010 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1011 = lean_array_push(x_1010, x_1003);
x_1012 = lean_array_push(x_1011, x_14);
x_1013 = lean_array_push(x_1012, x_1009);
x_1014 = lean_array_push(x_1013, x_985);
x_1015 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1016 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1016, 0, x_1015);
lean_ctor_set(x_1016, 1, x_1014);
x_1017 = lean_array_push(x_996, x_1016);
x_1018 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1018, 0, x_998);
lean_ctor_set(x_1018, 1, x_1017);
x_1019 = lean_array_push(x_996, x_1018);
x_1020 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1021 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1021, 0, x_1020);
lean_ctor_set(x_1021, 1, x_1019);
x_1022 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1023 = lean_array_push(x_1022, x_991);
x_1024 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1025 = lean_array_push(x_1023, x_1024);
x_1026 = lean_array_push(x_1025, x_999);
x_1027 = lean_array_push(x_1026, x_1024);
x_1028 = lean_array_push(x_1027, x_1001);
x_1029 = lean_array_push(x_1028, x_1021);
x_1030 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1031 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1031, 0, x_1030);
lean_ctor_set(x_1031, 1, x_1029);
x_1032 = 1;
x_1033 = lean_box(x_1032);
lean_ctor_set(x_980, 1, x_1033);
lean_ctor_set(x_980, 0, x_1031);
lean_ctor_set(x_987, 0, x_979);
return x_987;
}
else
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; uint8_t x_1059; lean_object* x_1060; 
lean_dec(x_14);
x_1034 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1034, 0, x_998);
lean_ctor_set(x_1034, 1, x_1004);
x_1035 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1036 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1036, 0, x_989);
lean_ctor_set(x_1036, 1, x_1035);
x_1037 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1038 = lean_array_push(x_1037, x_1003);
x_1039 = lean_array_push(x_1038, x_1034);
x_1040 = lean_array_push(x_1039, x_1036);
x_1041 = lean_array_push(x_1040, x_985);
x_1042 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1043 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1043, 0, x_1042);
lean_ctor_set(x_1043, 1, x_1041);
x_1044 = lean_array_push(x_996, x_1043);
x_1045 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1045, 0, x_998);
lean_ctor_set(x_1045, 1, x_1044);
x_1046 = lean_array_push(x_996, x_1045);
x_1047 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1048 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1048, 0, x_1047);
lean_ctor_set(x_1048, 1, x_1046);
x_1049 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1050 = lean_array_push(x_1049, x_991);
x_1051 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1052 = lean_array_push(x_1050, x_1051);
x_1053 = lean_array_push(x_1052, x_999);
x_1054 = lean_array_push(x_1053, x_1051);
x_1055 = lean_array_push(x_1054, x_1001);
x_1056 = lean_array_push(x_1055, x_1048);
x_1057 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1058 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1058, 0, x_1057);
lean_ctor_set(x_1058, 1, x_1056);
x_1059 = 1;
x_1060 = lean_box(x_1059);
lean_ctor_set(x_980, 1, x_1060);
lean_ctor_set(x_980, 0, x_1058);
lean_ctor_set(x_987, 0, x_979);
return x_987;
}
}
else
{
lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; uint8_t x_1104; lean_object* x_1105; lean_object* x_1106; 
x_1061 = lean_ctor_get(x_987, 0);
x_1062 = lean_ctor_get(x_987, 1);
lean_inc(x_1062);
lean_inc(x_1061);
lean_dec(x_987);
x_1063 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1061);
x_1064 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1064, 0, x_1061);
lean_ctor_set(x_1064, 1, x_1063);
x_1065 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1066 = lean_array_push(x_1065, x_971);
x_1067 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1068 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1068, 0, x_1067);
lean_ctor_set(x_1068, 1, x_1066);
x_1069 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1070 = lean_array_push(x_1069, x_1068);
x_1071 = l_Lean_nullKind___closed__2;
x_1072 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1072, 0, x_1071);
lean_ctor_set(x_1072, 1, x_1070);
x_1073 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1061);
x_1074 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1074, 0, x_1061);
lean_ctor_set(x_1074, 1, x_1073);
x_1075 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1061);
x_1076 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1076, 0, x_1061);
lean_ctor_set(x_1076, 1, x_1075);
lean_inc(x_14);
x_1077 = lean_array_push(x_1069, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1078 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1078 = lean_box(0);
}
if (lean_is_scalar(x_1078)) {
 x_1079 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1079 = x_1078;
}
lean_ctor_set(x_1079, 0, x_1071);
lean_ctor_set(x_1079, 1, x_1077);
x_1080 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1081 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1081, 0, x_1061);
lean_ctor_set(x_1081, 1, x_1080);
x_1082 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1083 = lean_array_push(x_1082, x_1076);
x_1084 = lean_array_push(x_1083, x_1079);
x_1085 = lean_array_push(x_1084, x_1081);
x_1086 = lean_array_push(x_1085, x_985);
x_1087 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1088 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1088, 0, x_1087);
lean_ctor_set(x_1088, 1, x_1086);
x_1089 = lean_array_push(x_1069, x_1088);
x_1090 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1090, 0, x_1071);
lean_ctor_set(x_1090, 1, x_1089);
x_1091 = lean_array_push(x_1069, x_1090);
x_1092 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1093 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1093, 0, x_1092);
lean_ctor_set(x_1093, 1, x_1091);
x_1094 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1095 = lean_array_push(x_1094, x_1064);
x_1096 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1097 = lean_array_push(x_1095, x_1096);
x_1098 = lean_array_push(x_1097, x_1072);
x_1099 = lean_array_push(x_1098, x_1096);
x_1100 = lean_array_push(x_1099, x_1074);
x_1101 = lean_array_push(x_1100, x_1093);
x_1102 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1103, 0, x_1102);
lean_ctor_set(x_1103, 1, x_1101);
x_1104 = 1;
x_1105 = lean_box(x_1104);
lean_ctor_set(x_980, 1, x_1105);
lean_ctor_set(x_980, 0, x_1103);
x_1106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1106, 0, x_979);
lean_ctor_set(x_1106, 1, x_1062);
return x_1106;
}
}
else
{
lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; uint8_t x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; 
x_1107 = lean_ctor_get(x_980, 0);
lean_inc(x_1107);
lean_dec(x_980);
x_1108 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_981);
lean_dec(x_5);
x_1109 = lean_ctor_get(x_1108, 0);
lean_inc(x_1109);
x_1110 = lean_ctor_get(x_1108, 1);
lean_inc(x_1110);
if (lean_is_exclusive(x_1108)) {
 lean_ctor_release(x_1108, 0);
 lean_ctor_release(x_1108, 1);
 x_1111 = x_1108;
} else {
 lean_dec_ref(x_1108);
 x_1111 = lean_box(0);
}
x_1112 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1109);
x_1113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1113, 0, x_1109);
lean_ctor_set(x_1113, 1, x_1112);
x_1114 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1115 = lean_array_push(x_1114, x_971);
x_1116 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1117, 0, x_1116);
lean_ctor_set(x_1117, 1, x_1115);
x_1118 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1119 = lean_array_push(x_1118, x_1117);
x_1120 = l_Lean_nullKind___closed__2;
x_1121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1121, 0, x_1120);
lean_ctor_set(x_1121, 1, x_1119);
x_1122 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1109);
x_1123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1123, 0, x_1109);
lean_ctor_set(x_1123, 1, x_1122);
x_1124 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1109);
x_1125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1125, 0, x_1109);
lean_ctor_set(x_1125, 1, x_1124);
lean_inc(x_14);
x_1126 = lean_array_push(x_1118, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1127 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1127 = lean_box(0);
}
if (lean_is_scalar(x_1127)) {
 x_1128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1128 = x_1127;
}
lean_ctor_set(x_1128, 0, x_1120);
lean_ctor_set(x_1128, 1, x_1126);
x_1129 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1130 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1130, 0, x_1109);
lean_ctor_set(x_1130, 1, x_1129);
x_1131 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1132 = lean_array_push(x_1131, x_1125);
x_1133 = lean_array_push(x_1132, x_1128);
x_1134 = lean_array_push(x_1133, x_1130);
x_1135 = lean_array_push(x_1134, x_1107);
x_1136 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1137, 0, x_1136);
lean_ctor_set(x_1137, 1, x_1135);
x_1138 = lean_array_push(x_1118, x_1137);
x_1139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1139, 0, x_1120);
lean_ctor_set(x_1139, 1, x_1138);
x_1140 = lean_array_push(x_1118, x_1139);
x_1141 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1142, 0, x_1141);
lean_ctor_set(x_1142, 1, x_1140);
x_1143 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1144 = lean_array_push(x_1143, x_1113);
x_1145 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1146 = lean_array_push(x_1144, x_1145);
x_1147 = lean_array_push(x_1146, x_1121);
x_1148 = lean_array_push(x_1147, x_1145);
x_1149 = lean_array_push(x_1148, x_1123);
x_1150 = lean_array_push(x_1149, x_1142);
x_1151 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1152, 0, x_1151);
lean_ctor_set(x_1152, 1, x_1150);
x_1153 = 1;
x_1154 = lean_box(x_1153);
x_1155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1155, 0, x_1152);
lean_ctor_set(x_1155, 1, x_1154);
lean_ctor_set(x_979, 1, x_1155);
if (lean_is_scalar(x_1111)) {
 x_1156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1156 = x_1111;
}
lean_ctor_set(x_1156, 0, x_979);
lean_ctor_set(x_1156, 1, x_1110);
return x_1156;
}
}
else
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; uint8_t x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; 
x_1157 = lean_ctor_get(x_979, 0);
lean_inc(x_1157);
lean_dec(x_979);
x_1158 = lean_ctor_get(x_980, 0);
lean_inc(x_1158);
if (lean_is_exclusive(x_980)) {
 lean_ctor_release(x_980, 0);
 lean_ctor_release(x_980, 1);
 x_1159 = x_980;
} else {
 lean_dec_ref(x_980);
 x_1159 = lean_box(0);
}
x_1160 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_981);
lean_dec(x_5);
x_1161 = lean_ctor_get(x_1160, 0);
lean_inc(x_1161);
x_1162 = lean_ctor_get(x_1160, 1);
lean_inc(x_1162);
if (lean_is_exclusive(x_1160)) {
 lean_ctor_release(x_1160, 0);
 lean_ctor_release(x_1160, 1);
 x_1163 = x_1160;
} else {
 lean_dec_ref(x_1160);
 x_1163 = lean_box(0);
}
x_1164 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1161);
x_1165 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1165, 0, x_1161);
lean_ctor_set(x_1165, 1, x_1164);
x_1166 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1167 = lean_array_push(x_1166, x_971);
x_1168 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1169, 0, x_1168);
lean_ctor_set(x_1169, 1, x_1167);
x_1170 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1171 = lean_array_push(x_1170, x_1169);
x_1172 = l_Lean_nullKind___closed__2;
x_1173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1173, 0, x_1172);
lean_ctor_set(x_1173, 1, x_1171);
x_1174 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1161);
x_1175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1175, 0, x_1161);
lean_ctor_set(x_1175, 1, x_1174);
x_1176 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1161);
x_1177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1177, 0, x_1161);
lean_ctor_set(x_1177, 1, x_1176);
lean_inc(x_14);
x_1178 = lean_array_push(x_1170, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1179 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1179 = lean_box(0);
}
if (lean_is_scalar(x_1179)) {
 x_1180 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1180 = x_1179;
}
lean_ctor_set(x_1180, 0, x_1172);
lean_ctor_set(x_1180, 1, x_1178);
x_1181 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1182 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1182, 0, x_1161);
lean_ctor_set(x_1182, 1, x_1181);
x_1183 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1184 = lean_array_push(x_1183, x_1177);
x_1185 = lean_array_push(x_1184, x_1180);
x_1186 = lean_array_push(x_1185, x_1182);
x_1187 = lean_array_push(x_1186, x_1158);
x_1188 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1189, 0, x_1188);
lean_ctor_set(x_1189, 1, x_1187);
x_1190 = lean_array_push(x_1170, x_1189);
x_1191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1191, 0, x_1172);
lean_ctor_set(x_1191, 1, x_1190);
x_1192 = lean_array_push(x_1170, x_1191);
x_1193 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1194, 0, x_1193);
lean_ctor_set(x_1194, 1, x_1192);
x_1195 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1196 = lean_array_push(x_1195, x_1165);
x_1197 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1198 = lean_array_push(x_1196, x_1197);
x_1199 = lean_array_push(x_1198, x_1173);
x_1200 = lean_array_push(x_1199, x_1197);
x_1201 = lean_array_push(x_1200, x_1175);
x_1202 = lean_array_push(x_1201, x_1194);
x_1203 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1204, 0, x_1203);
lean_ctor_set(x_1204, 1, x_1202);
x_1205 = 1;
x_1206 = lean_box(x_1205);
if (lean_is_scalar(x_1159)) {
 x_1207 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1207 = x_1159;
}
lean_ctor_set(x_1207, 0, x_1204);
lean_ctor_set(x_1207, 1, x_1206);
x_1208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1208, 0, x_1157);
lean_ctor_set(x_1208, 1, x_1207);
if (lean_is_scalar(x_1163)) {
 x_1209 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1209 = x_1163;
}
lean_ctor_set(x_1209, 0, x_1208);
lean_ctor_set(x_1209, 1, x_1162);
return x_1209;
}
}
else
{
lean_object* x_1210; lean_object* x_1211; uint8_t x_1212; 
x_1210 = lean_unsigned_to_nat(1u);
x_1211 = l_Lean_Syntax_getArg(x_14, x_1210);
x_1212 = l_Lean_Syntax_isNone(x_1211);
if (x_1212 == 0)
{
lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; uint8_t x_1216; 
x_1213 = lean_unsigned_to_nat(0u);
x_1214 = l_Lean_Syntax_getArg(x_1211, x_1213);
x_1215 = l_Lean_Syntax_getArg(x_1211, x_1210);
lean_dec(x_1211);
x_1216 = l_Lean_Syntax_isNone(x_1215);
if (x_1216 == 0)
{
lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; uint8_t x_1220; 
x_1217 = l_Lean_Syntax_getArg(x_1215, x_1213);
lean_dec(x_1215);
lean_inc(x_1217);
x_1218 = l_Lean_Syntax_getKind(x_1217);
x_1219 = l_myMacro____x40_Init_Notation___hyg_14133____closed__8;
x_1220 = lean_name_eq(x_1218, x_1219);
lean_dec(x_1218);
if (x_1220 == 0)
{
lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; uint8_t x_1232; 
lean_dec(x_1217);
lean_dec(x_1214);
lean_inc(x_5);
x_1221 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_1222 = lean_ctor_get(x_1221, 0);
lean_inc(x_1222);
x_1223 = lean_ctor_get(x_1221, 1);
lean_inc(x_1223);
lean_dec(x_1221);
x_1224 = lean_nat_add(x_3, x_1210);
lean_dec(x_3);
x_1225 = l_Lean_mkHole(x_14);
lean_inc(x_1222);
x_1226 = l_Lean_Elab_Term_mkExplicitBinder(x_1222, x_1225);
x_1227 = lean_array_push(x_4, x_1226);
lean_inc(x_5);
x_1228 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1224, x_1227, x_5, x_1223);
x_1229 = lean_ctor_get(x_1228, 0);
lean_inc(x_1229);
x_1230 = lean_ctor_get(x_1229, 1);
lean_inc(x_1230);
x_1231 = lean_ctor_get(x_1228, 1);
lean_inc(x_1231);
lean_dec(x_1228);
x_1232 = !lean_is_exclusive(x_1229);
if (x_1232 == 0)
{
lean_object* x_1233; uint8_t x_1234; 
x_1233 = lean_ctor_get(x_1229, 1);
lean_dec(x_1233);
x_1234 = !lean_is_exclusive(x_1230);
if (x_1234 == 0)
{
lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; uint8_t x_1238; 
x_1235 = lean_ctor_get(x_1230, 0);
x_1236 = lean_ctor_get(x_1230, 1);
lean_dec(x_1236);
x_1237 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1231);
lean_dec(x_5);
x_1238 = !lean_is_exclusive(x_1237);
if (x_1238 == 0)
{
lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; uint8_t x_1255; 
x_1239 = lean_ctor_get(x_1237, 0);
x_1240 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1239);
x_1241 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1241, 0, x_1239);
lean_ctor_set(x_1241, 1, x_1240);
x_1242 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1243 = lean_array_push(x_1242, x_1222);
x_1244 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1245, 0, x_1244);
lean_ctor_set(x_1245, 1, x_1243);
x_1246 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1247 = lean_array_push(x_1246, x_1245);
x_1248 = l_Lean_nullKind___closed__2;
x_1249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1249, 0, x_1248);
lean_ctor_set(x_1249, 1, x_1247);
x_1250 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1239);
x_1251 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1251, 0, x_1239);
lean_ctor_set(x_1251, 1, x_1250);
x_1252 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1239);
x_1253 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1253, 0, x_1239);
lean_ctor_set(x_1253, 1, x_1252);
lean_inc(x_14);
x_1254 = lean_array_push(x_1246, x_14);
x_1255 = !lean_is_exclusive(x_14);
if (x_1255 == 0)
{
lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; uint8_t x_1282; lean_object* x_1283; 
x_1256 = lean_ctor_get(x_14, 1);
lean_dec(x_1256);
x_1257 = lean_ctor_get(x_14, 0);
lean_dec(x_1257);
lean_ctor_set(x_14, 1, x_1254);
lean_ctor_set(x_14, 0, x_1248);
x_1258 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1259 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1259, 0, x_1239);
lean_ctor_set(x_1259, 1, x_1258);
x_1260 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1261 = lean_array_push(x_1260, x_1253);
x_1262 = lean_array_push(x_1261, x_14);
x_1263 = lean_array_push(x_1262, x_1259);
x_1264 = lean_array_push(x_1263, x_1235);
x_1265 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1266, 0, x_1265);
lean_ctor_set(x_1266, 1, x_1264);
x_1267 = lean_array_push(x_1246, x_1266);
x_1268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1268, 0, x_1248);
lean_ctor_set(x_1268, 1, x_1267);
x_1269 = lean_array_push(x_1246, x_1268);
x_1270 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1271, 0, x_1270);
lean_ctor_set(x_1271, 1, x_1269);
x_1272 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1273 = lean_array_push(x_1272, x_1241);
x_1274 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1275 = lean_array_push(x_1273, x_1274);
x_1276 = lean_array_push(x_1275, x_1249);
x_1277 = lean_array_push(x_1276, x_1274);
x_1278 = lean_array_push(x_1277, x_1251);
x_1279 = lean_array_push(x_1278, x_1271);
x_1280 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1281, 0, x_1280);
lean_ctor_set(x_1281, 1, x_1279);
x_1282 = 1;
x_1283 = lean_box(x_1282);
lean_ctor_set(x_1230, 1, x_1283);
lean_ctor_set(x_1230, 0, x_1281);
lean_ctor_set(x_1237, 0, x_1229);
return x_1237;
}
else
{
lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; uint8_t x_1309; lean_object* x_1310; 
lean_dec(x_14);
x_1284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1284, 0, x_1248);
lean_ctor_set(x_1284, 1, x_1254);
x_1285 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1286 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1286, 0, x_1239);
lean_ctor_set(x_1286, 1, x_1285);
x_1287 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1288 = lean_array_push(x_1287, x_1253);
x_1289 = lean_array_push(x_1288, x_1284);
x_1290 = lean_array_push(x_1289, x_1286);
x_1291 = lean_array_push(x_1290, x_1235);
x_1292 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1293, 0, x_1292);
lean_ctor_set(x_1293, 1, x_1291);
x_1294 = lean_array_push(x_1246, x_1293);
x_1295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1295, 0, x_1248);
lean_ctor_set(x_1295, 1, x_1294);
x_1296 = lean_array_push(x_1246, x_1295);
x_1297 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1298, 0, x_1297);
lean_ctor_set(x_1298, 1, x_1296);
x_1299 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1300 = lean_array_push(x_1299, x_1241);
x_1301 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1302 = lean_array_push(x_1300, x_1301);
x_1303 = lean_array_push(x_1302, x_1249);
x_1304 = lean_array_push(x_1303, x_1301);
x_1305 = lean_array_push(x_1304, x_1251);
x_1306 = lean_array_push(x_1305, x_1298);
x_1307 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1308, 0, x_1307);
lean_ctor_set(x_1308, 1, x_1306);
x_1309 = 1;
x_1310 = lean_box(x_1309);
lean_ctor_set(x_1230, 1, x_1310);
lean_ctor_set(x_1230, 0, x_1308);
lean_ctor_set(x_1237, 0, x_1229);
return x_1237;
}
}
else
{
lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; uint8_t x_1354; lean_object* x_1355; lean_object* x_1356; 
x_1311 = lean_ctor_get(x_1237, 0);
x_1312 = lean_ctor_get(x_1237, 1);
lean_inc(x_1312);
lean_inc(x_1311);
lean_dec(x_1237);
x_1313 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1311);
x_1314 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1314, 0, x_1311);
lean_ctor_set(x_1314, 1, x_1313);
x_1315 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1316 = lean_array_push(x_1315, x_1222);
x_1317 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1318, 0, x_1317);
lean_ctor_set(x_1318, 1, x_1316);
x_1319 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1320 = lean_array_push(x_1319, x_1318);
x_1321 = l_Lean_nullKind___closed__2;
x_1322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1322, 0, x_1321);
lean_ctor_set(x_1322, 1, x_1320);
x_1323 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1311);
x_1324 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1324, 0, x_1311);
lean_ctor_set(x_1324, 1, x_1323);
x_1325 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1311);
x_1326 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1326, 0, x_1311);
lean_ctor_set(x_1326, 1, x_1325);
lean_inc(x_14);
x_1327 = lean_array_push(x_1319, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1328 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1328 = lean_box(0);
}
if (lean_is_scalar(x_1328)) {
 x_1329 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1329 = x_1328;
}
lean_ctor_set(x_1329, 0, x_1321);
lean_ctor_set(x_1329, 1, x_1327);
x_1330 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1331 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1331, 0, x_1311);
lean_ctor_set(x_1331, 1, x_1330);
x_1332 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1333 = lean_array_push(x_1332, x_1326);
x_1334 = lean_array_push(x_1333, x_1329);
x_1335 = lean_array_push(x_1334, x_1331);
x_1336 = lean_array_push(x_1335, x_1235);
x_1337 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1338 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1338, 0, x_1337);
lean_ctor_set(x_1338, 1, x_1336);
x_1339 = lean_array_push(x_1319, x_1338);
x_1340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1340, 0, x_1321);
lean_ctor_set(x_1340, 1, x_1339);
x_1341 = lean_array_push(x_1319, x_1340);
x_1342 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1343 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1343, 0, x_1342);
lean_ctor_set(x_1343, 1, x_1341);
x_1344 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1345 = lean_array_push(x_1344, x_1314);
x_1346 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1347 = lean_array_push(x_1345, x_1346);
x_1348 = lean_array_push(x_1347, x_1322);
x_1349 = lean_array_push(x_1348, x_1346);
x_1350 = lean_array_push(x_1349, x_1324);
x_1351 = lean_array_push(x_1350, x_1343);
x_1352 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1353, 0, x_1352);
lean_ctor_set(x_1353, 1, x_1351);
x_1354 = 1;
x_1355 = lean_box(x_1354);
lean_ctor_set(x_1230, 1, x_1355);
lean_ctor_set(x_1230, 0, x_1353);
x_1356 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1356, 0, x_1229);
lean_ctor_set(x_1356, 1, x_1312);
return x_1356;
}
}
else
{
lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; uint8_t x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; 
x_1357 = lean_ctor_get(x_1230, 0);
lean_inc(x_1357);
lean_dec(x_1230);
x_1358 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1231);
lean_dec(x_5);
x_1359 = lean_ctor_get(x_1358, 0);
lean_inc(x_1359);
x_1360 = lean_ctor_get(x_1358, 1);
lean_inc(x_1360);
if (lean_is_exclusive(x_1358)) {
 lean_ctor_release(x_1358, 0);
 lean_ctor_release(x_1358, 1);
 x_1361 = x_1358;
} else {
 lean_dec_ref(x_1358);
 x_1361 = lean_box(0);
}
x_1362 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1359);
x_1363 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1363, 0, x_1359);
lean_ctor_set(x_1363, 1, x_1362);
x_1364 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1365 = lean_array_push(x_1364, x_1222);
x_1366 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1367, 0, x_1366);
lean_ctor_set(x_1367, 1, x_1365);
x_1368 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1369 = lean_array_push(x_1368, x_1367);
x_1370 = l_Lean_nullKind___closed__2;
x_1371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1371, 0, x_1370);
lean_ctor_set(x_1371, 1, x_1369);
x_1372 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1359);
x_1373 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1373, 0, x_1359);
lean_ctor_set(x_1373, 1, x_1372);
x_1374 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1359);
x_1375 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1375, 0, x_1359);
lean_ctor_set(x_1375, 1, x_1374);
lean_inc(x_14);
x_1376 = lean_array_push(x_1368, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1377 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1377 = lean_box(0);
}
if (lean_is_scalar(x_1377)) {
 x_1378 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1378 = x_1377;
}
lean_ctor_set(x_1378, 0, x_1370);
lean_ctor_set(x_1378, 1, x_1376);
x_1379 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1380 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1380, 0, x_1359);
lean_ctor_set(x_1380, 1, x_1379);
x_1381 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1382 = lean_array_push(x_1381, x_1375);
x_1383 = lean_array_push(x_1382, x_1378);
x_1384 = lean_array_push(x_1383, x_1380);
x_1385 = lean_array_push(x_1384, x_1357);
x_1386 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1387 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1387, 0, x_1386);
lean_ctor_set(x_1387, 1, x_1385);
x_1388 = lean_array_push(x_1368, x_1387);
x_1389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1389, 0, x_1370);
lean_ctor_set(x_1389, 1, x_1388);
x_1390 = lean_array_push(x_1368, x_1389);
x_1391 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1392, 0, x_1391);
lean_ctor_set(x_1392, 1, x_1390);
x_1393 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1394 = lean_array_push(x_1393, x_1363);
x_1395 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1396 = lean_array_push(x_1394, x_1395);
x_1397 = lean_array_push(x_1396, x_1371);
x_1398 = lean_array_push(x_1397, x_1395);
x_1399 = lean_array_push(x_1398, x_1373);
x_1400 = lean_array_push(x_1399, x_1392);
x_1401 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1402, 0, x_1401);
lean_ctor_set(x_1402, 1, x_1400);
x_1403 = 1;
x_1404 = lean_box(x_1403);
x_1405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1405, 0, x_1402);
lean_ctor_set(x_1405, 1, x_1404);
lean_ctor_set(x_1229, 1, x_1405);
if (lean_is_scalar(x_1361)) {
 x_1406 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1406 = x_1361;
}
lean_ctor_set(x_1406, 0, x_1229);
lean_ctor_set(x_1406, 1, x_1360);
return x_1406;
}
}
else
{
lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; uint8_t x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; 
x_1407 = lean_ctor_get(x_1229, 0);
lean_inc(x_1407);
lean_dec(x_1229);
x_1408 = lean_ctor_get(x_1230, 0);
lean_inc(x_1408);
if (lean_is_exclusive(x_1230)) {
 lean_ctor_release(x_1230, 0);
 lean_ctor_release(x_1230, 1);
 x_1409 = x_1230;
} else {
 lean_dec_ref(x_1230);
 x_1409 = lean_box(0);
}
x_1410 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1231);
lean_dec(x_5);
x_1411 = lean_ctor_get(x_1410, 0);
lean_inc(x_1411);
x_1412 = lean_ctor_get(x_1410, 1);
lean_inc(x_1412);
if (lean_is_exclusive(x_1410)) {
 lean_ctor_release(x_1410, 0);
 lean_ctor_release(x_1410, 1);
 x_1413 = x_1410;
} else {
 lean_dec_ref(x_1410);
 x_1413 = lean_box(0);
}
x_1414 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1411);
x_1415 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1415, 0, x_1411);
lean_ctor_set(x_1415, 1, x_1414);
x_1416 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1417 = lean_array_push(x_1416, x_1222);
x_1418 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1419 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1419, 0, x_1418);
lean_ctor_set(x_1419, 1, x_1417);
x_1420 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1421 = lean_array_push(x_1420, x_1419);
x_1422 = l_Lean_nullKind___closed__2;
x_1423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1423, 0, x_1422);
lean_ctor_set(x_1423, 1, x_1421);
x_1424 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1411);
x_1425 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1425, 0, x_1411);
lean_ctor_set(x_1425, 1, x_1424);
x_1426 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1411);
x_1427 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1427, 0, x_1411);
lean_ctor_set(x_1427, 1, x_1426);
lean_inc(x_14);
x_1428 = lean_array_push(x_1420, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1429 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1429 = lean_box(0);
}
if (lean_is_scalar(x_1429)) {
 x_1430 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1430 = x_1429;
}
lean_ctor_set(x_1430, 0, x_1422);
lean_ctor_set(x_1430, 1, x_1428);
x_1431 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1432 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1432, 0, x_1411);
lean_ctor_set(x_1432, 1, x_1431);
x_1433 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1434 = lean_array_push(x_1433, x_1427);
x_1435 = lean_array_push(x_1434, x_1430);
x_1436 = lean_array_push(x_1435, x_1432);
x_1437 = lean_array_push(x_1436, x_1408);
x_1438 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1439 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1439, 0, x_1438);
lean_ctor_set(x_1439, 1, x_1437);
x_1440 = lean_array_push(x_1420, x_1439);
x_1441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1441, 0, x_1422);
lean_ctor_set(x_1441, 1, x_1440);
x_1442 = lean_array_push(x_1420, x_1441);
x_1443 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1444 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1444, 0, x_1443);
lean_ctor_set(x_1444, 1, x_1442);
x_1445 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1446 = lean_array_push(x_1445, x_1415);
x_1447 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1448 = lean_array_push(x_1446, x_1447);
x_1449 = lean_array_push(x_1448, x_1423);
x_1450 = lean_array_push(x_1449, x_1447);
x_1451 = lean_array_push(x_1450, x_1425);
x_1452 = lean_array_push(x_1451, x_1444);
x_1453 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1454 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1454, 0, x_1453);
lean_ctor_set(x_1454, 1, x_1452);
x_1455 = 1;
x_1456 = lean_box(x_1455);
if (lean_is_scalar(x_1409)) {
 x_1457 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1457 = x_1409;
}
lean_ctor_set(x_1457, 0, x_1454);
lean_ctor_set(x_1457, 1, x_1456);
x_1458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1458, 0, x_1407);
lean_ctor_set(x_1458, 1, x_1457);
if (lean_is_scalar(x_1413)) {
 x_1459 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1459 = x_1413;
}
lean_ctor_set(x_1459, 0, x_1458);
lean_ctor_set(x_1459, 1, x_1412);
return x_1459;
}
}
else
{
lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; 
x_1460 = l_Lean_Syntax_getArg(x_1217, x_1210);
lean_dec(x_1217);
lean_inc(x_5);
x_1461 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(x_1214, x_5, x_6);
x_1462 = lean_ctor_get(x_1461, 0);
lean_inc(x_1462);
if (lean_obj_tag(x_1462) == 0)
{
lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; uint8_t x_1475; 
lean_dec(x_1460);
x_1463 = lean_ctor_get(x_1461, 1);
lean_inc(x_1463);
lean_dec(x_1461);
lean_inc(x_5);
x_1464 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_1463);
x_1465 = lean_ctor_get(x_1464, 0);
lean_inc(x_1465);
x_1466 = lean_ctor_get(x_1464, 1);
lean_inc(x_1466);
lean_dec(x_1464);
x_1467 = lean_nat_add(x_3, x_1210);
lean_dec(x_3);
x_1468 = l_Lean_mkHole(x_14);
lean_inc(x_1465);
x_1469 = l_Lean_Elab_Term_mkExplicitBinder(x_1465, x_1468);
x_1470 = lean_array_push(x_4, x_1469);
lean_inc(x_5);
x_1471 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1467, x_1470, x_5, x_1466);
x_1472 = lean_ctor_get(x_1471, 0);
lean_inc(x_1472);
x_1473 = lean_ctor_get(x_1472, 1);
lean_inc(x_1473);
x_1474 = lean_ctor_get(x_1471, 1);
lean_inc(x_1474);
lean_dec(x_1471);
x_1475 = !lean_is_exclusive(x_1472);
if (x_1475 == 0)
{
lean_object* x_1476; uint8_t x_1477; 
x_1476 = lean_ctor_get(x_1472, 1);
lean_dec(x_1476);
x_1477 = !lean_is_exclusive(x_1473);
if (x_1477 == 0)
{
lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; uint8_t x_1481; 
x_1478 = lean_ctor_get(x_1473, 0);
x_1479 = lean_ctor_get(x_1473, 1);
lean_dec(x_1479);
x_1480 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1474);
lean_dec(x_5);
x_1481 = !lean_is_exclusive(x_1480);
if (x_1481 == 0)
{
lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; uint8_t x_1498; 
x_1482 = lean_ctor_get(x_1480, 0);
x_1483 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1482);
x_1484 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1484, 0, x_1482);
lean_ctor_set(x_1484, 1, x_1483);
x_1485 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1486 = lean_array_push(x_1485, x_1465);
x_1487 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1488 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1488, 0, x_1487);
lean_ctor_set(x_1488, 1, x_1486);
x_1489 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1490 = lean_array_push(x_1489, x_1488);
x_1491 = l_Lean_nullKind___closed__2;
x_1492 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1492, 0, x_1491);
lean_ctor_set(x_1492, 1, x_1490);
x_1493 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1482);
x_1494 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1494, 0, x_1482);
lean_ctor_set(x_1494, 1, x_1493);
x_1495 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1482);
x_1496 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1496, 0, x_1482);
lean_ctor_set(x_1496, 1, x_1495);
lean_inc(x_14);
x_1497 = lean_array_push(x_1489, x_14);
x_1498 = !lean_is_exclusive(x_14);
if (x_1498 == 0)
{
lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; uint8_t x_1525; lean_object* x_1526; 
x_1499 = lean_ctor_get(x_14, 1);
lean_dec(x_1499);
x_1500 = lean_ctor_get(x_14, 0);
lean_dec(x_1500);
lean_ctor_set(x_14, 1, x_1497);
lean_ctor_set(x_14, 0, x_1491);
x_1501 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1502 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1502, 0, x_1482);
lean_ctor_set(x_1502, 1, x_1501);
x_1503 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1504 = lean_array_push(x_1503, x_1496);
x_1505 = lean_array_push(x_1504, x_14);
x_1506 = lean_array_push(x_1505, x_1502);
x_1507 = lean_array_push(x_1506, x_1478);
x_1508 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1509 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1509, 0, x_1508);
lean_ctor_set(x_1509, 1, x_1507);
x_1510 = lean_array_push(x_1489, x_1509);
x_1511 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1511, 0, x_1491);
lean_ctor_set(x_1511, 1, x_1510);
x_1512 = lean_array_push(x_1489, x_1511);
x_1513 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1514 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1514, 0, x_1513);
lean_ctor_set(x_1514, 1, x_1512);
x_1515 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1516 = lean_array_push(x_1515, x_1484);
x_1517 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1518 = lean_array_push(x_1516, x_1517);
x_1519 = lean_array_push(x_1518, x_1492);
x_1520 = lean_array_push(x_1519, x_1517);
x_1521 = lean_array_push(x_1520, x_1494);
x_1522 = lean_array_push(x_1521, x_1514);
x_1523 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1524, 0, x_1523);
lean_ctor_set(x_1524, 1, x_1522);
x_1525 = 1;
x_1526 = lean_box(x_1525);
lean_ctor_set(x_1473, 1, x_1526);
lean_ctor_set(x_1473, 0, x_1524);
lean_ctor_set(x_1480, 0, x_1472);
return x_1480;
}
else
{
lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; uint8_t x_1552; lean_object* x_1553; 
lean_dec(x_14);
x_1527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1527, 0, x_1491);
lean_ctor_set(x_1527, 1, x_1497);
x_1528 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1529 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1529, 0, x_1482);
lean_ctor_set(x_1529, 1, x_1528);
x_1530 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1531 = lean_array_push(x_1530, x_1496);
x_1532 = lean_array_push(x_1531, x_1527);
x_1533 = lean_array_push(x_1532, x_1529);
x_1534 = lean_array_push(x_1533, x_1478);
x_1535 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1536 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1536, 0, x_1535);
lean_ctor_set(x_1536, 1, x_1534);
x_1537 = lean_array_push(x_1489, x_1536);
x_1538 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1538, 0, x_1491);
lean_ctor_set(x_1538, 1, x_1537);
x_1539 = lean_array_push(x_1489, x_1538);
x_1540 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1541 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1541, 0, x_1540);
lean_ctor_set(x_1541, 1, x_1539);
x_1542 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1543 = lean_array_push(x_1542, x_1484);
x_1544 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1545 = lean_array_push(x_1543, x_1544);
x_1546 = lean_array_push(x_1545, x_1492);
x_1547 = lean_array_push(x_1546, x_1544);
x_1548 = lean_array_push(x_1547, x_1494);
x_1549 = lean_array_push(x_1548, x_1541);
x_1550 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1551 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1551, 0, x_1550);
lean_ctor_set(x_1551, 1, x_1549);
x_1552 = 1;
x_1553 = lean_box(x_1552);
lean_ctor_set(x_1473, 1, x_1553);
lean_ctor_set(x_1473, 0, x_1551);
lean_ctor_set(x_1480, 0, x_1472);
return x_1480;
}
}
else
{
lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; lean_object* x_1562; lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; lean_object* x_1568; lean_object* x_1569; lean_object* x_1570; lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; lean_object* x_1574; lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; lean_object* x_1592; lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; uint8_t x_1597; lean_object* x_1598; lean_object* x_1599; 
x_1554 = lean_ctor_get(x_1480, 0);
x_1555 = lean_ctor_get(x_1480, 1);
lean_inc(x_1555);
lean_inc(x_1554);
lean_dec(x_1480);
x_1556 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1554);
x_1557 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1557, 0, x_1554);
lean_ctor_set(x_1557, 1, x_1556);
x_1558 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1559 = lean_array_push(x_1558, x_1465);
x_1560 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1561 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1561, 0, x_1560);
lean_ctor_set(x_1561, 1, x_1559);
x_1562 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1563 = lean_array_push(x_1562, x_1561);
x_1564 = l_Lean_nullKind___closed__2;
x_1565 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1565, 0, x_1564);
lean_ctor_set(x_1565, 1, x_1563);
x_1566 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1554);
x_1567 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1567, 0, x_1554);
lean_ctor_set(x_1567, 1, x_1566);
x_1568 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1554);
x_1569 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1569, 0, x_1554);
lean_ctor_set(x_1569, 1, x_1568);
lean_inc(x_14);
x_1570 = lean_array_push(x_1562, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1571 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1571 = lean_box(0);
}
if (lean_is_scalar(x_1571)) {
 x_1572 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1572 = x_1571;
}
lean_ctor_set(x_1572, 0, x_1564);
lean_ctor_set(x_1572, 1, x_1570);
x_1573 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1574 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1574, 0, x_1554);
lean_ctor_set(x_1574, 1, x_1573);
x_1575 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1576 = lean_array_push(x_1575, x_1569);
x_1577 = lean_array_push(x_1576, x_1572);
x_1578 = lean_array_push(x_1577, x_1574);
x_1579 = lean_array_push(x_1578, x_1478);
x_1580 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1581 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1581, 0, x_1580);
lean_ctor_set(x_1581, 1, x_1579);
x_1582 = lean_array_push(x_1562, x_1581);
x_1583 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1583, 0, x_1564);
lean_ctor_set(x_1583, 1, x_1582);
x_1584 = lean_array_push(x_1562, x_1583);
x_1585 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1586 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1586, 0, x_1585);
lean_ctor_set(x_1586, 1, x_1584);
x_1587 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1588 = lean_array_push(x_1587, x_1557);
x_1589 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1590 = lean_array_push(x_1588, x_1589);
x_1591 = lean_array_push(x_1590, x_1565);
x_1592 = lean_array_push(x_1591, x_1589);
x_1593 = lean_array_push(x_1592, x_1567);
x_1594 = lean_array_push(x_1593, x_1586);
x_1595 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1596 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1596, 0, x_1595);
lean_ctor_set(x_1596, 1, x_1594);
x_1597 = 1;
x_1598 = lean_box(x_1597);
lean_ctor_set(x_1473, 1, x_1598);
lean_ctor_set(x_1473, 0, x_1596);
x_1599 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1599, 0, x_1472);
lean_ctor_set(x_1599, 1, x_1555);
return x_1599;
}
}
else
{
lean_object* x_1600; lean_object* x_1601; lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; lean_object* x_1616; lean_object* x_1617; lean_object* x_1618; lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; lean_object* x_1625; lean_object* x_1626; lean_object* x_1627; lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; lean_object* x_1645; uint8_t x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; 
x_1600 = lean_ctor_get(x_1473, 0);
lean_inc(x_1600);
lean_dec(x_1473);
x_1601 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1474);
lean_dec(x_5);
x_1602 = lean_ctor_get(x_1601, 0);
lean_inc(x_1602);
x_1603 = lean_ctor_get(x_1601, 1);
lean_inc(x_1603);
if (lean_is_exclusive(x_1601)) {
 lean_ctor_release(x_1601, 0);
 lean_ctor_release(x_1601, 1);
 x_1604 = x_1601;
} else {
 lean_dec_ref(x_1601);
 x_1604 = lean_box(0);
}
x_1605 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1602);
x_1606 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1606, 0, x_1602);
lean_ctor_set(x_1606, 1, x_1605);
x_1607 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1608 = lean_array_push(x_1607, x_1465);
x_1609 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1610 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1610, 0, x_1609);
lean_ctor_set(x_1610, 1, x_1608);
x_1611 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1612 = lean_array_push(x_1611, x_1610);
x_1613 = l_Lean_nullKind___closed__2;
x_1614 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1614, 0, x_1613);
lean_ctor_set(x_1614, 1, x_1612);
x_1615 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1602);
x_1616 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1616, 0, x_1602);
lean_ctor_set(x_1616, 1, x_1615);
x_1617 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1602);
x_1618 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1618, 0, x_1602);
lean_ctor_set(x_1618, 1, x_1617);
lean_inc(x_14);
x_1619 = lean_array_push(x_1611, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1620 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1620 = lean_box(0);
}
if (lean_is_scalar(x_1620)) {
 x_1621 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1621 = x_1620;
}
lean_ctor_set(x_1621, 0, x_1613);
lean_ctor_set(x_1621, 1, x_1619);
x_1622 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1623 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1623, 0, x_1602);
lean_ctor_set(x_1623, 1, x_1622);
x_1624 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1625 = lean_array_push(x_1624, x_1618);
x_1626 = lean_array_push(x_1625, x_1621);
x_1627 = lean_array_push(x_1626, x_1623);
x_1628 = lean_array_push(x_1627, x_1600);
x_1629 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1630 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1630, 0, x_1629);
lean_ctor_set(x_1630, 1, x_1628);
x_1631 = lean_array_push(x_1611, x_1630);
x_1632 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1632, 0, x_1613);
lean_ctor_set(x_1632, 1, x_1631);
x_1633 = lean_array_push(x_1611, x_1632);
x_1634 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1635 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1635, 0, x_1634);
lean_ctor_set(x_1635, 1, x_1633);
x_1636 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1637 = lean_array_push(x_1636, x_1606);
x_1638 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1639 = lean_array_push(x_1637, x_1638);
x_1640 = lean_array_push(x_1639, x_1614);
x_1641 = lean_array_push(x_1640, x_1638);
x_1642 = lean_array_push(x_1641, x_1616);
x_1643 = lean_array_push(x_1642, x_1635);
x_1644 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1645 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1645, 0, x_1644);
lean_ctor_set(x_1645, 1, x_1643);
x_1646 = 1;
x_1647 = lean_box(x_1646);
x_1648 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1648, 0, x_1645);
lean_ctor_set(x_1648, 1, x_1647);
lean_ctor_set(x_1472, 1, x_1648);
if (lean_is_scalar(x_1604)) {
 x_1649 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1649 = x_1604;
}
lean_ctor_set(x_1649, 0, x_1472);
lean_ctor_set(x_1649, 1, x_1603);
return x_1649;
}
}
else
{
lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; lean_object* x_1663; lean_object* x_1664; lean_object* x_1665; lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; lean_object* x_1673; lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; lean_object* x_1680; lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; uint8_t x_1698; lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; 
x_1650 = lean_ctor_get(x_1472, 0);
lean_inc(x_1650);
lean_dec(x_1472);
x_1651 = lean_ctor_get(x_1473, 0);
lean_inc(x_1651);
if (lean_is_exclusive(x_1473)) {
 lean_ctor_release(x_1473, 0);
 lean_ctor_release(x_1473, 1);
 x_1652 = x_1473;
} else {
 lean_dec_ref(x_1473);
 x_1652 = lean_box(0);
}
x_1653 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1474);
lean_dec(x_5);
x_1654 = lean_ctor_get(x_1653, 0);
lean_inc(x_1654);
x_1655 = lean_ctor_get(x_1653, 1);
lean_inc(x_1655);
if (lean_is_exclusive(x_1653)) {
 lean_ctor_release(x_1653, 0);
 lean_ctor_release(x_1653, 1);
 x_1656 = x_1653;
} else {
 lean_dec_ref(x_1653);
 x_1656 = lean_box(0);
}
x_1657 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1654);
x_1658 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1658, 0, x_1654);
lean_ctor_set(x_1658, 1, x_1657);
x_1659 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1660 = lean_array_push(x_1659, x_1465);
x_1661 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1662 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1662, 0, x_1661);
lean_ctor_set(x_1662, 1, x_1660);
x_1663 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1664 = lean_array_push(x_1663, x_1662);
x_1665 = l_Lean_nullKind___closed__2;
x_1666 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1666, 0, x_1665);
lean_ctor_set(x_1666, 1, x_1664);
x_1667 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1654);
x_1668 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1668, 0, x_1654);
lean_ctor_set(x_1668, 1, x_1667);
x_1669 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1654);
x_1670 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1670, 0, x_1654);
lean_ctor_set(x_1670, 1, x_1669);
lean_inc(x_14);
x_1671 = lean_array_push(x_1663, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1672 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1672 = lean_box(0);
}
if (lean_is_scalar(x_1672)) {
 x_1673 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1673 = x_1672;
}
lean_ctor_set(x_1673, 0, x_1665);
lean_ctor_set(x_1673, 1, x_1671);
x_1674 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1675 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1675, 0, x_1654);
lean_ctor_set(x_1675, 1, x_1674);
x_1676 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1677 = lean_array_push(x_1676, x_1670);
x_1678 = lean_array_push(x_1677, x_1673);
x_1679 = lean_array_push(x_1678, x_1675);
x_1680 = lean_array_push(x_1679, x_1651);
x_1681 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1682 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1682, 0, x_1681);
lean_ctor_set(x_1682, 1, x_1680);
x_1683 = lean_array_push(x_1663, x_1682);
x_1684 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1684, 0, x_1665);
lean_ctor_set(x_1684, 1, x_1683);
x_1685 = lean_array_push(x_1663, x_1684);
x_1686 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1687 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1687, 0, x_1686);
lean_ctor_set(x_1687, 1, x_1685);
x_1688 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1689 = lean_array_push(x_1688, x_1658);
x_1690 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1691 = lean_array_push(x_1689, x_1690);
x_1692 = lean_array_push(x_1691, x_1666);
x_1693 = lean_array_push(x_1692, x_1690);
x_1694 = lean_array_push(x_1693, x_1668);
x_1695 = lean_array_push(x_1694, x_1687);
x_1696 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1697 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1697, 0, x_1696);
lean_ctor_set(x_1697, 1, x_1695);
x_1698 = 1;
x_1699 = lean_box(x_1698);
if (lean_is_scalar(x_1652)) {
 x_1700 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1700 = x_1652;
}
lean_ctor_set(x_1700, 0, x_1697);
lean_ctor_set(x_1700, 1, x_1699);
x_1701 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1701, 0, x_1650);
lean_ctor_set(x_1701, 1, x_1700);
if (lean_is_scalar(x_1656)) {
 x_1702 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1702 = x_1656;
}
lean_ctor_set(x_1702, 0, x_1701);
lean_ctor_set(x_1702, 1, x_1655);
return x_1702;
}
}
else
{
lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; lean_object* x_1706; size_t x_1707; size_t x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; 
lean_dec(x_14);
x_1703 = lean_ctor_get(x_1461, 1);
lean_inc(x_1703);
lean_dec(x_1461);
x_1704 = lean_ctor_get(x_1462, 0);
lean_inc(x_1704);
lean_dec(x_1462);
x_1705 = lean_nat_add(x_3, x_1210);
lean_dec(x_3);
x_1706 = lean_array_get_size(x_1704);
x_1707 = lean_usize_of_nat(x_1706);
lean_dec(x_1706);
x_1708 = 0;
x_1709 = x_1704;
x_1710 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(x_1460, x_1707, x_1708, x_1709);
x_1711 = x_1710;
x_1712 = l_Array_append___rarg(x_4, x_1711);
lean_dec(x_1711);
x_3 = x_1705;
x_4 = x_1712;
x_6 = x_1703;
goto _start;
}
}
}
else
{
lean_object* x_1714; lean_object* x_1715; lean_object* x_1716; lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; uint8_t x_1725; 
lean_dec(x_1215);
lean_dec(x_1214);
lean_inc(x_5);
x_1714 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_1715 = lean_ctor_get(x_1714, 0);
lean_inc(x_1715);
x_1716 = lean_ctor_get(x_1714, 1);
lean_inc(x_1716);
lean_dec(x_1714);
x_1717 = lean_nat_add(x_3, x_1210);
lean_dec(x_3);
x_1718 = l_Lean_mkHole(x_14);
lean_inc(x_1715);
x_1719 = l_Lean_Elab_Term_mkExplicitBinder(x_1715, x_1718);
x_1720 = lean_array_push(x_4, x_1719);
lean_inc(x_5);
x_1721 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1717, x_1720, x_5, x_1716);
x_1722 = lean_ctor_get(x_1721, 0);
lean_inc(x_1722);
x_1723 = lean_ctor_get(x_1722, 1);
lean_inc(x_1723);
x_1724 = lean_ctor_get(x_1721, 1);
lean_inc(x_1724);
lean_dec(x_1721);
x_1725 = !lean_is_exclusive(x_1722);
if (x_1725 == 0)
{
lean_object* x_1726; uint8_t x_1727; 
x_1726 = lean_ctor_get(x_1722, 1);
lean_dec(x_1726);
x_1727 = !lean_is_exclusive(x_1723);
if (x_1727 == 0)
{
lean_object* x_1728; lean_object* x_1729; lean_object* x_1730; uint8_t x_1731; 
x_1728 = lean_ctor_get(x_1723, 0);
x_1729 = lean_ctor_get(x_1723, 1);
lean_dec(x_1729);
x_1730 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1724);
lean_dec(x_5);
x_1731 = !lean_is_exclusive(x_1730);
if (x_1731 == 0)
{
lean_object* x_1732; lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; lean_object* x_1737; lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; uint8_t x_1748; 
x_1732 = lean_ctor_get(x_1730, 0);
x_1733 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1732);
x_1734 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1734, 0, x_1732);
lean_ctor_set(x_1734, 1, x_1733);
x_1735 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1736 = lean_array_push(x_1735, x_1715);
x_1737 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1738 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1738, 0, x_1737);
lean_ctor_set(x_1738, 1, x_1736);
x_1739 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1740 = lean_array_push(x_1739, x_1738);
x_1741 = l_Lean_nullKind___closed__2;
x_1742 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1742, 0, x_1741);
lean_ctor_set(x_1742, 1, x_1740);
x_1743 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1732);
x_1744 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1744, 0, x_1732);
lean_ctor_set(x_1744, 1, x_1743);
x_1745 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1732);
x_1746 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1746, 0, x_1732);
lean_ctor_set(x_1746, 1, x_1745);
lean_inc(x_14);
x_1747 = lean_array_push(x_1739, x_14);
x_1748 = !lean_is_exclusive(x_14);
if (x_1748 == 0)
{
lean_object* x_1749; lean_object* x_1750; lean_object* x_1751; lean_object* x_1752; lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; lean_object* x_1757; lean_object* x_1758; lean_object* x_1759; lean_object* x_1760; lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; lean_object* x_1765; lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; lean_object* x_1774; uint8_t x_1775; lean_object* x_1776; 
x_1749 = lean_ctor_get(x_14, 1);
lean_dec(x_1749);
x_1750 = lean_ctor_get(x_14, 0);
lean_dec(x_1750);
lean_ctor_set(x_14, 1, x_1747);
lean_ctor_set(x_14, 0, x_1741);
x_1751 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1752 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1752, 0, x_1732);
lean_ctor_set(x_1752, 1, x_1751);
x_1753 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1754 = lean_array_push(x_1753, x_1746);
x_1755 = lean_array_push(x_1754, x_14);
x_1756 = lean_array_push(x_1755, x_1752);
x_1757 = lean_array_push(x_1756, x_1728);
x_1758 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1759 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1759, 0, x_1758);
lean_ctor_set(x_1759, 1, x_1757);
x_1760 = lean_array_push(x_1739, x_1759);
x_1761 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1761, 0, x_1741);
lean_ctor_set(x_1761, 1, x_1760);
x_1762 = lean_array_push(x_1739, x_1761);
x_1763 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1764 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1764, 0, x_1763);
lean_ctor_set(x_1764, 1, x_1762);
x_1765 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1766 = lean_array_push(x_1765, x_1734);
x_1767 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1768 = lean_array_push(x_1766, x_1767);
x_1769 = lean_array_push(x_1768, x_1742);
x_1770 = lean_array_push(x_1769, x_1767);
x_1771 = lean_array_push(x_1770, x_1744);
x_1772 = lean_array_push(x_1771, x_1764);
x_1773 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1774 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1774, 0, x_1773);
lean_ctor_set(x_1774, 1, x_1772);
x_1775 = 1;
x_1776 = lean_box(x_1775);
lean_ctor_set(x_1723, 1, x_1776);
lean_ctor_set(x_1723, 0, x_1774);
lean_ctor_set(x_1730, 0, x_1722);
return x_1730;
}
else
{
lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; lean_object* x_1791; lean_object* x_1792; lean_object* x_1793; lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; uint8_t x_1802; lean_object* x_1803; 
lean_dec(x_14);
x_1777 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1777, 0, x_1741);
lean_ctor_set(x_1777, 1, x_1747);
x_1778 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1779 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1779, 0, x_1732);
lean_ctor_set(x_1779, 1, x_1778);
x_1780 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1781 = lean_array_push(x_1780, x_1746);
x_1782 = lean_array_push(x_1781, x_1777);
x_1783 = lean_array_push(x_1782, x_1779);
x_1784 = lean_array_push(x_1783, x_1728);
x_1785 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1786 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1786, 0, x_1785);
lean_ctor_set(x_1786, 1, x_1784);
x_1787 = lean_array_push(x_1739, x_1786);
x_1788 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1788, 0, x_1741);
lean_ctor_set(x_1788, 1, x_1787);
x_1789 = lean_array_push(x_1739, x_1788);
x_1790 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1791 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1791, 0, x_1790);
lean_ctor_set(x_1791, 1, x_1789);
x_1792 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1793 = lean_array_push(x_1792, x_1734);
x_1794 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1795 = lean_array_push(x_1793, x_1794);
x_1796 = lean_array_push(x_1795, x_1742);
x_1797 = lean_array_push(x_1796, x_1794);
x_1798 = lean_array_push(x_1797, x_1744);
x_1799 = lean_array_push(x_1798, x_1791);
x_1800 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1801 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1801, 0, x_1800);
lean_ctor_set(x_1801, 1, x_1799);
x_1802 = 1;
x_1803 = lean_box(x_1802);
lean_ctor_set(x_1723, 1, x_1803);
lean_ctor_set(x_1723, 0, x_1801);
lean_ctor_set(x_1730, 0, x_1722);
return x_1730;
}
}
else
{
lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; lean_object* x_1810; lean_object* x_1811; lean_object* x_1812; lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; lean_object* x_1839; lean_object* x_1840; lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; uint8_t x_1847; lean_object* x_1848; lean_object* x_1849; 
x_1804 = lean_ctor_get(x_1730, 0);
x_1805 = lean_ctor_get(x_1730, 1);
lean_inc(x_1805);
lean_inc(x_1804);
lean_dec(x_1730);
x_1806 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1804);
x_1807 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1807, 0, x_1804);
lean_ctor_set(x_1807, 1, x_1806);
x_1808 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1809 = lean_array_push(x_1808, x_1715);
x_1810 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1811 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1811, 0, x_1810);
lean_ctor_set(x_1811, 1, x_1809);
x_1812 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1813 = lean_array_push(x_1812, x_1811);
x_1814 = l_Lean_nullKind___closed__2;
x_1815 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1815, 0, x_1814);
lean_ctor_set(x_1815, 1, x_1813);
x_1816 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1804);
x_1817 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1817, 0, x_1804);
lean_ctor_set(x_1817, 1, x_1816);
x_1818 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1804);
x_1819 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1819, 0, x_1804);
lean_ctor_set(x_1819, 1, x_1818);
lean_inc(x_14);
x_1820 = lean_array_push(x_1812, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1821 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1821 = lean_box(0);
}
if (lean_is_scalar(x_1821)) {
 x_1822 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1822 = x_1821;
}
lean_ctor_set(x_1822, 0, x_1814);
lean_ctor_set(x_1822, 1, x_1820);
x_1823 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1824 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1824, 0, x_1804);
lean_ctor_set(x_1824, 1, x_1823);
x_1825 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1826 = lean_array_push(x_1825, x_1819);
x_1827 = lean_array_push(x_1826, x_1822);
x_1828 = lean_array_push(x_1827, x_1824);
x_1829 = lean_array_push(x_1828, x_1728);
x_1830 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1831 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1831, 0, x_1830);
lean_ctor_set(x_1831, 1, x_1829);
x_1832 = lean_array_push(x_1812, x_1831);
x_1833 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1833, 0, x_1814);
lean_ctor_set(x_1833, 1, x_1832);
x_1834 = lean_array_push(x_1812, x_1833);
x_1835 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1836 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1836, 0, x_1835);
lean_ctor_set(x_1836, 1, x_1834);
x_1837 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1838 = lean_array_push(x_1837, x_1807);
x_1839 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1840 = lean_array_push(x_1838, x_1839);
x_1841 = lean_array_push(x_1840, x_1815);
x_1842 = lean_array_push(x_1841, x_1839);
x_1843 = lean_array_push(x_1842, x_1817);
x_1844 = lean_array_push(x_1843, x_1836);
x_1845 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1846 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1846, 0, x_1845);
lean_ctor_set(x_1846, 1, x_1844);
x_1847 = 1;
x_1848 = lean_box(x_1847);
lean_ctor_set(x_1723, 1, x_1848);
lean_ctor_set(x_1723, 0, x_1846);
x_1849 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1849, 0, x_1722);
lean_ctor_set(x_1849, 1, x_1805);
return x_1849;
}
}
else
{
lean_object* x_1850; lean_object* x_1851; lean_object* x_1852; lean_object* x_1853; lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; lean_object* x_1868; lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; lean_object* x_1874; lean_object* x_1875; lean_object* x_1876; lean_object* x_1877; lean_object* x_1878; lean_object* x_1879; lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; lean_object* x_1886; lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; lean_object* x_1892; lean_object* x_1893; lean_object* x_1894; lean_object* x_1895; uint8_t x_1896; lean_object* x_1897; lean_object* x_1898; lean_object* x_1899; 
x_1850 = lean_ctor_get(x_1723, 0);
lean_inc(x_1850);
lean_dec(x_1723);
x_1851 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1724);
lean_dec(x_5);
x_1852 = lean_ctor_get(x_1851, 0);
lean_inc(x_1852);
x_1853 = lean_ctor_get(x_1851, 1);
lean_inc(x_1853);
if (lean_is_exclusive(x_1851)) {
 lean_ctor_release(x_1851, 0);
 lean_ctor_release(x_1851, 1);
 x_1854 = x_1851;
} else {
 lean_dec_ref(x_1851);
 x_1854 = lean_box(0);
}
x_1855 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1852);
x_1856 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1856, 0, x_1852);
lean_ctor_set(x_1856, 1, x_1855);
x_1857 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1858 = lean_array_push(x_1857, x_1715);
x_1859 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1860 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1860, 0, x_1859);
lean_ctor_set(x_1860, 1, x_1858);
x_1861 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1862 = lean_array_push(x_1861, x_1860);
x_1863 = l_Lean_nullKind___closed__2;
x_1864 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1864, 0, x_1863);
lean_ctor_set(x_1864, 1, x_1862);
x_1865 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1852);
x_1866 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1866, 0, x_1852);
lean_ctor_set(x_1866, 1, x_1865);
x_1867 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1852);
x_1868 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1868, 0, x_1852);
lean_ctor_set(x_1868, 1, x_1867);
lean_inc(x_14);
x_1869 = lean_array_push(x_1861, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1870 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1870 = lean_box(0);
}
if (lean_is_scalar(x_1870)) {
 x_1871 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1871 = x_1870;
}
lean_ctor_set(x_1871, 0, x_1863);
lean_ctor_set(x_1871, 1, x_1869);
x_1872 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1873 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1873, 0, x_1852);
lean_ctor_set(x_1873, 1, x_1872);
x_1874 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1875 = lean_array_push(x_1874, x_1868);
x_1876 = lean_array_push(x_1875, x_1871);
x_1877 = lean_array_push(x_1876, x_1873);
x_1878 = lean_array_push(x_1877, x_1850);
x_1879 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1880 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1880, 0, x_1879);
lean_ctor_set(x_1880, 1, x_1878);
x_1881 = lean_array_push(x_1861, x_1880);
x_1882 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1882, 0, x_1863);
lean_ctor_set(x_1882, 1, x_1881);
x_1883 = lean_array_push(x_1861, x_1882);
x_1884 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1885 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1885, 0, x_1884);
lean_ctor_set(x_1885, 1, x_1883);
x_1886 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1887 = lean_array_push(x_1886, x_1856);
x_1888 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1889 = lean_array_push(x_1887, x_1888);
x_1890 = lean_array_push(x_1889, x_1864);
x_1891 = lean_array_push(x_1890, x_1888);
x_1892 = lean_array_push(x_1891, x_1866);
x_1893 = lean_array_push(x_1892, x_1885);
x_1894 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1895 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1895, 0, x_1894);
lean_ctor_set(x_1895, 1, x_1893);
x_1896 = 1;
x_1897 = lean_box(x_1896);
x_1898 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1898, 0, x_1895);
lean_ctor_set(x_1898, 1, x_1897);
lean_ctor_set(x_1722, 1, x_1898);
if (lean_is_scalar(x_1854)) {
 x_1899 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1899 = x_1854;
}
lean_ctor_set(x_1899, 0, x_1722);
lean_ctor_set(x_1899, 1, x_1853);
return x_1899;
}
}
else
{
lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; lean_object* x_1903; lean_object* x_1904; lean_object* x_1905; lean_object* x_1906; lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; lean_object* x_1910; lean_object* x_1911; lean_object* x_1912; lean_object* x_1913; lean_object* x_1914; lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; lean_object* x_1923; lean_object* x_1924; lean_object* x_1925; lean_object* x_1926; lean_object* x_1927; lean_object* x_1928; lean_object* x_1929; lean_object* x_1930; lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; lean_object* x_1936; lean_object* x_1937; lean_object* x_1938; lean_object* x_1939; lean_object* x_1940; lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; lean_object* x_1944; lean_object* x_1945; lean_object* x_1946; lean_object* x_1947; uint8_t x_1948; lean_object* x_1949; lean_object* x_1950; lean_object* x_1951; lean_object* x_1952; 
x_1900 = lean_ctor_get(x_1722, 0);
lean_inc(x_1900);
lean_dec(x_1722);
x_1901 = lean_ctor_get(x_1723, 0);
lean_inc(x_1901);
if (lean_is_exclusive(x_1723)) {
 lean_ctor_release(x_1723, 0);
 lean_ctor_release(x_1723, 1);
 x_1902 = x_1723;
} else {
 lean_dec_ref(x_1723);
 x_1902 = lean_box(0);
}
x_1903 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1724);
lean_dec(x_5);
x_1904 = lean_ctor_get(x_1903, 0);
lean_inc(x_1904);
x_1905 = lean_ctor_get(x_1903, 1);
lean_inc(x_1905);
if (lean_is_exclusive(x_1903)) {
 lean_ctor_release(x_1903, 0);
 lean_ctor_release(x_1903, 1);
 x_1906 = x_1903;
} else {
 lean_dec_ref(x_1903);
 x_1906 = lean_box(0);
}
x_1907 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1904);
x_1908 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1908, 0, x_1904);
lean_ctor_set(x_1908, 1, x_1907);
x_1909 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1910 = lean_array_push(x_1909, x_1715);
x_1911 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1912 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1912, 0, x_1911);
lean_ctor_set(x_1912, 1, x_1910);
x_1913 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1914 = lean_array_push(x_1913, x_1912);
x_1915 = l_Lean_nullKind___closed__2;
x_1916 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1916, 0, x_1915);
lean_ctor_set(x_1916, 1, x_1914);
x_1917 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1904);
x_1918 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1918, 0, x_1904);
lean_ctor_set(x_1918, 1, x_1917);
x_1919 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1904);
x_1920 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1920, 0, x_1904);
lean_ctor_set(x_1920, 1, x_1919);
lean_inc(x_14);
x_1921 = lean_array_push(x_1913, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_1922 = x_14;
} else {
 lean_dec_ref(x_14);
 x_1922 = lean_box(0);
}
if (lean_is_scalar(x_1922)) {
 x_1923 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1923 = x_1922;
}
lean_ctor_set(x_1923, 0, x_1915);
lean_ctor_set(x_1923, 1, x_1921);
x_1924 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1925 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1925, 0, x_1904);
lean_ctor_set(x_1925, 1, x_1924);
x_1926 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1927 = lean_array_push(x_1926, x_1920);
x_1928 = lean_array_push(x_1927, x_1923);
x_1929 = lean_array_push(x_1928, x_1925);
x_1930 = lean_array_push(x_1929, x_1901);
x_1931 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1932 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1932, 0, x_1931);
lean_ctor_set(x_1932, 1, x_1930);
x_1933 = lean_array_push(x_1913, x_1932);
x_1934 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1934, 0, x_1915);
lean_ctor_set(x_1934, 1, x_1933);
x_1935 = lean_array_push(x_1913, x_1934);
x_1936 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_1937 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1937, 0, x_1936);
lean_ctor_set(x_1937, 1, x_1935);
x_1938 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_1939 = lean_array_push(x_1938, x_1908);
x_1940 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_1941 = lean_array_push(x_1939, x_1940);
x_1942 = lean_array_push(x_1941, x_1916);
x_1943 = lean_array_push(x_1942, x_1940);
x_1944 = lean_array_push(x_1943, x_1918);
x_1945 = lean_array_push(x_1944, x_1937);
x_1946 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_1947 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1947, 0, x_1946);
lean_ctor_set(x_1947, 1, x_1945);
x_1948 = 1;
x_1949 = lean_box(x_1948);
if (lean_is_scalar(x_1902)) {
 x_1950 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1950 = x_1902;
}
lean_ctor_set(x_1950, 0, x_1947);
lean_ctor_set(x_1950, 1, x_1949);
x_1951 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1951, 0, x_1900);
lean_ctor_set(x_1951, 1, x_1950);
if (lean_is_scalar(x_1906)) {
 x_1952 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1952 = x_1906;
}
lean_ctor_set(x_1952, 0, x_1951);
lean_ctor_set(x_1952, 1, x_1905);
return x_1952;
}
}
}
else
{
lean_object* x_1953; lean_object* x_1954; lean_object* x_1955; lean_object* x_1956; lean_object* x_1957; lean_object* x_1958; lean_object* x_1959; lean_object* x_1960; lean_object* x_1961; lean_object* x_1962; lean_object* x_1963; uint8_t x_1964; 
lean_dec(x_1211);
lean_inc(x_5);
x_1953 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_1954 = lean_ctor_get(x_1953, 0);
lean_inc(x_1954);
x_1955 = lean_ctor_get(x_1953, 1);
lean_inc(x_1955);
lean_dec(x_1953);
x_1956 = lean_nat_add(x_3, x_1210);
lean_dec(x_3);
x_1957 = l_Lean_mkHole(x_14);
lean_inc(x_1954);
x_1958 = l_Lean_Elab_Term_mkExplicitBinder(x_1954, x_1957);
x_1959 = lean_array_push(x_4, x_1958);
lean_inc(x_5);
x_1960 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1956, x_1959, x_5, x_1955);
x_1961 = lean_ctor_get(x_1960, 0);
lean_inc(x_1961);
x_1962 = lean_ctor_get(x_1961, 1);
lean_inc(x_1962);
x_1963 = lean_ctor_get(x_1960, 1);
lean_inc(x_1963);
lean_dec(x_1960);
x_1964 = !lean_is_exclusive(x_1961);
if (x_1964 == 0)
{
lean_object* x_1965; uint8_t x_1966; 
x_1965 = lean_ctor_get(x_1961, 1);
lean_dec(x_1965);
x_1966 = !lean_is_exclusive(x_1962);
if (x_1966 == 0)
{
lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; uint8_t x_1970; 
x_1967 = lean_ctor_get(x_1962, 0);
x_1968 = lean_ctor_get(x_1962, 1);
lean_dec(x_1968);
x_1969 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1963);
lean_dec(x_5);
x_1970 = !lean_is_exclusive(x_1969);
if (x_1970 == 0)
{
lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; lean_object* x_1975; lean_object* x_1976; lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; lean_object* x_1980; lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; lean_object* x_1985; lean_object* x_1986; uint8_t x_1987; 
x_1971 = lean_ctor_get(x_1969, 0);
x_1972 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_1971);
x_1973 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1973, 0, x_1971);
lean_ctor_set(x_1973, 1, x_1972);
x_1974 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_1975 = lean_array_push(x_1974, x_1954);
x_1976 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_1977 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1977, 0, x_1976);
lean_ctor_set(x_1977, 1, x_1975);
x_1978 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_1979 = lean_array_push(x_1978, x_1977);
x_1980 = l_Lean_nullKind___closed__2;
x_1981 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1981, 0, x_1980);
lean_ctor_set(x_1981, 1, x_1979);
x_1982 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_1971);
x_1983 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1983, 0, x_1971);
lean_ctor_set(x_1983, 1, x_1982);
x_1984 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_1971);
x_1985 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1985, 0, x_1971);
lean_ctor_set(x_1985, 1, x_1984);
lean_inc(x_14);
x_1986 = lean_array_push(x_1978, x_14);
x_1987 = !lean_is_exclusive(x_14);
if (x_1987 == 0)
{
lean_object* x_1988; lean_object* x_1989; lean_object* x_1990; lean_object* x_1991; lean_object* x_1992; lean_object* x_1993; lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; lean_object* x_1997; lean_object* x_1998; lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; lean_object* x_2002; lean_object* x_2003; lean_object* x_2004; lean_object* x_2005; lean_object* x_2006; lean_object* x_2007; lean_object* x_2008; lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; uint8_t x_2014; lean_object* x_2015; 
x_1988 = lean_ctor_get(x_14, 1);
lean_dec(x_1988);
x_1989 = lean_ctor_get(x_14, 0);
lean_dec(x_1989);
lean_ctor_set(x_14, 1, x_1986);
lean_ctor_set(x_14, 0, x_1980);
x_1990 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_1991 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1991, 0, x_1971);
lean_ctor_set(x_1991, 1, x_1990);
x_1992 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_1993 = lean_array_push(x_1992, x_1985);
x_1994 = lean_array_push(x_1993, x_14);
x_1995 = lean_array_push(x_1994, x_1991);
x_1996 = lean_array_push(x_1995, x_1967);
x_1997 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_1998 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1998, 0, x_1997);
lean_ctor_set(x_1998, 1, x_1996);
x_1999 = lean_array_push(x_1978, x_1998);
x_2000 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2000, 0, x_1980);
lean_ctor_set(x_2000, 1, x_1999);
x_2001 = lean_array_push(x_1978, x_2000);
x_2002 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2003 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2003, 0, x_2002);
lean_ctor_set(x_2003, 1, x_2001);
x_2004 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2005 = lean_array_push(x_2004, x_1973);
x_2006 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2007 = lean_array_push(x_2005, x_2006);
x_2008 = lean_array_push(x_2007, x_1981);
x_2009 = lean_array_push(x_2008, x_2006);
x_2010 = lean_array_push(x_2009, x_1983);
x_2011 = lean_array_push(x_2010, x_2003);
x_2012 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2013 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2013, 0, x_2012);
lean_ctor_set(x_2013, 1, x_2011);
x_2014 = 1;
x_2015 = lean_box(x_2014);
lean_ctor_set(x_1962, 1, x_2015);
lean_ctor_set(x_1962, 0, x_2013);
lean_ctor_set(x_1969, 0, x_1961);
return x_1969;
}
else
{
lean_object* x_2016; lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; lean_object* x_2020; lean_object* x_2021; lean_object* x_2022; lean_object* x_2023; lean_object* x_2024; lean_object* x_2025; lean_object* x_2026; lean_object* x_2027; lean_object* x_2028; lean_object* x_2029; lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; lean_object* x_2039; lean_object* x_2040; uint8_t x_2041; lean_object* x_2042; 
lean_dec(x_14);
x_2016 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2016, 0, x_1980);
lean_ctor_set(x_2016, 1, x_1986);
x_2017 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2018 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2018, 0, x_1971);
lean_ctor_set(x_2018, 1, x_2017);
x_2019 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2020 = lean_array_push(x_2019, x_1985);
x_2021 = lean_array_push(x_2020, x_2016);
x_2022 = lean_array_push(x_2021, x_2018);
x_2023 = lean_array_push(x_2022, x_1967);
x_2024 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2025 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2025, 0, x_2024);
lean_ctor_set(x_2025, 1, x_2023);
x_2026 = lean_array_push(x_1978, x_2025);
x_2027 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2027, 0, x_1980);
lean_ctor_set(x_2027, 1, x_2026);
x_2028 = lean_array_push(x_1978, x_2027);
x_2029 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2030 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2030, 0, x_2029);
lean_ctor_set(x_2030, 1, x_2028);
x_2031 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2032 = lean_array_push(x_2031, x_1973);
x_2033 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2034 = lean_array_push(x_2032, x_2033);
x_2035 = lean_array_push(x_2034, x_1981);
x_2036 = lean_array_push(x_2035, x_2033);
x_2037 = lean_array_push(x_2036, x_1983);
x_2038 = lean_array_push(x_2037, x_2030);
x_2039 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2040 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2040, 0, x_2039);
lean_ctor_set(x_2040, 1, x_2038);
x_2041 = 1;
x_2042 = lean_box(x_2041);
lean_ctor_set(x_1962, 1, x_2042);
lean_ctor_set(x_1962, 0, x_2040);
lean_ctor_set(x_1969, 0, x_1961);
return x_1969;
}
}
else
{
lean_object* x_2043; lean_object* x_2044; lean_object* x_2045; lean_object* x_2046; lean_object* x_2047; lean_object* x_2048; lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; lean_object* x_2052; lean_object* x_2053; lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; lean_object* x_2058; lean_object* x_2059; lean_object* x_2060; lean_object* x_2061; lean_object* x_2062; lean_object* x_2063; lean_object* x_2064; lean_object* x_2065; lean_object* x_2066; lean_object* x_2067; lean_object* x_2068; lean_object* x_2069; lean_object* x_2070; lean_object* x_2071; lean_object* x_2072; lean_object* x_2073; lean_object* x_2074; lean_object* x_2075; lean_object* x_2076; lean_object* x_2077; lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; lean_object* x_2082; lean_object* x_2083; lean_object* x_2084; lean_object* x_2085; uint8_t x_2086; lean_object* x_2087; lean_object* x_2088; 
x_2043 = lean_ctor_get(x_1969, 0);
x_2044 = lean_ctor_get(x_1969, 1);
lean_inc(x_2044);
lean_inc(x_2043);
lean_dec(x_1969);
x_2045 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2043);
x_2046 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2046, 0, x_2043);
lean_ctor_set(x_2046, 1, x_2045);
x_2047 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2048 = lean_array_push(x_2047, x_1954);
x_2049 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2050 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2050, 0, x_2049);
lean_ctor_set(x_2050, 1, x_2048);
x_2051 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2052 = lean_array_push(x_2051, x_2050);
x_2053 = l_Lean_nullKind___closed__2;
x_2054 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2054, 0, x_2053);
lean_ctor_set(x_2054, 1, x_2052);
x_2055 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2043);
x_2056 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2056, 0, x_2043);
lean_ctor_set(x_2056, 1, x_2055);
x_2057 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2043);
x_2058 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2058, 0, x_2043);
lean_ctor_set(x_2058, 1, x_2057);
lean_inc(x_14);
x_2059 = lean_array_push(x_2051, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2060 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2060 = lean_box(0);
}
if (lean_is_scalar(x_2060)) {
 x_2061 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2061 = x_2060;
}
lean_ctor_set(x_2061, 0, x_2053);
lean_ctor_set(x_2061, 1, x_2059);
x_2062 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2063 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2063, 0, x_2043);
lean_ctor_set(x_2063, 1, x_2062);
x_2064 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2065 = lean_array_push(x_2064, x_2058);
x_2066 = lean_array_push(x_2065, x_2061);
x_2067 = lean_array_push(x_2066, x_2063);
x_2068 = lean_array_push(x_2067, x_1967);
x_2069 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2070 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2070, 0, x_2069);
lean_ctor_set(x_2070, 1, x_2068);
x_2071 = lean_array_push(x_2051, x_2070);
x_2072 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2072, 0, x_2053);
lean_ctor_set(x_2072, 1, x_2071);
x_2073 = lean_array_push(x_2051, x_2072);
x_2074 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2075 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2075, 0, x_2074);
lean_ctor_set(x_2075, 1, x_2073);
x_2076 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2077 = lean_array_push(x_2076, x_2046);
x_2078 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2079 = lean_array_push(x_2077, x_2078);
x_2080 = lean_array_push(x_2079, x_2054);
x_2081 = lean_array_push(x_2080, x_2078);
x_2082 = lean_array_push(x_2081, x_2056);
x_2083 = lean_array_push(x_2082, x_2075);
x_2084 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2085 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2085, 0, x_2084);
lean_ctor_set(x_2085, 1, x_2083);
x_2086 = 1;
x_2087 = lean_box(x_2086);
lean_ctor_set(x_1962, 1, x_2087);
lean_ctor_set(x_1962, 0, x_2085);
x_2088 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2088, 0, x_1961);
lean_ctor_set(x_2088, 1, x_2044);
return x_2088;
}
}
else
{
lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; lean_object* x_2093; lean_object* x_2094; lean_object* x_2095; lean_object* x_2096; lean_object* x_2097; lean_object* x_2098; lean_object* x_2099; lean_object* x_2100; lean_object* x_2101; lean_object* x_2102; lean_object* x_2103; lean_object* x_2104; lean_object* x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; lean_object* x_2109; lean_object* x_2110; lean_object* x_2111; lean_object* x_2112; lean_object* x_2113; lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; lean_object* x_2117; lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; lean_object* x_2121; lean_object* x_2122; lean_object* x_2123; lean_object* x_2124; lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; lean_object* x_2128; lean_object* x_2129; lean_object* x_2130; lean_object* x_2131; lean_object* x_2132; lean_object* x_2133; lean_object* x_2134; uint8_t x_2135; lean_object* x_2136; lean_object* x_2137; lean_object* x_2138; 
x_2089 = lean_ctor_get(x_1962, 0);
lean_inc(x_2089);
lean_dec(x_1962);
x_2090 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1963);
lean_dec(x_5);
x_2091 = lean_ctor_get(x_2090, 0);
lean_inc(x_2091);
x_2092 = lean_ctor_get(x_2090, 1);
lean_inc(x_2092);
if (lean_is_exclusive(x_2090)) {
 lean_ctor_release(x_2090, 0);
 lean_ctor_release(x_2090, 1);
 x_2093 = x_2090;
} else {
 lean_dec_ref(x_2090);
 x_2093 = lean_box(0);
}
x_2094 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2091);
x_2095 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2095, 0, x_2091);
lean_ctor_set(x_2095, 1, x_2094);
x_2096 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2097 = lean_array_push(x_2096, x_1954);
x_2098 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2099 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2099, 0, x_2098);
lean_ctor_set(x_2099, 1, x_2097);
x_2100 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2101 = lean_array_push(x_2100, x_2099);
x_2102 = l_Lean_nullKind___closed__2;
x_2103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2103, 0, x_2102);
lean_ctor_set(x_2103, 1, x_2101);
x_2104 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2091);
x_2105 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2105, 0, x_2091);
lean_ctor_set(x_2105, 1, x_2104);
x_2106 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2091);
x_2107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2107, 0, x_2091);
lean_ctor_set(x_2107, 1, x_2106);
lean_inc(x_14);
x_2108 = lean_array_push(x_2100, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2109 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2109 = lean_box(0);
}
if (lean_is_scalar(x_2109)) {
 x_2110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2110 = x_2109;
}
lean_ctor_set(x_2110, 0, x_2102);
lean_ctor_set(x_2110, 1, x_2108);
x_2111 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2112, 0, x_2091);
lean_ctor_set(x_2112, 1, x_2111);
x_2113 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2114 = lean_array_push(x_2113, x_2107);
x_2115 = lean_array_push(x_2114, x_2110);
x_2116 = lean_array_push(x_2115, x_2112);
x_2117 = lean_array_push(x_2116, x_2089);
x_2118 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2119, 0, x_2118);
lean_ctor_set(x_2119, 1, x_2117);
x_2120 = lean_array_push(x_2100, x_2119);
x_2121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2121, 0, x_2102);
lean_ctor_set(x_2121, 1, x_2120);
x_2122 = lean_array_push(x_2100, x_2121);
x_2123 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2124, 0, x_2123);
lean_ctor_set(x_2124, 1, x_2122);
x_2125 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2126 = lean_array_push(x_2125, x_2095);
x_2127 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2128 = lean_array_push(x_2126, x_2127);
x_2129 = lean_array_push(x_2128, x_2103);
x_2130 = lean_array_push(x_2129, x_2127);
x_2131 = lean_array_push(x_2130, x_2105);
x_2132 = lean_array_push(x_2131, x_2124);
x_2133 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2134, 0, x_2133);
lean_ctor_set(x_2134, 1, x_2132);
x_2135 = 1;
x_2136 = lean_box(x_2135);
x_2137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2137, 0, x_2134);
lean_ctor_set(x_2137, 1, x_2136);
lean_ctor_set(x_1961, 1, x_2137);
if (lean_is_scalar(x_2093)) {
 x_2138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2138 = x_2093;
}
lean_ctor_set(x_2138, 0, x_1961);
lean_ctor_set(x_2138, 1, x_2092);
return x_2138;
}
}
else
{
lean_object* x_2139; lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; lean_object* x_2145; lean_object* x_2146; lean_object* x_2147; lean_object* x_2148; lean_object* x_2149; lean_object* x_2150; lean_object* x_2151; lean_object* x_2152; lean_object* x_2153; lean_object* x_2154; lean_object* x_2155; lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; lean_object* x_2163; lean_object* x_2164; lean_object* x_2165; lean_object* x_2166; lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; lean_object* x_2170; lean_object* x_2171; lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; lean_object* x_2175; lean_object* x_2176; lean_object* x_2177; lean_object* x_2178; lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; lean_object* x_2182; lean_object* x_2183; lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; uint8_t x_2187; lean_object* x_2188; lean_object* x_2189; lean_object* x_2190; lean_object* x_2191; 
x_2139 = lean_ctor_get(x_1961, 0);
lean_inc(x_2139);
lean_dec(x_1961);
x_2140 = lean_ctor_get(x_1962, 0);
lean_inc(x_2140);
if (lean_is_exclusive(x_1962)) {
 lean_ctor_release(x_1962, 0);
 lean_ctor_release(x_1962, 1);
 x_2141 = x_1962;
} else {
 lean_dec_ref(x_1962);
 x_2141 = lean_box(0);
}
x_2142 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_1963);
lean_dec(x_5);
x_2143 = lean_ctor_get(x_2142, 0);
lean_inc(x_2143);
x_2144 = lean_ctor_get(x_2142, 1);
lean_inc(x_2144);
if (lean_is_exclusive(x_2142)) {
 lean_ctor_release(x_2142, 0);
 lean_ctor_release(x_2142, 1);
 x_2145 = x_2142;
} else {
 lean_dec_ref(x_2142);
 x_2145 = lean_box(0);
}
x_2146 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2143);
x_2147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2147, 0, x_2143);
lean_ctor_set(x_2147, 1, x_2146);
x_2148 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2149 = lean_array_push(x_2148, x_1954);
x_2150 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2151, 0, x_2150);
lean_ctor_set(x_2151, 1, x_2149);
x_2152 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2153 = lean_array_push(x_2152, x_2151);
x_2154 = l_Lean_nullKind___closed__2;
x_2155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2155, 0, x_2154);
lean_ctor_set(x_2155, 1, x_2153);
x_2156 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2143);
x_2157 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2157, 0, x_2143);
lean_ctor_set(x_2157, 1, x_2156);
x_2158 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2143);
x_2159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2159, 0, x_2143);
lean_ctor_set(x_2159, 1, x_2158);
lean_inc(x_14);
x_2160 = lean_array_push(x_2152, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2161 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2161 = lean_box(0);
}
if (lean_is_scalar(x_2161)) {
 x_2162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2162 = x_2161;
}
lean_ctor_set(x_2162, 0, x_2154);
lean_ctor_set(x_2162, 1, x_2160);
x_2163 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2164 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2164, 0, x_2143);
lean_ctor_set(x_2164, 1, x_2163);
x_2165 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2166 = lean_array_push(x_2165, x_2159);
x_2167 = lean_array_push(x_2166, x_2162);
x_2168 = lean_array_push(x_2167, x_2164);
x_2169 = lean_array_push(x_2168, x_2140);
x_2170 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2171, 0, x_2170);
lean_ctor_set(x_2171, 1, x_2169);
x_2172 = lean_array_push(x_2152, x_2171);
x_2173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2173, 0, x_2154);
lean_ctor_set(x_2173, 1, x_2172);
x_2174 = lean_array_push(x_2152, x_2173);
x_2175 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2176, 0, x_2175);
lean_ctor_set(x_2176, 1, x_2174);
x_2177 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2178 = lean_array_push(x_2177, x_2147);
x_2179 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2180 = lean_array_push(x_2178, x_2179);
x_2181 = lean_array_push(x_2180, x_2155);
x_2182 = lean_array_push(x_2181, x_2179);
x_2183 = lean_array_push(x_2182, x_2157);
x_2184 = lean_array_push(x_2183, x_2176);
x_2185 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2186, 0, x_2185);
lean_ctor_set(x_2186, 1, x_2184);
x_2187 = 1;
x_2188 = lean_box(x_2187);
if (lean_is_scalar(x_2141)) {
 x_2189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2189 = x_2141;
}
lean_ctor_set(x_2189, 0, x_2186);
lean_ctor_set(x_2189, 1, x_2188);
x_2190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2190, 0, x_2139);
lean_ctor_set(x_2190, 1, x_2189);
if (lean_is_scalar(x_2145)) {
 x_2191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2191 = x_2145;
}
lean_ctor_set(x_2191, 0, x_2190);
lean_ctor_set(x_2191, 1, x_2144);
return x_2191;
}
}
}
}
else
{
lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; lean_object* x_2198; 
lean_dec(x_228);
lean_inc(x_5);
x_2192 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2193 = lean_ctor_get(x_2192, 0);
lean_inc(x_2193);
x_2194 = lean_ctor_get(x_2192, 1);
lean_inc(x_2194);
lean_dec(x_2192);
x_2195 = lean_unsigned_to_nat(1u);
x_2196 = lean_nat_add(x_3, x_2195);
lean_dec(x_3);
x_2197 = l_Lean_Elab_Term_mkExplicitBinder(x_2193, x_14);
x_2198 = lean_array_push(x_4, x_2197);
x_3 = x_2196;
x_4 = x_2198;
x_6 = x_2194;
goto _start;
}
}
else
{
lean_object* x_2200; lean_object* x_2201; lean_object* x_2202; 
lean_dec(x_228);
x_2200 = lean_unsigned_to_nat(1u);
x_2201 = lean_nat_add(x_3, x_2200);
lean_dec(x_3);
x_2202 = lean_array_push(x_4, x_14);
x_3 = x_2201;
x_4 = x_2202;
goto _start;
}
}
else
{
lean_object* x_2204; lean_object* x_2205; lean_object* x_2206; 
lean_dec(x_228);
x_2204 = lean_unsigned_to_nat(1u);
x_2205 = lean_nat_add(x_3, x_2204);
lean_dec(x_3);
x_2206 = lean_array_push(x_4, x_14);
x_3 = x_2205;
x_4 = x_2206;
goto _start;
}
}
else
{
lean_object* x_2208; lean_object* x_2209; lean_object* x_2210; 
lean_dec(x_228);
x_2208 = lean_unsigned_to_nat(1u);
x_2209 = lean_nat_add(x_3, x_2208);
lean_dec(x_3);
x_2210 = lean_array_push(x_4, x_14);
x_3 = x_2209;
x_4 = x_2210;
goto _start;
}
}
else
{
lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; 
lean_dec(x_228);
x_2212 = lean_unsigned_to_nat(1u);
x_2213 = lean_nat_add(x_3, x_2212);
lean_dec(x_3);
x_2214 = lean_array_push(x_4, x_14);
x_3 = x_2213;
x_4 = x_2214;
goto _start;
}
}
}
}
}
else
{
lean_object* x_2216; lean_object* x_2217; lean_object* x_2218; lean_object* x_2219; lean_object* x_2220; lean_object* x_2221; lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; lean_object* x_2225; lean_object* x_2226; lean_object* x_2227; uint8_t x_2228; 
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_223);
lean_inc(x_5);
x_2216 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2217 = lean_ctor_get(x_2216, 0);
lean_inc(x_2217);
x_2218 = lean_ctor_get(x_2216, 1);
lean_inc(x_2218);
lean_dec(x_2216);
x_2219 = lean_unsigned_to_nat(1u);
x_2220 = lean_nat_add(x_3, x_2219);
lean_dec(x_3);
x_2221 = l_Lean_mkHole(x_14);
lean_inc(x_2217);
x_2222 = l_Lean_Elab_Term_mkExplicitBinder(x_2217, x_2221);
x_2223 = lean_array_push(x_4, x_2222);
lean_inc(x_5);
x_2224 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2220, x_2223, x_5, x_2218);
x_2225 = lean_ctor_get(x_2224, 0);
lean_inc(x_2225);
x_2226 = lean_ctor_get(x_2225, 1);
lean_inc(x_2226);
x_2227 = lean_ctor_get(x_2224, 1);
lean_inc(x_2227);
lean_dec(x_2224);
x_2228 = !lean_is_exclusive(x_2225);
if (x_2228 == 0)
{
lean_object* x_2229; uint8_t x_2230; 
x_2229 = lean_ctor_get(x_2225, 1);
lean_dec(x_2229);
x_2230 = !lean_is_exclusive(x_2226);
if (x_2230 == 0)
{
lean_object* x_2231; lean_object* x_2232; lean_object* x_2233; uint8_t x_2234; 
x_2231 = lean_ctor_get(x_2226, 0);
x_2232 = lean_ctor_get(x_2226, 1);
lean_dec(x_2232);
x_2233 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2227);
lean_dec(x_5);
x_2234 = !lean_is_exclusive(x_2233);
if (x_2234 == 0)
{
lean_object* x_2235; lean_object* x_2236; lean_object* x_2237; lean_object* x_2238; lean_object* x_2239; lean_object* x_2240; lean_object* x_2241; lean_object* x_2242; lean_object* x_2243; lean_object* x_2244; lean_object* x_2245; lean_object* x_2246; lean_object* x_2247; lean_object* x_2248; lean_object* x_2249; lean_object* x_2250; uint8_t x_2251; 
x_2235 = lean_ctor_get(x_2233, 0);
x_2236 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2235);
x_2237 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2237, 0, x_2235);
lean_ctor_set(x_2237, 1, x_2236);
x_2238 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2239 = lean_array_push(x_2238, x_2217);
x_2240 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2241, 0, x_2240);
lean_ctor_set(x_2241, 1, x_2239);
x_2242 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2243 = lean_array_push(x_2242, x_2241);
x_2244 = l_Lean_nullKind___closed__2;
x_2245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2245, 0, x_2244);
lean_ctor_set(x_2245, 1, x_2243);
x_2246 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2235);
x_2247 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2247, 0, x_2235);
lean_ctor_set(x_2247, 1, x_2246);
x_2248 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2235);
x_2249 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2249, 0, x_2235);
lean_ctor_set(x_2249, 1, x_2248);
lean_inc(x_14);
x_2250 = lean_array_push(x_2242, x_14);
x_2251 = !lean_is_exclusive(x_14);
if (x_2251 == 0)
{
lean_object* x_2252; lean_object* x_2253; lean_object* x_2254; lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; lean_object* x_2271; lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; lean_object* x_2276; lean_object* x_2277; uint8_t x_2278; lean_object* x_2279; 
x_2252 = lean_ctor_get(x_14, 1);
lean_dec(x_2252);
x_2253 = lean_ctor_get(x_14, 0);
lean_dec(x_2253);
lean_ctor_set(x_14, 1, x_2250);
lean_ctor_set(x_14, 0, x_2244);
x_2254 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2255, 0, x_2235);
lean_ctor_set(x_2255, 1, x_2254);
x_2256 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2257 = lean_array_push(x_2256, x_2249);
x_2258 = lean_array_push(x_2257, x_14);
x_2259 = lean_array_push(x_2258, x_2255);
x_2260 = lean_array_push(x_2259, x_2231);
x_2261 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2262, 0, x_2261);
lean_ctor_set(x_2262, 1, x_2260);
x_2263 = lean_array_push(x_2242, x_2262);
x_2264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2264, 0, x_2244);
lean_ctor_set(x_2264, 1, x_2263);
x_2265 = lean_array_push(x_2242, x_2264);
x_2266 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2267, 0, x_2266);
lean_ctor_set(x_2267, 1, x_2265);
x_2268 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2269 = lean_array_push(x_2268, x_2237);
x_2270 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2271 = lean_array_push(x_2269, x_2270);
x_2272 = lean_array_push(x_2271, x_2245);
x_2273 = lean_array_push(x_2272, x_2270);
x_2274 = lean_array_push(x_2273, x_2247);
x_2275 = lean_array_push(x_2274, x_2267);
x_2276 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2277, 0, x_2276);
lean_ctor_set(x_2277, 1, x_2275);
x_2278 = 1;
x_2279 = lean_box(x_2278);
lean_ctor_set(x_2226, 1, x_2279);
lean_ctor_set(x_2226, 0, x_2277);
lean_ctor_set(x_2233, 0, x_2225);
return x_2233;
}
else
{
lean_object* x_2280; lean_object* x_2281; lean_object* x_2282; lean_object* x_2283; lean_object* x_2284; lean_object* x_2285; lean_object* x_2286; lean_object* x_2287; lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; lean_object* x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; lean_object* x_2297; lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; lean_object* x_2302; lean_object* x_2303; lean_object* x_2304; uint8_t x_2305; lean_object* x_2306; 
lean_dec(x_14);
x_2280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2280, 0, x_2244);
lean_ctor_set(x_2280, 1, x_2250);
x_2281 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2282 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2282, 0, x_2235);
lean_ctor_set(x_2282, 1, x_2281);
x_2283 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2284 = lean_array_push(x_2283, x_2249);
x_2285 = lean_array_push(x_2284, x_2280);
x_2286 = lean_array_push(x_2285, x_2282);
x_2287 = lean_array_push(x_2286, x_2231);
x_2288 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2289, 0, x_2288);
lean_ctor_set(x_2289, 1, x_2287);
x_2290 = lean_array_push(x_2242, x_2289);
x_2291 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2291, 0, x_2244);
lean_ctor_set(x_2291, 1, x_2290);
x_2292 = lean_array_push(x_2242, x_2291);
x_2293 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2294, 0, x_2293);
lean_ctor_set(x_2294, 1, x_2292);
x_2295 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2296 = lean_array_push(x_2295, x_2237);
x_2297 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2298 = lean_array_push(x_2296, x_2297);
x_2299 = lean_array_push(x_2298, x_2245);
x_2300 = lean_array_push(x_2299, x_2297);
x_2301 = lean_array_push(x_2300, x_2247);
x_2302 = lean_array_push(x_2301, x_2294);
x_2303 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2304, 0, x_2303);
lean_ctor_set(x_2304, 1, x_2302);
x_2305 = 1;
x_2306 = lean_box(x_2305);
lean_ctor_set(x_2226, 1, x_2306);
lean_ctor_set(x_2226, 0, x_2304);
lean_ctor_set(x_2233, 0, x_2225);
return x_2233;
}
}
else
{
lean_object* x_2307; lean_object* x_2308; lean_object* x_2309; lean_object* x_2310; lean_object* x_2311; lean_object* x_2312; lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; lean_object* x_2316; lean_object* x_2317; lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; lean_object* x_2321; lean_object* x_2322; lean_object* x_2323; lean_object* x_2324; lean_object* x_2325; lean_object* x_2326; lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; lean_object* x_2330; lean_object* x_2331; lean_object* x_2332; lean_object* x_2333; lean_object* x_2334; lean_object* x_2335; lean_object* x_2336; lean_object* x_2337; lean_object* x_2338; lean_object* x_2339; lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; lean_object* x_2343; lean_object* x_2344; lean_object* x_2345; lean_object* x_2346; lean_object* x_2347; lean_object* x_2348; lean_object* x_2349; uint8_t x_2350; lean_object* x_2351; lean_object* x_2352; 
x_2307 = lean_ctor_get(x_2233, 0);
x_2308 = lean_ctor_get(x_2233, 1);
lean_inc(x_2308);
lean_inc(x_2307);
lean_dec(x_2233);
x_2309 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2307);
x_2310 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2310, 0, x_2307);
lean_ctor_set(x_2310, 1, x_2309);
x_2311 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2312 = lean_array_push(x_2311, x_2217);
x_2313 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2314, 0, x_2313);
lean_ctor_set(x_2314, 1, x_2312);
x_2315 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2316 = lean_array_push(x_2315, x_2314);
x_2317 = l_Lean_nullKind___closed__2;
x_2318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2318, 0, x_2317);
lean_ctor_set(x_2318, 1, x_2316);
x_2319 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2307);
x_2320 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2320, 0, x_2307);
lean_ctor_set(x_2320, 1, x_2319);
x_2321 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2307);
x_2322 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2322, 0, x_2307);
lean_ctor_set(x_2322, 1, x_2321);
lean_inc(x_14);
x_2323 = lean_array_push(x_2315, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2324 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2324 = lean_box(0);
}
if (lean_is_scalar(x_2324)) {
 x_2325 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2325 = x_2324;
}
lean_ctor_set(x_2325, 0, x_2317);
lean_ctor_set(x_2325, 1, x_2323);
x_2326 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2327 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2327, 0, x_2307);
lean_ctor_set(x_2327, 1, x_2326);
x_2328 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2329 = lean_array_push(x_2328, x_2322);
x_2330 = lean_array_push(x_2329, x_2325);
x_2331 = lean_array_push(x_2330, x_2327);
x_2332 = lean_array_push(x_2331, x_2231);
x_2333 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2334, 0, x_2333);
lean_ctor_set(x_2334, 1, x_2332);
x_2335 = lean_array_push(x_2315, x_2334);
x_2336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2336, 0, x_2317);
lean_ctor_set(x_2336, 1, x_2335);
x_2337 = lean_array_push(x_2315, x_2336);
x_2338 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2339, 0, x_2338);
lean_ctor_set(x_2339, 1, x_2337);
x_2340 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2341 = lean_array_push(x_2340, x_2310);
x_2342 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2343 = lean_array_push(x_2341, x_2342);
x_2344 = lean_array_push(x_2343, x_2318);
x_2345 = lean_array_push(x_2344, x_2342);
x_2346 = lean_array_push(x_2345, x_2320);
x_2347 = lean_array_push(x_2346, x_2339);
x_2348 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2349 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2349, 0, x_2348);
lean_ctor_set(x_2349, 1, x_2347);
x_2350 = 1;
x_2351 = lean_box(x_2350);
lean_ctor_set(x_2226, 1, x_2351);
lean_ctor_set(x_2226, 0, x_2349);
x_2352 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2352, 0, x_2225);
lean_ctor_set(x_2352, 1, x_2308);
return x_2352;
}
}
else
{
lean_object* x_2353; lean_object* x_2354; lean_object* x_2355; lean_object* x_2356; lean_object* x_2357; lean_object* x_2358; lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; lean_object* x_2362; lean_object* x_2363; lean_object* x_2364; lean_object* x_2365; lean_object* x_2366; lean_object* x_2367; lean_object* x_2368; lean_object* x_2369; lean_object* x_2370; lean_object* x_2371; lean_object* x_2372; lean_object* x_2373; lean_object* x_2374; lean_object* x_2375; lean_object* x_2376; lean_object* x_2377; lean_object* x_2378; lean_object* x_2379; lean_object* x_2380; lean_object* x_2381; lean_object* x_2382; lean_object* x_2383; lean_object* x_2384; lean_object* x_2385; lean_object* x_2386; lean_object* x_2387; lean_object* x_2388; lean_object* x_2389; lean_object* x_2390; lean_object* x_2391; lean_object* x_2392; lean_object* x_2393; lean_object* x_2394; lean_object* x_2395; lean_object* x_2396; lean_object* x_2397; lean_object* x_2398; uint8_t x_2399; lean_object* x_2400; lean_object* x_2401; lean_object* x_2402; 
x_2353 = lean_ctor_get(x_2226, 0);
lean_inc(x_2353);
lean_dec(x_2226);
x_2354 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2227);
lean_dec(x_5);
x_2355 = lean_ctor_get(x_2354, 0);
lean_inc(x_2355);
x_2356 = lean_ctor_get(x_2354, 1);
lean_inc(x_2356);
if (lean_is_exclusive(x_2354)) {
 lean_ctor_release(x_2354, 0);
 lean_ctor_release(x_2354, 1);
 x_2357 = x_2354;
} else {
 lean_dec_ref(x_2354);
 x_2357 = lean_box(0);
}
x_2358 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2355);
x_2359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2359, 0, x_2355);
lean_ctor_set(x_2359, 1, x_2358);
x_2360 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2361 = lean_array_push(x_2360, x_2217);
x_2362 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2363, 0, x_2362);
lean_ctor_set(x_2363, 1, x_2361);
x_2364 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2365 = lean_array_push(x_2364, x_2363);
x_2366 = l_Lean_nullKind___closed__2;
x_2367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2367, 0, x_2366);
lean_ctor_set(x_2367, 1, x_2365);
x_2368 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2355);
x_2369 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2369, 0, x_2355);
lean_ctor_set(x_2369, 1, x_2368);
x_2370 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2355);
x_2371 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2371, 0, x_2355);
lean_ctor_set(x_2371, 1, x_2370);
lean_inc(x_14);
x_2372 = lean_array_push(x_2364, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2373 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2373 = lean_box(0);
}
if (lean_is_scalar(x_2373)) {
 x_2374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2374 = x_2373;
}
lean_ctor_set(x_2374, 0, x_2366);
lean_ctor_set(x_2374, 1, x_2372);
x_2375 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2376 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2376, 0, x_2355);
lean_ctor_set(x_2376, 1, x_2375);
x_2377 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2378 = lean_array_push(x_2377, x_2371);
x_2379 = lean_array_push(x_2378, x_2374);
x_2380 = lean_array_push(x_2379, x_2376);
x_2381 = lean_array_push(x_2380, x_2353);
x_2382 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2383 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2383, 0, x_2382);
lean_ctor_set(x_2383, 1, x_2381);
x_2384 = lean_array_push(x_2364, x_2383);
x_2385 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2385, 0, x_2366);
lean_ctor_set(x_2385, 1, x_2384);
x_2386 = lean_array_push(x_2364, x_2385);
x_2387 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2388 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2388, 0, x_2387);
lean_ctor_set(x_2388, 1, x_2386);
x_2389 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2390 = lean_array_push(x_2389, x_2359);
x_2391 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2392 = lean_array_push(x_2390, x_2391);
x_2393 = lean_array_push(x_2392, x_2367);
x_2394 = lean_array_push(x_2393, x_2391);
x_2395 = lean_array_push(x_2394, x_2369);
x_2396 = lean_array_push(x_2395, x_2388);
x_2397 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2398, 0, x_2397);
lean_ctor_set(x_2398, 1, x_2396);
x_2399 = 1;
x_2400 = lean_box(x_2399);
x_2401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2401, 0, x_2398);
lean_ctor_set(x_2401, 1, x_2400);
lean_ctor_set(x_2225, 1, x_2401);
if (lean_is_scalar(x_2357)) {
 x_2402 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2402 = x_2357;
}
lean_ctor_set(x_2402, 0, x_2225);
lean_ctor_set(x_2402, 1, x_2356);
return x_2402;
}
}
else
{
lean_object* x_2403; lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; lean_object* x_2407; lean_object* x_2408; lean_object* x_2409; lean_object* x_2410; lean_object* x_2411; lean_object* x_2412; lean_object* x_2413; lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; lean_object* x_2417; lean_object* x_2418; lean_object* x_2419; lean_object* x_2420; lean_object* x_2421; lean_object* x_2422; lean_object* x_2423; lean_object* x_2424; lean_object* x_2425; lean_object* x_2426; lean_object* x_2427; lean_object* x_2428; lean_object* x_2429; lean_object* x_2430; lean_object* x_2431; lean_object* x_2432; lean_object* x_2433; lean_object* x_2434; lean_object* x_2435; lean_object* x_2436; lean_object* x_2437; lean_object* x_2438; lean_object* x_2439; lean_object* x_2440; lean_object* x_2441; lean_object* x_2442; lean_object* x_2443; lean_object* x_2444; lean_object* x_2445; lean_object* x_2446; lean_object* x_2447; lean_object* x_2448; lean_object* x_2449; lean_object* x_2450; uint8_t x_2451; lean_object* x_2452; lean_object* x_2453; lean_object* x_2454; lean_object* x_2455; 
x_2403 = lean_ctor_get(x_2225, 0);
lean_inc(x_2403);
lean_dec(x_2225);
x_2404 = lean_ctor_get(x_2226, 0);
lean_inc(x_2404);
if (lean_is_exclusive(x_2226)) {
 lean_ctor_release(x_2226, 0);
 lean_ctor_release(x_2226, 1);
 x_2405 = x_2226;
} else {
 lean_dec_ref(x_2226);
 x_2405 = lean_box(0);
}
x_2406 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2227);
lean_dec(x_5);
x_2407 = lean_ctor_get(x_2406, 0);
lean_inc(x_2407);
x_2408 = lean_ctor_get(x_2406, 1);
lean_inc(x_2408);
if (lean_is_exclusive(x_2406)) {
 lean_ctor_release(x_2406, 0);
 lean_ctor_release(x_2406, 1);
 x_2409 = x_2406;
} else {
 lean_dec_ref(x_2406);
 x_2409 = lean_box(0);
}
x_2410 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2407);
x_2411 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2411, 0, x_2407);
lean_ctor_set(x_2411, 1, x_2410);
x_2412 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2413 = lean_array_push(x_2412, x_2217);
x_2414 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2415, 0, x_2414);
lean_ctor_set(x_2415, 1, x_2413);
x_2416 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2417 = lean_array_push(x_2416, x_2415);
x_2418 = l_Lean_nullKind___closed__2;
x_2419 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2419, 0, x_2418);
lean_ctor_set(x_2419, 1, x_2417);
x_2420 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2407);
x_2421 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2421, 0, x_2407);
lean_ctor_set(x_2421, 1, x_2420);
x_2422 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2407);
x_2423 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2423, 0, x_2407);
lean_ctor_set(x_2423, 1, x_2422);
lean_inc(x_14);
x_2424 = lean_array_push(x_2416, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2425 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2425 = lean_box(0);
}
if (lean_is_scalar(x_2425)) {
 x_2426 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2426 = x_2425;
}
lean_ctor_set(x_2426, 0, x_2418);
lean_ctor_set(x_2426, 1, x_2424);
x_2427 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2428 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2428, 0, x_2407);
lean_ctor_set(x_2428, 1, x_2427);
x_2429 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2430 = lean_array_push(x_2429, x_2423);
x_2431 = lean_array_push(x_2430, x_2426);
x_2432 = lean_array_push(x_2431, x_2428);
x_2433 = lean_array_push(x_2432, x_2404);
x_2434 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2435 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2435, 0, x_2434);
lean_ctor_set(x_2435, 1, x_2433);
x_2436 = lean_array_push(x_2416, x_2435);
x_2437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2437, 0, x_2418);
lean_ctor_set(x_2437, 1, x_2436);
x_2438 = lean_array_push(x_2416, x_2437);
x_2439 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2440, 0, x_2439);
lean_ctor_set(x_2440, 1, x_2438);
x_2441 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2442 = lean_array_push(x_2441, x_2411);
x_2443 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2444 = lean_array_push(x_2442, x_2443);
x_2445 = lean_array_push(x_2444, x_2419);
x_2446 = lean_array_push(x_2445, x_2443);
x_2447 = lean_array_push(x_2446, x_2421);
x_2448 = lean_array_push(x_2447, x_2440);
x_2449 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2450 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2450, 0, x_2449);
lean_ctor_set(x_2450, 1, x_2448);
x_2451 = 1;
x_2452 = lean_box(x_2451);
if (lean_is_scalar(x_2405)) {
 x_2453 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2453 = x_2405;
}
lean_ctor_set(x_2453, 0, x_2450);
lean_ctor_set(x_2453, 1, x_2452);
x_2454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2454, 0, x_2403);
lean_ctor_set(x_2454, 1, x_2453);
if (lean_is_scalar(x_2409)) {
 x_2455 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2455 = x_2409;
}
lean_ctor_set(x_2455, 0, x_2454);
lean_ctor_set(x_2455, 1, x_2408);
return x_2455;
}
}
}
else
{
lean_object* x_2456; lean_object* x_2457; lean_object* x_2458; lean_object* x_2459; lean_object* x_2460; lean_object* x_2461; lean_object* x_2462; lean_object* x_2463; lean_object* x_2464; lean_object* x_2465; lean_object* x_2466; lean_object* x_2467; uint8_t x_2468; 
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_223);
lean_inc(x_5);
x_2456 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2457 = lean_ctor_get(x_2456, 0);
lean_inc(x_2457);
x_2458 = lean_ctor_get(x_2456, 1);
lean_inc(x_2458);
lean_dec(x_2456);
x_2459 = lean_unsigned_to_nat(1u);
x_2460 = lean_nat_add(x_3, x_2459);
lean_dec(x_3);
x_2461 = l_Lean_mkHole(x_14);
lean_inc(x_2457);
x_2462 = l_Lean_Elab_Term_mkExplicitBinder(x_2457, x_2461);
x_2463 = lean_array_push(x_4, x_2462);
lean_inc(x_5);
x_2464 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2460, x_2463, x_5, x_2458);
x_2465 = lean_ctor_get(x_2464, 0);
lean_inc(x_2465);
x_2466 = lean_ctor_get(x_2465, 1);
lean_inc(x_2466);
x_2467 = lean_ctor_get(x_2464, 1);
lean_inc(x_2467);
lean_dec(x_2464);
x_2468 = !lean_is_exclusive(x_2465);
if (x_2468 == 0)
{
lean_object* x_2469; uint8_t x_2470; 
x_2469 = lean_ctor_get(x_2465, 1);
lean_dec(x_2469);
x_2470 = !lean_is_exclusive(x_2466);
if (x_2470 == 0)
{
lean_object* x_2471; lean_object* x_2472; lean_object* x_2473; uint8_t x_2474; 
x_2471 = lean_ctor_get(x_2466, 0);
x_2472 = lean_ctor_get(x_2466, 1);
lean_dec(x_2472);
x_2473 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2467);
lean_dec(x_5);
x_2474 = !lean_is_exclusive(x_2473);
if (x_2474 == 0)
{
lean_object* x_2475; lean_object* x_2476; lean_object* x_2477; lean_object* x_2478; lean_object* x_2479; lean_object* x_2480; lean_object* x_2481; lean_object* x_2482; lean_object* x_2483; lean_object* x_2484; lean_object* x_2485; lean_object* x_2486; lean_object* x_2487; lean_object* x_2488; lean_object* x_2489; lean_object* x_2490; uint8_t x_2491; 
x_2475 = lean_ctor_get(x_2473, 0);
x_2476 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2475);
x_2477 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2477, 0, x_2475);
lean_ctor_set(x_2477, 1, x_2476);
x_2478 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2479 = lean_array_push(x_2478, x_2457);
x_2480 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2481 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2481, 0, x_2480);
lean_ctor_set(x_2481, 1, x_2479);
x_2482 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2483 = lean_array_push(x_2482, x_2481);
x_2484 = l_Lean_nullKind___closed__2;
x_2485 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2485, 0, x_2484);
lean_ctor_set(x_2485, 1, x_2483);
x_2486 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2475);
x_2487 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2487, 0, x_2475);
lean_ctor_set(x_2487, 1, x_2486);
x_2488 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2475);
x_2489 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2489, 0, x_2475);
lean_ctor_set(x_2489, 1, x_2488);
lean_inc(x_14);
x_2490 = lean_array_push(x_2482, x_14);
x_2491 = !lean_is_exclusive(x_14);
if (x_2491 == 0)
{
lean_object* x_2492; lean_object* x_2493; lean_object* x_2494; lean_object* x_2495; lean_object* x_2496; lean_object* x_2497; lean_object* x_2498; lean_object* x_2499; lean_object* x_2500; lean_object* x_2501; lean_object* x_2502; lean_object* x_2503; lean_object* x_2504; lean_object* x_2505; lean_object* x_2506; lean_object* x_2507; lean_object* x_2508; lean_object* x_2509; lean_object* x_2510; lean_object* x_2511; lean_object* x_2512; lean_object* x_2513; lean_object* x_2514; lean_object* x_2515; lean_object* x_2516; lean_object* x_2517; uint8_t x_2518; lean_object* x_2519; 
x_2492 = lean_ctor_get(x_14, 1);
lean_dec(x_2492);
x_2493 = lean_ctor_get(x_14, 0);
lean_dec(x_2493);
lean_ctor_set(x_14, 1, x_2490);
lean_ctor_set(x_14, 0, x_2484);
x_2494 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2495 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2495, 0, x_2475);
lean_ctor_set(x_2495, 1, x_2494);
x_2496 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2497 = lean_array_push(x_2496, x_2489);
x_2498 = lean_array_push(x_2497, x_14);
x_2499 = lean_array_push(x_2498, x_2495);
x_2500 = lean_array_push(x_2499, x_2471);
x_2501 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2502 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2502, 0, x_2501);
lean_ctor_set(x_2502, 1, x_2500);
x_2503 = lean_array_push(x_2482, x_2502);
x_2504 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2504, 0, x_2484);
lean_ctor_set(x_2504, 1, x_2503);
x_2505 = lean_array_push(x_2482, x_2504);
x_2506 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2507 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2507, 0, x_2506);
lean_ctor_set(x_2507, 1, x_2505);
x_2508 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2509 = lean_array_push(x_2508, x_2477);
x_2510 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2511 = lean_array_push(x_2509, x_2510);
x_2512 = lean_array_push(x_2511, x_2485);
x_2513 = lean_array_push(x_2512, x_2510);
x_2514 = lean_array_push(x_2513, x_2487);
x_2515 = lean_array_push(x_2514, x_2507);
x_2516 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2517 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2517, 0, x_2516);
lean_ctor_set(x_2517, 1, x_2515);
x_2518 = 1;
x_2519 = lean_box(x_2518);
lean_ctor_set(x_2466, 1, x_2519);
lean_ctor_set(x_2466, 0, x_2517);
lean_ctor_set(x_2473, 0, x_2465);
return x_2473;
}
else
{
lean_object* x_2520; lean_object* x_2521; lean_object* x_2522; lean_object* x_2523; lean_object* x_2524; lean_object* x_2525; lean_object* x_2526; lean_object* x_2527; lean_object* x_2528; lean_object* x_2529; lean_object* x_2530; lean_object* x_2531; lean_object* x_2532; lean_object* x_2533; lean_object* x_2534; lean_object* x_2535; lean_object* x_2536; lean_object* x_2537; lean_object* x_2538; lean_object* x_2539; lean_object* x_2540; lean_object* x_2541; lean_object* x_2542; lean_object* x_2543; lean_object* x_2544; uint8_t x_2545; lean_object* x_2546; 
lean_dec(x_14);
x_2520 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2520, 0, x_2484);
lean_ctor_set(x_2520, 1, x_2490);
x_2521 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2522 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2522, 0, x_2475);
lean_ctor_set(x_2522, 1, x_2521);
x_2523 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2524 = lean_array_push(x_2523, x_2489);
x_2525 = lean_array_push(x_2524, x_2520);
x_2526 = lean_array_push(x_2525, x_2522);
x_2527 = lean_array_push(x_2526, x_2471);
x_2528 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2529 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2529, 0, x_2528);
lean_ctor_set(x_2529, 1, x_2527);
x_2530 = lean_array_push(x_2482, x_2529);
x_2531 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2531, 0, x_2484);
lean_ctor_set(x_2531, 1, x_2530);
x_2532 = lean_array_push(x_2482, x_2531);
x_2533 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2534 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2534, 0, x_2533);
lean_ctor_set(x_2534, 1, x_2532);
x_2535 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2536 = lean_array_push(x_2535, x_2477);
x_2537 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2538 = lean_array_push(x_2536, x_2537);
x_2539 = lean_array_push(x_2538, x_2485);
x_2540 = lean_array_push(x_2539, x_2537);
x_2541 = lean_array_push(x_2540, x_2487);
x_2542 = lean_array_push(x_2541, x_2534);
x_2543 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2544 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2544, 0, x_2543);
lean_ctor_set(x_2544, 1, x_2542);
x_2545 = 1;
x_2546 = lean_box(x_2545);
lean_ctor_set(x_2466, 1, x_2546);
lean_ctor_set(x_2466, 0, x_2544);
lean_ctor_set(x_2473, 0, x_2465);
return x_2473;
}
}
else
{
lean_object* x_2547; lean_object* x_2548; lean_object* x_2549; lean_object* x_2550; lean_object* x_2551; lean_object* x_2552; lean_object* x_2553; lean_object* x_2554; lean_object* x_2555; lean_object* x_2556; lean_object* x_2557; lean_object* x_2558; lean_object* x_2559; lean_object* x_2560; lean_object* x_2561; lean_object* x_2562; lean_object* x_2563; lean_object* x_2564; lean_object* x_2565; lean_object* x_2566; lean_object* x_2567; lean_object* x_2568; lean_object* x_2569; lean_object* x_2570; lean_object* x_2571; lean_object* x_2572; lean_object* x_2573; lean_object* x_2574; lean_object* x_2575; lean_object* x_2576; lean_object* x_2577; lean_object* x_2578; lean_object* x_2579; lean_object* x_2580; lean_object* x_2581; lean_object* x_2582; lean_object* x_2583; lean_object* x_2584; lean_object* x_2585; lean_object* x_2586; lean_object* x_2587; lean_object* x_2588; lean_object* x_2589; uint8_t x_2590; lean_object* x_2591; lean_object* x_2592; 
x_2547 = lean_ctor_get(x_2473, 0);
x_2548 = lean_ctor_get(x_2473, 1);
lean_inc(x_2548);
lean_inc(x_2547);
lean_dec(x_2473);
x_2549 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2547);
x_2550 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2550, 0, x_2547);
lean_ctor_set(x_2550, 1, x_2549);
x_2551 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2552 = lean_array_push(x_2551, x_2457);
x_2553 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2554 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2554, 0, x_2553);
lean_ctor_set(x_2554, 1, x_2552);
x_2555 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2556 = lean_array_push(x_2555, x_2554);
x_2557 = l_Lean_nullKind___closed__2;
x_2558 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2558, 0, x_2557);
lean_ctor_set(x_2558, 1, x_2556);
x_2559 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2547);
x_2560 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2560, 0, x_2547);
lean_ctor_set(x_2560, 1, x_2559);
x_2561 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2547);
x_2562 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2562, 0, x_2547);
lean_ctor_set(x_2562, 1, x_2561);
lean_inc(x_14);
x_2563 = lean_array_push(x_2555, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2564 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2564 = lean_box(0);
}
if (lean_is_scalar(x_2564)) {
 x_2565 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2565 = x_2564;
}
lean_ctor_set(x_2565, 0, x_2557);
lean_ctor_set(x_2565, 1, x_2563);
x_2566 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2567 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2567, 0, x_2547);
lean_ctor_set(x_2567, 1, x_2566);
x_2568 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2569 = lean_array_push(x_2568, x_2562);
x_2570 = lean_array_push(x_2569, x_2565);
x_2571 = lean_array_push(x_2570, x_2567);
x_2572 = lean_array_push(x_2571, x_2471);
x_2573 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2574, 0, x_2573);
lean_ctor_set(x_2574, 1, x_2572);
x_2575 = lean_array_push(x_2555, x_2574);
x_2576 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2576, 0, x_2557);
lean_ctor_set(x_2576, 1, x_2575);
x_2577 = lean_array_push(x_2555, x_2576);
x_2578 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2579 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2579, 0, x_2578);
lean_ctor_set(x_2579, 1, x_2577);
x_2580 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2581 = lean_array_push(x_2580, x_2550);
x_2582 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2583 = lean_array_push(x_2581, x_2582);
x_2584 = lean_array_push(x_2583, x_2558);
x_2585 = lean_array_push(x_2584, x_2582);
x_2586 = lean_array_push(x_2585, x_2560);
x_2587 = lean_array_push(x_2586, x_2579);
x_2588 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2589 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2589, 0, x_2588);
lean_ctor_set(x_2589, 1, x_2587);
x_2590 = 1;
x_2591 = lean_box(x_2590);
lean_ctor_set(x_2466, 1, x_2591);
lean_ctor_set(x_2466, 0, x_2589);
x_2592 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2592, 0, x_2465);
lean_ctor_set(x_2592, 1, x_2548);
return x_2592;
}
}
else
{
lean_object* x_2593; lean_object* x_2594; lean_object* x_2595; lean_object* x_2596; lean_object* x_2597; lean_object* x_2598; lean_object* x_2599; lean_object* x_2600; lean_object* x_2601; lean_object* x_2602; lean_object* x_2603; lean_object* x_2604; lean_object* x_2605; lean_object* x_2606; lean_object* x_2607; lean_object* x_2608; lean_object* x_2609; lean_object* x_2610; lean_object* x_2611; lean_object* x_2612; lean_object* x_2613; lean_object* x_2614; lean_object* x_2615; lean_object* x_2616; lean_object* x_2617; lean_object* x_2618; lean_object* x_2619; lean_object* x_2620; lean_object* x_2621; lean_object* x_2622; lean_object* x_2623; lean_object* x_2624; lean_object* x_2625; lean_object* x_2626; lean_object* x_2627; lean_object* x_2628; lean_object* x_2629; lean_object* x_2630; lean_object* x_2631; lean_object* x_2632; lean_object* x_2633; lean_object* x_2634; lean_object* x_2635; lean_object* x_2636; lean_object* x_2637; lean_object* x_2638; uint8_t x_2639; lean_object* x_2640; lean_object* x_2641; lean_object* x_2642; 
x_2593 = lean_ctor_get(x_2466, 0);
lean_inc(x_2593);
lean_dec(x_2466);
x_2594 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2467);
lean_dec(x_5);
x_2595 = lean_ctor_get(x_2594, 0);
lean_inc(x_2595);
x_2596 = lean_ctor_get(x_2594, 1);
lean_inc(x_2596);
if (lean_is_exclusive(x_2594)) {
 lean_ctor_release(x_2594, 0);
 lean_ctor_release(x_2594, 1);
 x_2597 = x_2594;
} else {
 lean_dec_ref(x_2594);
 x_2597 = lean_box(0);
}
x_2598 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2595);
x_2599 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2599, 0, x_2595);
lean_ctor_set(x_2599, 1, x_2598);
x_2600 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2601 = lean_array_push(x_2600, x_2457);
x_2602 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2603 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2603, 0, x_2602);
lean_ctor_set(x_2603, 1, x_2601);
x_2604 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2605 = lean_array_push(x_2604, x_2603);
x_2606 = l_Lean_nullKind___closed__2;
x_2607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2607, 0, x_2606);
lean_ctor_set(x_2607, 1, x_2605);
x_2608 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2595);
x_2609 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2609, 0, x_2595);
lean_ctor_set(x_2609, 1, x_2608);
x_2610 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2595);
x_2611 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2611, 0, x_2595);
lean_ctor_set(x_2611, 1, x_2610);
lean_inc(x_14);
x_2612 = lean_array_push(x_2604, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2613 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2613 = lean_box(0);
}
if (lean_is_scalar(x_2613)) {
 x_2614 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2614 = x_2613;
}
lean_ctor_set(x_2614, 0, x_2606);
lean_ctor_set(x_2614, 1, x_2612);
x_2615 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2616 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2616, 0, x_2595);
lean_ctor_set(x_2616, 1, x_2615);
x_2617 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2618 = lean_array_push(x_2617, x_2611);
x_2619 = lean_array_push(x_2618, x_2614);
x_2620 = lean_array_push(x_2619, x_2616);
x_2621 = lean_array_push(x_2620, x_2593);
x_2622 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2623 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2623, 0, x_2622);
lean_ctor_set(x_2623, 1, x_2621);
x_2624 = lean_array_push(x_2604, x_2623);
x_2625 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2625, 0, x_2606);
lean_ctor_set(x_2625, 1, x_2624);
x_2626 = lean_array_push(x_2604, x_2625);
x_2627 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2628 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2628, 0, x_2627);
lean_ctor_set(x_2628, 1, x_2626);
x_2629 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2630 = lean_array_push(x_2629, x_2599);
x_2631 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2632 = lean_array_push(x_2630, x_2631);
x_2633 = lean_array_push(x_2632, x_2607);
x_2634 = lean_array_push(x_2633, x_2631);
x_2635 = lean_array_push(x_2634, x_2609);
x_2636 = lean_array_push(x_2635, x_2628);
x_2637 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2638 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2638, 0, x_2637);
lean_ctor_set(x_2638, 1, x_2636);
x_2639 = 1;
x_2640 = lean_box(x_2639);
x_2641 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2641, 0, x_2638);
lean_ctor_set(x_2641, 1, x_2640);
lean_ctor_set(x_2465, 1, x_2641);
if (lean_is_scalar(x_2597)) {
 x_2642 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2642 = x_2597;
}
lean_ctor_set(x_2642, 0, x_2465);
lean_ctor_set(x_2642, 1, x_2596);
return x_2642;
}
}
else
{
lean_object* x_2643; lean_object* x_2644; lean_object* x_2645; lean_object* x_2646; lean_object* x_2647; lean_object* x_2648; lean_object* x_2649; lean_object* x_2650; lean_object* x_2651; lean_object* x_2652; lean_object* x_2653; lean_object* x_2654; lean_object* x_2655; lean_object* x_2656; lean_object* x_2657; lean_object* x_2658; lean_object* x_2659; lean_object* x_2660; lean_object* x_2661; lean_object* x_2662; lean_object* x_2663; lean_object* x_2664; lean_object* x_2665; lean_object* x_2666; lean_object* x_2667; lean_object* x_2668; lean_object* x_2669; lean_object* x_2670; lean_object* x_2671; lean_object* x_2672; lean_object* x_2673; lean_object* x_2674; lean_object* x_2675; lean_object* x_2676; lean_object* x_2677; lean_object* x_2678; lean_object* x_2679; lean_object* x_2680; lean_object* x_2681; lean_object* x_2682; lean_object* x_2683; lean_object* x_2684; lean_object* x_2685; lean_object* x_2686; lean_object* x_2687; lean_object* x_2688; lean_object* x_2689; lean_object* x_2690; uint8_t x_2691; lean_object* x_2692; lean_object* x_2693; lean_object* x_2694; lean_object* x_2695; 
x_2643 = lean_ctor_get(x_2465, 0);
lean_inc(x_2643);
lean_dec(x_2465);
x_2644 = lean_ctor_get(x_2466, 0);
lean_inc(x_2644);
if (lean_is_exclusive(x_2466)) {
 lean_ctor_release(x_2466, 0);
 lean_ctor_release(x_2466, 1);
 x_2645 = x_2466;
} else {
 lean_dec_ref(x_2466);
 x_2645 = lean_box(0);
}
x_2646 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2467);
lean_dec(x_5);
x_2647 = lean_ctor_get(x_2646, 0);
lean_inc(x_2647);
x_2648 = lean_ctor_get(x_2646, 1);
lean_inc(x_2648);
if (lean_is_exclusive(x_2646)) {
 lean_ctor_release(x_2646, 0);
 lean_ctor_release(x_2646, 1);
 x_2649 = x_2646;
} else {
 lean_dec_ref(x_2646);
 x_2649 = lean_box(0);
}
x_2650 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2647);
x_2651 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2651, 0, x_2647);
lean_ctor_set(x_2651, 1, x_2650);
x_2652 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2653 = lean_array_push(x_2652, x_2457);
x_2654 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2655 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2655, 0, x_2654);
lean_ctor_set(x_2655, 1, x_2653);
x_2656 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2657 = lean_array_push(x_2656, x_2655);
x_2658 = l_Lean_nullKind___closed__2;
x_2659 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2659, 0, x_2658);
lean_ctor_set(x_2659, 1, x_2657);
x_2660 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2647);
x_2661 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2661, 0, x_2647);
lean_ctor_set(x_2661, 1, x_2660);
x_2662 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2647);
x_2663 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2663, 0, x_2647);
lean_ctor_set(x_2663, 1, x_2662);
lean_inc(x_14);
x_2664 = lean_array_push(x_2656, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2665 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2665 = lean_box(0);
}
if (lean_is_scalar(x_2665)) {
 x_2666 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2666 = x_2665;
}
lean_ctor_set(x_2666, 0, x_2658);
lean_ctor_set(x_2666, 1, x_2664);
x_2667 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2668 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2668, 0, x_2647);
lean_ctor_set(x_2668, 1, x_2667);
x_2669 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2670 = lean_array_push(x_2669, x_2663);
x_2671 = lean_array_push(x_2670, x_2666);
x_2672 = lean_array_push(x_2671, x_2668);
x_2673 = lean_array_push(x_2672, x_2644);
x_2674 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2675, 0, x_2674);
lean_ctor_set(x_2675, 1, x_2673);
x_2676 = lean_array_push(x_2656, x_2675);
x_2677 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2677, 0, x_2658);
lean_ctor_set(x_2677, 1, x_2676);
x_2678 = lean_array_push(x_2656, x_2677);
x_2679 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2680 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2680, 0, x_2679);
lean_ctor_set(x_2680, 1, x_2678);
x_2681 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2682 = lean_array_push(x_2681, x_2651);
x_2683 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2684 = lean_array_push(x_2682, x_2683);
x_2685 = lean_array_push(x_2684, x_2659);
x_2686 = lean_array_push(x_2685, x_2683);
x_2687 = lean_array_push(x_2686, x_2661);
x_2688 = lean_array_push(x_2687, x_2680);
x_2689 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2690 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2690, 0, x_2689);
lean_ctor_set(x_2690, 1, x_2688);
x_2691 = 1;
x_2692 = lean_box(x_2691);
if (lean_is_scalar(x_2645)) {
 x_2693 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2693 = x_2645;
}
lean_ctor_set(x_2693, 0, x_2690);
lean_ctor_set(x_2693, 1, x_2692);
x_2694 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2694, 0, x_2643);
lean_ctor_set(x_2694, 1, x_2693);
if (lean_is_scalar(x_2649)) {
 x_2695 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2695 = x_2649;
}
lean_ctor_set(x_2695, 0, x_2694);
lean_ctor_set(x_2695, 1, x_2648);
return x_2695;
}
}
}
else
{
lean_object* x_2696; lean_object* x_2697; lean_object* x_2698; lean_object* x_2699; lean_object* x_2700; lean_object* x_2701; lean_object* x_2702; lean_object* x_2703; lean_object* x_2704; lean_object* x_2705; lean_object* x_2706; lean_object* x_2707; uint8_t x_2708; 
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_223);
lean_inc(x_5);
x_2696 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2697 = lean_ctor_get(x_2696, 0);
lean_inc(x_2697);
x_2698 = lean_ctor_get(x_2696, 1);
lean_inc(x_2698);
lean_dec(x_2696);
x_2699 = lean_unsigned_to_nat(1u);
x_2700 = lean_nat_add(x_3, x_2699);
lean_dec(x_3);
x_2701 = l_Lean_mkHole(x_14);
lean_inc(x_2697);
x_2702 = l_Lean_Elab_Term_mkExplicitBinder(x_2697, x_2701);
x_2703 = lean_array_push(x_4, x_2702);
lean_inc(x_5);
x_2704 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2700, x_2703, x_5, x_2698);
x_2705 = lean_ctor_get(x_2704, 0);
lean_inc(x_2705);
x_2706 = lean_ctor_get(x_2705, 1);
lean_inc(x_2706);
x_2707 = lean_ctor_get(x_2704, 1);
lean_inc(x_2707);
lean_dec(x_2704);
x_2708 = !lean_is_exclusive(x_2705);
if (x_2708 == 0)
{
lean_object* x_2709; uint8_t x_2710; 
x_2709 = lean_ctor_get(x_2705, 1);
lean_dec(x_2709);
x_2710 = !lean_is_exclusive(x_2706);
if (x_2710 == 0)
{
lean_object* x_2711; lean_object* x_2712; lean_object* x_2713; uint8_t x_2714; 
x_2711 = lean_ctor_get(x_2706, 0);
x_2712 = lean_ctor_get(x_2706, 1);
lean_dec(x_2712);
x_2713 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2707);
lean_dec(x_5);
x_2714 = !lean_is_exclusive(x_2713);
if (x_2714 == 0)
{
lean_object* x_2715; lean_object* x_2716; lean_object* x_2717; lean_object* x_2718; lean_object* x_2719; lean_object* x_2720; lean_object* x_2721; lean_object* x_2722; lean_object* x_2723; lean_object* x_2724; lean_object* x_2725; lean_object* x_2726; lean_object* x_2727; lean_object* x_2728; lean_object* x_2729; lean_object* x_2730; uint8_t x_2731; 
x_2715 = lean_ctor_get(x_2713, 0);
x_2716 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2715);
x_2717 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2717, 0, x_2715);
lean_ctor_set(x_2717, 1, x_2716);
x_2718 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2719 = lean_array_push(x_2718, x_2697);
x_2720 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2721 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2721, 0, x_2720);
lean_ctor_set(x_2721, 1, x_2719);
x_2722 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2723 = lean_array_push(x_2722, x_2721);
x_2724 = l_Lean_nullKind___closed__2;
x_2725 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2725, 0, x_2724);
lean_ctor_set(x_2725, 1, x_2723);
x_2726 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2715);
x_2727 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2727, 0, x_2715);
lean_ctor_set(x_2727, 1, x_2726);
x_2728 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2715);
x_2729 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2729, 0, x_2715);
lean_ctor_set(x_2729, 1, x_2728);
lean_inc(x_14);
x_2730 = lean_array_push(x_2722, x_14);
x_2731 = !lean_is_exclusive(x_14);
if (x_2731 == 0)
{
lean_object* x_2732; lean_object* x_2733; lean_object* x_2734; lean_object* x_2735; lean_object* x_2736; lean_object* x_2737; lean_object* x_2738; lean_object* x_2739; lean_object* x_2740; lean_object* x_2741; lean_object* x_2742; lean_object* x_2743; lean_object* x_2744; lean_object* x_2745; lean_object* x_2746; lean_object* x_2747; lean_object* x_2748; lean_object* x_2749; lean_object* x_2750; lean_object* x_2751; lean_object* x_2752; lean_object* x_2753; lean_object* x_2754; lean_object* x_2755; lean_object* x_2756; lean_object* x_2757; uint8_t x_2758; lean_object* x_2759; 
x_2732 = lean_ctor_get(x_14, 1);
lean_dec(x_2732);
x_2733 = lean_ctor_get(x_14, 0);
lean_dec(x_2733);
lean_ctor_set(x_14, 1, x_2730);
lean_ctor_set(x_14, 0, x_2724);
x_2734 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2735 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2735, 0, x_2715);
lean_ctor_set(x_2735, 1, x_2734);
x_2736 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2737 = lean_array_push(x_2736, x_2729);
x_2738 = lean_array_push(x_2737, x_14);
x_2739 = lean_array_push(x_2738, x_2735);
x_2740 = lean_array_push(x_2739, x_2711);
x_2741 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2742 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2742, 0, x_2741);
lean_ctor_set(x_2742, 1, x_2740);
x_2743 = lean_array_push(x_2722, x_2742);
x_2744 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2744, 0, x_2724);
lean_ctor_set(x_2744, 1, x_2743);
x_2745 = lean_array_push(x_2722, x_2744);
x_2746 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2747 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2747, 0, x_2746);
lean_ctor_set(x_2747, 1, x_2745);
x_2748 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2749 = lean_array_push(x_2748, x_2717);
x_2750 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2751 = lean_array_push(x_2749, x_2750);
x_2752 = lean_array_push(x_2751, x_2725);
x_2753 = lean_array_push(x_2752, x_2750);
x_2754 = lean_array_push(x_2753, x_2727);
x_2755 = lean_array_push(x_2754, x_2747);
x_2756 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2757 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2757, 0, x_2756);
lean_ctor_set(x_2757, 1, x_2755);
x_2758 = 1;
x_2759 = lean_box(x_2758);
lean_ctor_set(x_2706, 1, x_2759);
lean_ctor_set(x_2706, 0, x_2757);
lean_ctor_set(x_2713, 0, x_2705);
return x_2713;
}
else
{
lean_object* x_2760; lean_object* x_2761; lean_object* x_2762; lean_object* x_2763; lean_object* x_2764; lean_object* x_2765; lean_object* x_2766; lean_object* x_2767; lean_object* x_2768; lean_object* x_2769; lean_object* x_2770; lean_object* x_2771; lean_object* x_2772; lean_object* x_2773; lean_object* x_2774; lean_object* x_2775; lean_object* x_2776; lean_object* x_2777; lean_object* x_2778; lean_object* x_2779; lean_object* x_2780; lean_object* x_2781; lean_object* x_2782; lean_object* x_2783; lean_object* x_2784; uint8_t x_2785; lean_object* x_2786; 
lean_dec(x_14);
x_2760 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2760, 0, x_2724);
lean_ctor_set(x_2760, 1, x_2730);
x_2761 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2762 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2762, 0, x_2715);
lean_ctor_set(x_2762, 1, x_2761);
x_2763 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2764 = lean_array_push(x_2763, x_2729);
x_2765 = lean_array_push(x_2764, x_2760);
x_2766 = lean_array_push(x_2765, x_2762);
x_2767 = lean_array_push(x_2766, x_2711);
x_2768 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2769 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2769, 0, x_2768);
lean_ctor_set(x_2769, 1, x_2767);
x_2770 = lean_array_push(x_2722, x_2769);
x_2771 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2771, 0, x_2724);
lean_ctor_set(x_2771, 1, x_2770);
x_2772 = lean_array_push(x_2722, x_2771);
x_2773 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2774 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2774, 0, x_2773);
lean_ctor_set(x_2774, 1, x_2772);
x_2775 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2776 = lean_array_push(x_2775, x_2717);
x_2777 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2778 = lean_array_push(x_2776, x_2777);
x_2779 = lean_array_push(x_2778, x_2725);
x_2780 = lean_array_push(x_2779, x_2777);
x_2781 = lean_array_push(x_2780, x_2727);
x_2782 = lean_array_push(x_2781, x_2774);
x_2783 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2784 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2784, 0, x_2783);
lean_ctor_set(x_2784, 1, x_2782);
x_2785 = 1;
x_2786 = lean_box(x_2785);
lean_ctor_set(x_2706, 1, x_2786);
lean_ctor_set(x_2706, 0, x_2784);
lean_ctor_set(x_2713, 0, x_2705);
return x_2713;
}
}
else
{
lean_object* x_2787; lean_object* x_2788; lean_object* x_2789; lean_object* x_2790; lean_object* x_2791; lean_object* x_2792; lean_object* x_2793; lean_object* x_2794; lean_object* x_2795; lean_object* x_2796; lean_object* x_2797; lean_object* x_2798; lean_object* x_2799; lean_object* x_2800; lean_object* x_2801; lean_object* x_2802; lean_object* x_2803; lean_object* x_2804; lean_object* x_2805; lean_object* x_2806; lean_object* x_2807; lean_object* x_2808; lean_object* x_2809; lean_object* x_2810; lean_object* x_2811; lean_object* x_2812; lean_object* x_2813; lean_object* x_2814; lean_object* x_2815; lean_object* x_2816; lean_object* x_2817; lean_object* x_2818; lean_object* x_2819; lean_object* x_2820; lean_object* x_2821; lean_object* x_2822; lean_object* x_2823; lean_object* x_2824; lean_object* x_2825; lean_object* x_2826; lean_object* x_2827; lean_object* x_2828; lean_object* x_2829; uint8_t x_2830; lean_object* x_2831; lean_object* x_2832; 
x_2787 = lean_ctor_get(x_2713, 0);
x_2788 = lean_ctor_get(x_2713, 1);
lean_inc(x_2788);
lean_inc(x_2787);
lean_dec(x_2713);
x_2789 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2787);
x_2790 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2790, 0, x_2787);
lean_ctor_set(x_2790, 1, x_2789);
x_2791 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2792 = lean_array_push(x_2791, x_2697);
x_2793 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2794 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2794, 0, x_2793);
lean_ctor_set(x_2794, 1, x_2792);
x_2795 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2796 = lean_array_push(x_2795, x_2794);
x_2797 = l_Lean_nullKind___closed__2;
x_2798 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2798, 0, x_2797);
lean_ctor_set(x_2798, 1, x_2796);
x_2799 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2787);
x_2800 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2800, 0, x_2787);
lean_ctor_set(x_2800, 1, x_2799);
x_2801 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2787);
x_2802 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2802, 0, x_2787);
lean_ctor_set(x_2802, 1, x_2801);
lean_inc(x_14);
x_2803 = lean_array_push(x_2795, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2804 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2804 = lean_box(0);
}
if (lean_is_scalar(x_2804)) {
 x_2805 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2805 = x_2804;
}
lean_ctor_set(x_2805, 0, x_2797);
lean_ctor_set(x_2805, 1, x_2803);
x_2806 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2807 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2807, 0, x_2787);
lean_ctor_set(x_2807, 1, x_2806);
x_2808 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2809 = lean_array_push(x_2808, x_2802);
x_2810 = lean_array_push(x_2809, x_2805);
x_2811 = lean_array_push(x_2810, x_2807);
x_2812 = lean_array_push(x_2811, x_2711);
x_2813 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2814 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2814, 0, x_2813);
lean_ctor_set(x_2814, 1, x_2812);
x_2815 = lean_array_push(x_2795, x_2814);
x_2816 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2816, 0, x_2797);
lean_ctor_set(x_2816, 1, x_2815);
x_2817 = lean_array_push(x_2795, x_2816);
x_2818 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2819 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2819, 0, x_2818);
lean_ctor_set(x_2819, 1, x_2817);
x_2820 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2821 = lean_array_push(x_2820, x_2790);
x_2822 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2823 = lean_array_push(x_2821, x_2822);
x_2824 = lean_array_push(x_2823, x_2798);
x_2825 = lean_array_push(x_2824, x_2822);
x_2826 = lean_array_push(x_2825, x_2800);
x_2827 = lean_array_push(x_2826, x_2819);
x_2828 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2829 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2829, 0, x_2828);
lean_ctor_set(x_2829, 1, x_2827);
x_2830 = 1;
x_2831 = lean_box(x_2830);
lean_ctor_set(x_2706, 1, x_2831);
lean_ctor_set(x_2706, 0, x_2829);
x_2832 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2832, 0, x_2705);
lean_ctor_set(x_2832, 1, x_2788);
return x_2832;
}
}
else
{
lean_object* x_2833; lean_object* x_2834; lean_object* x_2835; lean_object* x_2836; lean_object* x_2837; lean_object* x_2838; lean_object* x_2839; lean_object* x_2840; lean_object* x_2841; lean_object* x_2842; lean_object* x_2843; lean_object* x_2844; lean_object* x_2845; lean_object* x_2846; lean_object* x_2847; lean_object* x_2848; lean_object* x_2849; lean_object* x_2850; lean_object* x_2851; lean_object* x_2852; lean_object* x_2853; lean_object* x_2854; lean_object* x_2855; lean_object* x_2856; lean_object* x_2857; lean_object* x_2858; lean_object* x_2859; lean_object* x_2860; lean_object* x_2861; lean_object* x_2862; lean_object* x_2863; lean_object* x_2864; lean_object* x_2865; lean_object* x_2866; lean_object* x_2867; lean_object* x_2868; lean_object* x_2869; lean_object* x_2870; lean_object* x_2871; lean_object* x_2872; lean_object* x_2873; lean_object* x_2874; lean_object* x_2875; lean_object* x_2876; lean_object* x_2877; lean_object* x_2878; uint8_t x_2879; lean_object* x_2880; lean_object* x_2881; lean_object* x_2882; 
x_2833 = lean_ctor_get(x_2706, 0);
lean_inc(x_2833);
lean_dec(x_2706);
x_2834 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2707);
lean_dec(x_5);
x_2835 = lean_ctor_get(x_2834, 0);
lean_inc(x_2835);
x_2836 = lean_ctor_get(x_2834, 1);
lean_inc(x_2836);
if (lean_is_exclusive(x_2834)) {
 lean_ctor_release(x_2834, 0);
 lean_ctor_release(x_2834, 1);
 x_2837 = x_2834;
} else {
 lean_dec_ref(x_2834);
 x_2837 = lean_box(0);
}
x_2838 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2835);
x_2839 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2839, 0, x_2835);
lean_ctor_set(x_2839, 1, x_2838);
x_2840 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2841 = lean_array_push(x_2840, x_2697);
x_2842 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2843 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2843, 0, x_2842);
lean_ctor_set(x_2843, 1, x_2841);
x_2844 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2845 = lean_array_push(x_2844, x_2843);
x_2846 = l_Lean_nullKind___closed__2;
x_2847 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2847, 0, x_2846);
lean_ctor_set(x_2847, 1, x_2845);
x_2848 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2835);
x_2849 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2849, 0, x_2835);
lean_ctor_set(x_2849, 1, x_2848);
x_2850 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2835);
x_2851 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2851, 0, x_2835);
lean_ctor_set(x_2851, 1, x_2850);
lean_inc(x_14);
x_2852 = lean_array_push(x_2844, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2853 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2853 = lean_box(0);
}
if (lean_is_scalar(x_2853)) {
 x_2854 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2854 = x_2853;
}
lean_ctor_set(x_2854, 0, x_2846);
lean_ctor_set(x_2854, 1, x_2852);
x_2855 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2856 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2856, 0, x_2835);
lean_ctor_set(x_2856, 1, x_2855);
x_2857 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2858 = lean_array_push(x_2857, x_2851);
x_2859 = lean_array_push(x_2858, x_2854);
x_2860 = lean_array_push(x_2859, x_2856);
x_2861 = lean_array_push(x_2860, x_2833);
x_2862 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2863 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2863, 0, x_2862);
lean_ctor_set(x_2863, 1, x_2861);
x_2864 = lean_array_push(x_2844, x_2863);
x_2865 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2865, 0, x_2846);
lean_ctor_set(x_2865, 1, x_2864);
x_2866 = lean_array_push(x_2844, x_2865);
x_2867 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2868 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2868, 0, x_2867);
lean_ctor_set(x_2868, 1, x_2866);
x_2869 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2870 = lean_array_push(x_2869, x_2839);
x_2871 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2872 = lean_array_push(x_2870, x_2871);
x_2873 = lean_array_push(x_2872, x_2847);
x_2874 = lean_array_push(x_2873, x_2871);
x_2875 = lean_array_push(x_2874, x_2849);
x_2876 = lean_array_push(x_2875, x_2868);
x_2877 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2878 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2878, 0, x_2877);
lean_ctor_set(x_2878, 1, x_2876);
x_2879 = 1;
x_2880 = lean_box(x_2879);
x_2881 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2881, 0, x_2878);
lean_ctor_set(x_2881, 1, x_2880);
lean_ctor_set(x_2705, 1, x_2881);
if (lean_is_scalar(x_2837)) {
 x_2882 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2882 = x_2837;
}
lean_ctor_set(x_2882, 0, x_2705);
lean_ctor_set(x_2882, 1, x_2836);
return x_2882;
}
}
else
{
lean_object* x_2883; lean_object* x_2884; lean_object* x_2885; lean_object* x_2886; lean_object* x_2887; lean_object* x_2888; lean_object* x_2889; lean_object* x_2890; lean_object* x_2891; lean_object* x_2892; lean_object* x_2893; lean_object* x_2894; lean_object* x_2895; lean_object* x_2896; lean_object* x_2897; lean_object* x_2898; lean_object* x_2899; lean_object* x_2900; lean_object* x_2901; lean_object* x_2902; lean_object* x_2903; lean_object* x_2904; lean_object* x_2905; lean_object* x_2906; lean_object* x_2907; lean_object* x_2908; lean_object* x_2909; lean_object* x_2910; lean_object* x_2911; lean_object* x_2912; lean_object* x_2913; lean_object* x_2914; lean_object* x_2915; lean_object* x_2916; lean_object* x_2917; lean_object* x_2918; lean_object* x_2919; lean_object* x_2920; lean_object* x_2921; lean_object* x_2922; lean_object* x_2923; lean_object* x_2924; lean_object* x_2925; lean_object* x_2926; lean_object* x_2927; lean_object* x_2928; lean_object* x_2929; lean_object* x_2930; uint8_t x_2931; lean_object* x_2932; lean_object* x_2933; lean_object* x_2934; lean_object* x_2935; 
x_2883 = lean_ctor_get(x_2705, 0);
lean_inc(x_2883);
lean_dec(x_2705);
x_2884 = lean_ctor_get(x_2706, 0);
lean_inc(x_2884);
if (lean_is_exclusive(x_2706)) {
 lean_ctor_release(x_2706, 0);
 lean_ctor_release(x_2706, 1);
 x_2885 = x_2706;
} else {
 lean_dec_ref(x_2706);
 x_2885 = lean_box(0);
}
x_2886 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2707);
lean_dec(x_5);
x_2887 = lean_ctor_get(x_2886, 0);
lean_inc(x_2887);
x_2888 = lean_ctor_get(x_2886, 1);
lean_inc(x_2888);
if (lean_is_exclusive(x_2886)) {
 lean_ctor_release(x_2886, 0);
 lean_ctor_release(x_2886, 1);
 x_2889 = x_2886;
} else {
 lean_dec_ref(x_2886);
 x_2889 = lean_box(0);
}
x_2890 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2887);
x_2891 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2891, 0, x_2887);
lean_ctor_set(x_2891, 1, x_2890);
x_2892 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2893 = lean_array_push(x_2892, x_2697);
x_2894 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2895 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2895, 0, x_2894);
lean_ctor_set(x_2895, 1, x_2893);
x_2896 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2897 = lean_array_push(x_2896, x_2895);
x_2898 = l_Lean_nullKind___closed__2;
x_2899 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2899, 0, x_2898);
lean_ctor_set(x_2899, 1, x_2897);
x_2900 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2887);
x_2901 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2901, 0, x_2887);
lean_ctor_set(x_2901, 1, x_2900);
x_2902 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2887);
x_2903 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2903, 0, x_2887);
lean_ctor_set(x_2903, 1, x_2902);
lean_inc(x_14);
x_2904 = lean_array_push(x_2896, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_2905 = x_14;
} else {
 lean_dec_ref(x_14);
 x_2905 = lean_box(0);
}
if (lean_is_scalar(x_2905)) {
 x_2906 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2906 = x_2905;
}
lean_ctor_set(x_2906, 0, x_2898);
lean_ctor_set(x_2906, 1, x_2904);
x_2907 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2908 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2908, 0, x_2887);
lean_ctor_set(x_2908, 1, x_2907);
x_2909 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2910 = lean_array_push(x_2909, x_2903);
x_2911 = lean_array_push(x_2910, x_2906);
x_2912 = lean_array_push(x_2911, x_2908);
x_2913 = lean_array_push(x_2912, x_2884);
x_2914 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2915 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2915, 0, x_2914);
lean_ctor_set(x_2915, 1, x_2913);
x_2916 = lean_array_push(x_2896, x_2915);
x_2917 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2917, 0, x_2898);
lean_ctor_set(x_2917, 1, x_2916);
x_2918 = lean_array_push(x_2896, x_2917);
x_2919 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2920 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2920, 0, x_2919);
lean_ctor_set(x_2920, 1, x_2918);
x_2921 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2922 = lean_array_push(x_2921, x_2891);
x_2923 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2924 = lean_array_push(x_2922, x_2923);
x_2925 = lean_array_push(x_2924, x_2899);
x_2926 = lean_array_push(x_2925, x_2923);
x_2927 = lean_array_push(x_2926, x_2901);
x_2928 = lean_array_push(x_2927, x_2920);
x_2929 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2930 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2930, 0, x_2929);
lean_ctor_set(x_2930, 1, x_2928);
x_2931 = 1;
x_2932 = lean_box(x_2931);
if (lean_is_scalar(x_2885)) {
 x_2933 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2933 = x_2885;
}
lean_ctor_set(x_2933, 0, x_2930);
lean_ctor_set(x_2933, 1, x_2932);
x_2934 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2934, 0, x_2883);
lean_ctor_set(x_2934, 1, x_2933);
if (lean_is_scalar(x_2889)) {
 x_2935 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2935 = x_2889;
}
lean_ctor_set(x_2935, 0, x_2934);
lean_ctor_set(x_2935, 1, x_2888);
return x_2935;
}
}
}
else
{
lean_object* x_2936; lean_object* x_2937; lean_object* x_2938; lean_object* x_2939; lean_object* x_2940; lean_object* x_2941; lean_object* x_2942; lean_object* x_2943; lean_object* x_2944; lean_object* x_2945; lean_object* x_2946; lean_object* x_2947; uint8_t x_2948; 
lean_dec(x_224);
lean_dec(x_223);
lean_inc(x_5);
x_2936 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_2937 = lean_ctor_get(x_2936, 0);
lean_inc(x_2937);
x_2938 = lean_ctor_get(x_2936, 1);
lean_inc(x_2938);
lean_dec(x_2936);
x_2939 = lean_unsigned_to_nat(1u);
x_2940 = lean_nat_add(x_3, x_2939);
lean_dec(x_3);
x_2941 = l_Lean_mkHole(x_14);
lean_inc(x_2937);
x_2942 = l_Lean_Elab_Term_mkExplicitBinder(x_2937, x_2941);
x_2943 = lean_array_push(x_4, x_2942);
lean_inc(x_5);
x_2944 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2940, x_2943, x_5, x_2938);
x_2945 = lean_ctor_get(x_2944, 0);
lean_inc(x_2945);
x_2946 = lean_ctor_get(x_2945, 1);
lean_inc(x_2946);
x_2947 = lean_ctor_get(x_2944, 1);
lean_inc(x_2947);
lean_dec(x_2944);
x_2948 = !lean_is_exclusive(x_2945);
if (x_2948 == 0)
{
lean_object* x_2949; uint8_t x_2950; 
x_2949 = lean_ctor_get(x_2945, 1);
lean_dec(x_2949);
x_2950 = !lean_is_exclusive(x_2946);
if (x_2950 == 0)
{
lean_object* x_2951; lean_object* x_2952; lean_object* x_2953; uint8_t x_2954; 
x_2951 = lean_ctor_get(x_2946, 0);
x_2952 = lean_ctor_get(x_2946, 1);
lean_dec(x_2952);
x_2953 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2947);
lean_dec(x_5);
x_2954 = !lean_is_exclusive(x_2953);
if (x_2954 == 0)
{
lean_object* x_2955; lean_object* x_2956; lean_object* x_2957; lean_object* x_2958; lean_object* x_2959; lean_object* x_2960; lean_object* x_2961; lean_object* x_2962; lean_object* x_2963; lean_object* x_2964; lean_object* x_2965; lean_object* x_2966; lean_object* x_2967; lean_object* x_2968; lean_object* x_2969; lean_object* x_2970; uint8_t x_2971; 
x_2955 = lean_ctor_get(x_2953, 0);
x_2956 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_2955);
x_2957 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2957, 0, x_2955);
lean_ctor_set(x_2957, 1, x_2956);
x_2958 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_2959 = lean_array_push(x_2958, x_2937);
x_2960 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_2961 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2961, 0, x_2960);
lean_ctor_set(x_2961, 1, x_2959);
x_2962 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_2963 = lean_array_push(x_2962, x_2961);
x_2964 = l_Lean_nullKind___closed__2;
x_2965 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2965, 0, x_2964);
lean_ctor_set(x_2965, 1, x_2963);
x_2966 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_2955);
x_2967 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2967, 0, x_2955);
lean_ctor_set(x_2967, 1, x_2966);
x_2968 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_2955);
x_2969 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2969, 0, x_2955);
lean_ctor_set(x_2969, 1, x_2968);
lean_inc(x_14);
x_2970 = lean_array_push(x_2962, x_14);
x_2971 = !lean_is_exclusive(x_14);
if (x_2971 == 0)
{
lean_object* x_2972; lean_object* x_2973; lean_object* x_2974; lean_object* x_2975; lean_object* x_2976; lean_object* x_2977; lean_object* x_2978; lean_object* x_2979; lean_object* x_2980; lean_object* x_2981; lean_object* x_2982; lean_object* x_2983; lean_object* x_2984; lean_object* x_2985; lean_object* x_2986; lean_object* x_2987; lean_object* x_2988; lean_object* x_2989; lean_object* x_2990; lean_object* x_2991; lean_object* x_2992; lean_object* x_2993; lean_object* x_2994; lean_object* x_2995; lean_object* x_2996; lean_object* x_2997; uint8_t x_2998; lean_object* x_2999; 
x_2972 = lean_ctor_get(x_14, 1);
lean_dec(x_2972);
x_2973 = lean_ctor_get(x_14, 0);
lean_dec(x_2973);
lean_ctor_set(x_14, 1, x_2970);
lean_ctor_set(x_14, 0, x_2964);
x_2974 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_2975 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2975, 0, x_2955);
lean_ctor_set(x_2975, 1, x_2974);
x_2976 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_2977 = lean_array_push(x_2976, x_2969);
x_2978 = lean_array_push(x_2977, x_14);
x_2979 = lean_array_push(x_2978, x_2975);
x_2980 = lean_array_push(x_2979, x_2951);
x_2981 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_2982 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2982, 0, x_2981);
lean_ctor_set(x_2982, 1, x_2980);
x_2983 = lean_array_push(x_2962, x_2982);
x_2984 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2984, 0, x_2964);
lean_ctor_set(x_2984, 1, x_2983);
x_2985 = lean_array_push(x_2962, x_2984);
x_2986 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_2987 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2987, 0, x_2986);
lean_ctor_set(x_2987, 1, x_2985);
x_2988 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_2989 = lean_array_push(x_2988, x_2957);
x_2990 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_2991 = lean_array_push(x_2989, x_2990);
x_2992 = lean_array_push(x_2991, x_2965);
x_2993 = lean_array_push(x_2992, x_2990);
x_2994 = lean_array_push(x_2993, x_2967);
x_2995 = lean_array_push(x_2994, x_2987);
x_2996 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_2997 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2997, 0, x_2996);
lean_ctor_set(x_2997, 1, x_2995);
x_2998 = 1;
x_2999 = lean_box(x_2998);
lean_ctor_set(x_2946, 1, x_2999);
lean_ctor_set(x_2946, 0, x_2997);
lean_ctor_set(x_2953, 0, x_2945);
return x_2953;
}
else
{
lean_object* x_3000; lean_object* x_3001; lean_object* x_3002; lean_object* x_3003; lean_object* x_3004; lean_object* x_3005; lean_object* x_3006; lean_object* x_3007; lean_object* x_3008; lean_object* x_3009; lean_object* x_3010; lean_object* x_3011; lean_object* x_3012; lean_object* x_3013; lean_object* x_3014; lean_object* x_3015; lean_object* x_3016; lean_object* x_3017; lean_object* x_3018; lean_object* x_3019; lean_object* x_3020; lean_object* x_3021; lean_object* x_3022; lean_object* x_3023; lean_object* x_3024; uint8_t x_3025; lean_object* x_3026; 
lean_dec(x_14);
x_3000 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3000, 0, x_2964);
lean_ctor_set(x_3000, 1, x_2970);
x_3001 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3002 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3002, 0, x_2955);
lean_ctor_set(x_3002, 1, x_3001);
x_3003 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3004 = lean_array_push(x_3003, x_2969);
x_3005 = lean_array_push(x_3004, x_3000);
x_3006 = lean_array_push(x_3005, x_3002);
x_3007 = lean_array_push(x_3006, x_2951);
x_3008 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3009 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3009, 0, x_3008);
lean_ctor_set(x_3009, 1, x_3007);
x_3010 = lean_array_push(x_2962, x_3009);
x_3011 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3011, 0, x_2964);
lean_ctor_set(x_3011, 1, x_3010);
x_3012 = lean_array_push(x_2962, x_3011);
x_3013 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3014 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3014, 0, x_3013);
lean_ctor_set(x_3014, 1, x_3012);
x_3015 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3016 = lean_array_push(x_3015, x_2957);
x_3017 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3018 = lean_array_push(x_3016, x_3017);
x_3019 = lean_array_push(x_3018, x_2965);
x_3020 = lean_array_push(x_3019, x_3017);
x_3021 = lean_array_push(x_3020, x_2967);
x_3022 = lean_array_push(x_3021, x_3014);
x_3023 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3024 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3024, 0, x_3023);
lean_ctor_set(x_3024, 1, x_3022);
x_3025 = 1;
x_3026 = lean_box(x_3025);
lean_ctor_set(x_2946, 1, x_3026);
lean_ctor_set(x_2946, 0, x_3024);
lean_ctor_set(x_2953, 0, x_2945);
return x_2953;
}
}
else
{
lean_object* x_3027; lean_object* x_3028; lean_object* x_3029; lean_object* x_3030; lean_object* x_3031; lean_object* x_3032; lean_object* x_3033; lean_object* x_3034; lean_object* x_3035; lean_object* x_3036; lean_object* x_3037; lean_object* x_3038; lean_object* x_3039; lean_object* x_3040; lean_object* x_3041; lean_object* x_3042; lean_object* x_3043; lean_object* x_3044; lean_object* x_3045; lean_object* x_3046; lean_object* x_3047; lean_object* x_3048; lean_object* x_3049; lean_object* x_3050; lean_object* x_3051; lean_object* x_3052; lean_object* x_3053; lean_object* x_3054; lean_object* x_3055; lean_object* x_3056; lean_object* x_3057; lean_object* x_3058; lean_object* x_3059; lean_object* x_3060; lean_object* x_3061; lean_object* x_3062; lean_object* x_3063; lean_object* x_3064; lean_object* x_3065; lean_object* x_3066; lean_object* x_3067; lean_object* x_3068; lean_object* x_3069; uint8_t x_3070; lean_object* x_3071; lean_object* x_3072; 
x_3027 = lean_ctor_get(x_2953, 0);
x_3028 = lean_ctor_get(x_2953, 1);
lean_inc(x_3028);
lean_inc(x_3027);
lean_dec(x_2953);
x_3029 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3027);
x_3030 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3030, 0, x_3027);
lean_ctor_set(x_3030, 1, x_3029);
x_3031 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3032 = lean_array_push(x_3031, x_2937);
x_3033 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3034 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3034, 0, x_3033);
lean_ctor_set(x_3034, 1, x_3032);
x_3035 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3036 = lean_array_push(x_3035, x_3034);
x_3037 = l_Lean_nullKind___closed__2;
x_3038 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3038, 0, x_3037);
lean_ctor_set(x_3038, 1, x_3036);
x_3039 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3027);
x_3040 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3040, 0, x_3027);
lean_ctor_set(x_3040, 1, x_3039);
x_3041 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3027);
x_3042 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3042, 0, x_3027);
lean_ctor_set(x_3042, 1, x_3041);
lean_inc(x_14);
x_3043 = lean_array_push(x_3035, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3044 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3044 = lean_box(0);
}
if (lean_is_scalar(x_3044)) {
 x_3045 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3045 = x_3044;
}
lean_ctor_set(x_3045, 0, x_3037);
lean_ctor_set(x_3045, 1, x_3043);
x_3046 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3047 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3047, 0, x_3027);
lean_ctor_set(x_3047, 1, x_3046);
x_3048 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3049 = lean_array_push(x_3048, x_3042);
x_3050 = lean_array_push(x_3049, x_3045);
x_3051 = lean_array_push(x_3050, x_3047);
x_3052 = lean_array_push(x_3051, x_2951);
x_3053 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3054 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3054, 0, x_3053);
lean_ctor_set(x_3054, 1, x_3052);
x_3055 = lean_array_push(x_3035, x_3054);
x_3056 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3056, 0, x_3037);
lean_ctor_set(x_3056, 1, x_3055);
x_3057 = lean_array_push(x_3035, x_3056);
x_3058 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3059 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3059, 0, x_3058);
lean_ctor_set(x_3059, 1, x_3057);
x_3060 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3061 = lean_array_push(x_3060, x_3030);
x_3062 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3063 = lean_array_push(x_3061, x_3062);
x_3064 = lean_array_push(x_3063, x_3038);
x_3065 = lean_array_push(x_3064, x_3062);
x_3066 = lean_array_push(x_3065, x_3040);
x_3067 = lean_array_push(x_3066, x_3059);
x_3068 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3069 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3069, 0, x_3068);
lean_ctor_set(x_3069, 1, x_3067);
x_3070 = 1;
x_3071 = lean_box(x_3070);
lean_ctor_set(x_2946, 1, x_3071);
lean_ctor_set(x_2946, 0, x_3069);
x_3072 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3072, 0, x_2945);
lean_ctor_set(x_3072, 1, x_3028);
return x_3072;
}
}
else
{
lean_object* x_3073; lean_object* x_3074; lean_object* x_3075; lean_object* x_3076; lean_object* x_3077; lean_object* x_3078; lean_object* x_3079; lean_object* x_3080; lean_object* x_3081; lean_object* x_3082; lean_object* x_3083; lean_object* x_3084; lean_object* x_3085; lean_object* x_3086; lean_object* x_3087; lean_object* x_3088; lean_object* x_3089; lean_object* x_3090; lean_object* x_3091; lean_object* x_3092; lean_object* x_3093; lean_object* x_3094; lean_object* x_3095; lean_object* x_3096; lean_object* x_3097; lean_object* x_3098; lean_object* x_3099; lean_object* x_3100; lean_object* x_3101; lean_object* x_3102; lean_object* x_3103; lean_object* x_3104; lean_object* x_3105; lean_object* x_3106; lean_object* x_3107; lean_object* x_3108; lean_object* x_3109; lean_object* x_3110; lean_object* x_3111; lean_object* x_3112; lean_object* x_3113; lean_object* x_3114; lean_object* x_3115; lean_object* x_3116; lean_object* x_3117; lean_object* x_3118; uint8_t x_3119; lean_object* x_3120; lean_object* x_3121; lean_object* x_3122; 
x_3073 = lean_ctor_get(x_2946, 0);
lean_inc(x_3073);
lean_dec(x_2946);
x_3074 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2947);
lean_dec(x_5);
x_3075 = lean_ctor_get(x_3074, 0);
lean_inc(x_3075);
x_3076 = lean_ctor_get(x_3074, 1);
lean_inc(x_3076);
if (lean_is_exclusive(x_3074)) {
 lean_ctor_release(x_3074, 0);
 lean_ctor_release(x_3074, 1);
 x_3077 = x_3074;
} else {
 lean_dec_ref(x_3074);
 x_3077 = lean_box(0);
}
x_3078 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3075);
x_3079 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3079, 0, x_3075);
lean_ctor_set(x_3079, 1, x_3078);
x_3080 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3081 = lean_array_push(x_3080, x_2937);
x_3082 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3083 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3083, 0, x_3082);
lean_ctor_set(x_3083, 1, x_3081);
x_3084 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3085 = lean_array_push(x_3084, x_3083);
x_3086 = l_Lean_nullKind___closed__2;
x_3087 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3087, 0, x_3086);
lean_ctor_set(x_3087, 1, x_3085);
x_3088 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3075);
x_3089 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3089, 0, x_3075);
lean_ctor_set(x_3089, 1, x_3088);
x_3090 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3075);
x_3091 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3091, 0, x_3075);
lean_ctor_set(x_3091, 1, x_3090);
lean_inc(x_14);
x_3092 = lean_array_push(x_3084, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3093 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3093 = lean_box(0);
}
if (lean_is_scalar(x_3093)) {
 x_3094 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3094 = x_3093;
}
lean_ctor_set(x_3094, 0, x_3086);
lean_ctor_set(x_3094, 1, x_3092);
x_3095 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3096 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3096, 0, x_3075);
lean_ctor_set(x_3096, 1, x_3095);
x_3097 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3098 = lean_array_push(x_3097, x_3091);
x_3099 = lean_array_push(x_3098, x_3094);
x_3100 = lean_array_push(x_3099, x_3096);
x_3101 = lean_array_push(x_3100, x_3073);
x_3102 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3103, 0, x_3102);
lean_ctor_set(x_3103, 1, x_3101);
x_3104 = lean_array_push(x_3084, x_3103);
x_3105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3105, 0, x_3086);
lean_ctor_set(x_3105, 1, x_3104);
x_3106 = lean_array_push(x_3084, x_3105);
x_3107 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3108, 0, x_3107);
lean_ctor_set(x_3108, 1, x_3106);
x_3109 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3110 = lean_array_push(x_3109, x_3079);
x_3111 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3112 = lean_array_push(x_3110, x_3111);
x_3113 = lean_array_push(x_3112, x_3087);
x_3114 = lean_array_push(x_3113, x_3111);
x_3115 = lean_array_push(x_3114, x_3089);
x_3116 = lean_array_push(x_3115, x_3108);
x_3117 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3118, 0, x_3117);
lean_ctor_set(x_3118, 1, x_3116);
x_3119 = 1;
x_3120 = lean_box(x_3119);
x_3121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3121, 0, x_3118);
lean_ctor_set(x_3121, 1, x_3120);
lean_ctor_set(x_2945, 1, x_3121);
if (lean_is_scalar(x_3077)) {
 x_3122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3122 = x_3077;
}
lean_ctor_set(x_3122, 0, x_2945);
lean_ctor_set(x_3122, 1, x_3076);
return x_3122;
}
}
else
{
lean_object* x_3123; lean_object* x_3124; lean_object* x_3125; lean_object* x_3126; lean_object* x_3127; lean_object* x_3128; lean_object* x_3129; lean_object* x_3130; lean_object* x_3131; lean_object* x_3132; lean_object* x_3133; lean_object* x_3134; lean_object* x_3135; lean_object* x_3136; lean_object* x_3137; lean_object* x_3138; lean_object* x_3139; lean_object* x_3140; lean_object* x_3141; lean_object* x_3142; lean_object* x_3143; lean_object* x_3144; lean_object* x_3145; lean_object* x_3146; lean_object* x_3147; lean_object* x_3148; lean_object* x_3149; lean_object* x_3150; lean_object* x_3151; lean_object* x_3152; lean_object* x_3153; lean_object* x_3154; lean_object* x_3155; lean_object* x_3156; lean_object* x_3157; lean_object* x_3158; lean_object* x_3159; lean_object* x_3160; lean_object* x_3161; lean_object* x_3162; lean_object* x_3163; lean_object* x_3164; lean_object* x_3165; lean_object* x_3166; lean_object* x_3167; lean_object* x_3168; lean_object* x_3169; lean_object* x_3170; uint8_t x_3171; lean_object* x_3172; lean_object* x_3173; lean_object* x_3174; lean_object* x_3175; 
x_3123 = lean_ctor_get(x_2945, 0);
lean_inc(x_3123);
lean_dec(x_2945);
x_3124 = lean_ctor_get(x_2946, 0);
lean_inc(x_3124);
if (lean_is_exclusive(x_2946)) {
 lean_ctor_release(x_2946, 0);
 lean_ctor_release(x_2946, 1);
 x_3125 = x_2946;
} else {
 lean_dec_ref(x_2946);
 x_3125 = lean_box(0);
}
x_3126 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_2947);
lean_dec(x_5);
x_3127 = lean_ctor_get(x_3126, 0);
lean_inc(x_3127);
x_3128 = lean_ctor_get(x_3126, 1);
lean_inc(x_3128);
if (lean_is_exclusive(x_3126)) {
 lean_ctor_release(x_3126, 0);
 lean_ctor_release(x_3126, 1);
 x_3129 = x_3126;
} else {
 lean_dec_ref(x_3126);
 x_3129 = lean_box(0);
}
x_3130 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3127);
x_3131 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3131, 0, x_3127);
lean_ctor_set(x_3131, 1, x_3130);
x_3132 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3133 = lean_array_push(x_3132, x_2937);
x_3134 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3135, 0, x_3134);
lean_ctor_set(x_3135, 1, x_3133);
x_3136 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3137 = lean_array_push(x_3136, x_3135);
x_3138 = l_Lean_nullKind___closed__2;
x_3139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3139, 0, x_3138);
lean_ctor_set(x_3139, 1, x_3137);
x_3140 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3127);
x_3141 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3141, 0, x_3127);
lean_ctor_set(x_3141, 1, x_3140);
x_3142 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3127);
x_3143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3143, 0, x_3127);
lean_ctor_set(x_3143, 1, x_3142);
lean_inc(x_14);
x_3144 = lean_array_push(x_3136, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3145 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3145 = lean_box(0);
}
if (lean_is_scalar(x_3145)) {
 x_3146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3146 = x_3145;
}
lean_ctor_set(x_3146, 0, x_3138);
lean_ctor_set(x_3146, 1, x_3144);
x_3147 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3148 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3148, 0, x_3127);
lean_ctor_set(x_3148, 1, x_3147);
x_3149 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3150 = lean_array_push(x_3149, x_3143);
x_3151 = lean_array_push(x_3150, x_3146);
x_3152 = lean_array_push(x_3151, x_3148);
x_3153 = lean_array_push(x_3152, x_3124);
x_3154 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3155, 0, x_3154);
lean_ctor_set(x_3155, 1, x_3153);
x_3156 = lean_array_push(x_3136, x_3155);
x_3157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3157, 0, x_3138);
lean_ctor_set(x_3157, 1, x_3156);
x_3158 = lean_array_push(x_3136, x_3157);
x_3159 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3160, 0, x_3159);
lean_ctor_set(x_3160, 1, x_3158);
x_3161 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3162 = lean_array_push(x_3161, x_3131);
x_3163 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3164 = lean_array_push(x_3162, x_3163);
x_3165 = lean_array_push(x_3164, x_3139);
x_3166 = lean_array_push(x_3165, x_3163);
x_3167 = lean_array_push(x_3166, x_3141);
x_3168 = lean_array_push(x_3167, x_3160);
x_3169 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3170, 0, x_3169);
lean_ctor_set(x_3170, 1, x_3168);
x_3171 = 1;
x_3172 = lean_box(x_3171);
if (lean_is_scalar(x_3125)) {
 x_3173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3173 = x_3125;
}
lean_ctor_set(x_3173, 0, x_3170);
lean_ctor_set(x_3173, 1, x_3172);
x_3174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3174, 0, x_3123);
lean_ctor_set(x_3174, 1, x_3173);
if (lean_is_scalar(x_3129)) {
 x_3175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3175 = x_3129;
}
lean_ctor_set(x_3175, 0, x_3174);
lean_ctor_set(x_3175, 1, x_3128);
return x_3175;
}
}
}
else
{
lean_object* x_3176; lean_object* x_3177; lean_object* x_3178; lean_object* x_3179; lean_object* x_3180; lean_object* x_3181; lean_object* x_3182; lean_object* x_3183; lean_object* x_3184; lean_object* x_3185; lean_object* x_3186; lean_object* x_3187; uint8_t x_3188; 
lean_dec(x_223);
lean_inc(x_5);
x_3176 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_3177 = lean_ctor_get(x_3176, 0);
lean_inc(x_3177);
x_3178 = lean_ctor_get(x_3176, 1);
lean_inc(x_3178);
lean_dec(x_3176);
x_3179 = lean_unsigned_to_nat(1u);
x_3180 = lean_nat_add(x_3, x_3179);
lean_dec(x_3);
x_3181 = l_Lean_mkHole(x_14);
lean_inc(x_3177);
x_3182 = l_Lean_Elab_Term_mkExplicitBinder(x_3177, x_3181);
x_3183 = lean_array_push(x_4, x_3182);
lean_inc(x_5);
x_3184 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3180, x_3183, x_5, x_3178);
x_3185 = lean_ctor_get(x_3184, 0);
lean_inc(x_3185);
x_3186 = lean_ctor_get(x_3185, 1);
lean_inc(x_3186);
x_3187 = lean_ctor_get(x_3184, 1);
lean_inc(x_3187);
lean_dec(x_3184);
x_3188 = !lean_is_exclusive(x_3185);
if (x_3188 == 0)
{
lean_object* x_3189; uint8_t x_3190; 
x_3189 = lean_ctor_get(x_3185, 1);
lean_dec(x_3189);
x_3190 = !lean_is_exclusive(x_3186);
if (x_3190 == 0)
{
lean_object* x_3191; lean_object* x_3192; lean_object* x_3193; uint8_t x_3194; 
x_3191 = lean_ctor_get(x_3186, 0);
x_3192 = lean_ctor_get(x_3186, 1);
lean_dec(x_3192);
x_3193 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3187);
lean_dec(x_5);
x_3194 = !lean_is_exclusive(x_3193);
if (x_3194 == 0)
{
lean_object* x_3195; lean_object* x_3196; lean_object* x_3197; lean_object* x_3198; lean_object* x_3199; lean_object* x_3200; lean_object* x_3201; lean_object* x_3202; lean_object* x_3203; lean_object* x_3204; lean_object* x_3205; lean_object* x_3206; lean_object* x_3207; lean_object* x_3208; lean_object* x_3209; lean_object* x_3210; uint8_t x_3211; 
x_3195 = lean_ctor_get(x_3193, 0);
x_3196 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3195);
x_3197 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3197, 0, x_3195);
lean_ctor_set(x_3197, 1, x_3196);
x_3198 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3199 = lean_array_push(x_3198, x_3177);
x_3200 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3201, 0, x_3200);
lean_ctor_set(x_3201, 1, x_3199);
x_3202 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3203 = lean_array_push(x_3202, x_3201);
x_3204 = l_Lean_nullKind___closed__2;
x_3205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3205, 0, x_3204);
lean_ctor_set(x_3205, 1, x_3203);
x_3206 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3195);
x_3207 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3207, 0, x_3195);
lean_ctor_set(x_3207, 1, x_3206);
x_3208 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3195);
x_3209 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3209, 0, x_3195);
lean_ctor_set(x_3209, 1, x_3208);
lean_inc(x_14);
x_3210 = lean_array_push(x_3202, x_14);
x_3211 = !lean_is_exclusive(x_14);
if (x_3211 == 0)
{
lean_object* x_3212; lean_object* x_3213; lean_object* x_3214; lean_object* x_3215; lean_object* x_3216; lean_object* x_3217; lean_object* x_3218; lean_object* x_3219; lean_object* x_3220; lean_object* x_3221; lean_object* x_3222; lean_object* x_3223; lean_object* x_3224; lean_object* x_3225; lean_object* x_3226; lean_object* x_3227; lean_object* x_3228; lean_object* x_3229; lean_object* x_3230; lean_object* x_3231; lean_object* x_3232; lean_object* x_3233; lean_object* x_3234; lean_object* x_3235; lean_object* x_3236; lean_object* x_3237; uint8_t x_3238; lean_object* x_3239; 
x_3212 = lean_ctor_get(x_14, 1);
lean_dec(x_3212);
x_3213 = lean_ctor_get(x_14, 0);
lean_dec(x_3213);
lean_ctor_set(x_14, 1, x_3210);
lean_ctor_set(x_14, 0, x_3204);
x_3214 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3215 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3215, 0, x_3195);
lean_ctor_set(x_3215, 1, x_3214);
x_3216 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3217 = lean_array_push(x_3216, x_3209);
x_3218 = lean_array_push(x_3217, x_14);
x_3219 = lean_array_push(x_3218, x_3215);
x_3220 = lean_array_push(x_3219, x_3191);
x_3221 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3222, 0, x_3221);
lean_ctor_set(x_3222, 1, x_3220);
x_3223 = lean_array_push(x_3202, x_3222);
x_3224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3224, 0, x_3204);
lean_ctor_set(x_3224, 1, x_3223);
x_3225 = lean_array_push(x_3202, x_3224);
x_3226 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3227, 0, x_3226);
lean_ctor_set(x_3227, 1, x_3225);
x_3228 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3229 = lean_array_push(x_3228, x_3197);
x_3230 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3231 = lean_array_push(x_3229, x_3230);
x_3232 = lean_array_push(x_3231, x_3205);
x_3233 = lean_array_push(x_3232, x_3230);
x_3234 = lean_array_push(x_3233, x_3207);
x_3235 = lean_array_push(x_3234, x_3227);
x_3236 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3237, 0, x_3236);
lean_ctor_set(x_3237, 1, x_3235);
x_3238 = 1;
x_3239 = lean_box(x_3238);
lean_ctor_set(x_3186, 1, x_3239);
lean_ctor_set(x_3186, 0, x_3237);
lean_ctor_set(x_3193, 0, x_3185);
return x_3193;
}
else
{
lean_object* x_3240; lean_object* x_3241; lean_object* x_3242; lean_object* x_3243; lean_object* x_3244; lean_object* x_3245; lean_object* x_3246; lean_object* x_3247; lean_object* x_3248; lean_object* x_3249; lean_object* x_3250; lean_object* x_3251; lean_object* x_3252; lean_object* x_3253; lean_object* x_3254; lean_object* x_3255; lean_object* x_3256; lean_object* x_3257; lean_object* x_3258; lean_object* x_3259; lean_object* x_3260; lean_object* x_3261; lean_object* x_3262; lean_object* x_3263; lean_object* x_3264; uint8_t x_3265; lean_object* x_3266; 
lean_dec(x_14);
x_3240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3240, 0, x_3204);
lean_ctor_set(x_3240, 1, x_3210);
x_3241 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3242, 0, x_3195);
lean_ctor_set(x_3242, 1, x_3241);
x_3243 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3244 = lean_array_push(x_3243, x_3209);
x_3245 = lean_array_push(x_3244, x_3240);
x_3246 = lean_array_push(x_3245, x_3242);
x_3247 = lean_array_push(x_3246, x_3191);
x_3248 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3249, 0, x_3248);
lean_ctor_set(x_3249, 1, x_3247);
x_3250 = lean_array_push(x_3202, x_3249);
x_3251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3251, 0, x_3204);
lean_ctor_set(x_3251, 1, x_3250);
x_3252 = lean_array_push(x_3202, x_3251);
x_3253 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3254, 0, x_3253);
lean_ctor_set(x_3254, 1, x_3252);
x_3255 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3256 = lean_array_push(x_3255, x_3197);
x_3257 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3258 = lean_array_push(x_3256, x_3257);
x_3259 = lean_array_push(x_3258, x_3205);
x_3260 = lean_array_push(x_3259, x_3257);
x_3261 = lean_array_push(x_3260, x_3207);
x_3262 = lean_array_push(x_3261, x_3254);
x_3263 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3264, 0, x_3263);
lean_ctor_set(x_3264, 1, x_3262);
x_3265 = 1;
x_3266 = lean_box(x_3265);
lean_ctor_set(x_3186, 1, x_3266);
lean_ctor_set(x_3186, 0, x_3264);
lean_ctor_set(x_3193, 0, x_3185);
return x_3193;
}
}
else
{
lean_object* x_3267; lean_object* x_3268; lean_object* x_3269; lean_object* x_3270; lean_object* x_3271; lean_object* x_3272; lean_object* x_3273; lean_object* x_3274; lean_object* x_3275; lean_object* x_3276; lean_object* x_3277; lean_object* x_3278; lean_object* x_3279; lean_object* x_3280; lean_object* x_3281; lean_object* x_3282; lean_object* x_3283; lean_object* x_3284; lean_object* x_3285; lean_object* x_3286; lean_object* x_3287; lean_object* x_3288; lean_object* x_3289; lean_object* x_3290; lean_object* x_3291; lean_object* x_3292; lean_object* x_3293; lean_object* x_3294; lean_object* x_3295; lean_object* x_3296; lean_object* x_3297; lean_object* x_3298; lean_object* x_3299; lean_object* x_3300; lean_object* x_3301; lean_object* x_3302; lean_object* x_3303; lean_object* x_3304; lean_object* x_3305; lean_object* x_3306; lean_object* x_3307; lean_object* x_3308; lean_object* x_3309; uint8_t x_3310; lean_object* x_3311; lean_object* x_3312; 
x_3267 = lean_ctor_get(x_3193, 0);
x_3268 = lean_ctor_get(x_3193, 1);
lean_inc(x_3268);
lean_inc(x_3267);
lean_dec(x_3193);
x_3269 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3267);
x_3270 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3270, 0, x_3267);
lean_ctor_set(x_3270, 1, x_3269);
x_3271 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3272 = lean_array_push(x_3271, x_3177);
x_3273 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3274, 0, x_3273);
lean_ctor_set(x_3274, 1, x_3272);
x_3275 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3276 = lean_array_push(x_3275, x_3274);
x_3277 = l_Lean_nullKind___closed__2;
x_3278 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3278, 0, x_3277);
lean_ctor_set(x_3278, 1, x_3276);
x_3279 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3267);
x_3280 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3280, 0, x_3267);
lean_ctor_set(x_3280, 1, x_3279);
x_3281 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3267);
x_3282 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3282, 0, x_3267);
lean_ctor_set(x_3282, 1, x_3281);
lean_inc(x_14);
x_3283 = lean_array_push(x_3275, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3284 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3284 = lean_box(0);
}
if (lean_is_scalar(x_3284)) {
 x_3285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3285 = x_3284;
}
lean_ctor_set(x_3285, 0, x_3277);
lean_ctor_set(x_3285, 1, x_3283);
x_3286 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3287 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3287, 0, x_3267);
lean_ctor_set(x_3287, 1, x_3286);
x_3288 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3289 = lean_array_push(x_3288, x_3282);
x_3290 = lean_array_push(x_3289, x_3285);
x_3291 = lean_array_push(x_3290, x_3287);
x_3292 = lean_array_push(x_3291, x_3191);
x_3293 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3294, 0, x_3293);
lean_ctor_set(x_3294, 1, x_3292);
x_3295 = lean_array_push(x_3275, x_3294);
x_3296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3296, 0, x_3277);
lean_ctor_set(x_3296, 1, x_3295);
x_3297 = lean_array_push(x_3275, x_3296);
x_3298 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3299, 0, x_3298);
lean_ctor_set(x_3299, 1, x_3297);
x_3300 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3301 = lean_array_push(x_3300, x_3270);
x_3302 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3303 = lean_array_push(x_3301, x_3302);
x_3304 = lean_array_push(x_3303, x_3278);
x_3305 = lean_array_push(x_3304, x_3302);
x_3306 = lean_array_push(x_3305, x_3280);
x_3307 = lean_array_push(x_3306, x_3299);
x_3308 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3309, 0, x_3308);
lean_ctor_set(x_3309, 1, x_3307);
x_3310 = 1;
x_3311 = lean_box(x_3310);
lean_ctor_set(x_3186, 1, x_3311);
lean_ctor_set(x_3186, 0, x_3309);
x_3312 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3312, 0, x_3185);
lean_ctor_set(x_3312, 1, x_3268);
return x_3312;
}
}
else
{
lean_object* x_3313; lean_object* x_3314; lean_object* x_3315; lean_object* x_3316; lean_object* x_3317; lean_object* x_3318; lean_object* x_3319; lean_object* x_3320; lean_object* x_3321; lean_object* x_3322; lean_object* x_3323; lean_object* x_3324; lean_object* x_3325; lean_object* x_3326; lean_object* x_3327; lean_object* x_3328; lean_object* x_3329; lean_object* x_3330; lean_object* x_3331; lean_object* x_3332; lean_object* x_3333; lean_object* x_3334; lean_object* x_3335; lean_object* x_3336; lean_object* x_3337; lean_object* x_3338; lean_object* x_3339; lean_object* x_3340; lean_object* x_3341; lean_object* x_3342; lean_object* x_3343; lean_object* x_3344; lean_object* x_3345; lean_object* x_3346; lean_object* x_3347; lean_object* x_3348; lean_object* x_3349; lean_object* x_3350; lean_object* x_3351; lean_object* x_3352; lean_object* x_3353; lean_object* x_3354; lean_object* x_3355; lean_object* x_3356; lean_object* x_3357; lean_object* x_3358; uint8_t x_3359; lean_object* x_3360; lean_object* x_3361; lean_object* x_3362; 
x_3313 = lean_ctor_get(x_3186, 0);
lean_inc(x_3313);
lean_dec(x_3186);
x_3314 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3187);
lean_dec(x_5);
x_3315 = lean_ctor_get(x_3314, 0);
lean_inc(x_3315);
x_3316 = lean_ctor_get(x_3314, 1);
lean_inc(x_3316);
if (lean_is_exclusive(x_3314)) {
 lean_ctor_release(x_3314, 0);
 lean_ctor_release(x_3314, 1);
 x_3317 = x_3314;
} else {
 lean_dec_ref(x_3314);
 x_3317 = lean_box(0);
}
x_3318 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3315);
x_3319 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3319, 0, x_3315);
lean_ctor_set(x_3319, 1, x_3318);
x_3320 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3321 = lean_array_push(x_3320, x_3177);
x_3322 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3323, 0, x_3322);
lean_ctor_set(x_3323, 1, x_3321);
x_3324 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3325 = lean_array_push(x_3324, x_3323);
x_3326 = l_Lean_nullKind___closed__2;
x_3327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3327, 0, x_3326);
lean_ctor_set(x_3327, 1, x_3325);
x_3328 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3315);
x_3329 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3329, 0, x_3315);
lean_ctor_set(x_3329, 1, x_3328);
x_3330 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3315);
x_3331 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3331, 0, x_3315);
lean_ctor_set(x_3331, 1, x_3330);
lean_inc(x_14);
x_3332 = lean_array_push(x_3324, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3333 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3333 = lean_box(0);
}
if (lean_is_scalar(x_3333)) {
 x_3334 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3334 = x_3333;
}
lean_ctor_set(x_3334, 0, x_3326);
lean_ctor_set(x_3334, 1, x_3332);
x_3335 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3336 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3336, 0, x_3315);
lean_ctor_set(x_3336, 1, x_3335);
x_3337 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3338 = lean_array_push(x_3337, x_3331);
x_3339 = lean_array_push(x_3338, x_3334);
x_3340 = lean_array_push(x_3339, x_3336);
x_3341 = lean_array_push(x_3340, x_3313);
x_3342 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3343 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3343, 0, x_3342);
lean_ctor_set(x_3343, 1, x_3341);
x_3344 = lean_array_push(x_3324, x_3343);
x_3345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3345, 0, x_3326);
lean_ctor_set(x_3345, 1, x_3344);
x_3346 = lean_array_push(x_3324, x_3345);
x_3347 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3348, 0, x_3347);
lean_ctor_set(x_3348, 1, x_3346);
x_3349 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3350 = lean_array_push(x_3349, x_3319);
x_3351 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3352 = lean_array_push(x_3350, x_3351);
x_3353 = lean_array_push(x_3352, x_3327);
x_3354 = lean_array_push(x_3353, x_3351);
x_3355 = lean_array_push(x_3354, x_3329);
x_3356 = lean_array_push(x_3355, x_3348);
x_3357 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3358 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3358, 0, x_3357);
lean_ctor_set(x_3358, 1, x_3356);
x_3359 = 1;
x_3360 = lean_box(x_3359);
x_3361 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3361, 0, x_3358);
lean_ctor_set(x_3361, 1, x_3360);
lean_ctor_set(x_3185, 1, x_3361);
if (lean_is_scalar(x_3317)) {
 x_3362 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3362 = x_3317;
}
lean_ctor_set(x_3362, 0, x_3185);
lean_ctor_set(x_3362, 1, x_3316);
return x_3362;
}
}
else
{
lean_object* x_3363; lean_object* x_3364; lean_object* x_3365; lean_object* x_3366; lean_object* x_3367; lean_object* x_3368; lean_object* x_3369; lean_object* x_3370; lean_object* x_3371; lean_object* x_3372; lean_object* x_3373; lean_object* x_3374; lean_object* x_3375; lean_object* x_3376; lean_object* x_3377; lean_object* x_3378; lean_object* x_3379; lean_object* x_3380; lean_object* x_3381; lean_object* x_3382; lean_object* x_3383; lean_object* x_3384; lean_object* x_3385; lean_object* x_3386; lean_object* x_3387; lean_object* x_3388; lean_object* x_3389; lean_object* x_3390; lean_object* x_3391; lean_object* x_3392; lean_object* x_3393; lean_object* x_3394; lean_object* x_3395; lean_object* x_3396; lean_object* x_3397; lean_object* x_3398; lean_object* x_3399; lean_object* x_3400; lean_object* x_3401; lean_object* x_3402; lean_object* x_3403; lean_object* x_3404; lean_object* x_3405; lean_object* x_3406; lean_object* x_3407; lean_object* x_3408; lean_object* x_3409; lean_object* x_3410; uint8_t x_3411; lean_object* x_3412; lean_object* x_3413; lean_object* x_3414; lean_object* x_3415; 
x_3363 = lean_ctor_get(x_3185, 0);
lean_inc(x_3363);
lean_dec(x_3185);
x_3364 = lean_ctor_get(x_3186, 0);
lean_inc(x_3364);
if (lean_is_exclusive(x_3186)) {
 lean_ctor_release(x_3186, 0);
 lean_ctor_release(x_3186, 1);
 x_3365 = x_3186;
} else {
 lean_dec_ref(x_3186);
 x_3365 = lean_box(0);
}
x_3366 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3187);
lean_dec(x_5);
x_3367 = lean_ctor_get(x_3366, 0);
lean_inc(x_3367);
x_3368 = lean_ctor_get(x_3366, 1);
lean_inc(x_3368);
if (lean_is_exclusive(x_3366)) {
 lean_ctor_release(x_3366, 0);
 lean_ctor_release(x_3366, 1);
 x_3369 = x_3366;
} else {
 lean_dec_ref(x_3366);
 x_3369 = lean_box(0);
}
x_3370 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3367);
x_3371 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3371, 0, x_3367);
lean_ctor_set(x_3371, 1, x_3370);
x_3372 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3373 = lean_array_push(x_3372, x_3177);
x_3374 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3375 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3375, 0, x_3374);
lean_ctor_set(x_3375, 1, x_3373);
x_3376 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3377 = lean_array_push(x_3376, x_3375);
x_3378 = l_Lean_nullKind___closed__2;
x_3379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3379, 0, x_3378);
lean_ctor_set(x_3379, 1, x_3377);
x_3380 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3367);
x_3381 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3381, 0, x_3367);
lean_ctor_set(x_3381, 1, x_3380);
x_3382 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3367);
x_3383 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3383, 0, x_3367);
lean_ctor_set(x_3383, 1, x_3382);
lean_inc(x_14);
x_3384 = lean_array_push(x_3376, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3385 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3385 = lean_box(0);
}
if (lean_is_scalar(x_3385)) {
 x_3386 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3386 = x_3385;
}
lean_ctor_set(x_3386, 0, x_3378);
lean_ctor_set(x_3386, 1, x_3384);
x_3387 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3388 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3388, 0, x_3367);
lean_ctor_set(x_3388, 1, x_3387);
x_3389 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3390 = lean_array_push(x_3389, x_3383);
x_3391 = lean_array_push(x_3390, x_3386);
x_3392 = lean_array_push(x_3391, x_3388);
x_3393 = lean_array_push(x_3392, x_3364);
x_3394 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3395, 0, x_3394);
lean_ctor_set(x_3395, 1, x_3393);
x_3396 = lean_array_push(x_3376, x_3395);
x_3397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3397, 0, x_3378);
lean_ctor_set(x_3397, 1, x_3396);
x_3398 = lean_array_push(x_3376, x_3397);
x_3399 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3400, 0, x_3399);
lean_ctor_set(x_3400, 1, x_3398);
x_3401 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3402 = lean_array_push(x_3401, x_3371);
x_3403 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3404 = lean_array_push(x_3402, x_3403);
x_3405 = lean_array_push(x_3404, x_3379);
x_3406 = lean_array_push(x_3405, x_3403);
x_3407 = lean_array_push(x_3406, x_3381);
x_3408 = lean_array_push(x_3407, x_3400);
x_3409 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3410, 0, x_3409);
lean_ctor_set(x_3410, 1, x_3408);
x_3411 = 1;
x_3412 = lean_box(x_3411);
if (lean_is_scalar(x_3365)) {
 x_3413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3413 = x_3365;
}
lean_ctor_set(x_3413, 0, x_3410);
lean_ctor_set(x_3413, 1, x_3412);
x_3414 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3414, 0, x_3363);
lean_ctor_set(x_3414, 1, x_3413);
if (lean_is_scalar(x_3369)) {
 x_3415 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3415 = x_3369;
}
lean_ctor_set(x_3415, 0, x_3414);
lean_ctor_set(x_3415, 1, x_3368);
return x_3415;
}
}
}
case 2:
{
lean_object* x_3416; lean_object* x_3417; lean_object* x_3418; lean_object* x_3419; lean_object* x_3420; lean_object* x_3421; lean_object* x_3422; lean_object* x_3423; lean_object* x_3424; lean_object* x_3425; lean_object* x_3426; lean_object* x_3427; uint8_t x_3428; 
lean_inc(x_5);
x_3416 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_5, x_6);
x_3417 = lean_ctor_get(x_3416, 0);
lean_inc(x_3417);
x_3418 = lean_ctor_get(x_3416, 1);
lean_inc(x_3418);
lean_dec(x_3416);
x_3419 = lean_unsigned_to_nat(1u);
x_3420 = lean_nat_add(x_3, x_3419);
lean_dec(x_3);
x_3421 = l_Lean_mkHole(x_14);
lean_inc(x_3417);
x_3422 = l_Lean_Elab_Term_mkExplicitBinder(x_3417, x_3421);
x_3423 = lean_array_push(x_4, x_3422);
lean_inc(x_5);
x_3424 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3420, x_3423, x_5, x_3418);
x_3425 = lean_ctor_get(x_3424, 0);
lean_inc(x_3425);
x_3426 = lean_ctor_get(x_3425, 1);
lean_inc(x_3426);
x_3427 = lean_ctor_get(x_3424, 1);
lean_inc(x_3427);
lean_dec(x_3424);
x_3428 = !lean_is_exclusive(x_3425);
if (x_3428 == 0)
{
lean_object* x_3429; uint8_t x_3430; 
x_3429 = lean_ctor_get(x_3425, 1);
lean_dec(x_3429);
x_3430 = !lean_is_exclusive(x_3426);
if (x_3430 == 0)
{
lean_object* x_3431; lean_object* x_3432; lean_object* x_3433; uint8_t x_3434; 
x_3431 = lean_ctor_get(x_3426, 0);
x_3432 = lean_ctor_get(x_3426, 1);
lean_dec(x_3432);
x_3433 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3427);
lean_dec(x_5);
x_3434 = !lean_is_exclusive(x_3433);
if (x_3434 == 0)
{
lean_object* x_3435; lean_object* x_3436; lean_object* x_3437; lean_object* x_3438; lean_object* x_3439; lean_object* x_3440; lean_object* x_3441; lean_object* x_3442; lean_object* x_3443; lean_object* x_3444; lean_object* x_3445; lean_object* x_3446; lean_object* x_3447; lean_object* x_3448; lean_object* x_3449; lean_object* x_3450; uint8_t x_3451; 
x_3435 = lean_ctor_get(x_3433, 0);
x_3436 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3435);
x_3437 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3437, 0, x_3435);
lean_ctor_set(x_3437, 1, x_3436);
x_3438 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3439 = lean_array_push(x_3438, x_3417);
x_3440 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3441, 0, x_3440);
lean_ctor_set(x_3441, 1, x_3439);
x_3442 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3443 = lean_array_push(x_3442, x_3441);
x_3444 = l_Lean_nullKind___closed__2;
x_3445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3445, 0, x_3444);
lean_ctor_set(x_3445, 1, x_3443);
x_3446 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3435);
x_3447 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3447, 0, x_3435);
lean_ctor_set(x_3447, 1, x_3446);
x_3448 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3435);
x_3449 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3449, 0, x_3435);
lean_ctor_set(x_3449, 1, x_3448);
lean_inc(x_14);
x_3450 = lean_array_push(x_3442, x_14);
x_3451 = !lean_is_exclusive(x_14);
if (x_3451 == 0)
{
lean_object* x_3452; lean_object* x_3453; lean_object* x_3454; lean_object* x_3455; lean_object* x_3456; lean_object* x_3457; lean_object* x_3458; lean_object* x_3459; lean_object* x_3460; lean_object* x_3461; lean_object* x_3462; lean_object* x_3463; lean_object* x_3464; lean_object* x_3465; lean_object* x_3466; lean_object* x_3467; lean_object* x_3468; lean_object* x_3469; lean_object* x_3470; lean_object* x_3471; lean_object* x_3472; lean_object* x_3473; lean_object* x_3474; lean_object* x_3475; lean_object* x_3476; lean_object* x_3477; uint8_t x_3478; lean_object* x_3479; 
x_3452 = lean_ctor_get(x_14, 1);
lean_dec(x_3452);
x_3453 = lean_ctor_get(x_14, 0);
lean_dec(x_3453);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_3450);
lean_ctor_set(x_14, 0, x_3444);
x_3454 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3455 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3455, 0, x_3435);
lean_ctor_set(x_3455, 1, x_3454);
x_3456 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3457 = lean_array_push(x_3456, x_3449);
x_3458 = lean_array_push(x_3457, x_14);
x_3459 = lean_array_push(x_3458, x_3455);
x_3460 = lean_array_push(x_3459, x_3431);
x_3461 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3462 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3462, 0, x_3461);
lean_ctor_set(x_3462, 1, x_3460);
x_3463 = lean_array_push(x_3442, x_3462);
x_3464 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3464, 0, x_3444);
lean_ctor_set(x_3464, 1, x_3463);
x_3465 = lean_array_push(x_3442, x_3464);
x_3466 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3467 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3467, 0, x_3466);
lean_ctor_set(x_3467, 1, x_3465);
x_3468 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3469 = lean_array_push(x_3468, x_3437);
x_3470 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3471 = lean_array_push(x_3469, x_3470);
x_3472 = lean_array_push(x_3471, x_3445);
x_3473 = lean_array_push(x_3472, x_3470);
x_3474 = lean_array_push(x_3473, x_3447);
x_3475 = lean_array_push(x_3474, x_3467);
x_3476 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3477 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3477, 0, x_3476);
lean_ctor_set(x_3477, 1, x_3475);
x_3478 = 1;
x_3479 = lean_box(x_3478);
lean_ctor_set(x_3426, 1, x_3479);
lean_ctor_set(x_3426, 0, x_3477);
lean_ctor_set(x_3433, 0, x_3425);
return x_3433;
}
else
{
lean_object* x_3480; lean_object* x_3481; lean_object* x_3482; lean_object* x_3483; lean_object* x_3484; lean_object* x_3485; lean_object* x_3486; lean_object* x_3487; lean_object* x_3488; lean_object* x_3489; lean_object* x_3490; lean_object* x_3491; lean_object* x_3492; lean_object* x_3493; lean_object* x_3494; lean_object* x_3495; lean_object* x_3496; lean_object* x_3497; lean_object* x_3498; lean_object* x_3499; lean_object* x_3500; lean_object* x_3501; lean_object* x_3502; lean_object* x_3503; lean_object* x_3504; uint8_t x_3505; lean_object* x_3506; 
lean_dec(x_14);
x_3480 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3480, 0, x_3444);
lean_ctor_set(x_3480, 1, x_3450);
x_3481 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3482 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3482, 0, x_3435);
lean_ctor_set(x_3482, 1, x_3481);
x_3483 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3484 = lean_array_push(x_3483, x_3449);
x_3485 = lean_array_push(x_3484, x_3480);
x_3486 = lean_array_push(x_3485, x_3482);
x_3487 = lean_array_push(x_3486, x_3431);
x_3488 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3489, 0, x_3488);
lean_ctor_set(x_3489, 1, x_3487);
x_3490 = lean_array_push(x_3442, x_3489);
x_3491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3491, 0, x_3444);
lean_ctor_set(x_3491, 1, x_3490);
x_3492 = lean_array_push(x_3442, x_3491);
x_3493 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3494, 0, x_3493);
lean_ctor_set(x_3494, 1, x_3492);
x_3495 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3496 = lean_array_push(x_3495, x_3437);
x_3497 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3498 = lean_array_push(x_3496, x_3497);
x_3499 = lean_array_push(x_3498, x_3445);
x_3500 = lean_array_push(x_3499, x_3497);
x_3501 = lean_array_push(x_3500, x_3447);
x_3502 = lean_array_push(x_3501, x_3494);
x_3503 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3504 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3504, 0, x_3503);
lean_ctor_set(x_3504, 1, x_3502);
x_3505 = 1;
x_3506 = lean_box(x_3505);
lean_ctor_set(x_3426, 1, x_3506);
lean_ctor_set(x_3426, 0, x_3504);
lean_ctor_set(x_3433, 0, x_3425);
return x_3433;
}
}
else
{
lean_object* x_3507; lean_object* x_3508; lean_object* x_3509; lean_object* x_3510; lean_object* x_3511; lean_object* x_3512; lean_object* x_3513; lean_object* x_3514; lean_object* x_3515; lean_object* x_3516; lean_object* x_3517; lean_object* x_3518; lean_object* x_3519; lean_object* x_3520; lean_object* x_3521; lean_object* x_3522; lean_object* x_3523; lean_object* x_3524; lean_object* x_3525; lean_object* x_3526; lean_object* x_3527; lean_object* x_3528; lean_object* x_3529; lean_object* x_3530; lean_object* x_3531; lean_object* x_3532; lean_object* x_3533; lean_object* x_3534; lean_object* x_3535; lean_object* x_3536; lean_object* x_3537; lean_object* x_3538; lean_object* x_3539; lean_object* x_3540; lean_object* x_3541; lean_object* x_3542; lean_object* x_3543; lean_object* x_3544; lean_object* x_3545; lean_object* x_3546; lean_object* x_3547; lean_object* x_3548; lean_object* x_3549; uint8_t x_3550; lean_object* x_3551; lean_object* x_3552; 
x_3507 = lean_ctor_get(x_3433, 0);
x_3508 = lean_ctor_get(x_3433, 1);
lean_inc(x_3508);
lean_inc(x_3507);
lean_dec(x_3433);
x_3509 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3507);
x_3510 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3510, 0, x_3507);
lean_ctor_set(x_3510, 1, x_3509);
x_3511 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3512 = lean_array_push(x_3511, x_3417);
x_3513 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3514 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3514, 0, x_3513);
lean_ctor_set(x_3514, 1, x_3512);
x_3515 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3516 = lean_array_push(x_3515, x_3514);
x_3517 = l_Lean_nullKind___closed__2;
x_3518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3518, 0, x_3517);
lean_ctor_set(x_3518, 1, x_3516);
x_3519 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3507);
x_3520 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3520, 0, x_3507);
lean_ctor_set(x_3520, 1, x_3519);
x_3521 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3507);
x_3522 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3522, 0, x_3507);
lean_ctor_set(x_3522, 1, x_3521);
lean_inc(x_14);
x_3523 = lean_array_push(x_3515, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3524 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3524 = lean_box(0);
}
if (lean_is_scalar(x_3524)) {
 x_3525 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3525 = x_3524;
 lean_ctor_set_tag(x_3525, 1);
}
lean_ctor_set(x_3525, 0, x_3517);
lean_ctor_set(x_3525, 1, x_3523);
x_3526 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3527 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3527, 0, x_3507);
lean_ctor_set(x_3527, 1, x_3526);
x_3528 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3529 = lean_array_push(x_3528, x_3522);
x_3530 = lean_array_push(x_3529, x_3525);
x_3531 = lean_array_push(x_3530, x_3527);
x_3532 = lean_array_push(x_3531, x_3431);
x_3533 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3534 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3534, 0, x_3533);
lean_ctor_set(x_3534, 1, x_3532);
x_3535 = lean_array_push(x_3515, x_3534);
x_3536 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3536, 0, x_3517);
lean_ctor_set(x_3536, 1, x_3535);
x_3537 = lean_array_push(x_3515, x_3536);
x_3538 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3539 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3539, 0, x_3538);
lean_ctor_set(x_3539, 1, x_3537);
x_3540 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3541 = lean_array_push(x_3540, x_3510);
x_3542 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3543 = lean_array_push(x_3541, x_3542);
x_3544 = lean_array_push(x_3543, x_3518);
x_3545 = lean_array_push(x_3544, x_3542);
x_3546 = lean_array_push(x_3545, x_3520);
x_3547 = lean_array_push(x_3546, x_3539);
x_3548 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3549 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3549, 0, x_3548);
lean_ctor_set(x_3549, 1, x_3547);
x_3550 = 1;
x_3551 = lean_box(x_3550);
lean_ctor_set(x_3426, 1, x_3551);
lean_ctor_set(x_3426, 0, x_3549);
x_3552 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3552, 0, x_3425);
lean_ctor_set(x_3552, 1, x_3508);
return x_3552;
}
}
else
{
lean_object* x_3553; lean_object* x_3554; lean_object* x_3555; lean_object* x_3556; lean_object* x_3557; lean_object* x_3558; lean_object* x_3559; lean_object* x_3560; lean_object* x_3561; lean_object* x_3562; lean_object* x_3563; lean_object* x_3564; lean_object* x_3565; lean_object* x_3566; lean_object* x_3567; lean_object* x_3568; lean_object* x_3569; lean_object* x_3570; lean_object* x_3571; lean_object* x_3572; lean_object* x_3573; lean_object* x_3574; lean_object* x_3575; lean_object* x_3576; lean_object* x_3577; lean_object* x_3578; lean_object* x_3579; lean_object* x_3580; lean_object* x_3581; lean_object* x_3582; lean_object* x_3583; lean_object* x_3584; lean_object* x_3585; lean_object* x_3586; lean_object* x_3587; lean_object* x_3588; lean_object* x_3589; lean_object* x_3590; lean_object* x_3591; lean_object* x_3592; lean_object* x_3593; lean_object* x_3594; lean_object* x_3595; lean_object* x_3596; lean_object* x_3597; lean_object* x_3598; uint8_t x_3599; lean_object* x_3600; lean_object* x_3601; lean_object* x_3602; 
x_3553 = lean_ctor_get(x_3426, 0);
lean_inc(x_3553);
lean_dec(x_3426);
x_3554 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3427);
lean_dec(x_5);
x_3555 = lean_ctor_get(x_3554, 0);
lean_inc(x_3555);
x_3556 = lean_ctor_get(x_3554, 1);
lean_inc(x_3556);
if (lean_is_exclusive(x_3554)) {
 lean_ctor_release(x_3554, 0);
 lean_ctor_release(x_3554, 1);
 x_3557 = x_3554;
} else {
 lean_dec_ref(x_3554);
 x_3557 = lean_box(0);
}
x_3558 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3555);
x_3559 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3559, 0, x_3555);
lean_ctor_set(x_3559, 1, x_3558);
x_3560 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3561 = lean_array_push(x_3560, x_3417);
x_3562 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3563 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3563, 0, x_3562);
lean_ctor_set(x_3563, 1, x_3561);
x_3564 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3565 = lean_array_push(x_3564, x_3563);
x_3566 = l_Lean_nullKind___closed__2;
x_3567 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3567, 0, x_3566);
lean_ctor_set(x_3567, 1, x_3565);
x_3568 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3555);
x_3569 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3569, 0, x_3555);
lean_ctor_set(x_3569, 1, x_3568);
x_3570 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3555);
x_3571 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3571, 0, x_3555);
lean_ctor_set(x_3571, 1, x_3570);
lean_inc(x_14);
x_3572 = lean_array_push(x_3564, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3573 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3573 = lean_box(0);
}
if (lean_is_scalar(x_3573)) {
 x_3574 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3574 = x_3573;
 lean_ctor_set_tag(x_3574, 1);
}
lean_ctor_set(x_3574, 0, x_3566);
lean_ctor_set(x_3574, 1, x_3572);
x_3575 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3576 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3576, 0, x_3555);
lean_ctor_set(x_3576, 1, x_3575);
x_3577 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3578 = lean_array_push(x_3577, x_3571);
x_3579 = lean_array_push(x_3578, x_3574);
x_3580 = lean_array_push(x_3579, x_3576);
x_3581 = lean_array_push(x_3580, x_3553);
x_3582 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3583 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3583, 0, x_3582);
lean_ctor_set(x_3583, 1, x_3581);
x_3584 = lean_array_push(x_3564, x_3583);
x_3585 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3585, 0, x_3566);
lean_ctor_set(x_3585, 1, x_3584);
x_3586 = lean_array_push(x_3564, x_3585);
x_3587 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3588 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3588, 0, x_3587);
lean_ctor_set(x_3588, 1, x_3586);
x_3589 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3590 = lean_array_push(x_3589, x_3559);
x_3591 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3592 = lean_array_push(x_3590, x_3591);
x_3593 = lean_array_push(x_3592, x_3567);
x_3594 = lean_array_push(x_3593, x_3591);
x_3595 = lean_array_push(x_3594, x_3569);
x_3596 = lean_array_push(x_3595, x_3588);
x_3597 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3598, 0, x_3597);
lean_ctor_set(x_3598, 1, x_3596);
x_3599 = 1;
x_3600 = lean_box(x_3599);
x_3601 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3601, 0, x_3598);
lean_ctor_set(x_3601, 1, x_3600);
lean_ctor_set(x_3425, 1, x_3601);
if (lean_is_scalar(x_3557)) {
 x_3602 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3602 = x_3557;
}
lean_ctor_set(x_3602, 0, x_3425);
lean_ctor_set(x_3602, 1, x_3556);
return x_3602;
}
}
else
{
lean_object* x_3603; lean_object* x_3604; lean_object* x_3605; lean_object* x_3606; lean_object* x_3607; lean_object* x_3608; lean_object* x_3609; lean_object* x_3610; lean_object* x_3611; lean_object* x_3612; lean_object* x_3613; lean_object* x_3614; lean_object* x_3615; lean_object* x_3616; lean_object* x_3617; lean_object* x_3618; lean_object* x_3619; lean_object* x_3620; lean_object* x_3621; lean_object* x_3622; lean_object* x_3623; lean_object* x_3624; lean_object* x_3625; lean_object* x_3626; lean_object* x_3627; lean_object* x_3628; lean_object* x_3629; lean_object* x_3630; lean_object* x_3631; lean_object* x_3632; lean_object* x_3633; lean_object* x_3634; lean_object* x_3635; lean_object* x_3636; lean_object* x_3637; lean_object* x_3638; lean_object* x_3639; lean_object* x_3640; lean_object* x_3641; lean_object* x_3642; lean_object* x_3643; lean_object* x_3644; lean_object* x_3645; lean_object* x_3646; lean_object* x_3647; lean_object* x_3648; lean_object* x_3649; lean_object* x_3650; uint8_t x_3651; lean_object* x_3652; lean_object* x_3653; lean_object* x_3654; lean_object* x_3655; 
x_3603 = lean_ctor_get(x_3425, 0);
lean_inc(x_3603);
lean_dec(x_3425);
x_3604 = lean_ctor_get(x_3426, 0);
lean_inc(x_3604);
if (lean_is_exclusive(x_3426)) {
 lean_ctor_release(x_3426, 0);
 lean_ctor_release(x_3426, 1);
 x_3605 = x_3426;
} else {
 lean_dec_ref(x_3426);
 x_3605 = lean_box(0);
}
x_3606 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_3427);
lean_dec(x_5);
x_3607 = lean_ctor_get(x_3606, 0);
lean_inc(x_3607);
x_3608 = lean_ctor_get(x_3606, 1);
lean_inc(x_3608);
if (lean_is_exclusive(x_3606)) {
 lean_ctor_release(x_3606, 0);
 lean_ctor_release(x_3606, 1);
 x_3609 = x_3606;
} else {
 lean_dec_ref(x_3606);
 x_3609 = lean_box(0);
}
x_3610 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_3607);
x_3611 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3611, 0, x_3607);
lean_ctor_set(x_3611, 1, x_3610);
x_3612 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_3613 = lean_array_push(x_3612, x_3417);
x_3614 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_3615 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3615, 0, x_3614);
lean_ctor_set(x_3615, 1, x_3613);
x_3616 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_3617 = lean_array_push(x_3616, x_3615);
x_3618 = l_Lean_nullKind___closed__2;
x_3619 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3619, 0, x_3618);
lean_ctor_set(x_3619, 1, x_3617);
x_3620 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_3607);
x_3621 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3621, 0, x_3607);
lean_ctor_set(x_3621, 1, x_3620);
x_3622 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_3607);
x_3623 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3623, 0, x_3607);
lean_ctor_set(x_3623, 1, x_3622);
lean_inc(x_14);
x_3624 = lean_array_push(x_3616, x_14);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_3625 = x_14;
} else {
 lean_dec_ref(x_14);
 x_3625 = lean_box(0);
}
if (lean_is_scalar(x_3625)) {
 x_3626 = lean_alloc_ctor(1, 2, 0);
} else {
 x_3626 = x_3625;
 lean_ctor_set_tag(x_3626, 1);
}
lean_ctor_set(x_3626, 0, x_3618);
lean_ctor_set(x_3626, 1, x_3624);
x_3627 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_3628 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3628, 0, x_3607);
lean_ctor_set(x_3628, 1, x_3627);
x_3629 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_3630 = lean_array_push(x_3629, x_3623);
x_3631 = lean_array_push(x_3630, x_3626);
x_3632 = lean_array_push(x_3631, x_3628);
x_3633 = lean_array_push(x_3632, x_3604);
x_3634 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_3635 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3635, 0, x_3634);
lean_ctor_set(x_3635, 1, x_3633);
x_3636 = lean_array_push(x_3616, x_3635);
x_3637 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3637, 0, x_3618);
lean_ctor_set(x_3637, 1, x_3636);
x_3638 = lean_array_push(x_3616, x_3637);
x_3639 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_3640 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3640, 0, x_3639);
lean_ctor_set(x_3640, 1, x_3638);
x_3641 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_3642 = lean_array_push(x_3641, x_3611);
x_3643 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3644 = lean_array_push(x_3642, x_3643);
x_3645 = lean_array_push(x_3644, x_3619);
x_3646 = lean_array_push(x_3645, x_3643);
x_3647 = lean_array_push(x_3646, x_3621);
x_3648 = lean_array_push(x_3647, x_3640);
x_3649 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_3650 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3650, 0, x_3649);
lean_ctor_set(x_3650, 1, x_3648);
x_3651 = 1;
x_3652 = lean_box(x_3651);
if (lean_is_scalar(x_3605)) {
 x_3653 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3653 = x_3605;
}
lean_ctor_set(x_3653, 0, x_3650);
lean_ctor_set(x_3653, 1, x_3652);
x_3654 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3654, 0, x_3603);
lean_ctor_set(x_3654, 1, x_3653);
if (lean_is_scalar(x_3609)) {
 x_3655 = lean_alloc_ctor(0, 2, 0);
} else {
 x_3655 = x_3609;
}
lean_ctor_set(x_3655, 0, x_3654);
lean_ctor_set(x_3655, 1, x_3608);
return x_3655;
}
}
default: 
{
lean_object* x_3656; lean_object* x_3657; lean_object* x_3658; lean_object* x_3659; lean_object* x_3660; 
x_3656 = l_Lean_mkHole(x_14);
x_3657 = lean_unsigned_to_nat(1u);
x_3658 = lean_nat_add(x_3, x_3657);
lean_dec(x_3);
x_3659 = l_Lean_Elab_Term_mkExplicitBinder(x_14, x_3656);
x_3660 = lean_array_push(x_4, x_3659);
x_3 = x_3658;
x_4 = x_3660;
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
x_6 = l_Array_empty___closed__1;
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
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
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
x_16 = l_Array_empty___closed__1;
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_2);
x_18 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux(x_1, x_18, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
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
lean_object* x_53; lean_object* x_54; 
x_53 = l_Array_empty___closed__1;
x_54 = lean_apply_9(x_3, x_53, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_54;
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
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_groupKind___closed__2;
lean_inc(x_2);
x_4 = l_Lean_Syntax_isOfKind(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
x_8 = l_Lean_Parser_Term_letRecDecl___elambda__1___closed__1;
x_9 = lean_name_mk_string(x_1, x_8);
lean_inc(x_7);
x_10 = l_Lean_Syntax_isOfKind(x_7, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_2, x_12);
lean_dec(x_2);
x_14 = l_Lean_Syntax_isNone(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_nullKind;
x_16 = l_Lean_Syntax_isNodeOf(x_13, x_15, x_12);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_7);
x_17 = lean_box(0);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_7);
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_7);
return x_19;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandWhereDecls___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandWhereDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Parser_Term_whereDecls_formatter___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_dec(x_1);
x_11 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_12 = l_Lean_Elab_Term_expandWhereDecls___closed__1;
x_13 = l_Array_sequenceMap___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__1(x_11, x_12);
lean_dec(x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_3, x_4);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_myMacro____x40_Init_Notation___hyg_14569____closed__1;
lean_inc(x_19);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__3;
lean_inc(x_19);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_25 = lean_array_push(x_24, x_21);
x_26 = lean_array_push(x_25, x_23);
x_27 = l_Lean_groupKind___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
x_30 = l_Lean_Syntax_SepArray_ofElems(x_29, x_16);
lean_dec(x_16);
x_31 = l_Array_empty___closed__1;
x_32 = l_Array_append___rarg(x_31, x_30);
lean_dec(x_30);
x_33 = l_Lean_nullKind___closed__2;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_36 = lean_array_push(x_35, x_34);
x_37 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__1;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_19);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_35, x_40);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_33);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_44 = lean_array_push(x_43, x_28);
x_45 = lean_array_push(x_44, x_38);
x_46 = lean_array_push(x_45, x_42);
x_47 = lean_array_push(x_46, x_2);
x_48 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__2;
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_17, 0, x_49);
return x_17;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_50 = lean_ctor_get(x_17, 0);
x_51 = lean_ctor_get(x_17, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_17);
x_52 = l_myMacro____x40_Init_Notation___hyg_14569____closed__1;
lean_inc(x_50);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__3;
lean_inc(x_50);
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_57 = lean_array_push(x_56, x_53);
x_58 = lean_array_push(x_57, x_55);
x_59 = l_Lean_groupKind___closed__2;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_myMacro____x40_Init_Notation___hyg_1198____closed__7;
x_62 = l_Lean_Syntax_SepArray_ofElems(x_61, x_16);
lean_dec(x_16);
x_63 = l_Array_empty___closed__1;
x_64 = l_Array_append___rarg(x_63, x_62);
lean_dec(x_62);
x_65 = l_Lean_nullKind___closed__2;
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_68 = lean_array_push(x_67, x_66);
x_69 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__1;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_50);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_67, x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_65);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_76 = lean_array_push(x_75, x_60);
x_77 = lean_array_push(x_76, x_70);
x_78 = lean_array_push(x_77, x_74);
x_79 = lean_array_push(x_78, x_2);
x_80 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17801____closed__2;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_51);
return x_82;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = l_myMacro____x40_Init_Notation___hyg_13362____closed__3;
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
lean_inc(x_2);
x_15 = lean_array_push(x_14, x_2);
x_16 = lean_array_push(x_15, x_11);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
x_18 = 1;
x_19 = x_4 + x_18;
x_20 = x_17;
x_21 = lean_array_uset(x_10, x_4, x_20);
x_4 = x_19;
x_5 = x_21;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = l_myMacro____x40_Init_Notation___hyg_1997____closed__1;
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = l_myMacro____x40_Init_Notation___hyg_13362____closed__3;
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
lean_inc(x_2);
x_17 = lean_array_push(x_16, x_2);
x_18 = lean_array_push(x_17, x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = 1;
x_21 = x_4 + x_20;
x_22 = x_19;
x_23 = lean_array_uset(x_10, x_4, x_22);
x_4 = x_21;
x_5 = x_23;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_mkArrow___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_mkArrow___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
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
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
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
x_20 = l_Lean_Meta_mkArrow___closed__2;
x_21 = l_Lean_addMacroScope(x_15, x_20, x_12);
x_22 = lean_box(0);
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_22);
x_25 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_19);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
x_29 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_31 = lean_array_push(x_30, x_29);
lean_inc(x_24);
x_32 = lean_array_push(x_31, x_24);
x_33 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_4, x_34);
lean_inc(x_5);
x_36 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_10, x_35, x_5, x_27);
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_38);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_28);
x_43 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_41);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_46 = lean_array_push(x_45, x_24);
x_47 = l_Lean_nullKind___closed__2;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_41);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_52 = lean_array_push(x_51, x_48);
x_53 = lean_array_push(x_52, x_50);
x_54 = lean_array_push(x_53, x_37);
x_55 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_array_push(x_30, x_44);
x_58 = lean_array_push(x_57, x_56);
x_59 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_30, x_42);
x_62 = lean_array_push(x_61, x_60);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_33);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set(x_39, 0, x_63);
return x_39;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_64 = lean_ctor_get(x_39, 0);
x_65 = lean_ctor_get(x_39, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_39);
lean_inc(x_64);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_28);
x_67 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_64);
x_68 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_68, 0, x_64);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_70 = lean_array_push(x_69, x_24);
x_71 = l_Lean_nullKind___closed__2;
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_64);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_76 = lean_array_push(x_75, x_72);
x_77 = lean_array_push(x_76, x_74);
x_78 = lean_array_push(x_77, x_37);
x_79 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_array_push(x_30, x_68);
x_82 = lean_array_push(x_81, x_80);
x_83 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_array_push(x_30, x_66);
x_86 = lean_array_push(x_85, x_84);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_33);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_65);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_89 = lean_ctor_get(x_36, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_36, 1);
lean_inc(x_90);
lean_dec(x_36);
x_91 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_90);
lean_dec(x_5);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = l_Lean_Parser_Tactic_intro___closed__3;
lean_inc(x_93);
x_95 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_97 = lean_array_push(x_96, x_24);
x_98 = l_Lean_nullKind___closed__2;
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = lean_array_push(x_30, x_95);
x_101 = lean_array_push(x_100, x_99);
x_102 = l_Lean_Parser_Tactic_intro___closed__4;
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
x_104 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_105 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_105, 0, x_93);
lean_ctor_set(x_105, 1, x_104);
x_106 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_107 = lean_array_push(x_106, x_103);
x_108 = lean_array_push(x_107, x_105);
x_109 = lean_array_push(x_108, x_89);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_98);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_array_push(x_96, x_110);
x_112 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15488____closed__2;
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
lean_ctor_set(x_91, 0, x_113);
return x_91;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_114 = lean_ctor_get(x_91, 0);
x_115 = lean_ctor_get(x_91, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_91);
x_116 = l_Lean_Parser_Tactic_intro___closed__3;
lean_inc(x_114);
x_117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
x_118 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_119 = lean_array_push(x_118, x_24);
x_120 = l_Lean_nullKind___closed__2;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_array_push(x_30, x_117);
x_123 = lean_array_push(x_122, x_121);
x_124 = l_Lean_Parser_Tactic_intro___closed__4;
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_123);
x_126 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_127 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_127, 0, x_114);
lean_ctor_set(x_127, 1, x_126);
x_128 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_129 = lean_array_push(x_128, x_125);
x_130 = lean_array_push(x_129, x_127);
x_131 = lean_array_push(x_130, x_89);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_120);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_array_push(x_118, x_132);
x_134 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15488____closed__2;
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_115);
return x_136;
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_137 = lean_ctor_get(x_5, 0);
x_138 = lean_ctor_get(x_5, 1);
x_139 = lean_ctor_get(x_5, 3);
x_140 = lean_ctor_get(x_5, 4);
x_141 = lean_ctor_get(x_5, 5);
lean_inc(x_141);
lean_inc(x_140);
lean_inc(x_139);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_5);
lean_inc(x_12);
lean_inc(x_138);
x_142 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_142, 0, x_137);
lean_ctor_set(x_142, 1, x_138);
lean_ctor_set(x_142, 2, x_12);
lean_ctor_set(x_142, 3, x_139);
lean_ctor_set(x_142, 4, x_140);
lean_ctor_set(x_142, 5, x_141);
x_143 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_142, x_6);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = l_Lean_Meta_mkArrow___closed__2;
x_147 = l_Lean_addMacroScope(x_138, x_146, x_12);
x_148 = lean_box(0);
x_149 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
x_150 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_150, 0, x_144);
lean_ctor_set(x_150, 1, x_149);
lean_ctor_set(x_150, 2, x_147);
lean_ctor_set(x_150, 3, x_148);
x_151 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_142, x_145);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_157 = lean_array_push(x_156, x_155);
lean_inc(x_150);
x_158 = lean_array_push(x_157, x_150);
x_159 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_158);
x_161 = lean_array_push(x_4, x_160);
lean_inc(x_142);
x_162 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_10, x_161, x_142, x_153);
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_142, x_164);
lean_dec(x_142);
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
lean_inc(x_166);
x_169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_154);
x_170 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_166);
x_171 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_171, 0, x_166);
lean_ctor_set(x_171, 1, x_170);
x_172 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_173 = lean_array_push(x_172, x_150);
x_174 = l_Lean_nullKind___closed__2;
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_173);
x_176 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_177, 0, x_166);
lean_ctor_set(x_177, 1, x_176);
x_178 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_179 = lean_array_push(x_178, x_175);
x_180 = lean_array_push(x_179, x_177);
x_181 = lean_array_push(x_180, x_163);
x_182 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
x_184 = lean_array_push(x_156, x_171);
x_185 = lean_array_push(x_184, x_183);
x_186 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_185);
x_188 = lean_array_push(x_156, x_169);
x_189 = lean_array_push(x_188, x_187);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_159);
lean_ctor_set(x_190, 1, x_189);
if (lean_is_scalar(x_168)) {
 x_191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_191 = x_168;
}
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_167);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_192 = lean_ctor_get(x_162, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_162, 1);
lean_inc(x_193);
lean_dec(x_162);
x_194 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_142, x_193);
lean_dec(x_142);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_194)) {
 lean_ctor_release(x_194, 0);
 lean_ctor_release(x_194, 1);
 x_197 = x_194;
} else {
 lean_dec_ref(x_194);
 x_197 = lean_box(0);
}
x_198 = l_Lean_Parser_Tactic_intro___closed__3;
lean_inc(x_195);
x_199 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_199, 0, x_195);
lean_ctor_set(x_199, 1, x_198);
x_200 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_201 = lean_array_push(x_200, x_150);
x_202 = l_Lean_nullKind___closed__2;
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_201);
x_204 = lean_array_push(x_156, x_199);
x_205 = lean_array_push(x_204, x_203);
x_206 = l_Lean_Parser_Tactic_intro___closed__4;
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_205);
x_208 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_209 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_209, 0, x_195);
lean_ctor_set(x_209, 1, x_208);
x_210 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_211 = lean_array_push(x_210, x_207);
x_212 = lean_array_push(x_211, x_209);
x_213 = lean_array_push(x_212, x_192);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_202);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_array_push(x_200, x_214);
x_216 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15488____closed__2;
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_215);
if (lean_is_scalar(x_197)) {
 x_218 = lean_alloc_ctor(0, 2, 0);
} else {
 x_218 = x_197;
}
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_196);
return x_218;
}
}
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_219 = lean_ctor_get(x_6, 0);
x_220 = lean_ctor_get(x_6, 1);
lean_inc(x_220);
lean_inc(x_219);
lean_dec(x_6);
x_221 = lean_nat_add(x_219, x_9);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
x_223 = lean_ctor_get(x_5, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_5, 1);
lean_inc(x_224);
x_225 = lean_ctor_get(x_5, 3);
lean_inc(x_225);
x_226 = lean_ctor_get(x_5, 4);
lean_inc(x_226);
x_227 = lean_ctor_get(x_5, 5);
lean_inc(x_227);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 x_228 = x_5;
} else {
 lean_dec_ref(x_5);
 x_228 = lean_box(0);
}
lean_inc(x_219);
lean_inc(x_224);
if (lean_is_scalar(x_228)) {
 x_229 = lean_alloc_ctor(0, 6, 0);
} else {
 x_229 = x_228;
}
lean_ctor_set(x_229, 0, x_223);
lean_ctor_set(x_229, 1, x_224);
lean_ctor_set(x_229, 2, x_219);
lean_ctor_set(x_229, 3, x_225);
lean_ctor_set(x_229, 4, x_226);
lean_ctor_set(x_229, 5, x_227);
x_230 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_229, x_222);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = l_Lean_Meta_mkArrow___closed__2;
x_234 = l_Lean_addMacroScope(x_224, x_233, x_219);
x_235 = lean_box(0);
x_236 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
x_237 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_237, 0, x_231);
lean_ctor_set(x_237, 1, x_236);
lean_ctor_set(x_237, 2, x_234);
lean_ctor_set(x_237, 3, x_235);
x_238 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_229, x_232);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
x_242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_242, 0, x_239);
lean_ctor_set(x_242, 1, x_241);
x_243 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_244 = lean_array_push(x_243, x_242);
lean_inc(x_237);
x_245 = lean_array_push(x_244, x_237);
x_246 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_245);
x_248 = lean_array_push(x_4, x_247);
lean_inc(x_229);
x_249 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_10, x_248, x_229, x_240);
lean_dec(x_10);
if (x_2 == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
lean_dec(x_249);
x_252 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_229, x_251);
lean_dec(x_229);
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_252, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_252)) {
 lean_ctor_release(x_252, 0);
 lean_ctor_release(x_252, 1);
 x_255 = x_252;
} else {
 lean_dec_ref(x_252);
 x_255 = lean_box(0);
}
lean_inc(x_253);
x_256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_241);
x_257 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_253);
x_258 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_258, 0, x_253);
lean_ctor_set(x_258, 1, x_257);
x_259 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_260 = lean_array_push(x_259, x_237);
x_261 = l_Lean_nullKind___closed__2;
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_260);
x_263 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_264 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_264, 0, x_253);
lean_ctor_set(x_264, 1, x_263);
x_265 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_266 = lean_array_push(x_265, x_262);
x_267 = lean_array_push(x_266, x_264);
x_268 = lean_array_push(x_267, x_250);
x_269 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set(x_270, 1, x_268);
x_271 = lean_array_push(x_243, x_258);
x_272 = lean_array_push(x_271, x_270);
x_273 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_272);
x_275 = lean_array_push(x_243, x_256);
x_276 = lean_array_push(x_275, x_274);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_246);
lean_ctor_set(x_277, 1, x_276);
if (lean_is_scalar(x_255)) {
 x_278 = lean_alloc_ctor(0, 2, 0);
} else {
 x_278 = x_255;
}
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_254);
return x_278;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_279 = lean_ctor_get(x_249, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_249, 1);
lean_inc(x_280);
lean_dec(x_249);
x_281 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_229, x_280);
lean_dec(x_229);
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
x_285 = l_Lean_Parser_Tactic_intro___closed__3;
lean_inc(x_282);
x_286 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_286, 0, x_282);
lean_ctor_set(x_286, 1, x_285);
x_287 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_288 = lean_array_push(x_287, x_237);
x_289 = l_Lean_nullKind___closed__2;
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_288);
x_291 = lean_array_push(x_243, x_286);
x_292 = lean_array_push(x_291, x_290);
x_293 = l_Lean_Parser_Tactic_intro___closed__4;
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
x_295 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_296 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_296, 0, x_282);
lean_ctor_set(x_296, 1, x_295);
x_297 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_298 = lean_array_push(x_297, x_294);
x_299 = lean_array_push(x_298, x_296);
x_300 = lean_array_push(x_299, x_279);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_289);
lean_ctor_set(x_301, 1, x_300);
x_302 = lean_array_push(x_287, x_301);
x_303 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15488____closed__2;
x_304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_302);
if (lean_is_scalar(x_284)) {
 x_305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_305 = x_284;
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_283);
return x_305;
}
}
}
else
{
if (x_2 == 0)
{
lean_object* x_306; uint8_t x_307; 
x_306 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
lean_dec(x_5);
x_307 = !lean_is_exclusive(x_306);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; size_t x_312; size_t x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_308 = lean_ctor_get(x_306, 0);
x_309 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_308);
x_310 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_array_get_size(x_4);
x_312 = lean_usize_of_nat(x_311);
lean_dec(x_311);
x_313 = 0;
x_314 = x_4;
x_315 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_316 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_317 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_315, x_316, x_312, x_313, x_314);
x_318 = x_317;
x_319 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_320 = l_Lean_mkSepArray(x_318, x_319);
lean_dec(x_318);
x_321 = l_Array_empty___closed__1;
x_322 = l_Array_append___rarg(x_321, x_320);
lean_dec(x_320);
x_323 = l_Lean_nullKind___closed__2;
x_324 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_322);
x_325 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_326 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_326, 0, x_308);
lean_ctor_set(x_326, 1, x_325);
x_327 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_328 = lean_array_push(x_327, x_310);
x_329 = lean_array_push(x_328, x_316);
x_330 = lean_array_push(x_329, x_324);
x_331 = lean_array_push(x_330, x_316);
x_332 = lean_array_push(x_331, x_326);
x_333 = lean_array_push(x_332, x_1);
x_334 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_334);
lean_ctor_set(x_335, 1, x_333);
lean_ctor_set(x_306, 0, x_335);
return x_306;
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; size_t x_341; size_t x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_336 = lean_ctor_get(x_306, 0);
x_337 = lean_ctor_get(x_306, 1);
lean_inc(x_337);
lean_inc(x_336);
lean_dec(x_306);
x_338 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_336);
x_339 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_339, 0, x_336);
lean_ctor_set(x_339, 1, x_338);
x_340 = lean_array_get_size(x_4);
x_341 = lean_usize_of_nat(x_340);
lean_dec(x_340);
x_342 = 0;
x_343 = x_4;
x_344 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_345 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_346 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_344, x_345, x_341, x_342, x_343);
x_347 = x_346;
x_348 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_349 = l_Lean_mkSepArray(x_347, x_348);
lean_dec(x_347);
x_350 = l_Array_empty___closed__1;
x_351 = l_Array_append___rarg(x_350, x_349);
lean_dec(x_349);
x_352 = l_Lean_nullKind___closed__2;
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_351);
x_354 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_355 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_355, 0, x_336);
lean_ctor_set(x_355, 1, x_354);
x_356 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_357 = lean_array_push(x_356, x_339);
x_358 = lean_array_push(x_357, x_345);
x_359 = lean_array_push(x_358, x_353);
x_360 = lean_array_push(x_359, x_345);
x_361 = lean_array_push(x_360, x_355);
x_362 = lean_array_push(x_361, x_1);
x_363 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_364, 0, x_363);
lean_ctor_set(x_364, 1, x_362);
x_365 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_365, 0, x_364);
lean_ctor_set(x_365, 1, x_337);
return x_365;
}
}
else
{
lean_object* x_366; uint8_t x_367; 
x_366 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
lean_dec(x_5);
x_367 = !lean_is_exclusive(x_366);
if (x_367 == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; size_t x_372; size_t x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_368 = lean_ctor_get(x_366, 0);
x_369 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_368);
x_370 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_370, 0, x_368);
lean_ctor_set(x_370, 1, x_369);
x_371 = lean_array_get_size(x_4);
x_372 = lean_usize_of_nat(x_371);
lean_dec(x_371);
x_373 = 0;
x_374 = x_4;
x_375 = l_Lean_Parser_Syntax_addPrec___closed__4;
x_376 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_377 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_375, x_376, x_372, x_373, x_374);
x_378 = x_377;
x_379 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_380 = l_Lean_mkSepArray(x_378, x_379);
lean_dec(x_378);
x_381 = l_Array_empty___closed__1;
x_382 = l_Array_append___rarg(x_381, x_380);
lean_dec(x_380);
x_383 = l_Lean_nullKind___closed__2;
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_382);
x_385 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_386 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_386, 0, x_368);
lean_ctor_set(x_386, 1, x_385);
x_387 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_388 = lean_array_push(x_387, x_370);
x_389 = lean_array_push(x_388, x_376);
x_390 = lean_array_push(x_389, x_384);
x_391 = lean_array_push(x_390, x_376);
x_392 = lean_array_push(x_391, x_386);
x_393 = lean_array_push(x_392, x_1);
x_394 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_394);
lean_ctor_set(x_395, 1, x_393);
lean_ctor_set(x_366, 0, x_395);
return x_366;
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; size_t x_401; size_t x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_396 = lean_ctor_get(x_366, 0);
x_397 = lean_ctor_get(x_366, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_366);
x_398 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_396);
x_399 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_399, 0, x_396);
lean_ctor_set(x_399, 1, x_398);
x_400 = lean_array_get_size(x_4);
x_401 = lean_usize_of_nat(x_400);
lean_dec(x_400);
x_402 = 0;
x_403 = x_4;
x_404 = l_Lean_Parser_Syntax_addPrec___closed__4;
x_405 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_406 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_404, x_405, x_401, x_402, x_403);
x_407 = x_406;
x_408 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_409 = l_Lean_mkSepArray(x_407, x_408);
lean_dec(x_407);
x_410 = l_Array_empty___closed__1;
x_411 = l_Array_append___rarg(x_410, x_409);
lean_dec(x_409);
x_412 = l_Lean_nullKind___closed__2;
x_413 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_411);
x_414 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_415 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_415, 0, x_396);
lean_ctor_set(x_415, 1, x_414);
x_416 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_417 = lean_array_push(x_416, x_399);
x_418 = lean_array_push(x_417, x_405);
x_419 = lean_array_push(x_418, x_413);
x_420 = lean_array_push(x_419, x_405);
x_421 = lean_array_push(x_420, x_415);
x_422 = lean_array_push(x_421, x_1);
x_423 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_422);
x_425 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_397);
return x_425;
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
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(x_2);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 5);
x_9 = l_Lean_replaceRef(x_1, x_8);
lean_dec(x_8);
lean_ctor_set(x_4, 5, x_9);
x_10 = l_Array_empty___closed__1;
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_3, x_6, x_10, x_4, x_5);
lean_dec(x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
x_14 = lean_ctor_get(x_4, 2);
x_15 = lean_ctor_get(x_4, 3);
x_16 = lean_ctor_get(x_4, 4);
x_17 = lean_ctor_get(x_4, 5);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_18 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_14);
lean_ctor_set(x_19, 3, x_15);
lean_ctor_set(x_19, 4, x_16);
lean_ctor_set(x_19, 5, x_18);
x_20 = l_Array_empty___closed__1;
x_21 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_3, x_6, x_20, x_19, x_5);
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
lean_object* x_5; uint8_t x_6; 
x_5 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getMatchAltsNumPatterns(x_2);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_3, 5);
x_8 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_ctor_set(x_3, 5, x_8);
x_9 = 1;
x_10 = l_Array_empty___closed__1;
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_9, x_5, x_10, x_3, x_4);
lean_dec(x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
x_16 = lean_ctor_get(x_3, 4);
x_17 = lean_ctor_get(x_3, 5);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_18 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_14);
lean_ctor_set(x_19, 3, x_15);
lean_ctor_set(x_19, 4, x_16);
lean_ctor_set(x_19, 5, x_18);
x_20 = 1;
x_21 = l_Array_empty___closed__1;
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_20, x_5, x_21, x_19, x_4);
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = l_myMacro____x40_Init_Notation___hyg_13362____closed__3;
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
lean_inc(x_2);
x_15 = lean_array_push(x_14, x_2);
x_16 = lean_array_push(x_15, x_11);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
x_18 = 1;
x_19 = x_4 + x_18;
x_20 = x_17;
x_21 = lean_array_uset(x_10, x_4, x_20);
x_4 = x_19;
x_5 = x_21;
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
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
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
x_20 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
lean_inc(x_18);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_Meta_mkArrow___closed__2;
x_23 = l_Lean_addMacroScope(x_15, x_22, x_12);
x_24 = lean_box(0);
x_25 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
lean_inc(x_23);
x_26 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_28 = lean_array_push(x_27, x_21);
x_29 = lean_array_push(x_28, x_26);
x_30 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_array_push(x_4, x_31);
lean_inc(x_5);
x_33 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_32, x_5, x_19);
lean_dec(x_10);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_35);
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_20);
x_40 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_38);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
lean_inc(x_38);
x_42 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_42, 0, x_38);
lean_ctor_set(x_42, 1, x_25);
lean_ctor_set(x_42, 2, x_23);
lean_ctor_set(x_42, 3, x_24);
x_43 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_44 = lean_array_push(x_43, x_42);
x_45 = l_Lean_nullKind___closed__2;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_38);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_50 = lean_array_push(x_49, x_46);
x_51 = lean_array_push(x_50, x_48);
x_52 = lean_array_push(x_51, x_34);
x_53 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_array_push(x_27, x_41);
x_56 = lean_array_push(x_55, x_54);
x_57 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_array_push(x_27, x_39);
x_60 = lean_array_push(x_59, x_58);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_30);
lean_ctor_set(x_61, 1, x_60);
lean_ctor_set(x_36, 0, x_61);
return x_36;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_62 = lean_ctor_get(x_36, 0);
x_63 = lean_ctor_get(x_36, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_36);
lean_inc(x_62);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_20);
x_65 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_62);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_62);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_62);
x_67 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_67, 0, x_62);
lean_ctor_set(x_67, 1, x_25);
lean_ctor_set(x_67, 2, x_23);
lean_ctor_set(x_67, 3, x_24);
x_68 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_69 = lean_array_push(x_68, x_67);
x_70 = l_Lean_nullKind___closed__2;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_62);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_75 = lean_array_push(x_74, x_71);
x_76 = lean_array_push(x_75, x_73);
x_77 = lean_array_push(x_76, x_34);
x_78 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = lean_array_push(x_27, x_66);
x_81 = lean_array_push(x_80, x_79);
x_82 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_array_push(x_27, x_64);
x_85 = lean_array_push(x_84, x_83);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_30);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_63);
return x_87;
}
}
else
{
uint8_t x_88; 
lean_dec(x_23);
lean_dec(x_5);
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
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_92 = lean_ctor_get(x_5, 0);
x_93 = lean_ctor_get(x_5, 1);
x_94 = lean_ctor_get(x_5, 3);
x_95 = lean_ctor_get(x_5, 4);
x_96 = lean_ctor_get(x_5, 5);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_5);
lean_inc(x_12);
lean_inc(x_93);
x_97 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_97, 0, x_92);
lean_ctor_set(x_97, 1, x_93);
lean_ctor_set(x_97, 2, x_12);
lean_ctor_set(x_97, 3, x_94);
lean_ctor_set(x_97, 4, x_95);
lean_ctor_set(x_97, 5, x_96);
x_98 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_97, x_6);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
lean_inc(x_99);
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_Meta_mkArrow___closed__2;
x_104 = l_Lean_addMacroScope(x_93, x_103, x_12);
x_105 = lean_box(0);
x_106 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
lean_inc(x_104);
x_107 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_107, 0, x_99);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_107, 2, x_104);
lean_ctor_set(x_107, 3, x_105);
x_108 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_109 = lean_array_push(x_108, x_102);
x_110 = lean_array_push(x_109, x_107);
x_111 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = lean_array_push(x_4, x_112);
lean_inc(x_97);
x_114 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_113, x_97, x_100);
lean_dec(x_10);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_97, x_116);
lean_dec(x_97);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
lean_inc(x_118);
x_121 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_101);
x_122 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_118);
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_118);
lean_ctor_set(x_123, 1, x_122);
lean_inc(x_118);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_118);
lean_ctor_set(x_124, 1, x_106);
lean_ctor_set(x_124, 2, x_104);
lean_ctor_set(x_124, 3, x_105);
x_125 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_126 = lean_array_push(x_125, x_124);
x_127 = l_Lean_nullKind___closed__2;
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
x_129 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_130 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_130, 0, x_118);
lean_ctor_set(x_130, 1, x_129);
x_131 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_132 = lean_array_push(x_131, x_128);
x_133 = lean_array_push(x_132, x_130);
x_134 = lean_array_push(x_133, x_115);
x_135 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
x_137 = lean_array_push(x_108, x_123);
x_138 = lean_array_push(x_137, x_136);
x_139 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
x_141 = lean_array_push(x_108, x_121);
x_142 = lean_array_push(x_141, x_140);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_111);
lean_ctor_set(x_143, 1, x_142);
if (lean_is_scalar(x_120)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_120;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_119);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_104);
lean_dec(x_97);
x_145 = lean_ctor_get(x_114, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_114, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_147 = x_114;
} else {
 lean_dec_ref(x_114);
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
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_149 = lean_ctor_get(x_6, 0);
x_150 = lean_ctor_get(x_6, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_6);
x_151 = lean_nat_add(x_149, x_9);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = lean_ctor_get(x_5, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_5, 1);
lean_inc(x_154);
x_155 = lean_ctor_get(x_5, 3);
lean_inc(x_155);
x_156 = lean_ctor_get(x_5, 4);
lean_inc(x_156);
x_157 = lean_ctor_get(x_5, 5);
lean_inc(x_157);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 x_158 = x_5;
} else {
 lean_dec_ref(x_5);
 x_158 = lean_box(0);
}
lean_inc(x_149);
lean_inc(x_154);
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(0, 6, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_153);
lean_ctor_set(x_159, 1, x_154);
lean_ctor_set(x_159, 2, x_149);
lean_ctor_set(x_159, 3, x_155);
lean_ctor_set(x_159, 4, x_156);
lean_ctor_set(x_159, 5, x_157);
x_160 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_159, x_152);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
lean_inc(x_161);
x_164 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_164, 0, x_161);
lean_ctor_set(x_164, 1, x_163);
x_165 = l_Lean_Meta_mkArrow___closed__2;
x_166 = l_Lean_addMacroScope(x_154, x_165, x_149);
x_167 = lean_box(0);
x_168 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
lean_inc(x_166);
x_169 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_169, 0, x_161);
lean_ctor_set(x_169, 1, x_168);
lean_ctor_set(x_169, 2, x_166);
lean_ctor_set(x_169, 3, x_167);
x_170 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_171 = lean_array_push(x_170, x_164);
x_172 = lean_array_push(x_171, x_169);
x_173 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
x_175 = lean_array_push(x_4, x_174);
lean_inc(x_159);
x_176 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_175, x_159, x_162);
lean_dec(x_10);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_159, x_178);
lean_dec(x_159);
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 x_182 = x_179;
} else {
 lean_dec_ref(x_179);
 x_182 = lean_box(0);
}
lean_inc(x_180);
x_183 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_163);
x_184 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_180);
x_185 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_185, 0, x_180);
lean_ctor_set(x_185, 1, x_184);
lean_inc(x_180);
x_186 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_186, 0, x_180);
lean_ctor_set(x_186, 1, x_168);
lean_ctor_set(x_186, 2, x_166);
lean_ctor_set(x_186, 3, x_167);
x_187 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_188 = lean_array_push(x_187, x_186);
x_189 = l_Lean_nullKind___closed__2;
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_188);
x_191 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_192 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_192, 0, x_180);
lean_ctor_set(x_192, 1, x_191);
x_193 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_194 = lean_array_push(x_193, x_190);
x_195 = lean_array_push(x_194, x_192);
x_196 = lean_array_push(x_195, x_177);
x_197 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_196);
x_199 = lean_array_push(x_170, x_185);
x_200 = lean_array_push(x_199, x_198);
x_201 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
x_203 = lean_array_push(x_170, x_183);
x_204 = lean_array_push(x_203, x_202);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_173);
lean_ctor_set(x_205, 1, x_204);
if (lean_is_scalar(x_182)) {
 x_206 = lean_alloc_ctor(0, 2, 0);
} else {
 x_206 = x_182;
}
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_181);
return x_206;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_166);
lean_dec(x_159);
x_207 = lean_ctor_get(x_176, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_176, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_209 = x_176;
} else {
 lean_dec_ref(x_176);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(1, 2, 0);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_208);
return x_210;
}
}
}
else
{
lean_object* x_211; uint8_t x_212; 
x_211 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_5, x_6);
x_212 = !lean_is_exclusive(x_211);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; size_t x_218; size_t x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_213 = lean_ctor_get(x_211, 0);
x_214 = lean_ctor_get(x_211, 1);
x_215 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_213);
x_216 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_array_get_size(x_4);
x_218 = lean_usize_of_nat(x_217);
lean_dec(x_217);
x_219 = 0;
x_220 = x_4;
x_221 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_222 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_223 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_221, x_222, x_218, x_219, x_220);
x_224 = x_223;
x_225 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_226 = l_Lean_mkSepArray(x_224, x_225);
lean_dec(x_224);
x_227 = l_Array_empty___closed__1;
x_228 = l_Array_append___rarg(x_227, x_226);
lean_dec(x_226);
x_229 = l_Lean_nullKind___closed__2;
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_228);
x_231 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_232 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_232, 0, x_213);
lean_ctor_set(x_232, 1, x_231);
x_233 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_234 = lean_array_push(x_233, x_216);
x_235 = lean_array_push(x_234, x_222);
x_236 = lean_array_push(x_235, x_230);
x_237 = lean_array_push(x_236, x_222);
x_238 = lean_array_push(x_237, x_232);
x_239 = lean_array_push(x_238, x_1);
x_240 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_239);
x_242 = l_Lean_Syntax_isNone(x_2);
if (x_242 == 0)
{
lean_object* x_243; 
lean_free_object(x_211);
x_243 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_2, x_241, x_5, x_214);
lean_dec(x_5);
return x_243;
}
else
{
lean_dec(x_5);
lean_ctor_set(x_211, 0, x_241);
return x_211;
}
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; size_t x_249; size_t x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; 
x_244 = lean_ctor_get(x_211, 0);
x_245 = lean_ctor_get(x_211, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_211);
x_246 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_244);
x_247 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_247, 0, x_244);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_array_get_size(x_4);
x_249 = lean_usize_of_nat(x_248);
lean_dec(x_248);
x_250 = 0;
x_251 = x_4;
x_252 = l_myMacro____x40_Init_Notation___hyg_1997____closed__2;
x_253 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_254 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_252, x_253, x_249, x_250, x_251);
x_255 = x_254;
x_256 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_257 = l_Lean_mkSepArray(x_255, x_256);
lean_dec(x_255);
x_258 = l_Array_empty___closed__1;
x_259 = l_Array_append___rarg(x_258, x_257);
lean_dec(x_257);
x_260 = l_Lean_nullKind___closed__2;
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_259);
x_262 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_263 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_263, 0, x_244);
lean_ctor_set(x_263, 1, x_262);
x_264 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_265 = lean_array_push(x_264, x_247);
x_266 = lean_array_push(x_265, x_253);
x_267 = lean_array_push(x_266, x_261);
x_268 = lean_array_push(x_267, x_253);
x_269 = lean_array_push(x_268, x_263);
x_270 = lean_array_push(x_269, x_1);
x_271 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_270);
x_273 = l_Lean_Syntax_isNone(x_2);
if (x_273 == 0)
{
lean_object* x_274; 
x_274 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_2, x_272, x_5, x_245);
lean_dec(x_5);
return x_274;
}
else
{
lean_object* x_275; 
lean_dec(x_5);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_245);
return x_275;
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
x_9 = l_Array_empty___closed__1;
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
lean_object* x_4; uint8_t x_5; 
x_4 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
lean_inc(x_9);
x_13 = l_Lean_Syntax_isOfKind(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
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
uint8_t x_16; lean_object* x_17; 
x_16 = 0;
x_17 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_9, x_16, x_2, x_3);
lean_dec(x_1);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_getArg(x_9, x_18);
x_20 = lean_unsigned_to_nat(2u);
x_21 = l_Lean_Syntax_getArg(x_9, x_20);
lean_dec(x_9);
x_22 = l_Lean_Syntax_getArgs(x_19);
lean_dec(x_19);
lean_inc(x_2);
x_23 = l_Lean_Elab_Term_expandFunBinders(x_22, x_21, x_2, x_3);
lean_dec(x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
uint8_t x_28; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_23);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_23, 0);
lean_dec(x_29);
x_30 = lean_box(1);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_30);
return x_23;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_dec(x_23);
x_32 = lean_box(1);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_dec(x_23);
x_35 = lean_ctor_get(x_24, 0);
lean_inc(x_35);
lean_dec(x_24);
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec(x_25);
x_37 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_34);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_39);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Array_empty___closed__1;
x_43 = l_Array_append___rarg(x_42, x_35);
lean_dec(x_35);
x_44 = l_Lean_nullKind___closed__2;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_39);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_49 = lean_array_push(x_48, x_45);
x_50 = lean_array_push(x_49, x_47);
x_51 = lean_array_push(x_50, x_36);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_10);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_54 = lean_array_push(x_53, x_41);
x_55 = lean_array_push(x_54, x_52);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_4);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_37, 0, x_56);
return x_37;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_57 = lean_ctor_get(x_37, 0);
x_58 = lean_ctor_get(x_37, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_37);
x_59 = l_myMacro____x40_Init_Notation___hyg_12862____closed__9;
lean_inc(x_57);
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Array_empty___closed__1;
x_62 = l_Array_append___rarg(x_61, x_35);
lean_dec(x_35);
x_63 = l_Lean_nullKind___closed__2;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_57);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_68 = lean_array_push(x_67, x_64);
x_69 = lean_array_push(x_68, x_66);
x_70 = lean_array_push(x_69, x_36);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_10);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_73 = lean_array_push(x_72, x_60);
x_74 = lean_array_push(x_73, x_71);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_4);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_58);
return x_76;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
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
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
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
lean_object* x_10; uint8_t x_11; 
x_10 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
lean_dec(x_1);
x_15 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_getArg(x_14, x_18);
x_20 = lean_unsigned_to_nat(2u);
x_21 = l_Lean_Syntax_getArg(x_14, x_20);
lean_dec(x_14);
x_22 = l_Lean_Syntax_getArgs(x_19);
lean_dec(x_19);
x_42 = lean_st_ref_get(x_8, x_9);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_7, 4);
lean_inc(x_46);
x_47 = lean_ctor_get(x_7, 5);
lean_inc(x_47);
lean_inc(x_45);
x_48 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_48, 0, x_45);
lean_inc(x_46);
x_49 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_49, 0, x_46);
lean_inc(x_45);
x_50 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_50, 0, x_45);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
x_51 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_51, 0, x_45);
lean_closure_set(x_51, 1, x_46);
lean_closure_set(x_51, 2, x_47);
lean_inc(x_45);
x_52 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_52, 0, x_45);
lean_closure_set(x_52, 1, x_46);
lean_closure_set(x_52, 2, x_47);
x_53 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_49);
lean_ctor_set(x_53, 2, x_50);
lean_ctor_set(x_53, 3, x_51);
lean_ctor_set(x_53, 4, x_52);
x_54 = x_53;
x_55 = lean_ctor_get(x_7, 3);
lean_inc(x_55);
x_56 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_44);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_7, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_7, 2);
lean_inc(x_60);
x_61 = lean_st_ref_get(x_8, x_58);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_environment_main_module(x_45);
x_66 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_66, 0, x_54);
lean_ctor_set(x_66, 1, x_65);
lean_ctor_set(x_66, 2, x_57);
lean_ctor_set(x_66, 3, x_59);
lean_ctor_set(x_66, 4, x_60);
lean_ctor_set(x_66, 5, x_55);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_64);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_Elab_Term_expandFunBinders(x_22, x_21, x_66, x_68);
lean_dec(x_22);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_st_ref_take(x_8, x_63);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = !lean_is_exclusive(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_77 = lean_ctor_get(x_74, 1);
lean_dec(x_77);
lean_ctor_set(x_74, 1, x_72);
x_78 = lean_st_ref_set(x_8, x_74, x_75);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_ctor_get(x_71, 1);
lean_inc(x_80);
lean_dec(x_71);
x_81 = l_List_reverse___rarg(x_80);
x_82 = l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__5(x_81, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_23 = x_70;
x_24 = x_83;
goto block_41;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_84 = lean_ctor_get(x_74, 0);
x_85 = lean_ctor_get(x_74, 2);
x_86 = lean_ctor_get(x_74, 3);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_74);
x_87 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_72);
lean_ctor_set(x_87, 2, x_85);
lean_ctor_set(x_87, 3, x_86);
x_88 = lean_st_ref_set(x_8, x_87, x_75);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_ctor_get(x_71, 1);
lean_inc(x_90);
lean_dec(x_71);
x_91 = l_List_reverse___rarg(x_90);
x_92 = l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__5(x_91, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_89);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_23 = x_70;
x_24 = x_93;
goto block_41;
}
block_41:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_array_get_size(x_26);
x_29 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_30 = 0;
x_31 = l_Array_empty___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_32 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__2(x_26, x_29, x_30, x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
lean_dec(x_26);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Quotation_precheck), 9, 1);
lean_closure_set(x_35, 0, x_27);
x_36 = l_Lean_Elab_Term_Quotation_withNewLocals___rarg(x_33, x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
lean_dec(x_33);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
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
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
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
lean_object* x_10; lean_object* x_11; lean_object* x_18; uint8_t x_19; 
x_18 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
lean_dec(x_1);
x_23 = l_myMacro____x40_Init_Notation___hyg_12862____closed__12;
lean_inc(x_22);
x_24 = l_Lean_Syntax_isOfKind(x_22, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Syntax_getArg(x_22, x_26);
x_28 = lean_unsigned_to_nat(2u);
x_29 = l_Lean_Syntax_getArg(x_22, x_28);
lean_dec(x_22);
x_30 = l_Lean_Syntax_getArgs(x_27);
lean_dec(x_27);
x_31 = lean_st_ref_get(x_8, x_9);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_7, 4);
lean_inc(x_35);
x_36 = lean_ctor_get(x_7, 5);
lean_inc(x_36);
lean_inc(x_34);
x_37 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_37, 0, x_34);
lean_inc(x_35);
x_38 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_38, 0, x_35);
lean_inc(x_34);
x_39 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_39, 0, x_34);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
x_40 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_40, 0, x_34);
lean_closure_set(x_40, 1, x_35);
lean_closure_set(x_40, 2, x_36);
lean_inc(x_34);
x_41 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_41, 0, x_34);
lean_closure_set(x_41, 1, x_35);
lean_closure_set(x_41, 2, x_36);
x_42 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_38);
lean_ctor_set(x_42, 2, x_39);
lean_ctor_set(x_42, 3, x_40);
lean_ctor_set(x_42, 4, x_41);
x_43 = x_42;
x_44 = lean_ctor_get(x_7, 3);
lean_inc(x_44);
x_45 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_33);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_7, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_7, 2);
lean_inc(x_49);
x_50 = lean_st_ref_get(x_8, x_47);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_environment_main_module(x_34);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_43);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_46);
lean_ctor_set(x_55, 3, x_48);
lean_ctor_set(x_55, 4, x_49);
lean_ctor_set(x_55, 5, x_44);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_Elab_Term_expandFunBinders(x_30, x_29, x_55, x_57);
lean_dec(x_30);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_st_ref_take(x_8, x_52);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = !lean_is_exclusive(x_63);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_66 = lean_ctor_get(x_63, 1);
lean_dec(x_66);
lean_ctor_set(x_63, 1, x_61);
x_67 = lean_st_ref_set(x_8, x_63, x_64);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_ctor_get(x_60, 1);
lean_inc(x_69);
lean_dec(x_60);
x_70 = l_List_reverse___rarg(x_69);
x_71 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_70, x_3, x_4, x_5, x_6, x_7, x_8, x_68);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_10 = x_59;
x_11 = x_72;
goto block_17;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_73 = lean_ctor_get(x_63, 0);
x_74 = lean_ctor_get(x_63, 2);
x_75 = lean_ctor_get(x_63, 3);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_63);
x_76 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_61);
lean_ctor_set(x_76, 2, x_74);
lean_ctor_set(x_76, 3, x_75);
x_77 = lean_st_ref_set(x_8, x_76, x_64);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_ctor_get(x_60, 1);
lean_inc(x_79);
lean_dec(x_60);
x_80 = l_List_reverse___rarg(x_79);
x_81 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_80, x_3, x_4, x_5, x_6, x_7, x_8, x_78);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_10 = x_59;
x_11 = x_82;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_myMacro____x40_Init_Notation___hyg_12862____closed__10;
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
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to infer 'let' declaration type");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
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
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3;
x_16 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_13, x_1, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (x_2 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_13);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
x_19 = lean_box(0);
x_20 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_21 = l_Lean_Elab_Term_elabTermEnsuringType(x_3, x_18, x_20, x_20, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 0;
lean_inc(x_7);
lean_inc(x_4);
x_25 = l_Lean_Meta_mkForallFVars(x_4, x_13, x_24, x_20, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_4);
x_28 = l_Lean_Meta_mkLambdaFVars(x_4, x_22, x_24, x_24, x_7, x_8, x_9, x_10, x_27);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_array_get_size(x_4);
lean_dec(x_4);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_array_get_size(x_4);
lean_dec(x_4);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_26);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_26);
lean_dec(x_4);
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
else
{
uint8_t x_44; 
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
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
uint8_t x_48; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_21);
if (x_48 == 0)
{
return x_21;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_21, 0);
x_50 = lean_ctor_get(x_21, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_21);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; uint8_t x_53; uint8_t x_54; lean_object* x_55; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_52 = lean_ctor_get(x_16, 1);
lean_inc(x_52);
lean_dec(x_16);
x_53 = 0;
x_54 = 1;
lean_inc(x_7);
lean_inc(x_4);
x_55 = l_Lean_Meta_mkForallFVars(x_4, x_13, x_53, x_54, x_7, x_8, x_9, x_10, x_52);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_56);
x_59 = 0;
x_60 = lean_box(0);
x_61 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_58, x_59, x_60, x_7, x_8, x_9, x_10, x_57);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_array_get_size(x_4);
lean_dec(x_4);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_56);
lean_ctor_set(x_66, 1, x_65);
lean_ctor_set(x_61, 0, x_66);
return x_61;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_61, 0);
x_68 = lean_ctor_get(x_61, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_61);
x_69 = lean_array_get_size(x_4);
lean_dec(x_4);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_56);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_68);
return x_72;
}
}
else
{
uint8_t x_73; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_73 = !lean_is_exclusive(x_55);
if (x_73 == 0)
{
return x_55;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_55, 0);
x_75 = lean_ctor_get(x_55, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_55);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_12);
if (x_77 == 0)
{
return x_12;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_12, 0);
x_79 = lean_ctor_get(x_12, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_12);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected error when elaborating 'let'");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
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
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__2;
x_27 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_22, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_22, 0, x_30);
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_22);
if (x_34 == 0)
{
return x_22;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_22, 0);
x_36 = lean_ctor_get(x_22, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_22);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_15);
if (x_42 == 0)
{
return x_15;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_15, 0);
x_44 = lean_ctor_get(x_15, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_15);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_23 = lean_array_push(x_22, x_4);
x_24 = 0;
x_25 = l_Lean_Meta_mkLambdaFVars(x_23, x_20, x_24, x_24, x_7, x_8, x_9, x_10, x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
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
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1217____closed__1;
x_2 = l_myMacro____x40_Init_Notation___hyg_14569____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("decl");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___closed__1;
x_2 = l_Lean_Elab_Term_elabLetDeclAux___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
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
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_49; lean_object* x_50; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
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
x_68 = lean_st_ref_get(x_14, x_21);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_69, 3);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get_uint8(x_70, sizeof(void*)*1);
lean_dec(x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_68, 1);
lean_inc(x_72);
lean_dec(x_68);
x_73 = 0;
x_49 = x_73;
x_50 = x_72;
goto block_67;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_74 = lean_ctor_get(x_68, 1);
lean_inc(x_74);
lean_dec(x_68);
x_75 = l_Lean_Elab_Term_elabLetDeclAux___closed__3;
x_76 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_75, x_9, x_10, x_11, x_12, x_13, x_14, x_74);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_unbox(x_77);
lean_dec(x_77);
x_49 = x_79;
x_50 = x_78;
goto block_67;
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
block_67:
{
if (x_49 == 0)
{
x_25 = x_50;
goto block_48;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_51 = l_Lean_Syntax_getId(x_1);
x_52 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_KernelException_toMessageData___closed__15;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkLeveErrorMessageCore___lambda__3___closed__5;
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_22);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_22);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
lean_inc(x_23);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_23);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_53);
x_64 = l_Lean_Elab_Term_elabLetDeclAux___closed__3;
x_65 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_64, x_63, x_9, x_10, x_11, x_12, x_13, x_14, x_50);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_25 = x_66;
goto block_48;
}
}
}
else
{
uint8_t x_80; 
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
x_80 = !lean_is_exclusive(x_18);
if (x_80 == 0)
{
return x_18;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_18, 0);
x_82 = lean_ctor_get(x_18, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_18);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_termIfLet___x3a_x3d__Then__Else_____closed__7;
x_17 = l_Lean_mkAtomFrom(x_1, x_16);
x_18 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
x_19 = lean_array_push(x_18, x_11);
x_20 = lean_array_push(x_19, x_13);
x_21 = lean_array_push(x_20, x_15);
x_22 = lean_array_push(x_21, x_17);
x_23 = lean_array_push(x_22, x_9);
x_24 = l_myMacro____x40_Init_Notation___hyg_14569____closed__6;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
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
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Syntax_getArg(x_1, x_28);
x_30 = lean_unsigned_to_nat(1u);
x_31 = l_Lean_Syntax_getArg(x_1, x_30);
x_32 = lean_unsigned_to_nat(2u);
x_33 = l_Lean_Syntax_getArg(x_1, x_32);
x_34 = l_termIfLet___x3a_x3d__Then__Else_____closed__7;
x_35 = l_Lean_mkAtomFrom(x_1, x_34);
x_36 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
x_37 = lean_array_push(x_36, x_29);
x_38 = lean_array_push(x_37, x_31);
x_39 = lean_array_push(x_38, x_33);
x_40 = lean_array_push(x_39, x_35);
x_41 = lean_array_push(x_40, x_26);
x_42 = l_myMacro____x40_Init_Notation___hyg_14569____closed__6;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_27);
return x_44;
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
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.elabLetDeclCore");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__1;
x_2 = l_Lean_Elab_Term_elabLetDeclCore___closed__1;
x_3 = lean_unsigned_to_nat(623u);
x_4 = lean_unsigned_to_nat(24u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_13, x_22);
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
lean_inc(x_23);
x_26 = l_Lean_Syntax_getKind(x_23);
x_27 = l_myMacro____x40_Init_Notation___hyg_14569____closed__6;
x_28 = lean_name_eq(x_26, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_Parser_Term_letPatDecl___closed__2;
x_30 = lean_name_eq(x_26, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_25);
x_31 = l_Lean_Parser_Term_letEqnsDecl___closed__2;
x_32 = lean_name_eq(x_26, x_31);
lean_dec(x_26);
if (x_32 == 0)
{
lean_object* x_33; 
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
x_33 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_11);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_34 = lean_st_ref_get(x_10, x_11);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_9, 4);
lean_inc(x_38);
x_39 = lean_ctor_get(x_9, 5);
lean_inc(x_39);
lean_inc(x_37);
x_40 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_40, 0, x_37);
lean_inc(x_38);
x_41 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_41, 0, x_38);
lean_inc(x_37);
x_42 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_42, 0, x_37);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
x_43 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_43, 0, x_37);
lean_closure_set(x_43, 1, x_38);
lean_closure_set(x_43, 2, x_39);
lean_inc(x_37);
x_44 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_44, 0, x_37);
lean_closure_set(x_44, 1, x_38);
lean_closure_set(x_44, 2, x_39);
x_45 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_42);
lean_ctor_set(x_45, 3, x_43);
lean_ctor_set(x_45, 4, x_44);
x_46 = x_45;
x_47 = lean_ctor_get(x_9, 3);
lean_inc(x_47);
x_48 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_36);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_9, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_9, 2);
lean_inc(x_52);
x_53 = lean_st_ref_get(x_10, x_50);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_environment_main_module(x_37);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_46);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_49);
lean_ctor_set(x_58, 3, x_51);
lean_ctor_set(x_58, 4, x_52);
lean_ctor_set(x_58, 5, x_47);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Lean_Elab_Term_expandLetEqnsDecl(x_23, x_58, x_60);
lean_dec(x_23);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_st_ref_take(x_10, x_55);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = !lean_is_exclusive(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_69 = lean_ctor_get(x_66, 1);
lean_dec(x_69);
lean_ctor_set(x_66, 1, x_64);
x_70 = lean_st_ref_set(x_10, x_66, x_67);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_ctor_get(x_63, 1);
lean_inc(x_72);
lean_dec(x_63);
x_73 = l_List_reverse___rarg(x_72);
x_74 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_73, x_5, x_6, x_7, x_8, x_9, x_10, x_71);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_14 = x_62;
x_15 = x_75;
goto block_21;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_76 = lean_ctor_get(x_66, 0);
x_77 = lean_ctor_get(x_66, 2);
x_78 = lean_ctor_get(x_66, 3);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_66);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_64);
lean_ctor_set(x_79, 2, x_77);
lean_ctor_set(x_79, 3, x_78);
x_80 = lean_st_ref_set(x_10, x_79, x_67);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = lean_ctor_get(x_63, 1);
lean_inc(x_82);
lean_dec(x_63);
x_83 = l_List_reverse___rarg(x_82);
x_84 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_83, x_5, x_6, x_7, x_8, x_9, x_10, x_81);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_14 = x_62;
x_15 = x_85;
goto block_21;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_26);
lean_dec(x_13);
x_86 = l_Lean_Syntax_getArg(x_23, x_22);
x_87 = lean_unsigned_to_nat(2u);
x_88 = l_Lean_Syntax_getArg(x_23, x_87);
x_89 = l_Lean_Elab_Term_expandOptType(x_1, x_88);
lean_dec(x_88);
x_90 = lean_unsigned_to_nat(4u);
x_91 = l_Lean_Syntax_getArg(x_23, x_90);
lean_dec(x_23);
x_92 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_9, x_10, x_11);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_97);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = l_myMacro____x40_Init_Notation___hyg_14569____closed__1;
lean_inc(x_93);
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_93);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_Meta_mkArrow___closed__2;
x_104 = l_Lean_addMacroScope(x_99, x_103, x_96);
x_105 = lean_box(0);
x_106 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
lean_inc(x_93);
x_107 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_107, 0, x_93);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_107, 2, x_104);
lean_ctor_set(x_107, 3, x_105);
x_108 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_93);
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_93);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_111 = lean_array_push(x_110, x_109);
x_112 = lean_array_push(x_111, x_89);
x_113 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_116 = lean_array_push(x_115, x_114);
x_117 = l_Lean_nullKind___closed__2;
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
x_119 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
lean_inc(x_93);
x_120 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_120, 0, x_93);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
lean_inc(x_107);
x_122 = lean_array_push(x_121, x_107);
x_123 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_124 = lean_array_push(x_122, x_123);
x_125 = lean_array_push(x_124, x_118);
x_126 = lean_array_push(x_125, x_120);
x_127 = lean_array_push(x_126, x_91);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_27);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_array_push(x_115, x_128);
x_130 = l_myMacro____x40_Init_Notation___hyg_14569____closed__4;
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
x_132 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
lean_inc(x_93);
x_133 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_133, 0, x_93);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_115, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_117);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_93);
x_137 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_137, 0, x_93);
lean_ctor_set(x_137, 1, x_136);
x_138 = l_myMacro____x40_Init_Notation___hyg_13362____closed__5;
x_139 = lean_array_push(x_138, x_107);
x_140 = l_myMacro____x40_Init_Notation___hyg_13362____closed__4;
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_139);
x_142 = lean_array_push(x_115, x_141);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_117);
lean_ctor_set(x_143, 1, x_142);
x_144 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_inc(x_93);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_93);
lean_ctor_set(x_145, 1, x_144);
x_146 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_93);
x_147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_147, 0, x_93);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_array_push(x_115, x_86);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_117);
lean_ctor_set(x_149, 1, x_148);
x_150 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
x_151 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_151, 0, x_93);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_153 = lean_array_push(x_152, x_147);
x_154 = lean_array_push(x_153, x_149);
x_155 = lean_array_push(x_154, x_151);
x_156 = lean_array_push(x_155, x_25);
x_157 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_156);
x_159 = lean_array_push(x_115, x_158);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_117);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_array_push(x_115, x_160);
x_162 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_165 = lean_array_push(x_164, x_137);
x_166 = lean_array_push(x_165, x_123);
x_167 = lean_array_push(x_166, x_143);
x_168 = lean_array_push(x_167, x_123);
x_169 = lean_array_push(x_168, x_145);
x_170 = lean_array_push(x_169, x_163);
x_171 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
x_173 = lean_array_push(x_152, x_102);
x_174 = lean_array_push(x_173, x_131);
x_175 = lean_array_push(x_174, x_135);
x_176 = lean_array_push(x_175, x_172);
x_177 = l_myMacro____x40_Init_Notation___hyg_14569____closed__2;
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
if (x_3 == 0)
{
if (x_4 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_179 = l_Lean_Parser_Term_let__fun___elambda__1___closed__2;
x_180 = l_Lean_Syntax_setKind(x_178, x_179);
lean_inc(x_180);
lean_inc(x_1);
x_181 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_181, 0, x_1);
lean_closure_set(x_181, 1, x_180);
lean_closure_set(x_181, 2, x_2);
x_182 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_180, x_181, x_5, x_6, x_7, x_8, x_9, x_10, x_100);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_178);
x_183 = l_Lean_instInhabitedSyntax;
x_184 = l_Lean_Elab_Term_elabLetDeclCore___closed__2;
x_185 = lean_panic_fn(x_183, x_184);
lean_inc(x_185);
lean_inc(x_1);
x_186 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_186, 0, x_1);
lean_closure_set(x_186, 1, x_185);
lean_closure_set(x_186, 2, x_2);
x_187 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_185, x_186, x_5, x_6, x_7, x_8, x_9, x_10, x_100);
return x_187;
}
}
else
{
if (x_4 == 0)
{
lean_object* x_188; lean_object* x_189; 
lean_inc(x_178);
lean_inc(x_1);
x_188 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_188, 0, x_1);
lean_closure_set(x_188, 1, x_178);
lean_closure_set(x_188, 2, x_2);
x_189 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_178, x_188, x_5, x_6, x_7, x_8, x_9, x_10, x_100);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_190 = l_Lean_Parser_Term_let__delayed___elambda__1___closed__2;
x_191 = l_Lean_Syntax_setKind(x_178, x_190);
lean_inc(x_191);
lean_inc(x_1);
x_192 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_192, 0, x_1);
lean_closure_set(x_192, 1, x_191);
lean_closure_set(x_192, 2, x_2);
x_193 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_191, x_192, x_5, x_6, x_7, x_8, x_9, x_10, x_100);
return x_193;
}
}
}
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_1);
x_194 = l_Lean_Elab_Term_mkLetIdDeclView(x_23);
lean_dec(x_23);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
x_197 = lean_ctor_get(x_194, 2);
lean_inc(x_197);
x_198 = lean_ctor_get(x_194, 3);
lean_inc(x_198);
lean_dec(x_194);
x_199 = l_Lean_Elab_Term_elabLetDeclAux(x_195, x_196, x_197, x_198, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_199;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_myMacro____x40_Init_Notation___hyg_14569____closed__2;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_Lean_Parser_Term_let__fun___elambda__1___closed__2;
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
x_1 = l_Lean_Elab_Term_mkTermElabAttributeUnsafe___closed__1;
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
x_3 = l_Lean_Parser_Term_let__delayed___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_5600_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_elabLetDeclAux___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
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
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__2___lambda__1___closed__6);
l_Lean_Elab_Term_quoteAutoTactic___closed__1 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__1);
l_Lean_Elab_Term_quoteAutoTactic___closed__2 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__2);
l_Lean_Elab_Term_quoteAutoTactic___closed__3 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__3);
l_Lean_Elab_Term_quoteAutoTactic___closed__4 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__4);
l_Lean_Elab_Term_quoteAutoTactic___closed__5 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__5);
l_Lean_Elab_Term_quoteAutoTactic___closed__6 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__6);
l_Lean_Elab_Term_quoteAutoTactic___closed__7 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__7);
l_Lean_Elab_Term_quoteAutoTactic___closed__8 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__8);
l_Lean_Elab_Term_quoteAutoTactic___closed__9 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__9);
l_Lean_Elab_Term_quoteAutoTactic___closed__10 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__10);
l_Lean_Elab_Term_quoteAutoTactic___closed__11 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__11);
l_Lean_Elab_Term_quoteAutoTactic___closed__12 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__12);
l_Lean_Elab_Term_quoteAutoTactic___closed__13 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__13);
l_Lean_Elab_Term_quoteAutoTactic___closed__14 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__14);
l_Lean_Elab_Term_quoteAutoTactic___closed__15 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__15);
l_Lean_Elab_Term_quoteAutoTactic___closed__16 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__16);
l_Lean_Elab_Term_quoteAutoTactic___closed__17 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__17();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__17);
l_Lean_Elab_Term_quoteAutoTactic___closed__18 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__18();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__18);
l_Lean_Elab_Term_quoteAutoTactic___closed__19 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__19();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__19);
l_Lean_Elab_Term_quoteAutoTactic___closed__20 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__20();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__20);
l_Lean_Elab_Term_quoteAutoTactic___closed__21 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__21();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__21);
l_Lean_Elab_Term_quoteAutoTactic___closed__22 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__22();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__22);
l_Lean_Elab_Term_quoteAutoTactic___closed__23 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__23();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__23);
l_Lean_Elab_Term_quoteAutoTactic___closed__24 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__24();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__24);
l_Lean_Elab_Term_quoteAutoTactic___closed__25 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__25();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__25);
l_Lean_Elab_Term_quoteAutoTactic___closed__26 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__26();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__26);
l_Lean_Elab_Term_quoteAutoTactic___closed__27 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__27();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__27);
l_Lean_Elab_Term_quoteAutoTactic___closed__28 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__28();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__28);
l_Lean_Elab_Term_quoteAutoTactic___closed__29 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__29();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__29);
l_Lean_Elab_Term_declareTacticSyntax___closed__1 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__1);
l_Lean_Elab_Term_declareTacticSyntax___closed__2 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__2);
l_Lean_Elab_Term_declareTacticSyntax___closed__3 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__3);
l_Lean_Elab_Term_declareTacticSyntax___closed__4 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__4);
l_Lean_Elab_Term_declareTacticSyntax___closed__5 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___boxed__const__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_matchBinder___boxed__const__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__1 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__1();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__1);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__2 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__2();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__2);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__3 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__3();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__3);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__4 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__4();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102____closed__4);
res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_1102_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_checkBinderAnnotations = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_checkBinderAnnotations);
lean_dec_ref(res);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__1);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__2);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabForall(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabArrow___closed__1 = _init_l_Lean_Elab_Term_elabArrow___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___closed__1);
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
l_Lean_Elab_Term_expandWhereDecls___closed__1 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2);
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
l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3);
l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__2___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___closed__3 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__3);
l_Lean_Elab_Term_elabLetDeclCore___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__1);
l_Lean_Elab_Term_elabLetDeclCore___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__2);
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
