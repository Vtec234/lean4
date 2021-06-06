// Lean compiler output
// Module: Lean.Elab.BuiltinNotation
// Imports: Init Init.Data.ToString Lean.Compiler.BorrowedAnnotation Lean.Meta.KAbstract Lean.Meta.Transform Lean.Elab.Term Lean.Elab.SyntheticMVars
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
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Term_elabAnonymousCtor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_anonymousCtor___closed__2;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_unreachable___closed__2;
extern lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5___rarg(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_expandCDot_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_trailing__parser___closed__2;
lean_object* l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst_match__1___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAssert___closed__1;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getDeclName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_leading__parser___closed__2;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabSorry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_panic___closed__2;
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow___closed__3;
lean_object* l_Lean_Elab_Term_elabLeadingParserMacro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSubst___closed__2;
lean_object* l_Lean_Elab_Term_expandAssert_match__1(lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoindex(lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAssert___closed__2;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_subst___closed__2;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_interpolatedStrKind;
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSubst___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAssert___closed__3;
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen(lean_object*);
lean_object* l_Lean_Elab_Term_expandDbgTrace___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSorry(lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandParen___closed__1;
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go_match__1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave___closed__3;
lean_object* l_Lean_Elab_Term_expandHave___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
extern lean_object* l_Lean_nameLitKind;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_borrowed___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabLeadingParserMacro___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAssert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__1;
lean_object* l_Lean_Elab_Term_expandHave___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandParen___closed__3;
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__3;
lean_object* l_Lean_Elab_Term_expandAssert_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandParen(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave(lean_object*);
lean_object* l_Lean_Syntax_SepArray_getElems___rarg(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabPanic(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNoindex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow___closed__2;
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave___closed__1;
extern lean_object* l_Lean_numLitKind;
lean_object* l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__3;
lean_object* l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandParen___closed__2;
lean_object* l_Lean_Elab_Term_expandShow___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__3;
lean_object* l_Lean_Elab_Term_expandDbgTrace(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave___closed__2;
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_assert___closed__2;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_sorry___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_stateRefT___closed__2;
lean_object* l_Lean_Elab_Term_expandHave___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__1;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandUnreachable(lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__2(lean_object*);
lean_object* l_Lean_Elab_getRefPosition___at_Lean_Elab_Term_elabPanic___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandSuffices(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen___closed__2;
lean_object* l_Lean_Elab_Term_elabNoindex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst_match__2(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor(lean_object*);
lean_object* l_Nat_repr(lean_object*);
uint8_t l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__2;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen___closed__1;
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__2;
lean_object* l_Lean_Elab_Term_expandHave___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Term_elabAnonymousCtor___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandShow(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__2;
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__2;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__1;
lean_object* l_Lean_Elab_Term_elabSubst_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabLeadingParserMacro___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l___regBuiltin_Lean_Elab_Term_elabPanic___closed__2;
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_elabAnonymousCtor___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBorrowed(lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAssert___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSorry___closed__1;
lean_object* l_Lean_Elab_Term_elabSubst___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro(lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabStateRefT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_beq___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___spec__1(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSorry___closed__2;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__2(lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabStateRefT___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Elab_Term_expandHave(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___boxed(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__3;
lean_object* l_Lean_Elab_Term_elabPanic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_noindex___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabSubst___closed__3;
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandParen(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* lean_environment_main_module(lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_paren___closed__1;
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabAnonymousCtor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__3;
lean_object* l_Lean_Elab_Term_elabStateRefT___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSubst(lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Term_elabAnonymousCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__2;
lean_object* l_Lean_Elab_Term_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___spec__1(lean_object*, size_t, size_t);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandUnreachable___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro(lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__3;
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandUnreachable___boxed(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen___closed__3;
lean_object* l_Lean_Elab_Term_expandUnreachable___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabStateRefT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabPanic___closed__3;
lean_object* l_Lean_Elab_Term_expandSuffices(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandUnreachable(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__3;
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_beq___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__2;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__2;
lean_object* l_Lean_Elab_Term_expandHave_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_expandCDotArg_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfHasMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBorrowed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabPanic___closed__1;
extern lean_object* l_Lean_levelOne;
lean_object* l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__2;
uint8_t l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAssert(lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandDbgTrace(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_elabAnonymousCtor___spec__4(lean_object*);
lean_object* l_Lean_Elab_getRefPosition___at_Lean_Elab_Term_elabPanic___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__1;
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStateRefT(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabAnonymousCtor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_dbgTrace___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__1;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_have___closed__2;
lean_object* l_Lean_Elab_Term_expandHave___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_show___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__2;
lean_object* l_Lean_Syntax_reprint(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSubst___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__1;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_suffices___closed__2;
lean_object* l_Lean_markBorrowed(lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSorry___closed__3;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Term_elabAnonymousCtor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__3;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabAnonymousCtor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabAnonymousCtor_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabAnonymousCtor_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabAnonymousCtor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Term_elabAnonymousCtor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 6)
{
uint8_t x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_10);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_mk_string("'");
x_19 = l_Lean_stringToMessageData(x_18);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = l_Lean_mkConst(x_1, x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("' is not a constructor");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_elabAnonymousCtor___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_27;
}
}
else
{
uint8_t x_28; 
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Term_elabAnonymousCtor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_nat_dec_le(x_13, x_4);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_3, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_3, x_17);
lean_dec(x_3);
x_19 = l_Lean_instInhabitedExpr;
x_20 = lean_array_get(x_19, x_1, x_4);
lean_inc(x_8);
x_21 = l_Lean_Meta_getFVarLocalDecl(x_20, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_binderInfo(x_22);
lean_dec(x_22);
x_25 = l_Lean_BinderInfo_isExplicit(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_2, 2);
x_27 = lean_nat_add(x_4, x_26);
lean_dec(x_4);
x_3 = x_18;
x_4 = x_27;
x_12 = x_23;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_30 = lean_ctor_get(x_2, 2);
x_31 = lean_nat_add(x_4, x_30);
lean_dec(x_4);
x_3 = x_18;
x_4 = x_31;
x_5 = x_29;
x_12 = x_23;
goto _start;
}
}
else
{
uint8_t x_33; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
x_33 = !lean_is_exclusive(x_21);
if (x_33 == 0)
{
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
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
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_5);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
else
{
lean_object* x_38; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_12);
return x_38;
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_elabAnonymousCtor___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1), 10, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_10, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_elabAnonymousCtor___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_elabAnonymousCtor___spec__4___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_array_get_size(x_2);
x_13 = lean_unsigned_to_nat(1u);
lean_inc(x_12);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_Range_forIn_loop___at_Lean_Elab_Term_elabAnonymousCtor___spec__3(x_2, x_14, x_12, x_11, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
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
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_2);
x_12 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_3, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_3);
x_17 = lean_nat_dec_eq(x_16, x_4);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_eq(x_4, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; size_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_4, x_20);
lean_inc(x_21);
lean_inc(x_3);
x_22 = l_Array_toSubarray___rarg(x_3, x_21, x_16);
x_23 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_13, x_14, x_15);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_mk_string("⟨");
lean_inc(x_24);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_box(0);
x_33 = lean_mk_string("null");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_empty_array_with_capacity(x_18);
x_36 = l_Array_ofSubarray___rarg(x_22);
lean_dec(x_22);
x_37 = lean_array_get_size(x_36);
x_38 = lean_usize_of_nat(x_37);
lean_dec(x_37);
x_39 = 0;
x_40 = x_36;
x_41 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_38, x_39, x_40);
x_42 = x_41;
x_43 = lean_box(2);
x_44 = lean_mk_string(",");
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_mkSepArray(x_42, x_45);
lean_dec(x_42);
lean_inc(x_35);
x_47 = l_Array_append___rarg(x_35, x_46);
lean_dec(x_46);
lean_inc(x_34);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_34);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("⟩");
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_24);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_unsigned_to_nat(3u);
x_52 = lean_mk_empty_array_with_capacity(x_51);
x_53 = lean_array_push(x_52, x_31);
x_54 = lean_array_push(x_53, x_48);
x_55 = lean_array_push(x_54, x_50);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_5);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Array_toSubarray___rarg(x_3, x_18, x_21);
x_58 = l_Array_ofSubarray___rarg(x_57);
lean_dec(x_57);
x_59 = lean_array_push(x_58, x_56);
x_60 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_13, x_14, x_29);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_61);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_mk_string("app");
x_67 = lean_name_mk_string(x_6, x_66);
x_68 = l_Lean_mkCIdentFrom(x_1, x_7);
x_69 = l_Array_append___rarg(x_35, x_59);
lean_dec(x_59);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_34);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_unsigned_to_nat(2u);
x_72 = lean_mk_empty_array_with_capacity(x_71);
x_73 = lean_array_push(x_72, x_68);
x_74 = lean_array_push(x_73, x_70);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_67);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__2(x_1, x_2, x_75, x_9, x_10, x_11, x_12, x_13, x_14, x_65);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = lean_mk_string("invalid constructor ⟨...⟩, insufficient number of arguments, constructs '");
x_78 = l_Lean_stringToMessageData(x_77);
lean_dec(x_77);
x_79 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_79, 0, x_7);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_mk_string("' does not have explicit fields, but #");
x_82 = l_Lean_stringToMessageData(x_81);
lean_dec(x_81);
x_83 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_16);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string(" provided");
x_88 = l_Lean_stringToMessageData(x_87);
lean_dec(x_87);
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(x_89, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
return x_90;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_90, 0);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_90);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_16);
lean_dec(x_5);
x_95 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_13, x_14, x_15);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_96);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_98);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_101 = lean_mk_string("app");
x_102 = lean_name_mk_string(x_6, x_101);
x_103 = l_Lean_mkCIdentFrom(x_1, x_7);
x_104 = lean_box(0);
x_105 = lean_mk_string("null");
x_106 = lean_name_mk_string(x_104, x_105);
x_107 = lean_unsigned_to_nat(0u);
x_108 = lean_mk_empty_array_with_capacity(x_107);
x_109 = l_Array_append___rarg(x_108, x_3);
lean_dec(x_3);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_106);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_unsigned_to_nat(2u);
x_112 = lean_mk_empty_array_with_capacity(x_111);
x_113 = lean_array_push(x_112, x_103);
x_114 = lean_array_push(x_113, x_110);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_102);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__2(x_1, x_2, x_115, x_9, x_10, x_11, x_12, x_13, x_14, x_100);
return x_116;
}
}
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_17 = lean_mk_string("anonymousCtor");
lean_inc(x_16);
x_18 = lean_name_mk_string(x_16, x_17);
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_16);
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
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = l_Lean_Syntax_getArgs(x_22);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_24 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_24) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be known");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_ctor_get(x_2, 0);
lean_inc(x_30);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_31 = l_Lean_Meta_whnf(x_30, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Expr_getAppFn(x_32);
if (lean_obj_tag(x_34) == 4)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_get(x_8, x_33);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_environment_find(x_39, x_35);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be an inductive type ");
x_42 = l_Lean_stringToMessageData(x_41);
lean_dec(x_41);
x_43 = l_Lean_indentExpr(x_32);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_48;
}
else
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_40, 0);
lean_inc(x_49);
lean_dec(x_40);
if (lean_obj_tag(x_49) == 5)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 4);
lean_inc(x_51);
lean_dec(x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be an inductive type with only one constructor ");
x_53 = l_Lean_stringToMessageData(x_52);
lean_dec(x_52);
x_54 = l_Lean_indentExpr(x_32);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_mk_string("");
x_57 = l_Lean_stringToMessageData(x_56);
lean_dec(x_56);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_59;
}
else
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_51, 1);
lean_inc(x_60);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_32);
x_61 = lean_ctor_get(x_51, 0);
lean_inc(x_61);
lean_dec(x_51);
lean_inc(x_3);
lean_inc(x_61);
x_62 = l_Lean_getConstInfoCtor___at_Lean_Elab_Term_elabAnonymousCtor___spec__1(x_61, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_65, 2);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabAnonymousCtor___lambda__1___boxed), 10, 1);
lean_closure_set(x_67, 0, x_63);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_68 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_elabAnonymousCtor___spec__4___rarg(x_66, x_67, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_Syntax_SepArray_getElems___rarg(x_23);
lean_dec(x_23);
x_72 = lean_array_get_size(x_71);
x_73 = lean_nat_dec_lt(x_72, x_69);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_72);
x_74 = lean_box(0);
x_75 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__3(x_1, x_2, x_71, x_69, x_18, x_16, x_61, x_74, x_3, x_4, x_5, x_6, x_7, x_8, x_70);
lean_dec(x_69);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
lean_dec(x_71);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_76 = lean_mk_string("invalid constructor ⟨...⟩, insufficient number of arguments, constructs '");
x_77 = l_Lean_stringToMessageData(x_76);
lean_dec(x_76);
x_78 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_78, 0, x_61);
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_mk_string("' has #");
x_81 = l_Lean_stringToMessageData(x_80);
lean_dec(x_80);
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_69);
x_84 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_string(" explicit fields, but only #");
x_87 = l_Lean_stringToMessageData(x_86);
lean_dec(x_86);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_72);
x_90 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_mk_string(" provided");
x_93 = l_Lean_stringToMessageData(x_92);
lean_dec(x_92);
x_94 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_94, x_3, x_4, x_5, x_6, x_7, x_8, x_70);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
return x_95;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_95);
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
lean_dec(x_61);
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_68);
if (x_100 == 0)
{
return x_68;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_68, 0);
x_102 = lean_ctor_get(x_68, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_68);
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
lean_dec(x_61);
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_62);
if (x_104 == 0)
{
return x_62;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_62, 0);
x_106 = lean_ctor_get(x_62, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_62);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_60);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_108 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be an inductive type with only one constructor ");
x_109 = l_Lean_stringToMessageData(x_108);
lean_dec(x_108);
x_110 = l_Lean_indentExpr(x_32);
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_mk_string("");
x_113 = l_Lean_stringToMessageData(x_112);
lean_dec(x_112);
x_114 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_113);
x_115 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_115;
}
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_49);
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_116 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be an inductive type ");
x_117 = l_Lean_stringToMessageData(x_116);
lean_dec(x_116);
x_118 = l_Lean_indentExpr(x_32);
x_119 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_mk_string("");
x_121 = l_Lean_stringToMessageData(x_120);
lean_dec(x_120);
x_122 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_121);
x_123 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_122, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_123;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_124 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be an inductive type ");
x_125 = l_Lean_stringToMessageData(x_124);
lean_dec(x_124);
x_126 = l_Lean_indentExpr(x_32);
x_127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_mk_string("");
x_129 = l_Lean_stringToMessageData(x_128);
lean_dec(x_128);
x_130 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_129);
x_131 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_130, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_131;
}
}
else
{
uint8_t x_132; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_31);
if (x_132 == 0)
{
return x_31;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_31, 0);
x_134 = lean_ctor_get(x_31, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_31);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
}
else
{
uint8_t x_136; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_136 = !lean_is_exclusive(x_24);
if (x_136 == 0)
{
return x_24;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_24, 0);
x_138 = lean_ctor_get(x_24, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_24);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabAnonymousCtor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_elabAnonymousCtor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Term_elabAnonymousCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Term_elabAnonymousCtor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Term_elabAnonymousCtor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at_Lean_Elab_Term_elabAnonymousCtor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
lean_dec(x_4);
return x_16;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabAnonymousCtor");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabAnonymousCtor), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_anonymousCtor___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabBorrowed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_17 = lean_mk_string("borrowed");
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
lean_dec(x_2);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
lean_dec(x_1);
x_23 = 1;
x_24 = l_Lean_Elab_Term_elabTerm(x_22, x_2, x_23, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = l_Lean_markBorrowed(x_26);
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
x_30 = l_Lean_markBorrowed(x_28);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
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
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabBorrowed");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBorrowed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabBorrowed(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_borrowed___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_expandShow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Term");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("show");
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
lean_dec(x_8);
lean_dec(x_1);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
x_20 = lean_mk_string("fromTerm");
lean_inc(x_10);
x_21 = lean_name_mk_string(x_10, x_20);
lean_inc(x_19);
x_22 = l_Lean_Syntax_isOfKind(x_19, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_1);
x_23 = lean_mk_string("byTactic");
x_24 = lean_name_mk_string(x_10, x_23);
lean_inc(x_19);
x_25 = l_Lean_Syntax_isOfKind(x_19, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
x_26 = lean_box(1);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Syntax_getArg(x_19, x_28);
x_30 = l_Lean_Syntax_getArg(x_19, x_16);
lean_dec(x_19);
x_31 = lean_mk_string("Tactic");
x_32 = lean_name_mk_string(x_8, x_31);
x_33 = lean_mk_string("tacticSeq");
x_34 = lean_name_mk_string(x_32, x_33);
lean_inc(x_30);
x_35 = l_Lean_Syntax_isOfKind(x_30, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
x_36 = lean_box(1);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
else
{
lean_object* x_38; uint8_t x_39; 
x_38 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_11);
x_42 = lean_mk_string("from");
lean_inc(x_40);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_Syntax_getHeadInfo_x3f(x_29);
lean_dec(x_29);
x_45 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_45);
x_46 = lean_array_push(x_45, x_43);
x_47 = lean_unsigned_to_nat(3u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
x_49 = lean_array_push(x_48, x_41);
x_50 = lean_array_push(x_49, x_17);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_51 = lean_mk_string("by");
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_push(x_45, x_52);
x_54 = lean_array_push(x_53, x_30);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_24);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_array_push(x_46, x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_21);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_array_push(x_50, x_57);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_12);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_38, 0, x_59);
return x_38;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_40);
x_60 = lean_ctor_get(x_44, 0);
lean_inc(x_60);
lean_dec(x_44);
x_61 = lean_mk_string("by");
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_array_push(x_45, x_62);
x_64 = lean_array_push(x_63, x_30);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_24);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_array_push(x_46, x_65);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_21);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_push(x_50, x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_12);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_38, 0, x_69);
return x_38;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_70 = lean_ctor_get(x_38, 0);
x_71 = lean_ctor_get(x_38, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_38);
lean_inc(x_70);
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_11);
x_73 = lean_mk_string("from");
lean_inc(x_70);
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_70);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_Syntax_getHeadInfo_x3f(x_29);
lean_dec(x_29);
x_76 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_76);
x_77 = lean_array_push(x_76, x_74);
x_78 = lean_unsigned_to_nat(3u);
x_79 = lean_mk_empty_array_with_capacity(x_78);
x_80 = lean_array_push(x_79, x_72);
x_81 = lean_array_push(x_80, x_17);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_82 = lean_mk_string("by");
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_70);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_array_push(x_76, x_83);
x_85 = lean_array_push(x_84, x_30);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_24);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_array_push(x_77, x_86);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_21);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_array_push(x_81, x_88);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_12);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_71);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_70);
x_92 = lean_ctor_get(x_75, 0);
lean_inc(x_92);
lean_dec(x_75);
x_93 = lean_mk_string("by");
x_94 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_76, x_94);
x_96 = lean_array_push(x_95, x_30);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_24);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_push(x_77, x_97);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_21);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_81, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_12);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_71);
return x_102;
}
}
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
x_103 = l_Lean_Syntax_getArg(x_19, x_16);
lean_dec(x_19);
x_104 = lean_mk_string("this");
x_105 = lean_name_mk_string(x_4, x_104);
x_106 = l_Lean_mkIdentFrom(x_1, x_105);
lean_dec(x_1);
x_107 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_109 = lean_ctor_get(x_107, 0);
x_110 = lean_mk_string("let_fun");
lean_inc(x_110);
lean_inc(x_10);
x_111 = lean_name_mk_string(x_10, x_110);
lean_inc(x_109);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
x_113 = lean_mk_string("letDecl");
lean_inc(x_10);
x_114 = lean_name_mk_string(x_10, x_113);
x_115 = lean_mk_string("letIdDecl");
lean_inc(x_10);
x_116 = lean_name_mk_string(x_10, x_115);
x_117 = lean_mk_string("null");
x_118 = lean_name_mk_string(x_4, x_117);
x_119 = lean_unsigned_to_nat(0u);
x_120 = lean_mk_empty_array_with_capacity(x_119);
lean_inc(x_118);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_mk_string("typeSpec");
x_123 = lean_name_mk_string(x_10, x_122);
x_124 = lean_mk_string(":");
lean_inc(x_109);
x_125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_125, 0, x_109);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_mk_empty_array_with_capacity(x_18);
x_127 = lean_array_push(x_126, x_125);
x_128 = lean_array_push(x_127, x_17);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_123);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_130);
x_131 = lean_array_push(x_130, x_129);
lean_inc(x_118);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_118);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string(":=");
lean_inc(x_109);
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_109);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_unsigned_to_nat(5u);
x_136 = lean_mk_empty_array_with_capacity(x_135);
lean_inc(x_106);
x_137 = lean_array_push(x_136, x_106);
x_138 = lean_array_push(x_137, x_121);
x_139 = lean_array_push(x_138, x_132);
x_140 = lean_array_push(x_139, x_134);
x_141 = lean_array_push(x_140, x_103);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_116);
lean_ctor_set(x_142, 1, x_141);
lean_inc(x_130);
x_143 = lean_array_push(x_130, x_142);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_114);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_mk_string(";");
x_146 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_146, 0, x_109);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_array_push(x_130, x_146);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_118);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_unsigned_to_nat(4u);
x_150 = lean_mk_empty_array_with_capacity(x_149);
x_151 = lean_array_push(x_150, x_112);
x_152 = lean_array_push(x_151, x_144);
x_153 = lean_array_push(x_152, x_148);
x_154 = lean_array_push(x_153, x_106);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_111);
lean_ctor_set(x_155, 1, x_154);
lean_ctor_set(x_107, 0, x_155);
return x_107;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_156 = lean_ctor_get(x_107, 0);
x_157 = lean_ctor_get(x_107, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_107);
x_158 = lean_mk_string("let_fun");
lean_inc(x_158);
lean_inc(x_10);
x_159 = lean_name_mk_string(x_10, x_158);
lean_inc(x_156);
x_160 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_160, 0, x_156);
lean_ctor_set(x_160, 1, x_158);
x_161 = lean_mk_string("letDecl");
lean_inc(x_10);
x_162 = lean_name_mk_string(x_10, x_161);
x_163 = lean_mk_string("letIdDecl");
lean_inc(x_10);
x_164 = lean_name_mk_string(x_10, x_163);
x_165 = lean_mk_string("null");
x_166 = lean_name_mk_string(x_4, x_165);
x_167 = lean_unsigned_to_nat(0u);
x_168 = lean_mk_empty_array_with_capacity(x_167);
lean_inc(x_166);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_mk_string("typeSpec");
x_171 = lean_name_mk_string(x_10, x_170);
x_172 = lean_mk_string(":");
lean_inc(x_156);
x_173 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_173, 0, x_156);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_empty_array_with_capacity(x_18);
x_175 = lean_array_push(x_174, x_173);
x_176 = lean_array_push(x_175, x_17);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_171);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_178);
x_179 = lean_array_push(x_178, x_177);
lean_inc(x_166);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_166);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_mk_string(":=");
lean_inc(x_156);
x_182 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_182, 0, x_156);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_unsigned_to_nat(5u);
x_184 = lean_mk_empty_array_with_capacity(x_183);
lean_inc(x_106);
x_185 = lean_array_push(x_184, x_106);
x_186 = lean_array_push(x_185, x_169);
x_187 = lean_array_push(x_186, x_180);
x_188 = lean_array_push(x_187, x_182);
x_189 = lean_array_push(x_188, x_103);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_164);
lean_ctor_set(x_190, 1, x_189);
lean_inc(x_178);
x_191 = lean_array_push(x_178, x_190);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_162);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_mk_string(";");
x_194 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_194, 0, x_156);
lean_ctor_set(x_194, 1, x_193);
x_195 = lean_array_push(x_178, x_194);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_166);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_unsigned_to_nat(4u);
x_198 = lean_mk_empty_array_with_capacity(x_197);
x_199 = lean_array_push(x_198, x_160);
x_200 = lean_array_push(x_199, x_192);
x_201 = lean_array_push(x_200, x_196);
x_202 = lean_array_push(x_201, x_106);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_159);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_157);
return x_204;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandShow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandShow(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandShow");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandShow___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandShow___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_show___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandShow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandShow___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_expandHave_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_expandHave_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandHave_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_unsigned_to_nat(3u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_mk_string("let_fun");
lean_inc(x_14);
lean_inc(x_2);
x_15 = lean_name_mk_string(x_2, x_14);
lean_inc(x_13);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_mk_string("letDecl");
x_18 = lean_name_mk_string(x_2, x_17);
x_19 = lean_box(0);
x_20 = lean_mk_string("null");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_21);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_mk_string(":=");
lean_inc(x_13);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_13);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_unsigned_to_nat(5u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_array_push(x_28, x_3);
lean_inc(x_24);
x_30 = lean_array_push(x_29, x_24);
x_31 = lean_array_push(x_30, x_24);
x_32 = lean_array_push(x_31, x_26);
x_33 = lean_array_push(x_32, x_4);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_5);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_inc(x_36);
x_37 = lean_array_push(x_36, x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_18);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_string(";");
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_36, x_40);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_21);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_mk_empty_array_with_capacity(x_43);
x_45 = lean_array_push(x_44, x_16);
x_46 = lean_array_push(x_45, x_38);
x_47 = lean_array_push(x_46, x_42);
x_48 = lean_array_push(x_47, x_10);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_15);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_11, 0, x_49);
return x_11;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_50 = lean_ctor_get(x_11, 0);
x_51 = lean_ctor_get(x_11, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_11);
x_52 = lean_mk_string("let_fun");
lean_inc(x_52);
lean_inc(x_2);
x_53 = lean_name_mk_string(x_2, x_52);
lean_inc(x_50);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_50);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_mk_string("letDecl");
x_56 = lean_name_mk_string(x_2, x_55);
x_57 = lean_box(0);
x_58 = lean_mk_string("null");
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
lean_inc(x_59);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string(":=");
lean_inc(x_50);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_50);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_unsigned_to_nat(5u);
x_66 = lean_mk_empty_array_with_capacity(x_65);
x_67 = lean_array_push(x_66, x_3);
lean_inc(x_62);
x_68 = lean_array_push(x_67, x_62);
x_69 = lean_array_push(x_68, x_62);
x_70 = lean_array_push(x_69, x_64);
x_71 = lean_array_push(x_70, x_4);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_5);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_mk_empty_array_with_capacity(x_73);
lean_inc(x_74);
x_75 = lean_array_push(x_74, x_72);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_56);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_mk_string(";");
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_50);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_array_push(x_74, x_78);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_59);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_unsigned_to_nat(4u);
x_82 = lean_mk_empty_array_with_capacity(x_81);
x_83 = lean_array_push(x_82, x_54);
x_84 = lean_array_push(x_83, x_76);
x_85 = lean_array_push(x_84, x_80);
x_86 = lean_array_push(x_85, x_10);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_53);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_51);
return x_88;
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_mk_string("have");
lean_inc(x_16);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_box(0);
x_20 = lean_mk_string("null");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_unsigned_to_nat(2u);
x_26 = lean_mk_empty_array_with_capacity(x_25);
lean_inc(x_26);
x_27 = lean_array_push(x_26, x_2);
x_28 = lean_array_push(x_27, x_24);
lean_inc(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_empty_array_with_capacity(x_12);
x_31 = lean_array_push(x_30, x_29);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_mk_empty_array_with_capacity(x_32);
x_34 = lean_mk_string(";");
lean_inc(x_16);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_16);
lean_ctor_set(x_35, 1, x_34);
lean_inc(x_33);
x_36 = lean_array_push(x_33, x_35);
lean_inc(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_21);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_unsigned_to_nat(4u);
x_39 = lean_mk_empty_array_with_capacity(x_38);
x_40 = lean_array_push(x_39, x_18);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_8);
lean_inc(x_23);
x_41 = l_Array_append___rarg(x_23, x_23);
lean_dec(x_23);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_21);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_array_push(x_31, x_42);
x_44 = lean_array_push(x_43, x_4);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_5);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_push(x_33, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_6);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_array_push(x_40, x_47);
x_49 = lean_array_push(x_48, x_37);
x_50 = lean_array_push(x_49, x_13);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_7);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_14, 0, x_51);
return x_14;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_mk_string("typeSpec");
x_54 = lean_name_mk_string(x_8, x_53);
x_55 = lean_mk_string(":");
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_16);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_array_push(x_26, x_56);
x_58 = lean_array_push(x_57, x_52);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_58);
lean_inc(x_33);
x_60 = lean_array_push(x_33, x_59);
x_61 = l_Array_append___rarg(x_23, x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_21);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_array_push(x_31, x_62);
x_64 = lean_array_push(x_63, x_4);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_5);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_array_push(x_33, x_65);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_6);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_push(x_40, x_67);
x_69 = lean_array_push(x_68, x_37);
x_70 = lean_array_push(x_69, x_13);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_7);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_14, 0, x_71);
return x_14;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_72 = lean_ctor_get(x_14, 0);
x_73 = lean_ctor_get(x_14, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_14);
x_74 = lean_mk_string("have");
lean_inc(x_72);
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_box(0);
x_77 = lean_mk_string("null");
x_78 = lean_name_mk_string(x_76, x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
lean_inc(x_80);
lean_inc(x_78);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_unsigned_to_nat(2u);
x_83 = lean_mk_empty_array_with_capacity(x_82);
lean_inc(x_83);
x_84 = lean_array_push(x_83, x_2);
x_85 = lean_array_push(x_84, x_81);
lean_inc(x_78);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_78);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_empty_array_with_capacity(x_12);
x_88 = lean_array_push(x_87, x_86);
x_89 = lean_unsigned_to_nat(1u);
x_90 = lean_mk_empty_array_with_capacity(x_89);
x_91 = lean_mk_string(";");
lean_inc(x_72);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_72);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_90);
x_93 = lean_array_push(x_90, x_92);
lean_inc(x_78);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_78);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_unsigned_to_nat(4u);
x_96 = lean_mk_empty_array_with_capacity(x_95);
x_97 = lean_array_push(x_96, x_75);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_83);
lean_dec(x_72);
lean_dec(x_8);
lean_inc(x_80);
x_98 = l_Array_append___rarg(x_80, x_80);
lean_dec(x_80);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_78);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_88, x_99);
x_101 = lean_array_push(x_100, x_4);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_5);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_array_push(x_90, x_102);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_6);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_array_push(x_97, x_104);
x_106 = lean_array_push(x_105, x_94);
x_107 = lean_array_push(x_106, x_13);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_7);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_73);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_110 = lean_ctor_get(x_3, 0);
lean_inc(x_110);
lean_dec(x_3);
x_111 = lean_mk_string("typeSpec");
x_112 = lean_name_mk_string(x_8, x_111);
x_113 = lean_mk_string(":");
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_72);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_array_push(x_83, x_114);
x_116 = lean_array_push(x_115, x_110);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_112);
lean_ctor_set(x_117, 1, x_116);
lean_inc(x_90);
x_118 = lean_array_push(x_90, x_117);
x_119 = l_Array_append___rarg(x_80, x_118);
lean_dec(x_118);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_78);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_array_push(x_88, x_120);
x_122 = lean_array_push(x_121, x_4);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_5);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_array_push(x_90, x_123);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_6);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_array_push(x_97, x_125);
x_127 = lean_array_push(x_126, x_94);
x_128 = lean_array_push(x_127, x_13);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_7);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_73);
return x_130;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_mk_string("matchAlts");
lean_inc(x_2);
x_15 = lean_name_mk_string(x_2, x_14);
lean_inc(x_13);
x_16 = l_Lean_Syntax_isOfKind(x_13, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_11);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Syntax_getArg(x_3, x_12);
x_20 = l_Lean_Syntax_isNone(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = l_Lean_nullKind;
x_22 = lean_unsigned_to_nat(1u);
x_23 = l_Lean_Syntax_isNodeOf(x_19, x_21, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_24 = lean_box(1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l_Lean_Elab_Term_expandHave___lambda__2(x_3, x_4, x_9, x_13, x_5, x_6, x_7, x_2, x_26, x_10, x_11);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_19);
x_28 = lean_box(0);
x_29 = l_Lean_Elab_Term_expandHave___lambda__2(x_3, x_4, x_9, x_13, x_5, x_6, x_7, x_2, x_28, x_10, x_11);
return x_29;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getArgs(x_2);
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_8, x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_mk_string("let_fun");
lean_inc(x_16);
lean_inc(x_3);
x_17 = lean_name_mk_string(x_3, x_16);
lean_inc(x_15);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_mk_string("letDecl");
lean_inc(x_3);
x_20 = lean_name_mk_string(x_3, x_19);
x_21 = lean_mk_string("letEqnsDecl");
lean_inc(x_3);
x_22 = lean_name_mk_string(x_3, x_21);
x_23 = lean_box(0);
x_24 = lean_mk_string("null");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_mk_empty_array_with_capacity(x_26);
lean_inc(x_27);
x_28 = l_Array_append___rarg(x_27, x_12);
lean_dec(x_12);
lean_inc(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_unsigned_to_nat(4u);
x_31 = lean_mk_empty_array_with_capacity(x_30);
lean_inc(x_31);
x_32 = lean_array_push(x_31, x_4);
x_33 = lean_array_push(x_32, x_29);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_mk_empty_array_with_capacity(x_34);
x_36 = lean_mk_string(";");
lean_inc(x_15);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_15);
lean_ctor_set(x_37, 1, x_36);
lean_inc(x_35);
x_38 = lean_array_push(x_35, x_37);
lean_inc(x_25);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_25);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_array_push(x_31, x_18);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_15);
lean_dec(x_3);
lean_inc(x_27);
x_41 = l_Array_append___rarg(x_27, x_27);
lean_dec(x_27);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_25);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_array_push(x_33, x_42);
x_44 = lean_array_push(x_43, x_6);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_22);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_push(x_35, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_20);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_array_push(x_40, x_47);
x_49 = lean_array_push(x_48, x_39);
x_50 = lean_array_push(x_49, x_11);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_17);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_13, 0, x_51);
return x_13;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_52 = lean_ctor_get(x_5, 0);
lean_inc(x_52);
lean_dec(x_5);
x_53 = lean_mk_string("typeSpec");
x_54 = lean_name_mk_string(x_3, x_53);
x_55 = lean_mk_string(":");
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_15);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_unsigned_to_nat(2u);
x_58 = lean_mk_empty_array_with_capacity(x_57);
x_59 = lean_array_push(x_58, x_56);
x_60 = lean_array_push(x_59, x_52);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_54);
lean_ctor_set(x_61, 1, x_60);
lean_inc(x_35);
x_62 = lean_array_push(x_35, x_61);
x_63 = l_Array_append___rarg(x_27, x_62);
lean_dec(x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_25);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_33, x_64);
x_66 = lean_array_push(x_65, x_6);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_22);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_push(x_35, x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_20);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_push(x_40, x_69);
x_71 = lean_array_push(x_70, x_39);
x_72 = lean_array_push(x_71, x_11);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_17);
lean_ctor_set(x_73, 1, x_72);
lean_ctor_set(x_13, 0, x_73);
return x_13;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_74 = lean_ctor_get(x_13, 0);
x_75 = lean_ctor_get(x_13, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_13);
x_76 = lean_mk_string("let_fun");
lean_inc(x_76);
lean_inc(x_3);
x_77 = lean_name_mk_string(x_3, x_76);
lean_inc(x_74);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_74);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_mk_string("letDecl");
lean_inc(x_3);
x_80 = lean_name_mk_string(x_3, x_79);
x_81 = lean_mk_string("letEqnsDecl");
lean_inc(x_3);
x_82 = lean_name_mk_string(x_3, x_81);
x_83 = lean_box(0);
x_84 = lean_mk_string("null");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_unsigned_to_nat(0u);
x_87 = lean_mk_empty_array_with_capacity(x_86);
lean_inc(x_87);
x_88 = l_Array_append___rarg(x_87, x_12);
lean_dec(x_12);
lean_inc(x_85);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_85);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_unsigned_to_nat(4u);
x_91 = lean_mk_empty_array_with_capacity(x_90);
lean_inc(x_91);
x_92 = lean_array_push(x_91, x_4);
x_93 = lean_array_push(x_92, x_89);
x_94 = lean_unsigned_to_nat(1u);
x_95 = lean_mk_empty_array_with_capacity(x_94);
x_96 = lean_mk_string(";");
lean_inc(x_74);
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_74);
lean_ctor_set(x_97, 1, x_96);
lean_inc(x_95);
x_98 = lean_array_push(x_95, x_97);
lean_inc(x_85);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_85);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_91, x_78);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_74);
lean_dec(x_3);
lean_inc(x_87);
x_101 = l_Array_append___rarg(x_87, x_87);
lean_dec(x_87);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_85);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_array_push(x_93, x_102);
x_104 = lean_array_push(x_103, x_6);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_82);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_array_push(x_95, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_80);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_array_push(x_100, x_107);
x_109 = lean_array_push(x_108, x_99);
x_110 = lean_array_push(x_109, x_11);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_77);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_75);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_113 = lean_ctor_get(x_5, 0);
lean_inc(x_113);
lean_dec(x_5);
x_114 = lean_mk_string("typeSpec");
x_115 = lean_name_mk_string(x_3, x_114);
x_116 = lean_mk_string(":");
x_117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_117, 0, x_74);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_unsigned_to_nat(2u);
x_119 = lean_mk_empty_array_with_capacity(x_118);
x_120 = lean_array_push(x_119, x_117);
x_121 = lean_array_push(x_120, x_113);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_115);
lean_ctor_set(x_122, 1, x_121);
lean_inc(x_95);
x_123 = lean_array_push(x_95, x_122);
x_124 = l_Array_append___rarg(x_87, x_123);
lean_dec(x_123);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_85);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_array_push(x_93, x_125);
x_127 = lean_array_push(x_126, x_6);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_82);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_array_push(x_95, x_128);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_80);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_array_push(x_100, x_130);
x_132 = lean_array_push(x_131, x_99);
x_133 = lean_array_push(x_132, x_11);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_77);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_75);
return x_135;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_mk_string("matchAlts");
lean_inc(x_2);
x_13 = lean_name_mk_string(x_2, x_12);
lean_inc(x_11);
x_14 = l_Lean_Syntax_isOfKind(x_11, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Syntax_getArg(x_3, x_10);
x_18 = l_Lean_Syntax_isNone(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = l_Lean_nullKind;
x_20 = lean_unsigned_to_nat(1u);
x_21 = l_Lean_Syntax_isNodeOf(x_17, x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l_Lean_Elab_Term_expandHave___lambda__4(x_3, x_4, x_2, x_5, x_7, x_11, x_24, x_8, x_9);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_17);
x_26 = lean_box(0);
x_27 = l_Lean_Elab_Term_expandHave___lambda__4(x_3, x_4, x_2, x_5, x_7, x_11, x_26, x_8, x_9);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_mk_string("have");
lean_inc(x_16);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_box(0);
x_20 = lean_mk_string("null");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_23);
lean_inc(x_21);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_unsigned_to_nat(2u);
x_26 = lean_mk_empty_array_with_capacity(x_25);
lean_inc(x_26);
x_27 = lean_array_push(x_26, x_2);
x_28 = lean_array_push(x_27, x_24);
lean_inc(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_string(":=");
lean_inc(x_16);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_16);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_mk_empty_array_with_capacity(x_32);
lean_inc(x_33);
x_34 = lean_array_push(x_33, x_29);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
x_37 = lean_mk_string(";");
lean_inc(x_16);
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_16);
lean_ctor_set(x_38, 1, x_37);
lean_inc(x_36);
x_39 = lean_array_push(x_36, x_38);
lean_inc(x_21);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_21);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_33, x_18);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_8);
lean_inc(x_23);
x_42 = l_Array_append___rarg(x_23, x_23);
lean_dec(x_23);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_21);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_array_push(x_34, x_43);
x_45 = lean_array_push(x_44, x_31);
x_46 = lean_array_push(x_45, x_4);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_5);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_array_push(x_36, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_6);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_array_push(x_41, x_49);
x_51 = lean_array_push(x_50, x_40);
x_52 = lean_array_push(x_51, x_13);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_7);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_14, 0, x_53);
return x_14;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_54 = lean_ctor_get(x_3, 0);
lean_inc(x_54);
lean_dec(x_3);
x_55 = lean_mk_string("typeSpec");
x_56 = lean_name_mk_string(x_8, x_55);
x_57 = lean_mk_string(":");
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_16);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_array_push(x_26, x_58);
x_60 = lean_array_push(x_59, x_54);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
lean_inc(x_36);
x_62 = lean_array_push(x_36, x_61);
x_63 = l_Array_append___rarg(x_23, x_62);
lean_dec(x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_21);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_34, x_64);
x_66 = lean_array_push(x_65, x_31);
x_67 = lean_array_push(x_66, x_4);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_5);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_array_push(x_36, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_6);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_array_push(x_41, x_70);
x_72 = lean_array_push(x_71, x_40);
x_73 = lean_array_push(x_72, x_13);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_7);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_14, 0, x_74);
return x_14;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_75 = lean_ctor_get(x_14, 0);
x_76 = lean_ctor_get(x_14, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_14);
x_77 = lean_mk_string("have");
lean_inc(x_75);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_box(0);
x_80 = lean_mk_string("null");
x_81 = lean_name_mk_string(x_79, x_80);
x_82 = lean_unsigned_to_nat(0u);
x_83 = lean_mk_empty_array_with_capacity(x_82);
lean_inc(x_83);
lean_inc(x_81);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_unsigned_to_nat(2u);
x_86 = lean_mk_empty_array_with_capacity(x_85);
lean_inc(x_86);
x_87 = lean_array_push(x_86, x_2);
x_88 = lean_array_push(x_87, x_84);
lean_inc(x_81);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_81);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_mk_string(":=");
lean_inc(x_75);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_75);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_unsigned_to_nat(4u);
x_93 = lean_mk_empty_array_with_capacity(x_92);
lean_inc(x_93);
x_94 = lean_array_push(x_93, x_89);
x_95 = lean_unsigned_to_nat(1u);
x_96 = lean_mk_empty_array_with_capacity(x_95);
x_97 = lean_mk_string(";");
lean_inc(x_75);
x_98 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_98, 0, x_75);
lean_ctor_set(x_98, 1, x_97);
lean_inc(x_96);
x_99 = lean_array_push(x_96, x_98);
lean_inc(x_81);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_81);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_array_push(x_93, x_78);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_86);
lean_dec(x_75);
lean_dec(x_8);
lean_inc(x_83);
x_102 = l_Array_append___rarg(x_83, x_83);
lean_dec(x_83);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_81);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_array_push(x_94, x_103);
x_105 = lean_array_push(x_104, x_91);
x_106 = lean_array_push(x_105, x_4);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_5);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_array_push(x_96, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_6);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_array_push(x_101, x_109);
x_111 = lean_array_push(x_110, x_100);
x_112 = lean_array_push(x_111, x_13);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_7);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_76);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_115 = lean_ctor_get(x_3, 0);
lean_inc(x_115);
lean_dec(x_3);
x_116 = lean_mk_string("typeSpec");
x_117 = lean_name_mk_string(x_8, x_116);
x_118 = lean_mk_string(":");
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_75);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_array_push(x_86, x_119);
x_121 = lean_array_push(x_120, x_115);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_117);
lean_ctor_set(x_122, 1, x_121);
lean_inc(x_96);
x_123 = lean_array_push(x_96, x_122);
x_124 = l_Array_append___rarg(x_83, x_123);
lean_dec(x_123);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_81);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_array_push(x_94, x_125);
x_127 = lean_array_push(x_126, x_91);
x_128 = lean_array_push(x_127, x_4);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_5);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_array_push(x_96, x_129);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_6);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_101, x_131);
x_133 = lean_array_push(x_132, x_100);
x_134 = lean_array_push(x_133, x_13);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_7);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_76);
return x_136;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_2, x_14);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = l_Lean_nullKind;
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_isNodeOf(x_15, x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_box(1);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_11);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Term_expandHave___lambda__6(x_2, x_3, x_9, x_13, x_4, x_5, x_6, x_7, x_22, x_10, x_11);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
x_24 = lean_box(0);
x_25 = l_Lean_Elab_Term_expandHave___lambda__6(x_2, x_3, x_9, x_13, x_4, x_5, x_6, x_7, x_24, x_10, x_11);
return x_25;
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getArgs(x_2);
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_8, x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_mk_string("let_fun");
lean_inc(x_16);
lean_inc(x_3);
x_17 = lean_name_mk_string(x_3, x_16);
lean_inc(x_15);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_mk_string("letDecl");
lean_inc(x_3);
x_20 = lean_name_mk_string(x_3, x_19);
x_21 = lean_mk_string("letIdDecl");
lean_inc(x_3);
x_22 = lean_name_mk_string(x_3, x_21);
x_23 = lean_box(0);
x_24 = lean_mk_string("null");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_mk_empty_array_with_capacity(x_26);
lean_inc(x_27);
x_28 = l_Array_append___rarg(x_27, x_12);
lean_dec(x_12);
lean_inc(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_string(":=");
lean_inc(x_15);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_15);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_unsigned_to_nat(5u);
x_33 = lean_mk_empty_array_with_capacity(x_32);
x_34 = lean_array_push(x_33, x_4);
x_35 = lean_array_push(x_34, x_29);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_mk_empty_array_with_capacity(x_36);
x_38 = lean_mk_string(";");
lean_inc(x_15);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_15);
lean_ctor_set(x_39, 1, x_38);
lean_inc(x_37);
x_40 = lean_array_push(x_37, x_39);
lean_inc(x_25);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_25);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_unsigned_to_nat(4u);
x_43 = lean_mk_empty_array_with_capacity(x_42);
x_44 = lean_array_push(x_43, x_18);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_15);
lean_dec(x_3);
lean_inc(x_27);
x_45 = l_Array_append___rarg(x_27, x_27);
lean_dec(x_27);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_25);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_array_push(x_35, x_46);
x_48 = lean_array_push(x_47, x_31);
x_49 = lean_array_push(x_48, x_6);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_22);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_push(x_37, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_20);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_push(x_44, x_52);
x_54 = lean_array_push(x_53, x_41);
x_55 = lean_array_push(x_54, x_11);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_17);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_13, 0, x_56);
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_57 = lean_ctor_get(x_5, 0);
lean_inc(x_57);
lean_dec(x_5);
x_58 = lean_mk_string("typeSpec");
x_59 = lean_name_mk_string(x_3, x_58);
x_60 = lean_mk_string(":");
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_15);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_unsigned_to_nat(2u);
x_63 = lean_mk_empty_array_with_capacity(x_62);
x_64 = lean_array_push(x_63, x_61);
x_65 = lean_array_push(x_64, x_57);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_59);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_37);
x_67 = lean_array_push(x_37, x_66);
x_68 = l_Array_append___rarg(x_27, x_67);
lean_dec(x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_25);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_push(x_35, x_69);
x_71 = lean_array_push(x_70, x_31);
x_72 = lean_array_push(x_71, x_6);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_22);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_push(x_37, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_20);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_push(x_44, x_75);
x_77 = lean_array_push(x_76, x_41);
x_78 = lean_array_push(x_77, x_11);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_17);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set(x_13, 0, x_79);
return x_13;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_80 = lean_ctor_get(x_13, 0);
x_81 = lean_ctor_get(x_13, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_13);
x_82 = lean_mk_string("let_fun");
lean_inc(x_82);
lean_inc(x_3);
x_83 = lean_name_mk_string(x_3, x_82);
lean_inc(x_80);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_80);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_mk_string("letDecl");
lean_inc(x_3);
x_86 = lean_name_mk_string(x_3, x_85);
x_87 = lean_mk_string("letIdDecl");
lean_inc(x_3);
x_88 = lean_name_mk_string(x_3, x_87);
x_89 = lean_box(0);
x_90 = lean_mk_string("null");
x_91 = lean_name_mk_string(x_89, x_90);
x_92 = lean_unsigned_to_nat(0u);
x_93 = lean_mk_empty_array_with_capacity(x_92);
lean_inc(x_93);
x_94 = l_Array_append___rarg(x_93, x_12);
lean_dec(x_12);
lean_inc(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_91);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_mk_string(":=");
lean_inc(x_80);
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_80);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_unsigned_to_nat(5u);
x_99 = lean_mk_empty_array_with_capacity(x_98);
x_100 = lean_array_push(x_99, x_4);
x_101 = lean_array_push(x_100, x_95);
x_102 = lean_unsigned_to_nat(1u);
x_103 = lean_mk_empty_array_with_capacity(x_102);
x_104 = lean_mk_string(";");
lean_inc(x_80);
x_105 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_105, 0, x_80);
lean_ctor_set(x_105, 1, x_104);
lean_inc(x_103);
x_106 = lean_array_push(x_103, x_105);
lean_inc(x_91);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_91);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_unsigned_to_nat(4u);
x_109 = lean_mk_empty_array_with_capacity(x_108);
x_110 = lean_array_push(x_109, x_84);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_80);
lean_dec(x_3);
lean_inc(x_93);
x_111 = l_Array_append___rarg(x_93, x_93);
lean_dec(x_93);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_91);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_array_push(x_101, x_112);
x_114 = lean_array_push(x_113, x_97);
x_115 = lean_array_push(x_114, x_6);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_88);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_103, x_116);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_86);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_array_push(x_110, x_118);
x_120 = lean_array_push(x_119, x_107);
x_121 = lean_array_push(x_120, x_11);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_83);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_81);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_124 = lean_ctor_get(x_5, 0);
lean_inc(x_124);
lean_dec(x_5);
x_125 = lean_mk_string("typeSpec");
x_126 = lean_name_mk_string(x_3, x_125);
x_127 = lean_mk_string(":");
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_80);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_unsigned_to_nat(2u);
x_130 = lean_mk_empty_array_with_capacity(x_129);
x_131 = lean_array_push(x_130, x_128);
x_132 = lean_array_push(x_131, x_124);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_126);
lean_ctor_set(x_133, 1, x_132);
lean_inc(x_103);
x_134 = lean_array_push(x_103, x_133);
x_135 = l_Array_append___rarg(x_93, x_134);
lean_dec(x_134);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_91);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_array_push(x_101, x_136);
x_138 = lean_array_push(x_137, x_97);
x_139 = lean_array_push(x_138, x_6);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_88);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_array_push(x_103, x_140);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_86);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_array_push(x_110, x_142);
x_144 = lean_array_push(x_143, x_107);
x_145 = lean_array_push(x_144, x_11);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_83);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_81);
return x_147;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_2, x_12);
x_14 = l_Lean_Syntax_isNone(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = l_Lean_nullKind;
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_isNodeOf(x_13, x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Term_expandHave___lambda__8(x_2, x_3, x_4, x_5, x_7, x_11, x_20, x_8, x_9);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_13);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Term_expandHave___lambda__8(x_2, x_3, x_4, x_5, x_7, x_11, x_22, x_8, x_9);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Term_expandHave(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_4 = lean_box(0);
x_5 = lean_mk_string("this");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_Lean_mkIdentFrom(x_1, x_6);
x_8 = lean_mk_string("Lean");
x_9 = lean_name_mk_string(x_4, x_8);
x_10 = lean_mk_string("Parser");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("Term");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("have");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
lean_inc(x_1);
x_16 = l_Lean_Syntax_isOfKind(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = lean_mk_string("haveDecl");
lean_inc(x_13);
x_22 = lean_name_mk_string(x_13, x_21);
lean_inc(x_20);
x_23 = l_Lean_Syntax_isOfKind(x_20, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_24 = lean_box(1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Syntax_getArg(x_20, x_26);
lean_dec(x_20);
x_28 = lean_mk_string("haveIdDecl");
lean_inc(x_13);
x_29 = lean_name_mk_string(x_13, x_28);
lean_inc(x_27);
x_30 = l_Lean_Syntax_isOfKind(x_27, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_29);
x_31 = lean_mk_string("haveEqnsDecl");
lean_inc(x_13);
x_32 = lean_name_mk_string(x_13, x_31);
lean_inc(x_27);
x_33 = l_Lean_Syntax_isOfKind(x_27, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_32);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_7);
x_34 = lean_mk_string("letPatDecl");
lean_inc(x_13);
x_35 = lean_name_mk_string(x_13, x_34);
lean_inc(x_27);
x_36 = l_Lean_Syntax_isOfKind(x_27, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_37 = lean_box(1);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = l_Lean_Syntax_getArg(x_27, x_26);
x_40 = l_Lean_Syntax_getArg(x_27, x_19);
x_41 = l_Lean_nullKind;
x_42 = l_Lean_Syntax_isNodeOf(x_40, x_41, x_26);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_43 = lean_box(1);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_3);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_unsigned_to_nat(2u);
x_46 = l_Lean_Syntax_getArg(x_27, x_45);
x_47 = l_Lean_Syntax_isNodeOf(x_46, x_41, x_26);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_48 = lean_box(1);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_3);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_unsigned_to_nat(4u);
x_51 = l_Lean_Syntax_getArg(x_27, x_50);
lean_dec(x_27);
x_52 = l_Lean_Syntax_getArg(x_1, x_45);
x_53 = l_Lean_Syntax_isNone(x_52);
if (x_53 == 0)
{
uint8_t x_54; 
x_54 = l_Lean_Syntax_isNodeOf(x_52, x_41, x_19);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_13);
lean_dec(x_1);
x_55 = lean_box(1);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_3);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_box(0);
x_58 = l_Lean_Elab_Term_expandHave___lambda__1(x_1, x_13, x_39, x_51, x_35, x_57, x_2, x_3);
lean_dec(x_1);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_52);
x_59 = lean_box(0);
x_60 = l_Lean_Elab_Term_expandHave___lambda__1(x_1, x_13, x_39, x_51, x_35, x_59, x_2, x_3);
lean_dec(x_1);
return x_60;
}
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_61 = l_Lean_Syntax_getArg(x_27, x_26);
x_62 = l_Lean_nullKind;
x_63 = lean_unsigned_to_nat(2u);
lean_inc(x_61);
x_64 = l_Lean_Syntax_isNodeOf(x_61, x_62, x_63);
if (x_64 == 0)
{
uint8_t x_65; 
x_65 = l_Lean_Syntax_isNodeOf(x_61, x_62, x_26);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_32);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_66 = lean_box(1);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_3);
return x_67;
}
else
{
lean_object* x_68; uint8_t x_69; 
x_68 = l_Lean_Syntax_getArg(x_27, x_19);
x_69 = l_Lean_Syntax_isNone(x_68);
if (x_69 == 0)
{
uint8_t x_70; 
lean_inc(x_68);
x_70 = l_Lean_Syntax_isNodeOf(x_68, x_62, x_19);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_68);
lean_dec(x_32);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_71 = lean_box(1);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_3);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_73 = l_Lean_Syntax_getArg(x_68, x_26);
lean_dec(x_68);
x_74 = lean_mk_string("typeSpec");
lean_inc(x_13);
x_75 = lean_name_mk_string(x_13, x_74);
lean_inc(x_73);
x_76 = l_Lean_Syntax_isOfKind(x_73, x_75);
lean_dec(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_73);
lean_dec(x_32);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_77 = lean_box(1);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_3);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = l_Lean_Syntax_getArg(x_73, x_19);
lean_dec(x_73);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_box(0);
x_82 = l_Lean_Elab_Term_expandHave___lambda__3(x_27, x_13, x_1, x_7, x_32, x_22, x_15, x_81, x_80, x_2, x_3);
lean_dec(x_1);
lean_dec(x_27);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_68);
x_83 = lean_box(0);
x_84 = lean_box(0);
x_85 = l_Lean_Elab_Term_expandHave___lambda__3(x_27, x_13, x_1, x_7, x_32, x_22, x_15, x_84, x_83, x_2, x_3);
lean_dec(x_1);
lean_dec(x_27);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
lean_dec(x_32);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_7);
x_86 = l_Lean_Syntax_getArg(x_61, x_26);
x_87 = l_Lean_Syntax_getArg(x_61, x_19);
lean_dec(x_61);
x_88 = l_Lean_Syntax_getArg(x_27, x_19);
x_89 = l_Lean_Syntax_isNone(x_88);
if (x_89 == 0)
{
uint8_t x_90; 
lean_inc(x_88);
x_90 = l_Lean_Syntax_isNodeOf(x_88, x_62, x_19);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_91 = lean_box(1);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_3);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_93 = l_Lean_Syntax_getArg(x_88, x_26);
lean_dec(x_88);
x_94 = lean_mk_string("typeSpec");
lean_inc(x_13);
x_95 = lean_name_mk_string(x_13, x_94);
lean_inc(x_93);
x_96 = l_Lean_Syntax_isOfKind(x_93, x_95);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_93);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_97 = lean_box(1);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_3);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = l_Lean_Syntax_getArg(x_93, x_19);
lean_dec(x_93);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = lean_box(0);
x_102 = l_Lean_Elab_Term_expandHave___lambda__5(x_27, x_13, x_1, x_87, x_86, x_101, x_100, x_2, x_3);
lean_dec(x_87);
lean_dec(x_1);
lean_dec(x_27);
return x_102;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_88);
x_103 = lean_box(0);
x_104 = lean_box(0);
x_105 = l_Lean_Elab_Term_expandHave___lambda__5(x_27, x_13, x_1, x_87, x_86, x_104, x_103, x_2, x_3);
lean_dec(x_87);
lean_dec(x_1);
lean_dec(x_27);
return x_105;
}
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_106 = l_Lean_Syntax_getArg(x_27, x_26);
x_107 = l_Lean_nullKind;
x_108 = lean_unsigned_to_nat(2u);
lean_inc(x_106);
x_109 = l_Lean_Syntax_isNodeOf(x_106, x_107, x_108);
if (x_109 == 0)
{
uint8_t x_110; 
x_110 = l_Lean_Syntax_isNodeOf(x_106, x_107, x_26);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_111 = lean_box(1);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_3);
return x_112;
}
else
{
lean_object* x_113; uint8_t x_114; 
x_113 = l_Lean_Syntax_getArg(x_27, x_19);
x_114 = l_Lean_Syntax_isNone(x_113);
if (x_114 == 0)
{
uint8_t x_115; 
lean_inc(x_113);
x_115 = l_Lean_Syntax_isNodeOf(x_113, x_107, x_19);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_113);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_116 = lean_box(1);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_3);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_118 = l_Lean_Syntax_getArg(x_113, x_26);
lean_dec(x_113);
x_119 = lean_mk_string("typeSpec");
lean_inc(x_13);
x_120 = lean_name_mk_string(x_13, x_119);
lean_inc(x_118);
x_121 = l_Lean_Syntax_isOfKind(x_118, x_120);
lean_dec(x_120);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_118);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_1);
x_122 = lean_box(1);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_3);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = l_Lean_Syntax_getArg(x_118, x_19);
lean_dec(x_118);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_126 = lean_box(0);
x_127 = l_Lean_Elab_Term_expandHave___lambda__7(x_27, x_1, x_7, x_29, x_22, x_15, x_13, x_126, x_125, x_2, x_3);
lean_dec(x_1);
lean_dec(x_27);
return x_127;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_113);
x_128 = lean_box(0);
x_129 = lean_box(0);
x_130 = l_Lean_Elab_Term_expandHave___lambda__7(x_27, x_1, x_7, x_29, x_22, x_15, x_13, x_129, x_128, x_2, x_3);
lean_dec(x_1);
lean_dec(x_27);
return x_130;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
lean_dec(x_29);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_7);
x_131 = l_Lean_Syntax_getArg(x_106, x_26);
x_132 = l_Lean_Syntax_getArg(x_106, x_19);
lean_dec(x_106);
x_133 = l_Lean_Syntax_getArg(x_27, x_19);
x_134 = l_Lean_Syntax_isNone(x_133);
if (x_134 == 0)
{
uint8_t x_135; 
lean_inc(x_133);
x_135 = l_Lean_Syntax_isNodeOf(x_133, x_107, x_19);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_136 = lean_box(1);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_3);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_138 = l_Lean_Syntax_getArg(x_133, x_26);
lean_dec(x_133);
x_139 = lean_mk_string("typeSpec");
lean_inc(x_13);
x_140 = lean_name_mk_string(x_13, x_139);
lean_inc(x_138);
x_141 = l_Lean_Syntax_isOfKind(x_138, x_140);
lean_dec(x_140);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
lean_dec(x_138);
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_27);
lean_dec(x_13);
lean_dec(x_1);
x_142 = lean_box(1);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_3);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_144 = l_Lean_Syntax_getArg(x_138, x_19);
lean_dec(x_138);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_144);
x_146 = lean_box(0);
x_147 = l_Lean_Elab_Term_expandHave___lambda__9(x_27, x_1, x_132, x_13, x_131, x_146, x_145, x_2, x_3);
lean_dec(x_132);
lean_dec(x_1);
lean_dec(x_27);
return x_147;
}
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_133);
x_148 = lean_box(0);
x_149 = lean_box(0);
x_150 = l_Lean_Elab_Term_expandHave___lambda__9(x_27, x_1, x_132, x_13, x_131, x_149, x_148, x_2, x_3);
lean_dec(x_132);
lean_dec(x_1);
lean_dec(x_27);
return x_150;
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_expandHave___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_expandHave___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_expandHave___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_expandHave___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_expandHave___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_expandHave___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_expandHave___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_expandHave___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandHave___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_expandHave___lambda__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandHave___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandHave(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandHave");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandHave___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandHave___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_have___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandHave___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandHave___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_17 = lean_mk_string("have");
lean_inc(x_17);
lean_inc(x_2);
x_18 = lean_name_mk_string(x_2, x_17);
lean_inc(x_14);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_mk_string("haveDecl");
lean_inc(x_2);
x_21 = lean_name_mk_string(x_2, x_20);
x_22 = lean_mk_string("haveIdDecl");
lean_inc(x_2);
x_23 = lean_name_mk_string(x_2, x_22);
x_24 = lean_box(0);
x_25 = lean_mk_string("null");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_mk_string("typeSpec");
x_30 = lean_name_mk_string(x_2, x_29);
x_31 = lean_mk_string(":");
lean_inc(x_14);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_unsigned_to_nat(2u);
x_34 = lean_mk_empty_array_with_capacity(x_33);
lean_inc(x_34);
x_35 = lean_array_push(x_34, x_32);
x_36 = lean_array_push(x_35, x_3);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_mk_empty_array_with_capacity(x_38);
lean_inc(x_39);
x_40 = lean_array_push(x_39, x_37);
lean_inc(x_26);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_26);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_mk_string(":=");
lean_inc(x_14);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_14);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_unsigned_to_nat(4u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
x_46 = lean_mk_string(";");
lean_inc(x_14);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_14);
lean_ctor_set(x_47, 1, x_46);
lean_inc(x_39);
x_48 = lean_array_push(x_39, x_47);
lean_inc(x_26);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_26);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_Syntax_getHeadInfo_x3f(x_4);
lean_inc(x_45);
x_51 = lean_array_push(x_45, x_19);
if (lean_obj_tag(x_7) == 0)
{
lean_inc(x_28);
x_52 = x_28;
goto block_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_7, 0);
lean_inc(x_82);
lean_dec(x_7);
lean_inc(x_28);
lean_inc(x_26);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_26);
lean_ctor_set(x_83, 1, x_28);
lean_inc(x_34);
x_84 = lean_array_push(x_34, x_82);
x_85 = lean_array_push(x_84, x_83);
x_52 = x_85;
goto block_81;
}
block_81:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_53 = l_Array_append___rarg(x_28, x_52);
lean_dec(x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_26);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_push(x_45, x_54);
x_56 = lean_array_push(x_55, x_41);
x_57 = lean_array_push(x_56, x_43);
x_58 = lean_array_push(x_57, x_12);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_23);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_array_push(x_39, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_21);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_array_push(x_51, x_61);
x_63 = lean_array_push(x_62, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_64 = lean_mk_string("by");
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_14);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_array_push(x_34, x_65);
x_67 = lean_array_push(x_66, x_5);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_6);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_array_push(x_63, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_18);
lean_ctor_set(x_70, 1, x_69);
if (lean_is_scalar(x_16)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_16;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_15);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_14);
x_72 = lean_ctor_get(x_50, 0);
lean_inc(x_72);
lean_dec(x_50);
x_73 = lean_mk_string("by");
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_array_push(x_34, x_74);
x_76 = lean_array_push(x_75, x_5);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_6);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_array_push(x_63, x_77);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_18);
lean_ctor_set(x_79, 1, x_78);
if (lean_is_scalar(x_16)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_16;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_15);
return x_80;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_unsigned_to_nat(3u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_mk_string("have");
lean_inc(x_14);
lean_inc(x_2);
x_15 = lean_name_mk_string(x_2, x_14);
lean_inc(x_13);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_mk_string("haveDecl");
lean_inc(x_2);
x_18 = lean_name_mk_string(x_2, x_17);
x_19 = lean_mk_string("haveIdDecl");
lean_inc(x_2);
x_20 = lean_name_mk_string(x_2, x_19);
x_21 = lean_box(0);
x_22 = lean_mk_string("null");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_mk_empty_array_with_capacity(x_24);
x_26 = lean_mk_string("typeSpec");
x_27 = lean_name_mk_string(x_2, x_26);
x_28 = lean_mk_string(":");
lean_inc(x_13);
x_29 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_unsigned_to_nat(2u);
x_31 = lean_mk_empty_array_with_capacity(x_30);
lean_inc(x_31);
x_32 = lean_array_push(x_31, x_29);
x_33 = lean_array_push(x_32, x_3);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_inc(x_36);
x_37 = lean_array_push(x_36, x_34);
lean_inc(x_23);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_23);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_string(":=");
lean_inc(x_13);
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_unsigned_to_nat(4u);
x_42 = lean_mk_empty_array_with_capacity(x_41);
x_43 = lean_mk_string(";");
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_13);
lean_ctor_set(x_44, 1, x_43);
lean_inc(x_36);
x_45 = lean_array_push(x_36, x_44);
lean_inc(x_23);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_23);
lean_ctor_set(x_46, 1, x_45);
lean_inc(x_42);
x_47 = lean_array_push(x_42, x_16);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_31);
lean_inc(x_25);
x_48 = l_Array_append___rarg(x_25, x_25);
lean_dec(x_25);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_23);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_array_push(x_42, x_49);
x_51 = lean_array_push(x_50, x_38);
x_52 = lean_array_push(x_51, x_40);
x_53 = lean_array_push(x_52, x_10);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_20);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_push(x_36, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_18);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_array_push(x_47, x_56);
x_58 = lean_array_push(x_57, x_46);
x_59 = lean_array_push(x_58, x_5);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_15);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_11, 0, x_60);
return x_11;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_61 = lean_ctor_get(x_4, 0);
lean_inc(x_61);
lean_dec(x_4);
lean_inc(x_25);
lean_inc(x_23);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_23);
lean_ctor_set(x_62, 1, x_25);
x_63 = lean_array_push(x_31, x_61);
x_64 = lean_array_push(x_63, x_62);
x_65 = l_Array_append___rarg(x_25, x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_23);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_array_push(x_42, x_66);
x_68 = lean_array_push(x_67, x_38);
x_69 = lean_array_push(x_68, x_40);
x_70 = lean_array_push(x_69, x_10);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_20);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_array_push(x_36, x_71);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_18);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_push(x_47, x_73);
x_75 = lean_array_push(x_74, x_46);
x_76 = lean_array_push(x_75, x_5);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_15);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_11, 0, x_77);
return x_11;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_78 = lean_ctor_get(x_11, 0);
x_79 = lean_ctor_get(x_11, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_11);
x_80 = lean_mk_string("have");
lean_inc(x_80);
lean_inc(x_2);
x_81 = lean_name_mk_string(x_2, x_80);
lean_inc(x_78);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_78);
lean_ctor_set(x_82, 1, x_80);
x_83 = lean_mk_string("haveDecl");
lean_inc(x_2);
x_84 = lean_name_mk_string(x_2, x_83);
x_85 = lean_mk_string("haveIdDecl");
lean_inc(x_2);
x_86 = lean_name_mk_string(x_2, x_85);
x_87 = lean_box(0);
x_88 = lean_mk_string("null");
x_89 = lean_name_mk_string(x_87, x_88);
x_90 = lean_unsigned_to_nat(0u);
x_91 = lean_mk_empty_array_with_capacity(x_90);
x_92 = lean_mk_string("typeSpec");
x_93 = lean_name_mk_string(x_2, x_92);
x_94 = lean_mk_string(":");
lean_inc(x_78);
x_95 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_95, 0, x_78);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_unsigned_to_nat(2u);
x_97 = lean_mk_empty_array_with_capacity(x_96);
lean_inc(x_97);
x_98 = lean_array_push(x_97, x_95);
x_99 = lean_array_push(x_98, x_3);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_93);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_mk_empty_array_with_capacity(x_101);
lean_inc(x_102);
x_103 = lean_array_push(x_102, x_100);
lean_inc(x_89);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_89);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_mk_string(":=");
lean_inc(x_78);
x_106 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_106, 0, x_78);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_unsigned_to_nat(4u);
x_108 = lean_mk_empty_array_with_capacity(x_107);
x_109 = lean_mk_string(";");
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_78);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_102);
x_111 = lean_array_push(x_102, x_110);
lean_inc(x_89);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_89);
lean_ctor_set(x_112, 1, x_111);
lean_inc(x_108);
x_113 = lean_array_push(x_108, x_82);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_97);
lean_inc(x_91);
x_114 = l_Array_append___rarg(x_91, x_91);
lean_dec(x_91);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_89);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_array_push(x_108, x_115);
x_117 = lean_array_push(x_116, x_104);
x_118 = lean_array_push(x_117, x_106);
x_119 = lean_array_push(x_118, x_10);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_86);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_array_push(x_102, x_120);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_84);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_array_push(x_113, x_122);
x_124 = lean_array_push(x_123, x_112);
x_125 = lean_array_push(x_124, x_5);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_81);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_79);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_128 = lean_ctor_get(x_4, 0);
lean_inc(x_128);
lean_dec(x_4);
lean_inc(x_91);
lean_inc(x_89);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_89);
lean_ctor_set(x_129, 1, x_91);
x_130 = lean_array_push(x_97, x_128);
x_131 = lean_array_push(x_130, x_129);
x_132 = l_Array_append___rarg(x_91, x_131);
lean_dec(x_131);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_89);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_108, x_133);
x_135 = lean_array_push(x_134, x_104);
x_136 = lean_array_push(x_135, x_106);
x_137 = lean_array_push(x_136, x_10);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_86);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_array_push(x_102, x_138);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_84);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_array_push(x_113, x_140);
x_142 = lean_array_push(x_141, x_112);
x_143 = lean_array_push(x_142, x_5);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_81);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_79);
return x_145;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(2u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_mk_string("fromTerm");
lean_inc(x_2);
x_14 = lean_name_mk_string(x_2, x_13);
lean_inc(x_12);
x_15 = l_Lean_Syntax_isOfKind(x_12, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_mk_string("byTactic");
lean_inc(x_2);
x_17 = lean_name_mk_string(x_2, x_16);
lean_inc(x_12);
x_18 = l_Lean_Syntax_isOfKind(x_12, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_8);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_getArg(x_12, x_21);
x_23 = l_Lean_Syntax_getArg(x_12, x_9);
lean_dec(x_12);
x_24 = lean_mk_string("Tactic");
x_25 = lean_name_mk_string(x_3, x_24);
x_26 = lean_mk_string("tacticSeq");
x_27 = lean_name_mk_string(x_25, x_26);
lean_inc(x_23);
x_28 = l_Lean_Syntax_isOfKind(x_23, x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_2);
x_29 = lean_box(1);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_8);
return x_30;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_Syntax_getArg(x_4, x_11);
x_32 = l_Lean_Syntax_isNone(x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_nullKind;
x_34 = l_Lean_Syntax_isNodeOf(x_31, x_33, x_9);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_2);
x_35 = lean_box(1);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_8);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_box(0);
x_38 = l_Lean_Elab_Term_expandSuffices___lambda__1(x_4, x_2, x_10, x_22, x_23, x_17, x_6, x_37, x_7, x_8);
lean_dec(x_22);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
x_39 = lean_box(0);
x_40 = l_Lean_Elab_Term_expandSuffices___lambda__1(x_4, x_2, x_10, x_22, x_23, x_17, x_6, x_39, x_7, x_8);
lean_dec(x_22);
return x_40;
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_3);
x_41 = l_Lean_Syntax_getArg(x_12, x_9);
lean_dec(x_12);
x_42 = l_Lean_Syntax_getArg(x_4, x_11);
x_43 = l_Lean_Syntax_isNone(x_42);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = l_Lean_nullKind;
x_45 = l_Lean_Syntax_isNodeOf(x_42, x_44, x_9);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_41);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_2);
x_46 = lean_box(1);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_8);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_box(0);
x_49 = l_Lean_Elab_Term_expandSuffices___lambda__2(x_4, x_2, x_10, x_6, x_41, x_48, x_7, x_8);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_42);
x_50 = lean_box(0);
x_51 = l_Lean_Elab_Term_expandSuffices___lambda__2(x_4, x_2, x_10, x_6, x_41, x_50, x_7, x_8);
return x_51;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandSuffices(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Term");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("suffices");
lean_inc(x_10);
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_8);
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
x_18 = lean_mk_string("sufficesDecl");
lean_inc(x_10);
x_19 = lean_name_mk_string(x_10, x_18);
lean_inc(x_17);
x_20 = l_Lean_Syntax_isOfKind(x_17, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_21 = lean_box(1);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Syntax_getArg(x_17, x_23);
x_25 = l_Lean_Syntax_isNone(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = l_Lean_nullKind;
x_27 = lean_unsigned_to_nat(2u);
lean_inc(x_24);
x_28 = l_Lean_Syntax_isNodeOf(x_24, x_26, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_29 = lean_box(1);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = l_Lean_Syntax_getArg(x_24, x_23);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_box(0);
x_34 = l_Lean_Elab_Term_expandSuffices___lambda__3(x_17, x_10, x_8, x_1, x_33, x_32, x_2, x_3);
lean_dec(x_1);
lean_dec(x_17);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_24);
x_35 = lean_box(0);
x_36 = lean_box(0);
x_37 = l_Lean_Elab_Term_expandSuffices___lambda__3(x_17, x_10, x_8, x_1, x_36, x_35, x_2, x_3);
lean_dec(x_1);
lean_dec(x_17);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_expandSuffices___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_expandSuffices___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_expandSuffices___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_expandSuffices___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandSuffices(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandSuffices");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandSuffices___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandSuffices(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_suffices___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_dec(x_4);
x_11 = lean_box_uint64(x_10);
x_12 = lean_apply_6(x_2, x_8, x_9, x_11, x_7, x_5, x_6);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_apply_1(x_3, x_1);
return x_13;
}
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux_match__2___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_beq___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_nat_dec_eq(x_6, x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
x_1 = x_7;
x_2 = x_9;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_box(0);
x_24 = lean_mk_string("Lean");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Parser");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Term");
lean_inc(x_27);
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("app");
lean_inc(x_29);
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("withAntiquot");
x_33 = lean_string_utf8_byte_size(x_32);
x_34 = lean_unsigned_to_nat(0u);
lean_inc(x_32);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_33);
lean_inc(x_32);
x_36 = lean_name_mk_string(x_23, x_32);
lean_inc(x_18);
lean_inc(x_22);
x_37 = l_Lean_addMacroScope(x_22, x_36, x_18);
lean_inc(x_27);
x_38 = lean_name_mk_string(x_27, x_32);
lean_inc(x_1);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_1);
lean_inc(x_1);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_1);
lean_inc(x_15);
x_41 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_41, 0, x_15);
lean_ctor_set(x_41, 1, x_35);
lean_ctor_set(x_41, 2, x_37);
lean_ctor_set(x_41, 3, x_40);
x_42 = lean_mk_string("null");
x_43 = lean_name_mk_string(x_23, x_42);
x_44 = lean_mk_string("paren");
x_45 = lean_name_mk_string(x_29, x_44);
x_46 = lean_mk_string("(");
lean_inc(x_15);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_mk_string("mkAntiquot");
x_49 = lean_string_utf8_byte_size(x_48);
lean_inc(x_48);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_34);
lean_ctor_set(x_50, 2, x_49);
lean_inc(x_48);
x_51 = lean_name_mk_string(x_23, x_48);
lean_inc(x_18);
lean_inc(x_22);
x_52 = l_Lean_addMacroScope(x_22, x_51, x_18);
lean_inc(x_27);
x_53 = lean_name_mk_string(x_27, x_48);
lean_inc(x_1);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_1);
lean_inc(x_1);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_1);
lean_inc(x_15);
x_56 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_56, 0, x_15);
lean_ctor_set(x_56, 1, x_50);
lean_ctor_set(x_56, 2, x_52);
lean_ctor_set(x_56, 3, x_55);
x_57 = lean_unsigned_to_nat(2u);
x_58 = lean_mk_empty_array_with_capacity(x_57);
lean_inc(x_58);
x_59 = lean_array_push(x_58, x_2);
x_60 = lean_array_push(x_59, x_6);
lean_inc(x_43);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_43);
lean_ctor_set(x_61, 1, x_60);
lean_inc(x_58);
x_62 = lean_array_push(x_58, x_56);
x_63 = lean_array_push(x_62, x_61);
lean_inc(x_31);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_31);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_empty_array_with_capacity(x_34);
lean_inc(x_43);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_43);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_58);
x_67 = lean_array_push(x_58, x_64);
lean_inc(x_66);
x_68 = lean_array_push(x_67, x_66);
lean_inc(x_43);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_43);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_string(")");
lean_inc(x_15);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_15);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_unsigned_to_nat(3u);
x_73 = lean_mk_empty_array_with_capacity(x_72);
lean_inc(x_73);
x_74 = lean_array_push(x_73, x_47);
lean_inc(x_74);
x_75 = lean_array_push(x_74, x_69);
lean_inc(x_71);
x_76 = lean_array_push(x_75, x_71);
lean_inc(x_45);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_45);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("leadingNode");
x_79 = lean_string_utf8_byte_size(x_78);
lean_inc(x_78);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_34);
lean_ctor_set(x_80, 2, x_79);
lean_inc(x_78);
x_81 = lean_name_mk_string(x_23, x_78);
x_82 = l_Lean_addMacroScope(x_22, x_81, x_18);
x_83 = lean_name_mk_string(x_27, x_78);
lean_inc(x_1);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_1);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_1);
x_86 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_86, 0, x_15);
lean_ctor_set(x_86, 1, x_80);
lean_ctor_set(x_86, 2, x_82);
lean_ctor_set(x_86, 3, x_85);
x_87 = lean_array_push(x_73, x_3);
x_88 = lean_array_push(x_87, x_4);
x_89 = lean_array_push(x_88, x_5);
lean_inc(x_43);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_43);
lean_ctor_set(x_90, 1, x_89);
lean_inc(x_58);
x_91 = lean_array_push(x_58, x_86);
x_92 = lean_array_push(x_91, x_90);
lean_inc(x_31);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_31);
lean_ctor_set(x_93, 1, x_92);
lean_inc(x_58);
x_94 = lean_array_push(x_58, x_93);
x_95 = lean_array_push(x_94, x_66);
lean_inc(x_43);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_43);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_array_push(x_74, x_96);
x_98 = lean_array_push(x_97, x_71);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_45);
lean_ctor_set(x_99, 1, x_98);
lean_inc(x_58);
x_100 = lean_array_push(x_58, x_77);
x_101 = lean_array_push(x_100, x_99);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_43);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_array_push(x_58, x_41);
x_104 = lean_array_push(x_103, x_102);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_31);
lean_ctor_set(x_105, 1, x_104);
lean_ctor_set(x_20, 0, x_105);
return x_20;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_106 = lean_ctor_get(x_20, 0);
x_107 = lean_ctor_get(x_20, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_20);
x_108 = lean_box(0);
x_109 = lean_mk_string("Lean");
x_110 = lean_name_mk_string(x_108, x_109);
x_111 = lean_mk_string("Parser");
x_112 = lean_name_mk_string(x_110, x_111);
x_113 = lean_mk_string("Term");
lean_inc(x_112);
x_114 = lean_name_mk_string(x_112, x_113);
x_115 = lean_mk_string("app");
lean_inc(x_114);
x_116 = lean_name_mk_string(x_114, x_115);
x_117 = lean_mk_string("withAntiquot");
x_118 = lean_string_utf8_byte_size(x_117);
x_119 = lean_unsigned_to_nat(0u);
lean_inc(x_117);
x_120 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_120, 2, x_118);
lean_inc(x_117);
x_121 = lean_name_mk_string(x_108, x_117);
lean_inc(x_18);
lean_inc(x_106);
x_122 = l_Lean_addMacroScope(x_106, x_121, x_18);
lean_inc(x_112);
x_123 = lean_name_mk_string(x_112, x_117);
lean_inc(x_1);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_1);
lean_inc(x_1);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_1);
lean_inc(x_15);
x_126 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_126, 0, x_15);
lean_ctor_set(x_126, 1, x_120);
lean_ctor_set(x_126, 2, x_122);
lean_ctor_set(x_126, 3, x_125);
x_127 = lean_mk_string("null");
x_128 = lean_name_mk_string(x_108, x_127);
x_129 = lean_mk_string("paren");
x_130 = lean_name_mk_string(x_114, x_129);
x_131 = lean_mk_string("(");
lean_inc(x_15);
x_132 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_132, 0, x_15);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("mkAntiquot");
x_134 = lean_string_utf8_byte_size(x_133);
lean_inc(x_133);
x_135 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_119);
lean_ctor_set(x_135, 2, x_134);
lean_inc(x_133);
x_136 = lean_name_mk_string(x_108, x_133);
lean_inc(x_18);
lean_inc(x_106);
x_137 = l_Lean_addMacroScope(x_106, x_136, x_18);
lean_inc(x_112);
x_138 = lean_name_mk_string(x_112, x_133);
lean_inc(x_1);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_1);
lean_inc(x_1);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_1);
lean_inc(x_15);
x_141 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_141, 0, x_15);
lean_ctor_set(x_141, 1, x_135);
lean_ctor_set(x_141, 2, x_137);
lean_ctor_set(x_141, 3, x_140);
x_142 = lean_unsigned_to_nat(2u);
x_143 = lean_mk_empty_array_with_capacity(x_142);
lean_inc(x_143);
x_144 = lean_array_push(x_143, x_2);
x_145 = lean_array_push(x_144, x_6);
lean_inc(x_128);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_128);
lean_ctor_set(x_146, 1, x_145);
lean_inc(x_143);
x_147 = lean_array_push(x_143, x_141);
x_148 = lean_array_push(x_147, x_146);
lean_inc(x_116);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_116);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_mk_empty_array_with_capacity(x_119);
lean_inc(x_128);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_128);
lean_ctor_set(x_151, 1, x_150);
lean_inc(x_143);
x_152 = lean_array_push(x_143, x_149);
lean_inc(x_151);
x_153 = lean_array_push(x_152, x_151);
lean_inc(x_128);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_128);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_mk_string(")");
lean_inc(x_15);
x_156 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_156, 0, x_15);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_unsigned_to_nat(3u);
x_158 = lean_mk_empty_array_with_capacity(x_157);
lean_inc(x_158);
x_159 = lean_array_push(x_158, x_132);
lean_inc(x_159);
x_160 = lean_array_push(x_159, x_154);
lean_inc(x_156);
x_161 = lean_array_push(x_160, x_156);
lean_inc(x_130);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_130);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_mk_string("leadingNode");
x_164 = lean_string_utf8_byte_size(x_163);
lean_inc(x_163);
x_165 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_119);
lean_ctor_set(x_165, 2, x_164);
lean_inc(x_163);
x_166 = lean_name_mk_string(x_108, x_163);
x_167 = l_Lean_addMacroScope(x_106, x_166, x_18);
x_168 = lean_name_mk_string(x_112, x_163);
lean_inc(x_1);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_1);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_1);
x_171 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_171, 0, x_15);
lean_ctor_set(x_171, 1, x_165);
lean_ctor_set(x_171, 2, x_167);
lean_ctor_set(x_171, 3, x_170);
x_172 = lean_array_push(x_158, x_3);
x_173 = lean_array_push(x_172, x_4);
x_174 = lean_array_push(x_173, x_5);
lean_inc(x_128);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_128);
lean_ctor_set(x_175, 1, x_174);
lean_inc(x_143);
x_176 = lean_array_push(x_143, x_171);
x_177 = lean_array_push(x_176, x_175);
lean_inc(x_116);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_116);
lean_ctor_set(x_178, 1, x_177);
lean_inc(x_143);
x_179 = lean_array_push(x_143, x_178);
x_180 = lean_array_push(x_179, x_151);
lean_inc(x_128);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_128);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_array_push(x_159, x_181);
x_183 = lean_array_push(x_182, x_156);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_130);
lean_ctor_set(x_184, 1, x_183);
lean_inc(x_143);
x_185 = lean_array_push(x_143, x_162);
x_186 = lean_array_push(x_185, x_184);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_128);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_array_push(x_143, x_126);
x_189 = lean_array_push(x_188, x_187);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_116);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_107);
return x_191;
}
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_getDeclName_x3f(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_mk_string("invalid `leading_parser` macro, it must be used in definitions");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_15;
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
lean_inc(x_17);
x_18 = l_Lean_extractMacroScopes(x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 1)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
lean_inc(x_17);
x_23 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_22, x_17);
x_24 = lean_box(2);
x_25 = l_Lean_Syntax_mkStrLit(x_21, x_24);
lean_dec(x_21);
x_26 = l_List_beq___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___spec__1(x_20, x_22);
lean_dec(x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_94; 
x_94 = l___private_Init_Meta_0__Lean_quoteNameMk(x_17);
x_27 = x_94;
goto block_93;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_17);
x_95 = lean_ctor_get(x_23, 0);
lean_inc(x_95);
lean_dec(x_23);
x_96 = lean_box(0);
x_97 = lean_mk_string("Lean");
x_98 = lean_name_mk_string(x_96, x_97);
x_99 = lean_mk_string("Parser");
x_100 = lean_name_mk_string(x_98, x_99);
x_101 = lean_mk_string("Term");
x_102 = lean_name_mk_string(x_100, x_101);
x_103 = lean_mk_string("quotedName");
x_104 = lean_name_mk_string(x_102, x_103);
x_105 = lean_mk_string(".");
x_106 = l_String_intercalate(x_105, x_95);
x_107 = lean_mk_string("`");
x_108 = lean_string_append(x_107, x_106);
lean_dec(x_106);
x_109 = l_Lean_nameLitKind;
x_110 = l_Lean_Syntax_mkLit(x_109, x_108, x_24);
x_111 = lean_unsigned_to_nat(1u);
x_112 = lean_mk_empty_array_with_capacity(x_111);
x_113 = lean_array_push(x_112, x_110);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_104);
lean_ctor_set(x_114, 1, x_113);
x_27 = x_114;
goto block_93;
}
block_93:
{
if (x_26 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_16);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_mk_string("none");
x_38 = lean_string_utf8_byte_size(x_37);
x_39 = lean_unsigned_to_nat(0u);
lean_inc(x_37);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
x_41 = lean_box(0);
lean_inc(x_37);
x_42 = lean_name_mk_string(x_41, x_37);
x_43 = l_Lean_addMacroScope(x_35, x_42, x_32);
x_44 = lean_mk_string("Option");
x_45 = lean_name_mk_string(x_41, x_44);
x_46 = lean_name_mk_string(x_45, x_37);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_22);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_22);
x_49 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_49, 0, x_29);
lean_ctor_set(x_49, 1, x_40);
lean_ctor_set(x_49, 2, x_43);
lean_ctor_set(x_49, 3, x_48);
x_50 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1(x_22, x_25, x_27, x_1, x_2, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
lean_dec(x_3);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_51 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_16);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_box(0);
x_61 = lean_mk_string("Lean");
x_62 = lean_name_mk_string(x_60, x_61);
x_63 = lean_mk_string("Parser");
x_64 = lean_name_mk_string(x_62, x_63);
x_65 = lean_mk_string("Term");
x_66 = lean_name_mk_string(x_64, x_65);
x_67 = lean_mk_string("app");
x_68 = lean_name_mk_string(x_66, x_67);
x_69 = lean_mk_string("some");
x_70 = lean_string_utf8_byte_size(x_69);
x_71 = lean_unsigned_to_nat(0u);
lean_inc(x_69);
x_72 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_71);
lean_ctor_set(x_72, 2, x_70);
lean_inc(x_69);
x_73 = lean_name_mk_string(x_60, x_69);
x_74 = l_Lean_addMacroScope(x_58, x_73, x_55);
x_75 = lean_mk_string("Option");
x_76 = lean_name_mk_string(x_60, x_75);
x_77 = lean_name_mk_string(x_76, x_69);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_22);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_22);
x_80 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_80, 0, x_52);
lean_ctor_set(x_80, 1, x_72);
lean_ctor_set(x_80, 2, x_74);
lean_ctor_set(x_80, 3, x_79);
x_81 = lean_mk_string("null");
x_82 = lean_name_mk_string(x_60, x_81);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_mk_empty_array_with_capacity(x_83);
lean_inc(x_27);
x_85 = lean_array_push(x_84, x_27);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_82);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_unsigned_to_nat(2u);
x_88 = lean_mk_empty_array_with_capacity(x_87);
x_89 = lean_array_push(x_88, x_80);
x_90 = lean_array_push(x_89, x_86);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_68);
lean_ctor_set(x_91, 1, x_90);
x_92 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1(x_22, x_25, x_27, x_1, x_2, x_91, x_3, x_4, x_5, x_6, x_7, x_8, x_59);
lean_dec(x_3);
return x_92;
}
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
x_115 = lean_mk_string("invalid `leading_parser` macro, unexpected declaration name");
x_116 = l_Lean_stringToMessageData(x_115);
lean_dec(x_115);
x_117 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(x_116, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_117;
}
}
}
}
lean_object* l_List_beq___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_beq___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_14;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_elabLeadingParserMacro___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_16 = lean_mk_string("leading_parser");
x_17 = lean_name_mk_string(x_15, x_16);
lean_inc(x_1);
x_18 = l_Lean_Syntax_isOfKind(x_1, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_8);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = l_Lean_nullKind;
x_23 = lean_unsigned_to_nat(0u);
lean_inc(x_21);
x_24 = l_Lean_Syntax_isNodeOf(x_21, x_22, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_unsigned_to_nat(2u);
lean_inc(x_21);
x_26 = l_Lean_Syntax_isNodeOf(x_21, x_22, x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_8);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = l_Lean_Syntax_getArg(x_21, x_20);
lean_dec(x_21);
x_29 = l_Lean_Syntax_getArg(x_1, x_25);
lean_dec(x_1);
x_30 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux(x_28, x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_21);
x_31 = lean_unsigned_to_nat(2u);
x_32 = l_Lean_Syntax_getArg(x_1, x_31);
lean_dec(x_1);
x_33 = l_Lean_Parser_maxPrec;
x_34 = l_Nat_repr(x_33);
x_35 = l_Lean_numLitKind;
x_36 = lean_box(2);
x_37 = l_Lean_Syntax_mkLit(x_35, x_34, x_36);
x_38 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabParserMacroAux(x_37, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_38;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabLeadingParserMacro(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLeadingParserMacro___lambda__1___boxed), 8, 0);
x_11 = l_Lean_Elab_Term_adaptExpander(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabLeadingParserMacro___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabLeadingParserMacro___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabLeadingParserMacro");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLeadingParserMacro), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_leading__parser___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Term_getDeclName_x3f(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_mk_string("invalid `trailing_parser` macro, it must be used in definitions");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_box(0);
lean_inc(x_18);
x_20 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_19, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_101; 
x_101 = l___private_Init_Meta_0__Lean_quoteNameMk(x_18);
x_21 = x_101;
goto block_100;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_18);
x_102 = lean_ctor_get(x_20, 0);
lean_inc(x_102);
lean_dec(x_20);
x_103 = lean_box(0);
x_104 = lean_mk_string("Lean");
x_105 = lean_name_mk_string(x_103, x_104);
x_106 = lean_mk_string("Parser");
x_107 = lean_name_mk_string(x_105, x_106);
x_108 = lean_mk_string("Term");
x_109 = lean_name_mk_string(x_107, x_108);
x_110 = lean_mk_string("quotedName");
x_111 = lean_name_mk_string(x_109, x_110);
x_112 = lean_mk_string(".");
x_113 = l_String_intercalate(x_112, x_102);
x_114 = lean_mk_string("`");
x_115 = lean_string_append(x_114, x_113);
lean_dec(x_113);
x_116 = l_Lean_nameLitKind;
x_117 = lean_box(2);
x_118 = l_Lean_Syntax_mkLit(x_116, x_115, x_117);
x_119 = lean_unsigned_to_nat(1u);
x_120 = lean_mk_empty_array_with_capacity(x_119);
x_121 = lean_array_push(x_120, x_118);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_111);
lean_ctor_set(x_122, 1, x_121);
x_21 = x_122;
goto block_100;
}
block_100:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_8, x_9, x_17);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_24);
lean_dec(x_4);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_27);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_box(0);
x_32 = lean_mk_string("Lean");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("Parser");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("Term");
lean_inc(x_35);
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("app");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("Lean.Parser.trailingNode");
x_41 = lean_string_utf8_byte_size(x_40);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_41);
x_44 = lean_mk_string("trailingNode");
x_45 = lean_name_mk_string(x_35, x_44);
lean_inc(x_45);
x_46 = l_Lean_addMacroScope(x_30, x_45, x_26);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_19);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_19);
x_49 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_49, 0, x_23);
lean_ctor_set(x_49, 1, x_43);
lean_ctor_set(x_49, 2, x_46);
lean_ctor_set(x_49, 3, x_48);
x_50 = lean_mk_string("null");
x_51 = lean_name_mk_string(x_31, x_50);
x_52 = lean_unsigned_to_nat(4u);
x_53 = lean_mk_empty_array_with_capacity(x_52);
x_54 = lean_array_push(x_53, x_21);
x_55 = lean_array_push(x_54, x_1);
x_56 = lean_array_push(x_55, x_2);
x_57 = lean_array_push(x_56, x_3);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_unsigned_to_nat(2u);
x_60 = lean_mk_empty_array_with_capacity(x_59);
x_61 = lean_array_push(x_60, x_49);
x_62 = lean_array_push(x_61, x_58);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_39);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set(x_28, 0, x_63);
return x_28;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_64 = lean_ctor_get(x_28, 0);
x_65 = lean_ctor_get(x_28, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_28);
x_66 = lean_box(0);
x_67 = lean_mk_string("Lean");
x_68 = lean_name_mk_string(x_66, x_67);
x_69 = lean_mk_string("Parser");
x_70 = lean_name_mk_string(x_68, x_69);
x_71 = lean_mk_string("Term");
lean_inc(x_70);
x_72 = lean_name_mk_string(x_70, x_71);
x_73 = lean_mk_string("app");
x_74 = lean_name_mk_string(x_72, x_73);
x_75 = lean_mk_string("Lean.Parser.trailingNode");
x_76 = lean_string_utf8_byte_size(x_75);
x_77 = lean_unsigned_to_nat(0u);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_78, 2, x_76);
x_79 = lean_mk_string("trailingNode");
x_80 = lean_name_mk_string(x_70, x_79);
lean_inc(x_80);
x_81 = l_Lean_addMacroScope(x_64, x_80, x_26);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_19);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_19);
x_84 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_84, 0, x_23);
lean_ctor_set(x_84, 1, x_78);
lean_ctor_set(x_84, 2, x_81);
lean_ctor_set(x_84, 3, x_83);
x_85 = lean_mk_string("null");
x_86 = lean_name_mk_string(x_66, x_85);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_mk_empty_array_with_capacity(x_87);
x_89 = lean_array_push(x_88, x_21);
x_90 = lean_array_push(x_89, x_1);
x_91 = lean_array_push(x_90, x_2);
x_92 = lean_array_push(x_91, x_3);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_86);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_unsigned_to_nat(2u);
x_95 = lean_mk_empty_array_with_capacity(x_94);
x_96 = lean_array_push(x_95, x_84);
x_97 = lean_array_push(x_96, x_93);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_74);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_65);
return x_99;
}
}
}
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = l_Lean_Parser_maxPrec;
x_15 = l_Nat_repr(x_14);
x_16 = l_Lean_numLitKind;
x_17 = lean_box(2);
x_18 = l_Lean_Syntax_mkLit(x_16, x_15, x_17);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Nat_repr(x_19);
x_21 = l_Lean_Syntax_mkLit(x_16, x_20, x_17);
x_22 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(x_18, x_21, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_4, 0);
lean_inc(x_23);
lean_dec(x_4);
x_24 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(x_18, x_23, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_24;
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Nat_repr(x_26);
x_28 = l_Lean_numLitKind;
x_29 = lean_box(2);
x_30 = l_Lean_Syntax_mkLit(x_28, x_27, x_29);
x_31 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(x_25, x_30, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_ctor_get(x_4, 0);
lean_inc(x_33);
lean_dec(x_4);
x_34 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_elabTParserMacroAux(x_32, x_33, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_34;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(2u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_nullKind;
lean_inc(x_12);
x_15 = l_Lean_Syntax_isNodeOf(x_12, x_14, x_11);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
x_16 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_10);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = l_Lean_Syntax_getArg(x_12, x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1(x_1, x_3, x_20, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_12);
x_22 = lean_box(0);
x_23 = lean_box(0);
x_24 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1(x_1, x_3, x_23, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_16 = lean_mk_string("trailing_parser");
x_17 = lean_name_mk_string(x_15, x_16);
lean_inc(x_1);
x_18 = l_Lean_Syntax_isOfKind(x_1, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_8);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = l_Lean_Syntax_isNone(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = l_Lean_nullKind;
x_24 = lean_unsigned_to_nat(2u);
lean_inc(x_21);
x_25 = l_Lean_Syntax_isNodeOf(x_21, x_23, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_26 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_8);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = l_Lean_Syntax_getArg(x_21, x_20);
lean_dec(x_21);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_box(0);
x_30 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2(x_1, x_29, x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_21);
x_31 = lean_box(0);
x_32 = lean_box(0);
x_33 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2(x_1, x_32, x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_33;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTrailingParserMacro___lambda__3___boxed), 8, 0);
x_11 = l_Lean_Elab_Term_adaptExpander(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabTrailingParserMacro___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabTrailingParserMacro___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabTrailingParserMacro");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTrailingParserMacro), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_trailing__parser___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = 0;
x_6 = l_Lean_Syntax_getPos_x3f(x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg___boxed), 3, 0);
return x_5;
}
}
lean_object* l_Lean_Elab_getRefPosition___at_Lean_Elab_Term_elabPanic___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg(x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_FileMap_toPosition(x_8, x_11);
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
x_15 = l_Lean_FileMap_toPosition(x_8, x_13);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Term_elabPanic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Elab_getRefPosition___at_Lean_Elab_Term_elabPanic___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getDeclName_x3f(x_3, x_4, x_5, x_6, x_7, x_8, x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(0);
x_32 = lean_mk_string("Lean");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("Parser");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("Term");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("app");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("panicWithPos");
x_41 = lean_string_utf8_byte_size(x_40);
x_42 = lean_unsigned_to_nat(0u);
lean_inc(x_40);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_41);
x_44 = lean_name_mk_string(x_31, x_40);
lean_inc(x_44);
x_45 = l_Lean_addMacroScope(x_29, x_44, x_26);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_49, 0, x_23);
lean_ctor_set(x_49, 1, x_43);
lean_ctor_set(x_49, 2, x_45);
lean_ctor_set(x_49, 3, x_48);
x_50 = lean_mk_string("null");
x_51 = lean_name_mk_string(x_31, x_50);
x_52 = lean_environment_main_module(x_18);
x_53 = 1;
x_54 = l_Lean_Name_toString(x_52, x_53);
x_55 = lean_box(2);
x_56 = l_Lean_Syntax_mkStrLit(x_54, x_55);
lean_dec(x_54);
x_57 = lean_ctor_get(x_13, 0);
lean_inc(x_57);
x_58 = l_Nat_repr(x_57);
x_59 = l_Lean_numLitKind;
x_60 = l_Lean_Syntax_mkLit(x_59, x_58, x_55);
x_61 = lean_ctor_get(x_13, 1);
lean_inc(x_61);
lean_dec(x_13);
x_62 = l_Nat_repr(x_61);
x_63 = l_Lean_Syntax_mkLit(x_59, x_62, x_55);
x_64 = lean_unsigned_to_nat(4u);
x_65 = lean_mk_empty_array_with_capacity(x_64);
x_66 = lean_array_push(x_65, x_56);
x_67 = lean_array_push(x_66, x_60);
x_68 = lean_array_push(x_67, x_63);
x_69 = lean_array_push(x_68, x_11);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_51);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_unsigned_to_nat(2u);
x_72 = lean_mk_empty_array_with_capacity(x_71);
x_73 = lean_array_push(x_72, x_49);
x_74 = lean_array_push(x_73, x_70);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_39);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__2(x_1, x_2, x_75, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_77 = lean_ctor_get(x_19, 1);
lean_inc(x_77);
lean_dec(x_19);
x_78 = lean_ctor_get(x_20, 0);
lean_inc(x_78);
lean_dec(x_20);
x_79 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_77);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_box(0);
x_89 = lean_mk_string("Lean");
x_90 = lean_name_mk_string(x_88, x_89);
x_91 = lean_mk_string("Parser");
x_92 = lean_name_mk_string(x_90, x_91);
x_93 = lean_mk_string("Term");
x_94 = lean_name_mk_string(x_92, x_93);
x_95 = lean_mk_string("app");
x_96 = lean_name_mk_string(x_94, x_95);
x_97 = lean_mk_string("panicWithPosWithDecl");
x_98 = lean_string_utf8_byte_size(x_97);
x_99 = lean_unsigned_to_nat(0u);
lean_inc(x_97);
x_100 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_100, 2, x_98);
x_101 = lean_name_mk_string(x_88, x_97);
lean_inc(x_101);
x_102 = l_Lean_addMacroScope(x_86, x_101, x_83);
x_103 = lean_box(0);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_106, 0, x_80);
lean_ctor_set(x_106, 1, x_100);
lean_ctor_set(x_106, 2, x_102);
lean_ctor_set(x_106, 3, x_105);
x_107 = lean_mk_string("null");
x_108 = lean_name_mk_string(x_88, x_107);
x_109 = lean_environment_main_module(x_18);
x_110 = 1;
x_111 = l_Lean_Name_toString(x_109, x_110);
x_112 = lean_box(2);
x_113 = l_Lean_Syntax_mkStrLit(x_111, x_112);
lean_dec(x_111);
x_114 = l_Lean_Name_toString(x_78, x_110);
x_115 = l_Lean_Syntax_mkStrLit(x_114, x_112);
lean_dec(x_114);
x_116 = lean_ctor_get(x_13, 0);
lean_inc(x_116);
x_117 = l_Nat_repr(x_116);
x_118 = l_Lean_numLitKind;
x_119 = l_Lean_Syntax_mkLit(x_118, x_117, x_112);
x_120 = lean_ctor_get(x_13, 1);
lean_inc(x_120);
lean_dec(x_13);
x_121 = l_Nat_repr(x_120);
x_122 = l_Lean_Syntax_mkLit(x_118, x_121, x_112);
x_123 = lean_unsigned_to_nat(5u);
x_124 = lean_mk_empty_array_with_capacity(x_123);
x_125 = lean_array_push(x_124, x_113);
x_126 = lean_array_push(x_125, x_115);
x_127 = lean_array_push(x_126, x_119);
x_128 = lean_array_push(x_127, x_122);
x_129 = lean_array_push(x_128, x_11);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_108);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_unsigned_to_nat(2u);
x_132 = lean_mk_empty_array_with_capacity(x_131);
x_133 = lean_array_push(x_132, x_106);
x_134 = lean_array_push(x_133, x_130);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_96);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_Lean_Elab_Term_elabAnonymousCtor___lambda__2(x_1, x_2, x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_87);
return x_136;
}
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getRefPos___at_Lean_Elab_Term_elabPanic___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_getRefPosition___at_Lean_Elab_Term_elabPanic___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_getRefPosition___at_Lean_Elab_Term_elabPanic___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabPanic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabPanic");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabPanic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabPanic___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabPanic___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabPanic), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabPanic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_panic___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabPanic___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabPanic___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_expandUnreachable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_box(0);
x_7 = lean_mk_string("Lean");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Parser");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("Term");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("panic");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("panic!");
lean_inc(x_5);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string("strLit");
x_18 = lean_name_mk_string(x_6, x_17);
x_19 = lean_mk_string("\"unreachable code has been reached\"");
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_mk_empty_array_with_capacity(x_21);
x_23 = lean_array_push(x_22, x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_unsigned_to_nat(2u);
x_26 = lean_mk_empty_array_with_capacity(x_25);
x_27 = lean_array_push(x_26, x_16);
x_28 = lean_array_push(x_27, x_24);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_14);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_3, 0, x_29);
return x_3;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get(x_3, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_3);
x_32 = lean_box(0);
x_33 = lean_mk_string("Lean");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_string("Parser");
x_36 = lean_name_mk_string(x_34, x_35);
x_37 = lean_mk_string("Term");
x_38 = lean_name_mk_string(x_36, x_37);
x_39 = lean_mk_string("panic");
x_40 = lean_name_mk_string(x_38, x_39);
x_41 = lean_mk_string("panic!");
lean_inc(x_30);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_30);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_mk_string("strLit");
x_44 = lean_name_mk_string(x_32, x_43);
x_45 = lean_mk_string("\"unreachable code has been reached\"");
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_30);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
x_49 = lean_array_push(x_48, x_46);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_unsigned_to_nat(2u);
x_52 = lean_mk_empty_array_with_capacity(x_51);
x_53 = lean_array_push(x_52, x_42);
x_54 = lean_array_push(x_53, x_50);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_40);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_31);
return x_56;
}
}
}
lean_object* l_Lean_Elab_Term_expandUnreachable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandUnreachable___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandUnreachable___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_expandUnreachable___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandUnreachable___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_expandUnreachable(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandUnreachable");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandUnreachable___boxed), 1, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandUnreachable(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_unreachable___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_expandAssert_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_expandAssert_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAssert_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandAssert(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(3u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_inc(x_5);
x_8 = l_Lean_Syntax_reprint(x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_box(0);
x_13 = lean_mk_string("termIfThenElse");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("if");
lean_inc(x_11);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string("then");
lean_inc(x_11);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("else");
lean_inc(x_11);
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_mk_string("Lean");
x_22 = lean_name_mk_string(x_12, x_21);
x_23 = lean_mk_string("Parser");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("Term");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("panic");
lean_inc(x_26);
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("panic!");
lean_inc(x_11);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_11);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_mk_string("paren");
x_32 = lean_name_mk_string(x_26, x_31);
x_33 = lean_mk_string("(");
lean_inc(x_11);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_11);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("null");
x_36 = lean_name_mk_string(x_12, x_35);
x_37 = lean_mk_string("strLit");
x_38 = lean_name_mk_string(x_12, x_37);
x_39 = lean_mk_string("\"assertion violation\"");
lean_inc(x_11);
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_11);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_empty_array_with_capacity(x_4);
x_42 = lean_array_push(x_41, x_40);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
lean_inc(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_36);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_unsigned_to_nat(2u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
lean_inc(x_48);
x_49 = lean_array_push(x_48, x_43);
x_50 = lean_array_push(x_49, x_46);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_36);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_mk_string(")");
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_11);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_mk_empty_array_with_capacity(x_6);
x_55 = lean_array_push(x_54, x_34);
x_56 = lean_array_push(x_55, x_51);
x_57 = lean_array_push(x_56, x_53);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_32);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_array_push(x_48, x_30);
x_60 = lean_array_push(x_59, x_58);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_28);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_unsigned_to_nat(6u);
x_63 = lean_mk_empty_array_with_capacity(x_62);
x_64 = lean_array_push(x_63, x_16);
x_65 = lean_array_push(x_64, x_5);
x_66 = lean_array_push(x_65, x_18);
x_67 = lean_array_push(x_66, x_7);
x_68 = lean_array_push(x_67, x_20);
x_69 = lean_array_push(x_68, x_61);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_14);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_9, 0, x_70);
return x_9;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_71 = lean_ctor_get(x_9, 0);
x_72 = lean_ctor_get(x_9, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_9);
x_73 = lean_box(0);
x_74 = lean_mk_string("termIfThenElse");
x_75 = lean_name_mk_string(x_73, x_74);
x_76 = lean_mk_string("if");
lean_inc(x_71);
x_77 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_77, 0, x_71);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("then");
lean_inc(x_71);
x_79 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_79, 0, x_71);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_mk_string("else");
lean_inc(x_71);
x_81 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_mk_string("Lean");
x_83 = lean_name_mk_string(x_73, x_82);
x_84 = lean_mk_string("Parser");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_mk_string("Term");
x_87 = lean_name_mk_string(x_85, x_86);
x_88 = lean_mk_string("panic");
lean_inc(x_87);
x_89 = lean_name_mk_string(x_87, x_88);
x_90 = lean_mk_string("panic!");
lean_inc(x_71);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_71);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_mk_string("paren");
x_93 = lean_name_mk_string(x_87, x_92);
x_94 = lean_mk_string("(");
lean_inc(x_71);
x_95 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_95, 0, x_71);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_mk_string("null");
x_97 = lean_name_mk_string(x_73, x_96);
x_98 = lean_mk_string("strLit");
x_99 = lean_name_mk_string(x_73, x_98);
x_100 = lean_mk_string("\"assertion violation\"");
lean_inc(x_71);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_71);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_empty_array_with_capacity(x_4);
x_103 = lean_array_push(x_102, x_101);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_unsigned_to_nat(0u);
x_106 = lean_mk_empty_array_with_capacity(x_105);
lean_inc(x_97);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_unsigned_to_nat(2u);
x_109 = lean_mk_empty_array_with_capacity(x_108);
lean_inc(x_109);
x_110 = lean_array_push(x_109, x_104);
x_111 = lean_array_push(x_110, x_107);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_97);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_mk_string(")");
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_71);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_mk_empty_array_with_capacity(x_6);
x_116 = lean_array_push(x_115, x_95);
x_117 = lean_array_push(x_116, x_112);
x_118 = lean_array_push(x_117, x_114);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_93);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_array_push(x_109, x_91);
x_121 = lean_array_push(x_120, x_119);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_89);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_unsigned_to_nat(6u);
x_124 = lean_mk_empty_array_with_capacity(x_123);
x_125 = lean_array_push(x_124, x_77);
x_126 = lean_array_push(x_125, x_5);
x_127 = lean_array_push(x_126, x_79);
x_128 = lean_array_push(x_127, x_7);
x_129 = lean_array_push(x_128, x_81);
x_130 = lean_array_push(x_129, x_122);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_75);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_72);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_133 = lean_ctor_get(x_8, 0);
lean_inc(x_133);
lean_dec(x_8);
x_134 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_135 = !lean_is_exclusive(x_134);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_136 = lean_ctor_get(x_134, 0);
x_137 = lean_box(0);
x_138 = lean_mk_string("termIfThenElse");
x_139 = lean_name_mk_string(x_137, x_138);
x_140 = lean_mk_string("if");
lean_inc(x_136);
x_141 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_141, 0, x_136);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_mk_string("then");
lean_inc(x_136);
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_136);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_mk_string("else");
lean_inc(x_136);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_136);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_mk_string("Lean");
x_147 = lean_name_mk_string(x_137, x_146);
x_148 = lean_mk_string("Parser");
x_149 = lean_name_mk_string(x_147, x_148);
x_150 = lean_mk_string("Term");
x_151 = lean_name_mk_string(x_149, x_150);
x_152 = lean_mk_string("panic");
lean_inc(x_151);
x_153 = lean_name_mk_string(x_151, x_152);
x_154 = lean_mk_string("panic!");
lean_inc(x_136);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_136);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_mk_string("paren");
x_157 = lean_name_mk_string(x_151, x_156);
x_158 = lean_mk_string("(");
lean_inc(x_136);
x_159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_159, 0, x_136);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_mk_string("null");
x_161 = lean_name_mk_string(x_137, x_160);
x_162 = lean_mk_string("term_++_");
x_163 = lean_name_mk_string(x_137, x_162);
x_164 = lean_mk_string("strLit");
x_165 = lean_name_mk_string(x_137, x_164);
x_166 = lean_mk_string("\"assertion violation: \"");
lean_inc(x_136);
x_167 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_167, 0, x_136);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_mk_empty_array_with_capacity(x_4);
x_169 = lean_array_push(x_168, x_167);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_165);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_mk_string("++");
lean_inc(x_136);
x_172 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_172, 0, x_136);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_box(2);
x_174 = l_Lean_Syntax_mkStrLit(x_133, x_173);
lean_dec(x_133);
x_175 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_175);
x_176 = lean_array_push(x_175, x_170);
x_177 = lean_array_push(x_176, x_172);
x_178 = lean_array_push(x_177, x_174);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_163);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_unsigned_to_nat(0u);
x_181 = lean_mk_empty_array_with_capacity(x_180);
lean_inc(x_161);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_161);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_unsigned_to_nat(2u);
x_184 = lean_mk_empty_array_with_capacity(x_183);
lean_inc(x_184);
x_185 = lean_array_push(x_184, x_179);
x_186 = lean_array_push(x_185, x_182);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_161);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_mk_string(")");
x_189 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_189, 0, x_136);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_array_push(x_175, x_159);
x_191 = lean_array_push(x_190, x_187);
x_192 = lean_array_push(x_191, x_189);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_157);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_array_push(x_184, x_155);
x_195 = lean_array_push(x_194, x_193);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_153);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_unsigned_to_nat(6u);
x_198 = lean_mk_empty_array_with_capacity(x_197);
x_199 = lean_array_push(x_198, x_141);
x_200 = lean_array_push(x_199, x_5);
x_201 = lean_array_push(x_200, x_143);
x_202 = lean_array_push(x_201, x_7);
x_203 = lean_array_push(x_202, x_145);
x_204 = lean_array_push(x_203, x_196);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_139);
lean_ctor_set(x_205, 1, x_204);
lean_ctor_set(x_134, 0, x_205);
return x_134;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_206 = lean_ctor_get(x_134, 0);
x_207 = lean_ctor_get(x_134, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_134);
x_208 = lean_box(0);
x_209 = lean_mk_string("termIfThenElse");
x_210 = lean_name_mk_string(x_208, x_209);
x_211 = lean_mk_string("if");
lean_inc(x_206);
x_212 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_212, 0, x_206);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_mk_string("then");
lean_inc(x_206);
x_214 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_214, 0, x_206);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_mk_string("else");
lean_inc(x_206);
x_216 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_216, 0, x_206);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_mk_string("Lean");
x_218 = lean_name_mk_string(x_208, x_217);
x_219 = lean_mk_string("Parser");
x_220 = lean_name_mk_string(x_218, x_219);
x_221 = lean_mk_string("Term");
x_222 = lean_name_mk_string(x_220, x_221);
x_223 = lean_mk_string("panic");
lean_inc(x_222);
x_224 = lean_name_mk_string(x_222, x_223);
x_225 = lean_mk_string("panic!");
lean_inc(x_206);
x_226 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_226, 0, x_206);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_mk_string("paren");
x_228 = lean_name_mk_string(x_222, x_227);
x_229 = lean_mk_string("(");
lean_inc(x_206);
x_230 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_230, 0, x_206);
lean_ctor_set(x_230, 1, x_229);
x_231 = lean_mk_string("null");
x_232 = lean_name_mk_string(x_208, x_231);
x_233 = lean_mk_string("term_++_");
x_234 = lean_name_mk_string(x_208, x_233);
x_235 = lean_mk_string("strLit");
x_236 = lean_name_mk_string(x_208, x_235);
x_237 = lean_mk_string("\"assertion violation: \"");
lean_inc(x_206);
x_238 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_238, 0, x_206);
lean_ctor_set(x_238, 1, x_237);
x_239 = lean_mk_empty_array_with_capacity(x_4);
x_240 = lean_array_push(x_239, x_238);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_236);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_mk_string("++");
lean_inc(x_206);
x_243 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_243, 0, x_206);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_box(2);
x_245 = l_Lean_Syntax_mkStrLit(x_133, x_244);
lean_dec(x_133);
x_246 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_246);
x_247 = lean_array_push(x_246, x_241);
x_248 = lean_array_push(x_247, x_243);
x_249 = lean_array_push(x_248, x_245);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_234);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_unsigned_to_nat(0u);
x_252 = lean_mk_empty_array_with_capacity(x_251);
lean_inc(x_232);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_232);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_unsigned_to_nat(2u);
x_255 = lean_mk_empty_array_with_capacity(x_254);
lean_inc(x_255);
x_256 = lean_array_push(x_255, x_250);
x_257 = lean_array_push(x_256, x_253);
x_258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_258, 0, x_232);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_mk_string(")");
x_260 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_260, 0, x_206);
lean_ctor_set(x_260, 1, x_259);
x_261 = lean_array_push(x_246, x_230);
x_262 = lean_array_push(x_261, x_258);
x_263 = lean_array_push(x_262, x_260);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_228);
lean_ctor_set(x_264, 1, x_263);
x_265 = lean_array_push(x_255, x_226);
x_266 = lean_array_push(x_265, x_264);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_224);
lean_ctor_set(x_267, 1, x_266);
x_268 = lean_unsigned_to_nat(6u);
x_269 = lean_mk_empty_array_with_capacity(x_268);
x_270 = lean_array_push(x_269, x_212);
x_271 = lean_array_push(x_270, x_5);
x_272 = lean_array_push(x_271, x_214);
x_273 = lean_array_push(x_272, x_7);
x_274 = lean_array_push(x_273, x_216);
x_275 = lean_array_push(x_274, x_267);
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_210);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_277, 0, x_276);
lean_ctor_set(x_277, 1, x_207);
return x_277;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandAssert___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandAssert(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAssert___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandAssert");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAssert___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandAssert___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAssert___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAssert___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandAssert(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_assert___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandAssert___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandAssert___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_expandDbgTrace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(3u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_inc(x_5);
x_8 = l_Lean_Syntax_getKind(x_5);
x_9 = l_Lean_interpolatedStrKind;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_mk_string("Lean");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("Parser");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Term");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("app");
lean_inc(x_22);
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("dbgTrace");
x_26 = lean_string_utf8_byte_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
lean_inc(x_25);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_26);
x_29 = lean_name_mk_string(x_16, x_25);
lean_inc(x_14);
lean_inc(x_29);
lean_inc(x_15);
x_30 = l_Lean_addMacroScope(x_15, x_29, x_14);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
lean_inc(x_13);
x_34 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_34, 0, x_13);
lean_ctor_set(x_34, 1, x_28);
lean_ctor_set(x_34, 2, x_30);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_mk_string("null");
x_36 = lean_name_mk_string(x_16, x_35);
x_37 = lean_mk_string("paren");
lean_inc(x_22);
x_38 = lean_name_mk_string(x_22, x_37);
x_39 = lean_mk_string("(");
lean_inc(x_13);
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_string("toString");
x_42 = lean_string_utf8_byte_size(x_41);
lean_inc(x_41);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_27);
lean_ctor_set(x_43, 2, x_42);
lean_inc(x_41);
x_44 = lean_name_mk_string(x_16, x_41);
x_45 = l_Lean_addMacroScope(x_15, x_44, x_14);
x_46 = lean_mk_string("ToString");
x_47 = lean_name_mk_string(x_16, x_46);
x_48 = lean_name_mk_string(x_47, x_41);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_31);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_31);
lean_inc(x_13);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_13);
lean_ctor_set(x_51, 1, x_43);
lean_ctor_set(x_51, 2, x_45);
lean_ctor_set(x_51, 3, x_50);
x_52 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_52);
x_53 = lean_array_push(x_52, x_5);
lean_inc(x_36);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_36);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_unsigned_to_nat(2u);
x_56 = lean_mk_empty_array_with_capacity(x_55);
lean_inc(x_56);
x_57 = lean_array_push(x_56, x_51);
x_58 = lean_array_push(x_57, x_54);
lean_inc(x_24);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_24);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_mk_empty_array_with_capacity(x_27);
lean_inc(x_36);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_36);
lean_ctor_set(x_61, 1, x_60);
lean_inc(x_56);
x_62 = lean_array_push(x_56, x_59);
x_63 = lean_array_push(x_62, x_61);
lean_inc(x_36);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_36);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_string(")");
lean_inc(x_13);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_13);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_67);
x_68 = lean_array_push(x_67, x_40);
x_69 = lean_array_push(x_68, x_64);
x_70 = lean_array_push(x_69, x_66);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_38);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_mk_string("fun");
lean_inc(x_72);
lean_inc(x_22);
x_73 = lean_name_mk_string(x_22, x_72);
lean_inc(x_13);
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_13);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_mk_string("basicFun");
lean_inc(x_22);
x_76 = lean_name_mk_string(x_22, x_75);
x_77 = lean_mk_string("hole");
x_78 = lean_name_mk_string(x_22, x_77);
x_79 = lean_mk_string("_");
lean_inc(x_13);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_13);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_52);
x_81 = lean_array_push(x_52, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_78);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_52, x_82);
lean_inc(x_36);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_36);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_mk_string("=>");
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_13);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_array_push(x_67, x_84);
x_88 = lean_array_push(x_87, x_86);
x_89 = lean_array_push(x_88, x_7);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_76);
lean_ctor_set(x_90, 1, x_89);
lean_inc(x_56);
x_91 = lean_array_push(x_56, x_74);
x_92 = lean_array_push(x_91, x_90);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_73);
lean_ctor_set(x_93, 1, x_92);
lean_inc(x_56);
x_94 = lean_array_push(x_56, x_71);
x_95 = lean_array_push(x_94, x_93);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_36);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_array_push(x_56, x_34);
x_98 = lean_array_push(x_97, x_96);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_24);
lean_ctor_set(x_99, 1, x_98);
lean_ctor_set(x_11, 0, x_99);
return x_11;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_100 = lean_ctor_get(x_11, 0);
x_101 = lean_ctor_get(x_11, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_11);
x_102 = lean_ctor_get(x_2, 2);
lean_inc(x_102);
x_103 = lean_ctor_get(x_2, 1);
lean_inc(x_103);
lean_dec(x_2);
x_104 = lean_box(0);
x_105 = lean_mk_string("Lean");
x_106 = lean_name_mk_string(x_104, x_105);
x_107 = lean_mk_string("Parser");
x_108 = lean_name_mk_string(x_106, x_107);
x_109 = lean_mk_string("Term");
x_110 = lean_name_mk_string(x_108, x_109);
x_111 = lean_mk_string("app");
lean_inc(x_110);
x_112 = lean_name_mk_string(x_110, x_111);
x_113 = lean_mk_string("dbgTrace");
x_114 = lean_string_utf8_byte_size(x_113);
x_115 = lean_unsigned_to_nat(0u);
lean_inc(x_113);
x_116 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_116, 2, x_114);
x_117 = lean_name_mk_string(x_104, x_113);
lean_inc(x_102);
lean_inc(x_117);
lean_inc(x_103);
x_118 = l_Lean_addMacroScope(x_103, x_117, x_102);
x_119 = lean_box(0);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
lean_inc(x_100);
x_122 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_122, 0, x_100);
lean_ctor_set(x_122, 1, x_116);
lean_ctor_set(x_122, 2, x_118);
lean_ctor_set(x_122, 3, x_121);
x_123 = lean_mk_string("null");
x_124 = lean_name_mk_string(x_104, x_123);
x_125 = lean_mk_string("paren");
lean_inc(x_110);
x_126 = lean_name_mk_string(x_110, x_125);
x_127 = lean_mk_string("(");
lean_inc(x_100);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_100);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_mk_string("toString");
x_130 = lean_string_utf8_byte_size(x_129);
lean_inc(x_129);
x_131 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_115);
lean_ctor_set(x_131, 2, x_130);
lean_inc(x_129);
x_132 = lean_name_mk_string(x_104, x_129);
x_133 = l_Lean_addMacroScope(x_103, x_132, x_102);
x_134 = lean_mk_string("ToString");
x_135 = lean_name_mk_string(x_104, x_134);
x_136 = lean_name_mk_string(x_135, x_129);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_119);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_119);
lean_inc(x_100);
x_139 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_139, 0, x_100);
lean_ctor_set(x_139, 1, x_131);
lean_ctor_set(x_139, 2, x_133);
lean_ctor_set(x_139, 3, x_138);
x_140 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_140);
x_141 = lean_array_push(x_140, x_5);
lean_inc(x_124);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_124);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_unsigned_to_nat(2u);
x_144 = lean_mk_empty_array_with_capacity(x_143);
lean_inc(x_144);
x_145 = lean_array_push(x_144, x_139);
x_146 = lean_array_push(x_145, x_142);
lean_inc(x_112);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_112);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_mk_empty_array_with_capacity(x_115);
lean_inc(x_124);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_124);
lean_ctor_set(x_149, 1, x_148);
lean_inc(x_144);
x_150 = lean_array_push(x_144, x_147);
x_151 = lean_array_push(x_150, x_149);
lean_inc(x_124);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_124);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_mk_string(")");
lean_inc(x_100);
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_100);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_155);
x_156 = lean_array_push(x_155, x_128);
x_157 = lean_array_push(x_156, x_152);
x_158 = lean_array_push(x_157, x_154);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_126);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_mk_string("fun");
lean_inc(x_160);
lean_inc(x_110);
x_161 = lean_name_mk_string(x_110, x_160);
lean_inc(x_100);
x_162 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_162, 0, x_100);
lean_ctor_set(x_162, 1, x_160);
x_163 = lean_mk_string("basicFun");
lean_inc(x_110);
x_164 = lean_name_mk_string(x_110, x_163);
x_165 = lean_mk_string("hole");
x_166 = lean_name_mk_string(x_110, x_165);
x_167 = lean_mk_string("_");
lean_inc(x_100);
x_168 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_168, 0, x_100);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_140);
x_169 = lean_array_push(x_140, x_168);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_166);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_array_push(x_140, x_170);
lean_inc(x_124);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_124);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_mk_string("=>");
x_174 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_174, 0, x_100);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_array_push(x_155, x_172);
x_176 = lean_array_push(x_175, x_174);
x_177 = lean_array_push(x_176, x_7);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_164);
lean_ctor_set(x_178, 1, x_177);
lean_inc(x_144);
x_179 = lean_array_push(x_144, x_162);
x_180 = lean_array_push(x_179, x_178);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_161);
lean_ctor_set(x_181, 1, x_180);
lean_inc(x_144);
x_182 = lean_array_push(x_144, x_159);
x_183 = lean_array_push(x_182, x_181);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_124);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_array_push(x_144, x_122);
x_186 = lean_array_push(x_185, x_184);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_112);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_101);
return x_188;
}
}
else
{
lean_object* x_189; uint8_t x_190; 
x_189 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_190 = !lean_is_exclusive(x_189);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_191 = lean_ctor_get(x_189, 0);
x_192 = lean_ctor_get(x_2, 2);
lean_inc(x_192);
x_193 = lean_ctor_get(x_2, 1);
lean_inc(x_193);
lean_dec(x_2);
x_194 = lean_box(0);
x_195 = lean_mk_string("Lean");
x_196 = lean_name_mk_string(x_194, x_195);
x_197 = lean_mk_string("Parser");
x_198 = lean_name_mk_string(x_196, x_197);
x_199 = lean_mk_string("Term");
x_200 = lean_name_mk_string(x_198, x_199);
x_201 = lean_mk_string("app");
lean_inc(x_200);
x_202 = lean_name_mk_string(x_200, x_201);
x_203 = lean_mk_string("dbgTrace");
x_204 = lean_string_utf8_byte_size(x_203);
x_205 = lean_unsigned_to_nat(0u);
lean_inc(x_203);
x_206 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_205);
lean_ctor_set(x_206, 2, x_204);
x_207 = lean_name_mk_string(x_194, x_203);
lean_inc(x_207);
x_208 = l_Lean_addMacroScope(x_193, x_207, x_192);
x_209 = lean_box(0);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_209);
lean_inc(x_191);
x_212 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_212, 0, x_191);
lean_ctor_set(x_212, 1, x_206);
lean_ctor_set(x_212, 2, x_208);
lean_ctor_set(x_212, 3, x_211);
x_213 = lean_mk_string("null");
x_214 = lean_name_mk_string(x_194, x_213);
x_215 = lean_mk_string("paren");
lean_inc(x_200);
x_216 = lean_name_mk_string(x_200, x_215);
x_217 = lean_mk_string("(");
lean_inc(x_191);
x_218 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_218, 0, x_191);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_mk_string("termS!_");
x_220 = lean_name_mk_string(x_194, x_219);
x_221 = lean_mk_string("s!");
lean_inc(x_191);
x_222 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_222, 0, x_191);
lean_ctor_set(x_222, 1, x_221);
x_223 = lean_unsigned_to_nat(2u);
x_224 = lean_mk_empty_array_with_capacity(x_223);
lean_inc(x_224);
x_225 = lean_array_push(x_224, x_222);
x_226 = lean_array_push(x_225, x_5);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_220);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_mk_empty_array_with_capacity(x_205);
lean_inc(x_214);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_214);
lean_ctor_set(x_229, 1, x_228);
lean_inc(x_224);
x_230 = lean_array_push(x_224, x_227);
x_231 = lean_array_push(x_230, x_229);
lean_inc(x_214);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_214);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_mk_string(")");
lean_inc(x_191);
x_234 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_234, 0, x_191);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_235);
x_236 = lean_array_push(x_235, x_218);
x_237 = lean_array_push(x_236, x_232);
x_238 = lean_array_push(x_237, x_234);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_216);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_mk_string("fun");
lean_inc(x_240);
lean_inc(x_200);
x_241 = lean_name_mk_string(x_200, x_240);
lean_inc(x_191);
x_242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_242, 0, x_191);
lean_ctor_set(x_242, 1, x_240);
x_243 = lean_mk_string("basicFun");
lean_inc(x_200);
x_244 = lean_name_mk_string(x_200, x_243);
x_245 = lean_mk_string("hole");
x_246 = lean_name_mk_string(x_200, x_245);
x_247 = lean_mk_string("_");
lean_inc(x_191);
x_248 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_248, 0, x_191);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_249);
x_250 = lean_array_push(x_249, x_248);
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_246);
lean_ctor_set(x_251, 1, x_250);
x_252 = lean_array_push(x_249, x_251);
lean_inc(x_214);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_214);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_mk_string("=>");
x_255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_255, 0, x_191);
lean_ctor_set(x_255, 1, x_254);
x_256 = lean_array_push(x_235, x_253);
x_257 = lean_array_push(x_256, x_255);
x_258 = lean_array_push(x_257, x_7);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_244);
lean_ctor_set(x_259, 1, x_258);
lean_inc(x_224);
x_260 = lean_array_push(x_224, x_242);
x_261 = lean_array_push(x_260, x_259);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_241);
lean_ctor_set(x_262, 1, x_261);
lean_inc(x_224);
x_263 = lean_array_push(x_224, x_239);
x_264 = lean_array_push(x_263, x_262);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_214);
lean_ctor_set(x_265, 1, x_264);
x_266 = lean_array_push(x_224, x_212);
x_267 = lean_array_push(x_266, x_265);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_202);
lean_ctor_set(x_268, 1, x_267);
lean_ctor_set(x_189, 0, x_268);
return x_189;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_269 = lean_ctor_get(x_189, 0);
x_270 = lean_ctor_get(x_189, 1);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_189);
x_271 = lean_ctor_get(x_2, 2);
lean_inc(x_271);
x_272 = lean_ctor_get(x_2, 1);
lean_inc(x_272);
lean_dec(x_2);
x_273 = lean_box(0);
x_274 = lean_mk_string("Lean");
x_275 = lean_name_mk_string(x_273, x_274);
x_276 = lean_mk_string("Parser");
x_277 = lean_name_mk_string(x_275, x_276);
x_278 = lean_mk_string("Term");
x_279 = lean_name_mk_string(x_277, x_278);
x_280 = lean_mk_string("app");
lean_inc(x_279);
x_281 = lean_name_mk_string(x_279, x_280);
x_282 = lean_mk_string("dbgTrace");
x_283 = lean_string_utf8_byte_size(x_282);
x_284 = lean_unsigned_to_nat(0u);
lean_inc(x_282);
x_285 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_285, 0, x_282);
lean_ctor_set(x_285, 1, x_284);
lean_ctor_set(x_285, 2, x_283);
x_286 = lean_name_mk_string(x_273, x_282);
lean_inc(x_286);
x_287 = l_Lean_addMacroScope(x_272, x_286, x_271);
x_288 = lean_box(0);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_286);
lean_ctor_set(x_289, 1, x_288);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_288);
lean_inc(x_269);
x_291 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_291, 0, x_269);
lean_ctor_set(x_291, 1, x_285);
lean_ctor_set(x_291, 2, x_287);
lean_ctor_set(x_291, 3, x_290);
x_292 = lean_mk_string("null");
x_293 = lean_name_mk_string(x_273, x_292);
x_294 = lean_mk_string("paren");
lean_inc(x_279);
x_295 = lean_name_mk_string(x_279, x_294);
x_296 = lean_mk_string("(");
lean_inc(x_269);
x_297 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_297, 0, x_269);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_mk_string("termS!_");
x_299 = lean_name_mk_string(x_273, x_298);
x_300 = lean_mk_string("s!");
lean_inc(x_269);
x_301 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_301, 0, x_269);
lean_ctor_set(x_301, 1, x_300);
x_302 = lean_unsigned_to_nat(2u);
x_303 = lean_mk_empty_array_with_capacity(x_302);
lean_inc(x_303);
x_304 = lean_array_push(x_303, x_301);
x_305 = lean_array_push(x_304, x_5);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_299);
lean_ctor_set(x_306, 1, x_305);
x_307 = lean_mk_empty_array_with_capacity(x_284);
lean_inc(x_293);
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_293);
lean_ctor_set(x_308, 1, x_307);
lean_inc(x_303);
x_309 = lean_array_push(x_303, x_306);
x_310 = lean_array_push(x_309, x_308);
lean_inc(x_293);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_293);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_mk_string(")");
lean_inc(x_269);
x_313 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_313, 0, x_269);
lean_ctor_set(x_313, 1, x_312);
x_314 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_314);
x_315 = lean_array_push(x_314, x_297);
x_316 = lean_array_push(x_315, x_311);
x_317 = lean_array_push(x_316, x_313);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_295);
lean_ctor_set(x_318, 1, x_317);
x_319 = lean_mk_string("fun");
lean_inc(x_319);
lean_inc(x_279);
x_320 = lean_name_mk_string(x_279, x_319);
lean_inc(x_269);
x_321 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_321, 0, x_269);
lean_ctor_set(x_321, 1, x_319);
x_322 = lean_mk_string("basicFun");
lean_inc(x_279);
x_323 = lean_name_mk_string(x_279, x_322);
x_324 = lean_mk_string("hole");
x_325 = lean_name_mk_string(x_279, x_324);
x_326 = lean_mk_string("_");
lean_inc(x_269);
x_327 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_327, 0, x_269);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_328);
x_329 = lean_array_push(x_328, x_327);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_325);
lean_ctor_set(x_330, 1, x_329);
x_331 = lean_array_push(x_328, x_330);
lean_inc(x_293);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_293);
lean_ctor_set(x_332, 1, x_331);
x_333 = lean_mk_string("=>");
x_334 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_334, 0, x_269);
lean_ctor_set(x_334, 1, x_333);
x_335 = lean_array_push(x_314, x_332);
x_336 = lean_array_push(x_335, x_334);
x_337 = lean_array_push(x_336, x_7);
x_338 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_338, 0, x_323);
lean_ctor_set(x_338, 1, x_337);
lean_inc(x_303);
x_339 = lean_array_push(x_303, x_321);
x_340 = lean_array_push(x_339, x_338);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_320);
lean_ctor_set(x_341, 1, x_340);
lean_inc(x_303);
x_342 = lean_array_push(x_303, x_318);
x_343 = lean_array_push(x_342, x_341);
x_344 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_344, 0, x_293);
lean_ctor_set(x_344, 1, x_343);
x_345 = lean_array_push(x_303, x_291);
x_346 = lean_array_push(x_345, x_344);
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_281);
lean_ctor_set(x_347, 1, x_346);
x_348 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_348, 0, x_347);
lean_ctor_set(x_348, 1, x_270);
return x_348;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandDbgTrace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandDbgTrace(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandDbgTrace");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDbgTrace___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandDbgTrace(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_dbgTrace___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabSorry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_10 = lean_mk_string("declaration uses 'sorry'");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Elab_log___at_Lean_Elab_Term_traceAtCmdPos___spec__2(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
x_26 = lean_mk_string("Lean");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Parser");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Term");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("app");
lean_inc(x_31);
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("sorryAx");
x_35 = lean_string_utf8_byte_size(x_34);
x_36 = lean_unsigned_to_nat(0u);
lean_inc(x_34);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_35);
x_38 = lean_name_mk_string(x_25, x_34);
lean_inc(x_20);
lean_inc(x_38);
lean_inc(x_23);
x_39 = l_Lean_addMacroScope(x_23, x_38, x_20);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
lean_inc(x_17);
x_43 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_43, 0, x_17);
lean_ctor_set(x_43, 1, x_37);
lean_ctor_set(x_43, 2, x_39);
lean_ctor_set(x_43, 3, x_42);
x_44 = lean_mk_string("null");
x_45 = lean_name_mk_string(x_25, x_44);
x_46 = lean_mk_string("hole");
x_47 = lean_name_mk_string(x_31, x_46);
x_48 = lean_mk_string("_");
lean_inc(x_17);
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_17);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_unsigned_to_nat(1u);
x_51 = lean_mk_empty_array_with_capacity(x_50);
x_52 = lean_array_push(x_51, x_49);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_mk_string("false");
x_55 = lean_string_utf8_byte_size(x_54);
lean_inc(x_54);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_36);
lean_ctor_set(x_56, 2, x_55);
lean_inc(x_54);
x_57 = lean_name_mk_string(x_25, x_54);
x_58 = l_Lean_addMacroScope(x_23, x_57, x_20);
x_59 = lean_mk_string("Bool");
x_60 = lean_name_mk_string(x_25, x_59);
x_61 = lean_name_mk_string(x_60, x_54);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_40);
x_64 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_64, 0, x_17);
lean_ctor_set(x_64, 1, x_56);
lean_ctor_set(x_64, 2, x_58);
lean_ctor_set(x_64, 3, x_63);
x_65 = lean_unsigned_to_nat(2u);
x_66 = lean_mk_empty_array_with_capacity(x_65);
lean_inc(x_66);
x_67 = lean_array_push(x_66, x_53);
x_68 = lean_array_push(x_67, x_64);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_45);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_push(x_66, x_43);
x_71 = lean_array_push(x_70, x_69);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_33);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_72);
lean_inc(x_1);
x_73 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_73, 0, x_1);
lean_closure_set(x_73, 1, x_72);
lean_closure_set(x_73, 2, x_2);
x_74 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_72, x_73, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
return x_74;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSorry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabSorry");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSorry___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabSorry___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSorry___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSorry), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabSorry(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_sorry___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabSorry___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabSorry___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_mkPairs_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_2, x_9);
lean_dec(x_2);
x_11 = l_Lean_instInhabitedSyntax;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_4, x_5);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_4, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
x_18 = lean_box(0);
x_19 = lean_mk_string("Lean");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Parser");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("Term");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("app");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("Prod.mk");
x_28 = lean_string_utf8_byte_size(x_27);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_6);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_mk_string("Prod");
x_31 = lean_name_mk_string(x_18, x_30);
x_32 = lean_mk_string("mk");
x_33 = lean_name_mk_string(x_31, x_32);
lean_inc(x_33);
x_34 = l_Lean_addMacroScope(x_17, x_33, x_16);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_38, 0, x_14);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 2, x_34);
lean_ctor_set(x_38, 3, x_37);
x_39 = lean_mk_string("null");
x_40 = lean_name_mk_string(x_18, x_39);
x_41 = lean_unsigned_to_nat(2u);
x_42 = lean_mk_empty_array_with_capacity(x_41);
lean_inc(x_42);
x_43 = lean_array_push(x_42, x_12);
x_44 = lean_array_push(x_43, x_3);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_push(x_42, x_38);
x_47 = lean_array_push(x_46, x_45);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_26);
lean_ctor_set(x_48, 1, x_47);
x_2 = x_10;
x_3 = x_48;
x_5 = x_15;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_mkPairs_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_mkPairs_loop(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_mkPairs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_4);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_1);
x_8 = l_Lean_Elab_Term_mkPairs_loop(x_1, x_6, x_7, x_2, x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_mkPairs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_mkPairs(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot(x_5);
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
uint8_t l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Term");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("paren");
lean_inc(x_10);
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_name_eq(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_mk_string("cdot");
x_15 = lean_name_mk_string(x_10, x_14);
x_16 = lean_name_eq(x_2, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_array_get_size(x_3);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_17);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_17);
x_20 = 0;
return x_20;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_le(x_17, x_17);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_17);
x_22 = 0;
return x_22;
}
else
{
size_t x_23; size_t x_24; uint8_t x_25; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_25 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___spec__1(x_3, x_23, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
x_26 = 1;
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_10);
x_27 = 0;
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = 0;
return x_28;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandCDot_x3f_go_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandCDot_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_expandCDot_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandCDot_x3f_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_array_uget(x_3, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
x_14 = x_11;
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_expandCDot_x3f_go(x_14, x_4, x_5, x_6);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = 1;
x_21 = x_2 + x_20;
x_22 = x_18;
x_23 = lean_array_uset(x_13, x_2, x_22);
x_2 = x_21;
x_3 = x_23;
x_4 = x_19;
x_6 = x_17;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_13);
lean_dec(x_5);
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 5);
x_5 = l_Lean_SourceInfo_fromRef(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_expandCDot_x3f_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_box(0);
x_8 = lean_mk_string("Lean");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("Parser");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("Term");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("paren");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_name_eq(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_1, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 0);
lean_dec(x_19);
x_20 = lean_mk_string("cdot");
x_21 = lean_name_mk_string(x_13, x_20);
x_22 = lean_name_eq(x_5, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; size_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_array_get_size(x_6);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = x_6;
x_26 = lean_box_usize(x_24);
x_27 = l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1;
x_28 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1___boxed), 6, 3);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_27);
lean_closure_set(x_28, 2, x_25);
x_29 = x_28;
x_30 = lean_apply_3(x_29, x_2, x_3, x_4);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_ctor_set(x_1, 1, x_34);
lean_ctor_set(x_32, 0, x_1);
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_32);
lean_ctor_set(x_1, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_30, 0, x_37);
return x_30;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_30, 0);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_30);
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
lean_ctor_set(x_1, 1, x_40);
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_39);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_free_object(x_1);
lean_dec(x_5);
x_45 = !lean_is_exclusive(x_30);
if (x_45 == 0)
{
return x_30;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_30, 0);
x_47 = lean_ctor_get(x_30, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_30);
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
lean_free_object(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_49 = !lean_is_exclusive(x_4);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_4, 0);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_50, x_51);
lean_ctor_set(x_4, 0, x_52);
x_53 = !lean_is_exclusive(x_3);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_3, 1);
x_55 = lean_ctor_get(x_3, 2);
lean_dec(x_55);
lean_inc(x_50);
lean_inc(x_54);
lean_ctor_set(x_3, 2, x_50);
x_56 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(x_2, x_3, x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_60 = lean_ctor_get(x_58, 0);
x_61 = lean_ctor_get(x_58, 1);
x_62 = lean_mk_string("a");
x_63 = lean_string_utf8_byte_size(x_62);
x_64 = lean_unsigned_to_nat(0u);
lean_inc(x_62);
x_65 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_63);
x_66 = lean_name_mk_string(x_7, x_62);
x_67 = l_Lean_addMacroScope(x_54, x_66, x_50);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_65);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_68);
lean_inc(x_69);
x_70 = lean_array_push(x_61, x_69);
lean_ctor_set(x_58, 1, x_70);
lean_ctor_set(x_58, 0, x_69);
return x_56;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_71 = lean_ctor_get(x_58, 0);
x_72 = lean_ctor_get(x_58, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_58);
x_73 = lean_mk_string("a");
x_74 = lean_string_utf8_byte_size(x_73);
x_75 = lean_unsigned_to_nat(0u);
lean_inc(x_73);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_74);
x_77 = lean_name_mk_string(x_7, x_73);
x_78 = l_Lean_addMacroScope(x_54, x_77, x_50);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_80, 0, x_71);
lean_ctor_set(x_80, 1, x_76);
lean_ctor_set(x_80, 2, x_78);
lean_ctor_set(x_80, 3, x_79);
lean_inc(x_80);
x_81 = lean_array_push(x_72, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_56, 0, x_82);
return x_56;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_83 = lean_ctor_get(x_56, 0);
x_84 = lean_ctor_get(x_56, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_56);
x_85 = lean_ctor_get(x_83, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_87 = x_83;
} else {
 lean_dec_ref(x_83);
 x_87 = lean_box(0);
}
x_88 = lean_mk_string("a");
x_89 = lean_string_utf8_byte_size(x_88);
x_90 = lean_unsigned_to_nat(0u);
lean_inc(x_88);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_91, 2, x_89);
x_92 = lean_name_mk_string(x_7, x_88);
x_93 = l_Lean_addMacroScope(x_54, x_92, x_50);
x_94 = lean_box(0);
x_95 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_95, 0, x_85);
lean_ctor_set(x_95, 1, x_91);
lean_ctor_set(x_95, 2, x_93);
lean_ctor_set(x_95, 3, x_94);
lean_inc(x_95);
x_96 = lean_array_push(x_86, x_95);
if (lean_is_scalar(x_87)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_87;
}
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_84);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_99 = lean_ctor_get(x_3, 0);
x_100 = lean_ctor_get(x_3, 1);
x_101 = lean_ctor_get(x_3, 3);
x_102 = lean_ctor_get(x_3, 4);
x_103 = lean_ctor_get(x_3, 5);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_3);
lean_inc(x_50);
lean_inc(x_100);
x_104 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_100);
lean_ctor_set(x_104, 2, x_50);
lean_ctor_set(x_104, 3, x_101);
lean_ctor_set(x_104, 4, x_102);
lean_ctor_set(x_104, 5, x_103);
x_105 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(x_2, x_104, x_4);
lean_dec(x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_108 = x_105;
} else {
 lean_dec_ref(x_105);
 x_108 = lean_box(0);
}
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
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
x_112 = lean_mk_string("a");
x_113 = lean_string_utf8_byte_size(x_112);
x_114 = lean_unsigned_to_nat(0u);
lean_inc(x_112);
x_115 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_114);
lean_ctor_set(x_115, 2, x_113);
x_116 = lean_name_mk_string(x_7, x_112);
x_117 = l_Lean_addMacroScope(x_100, x_116, x_50);
x_118 = lean_box(0);
x_119 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_119, 0, x_109);
lean_ctor_set(x_119, 1, x_115);
lean_ctor_set(x_119, 2, x_117);
lean_ctor_set(x_119, 3, x_118);
lean_inc(x_119);
x_120 = lean_array_push(x_110, x_119);
if (lean_is_scalar(x_111)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_111;
}
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
if (lean_is_scalar(x_108)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_108;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_107);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_123 = lean_ctor_get(x_4, 0);
x_124 = lean_ctor_get(x_4, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_4);
x_125 = lean_unsigned_to_nat(1u);
x_126 = lean_nat_add(x_123, x_125);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_124);
x_128 = lean_ctor_get(x_3, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_3, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_3, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_3, 4);
lean_inc(x_131);
x_132 = lean_ctor_get(x_3, 5);
lean_inc(x_132);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 x_133 = x_3;
} else {
 lean_dec_ref(x_3);
 x_133 = lean_box(0);
}
lean_inc(x_123);
lean_inc(x_129);
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(0, 6, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_128);
lean_ctor_set(x_134, 1, x_129);
lean_ctor_set(x_134, 2, x_123);
lean_ctor_set(x_134, 3, x_130);
lean_ctor_set(x_134, 4, x_131);
lean_ctor_set(x_134, 5, x_132);
x_135 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(x_2, x_134, x_127);
lean_dec(x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_138 = x_135;
} else {
 lean_dec_ref(x_135);
 x_138 = lean_box(0);
}
x_139 = lean_ctor_get(x_136, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_136, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 x_141 = x_136;
} else {
 lean_dec_ref(x_136);
 x_141 = lean_box(0);
}
x_142 = lean_mk_string("a");
x_143 = lean_string_utf8_byte_size(x_142);
x_144 = lean_unsigned_to_nat(0u);
lean_inc(x_142);
x_145 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_144);
lean_ctor_set(x_145, 2, x_143);
x_146 = lean_name_mk_string(x_7, x_142);
x_147 = l_Lean_addMacroScope(x_129, x_146, x_123);
x_148 = lean_box(0);
x_149 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_149, 0, x_139);
lean_ctor_set(x_149, 1, x_145);
lean_ctor_set(x_149, 2, x_147);
lean_ctor_set(x_149, 3, x_148);
lean_inc(x_149);
x_150 = lean_array_push(x_140, x_149);
if (lean_is_scalar(x_141)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_141;
}
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
if (lean_is_scalar(x_138)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_138;
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_137);
return x_152;
}
}
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; 
lean_dec(x_1);
x_153 = lean_mk_string("cdot");
x_154 = lean_name_mk_string(x_13, x_153);
x_155 = lean_name_eq(x_5, x_154);
lean_dec(x_154);
if (x_155 == 0)
{
lean_object* x_156; size_t x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_156 = lean_array_get_size(x_6);
x_157 = lean_usize_of_nat(x_156);
lean_dec(x_156);
x_158 = x_6;
x_159 = lean_box_usize(x_157);
x_160 = l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1;
x_161 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1___boxed), 6, 3);
lean_closure_set(x_161, 0, x_159);
lean_closure_set(x_161, 1, x_160);
lean_closure_set(x_161, 2, x_158);
x_162 = x_161;
x_163 = lean_apply_3(x_162, x_2, x_3, x_4);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
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
x_167 = lean_ctor_get(x_164, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_164, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_169 = x_164;
} else {
 lean_dec_ref(x_164);
 x_169 = lean_box(0);
}
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_5);
lean_ctor_set(x_170, 1, x_167);
if (lean_is_scalar(x_169)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_169;
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_168);
if (lean_is_scalar(x_166)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_166;
}
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_165);
return x_172;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_5);
x_173 = lean_ctor_get(x_163, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_163, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_175 = x_163;
} else {
 lean_dec_ref(x_163);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 2, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_6);
lean_dec(x_5);
x_177 = lean_ctor_get(x_4, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_4, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_179 = x_4;
} else {
 lean_dec_ref(x_4);
 x_179 = lean_box(0);
}
x_180 = lean_unsigned_to_nat(1u);
x_181 = lean_nat_add(x_177, x_180);
if (lean_is_scalar(x_179)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_179;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_178);
x_183 = lean_ctor_get(x_3, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_3, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_3, 3);
lean_inc(x_185);
x_186 = lean_ctor_get(x_3, 4);
lean_inc(x_186);
x_187 = lean_ctor_get(x_3, 5);
lean_inc(x_187);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 x_188 = x_3;
} else {
 lean_dec_ref(x_3);
 x_188 = lean_box(0);
}
lean_inc(x_177);
lean_inc(x_184);
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(0, 6, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_183);
lean_ctor_set(x_189, 1, x_184);
lean_ctor_set(x_189, 2, x_177);
lean_ctor_set(x_189, 3, x_185);
lean_ctor_set(x_189, 4, x_186);
lean_ctor_set(x_189, 5, x_187);
x_190 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(x_2, x_189, x_182);
lean_dec(x_189);
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
x_194 = lean_ctor_get(x_191, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_191, 1);
lean_inc(x_195);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_196 = x_191;
} else {
 lean_dec_ref(x_191);
 x_196 = lean_box(0);
}
x_197 = lean_mk_string("a");
x_198 = lean_string_utf8_byte_size(x_197);
x_199 = lean_unsigned_to_nat(0u);
lean_inc(x_197);
x_200 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_200, 0, x_197);
lean_ctor_set(x_200, 1, x_199);
lean_ctor_set(x_200, 2, x_198);
x_201 = lean_name_mk_string(x_7, x_197);
x_202 = l_Lean_addMacroScope(x_184, x_201, x_177);
x_203 = lean_box(0);
x_204 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_204, 0, x_194);
lean_ctor_set(x_204, 1, x_200);
lean_ctor_set(x_204, 2, x_202);
lean_ctor_set(x_204, 3, x_203);
lean_inc(x_204);
x_205 = lean_array_push(x_195, x_204);
if (lean_is_scalar(x_196)) {
 x_206 = lean_alloc_ctor(0, 2, 0);
} else {
 x_206 = x_196;
}
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
if (lean_is_scalar(x_193)) {
 x_207 = lean_alloc_ctor(0, 2, 0);
} else {
 x_207 = x_193;
}
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_192);
return x_207;
}
}
}
else
{
lean_object* x_208; lean_object* x_209; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_1);
lean_ctor_set(x_208, 1, x_2);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_4);
return x_209;
}
}
else
{
lean_object* x_210; lean_object* x_211; 
lean_dec(x_3);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_1);
lean_ctor_set(x_210, 1, x_2);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_4);
return x_211;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandCDot_x3f_go___spec__1(x_7, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_expandCDot_x3f_go___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l___private_Lean_Elab_BuiltinNotation_0__Lean_Elab_Term_hasCDot(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_2);
lean_inc(x_8);
x_9 = l_Lean_Elab_Term_expandCDot_x3f_go(x_1, x_8, x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_11);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_box(0);
x_18 = lean_mk_string("Lean");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Parser");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("Term");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("fun");
lean_inc(x_24);
lean_inc(x_23);
x_25 = lean_name_mk_string(x_23, x_24);
lean_inc(x_16);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_16);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_mk_string("basicFun");
x_28 = lean_name_mk_string(x_23, x_27);
x_29 = lean_mk_string("null");
x_30 = lean_name_mk_string(x_17, x_29);
x_31 = l_Array_append___rarg(x_8, x_13);
lean_dec(x_13);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_mk_string("=>");
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_16);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_unsigned_to_nat(3u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
x_37 = lean_array_push(x_36, x_32);
x_38 = lean_array_push(x_37, x_34);
x_39 = lean_array_push(x_38, x_12);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_unsigned_to_nat(2u);
x_42 = lean_mk_empty_array_with_capacity(x_41);
x_43 = lean_array_push(x_42, x_26);
x_44 = lean_array_push(x_43, x_40);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_25);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_14, 0, x_46);
return x_14;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_47 = lean_ctor_get(x_14, 0);
x_48 = lean_ctor_get(x_14, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_14);
x_49 = lean_box(0);
x_50 = lean_mk_string("Lean");
x_51 = lean_name_mk_string(x_49, x_50);
x_52 = lean_mk_string("Parser");
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_mk_string("Term");
x_55 = lean_name_mk_string(x_53, x_54);
x_56 = lean_mk_string("fun");
lean_inc(x_56);
lean_inc(x_55);
x_57 = lean_name_mk_string(x_55, x_56);
lean_inc(x_47);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_47);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_mk_string("basicFun");
x_60 = lean_name_mk_string(x_55, x_59);
x_61 = lean_mk_string("null");
x_62 = lean_name_mk_string(x_49, x_61);
x_63 = l_Array_append___rarg(x_8, x_13);
lean_dec(x_13);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_string("=>");
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_47);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_mk_empty_array_with_capacity(x_67);
x_69 = lean_array_push(x_68, x_64);
x_70 = lean_array_push(x_69, x_66);
x_71 = lean_array_push(x_70, x_12);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_60);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_unsigned_to_nat(2u);
x_74 = lean_mk_empty_array_with_capacity(x_73);
x_75 = lean_array_push(x_74, x_58);
x_76 = lean_array_push(x_75, x_72);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_57);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_48);
return x_79;
}
}
else
{
uint8_t x_80; 
lean_dec(x_8);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_9);
if (x_80 == 0)
{
return x_9;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_9, 0);
x_82 = lean_ctor_get(x_9, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_9);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_expandCDotArg_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_11 = lean_mk_string("paren");
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Term_expandCDot_x3f(x_1, x_2, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_nullKind;
x_18 = lean_unsigned_to_nat(2u);
lean_inc(x_16);
x_19 = l_Lean_Syntax_isNodeOf(x_16, x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
x_20 = l_Lean_Elab_Term_expandCDot_x3f(x_1, x_2, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_getArg(x_16, x_21);
x_23 = l_Lean_Syntax_getArg(x_16, x_15);
lean_dec(x_16);
x_24 = l_Lean_Syntax_isNodeOf(x_23, x_17, x_21);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_expandCDot_x3f(x_1, x_2, x_3);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_1);
x_26 = l_Lean_Elab_Term_expandCDot_x3f(x_22, x_2, x_3);
return x_26;
}
}
}
}
}
uint8_t l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = 1;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_fget(x_3, x_5);
x_10 = lean_array_fget(x_4, x_5);
x_11 = l_Lean_Syntax_structEq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_5);
x_12 = 0;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_2 = lean_box(0);
x_5 = x_14;
goto _start;
}
}
}
}
uint8_t l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = 1;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_fget(x_3, x_5);
x_10 = lean_array_fget(x_4, x_5);
x_11 = l_Lean_Syntax_structEq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_5);
x_12 = 0;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_2 = lean_box(0);
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_13 = l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_24 = l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_107; lean_object* x_108; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_180 = lean_st_ref_get(x_7, x_8);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_ctor_get(x_181, 0);
lean_inc(x_183);
lean_dec(x_181);
x_184 = lean_ctor_get(x_6, 4);
lean_inc(x_184);
x_185 = lean_ctor_get(x_6, 5);
lean_inc(x_185);
lean_inc(x_183);
x_186 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_186, 0, x_183);
lean_inc(x_184);
x_187 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_187, 0, x_184);
lean_inc(x_183);
x_188 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_188, 0, x_183);
lean_inc(x_185);
lean_inc(x_184);
lean_inc(x_183);
x_189 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_189, 0, x_183);
lean_closure_set(x_189, 1, x_184);
lean_closure_set(x_189, 2, x_185);
lean_inc(x_183);
x_190 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_190, 0, x_183);
lean_closure_set(x_190, 1, x_184);
lean_closure_set(x_190, 2, x_185);
x_191 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_191, 0, x_186);
lean_ctor_set(x_191, 1, x_187);
lean_ctor_set(x_191, 2, x_188);
lean_ctor_set(x_191, 3, x_189);
lean_ctor_set(x_191, 4, x_190);
x_192 = x_191;
x_193 = lean_ctor_get(x_6, 3);
lean_inc(x_193);
x_194 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_182);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = lean_ctor_get(x_6, 1);
lean_inc(x_197);
x_198 = lean_ctor_get(x_6, 2);
lean_inc(x_198);
x_199 = lean_st_ref_get(x_7, x_196);
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = lean_environment_main_module(x_183);
x_204 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_204, 0, x_192);
lean_ctor_set(x_204, 1, x_203);
lean_ctor_set(x_204, 2, x_195);
lean_ctor_set(x_204, 3, x_197);
lean_ctor_set(x_204, 4, x_198);
lean_ctor_set(x_204, 5, x_193);
x_205 = lean_box(0);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_202);
lean_ctor_set(x_206, 1, x_205);
x_207 = l_Lean_Elab_Term_elabCDotFunctionAlias_x3f_expandCDotArg_x3f(x_1, x_204, x_206);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_st_ref_take(x_7, x_201);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = !lean_is_exclusive(x_212);
if (x_214 == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_215 = lean_ctor_get(x_212, 1);
lean_dec(x_215);
lean_ctor_set(x_212, 1, x_210);
x_216 = lean_st_ref_set(x_7, x_212, x_213);
x_217 = lean_ctor_get(x_216, 1);
lean_inc(x_217);
lean_dec(x_216);
x_218 = lean_ctor_get(x_209, 1);
lean_inc(x_218);
lean_dec(x_209);
x_219 = l_List_reverse___rarg(x_218);
x_220 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_219, x_2, x_3, x_4, x_5, x_6, x_7, x_217);
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
lean_dec(x_220);
x_107 = x_208;
x_108 = x_221;
goto block_179;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_222 = lean_ctor_get(x_212, 0);
x_223 = lean_ctor_get(x_212, 2);
x_224 = lean_ctor_get(x_212, 3);
lean_inc(x_224);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_212);
x_225 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_225, 0, x_222);
lean_ctor_set(x_225, 1, x_210);
lean_ctor_set(x_225, 2, x_223);
lean_ctor_set(x_225, 3, x_224);
x_226 = lean_st_ref_set(x_7, x_225, x_213);
x_227 = lean_ctor_get(x_226, 1);
lean_inc(x_227);
lean_dec(x_226);
x_228 = lean_ctor_get(x_209, 1);
lean_inc(x_228);
lean_dec(x_209);
x_229 = l_List_reverse___rarg(x_228);
x_230 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_229, x_2, x_3, x_4, x_5, x_6, x_7, x_227);
x_231 = lean_ctor_get(x_230, 1);
lean_inc(x_231);
lean_dec(x_230);
x_107 = x_208;
x_108 = x_231;
goto block_179;
}
}
else
{
lean_object* x_232; 
x_232 = lean_ctor_get(x_207, 0);
lean_inc(x_232);
lean_dec(x_207);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec(x_232);
x_235 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_235, 0, x_234);
x_236 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_236, 0, x_235);
x_237 = l_Lean_throwErrorAt___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__3(x_233, x_236, x_2, x_3, x_4, x_5, x_6, x_7, x_201);
lean_dec(x_4);
lean_dec(x_233);
x_238 = !lean_is_exclusive(x_237);
if (x_238 == 0)
{
return x_237;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_237, 0);
x_240 = lean_ctor_get(x_237, 1);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_237);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_239);
lean_ctor_set(x_241, 1, x_240);
return x_241;
}
}
else
{
lean_object* x_242; uint8_t x_243; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_242 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5___rarg(x_201);
x_243 = !lean_is_exclusive(x_242);
if (x_243 == 0)
{
return x_242;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_242, 0);
x_245 = lean_ctor_get(x_242, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_242);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
return x_246;
}
}
}
block_106:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Lean");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("Parser");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("Term");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("fun");
lean_inc(x_17);
x_19 = lean_name_mk_string(x_17, x_18);
lean_inc(x_9);
x_20 = l_Lean_Syntax_isOfKind(x_9, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_unsigned_to_nat(1u);
x_24 = l_Lean_Syntax_getArg(x_9, x_23);
x_25 = lean_mk_string("basicFun");
lean_inc(x_17);
x_26 = lean_name_mk_string(x_17, x_25);
lean_inc(x_24);
x_27 = l_Lean_Syntax_isOfKind(x_24, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_10);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Syntax_getArg(x_24, x_30);
x_32 = lean_unsigned_to_nat(2u);
x_33 = l_Lean_Syntax_getArg(x_24, x_32);
lean_dec(x_24);
x_34 = lean_mk_string("app");
lean_inc(x_17);
x_35 = lean_name_mk_string(x_17, x_34);
lean_inc(x_33);
x_36 = l_Lean_Syntax_isOfKind(x_33, x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_mk_string("binop");
x_38 = lean_name_mk_string(x_17, x_37);
lean_inc(x_33);
x_39 = l_Lean_Syntax_isOfKind(x_33, x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_10);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = l_Lean_Syntax_getArg(x_33, x_23);
x_43 = lean_mk_string("ident");
x_44 = lean_name_mk_string(x_11, x_43);
lean_inc(x_42);
x_45 = l_Lean_Syntax_isOfKind(x_42, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_42);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_10);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_48 = l_Lean_Syntax_getArg(x_33, x_32);
x_49 = lean_unsigned_to_nat(3u);
x_50 = l_Lean_Syntax_getArg(x_33, x_49);
lean_dec(x_33);
x_51 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_52 = lean_mk_empty_array_with_capacity(x_32);
x_53 = lean_array_push(x_52, x_48);
x_54 = lean_array_push(x_53, x_50);
x_55 = lean_array_get_size(x_51);
x_56 = lean_array_get_size(x_54);
x_57 = lean_nat_dec_eq(x_55, x_56);
lean_dec(x_56);
lean_dec(x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_54);
lean_dec(x_51);
lean_dec(x_42);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_10);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__1(x_9, lean_box(0), x_51, x_54, x_30);
lean_dec(x_54);
lean_dec(x_51);
lean_dec(x_9);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_42);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_10);
return x_62;
}
else
{
lean_object* x_63; uint8_t x_64; lean_object* x_65; 
x_63 = lean_mk_string("term");
x_64 = 0;
x_65 = l_Lean_Elab_Term_resolveId_x3f(x_42, x_63, x_64, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
lean_dec(x_63);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
return x_65;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
else
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_65);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_65, 0);
lean_dec(x_71);
x_72 = lean_box(0);
lean_ctor_set_tag(x_65, 0);
lean_ctor_set(x_65, 0, x_72);
return x_65;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_65, 1);
lean_inc(x_73);
lean_dec(x_65);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
lean_dec(x_17);
x_76 = l_Lean_Syntax_getArg(x_33, x_30);
x_77 = lean_mk_string("ident");
x_78 = lean_name_mk_string(x_11, x_77);
lean_inc(x_76);
x_79 = l_Lean_Syntax_isOfKind(x_76, x_78);
lean_dec(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_76);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_10);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_82 = l_Lean_Syntax_getArg(x_33, x_23);
lean_dec(x_33);
x_83 = l_Lean_Syntax_getArgs(x_82);
lean_dec(x_82);
x_84 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_85 = lean_array_get_size(x_84);
x_86 = lean_array_get_size(x_83);
x_87 = lean_nat_dec_eq(x_85, x_86);
lean_dec(x_86);
lean_dec(x_85);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_76);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_10);
return x_89;
}
else
{
uint8_t x_90; 
x_90 = l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__2(x_9, lean_box(0), x_84, x_83, x_30);
lean_dec(x_83);
lean_dec(x_84);
lean_dec(x_9);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_10);
return x_92;
}
else
{
lean_object* x_93; uint8_t x_94; lean_object* x_95; 
x_93 = lean_mk_string("term");
x_94 = 0;
x_95 = l_Lean_Elab_Term_resolveId_x3f(x_76, x_93, x_94, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
lean_dec(x_93);
if (lean_obj_tag(x_95) == 0)
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
return x_95;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_95);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
else
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_95);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_95, 0);
lean_dec(x_101);
x_102 = lean_box(0);
lean_ctor_set_tag(x_95, 0);
lean_ctor_set(x_95, 0, x_102);
return x_95;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_95, 1);
lean_inc(x_103);
lean_dec(x_95);
x_104 = lean_box(0);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
}
}
}
}
}
}
}
block_179:
{
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_109 = lean_box(0);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_111 = lean_ctor_get(x_107, 0);
lean_inc(x_111);
lean_dec(x_107);
x_112 = lean_st_ref_get(x_7, x_108);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_ctor_get(x_113, 0);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_ctor_get(x_6, 4);
lean_inc(x_116);
x_117 = lean_ctor_get(x_6, 5);
lean_inc(x_117);
lean_inc(x_115);
x_118 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_118, 0, x_115);
lean_inc(x_116);
x_119 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_119, 0, x_116);
lean_inc(x_115);
x_120 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_120, 0, x_115);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
x_121 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_121, 0, x_115);
lean_closure_set(x_121, 1, x_116);
lean_closure_set(x_121, 2, x_117);
lean_inc(x_115);
x_122 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_122, 0, x_115);
lean_closure_set(x_122, 1, x_116);
lean_closure_set(x_122, 2, x_117);
x_123 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_123, 0, x_118);
lean_ctor_set(x_123, 1, x_119);
lean_ctor_set(x_123, 2, x_120);
lean_ctor_set(x_123, 3, x_121);
lean_ctor_set(x_123, 4, x_122);
x_124 = x_123;
x_125 = lean_ctor_get(x_6, 3);
lean_inc(x_125);
x_126 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_114);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_ctor_get(x_6, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_6, 2);
lean_inc(x_130);
x_131 = lean_st_ref_get(x_7, x_128);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_135 = lean_environment_main_module(x_115);
x_136 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_136, 0, x_124);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_136, 2, x_127);
lean_ctor_set(x_136, 3, x_129);
lean_ctor_set(x_136, 4, x_130);
lean_ctor_set(x_136, 5, x_125);
x_137 = lean_box(0);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_134);
lean_ctor_set(x_138, 1, x_137);
x_139 = l_Lean_expandMacros(x_111, x_136, x_138);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_st_ref_take(x_7, x_133);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = !lean_is_exclusive(x_144);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_147 = lean_ctor_get(x_144, 1);
lean_dec(x_147);
lean_ctor_set(x_144, 1, x_142);
x_148 = lean_st_ref_set(x_7, x_144, x_145);
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec(x_148);
x_150 = lean_ctor_get(x_141, 1);
lean_inc(x_150);
lean_dec(x_141);
x_151 = l_List_reverse___rarg(x_150);
x_152 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_151, x_2, x_3, x_4, x_5, x_6, x_7, x_149);
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
lean_dec(x_152);
x_9 = x_140;
x_10 = x_153;
goto block_106;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_154 = lean_ctor_get(x_144, 0);
x_155 = lean_ctor_get(x_144, 2);
x_156 = lean_ctor_get(x_144, 3);
lean_inc(x_156);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_144);
x_157 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_142);
lean_ctor_set(x_157, 2, x_155);
lean_ctor_set(x_157, 3, x_156);
x_158 = lean_st_ref_set(x_7, x_157, x_145);
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
lean_dec(x_158);
x_160 = lean_ctor_get(x_141, 1);
lean_inc(x_160);
lean_dec(x_141);
x_161 = l_List_reverse___rarg(x_160);
x_162 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_161, x_2, x_3, x_4, x_5, x_6, x_7, x_159);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
lean_dec(x_162);
x_9 = x_140;
x_10 = x_163;
goto block_106;
}
}
else
{
lean_object* x_164; 
x_164 = lean_ctor_get(x_139, 0);
lean_inc(x_164);
lean_dec(x_139);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_167 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_168 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_168, 0, x_167);
x_169 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4(x_165, x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_133);
lean_dec(x_4);
lean_dec(x_165);
x_170 = !lean_is_exclusive(x_169);
if (x_170 == 0)
{
return x_169;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_169, 0);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_169);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
else
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_174 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__6___rarg(x_133);
x_175 = !lean_is_exclusive(x_174);
if (x_175 == 0)
{
return x_174;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_174, 0);
x_177 = lean_ctor_get(x_174, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_174);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
}
}
}
}
lean_object* l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_isEqvAux___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabCDotFunctionAlias_x3f___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_expandParen(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_11 = lean_mk_string("paren");
lean_inc(x_10);
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_10);
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_15, x_16);
x_18 = l_Lean_Syntax_isMissing(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_20 = l_Lean_Syntax_isMissing(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_2);
x_21 = lean_mk_string("unexpected parentheses notation");
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
lean_object* x_24; uint8_t x_25; 
lean_dec(x_1);
x_24 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_mk_string("(");
lean_inc(x_26);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_mk_string("null");
x_30 = lean_name_mk_string(x_4, x_29);
x_31 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_unsigned_to_nat(2u);
x_34 = lean_mk_empty_array_with_capacity(x_33);
x_35 = lean_array_push(x_34, x_17);
x_36 = lean_array_push(x_35, x_32);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string(")");
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_26);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_unsigned_to_nat(3u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
x_42 = lean_array_push(x_41, x_28);
x_43 = lean_array_push(x_42, x_37);
x_44 = lean_array_push(x_43, x_39);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_12);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_24, 0, x_45);
return x_24;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_46 = lean_ctor_get(x_24, 0);
x_47 = lean_ctor_get(x_24, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_24);
x_48 = lean_mk_string("(");
lean_inc(x_46);
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_mk_string("null");
x_51 = lean_name_mk_string(x_4, x_50);
x_52 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_51);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_unsigned_to_nat(2u);
x_55 = lean_mk_empty_array_with_capacity(x_54);
x_56 = lean_array_push(x_55, x_17);
x_57 = lean_array_push(x_56, x_53);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string(")");
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_46);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_unsigned_to_nat(3u);
x_62 = lean_mk_empty_array_with_capacity(x_61);
x_63 = lean_array_push(x_62, x_49);
x_64 = lean_array_push(x_63, x_58);
x_65 = lean_array_push(x_64, x_60);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_12);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_47);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_2);
x_68 = lean_mk_string("unexpected parentheses notation");
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_1);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_3);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_71 = lean_unsigned_to_nat(1u);
x_72 = l_Lean_Syntax_getArg(x_1, x_71);
x_73 = l_Lean_nullKind;
x_74 = lean_unsigned_to_nat(0u);
lean_inc(x_72);
x_75 = l_Lean_Syntax_isNodeOf(x_72, x_73, x_74);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_unsigned_to_nat(2u);
lean_inc(x_72);
x_77 = l_Lean_Syntax_isNodeOf(x_72, x_73, x_76);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; 
lean_dec(x_10);
x_78 = l_Lean_Syntax_getArg(x_72, x_74);
x_79 = l_Lean_Syntax_isMissing(x_78);
if (x_79 == 0)
{
lean_object* x_80; uint8_t x_81; 
x_80 = l_Lean_Syntax_getArg(x_72, x_71);
lean_dec(x_72);
x_81 = l_Lean_Syntax_isMissing(x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_78);
lean_dec(x_12);
lean_dec(x_2);
x_82 = lean_mk_string("unexpected parentheses notation");
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_1);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_3);
return x_84;
}
else
{
lean_object* x_85; uint8_t x_86; 
lean_dec(x_1);
x_85 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
lean_dec(x_2);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_mk_string("(");
lean_inc(x_87);
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_mk_string("null");
x_91 = lean_name_mk_string(x_4, x_90);
x_92 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_91);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_mk_empty_array_with_capacity(x_76);
x_95 = lean_array_push(x_94, x_78);
x_96 = lean_array_push(x_95, x_93);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_91);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_mk_string(")");
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_87);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_unsigned_to_nat(3u);
x_101 = lean_mk_empty_array_with_capacity(x_100);
x_102 = lean_array_push(x_101, x_89);
x_103 = lean_array_push(x_102, x_97);
x_104 = lean_array_push(x_103, x_99);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_12);
lean_ctor_set(x_105, 1, x_104);
lean_ctor_set(x_85, 0, x_105);
return x_85;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_106 = lean_ctor_get(x_85, 0);
x_107 = lean_ctor_get(x_85, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_85);
x_108 = lean_mk_string("(");
lean_inc(x_106);
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_mk_string("null");
x_111 = lean_name_mk_string(x_4, x_110);
x_112 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_111);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_mk_empty_array_with_capacity(x_76);
x_115 = lean_array_push(x_114, x_78);
x_116 = lean_array_push(x_115, x_113);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_111);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_string(")");
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_106);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_unsigned_to_nat(3u);
x_121 = lean_mk_empty_array_with_capacity(x_120);
x_122 = lean_array_push(x_121, x_109);
x_123 = lean_array_push(x_122, x_117);
x_124 = lean_array_push(x_123, x_119);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_12);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_107);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_78);
lean_dec(x_72);
lean_dec(x_12);
lean_dec(x_2);
x_127 = lean_mk_string("unexpected parentheses notation");
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_1);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_3);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_130 = l_Lean_Syntax_getArg(x_72, x_74);
x_131 = l_Lean_Syntax_getArg(x_72, x_71);
lean_inc(x_131);
x_132 = l_Lean_Syntax_isNodeOf(x_131, x_73, x_71);
if (x_132 == 0)
{
uint8_t x_133; 
lean_dec(x_10);
x_133 = l_Lean_Syntax_isNodeOf(x_131, x_73, x_74);
if (x_133 == 0)
{
lean_object* x_134; uint8_t x_135; 
lean_dec(x_130);
x_134 = l_Lean_Syntax_getArg(x_72, x_74);
x_135 = l_Lean_Syntax_isMissing(x_134);
if (x_135 == 0)
{
lean_object* x_136; uint8_t x_137; 
x_136 = l_Lean_Syntax_getArg(x_72, x_71);
lean_dec(x_72);
x_137 = l_Lean_Syntax_isMissing(x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_134);
lean_dec(x_12);
lean_dec(x_2);
x_138 = lean_mk_string("unexpected parentheses notation");
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_1);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_3);
return x_140;
}
else
{
lean_object* x_141; uint8_t x_142; 
lean_dec(x_1);
x_141 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
lean_dec(x_2);
x_142 = !lean_is_exclusive(x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_143 = lean_ctor_get(x_141, 0);
x_144 = lean_mk_string("(");
lean_inc(x_143);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_mk_string("null");
x_147 = lean_name_mk_string(x_4, x_146);
x_148 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_147);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_mk_empty_array_with_capacity(x_76);
x_151 = lean_array_push(x_150, x_134);
x_152 = lean_array_push(x_151, x_149);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_147);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_string(")");
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_143);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_unsigned_to_nat(3u);
x_157 = lean_mk_empty_array_with_capacity(x_156);
x_158 = lean_array_push(x_157, x_145);
x_159 = lean_array_push(x_158, x_153);
x_160 = lean_array_push(x_159, x_155);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_12);
lean_ctor_set(x_161, 1, x_160);
lean_ctor_set(x_141, 0, x_161);
return x_141;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_162 = lean_ctor_get(x_141, 0);
x_163 = lean_ctor_get(x_141, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_141);
x_164 = lean_mk_string("(");
lean_inc(x_162);
x_165 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_mk_string("null");
x_167 = lean_name_mk_string(x_4, x_166);
x_168 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_167);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_mk_empty_array_with_capacity(x_76);
x_171 = lean_array_push(x_170, x_134);
x_172 = lean_array_push(x_171, x_169);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_167);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_string(")");
x_175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_175, 0, x_162);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_unsigned_to_nat(3u);
x_177 = lean_mk_empty_array_with_capacity(x_176);
x_178 = lean_array_push(x_177, x_165);
x_179 = lean_array_push(x_178, x_173);
x_180 = lean_array_push(x_179, x_175);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_12);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_163);
return x_182;
}
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_134);
lean_dec(x_72);
lean_dec(x_12);
lean_dec(x_2);
x_183 = lean_mk_string("unexpected parentheses notation");
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_1);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_3);
return x_185;
}
}
else
{
lean_object* x_186; 
lean_dec(x_72);
lean_dec(x_12);
lean_dec(x_1);
lean_inc(x_130);
x_186 = l_Lean_Elab_Term_expandCDot_x3f(x_130, x_2, x_3);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
if (lean_obj_tag(x_187) == 0)
{
uint8_t x_188; 
x_188 = !lean_is_exclusive(x_186);
if (x_188 == 0)
{
lean_object* x_189; 
x_189 = lean_ctor_get(x_186, 0);
lean_dec(x_189);
lean_ctor_set(x_186, 0, x_130);
return x_186;
}
else
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_ctor_get(x_186, 1);
lean_inc(x_190);
lean_dec(x_186);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_130);
lean_ctor_set(x_191, 1, x_190);
return x_191;
}
}
else
{
uint8_t x_192; 
lean_dec(x_130);
x_192 = !lean_is_exclusive(x_186);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; 
x_193 = lean_ctor_get(x_186, 0);
lean_dec(x_193);
x_194 = lean_ctor_get(x_187, 0);
lean_inc(x_194);
lean_dec(x_187);
lean_ctor_set(x_186, 0, x_194);
return x_186;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_186, 1);
lean_inc(x_195);
lean_dec(x_186);
x_196 = lean_ctor_get(x_187, 0);
lean_inc(x_196);
lean_dec(x_187);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
return x_197;
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_130);
x_198 = !lean_is_exclusive(x_186);
if (x_198 == 0)
{
return x_186;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_186, 0);
x_200 = lean_ctor_get(x_186, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_186);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_202 = l_Lean_Syntax_getArg(x_131, x_74);
lean_dec(x_131);
x_203 = lean_mk_string("typeAscription");
lean_inc(x_10);
x_204 = lean_name_mk_string(x_10, x_203);
lean_inc(x_202);
x_205 = l_Lean_Syntax_isOfKind(x_202, x_204);
if (x_205 == 0)
{
lean_object* x_206; lean_object* x_207; uint8_t x_208; 
lean_dec(x_204);
x_206 = lean_mk_string("tupleTail");
x_207 = lean_name_mk_string(x_10, x_206);
lean_inc(x_202);
x_208 = l_Lean_Syntax_isOfKind(x_202, x_207);
lean_dec(x_207);
if (x_208 == 0)
{
lean_object* x_209; uint8_t x_210; 
lean_dec(x_202);
lean_dec(x_130);
x_209 = l_Lean_Syntax_getArg(x_72, x_74);
x_210 = l_Lean_Syntax_isMissing(x_209);
if (x_210 == 0)
{
lean_object* x_211; uint8_t x_212; 
x_211 = l_Lean_Syntax_getArg(x_72, x_71);
lean_dec(x_72);
x_212 = l_Lean_Syntax_isMissing(x_211);
lean_dec(x_211);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_209);
lean_dec(x_12);
lean_dec(x_2);
x_213 = lean_mk_string("unexpected parentheses notation");
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_1);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_3);
return x_215;
}
else
{
lean_object* x_216; uint8_t x_217; 
lean_dec(x_1);
x_216 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
lean_dec(x_2);
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_218 = lean_ctor_get(x_216, 0);
x_219 = lean_mk_string("(");
lean_inc(x_218);
x_220 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_mk_string("null");
x_222 = lean_name_mk_string(x_4, x_221);
x_223 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_222);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
x_225 = lean_mk_empty_array_with_capacity(x_76);
x_226 = lean_array_push(x_225, x_209);
x_227 = lean_array_push(x_226, x_224);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_222);
lean_ctor_set(x_228, 1, x_227);
x_229 = lean_mk_string(")");
x_230 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_230, 0, x_218);
lean_ctor_set(x_230, 1, x_229);
x_231 = lean_unsigned_to_nat(3u);
x_232 = lean_mk_empty_array_with_capacity(x_231);
x_233 = lean_array_push(x_232, x_220);
x_234 = lean_array_push(x_233, x_228);
x_235 = lean_array_push(x_234, x_230);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_12);
lean_ctor_set(x_236, 1, x_235);
lean_ctor_set(x_216, 0, x_236);
return x_216;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_237 = lean_ctor_get(x_216, 0);
x_238 = lean_ctor_get(x_216, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_216);
x_239 = lean_mk_string("(");
lean_inc(x_237);
x_240 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_240, 0, x_237);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_mk_string("null");
x_242 = lean_name_mk_string(x_4, x_241);
x_243 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_242);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
x_245 = lean_mk_empty_array_with_capacity(x_76);
x_246 = lean_array_push(x_245, x_209);
x_247 = lean_array_push(x_246, x_244);
x_248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_248, 0, x_242);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_mk_string(")");
x_250 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_250, 0, x_237);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_unsigned_to_nat(3u);
x_252 = lean_mk_empty_array_with_capacity(x_251);
x_253 = lean_array_push(x_252, x_240);
x_254 = lean_array_push(x_253, x_248);
x_255 = lean_array_push(x_254, x_250);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_12);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_238);
return x_257;
}
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_209);
lean_dec(x_72);
lean_dec(x_12);
lean_dec(x_2);
x_258 = lean_mk_string("unexpected parentheses notation");
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_1);
lean_ctor_set(x_259, 1, x_258);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_3);
return x_260;
}
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_72);
lean_dec(x_12);
lean_dec(x_1);
x_261 = l_Lean_Syntax_getArg(x_202, x_71);
lean_dec(x_202);
x_262 = l_Lean_Syntax_getArgs(x_261);
lean_dec(x_261);
x_263 = lean_mk_empty_array_with_capacity(x_71);
x_264 = lean_array_push(x_263, x_130);
x_265 = l_Lean_Syntax_SepArray_getElems___rarg(x_262);
lean_dec(x_262);
x_266 = l_Array_append___rarg(x_264, x_265);
lean_dec(x_265);
lean_inc(x_2);
x_267 = l_Lean_Elab_Term_mkPairs(x_266, x_2, x_3);
lean_dec(x_266);
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
lean_inc(x_268);
x_270 = l_Lean_Elab_Term_expandCDot_x3f(x_268, x_2, x_269);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
if (lean_obj_tag(x_271) == 0)
{
uint8_t x_272; 
x_272 = !lean_is_exclusive(x_270);
if (x_272 == 0)
{
lean_object* x_273; 
x_273 = lean_ctor_get(x_270, 0);
lean_dec(x_273);
lean_ctor_set(x_270, 0, x_268);
return x_270;
}
else
{
lean_object* x_274; lean_object* x_275; 
x_274 = lean_ctor_get(x_270, 1);
lean_inc(x_274);
lean_dec(x_270);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_268);
lean_ctor_set(x_275, 1, x_274);
return x_275;
}
}
else
{
uint8_t x_276; 
lean_dec(x_268);
x_276 = !lean_is_exclusive(x_270);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; 
x_277 = lean_ctor_get(x_270, 0);
lean_dec(x_277);
x_278 = lean_ctor_get(x_271, 0);
lean_inc(x_278);
lean_dec(x_271);
lean_ctor_set(x_270, 0, x_278);
return x_270;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_270, 1);
lean_inc(x_279);
lean_dec(x_270);
x_280 = lean_ctor_get(x_271, 0);
lean_inc(x_280);
lean_dec(x_271);
x_281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_279);
return x_281;
}
}
}
else
{
uint8_t x_282; 
lean_dec(x_268);
x_282 = !lean_is_exclusive(x_270);
if (x_282 == 0)
{
return x_270;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_283 = lean_ctor_get(x_270, 0);
x_284 = lean_ctor_get(x_270, 1);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_270);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_283);
lean_ctor_set(x_285, 1, x_284);
return x_285;
}
}
}
}
else
{
lean_object* x_286; lean_object* x_287; 
lean_dec(x_72);
lean_dec(x_10);
lean_dec(x_1);
x_286 = l_Lean_Syntax_getArg(x_202, x_71);
lean_dec(x_202);
lean_inc(x_2);
x_287 = l_Lean_Elab_Term_expandCDot_x3f(x_130, x_2, x_3);
if (lean_obj_tag(x_287) == 0)
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
lean_dec(x_286);
lean_dec(x_204);
lean_dec(x_12);
lean_dec(x_2);
x_289 = !lean_is_exclusive(x_287);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; 
x_290 = lean_ctor_get(x_287, 0);
lean_dec(x_290);
x_291 = lean_box(1);
lean_ctor_set_tag(x_287, 1);
lean_ctor_set(x_287, 0, x_291);
return x_287;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_292 = lean_ctor_get(x_287, 1);
lean_inc(x_292);
lean_dec(x_287);
x_293 = lean_box(1);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; 
x_295 = lean_ctor_get(x_287, 1);
lean_inc(x_295);
lean_dec(x_287);
x_296 = lean_ctor_get(x_288, 0);
lean_inc(x_296);
lean_dec(x_288);
x_297 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_295);
lean_dec(x_2);
x_298 = !lean_is_exclusive(x_297);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_299 = lean_ctor_get(x_297, 0);
x_300 = lean_mk_string("(");
lean_inc(x_299);
x_301 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_301, 0, x_299);
lean_ctor_set(x_301, 1, x_300);
x_302 = lean_mk_string("null");
x_303 = lean_name_mk_string(x_4, x_302);
x_304 = lean_mk_string(":");
lean_inc(x_299);
x_305 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_305, 0, x_299);
lean_ctor_set(x_305, 1, x_304);
x_306 = lean_mk_empty_array_with_capacity(x_76);
lean_inc(x_306);
x_307 = lean_array_push(x_306, x_305);
x_308 = lean_array_push(x_307, x_286);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_204);
lean_ctor_set(x_309, 1, x_308);
x_310 = lean_mk_empty_array_with_capacity(x_71);
x_311 = lean_array_push(x_310, x_309);
lean_inc(x_303);
x_312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_312, 0, x_303);
lean_ctor_set(x_312, 1, x_311);
x_313 = lean_array_push(x_306, x_296);
x_314 = lean_array_push(x_313, x_312);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_303);
lean_ctor_set(x_315, 1, x_314);
x_316 = lean_mk_string(")");
x_317 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_317, 0, x_299);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_unsigned_to_nat(3u);
x_319 = lean_mk_empty_array_with_capacity(x_318);
x_320 = lean_array_push(x_319, x_301);
x_321 = lean_array_push(x_320, x_315);
x_322 = lean_array_push(x_321, x_317);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_12);
lean_ctor_set(x_323, 1, x_322);
lean_ctor_set(x_297, 0, x_323);
return x_297;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_324 = lean_ctor_get(x_297, 0);
x_325 = lean_ctor_get(x_297, 1);
lean_inc(x_325);
lean_inc(x_324);
lean_dec(x_297);
x_326 = lean_mk_string("(");
lean_inc(x_324);
x_327 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_327, 0, x_324);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_mk_string("null");
x_329 = lean_name_mk_string(x_4, x_328);
x_330 = lean_mk_string(":");
lean_inc(x_324);
x_331 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_331, 0, x_324);
lean_ctor_set(x_331, 1, x_330);
x_332 = lean_mk_empty_array_with_capacity(x_76);
lean_inc(x_332);
x_333 = lean_array_push(x_332, x_331);
x_334 = lean_array_push(x_333, x_286);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_204);
lean_ctor_set(x_335, 1, x_334);
x_336 = lean_mk_empty_array_with_capacity(x_71);
x_337 = lean_array_push(x_336, x_335);
lean_inc(x_329);
x_338 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_338, 0, x_329);
lean_ctor_set(x_338, 1, x_337);
x_339 = lean_array_push(x_332, x_296);
x_340 = lean_array_push(x_339, x_338);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_329);
lean_ctor_set(x_341, 1, x_340);
x_342 = lean_mk_string(")");
x_343 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_343, 0, x_324);
lean_ctor_set(x_343, 1, x_342);
x_344 = lean_unsigned_to_nat(3u);
x_345 = lean_mk_empty_array_with_capacity(x_344);
x_346 = lean_array_push(x_345, x_327);
x_347 = lean_array_push(x_346, x_341);
x_348 = lean_array_push(x_347, x_343);
x_349 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_349, 0, x_12);
lean_ctor_set(x_349, 1, x_348);
x_350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_325);
return x_350;
}
}
}
else
{
uint8_t x_351; 
lean_dec(x_286);
lean_dec(x_204);
lean_dec(x_12);
lean_dec(x_2);
x_351 = !lean_is_exclusive(x_287);
if (x_351 == 0)
{
return x_287;
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_352 = lean_ctor_get(x_287, 0);
x_353 = lean_ctor_get(x_287, 1);
lean_inc(x_353);
lean_inc(x_352);
lean_dec(x_287);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_352);
lean_ctor_set(x_354, 1, x_353);
return x_354;
}
}
}
}
}
}
else
{
lean_object* x_355; uint8_t x_356; 
lean_dec(x_72);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_1);
x_355 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_356 = !lean_is_exclusive(x_355);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_357 = lean_ctor_get(x_355, 0);
x_358 = lean_ctor_get(x_2, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_2, 1);
lean_inc(x_359);
lean_dec(x_2);
x_360 = lean_mk_string("Unit.unit");
x_361 = lean_string_utf8_byte_size(x_360);
x_362 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_362, 0, x_360);
lean_ctor_set(x_362, 1, x_74);
lean_ctor_set(x_362, 2, x_361);
x_363 = lean_mk_string("Unit");
x_364 = lean_name_mk_string(x_4, x_363);
x_365 = lean_mk_string("unit");
x_366 = lean_name_mk_string(x_364, x_365);
lean_inc(x_366);
x_367 = l_Lean_addMacroScope(x_359, x_366, x_358);
x_368 = lean_box(0);
x_369 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_369, 0, x_366);
lean_ctor_set(x_369, 1, x_368);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_368);
x_371 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_371, 0, x_357);
lean_ctor_set(x_371, 1, x_362);
lean_ctor_set(x_371, 2, x_367);
lean_ctor_set(x_371, 3, x_370);
lean_ctor_set(x_355, 0, x_371);
return x_355;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
x_372 = lean_ctor_get(x_355, 0);
x_373 = lean_ctor_get(x_355, 1);
lean_inc(x_373);
lean_inc(x_372);
lean_dec(x_355);
x_374 = lean_ctor_get(x_2, 2);
lean_inc(x_374);
x_375 = lean_ctor_get(x_2, 1);
lean_inc(x_375);
lean_dec(x_2);
x_376 = lean_mk_string("Unit.unit");
x_377 = lean_string_utf8_byte_size(x_376);
x_378 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_378, 0, x_376);
lean_ctor_set(x_378, 1, x_74);
lean_ctor_set(x_378, 2, x_377);
x_379 = lean_mk_string("Unit");
x_380 = lean_name_mk_string(x_4, x_379);
x_381 = lean_mk_string("unit");
x_382 = lean_name_mk_string(x_380, x_381);
lean_inc(x_382);
x_383 = l_Lean_addMacroScope(x_375, x_382, x_374);
x_384 = lean_box(0);
x_385 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_385, 0, x_382);
lean_ctor_set(x_385, 1, x_384);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_384);
x_387 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_387, 0, x_372);
lean_ctor_set(x_387, 1, x_378);
lean_ctor_set(x_387, 2, x_383);
lean_ctor_set(x_387, 3, x_386);
x_388 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_388, 0, x_387);
lean_ctor_set(x_388, 1, x_373);
return x_388;
}
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandParen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandParen");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandParen___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandParen___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandParen___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandParen), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandParen(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_paren___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandParen___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandParen___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabParen(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_17 = lean_mk_string("paren");
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
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
lean_dec(x_1);
x_23 = l_Lean_nullKind;
x_24 = lean_unsigned_to_nat(2u);
lean_inc(x_22);
x_25 = l_Lean_Syntax_isNodeOf(x_22, x_23, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_Syntax_getArg(x_22, x_27);
x_29 = l_Lean_Syntax_getArg(x_22, x_21);
lean_dec(x_22);
lean_inc(x_29);
x_30 = l_Lean_Syntax_isNodeOf(x_29, x_23, x_21);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = l_Lean_Syntax_getArg(x_29, x_27);
lean_dec(x_29);
x_33 = lean_mk_string("typeAscription");
x_34 = lean_name_mk_string(x_16, x_33);
lean_inc(x_32);
x_35 = l_Lean_Syntax_isOfKind(x_32, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_32);
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_36 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_37 = l_Lean_Syntax_getArg(x_32, x_21);
lean_dec(x_32);
x_38 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabType), 8, 1);
lean_closure_set(x_38, 0, x_37);
x_39 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_40 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_38, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_41);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_43);
x_44 = l_Lean_Elab_Term_elabTerm(x_28, x_43, x_39, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_box(0);
x_48 = l_Lean_Elab_Term_ensureHasType(x_43, x_45, x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_46);
return x_48;
}
else
{
uint8_t x_49; 
lean_dec(x_43);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_44);
if (x_49 == 0)
{
return x_44;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_44, 0);
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_44);
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
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
}
}
}
lean_object* l_Lean_Elab_Term_elabParen___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabParen(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabParen");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabParen___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabParen___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_paren___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_elabParen___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabParen___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabSubst_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_elabSubst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSubst_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabSubst_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_3(x_3, x_8, x_9, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_elabSubst_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSubst_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_2);
x_12 = lean_array_push(x_11, x_2);
x_13 = lean_expr_instantiate1(x_1, x_2);
lean_dec(x_2);
x_14 = 0;
x_15 = 1;
x_16 = l_Lean_Meta_mkLambdaFVars(x_12, x_13, x_14, x_15, x_5, x_6, x_7, x_8, x_9);
return x_16;
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_13 = lean_box(0);
x_14 = lean_mk_string("x");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_15, x_10, x_11, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSubst___lambda__1___boxed), 9, 1);
lean_closure_set(x_19, 0, x_1);
x_20 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_21 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(x_17, x_20, x_2, x_19, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_24 = l_Lean_Meta_mkEqSymm(x_3, x_8, x_9, x_10, x_11, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_mkEqNDRec(x_22, x_4, x_25, x_8, x_9, x_10, x_11, x_26);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
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
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_Meta_isExprDefEq(x_3, x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_17, 0);
lean_dec(x_21);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_4);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_4);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
x_25 = lean_box(0);
x_26 = l_Lean_Elab_Term_elabSubst___lambda__2(x_1, x_5, x_6, x_7, x_25, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
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
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; 
x_35 = lean_expr_instantiate1(x_7, x_4);
lean_inc(x_35);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_ctor_get(x_13, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_13, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_13, 2);
lean_inc(x_39);
x_40 = lean_ctor_get(x_13, 3);
lean_inc(x_40);
x_41 = lean_ctor_get(x_13, 4);
lean_inc(x_41);
x_42 = lean_ctor_get(x_13, 5);
lean_inc(x_42);
x_43 = lean_ctor_get(x_13, 6);
lean_inc(x_43);
x_44 = lean_ctor_get(x_13, 7);
lean_inc(x_44);
x_45 = l_Lean_replaceRef(x_2, x_40);
lean_dec(x_40);
x_46 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_46, 0, x_37);
lean_ctor_set(x_46, 1, x_38);
lean_ctor_set(x_46, 2, x_39);
lean_ctor_set(x_46, 3, x_45);
lean_ctor_set(x_46, 4, x_41);
lean_ctor_set(x_46, 5, x_42);
lean_ctor_set(x_46, 6, x_43);
lean_ctor_set(x_46, 7, x_44);
x_47 = 1;
lean_inc(x_14);
lean_inc(x_46);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_36);
x_48 = l_Lean_Elab_Term_elabTerm(x_2, x_36, x_47, x_47, x_9, x_10, x_11, x_12, x_46, x_14, x_15);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_14);
lean_inc(x_46);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_49);
x_51 = l_Lean_Elab_Term_ensureHasType(x_36, x_49, x_3, x_9, x_10, x_11, x_12, x_46, x_14, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
lean_dec(x_46);
lean_dec(x_35);
lean_dec(x_5);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_16 = x_52;
x_17 = x_53;
goto block_34;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_51, 1);
lean_inc(x_55);
lean_dec(x_51);
lean_inc(x_14);
lean_inc(x_46);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_49);
x_56 = l_Lean_Meta_inferType(x_49, x_11, x_12, x_46, x_14, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_box(0);
lean_inc(x_14);
lean_inc(x_46);
lean_inc(x_12);
lean_inc(x_11);
x_60 = l_Lean_Meta_kabstract(x_57, x_5, x_59, x_11, x_12, x_46, x_14, x_58);
if (lean_obj_tag(x_60) == 0)
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_60, 0);
x_63 = lean_ctor_get(x_60, 1);
x_64 = l_Lean_Expr_hasLooseBVars(x_62);
if (x_64 == 0)
{
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_46);
lean_dec(x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
lean_ctor_set_tag(x_60, 1);
lean_ctor_set(x_60, 0, x_54);
return x_60;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_free_object(x_60);
x_65 = lean_box(0);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_1);
x_66 = l_Lean_Elab_Term_elabSubst___lambda__3(x_62, x_4, x_35, x_54, x_1, x_6, x_49, x_65, x_9, x_10, x_11, x_12, x_46, x_14, x_63);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_16 = x_67;
x_17 = x_68;
goto block_34;
}
else
{
uint8_t x_69; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_66);
if (x_69 == 0)
{
return x_66;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_66, 0);
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_66);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_ctor_get(x_60, 0);
x_74 = lean_ctor_get(x_60, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_60);
x_75 = l_Lean_Expr_hasLooseBVars(x_73);
if (x_75 == 0)
{
lean_object* x_76; 
lean_dec(x_73);
lean_dec(x_49);
lean_dec(x_46);
lean_dec(x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_54);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_box(0);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_1);
x_78 = l_Lean_Elab_Term_elabSubst___lambda__3(x_73, x_4, x_35, x_54, x_1, x_6, x_49, x_77, x_9, x_10, x_11, x_12, x_46, x_14, x_74);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_16 = x_79;
x_17 = x_80;
goto block_34;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_81 = lean_ctor_get(x_78, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_78, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_83 = x_78;
} else {
 lean_dec_ref(x_78);
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
}
else
{
uint8_t x_85; 
lean_dec(x_54);
lean_dec(x_49);
lean_dec(x_46);
lean_dec(x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_60);
if (x_85 == 0)
{
return x_60;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_60, 0);
x_87 = lean_ctor_get(x_60, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_60);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_54);
lean_dec(x_49);
lean_dec(x_46);
lean_dec(x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_56);
if (x_89 == 0)
{
return x_56;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_56, 0);
x_91 = lean_ctor_get(x_56, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_56);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_46);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_48);
if (x_93 == 0)
{
return x_48;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_48, 0);
x_95 = lean_ctor_get(x_48, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_48);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
block_34:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_18 = lean_box(0);
x_19 = lean_mk_string("x");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_20, x_13, x_14, x_17);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSubst___lambda__1___boxed), 9, 1);
lean_closure_set(x_24, 0, x_7);
x_25 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_26 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda_loop___spec__1___rarg(x_22, x_25, x_1, x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_23);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Meta_mkEqNDRec(x_27, x_16, x_6, x_11, x_12, x_13, x_14, x_28);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_26);
if (x_30 == 0)
{
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_14 = l_Lean_Meta_mkEqSymm(x_5, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = lean_apply_12(x_1, x_4, x_3, x_15, x_2, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
return x_18;
}
else
{
uint8_t x_19; 
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
lean_object* l_Lean_Elab_Term_elabSubst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_mk_string("invalid `▸` notation");
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_11 = l_Lean_Elab_Term_tryPostponeIfHasMVars(x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = lean_mk_string("Lean");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("Parser");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("Term");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("subst");
x_22 = lean_name_mk_string(x_20, x_21);
lean_inc(x_1);
x_23 = l_Lean_Syntax_isOfKind(x_1, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_13);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_1, x_27);
lean_dec(x_1);
x_29 = l_Lean_nullKind;
x_30 = lean_unsigned_to_nat(1u);
lean_inc(x_28);
x_31 = l_Lean_Syntax_isNodeOf(x_28, x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_32 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_13);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_33 = l_Lean_Syntax_getArg(x_28, x_25);
lean_dec(x_28);
x_34 = lean_box(0);
x_35 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_36 = l_Lean_Elab_Term_elabTerm(x_26, x_34, x_35, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_37);
x_39 = l_Lean_Meta_inferType(x_37, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_42 = l_Lean_Meta_instantiateMVars(x_40, x_5, x_6, x_7, x_8, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_43);
x_45 = l_Lean_Meta_matchEq_x3f(x_43, x_5, x_6, x_7, x_8, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_33);
lean_dec(x_12);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_mk_string("invalid `▸` notation, argument");
x_49 = l_Lean_stringToMessageData(x_48);
lean_dec(x_48);
x_50 = l_Lean_indentExpr(x_37);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_mk_string("\nhas type");
x_53 = l_Lean_stringToMessageData(x_52);
lean_dec(x_52);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_indentExpr(x_43);
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_mk_string("\nequality expected");
x_58 = l_Lean_stringToMessageData(x_57);
lean_dec(x_57);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_59, x_3, x_4, x_5, x_6, x_7, x_8, x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_61 = lean_ctor_get(x_46, 0);
lean_inc(x_61);
lean_dec(x_46);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_45, 1);
lean_inc(x_63);
lean_dec(x_45);
x_64 = lean_ctor_get(x_61, 0);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
lean_dec(x_62);
x_67 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_66);
lean_inc(x_12);
x_68 = l_Lean_Meta_kabstract(x_12, x_66, x_67, x_5, x_6, x_7, x_8, x_63);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
lean_inc(x_33);
lean_inc(x_64);
x_71 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSubst___lambda__4___boxed), 15, 3);
lean_closure_set(x_71, 0, x_64);
lean_closure_set(x_71, 1, x_33);
lean_closure_set(x_71, 2, x_34);
x_72 = l_Lean_Expr_hasLooseBVars(x_69);
if (x_72 == 0)
{
lean_object* x_73; 
lean_dec(x_69);
lean_dec(x_64);
lean_dec(x_33);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_65);
lean_inc(x_12);
x_73 = l_Lean_Meta_kabstract(x_12, x_65, x_67, x_5, x_6, x_7, x_8, x_70);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_Lean_Expr_hasLooseBVars(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
lean_dec(x_74);
lean_dec(x_71);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_37);
x_77 = lean_mk_string("invalid `▸` notation, expected type");
x_78 = l_Lean_stringToMessageData(x_77);
lean_dec(x_77);
x_79 = l_Lean_indentExpr(x_12);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_mk_string("\ndoes contain equation left-hand-side nor right-hand-side");
x_82 = l_Lean_stringToMessageData(x_81);
lean_dec(x_81);
x_83 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_indentExpr(x_43);
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_string("");
x_87 = l_Lean_stringToMessageData(x_86);
lean_dec(x_86);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_88, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
return x_89;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_89, 0);
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_89);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_43);
lean_dec(x_12);
x_94 = lean_box(0);
x_95 = l_Lean_Elab_Term_elabSubst___lambda__5(x_71, x_74, x_65, x_66, x_37, x_94, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
return x_95;
}
}
else
{
uint8_t x_96; 
lean_dec(x_71);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_43);
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_96 = !lean_is_exclusive(x_73);
if (x_96 == 0)
{
return x_73;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_73, 0);
x_98 = lean_ctor_get(x_73, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_73);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_71);
lean_dec(x_43);
lean_dec(x_12);
x_100 = lean_box(0);
x_101 = l_Lean_Elab_Term_elabSubst___lambda__4(x_64, x_33, x_34, x_65, x_66, x_37, x_69, x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_70);
lean_dec(x_65);
return x_101;
}
}
else
{
uint8_t x_102; 
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_43);
lean_dec(x_37);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_102 = !lean_is_exclusive(x_68);
if (x_102 == 0)
{
return x_68;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_68, 0);
x_104 = lean_ctor_get(x_68, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_68);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_43);
lean_dec(x_37);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_106 = !lean_is_exclusive(x_45);
if (x_106 == 0)
{
return x_45;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_45, 0);
x_108 = lean_ctor_get(x_45, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_45);
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
lean_dec(x_37);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_110 = !lean_is_exclusive(x_42);
if (x_110 == 0)
{
return x_42;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_42, 0);
x_112 = lean_ctor_get(x_42, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_42);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_37);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_114 = !lean_is_exclusive(x_39);
if (x_114 == 0)
{
return x_39;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_39, 0);
x_116 = lean_ctor_get(x_39, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_39);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_118 = !lean_is_exclusive(x_36);
if (x_118 == 0)
{
return x_36;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_36, 0);
x_120 = lean_ctor_get(x_36, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_36);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_122 = !lean_is_exclusive(x_11);
if (x_122 == 0)
{
return x_11;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_11, 0);
x_124 = lean_ctor_get(x_11, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_11);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabSubst___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_elabSubst___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Term_elabSubst___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Term_elabSubst___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Lean_Elab_Term_elabSubst___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Term_elabSubst___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
return x_14;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSubst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabSubst");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSubst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabSubst___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSubst___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSubst), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabSubst(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_subst___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabSubst___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabSubst___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabStateRefT___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_11 = l_Lean_levelOne;
x_12 = l_Lean_mkSort(x_11);
lean_inc_n(x_12, 2);
x_13 = l_Lean_Meta_mkArrow(x_12, x_12, x_6, x_7, x_8, x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Elab_Term_elabTerm(x_2, x_16, x_17, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_12);
x_22 = 0;
x_23 = lean_box(0);
lean_inc(x_6);
x_24 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_21, x_22, x_23, x_6, x_7, x_8, x_9, x_20);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_mk_string("STWorld");
x_28 = lean_name_mk_string(x_23, x_27);
x_29 = lean_unsigned_to_nat(2u);
x_30 = lean_mk_empty_array_with_capacity(x_29);
lean_inc(x_25);
x_31 = lean_array_push(x_30, x_25);
lean_inc(x_19);
x_32 = lean_array_push(x_31, x_19);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_33 = l_Lean_Meta_mkAppM(x_28, x_32, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_36 = l_Lean_Elab_Term_mkInstMVar(x_34, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
lean_dec(x_5);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_mk_string("StateRefT'");
x_39 = lean_name_mk_string(x_23, x_38);
x_40 = lean_unsigned_to_nat(3u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
x_42 = lean_array_push(x_41, x_25);
x_43 = lean_array_push(x_42, x_1);
x_44 = lean_array_push(x_43, x_19);
x_45 = l_Lean_Meta_mkAppM(x_39, x_44, x_6, x_7, x_8, x_9, x_37);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_36);
if (x_46 == 0)
{
return x_36;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_36, 0);
x_48 = lean_ctor_get(x_36, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_36);
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
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_33);
if (x_50 == 0)
{
return x_33;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_33, 0);
x_52 = lean_ctor_get(x_33, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_33);
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
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_18);
if (x_54 == 0)
{
return x_18;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_18, 0);
x_56 = lean_ctor_get(x_18, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_18);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabStateRefT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Elab_Term_elabType(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_inc(x_16);
x_17 = l_Lean_Syntax_getKind(x_16);
x_18 = lean_box(0);
x_19 = lean_mk_string("Lean");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Parser");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("Term");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("macroDollarArg");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_name_eq(x_17, x_26);
lean_dec(x_26);
lean_dec(x_17);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_box(0);
x_29 = l_Lean_Elab_Term_elabStateRefT___lambda__1(x_13, x_16, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Lean_Syntax_getArg(x_16, x_10);
lean_dec(x_16);
x_31 = lean_box(0);
x_32 = l_Lean_Elab_Term_elabStateRefT___lambda__1(x_13, x_30, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_12);
if (x_33 == 0)
{
return x_12;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabStateRefT___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabStateRefT___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabStateRefT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabStateRefT(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabStateRefT");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabStateRefT___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabStateRefT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_stateRefT___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabNoindex(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = 1;
x_13 = l_Lean_Elab_Term_elabTerm(x_11, x_2, x_12, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(x_15);
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
x_19 = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabNoindex___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabNoindex(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabNoindex");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNoindex___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoindex(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_noindex___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Init_Data_ToString(lean_object*);
lean_object* initialize_Lean_Compiler_BorrowedAnnotation(lean_object*);
lean_object* initialize_Lean_Meta_KAbstract(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Elab_SyntheticMVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_BuiltinNotation(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_BorrowedAnnotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_KAbstract(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1);
l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__2);
l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__1);
l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__2);
l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBorrowed___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabBorrowed(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandShow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandShow___closed__1);
l___regBuiltin_Lean_Elab_Term_expandShow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandShow___closed__2);
l___regBuiltin_Lean_Elab_Term_expandShow___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandShow___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandShow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandHave___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHave___closed__1);
l___regBuiltin_Lean_Elab_Term_expandHave___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHave___closed__2);
l___regBuiltin_Lean_Elab_Term_expandHave___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHave___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandHave(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__1);
l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__2);
l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandSuffices___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandSuffices(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabLeadingParserMacro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__1);
l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__2);
l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabTrailingParserMacro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabPanic___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabPanic___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabPanic___closed__1);
l___regBuiltin_Lean_Elab_Term_elabPanic___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabPanic___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabPanic___closed__2);
l___regBuiltin_Lean_Elab_Term_elabPanic___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabPanic___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabPanic___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabPanic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__1);
l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__2);
l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandUnreachable___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandUnreachable(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandAssert___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandAssert___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAssert___closed__1);
l___regBuiltin_Lean_Elab_Term_expandAssert___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandAssert___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAssert___closed__2);
l___regBuiltin_Lean_Elab_Term_expandAssert___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandAssert___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAssert___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandAssert(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__1);
l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__2);
l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDbgTrace___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandDbgTrace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabSorry___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabSorry___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSorry___closed__1);
l___regBuiltin_Lean_Elab_Term_elabSorry___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabSorry___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSorry___closed__2);
l___regBuiltin_Lean_Elab_Term_elabSorry___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabSorry___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSorry___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabSorry(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1 = _init_l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Term_expandCDot_x3f_go___boxed__const__1);
l___regBuiltin_Lean_Elab_Term_expandParen___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandParen___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandParen___closed__1);
l___regBuiltin_Lean_Elab_Term_expandParen___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandParen___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandParen___closed__2);
l___regBuiltin_Lean_Elab_Term_expandParen___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandParen___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandParen___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandParen(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabParen___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabParen___closed__1);
l___regBuiltin_Lean_Elab_Term_elabParen___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabParen___closed__2);
l___regBuiltin_Lean_Elab_Term_elabParen___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabParen___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabParen(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabSubst___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabSubst___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSubst___closed__1);
l___regBuiltin_Lean_Elab_Term_elabSubst___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabSubst___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSubst___closed__2);
l___regBuiltin_Lean_Elab_Term_elabSubst___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabSubst___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSubst___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabSubst(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__1);
l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__2);
l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabStateRefT___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabStateRefT(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__1);
l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__2);
l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNoindex___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabNoindex(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
