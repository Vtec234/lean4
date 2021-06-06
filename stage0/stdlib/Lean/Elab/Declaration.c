// Lean compiler output
// Module: Lean.Elab.Declaration
// Imports: Init Lean.Util.CollectLevelParams Lean.Elab.DeclUtil Lean.Elab.DefView Lean.Elab.Inductive Lean.Elab.Structure Lean.Elab.MutualDef Lean.Elab.DeclarationRange
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
lean_object* l_Lean_Elab_Command_elabDeclaration(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitialize(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___lambda__1(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3;
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1;
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Elab_Command_elabMutualDef(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f(lean_object*);
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Term_elabDoubleQuotedName___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2;
lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2;
lean_object* l_Lean_Elab_Command_elabAttr_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__3(lean_object*);
lean_object* l_Lean_Attribute_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Command_declaration___closed__2;
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashSetImp___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_getLevelNames___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__4___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_classInductiveSyntaxToView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_expandDeclId___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_runTermElabM___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString_x27___at_Lean_Elab_Command_expandDeclId___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAttr_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Command_attribute___closed__2;
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(lean_object*, size_t, size_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_elabCheckFailure___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabInductiveViews(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3;
lean_object* l_Lean_Elab_Command_elabAxiom_match__3___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Command_elabClassInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Command_builtin__initialize___closed__2;
lean_object* l_Lean_Elab_Command_expandInitialize___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3;
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutual___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1;
uint8_t l_Lean_Elab_Command_isDefLike(lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f(lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___boxed(lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__2___rarg(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__2(lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_Elab_Command_elabAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_expandInitCmd(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3;
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutual(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3;
lean_object* l_Lean_Elab_Term_applyAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1(lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__4(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
lean_object* l_Lean_Elab_Term_addAutoBoundImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3(size_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___rarg(lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(lean_object*, size_t, size_t);
lean_object* l_Lean_Elab_Command_elabAttr(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2(lean_object*);
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationSelectionRef(lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Command_initialize___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2___rarg(lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg(lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Command_mutual___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_5, x_10, x_12);
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
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_expandDeclIdCore(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_dec(x_5);
x_6 = l_Lean_extractMacroScopes(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_name_mk_string(x_13, x_12);
lean_ctor_set(x_6, 0, x_14);
x_15 = l_Lean_MacroScopesView_review(x_6);
x_16 = l_Lean_Syntax_isIdent(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = l_Lean_mkIdentFrom(x_1, x_15);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_setArg(x_1, x_18, x_17);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_8);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_2);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Lean_mkIdentFrom(x_1, x_15);
lean_dec(x_1);
lean_ctor_set(x_2, 1, x_21);
lean_ctor_set(x_2, 0, x_8);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_2);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_6, 1);
x_24 = lean_ctor_get(x_6, 2);
x_25 = lean_ctor_get(x_6, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_6);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_name_mk_string(x_27, x_26);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
x_30 = l_Lean_MacroScopesView_review(x_29);
x_31 = l_Lean_Syntax_isIdent(x_1);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = l_Lean_mkIdentFrom(x_1, x_30);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Lean_Syntax_setArg(x_1, x_33, x_32);
lean_ctor_set(x_2, 1, x_34);
lean_ctor_set(x_2, 0, x_8);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Lean_mkIdentFrom(x_1, x_30);
lean_dec(x_1);
lean_ctor_set(x_2, 1, x_36);
lean_ctor_set(x_2, 0, x_8);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_2);
return x_37;
}
}
}
}
else
{
lean_object* x_38; 
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_2);
lean_dec(x_1);
x_38 = lean_box(0);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Lean_extractMacroScopes(x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_43 = lean_box(0);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 3);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_box(0);
x_50 = lean_name_mk_string(x_49, x_48);
if (lean_is_scalar(x_47)) {
 x_51 = lean_alloc_ctor(0, 4, 0);
} else {
 x_51 = x_47;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
lean_ctor_set(x_51, 2, x_45);
lean_ctor_set(x_51, 3, x_46);
x_52 = l_Lean_MacroScopesView_review(x_51);
x_53 = l_Lean_Syntax_isIdent(x_1);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = l_Lean_mkIdentFrom(x_1, x_52);
x_55 = lean_unsigned_to_nat(0u);
x_56 = l_Lean_Syntax_setArg(x_1, x_55, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_42);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = l_Lean_mkIdentFrom(x_1, x_52);
lean_dec(x_1);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_42);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_62 = lean_box(0);
return x_62;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Lean");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Parser");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Command");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("declaration");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_1);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
lean_inc(x_14);
x_15 = l_Lean_Syntax_getKind(x_14);
x_16 = lean_mk_string("abbrev");
lean_inc(x_8);
x_17 = lean_name_mk_string(x_8, x_16);
x_18 = lean_name_eq(x_15, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_mk_string("def");
lean_inc(x_8);
x_20 = lean_name_mk_string(x_8, x_19);
x_21 = lean_name_eq(x_15, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_mk_string("theorem");
lean_inc(x_8);
x_23 = lean_name_mk_string(x_8, x_22);
x_24 = lean_name_eq(x_15, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_mk_string("constant");
lean_inc(x_8);
x_26 = lean_name_mk_string(x_8, x_25);
x_27 = lean_name_eq(x_15, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_mk_string("axiom");
lean_inc(x_8);
x_29 = lean_name_mk_string(x_8, x_28);
x_30 = lean_name_eq(x_15, x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_mk_string("inductive");
lean_inc(x_8);
x_32 = lean_name_mk_string(x_8, x_31);
x_33 = lean_name_eq(x_15, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_mk_string("classInductive");
lean_inc(x_8);
x_35 = lean_name_mk_string(x_8, x_34);
x_36 = lean_name_eq(x_15, x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_mk_string("structure");
lean_inc(x_8);
x_38 = lean_name_mk_string(x_8, x_37);
x_39 = lean_name_eq(x_15, x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_mk_string("instance");
x_41 = lean_name_mk_string(x_8, x_40);
x_42 = lean_name_eq(x_15, x_41);
lean_dec(x_41);
lean_dec(x_15);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_14);
lean_dec(x_1);
x_43 = lean_box(0);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_unsigned_to_nat(3u);
x_45 = l_Lean_Syntax_getArg(x_14, x_44);
x_46 = l_Lean_Syntax_isNone(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Lean_Syntax_getArg(x_45, x_47);
x_49 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
lean_dec(x_45);
lean_dec(x_14);
lean_dec(x_1);
x_50 = lean_box(0);
return x_50;
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_49);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_49, 0);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_52, 1);
x_55 = l_Lean_Syntax_setArg(x_45, x_47, x_54);
x_56 = l_Lean_Syntax_setArg(x_14, x_44, x_55);
x_57 = l_Lean_Syntax_setArg(x_1, x_13, x_56);
lean_ctor_set(x_52, 1, x_57);
return x_49;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_ctor_get(x_52, 0);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_52);
x_60 = l_Lean_Syntax_setArg(x_45, x_47, x_59);
x_61 = l_Lean_Syntax_setArg(x_14, x_44, x_60);
x_62 = l_Lean_Syntax_setArg(x_1, x_13, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_58);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set(x_49, 0, x_63);
return x_49;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_49, 0);
lean_inc(x_64);
lean_dec(x_49);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_67 = x_64;
} else {
 lean_dec_ref(x_64);
 x_67 = lean_box(0);
}
x_68 = l_Lean_Syntax_setArg(x_45, x_47, x_66);
x_69 = l_Lean_Syntax_setArg(x_14, x_44, x_68);
x_70 = l_Lean_Syntax_setArg(x_1, x_13, x_69);
if (lean_is_scalar(x_67)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_67;
}
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_45);
lean_dec(x_14);
lean_dec(x_1);
x_73 = lean_box(0);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_15);
lean_dec(x_8);
x_74 = l_Lean_Syntax_getArg(x_14, x_13);
x_75 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
lean_dec(x_14);
lean_dec(x_1);
x_76 = lean_box(0);
return x_76;
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; 
x_78 = lean_ctor_get(x_75, 0);
x_79 = !lean_is_exclusive(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_78, 1);
x_81 = l_Lean_Syntax_setArg(x_14, x_13, x_80);
x_82 = l_Lean_Syntax_setArg(x_1, x_13, x_81);
lean_ctor_set(x_78, 1, x_82);
return x_75;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_78, 0);
x_84 = lean_ctor_get(x_78, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_78);
x_85 = l_Lean_Syntax_setArg(x_14, x_13, x_84);
x_86 = l_Lean_Syntax_setArg(x_1, x_13, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_83);
lean_ctor_set(x_87, 1, x_86);
lean_ctor_set(x_75, 0, x_87);
return x_75;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_88 = lean_ctor_get(x_75, 0);
lean_inc(x_88);
lean_dec(x_75);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = l_Lean_Syntax_setArg(x_14, x_13, x_90);
x_93 = l_Lean_Syntax_setArg(x_1, x_13, x_92);
if (lean_is_scalar(x_91)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_91;
}
lean_ctor_set(x_94, 0, x_89);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
return x_95;
}
}
}
}
else
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_15);
lean_dec(x_8);
x_96 = l_Lean_Syntax_getArg(x_14, x_13);
x_97 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_96);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; 
lean_dec(x_14);
lean_dec(x_1);
x_98 = lean_box(0);
return x_98;
}
else
{
uint8_t x_99; 
x_99 = !lean_is_exclusive(x_97);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_97, 0);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_100, 1);
x_103 = l_Lean_Syntax_setArg(x_14, x_13, x_102);
x_104 = l_Lean_Syntax_setArg(x_1, x_13, x_103);
lean_ctor_set(x_100, 1, x_104);
return x_97;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_100, 0);
x_106 = lean_ctor_get(x_100, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_100);
x_107 = l_Lean_Syntax_setArg(x_14, x_13, x_106);
x_108 = l_Lean_Syntax_setArg(x_1, x_13, x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_105);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_97, 0, x_109);
return x_97;
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_110 = lean_ctor_get(x_97, 0);
lean_inc(x_110);
lean_dec(x_97);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_113 = x_110;
} else {
 lean_dec_ref(x_110);
 x_113 = lean_box(0);
}
x_114 = l_Lean_Syntax_setArg(x_14, x_13, x_112);
x_115 = l_Lean_Syntax_setArg(x_1, x_13, x_114);
if (lean_is_scalar(x_113)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_113;
}
lean_ctor_set(x_116, 0, x_111);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_116);
return x_117;
}
}
}
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_15);
lean_dec(x_8);
x_118 = l_Lean_Syntax_getArg(x_14, x_13);
x_119 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; 
lean_dec(x_14);
lean_dec(x_1);
x_120 = lean_box(0);
return x_120;
}
else
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_119);
if (x_121 == 0)
{
lean_object* x_122; uint8_t x_123; 
x_122 = lean_ctor_get(x_119, 0);
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_122, 1);
x_125 = l_Lean_Syntax_setArg(x_14, x_13, x_124);
x_126 = l_Lean_Syntax_setArg(x_1, x_13, x_125);
lean_ctor_set(x_122, 1, x_126);
return x_119;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_127 = lean_ctor_get(x_122, 0);
x_128 = lean_ctor_get(x_122, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_122);
x_129 = l_Lean_Syntax_setArg(x_14, x_13, x_128);
x_130 = l_Lean_Syntax_setArg(x_1, x_13, x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_127);
lean_ctor_set(x_131, 1, x_130);
lean_ctor_set(x_119, 0, x_131);
return x_119;
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_132 = lean_ctor_get(x_119, 0);
lean_inc(x_132);
lean_dec(x_119);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_135 = x_132;
} else {
 lean_dec_ref(x_132);
 x_135 = lean_box(0);
}
x_136 = l_Lean_Syntax_setArg(x_14, x_13, x_134);
x_137 = l_Lean_Syntax_setArg(x_1, x_13, x_136);
if (lean_is_scalar(x_135)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_135;
}
lean_ctor_set(x_138, 0, x_133);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_139, 0, x_138);
return x_139;
}
}
}
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_15);
lean_dec(x_8);
x_140 = l_Lean_Syntax_getArg(x_14, x_13);
x_141 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_140);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; 
lean_dec(x_14);
lean_dec(x_1);
x_142 = lean_box(0);
return x_142;
}
else
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_141);
if (x_143 == 0)
{
lean_object* x_144; uint8_t x_145; 
x_144 = lean_ctor_get(x_141, 0);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_144, 1);
x_147 = l_Lean_Syntax_setArg(x_14, x_13, x_146);
x_148 = l_Lean_Syntax_setArg(x_1, x_13, x_147);
lean_ctor_set(x_144, 1, x_148);
return x_141;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_149 = lean_ctor_get(x_144, 0);
x_150 = lean_ctor_get(x_144, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_144);
x_151 = l_Lean_Syntax_setArg(x_14, x_13, x_150);
x_152 = l_Lean_Syntax_setArg(x_1, x_13, x_151);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_149);
lean_ctor_set(x_153, 1, x_152);
lean_ctor_set(x_141, 0, x_153);
return x_141;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_154 = lean_ctor_get(x_141, 0);
lean_inc(x_154);
lean_dec(x_141);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_157 = x_154;
} else {
 lean_dec_ref(x_154);
 x_157 = lean_box(0);
}
x_158 = l_Lean_Syntax_setArg(x_14, x_13, x_156);
x_159 = l_Lean_Syntax_setArg(x_1, x_13, x_158);
if (lean_is_scalar(x_157)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_157;
}
lean_ctor_set(x_160, 0, x_155);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_161, 0, x_160);
return x_161;
}
}
}
}
else
{
lean_object* x_162; lean_object* x_163; 
lean_dec(x_15);
lean_dec(x_8);
x_162 = l_Lean_Syntax_getArg(x_14, x_13);
x_163 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_162);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; 
lean_dec(x_14);
lean_dec(x_1);
x_164 = lean_box(0);
return x_164;
}
else
{
uint8_t x_165; 
x_165 = !lean_is_exclusive(x_163);
if (x_165 == 0)
{
lean_object* x_166; uint8_t x_167; 
x_166 = lean_ctor_get(x_163, 0);
x_167 = !lean_is_exclusive(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_166, 1);
x_169 = l_Lean_Syntax_setArg(x_14, x_13, x_168);
x_170 = l_Lean_Syntax_setArg(x_1, x_13, x_169);
lean_ctor_set(x_166, 1, x_170);
return x_163;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_171 = lean_ctor_get(x_166, 0);
x_172 = lean_ctor_get(x_166, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_166);
x_173 = l_Lean_Syntax_setArg(x_14, x_13, x_172);
x_174 = l_Lean_Syntax_setArg(x_1, x_13, x_173);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_171);
lean_ctor_set(x_175, 1, x_174);
lean_ctor_set(x_163, 0, x_175);
return x_163;
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_176 = lean_ctor_get(x_163, 0);
lean_inc(x_176);
lean_dec(x_163);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_179 = x_176;
} else {
 lean_dec_ref(x_176);
 x_179 = lean_box(0);
}
x_180 = l_Lean_Syntax_setArg(x_14, x_13, x_178);
x_181 = l_Lean_Syntax_setArg(x_1, x_13, x_180);
if (lean_is_scalar(x_179)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_179;
}
lean_ctor_set(x_182, 0, x_177);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_182);
return x_183;
}
}
}
}
else
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_15);
lean_dec(x_8);
x_184 = l_Lean_Syntax_getArg(x_14, x_13);
x_185 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_184);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; 
lean_dec(x_14);
lean_dec(x_1);
x_186 = lean_box(0);
return x_186;
}
else
{
uint8_t x_187; 
x_187 = !lean_is_exclusive(x_185);
if (x_187 == 0)
{
lean_object* x_188; uint8_t x_189; 
x_188 = lean_ctor_get(x_185, 0);
x_189 = !lean_is_exclusive(x_188);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_188, 1);
x_191 = l_Lean_Syntax_setArg(x_14, x_13, x_190);
x_192 = l_Lean_Syntax_setArg(x_1, x_13, x_191);
lean_ctor_set(x_188, 1, x_192);
return x_185;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_193 = lean_ctor_get(x_188, 0);
x_194 = lean_ctor_get(x_188, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_188);
x_195 = l_Lean_Syntax_setArg(x_14, x_13, x_194);
x_196 = l_Lean_Syntax_setArg(x_1, x_13, x_195);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_193);
lean_ctor_set(x_197, 1, x_196);
lean_ctor_set(x_185, 0, x_197);
return x_185;
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_198 = lean_ctor_get(x_185, 0);
lean_inc(x_198);
lean_dec(x_185);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 x_201 = x_198;
} else {
 lean_dec_ref(x_198);
 x_201 = lean_box(0);
}
x_202 = l_Lean_Syntax_setArg(x_14, x_13, x_200);
x_203 = l_Lean_Syntax_setArg(x_1, x_13, x_202);
if (lean_is_scalar(x_201)) {
 x_204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_204 = x_201;
}
lean_ctor_set(x_204, 0, x_199);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_205, 0, x_204);
return x_205;
}
}
}
}
else
{
lean_object* x_206; lean_object* x_207; 
lean_dec(x_15);
lean_dec(x_8);
x_206 = l_Lean_Syntax_getArg(x_14, x_13);
x_207 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_206);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
lean_dec(x_14);
lean_dec(x_1);
x_208 = lean_box(0);
return x_208;
}
else
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_207);
if (x_209 == 0)
{
lean_object* x_210; uint8_t x_211; 
x_210 = lean_ctor_get(x_207, 0);
x_211 = !lean_is_exclusive(x_210);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_210, 1);
x_213 = l_Lean_Syntax_setArg(x_14, x_13, x_212);
x_214 = l_Lean_Syntax_setArg(x_1, x_13, x_213);
lean_ctor_set(x_210, 1, x_214);
return x_207;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_215 = lean_ctor_get(x_210, 0);
x_216 = lean_ctor_get(x_210, 1);
lean_inc(x_216);
lean_inc(x_215);
lean_dec(x_210);
x_217 = l_Lean_Syntax_setArg(x_14, x_13, x_216);
x_218 = l_Lean_Syntax_setArg(x_1, x_13, x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_215);
lean_ctor_set(x_219, 1, x_218);
lean_ctor_set(x_207, 0, x_219);
return x_207;
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_220 = lean_ctor_get(x_207, 0);
lean_inc(x_220);
lean_dec(x_207);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_223 = x_220;
} else {
 lean_dec_ref(x_220);
 x_223 = lean_box(0);
}
x_224 = l_Lean_Syntax_setArg(x_14, x_13, x_222);
x_225 = l_Lean_Syntax_setArg(x_1, x_13, x_224);
if (lean_is_scalar(x_223)) {
 x_226 = lean_alloc_ctor(0, 2, 0);
} else {
 x_226 = x_223;
}
lean_ctor_set(x_226, 0, x_221);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_227, 0, x_226);
return x_227;
}
}
}
}
else
{
lean_object* x_228; lean_object* x_229; 
lean_dec(x_15);
lean_dec(x_8);
x_228 = l_Lean_Syntax_getArg(x_14, x_13);
x_229 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_228);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; 
lean_dec(x_14);
lean_dec(x_1);
x_230 = lean_box(0);
return x_230;
}
else
{
uint8_t x_231; 
x_231 = !lean_is_exclusive(x_229);
if (x_231 == 0)
{
lean_object* x_232; uint8_t x_233; 
x_232 = lean_ctor_get(x_229, 0);
x_233 = !lean_is_exclusive(x_232);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_232, 1);
x_235 = l_Lean_Syntax_setArg(x_14, x_13, x_234);
x_236 = l_Lean_Syntax_setArg(x_1, x_13, x_235);
lean_ctor_set(x_232, 1, x_236);
return x_229;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_237 = lean_ctor_get(x_232, 0);
x_238 = lean_ctor_get(x_232, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_232);
x_239 = l_Lean_Syntax_setArg(x_14, x_13, x_238);
x_240 = l_Lean_Syntax_setArg(x_1, x_13, x_239);
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_237);
lean_ctor_set(x_241, 1, x_240);
lean_ctor_set(x_229, 0, x_241);
return x_229;
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_242 = lean_ctor_get(x_229, 0);
lean_inc(x_242);
lean_dec(x_229);
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_242, 1);
lean_inc(x_244);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 lean_ctor_release(x_242, 1);
 x_245 = x_242;
} else {
 lean_dec_ref(x_242);
 x_245 = lean_box(0);
}
x_246 = l_Lean_Syntax_setArg(x_14, x_13, x_244);
x_247 = l_Lean_Syntax_setArg(x_1, x_13, x_246);
if (lean_is_scalar(x_245)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_245;
}
lean_ctor_set(x_248, 0, x_243);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_249, 0, x_248);
return x_249;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAxiom_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAxiom_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__4___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAxiom_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__4___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = 0;
x_7 = l_Lean_Syntax_getPos_x3f(x_1, x_6);
x_8 = l_Lean_Syntax_getTailPos_x3f(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_FileMap_toPosition(x_5, x_9);
lean_inc(x_10);
x_11 = l_Lean_FileMap_leanPosToLspPos(x_5, x_10);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_12);
lean_inc(x_10);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_10);
lean_ctor_set(x_13, 3, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = l_Lean_FileMap_toPosition(x_5, x_16);
lean_dec(x_16);
lean_inc(x_17);
x_18 = l_Lean_FileMap_leanPosToLspPos(x_5, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_17);
lean_ctor_set(x_20, 3, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
lean_dec(x_7);
x_23 = l_Lean_FileMap_toPosition(x_5, x_22);
lean_dec(x_22);
lean_inc(x_23);
x_24 = l_Lean_FileMap_leanPosToLspPos(x_5, x_23);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_25);
lean_inc(x_23);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_4);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_dec(x_8);
x_30 = l_Lean_FileMap_toPosition(x_5, x_29);
lean_dec(x_29);
lean_inc(x_30);
x_31 = l_Lean_FileMap_leanPosToLspPos(x_5, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_23);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_4);
return x_34;
}
}
}
}
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_st_ref_take(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_declRangeExt;
x_12 = l_Lean_MapDeclarationExtension_insert___rarg(x_11, x_10, x_1, x_2);
lean_ctor_set(x_7, 0, x_12);
x_13 = lean_st_ref_set(x_4, x_7, x_8);
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
x_24 = lean_ctor_get(x_7, 4);
x_25 = lean_ctor_get(x_7, 5);
x_26 = lean_ctor_get(x_7, 6);
x_27 = lean_ctor_get(x_7, 7);
x_28 = lean_ctor_get(x_7, 8);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_29 = l_Lean_declRangeExt;
x_30 = l_Lean_MapDeclarationExtension_insert___rarg(x_29, x_20, x_1, x_2);
x_31 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_22);
lean_ctor_set(x_31, 3, x_23);
lean_ctor_set(x_31, 4, x_24);
lean_ctor_set(x_31, 5, x_25);
lean_ctor_set(x_31, 6, x_26);
lean_ctor_set(x_31, 7, x_27);
lean_ctor_set(x_31, 8, x_28);
x_32 = lean_st_ref_set(x_4, x_31, x_8);
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
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_inc(x_2);
x_6 = l_Lean_Syntax_getKind(x_2);
x_7 = lean_box(0);
x_8 = lean_mk_string("Lean");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("Parser");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("Command");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("example");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_name_eq(x_6, x_15);
lean_dec(x_15);
lean_dec(x_6);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_2, x_3, x_4, x_5);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_getDeclarationSelectionRef(x_2);
x_21 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_20, x_3, x_4, x_19);
lean_dec(x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(x_1, x_24, x_3, x_4, x_23);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_5);
return x_27;
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
x_12 = l_Lean_Elab_Term_applyAttributesAt(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = 2;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_2);
x_18 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l_Lean_Elab_Term_elabType(x_3, x_9, x_10, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 0;
x_24 = lean_box(0);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_25 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_23, x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_27 = l_Lean_Meta_instantiateMVars(x_21, x_11, x_12, x_13, x_14, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
lean_inc(x_11);
x_31 = l_Lean_Meta_mkForallFVars(x_8, x_28, x_23, x_30, x_11, x_12, x_13, x_14, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_11);
x_34 = l_Lean_Meta_mkForallFVars(x_4, x_32, x_30, x_30, x_11, x_12, x_13, x_14, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unsigned_to_nat(1u);
x_38 = l_Lean_Elab_Term_levelMVarToParam(x_35, x_37, x_9, x_10, x_11, x_12, x_13, x_14, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(8u);
x_43 = l_Std_mkHashSetImp___rarg(x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
lean_inc(x_43);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_43);
lean_ctor_set(x_46, 2, x_45);
lean_inc(x_41);
x_47 = l_Lean_CollectLevelParams_main(x_41, x_46);
x_48 = lean_ctor_get(x_47, 2);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_Elab_sortDeclLevelParams(x_5, x_6, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_41);
lean_dec(x_2);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(x_7, x_52, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_49, 0);
lean_inc(x_54);
lean_dec(x_49);
lean_inc(x_2);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_2);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_41);
x_56 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_57 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*1, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_58);
x_59 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_58, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
lean_inc(x_13);
lean_inc(x_9);
x_61 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_58, x_9, x_10, x_11, x_12, x_13, x_14, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_2);
x_64 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_63, x_9, x_10, x_11, x_12, x_13, x_14, x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_get(x_14, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
lean_dec(x_67);
lean_inc(x_2);
x_70 = l_Lean_isExtern(x_69, x_2);
lean_dec(x_69);
if (x_70 == 0)
{
uint8_t x_71; lean_object* x_72; 
lean_dec(x_58);
x_71 = 1;
x_72 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_71, x_9, x_10, x_11, x_12, x_13, x_14, x_68);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_72;
}
else
{
lean_object* x_73; 
lean_inc(x_13);
lean_inc(x_9);
x_73 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_58, x_9, x_10, x_11, x_12, x_13, x_14, x_68);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; uint8_t x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = 1;
x_76 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_75, x_9, x_10, x_11, x_12, x_13, x_14, x_74);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_76;
}
else
{
uint8_t x_77; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_77 = !lean_is_exclusive(x_73);
if (x_77 == 0)
{
return x_73;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_73, 0);
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_73);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_58);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
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
else
{
uint8_t x_85; 
lean_dec(x_58);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_85 = !lean_is_exclusive(x_61);
if (x_85 == 0)
{
return x_61;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_61, 0);
x_87 = lean_ctor_get(x_61, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_61);
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
lean_dec(x_58);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_59);
if (x_89 == 0)
{
return x_59;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_59, 0);
x_91 = lean_ctor_get(x_59, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_59);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_34);
if (x_93 == 0)
{
return x_34;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_34, 0);
x_95 = lean_ctor_get(x_34, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_34);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_97 = !lean_is_exclusive(x_31);
if (x_97 == 0)
{
return x_31;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_31, 0);
x_99 = lean_ctor_get(x_31, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_31);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_101 = !lean_is_exclusive(x_27);
if (x_101 == 0)
{
return x_27;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_27, 0);
x_103 = lean_ctor_get(x_27, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_27);
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
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_25);
if (x_105 == 0)
{
return x_25;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_25, 0);
x_107 = lean_ctor_get(x_25, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_25);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_109 = !lean_is_exclusive(x_20);
if (x_109 == 0)
{
return x_20;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_20, 0);
x_111 = lean_ctor_get(x_20, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_20);
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
lean_dec(x_14);
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
x_113 = !lean_is_exclusive(x_18);
if (x_113 == 0)
{
return x_18;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_18, 0);
x_115 = lean_ctor_get(x_18, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_18);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = lean_array_get_size(x_9);
x_23 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_24 = l_Array_toSubarray___rarg(x_9, x_23, x_22);
x_25 = lean_ctor_get(x_1, 6);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_21);
x_27 = lean_array_get_size(x_25);
x_28 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_29 = 0;
x_30 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_runTermElabM___spec__1(x_25, x_28, x_29, x_26, x_10, x_11, x_12, x_13, x_14, x_15, x_20);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = !lean_is_exclusive(x_10);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_10, 7);
lean_dec(x_35);
lean_ctor_set(x_10, 7, x_33);
x_36 = l_Lean_Elab_Term_resetMessageLog(x_10, x_11, x_12, x_13, x_14, x_15, x_32);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
lean_inc(x_12);
lean_inc(x_10);
x_38 = l_Lean_Elab_Term_addAutoBoundImplicits(x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_37);
lean_dec(x_9);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Syntax_getArgs(x_2);
lean_inc(x_7);
x_42 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__2___boxed), 15, 7);
lean_closure_set(x_42, 0, x_3);
lean_closure_set(x_42, 1, x_4);
lean_closure_set(x_42, 2, x_5);
lean_closure_set(x_42, 3, x_39);
lean_closure_set(x_42, 4, x_6);
lean_closure_set(x_42, 5, x_7);
lean_closure_set(x_42, 6, x_8);
x_43 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_43, 0, x_41);
lean_closure_set(x_43, 1, x_42);
x_44 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 2);
lean_closure_set(x_44, 0, x_7);
lean_closure_set(x_44, 1, x_43);
x_45 = l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(x_44, x_10, x_11, x_12, x_13, x_14, x_15, x_40);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_10);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_38);
if (x_46 == 0)
{
return x_38;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_38, 0);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_50 = lean_ctor_get(x_10, 0);
x_51 = lean_ctor_get(x_10, 1);
x_52 = lean_ctor_get(x_10, 2);
x_53 = lean_ctor_get(x_10, 3);
x_54 = lean_ctor_get(x_10, 4);
x_55 = lean_ctor_get_uint8(x_10, sizeof(void*)*8);
x_56 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 1);
x_57 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 2);
x_58 = lean_ctor_get(x_10, 5);
x_59 = lean_ctor_get(x_10, 6);
x_60 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 3);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_10);
x_61 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_51);
lean_ctor_set(x_61, 2, x_52);
lean_ctor_set(x_61, 3, x_53);
lean_ctor_set(x_61, 4, x_54);
lean_ctor_set(x_61, 5, x_58);
lean_ctor_set(x_61, 6, x_59);
lean_ctor_set(x_61, 7, x_33);
lean_ctor_set_uint8(x_61, sizeof(void*)*8, x_55);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 1, x_56);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 2, x_57);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 3, x_60);
x_62 = l_Lean_Elab_Term_resetMessageLog(x_61, x_11, x_12, x_13, x_14, x_15, x_32);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
lean_inc(x_12);
lean_inc(x_61);
x_64 = l_Lean_Elab_Term_addAutoBoundImplicits(x_9, x_61, x_11, x_12, x_13, x_14, x_15, x_63);
lean_dec(x_9);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_Syntax_getArgs(x_2);
lean_inc(x_7);
x_68 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__2___boxed), 15, 7);
lean_closure_set(x_68, 0, x_3);
lean_closure_set(x_68, 1, x_4);
lean_closure_set(x_68, 2, x_5);
lean_closure_set(x_68, 3, x_65);
lean_closure_set(x_68, 4, x_6);
lean_closure_set(x_68, 5, x_7);
lean_closure_set(x_68, 6, x_8);
x_69 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_69, 0, x_67);
lean_closure_set(x_69, 1, x_68);
x_70 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 2);
lean_closure_set(x_70, 0, x_7);
lean_closure_set(x_70, 1, x_69);
x_71 = l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(x_70, x_61, x_11, x_12, x_13, x_14, x_15, x_66);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_61);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_72 = lean_ctor_get(x_64, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_64, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_74 = x_64;
} else {
 lean_dec_ref(x_64);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_15);
lean_dec(x_14);
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
x_76 = !lean_is_exclusive(x_19);
if (x_76 == 0)
{
return x_19;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_19, 0);
x_78 = lean_ctor_get(x_19, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_19);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Elab_expandDeclSig(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Command_getLevelNames___rarg(x_4, x_5);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_3);
lean_inc(x_1);
x_16 = l_Lean_Elab_Command_expandDeclId(x_7, x_1, x_3, x_4, x_15);
lean_dec(x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
lean_dec(x_17);
lean_inc(x_2);
lean_inc(x_19);
x_21 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(x_19, x_2, x_3, x_4, x_18);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_19);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_19);
x_24 = l_Lean_Elab_Command_getScope___rarg(x_4, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 5);
lean_inc(x_27);
x_28 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__3___boxed), 16, 8);
lean_closure_set(x_28, 0, x_25);
lean_closure_set(x_28, 1, x_11);
lean_closure_set(x_28, 2, x_1);
lean_closure_set(x_28, 3, x_19);
lean_closure_set(x_28, 4, x_12);
lean_closure_set(x_28, 5, x_14);
lean_closure_set(x_28, 6, x_20);
lean_closure_set(x_28, 7, x_2);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_29, 0, x_27);
lean_closure_set(x_29, 1, x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicit___rarg), 8, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = l_Lean_Elab_Command_liftTermElabM___rarg(x_23, x_30, x_3, x_4, x_26);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Command_elabAxiom___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Command_elabAxiom___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_7);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Lean_Elab_Command_elabAxiom___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_elabAxiom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_mk_string("invalid use of attributes in constructor declaration");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
x_12 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_11, x_3, x_4, x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_mk_string("invalid use of 'unsafe' in constructor declaration");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_10, x_3, x_4, x_5);
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
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_mk_string("invalid use of 'partial' in constructor declaration");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_10, x_3, x_4, x_5);
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
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(x_1, x_6, x_2, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_mk_string("invalid use of 'noncomputable' in constructor declaration");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_9, x_2, x_3, x_4);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_2, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_3, x_4, x_5, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(x_1, x_13, x_4, x_5, x_12);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_5);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(x_1, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getIdAt(x_2, x_10);
x_12 = l_Lean_Name_append(x_3, x_11);
x_13 = l_Lean_Syntax_getArg(x_2, x_10);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_15 = l_Lean_Elab_Command_getRef(x_5, x_6, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_replaceRef(x_13, x_16);
lean_dec(x_16);
x_19 = lean_ctor_get(x_5, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_5, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_5, 3);
lean_inc(x_22);
x_23 = lean_ctor_get(x_5, 4);
lean_inc(x_23);
x_24 = lean_ctor_get(x_5, 5);
lean_inc(x_24);
x_25 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
lean_ctor_set(x_25, 5, x_24);
lean_ctor_set(x_25, 6, x_18);
x_26 = l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_expandDeclId___spec__3(x_14, x_12, x_25, x_6, x_17);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(3u);
x_30 = l_Lean_Syntax_getArg(x_2, x_29);
x_31 = l_Lean_Syntax_isNone(x_30);
lean_dec(x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = l_Lean_Syntax_getArg(x_2, x_32);
x_34 = l_Lean_Elab_expandOptDeclSig(x_33);
lean_dec(x_33);
if (x_31 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_inc(x_27);
x_38 = l_Lean_addDocString_x27___at_Lean_Elab_Command_expandDeclId___spec__6(x_27, x_37, x_5, x_6, x_28);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_27);
x_40 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_27, x_2, x_13, x_5, x_6, x_39);
lean_dec(x_5);
lean_dec(x_13);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = 1;
x_44 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_44, 0, x_2);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_27);
lean_ctor_set(x_44, 3, x_35);
lean_ctor_set(x_44, 4, x_36);
lean_ctor_set_uint8(x_44, sizeof(void*)*5, x_43);
lean_ctor_set(x_40, 0, x_44);
return x_40;
}
else
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
x_46 = 1;
x_47 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_47, 0, x_2);
lean_ctor_set(x_47, 1, x_1);
lean_ctor_set(x_47, 2, x_27);
lean_ctor_set(x_47, 3, x_35);
lean_ctor_set(x_47, 4, x_36);
lean_ctor_set_uint8(x_47, sizeof(void*)*5, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_49 = lean_ctor_get(x_34, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_34, 1);
lean_inc(x_50);
lean_dec(x_34);
x_51 = lean_ctor_get(x_1, 0);
lean_inc(x_51);
lean_inc(x_27);
x_52 = l_Lean_addDocString_x27___at_Lean_Elab_Command_expandDeclId___spec__6(x_27, x_51, x_5, x_6, x_28);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
lean_inc(x_27);
x_54 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_27, x_2, x_13, x_5, x_6, x_53);
lean_dec(x_5);
lean_dec(x_13);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = 0;
x_58 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_58, 0, x_2);
lean_ctor_set(x_58, 1, x_1);
lean_ctor_set(x_58, 2, x_27);
lean_ctor_set(x_58, 3, x_49);
lean_ctor_set(x_58, 4, x_50);
lean_ctor_set_uint8(x_58, sizeof(void*)*5, x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = 0;
x_61 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_61, 0, x_2);
lean_ctor_set(x_61, 1, x_1);
lean_ctor_set(x_61, 2, x_27);
lean_ctor_set(x_61, 3, x_49);
lean_ctor_set(x_61, 4, x_50);
lean_ctor_set_uint8(x_61, sizeof(void*)*5, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
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
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_8);
if (x_67 == 0)
{
return x_8;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_8, 0);
x_69 = lean_ctor_get(x_8, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_8);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Elab_Modifiers_isProtected(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(x_1, x_2, x_3, x_10, x_6, x_7, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(x_1, x_2, x_3, x_13, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_mk_string("invalid 'protected' constructor in a 'private' inductive datatype");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_16, x_6, x_7, x_8);
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
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_4 < x_3;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = x_5;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_12 = lean_array_uget(x_5, x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_5, x_4, x_13);
x_23 = x_12;
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_Lean_Syntax_getArg(x_23, x_24);
x_26 = l_Lean_Elab_Command_getRef(x_6, x_7, x_8);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_replaceRef(x_23, x_27);
lean_dec(x_27);
x_30 = lean_ctor_get(x_6, 0);
x_31 = lean_ctor_get(x_6, 1);
x_32 = lean_ctor_get(x_6, 2);
x_33 = lean_ctor_get(x_6, 3);
x_34 = lean_ctor_get(x_6, 4);
x_35 = lean_ctor_get(x_6, 5);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
x_36 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_31);
lean_ctor_set(x_36, 2, x_32);
lean_ctor_set(x_36, 3, x_33);
lean_ctor_set(x_36, 4, x_34);
lean_ctor_set(x_36, 5, x_35);
lean_ctor_set(x_36, 6, x_29);
lean_inc(x_36);
x_37 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_25, x_36, x_7, x_28);
lean_dec(x_25);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Elab_Modifiers_isPrivate(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_box(0);
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(x_38, x_23, x_2, x_1, x_41, x_36, x_7, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_15 = x_43;
x_16 = x_44;
goto block_22;
}
else
{
uint8_t x_45; 
lean_dec(x_14);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
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
x_49 = l_Lean_Elab_Modifiers_isPrivate(x_1);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_box(0);
x_51 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(x_38, x_23, x_2, x_1, x_50, x_36, x_7, x_39);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_15 = x_52;
x_16 = x_53;
goto block_22;
}
else
{
uint8_t x_54; 
lean_dec(x_14);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
return x_51;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
lean_dec(x_38);
lean_dec(x_23);
lean_dec(x_14);
x_58 = lean_mk_string("invalid 'private' constructor in a 'private' inductive datatype");
x_59 = l_Lean_stringToMessageData(x_58);
lean_dec(x_58);
x_60 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_59, x_36, x_7, x_39);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
return x_60;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_60, 0);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_60);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_36);
lean_dec(x_23);
lean_dec(x_14);
x_65 = !lean_is_exclusive(x_37);
if (x_65 == 0)
{
return x_37;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_37, 0);
x_67 = lean_ctor_get(x_37, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_37);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
block_22:
{
size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = 1;
x_18 = x_4 + x_17;
x_19 = x_15;
x_20 = lean_array_uset(x_14, x_4, x_19);
x_4 = x_18;
x_5 = x_20;
x_8 = x_16;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_3);
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Elab_expandOptDeclSig(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l_Lean_Elab_Command_expandDeclId(x_14, x_1, x_3, x_4, x_7);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 2);
lean_inc(x_20);
lean_dec(x_16);
lean_inc(x_2);
lean_inc(x_19);
x_21 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(x_19, x_2, x_3, x_4, x_17);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(4u);
x_24 = l_Lean_Syntax_getArg(x_2, x_23);
x_25 = l_Lean_Syntax_getArgs(x_24);
lean_dec(x_24);
x_26 = lean_array_get_size(x_25);
x_27 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_28 = x_25;
x_29 = lean_box_usize(x_27);
x_30 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1;
lean_inc(x_19);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed), 8, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_19);
lean_closure_set(x_31, 2, x_29);
lean_closure_set(x_31, 3, x_30);
lean_closure_set(x_31, 4, x_28);
x_32 = x_31;
lean_inc(x_4);
lean_inc(x_3);
x_33 = lean_apply_3(x_32, x_3, x_4, x_22);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_unsigned_to_nat(5u);
x_37 = l_Lean_Syntax_getArg(x_2, x_36);
x_38 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_37, x_3, x_4, x_35);
lean_dec(x_37);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_41, 0, x_2);
lean_ctor_set(x_41, 1, x_1);
lean_ctor_set(x_41, 2, x_18);
lean_ctor_set(x_41, 3, x_19);
lean_ctor_set(x_41, 4, x_20);
lean_ctor_set(x_41, 5, x_11);
lean_ctor_set(x_41, 6, x_12);
lean_ctor_set(x_41, 7, x_34);
lean_ctor_set(x_41, 8, x_40);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_44, 0, x_2);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_18);
lean_ctor_set(x_44, 3, x_19);
lean_ctor_set(x_44, 4, x_20);
lean_ctor_set(x_44, 5, x_11);
lean_ctor_set(x_44, 6, x_12);
lean_ctor_set(x_44, 7, x_34);
lean_ctor_set(x_44, 8, x_42);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_34);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_38);
if (x_46 == 0)
{
return x_38;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_38, 0);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
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
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_6);
if (x_58 == 0)
{
return x_6;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_6, 0);
x_60 = lean_ctor_get(x_6, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_6);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_classInductiveSyntaxToView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_array_push(x_10, x_7);
x_12 = l_Lean_Elab_Command_elabInductiveViews(x_11, x_3, x_4, x_8);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabClassInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_box(0);
x_7 = lean_mk_string("class");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = 0;
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_9);
x_12 = l_Lean_Elab_Modifiers_addAttribute(x_1, x_11);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_12, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_array_push(x_17, x_14);
x_19 = l_Lean_Elab_Command_elabInductiveViews(x_18, x_3, x_4, x_15);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabDeclaration(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_inc(x_2);
x_8 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_7, x_2, x_3, x_4);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = lean_box(0);
x_15 = lean_mk_string("Lean");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("Parser");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("Command");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("axiom");
lean_inc(x_20);
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_name_eq(x_13, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_mk_string("inductive");
lean_inc(x_20);
x_25 = lean_name_mk_string(x_20, x_24);
x_26 = lean_name_eq(x_13, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_mk_string("classInductive");
lean_inc(x_20);
x_28 = lean_name_mk_string(x_20, x_27);
x_29 = lean_name_eq(x_13, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_mk_string("structure");
x_31 = lean_name_mk_string(x_20, x_30);
x_32 = lean_name_eq(x_13, x_31);
lean_dec(x_31);
lean_dec(x_13);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_9);
x_33 = l_Lean_Elab_Command_isDefLike(x_12);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_1);
x_34 = lean_mk_string("unexpected declaration");
x_35 = l_Lean_stringToMessageData(x_34);
lean_dec(x_34);
x_36 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_35, x_2, x_3, x_10);
lean_dec(x_3);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_mk_empty_array_with_capacity(x_11);
x_38 = lean_array_push(x_37, x_1);
x_39 = l_Lean_Elab_Command_elabMutualDef(x_38, x_2, x_3, x_10);
return x_39;
}
}
else
{
lean_object* x_40; 
lean_dec(x_1);
x_40 = l_Lean_Elab_Command_elabStructure(x_9, x_12, x_2, x_3, x_10);
return x_40;
}
}
else
{
lean_object* x_41; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_1);
x_41 = l_Lean_Elab_Command_elabClassInductive(x_9, x_12, x_2, x_3, x_10);
return x_41;
}
}
else
{
lean_object* x_42; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_1);
x_42 = l_Lean_Elab_Command_elabInductive(x_9, x_12, x_2, x_3, x_10);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_1);
x_43 = l_Lean_Elab_Command_elabAxiom(x_9, x_12, x_2, x_3, x_10);
lean_dec(x_3);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_8);
if (x_44 == 0)
{
return x_8;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_8, 0);
x_46 = lean_ctor_get(x_8, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_8);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_48 = lean_ctor_get(x_5, 0);
lean_inc(x_48);
lean_dec(x_5);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_mkIdentFrom(x_1, x_49);
x_52 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_elabCheckFailure___spec__1(x_2, x_3, x_4);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_54);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Lean_Elab_Command_getMainModule___rarg(x_3, x_56);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_box(0);
x_60 = lean_mk_string("null");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = lean_mk_string("Lean");
x_63 = lean_name_mk_string(x_59, x_62);
x_64 = lean_mk_string("Parser");
x_65 = lean_name_mk_string(x_63, x_64);
x_66 = lean_mk_string("Command");
x_67 = lean_name_mk_string(x_65, x_66);
x_68 = lean_mk_string("namespace");
lean_inc(x_68);
lean_inc(x_67);
x_69 = lean_name_mk_string(x_67, x_68);
lean_inc(x_53);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_53);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_unsigned_to_nat(2u);
x_72 = lean_mk_empty_array_with_capacity(x_71);
lean_inc(x_72);
x_73 = lean_array_push(x_72, x_70);
lean_inc(x_51);
x_74 = lean_array_push(x_73, x_51);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_69);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_mk_string("end");
lean_inc(x_76);
x_77 = lean_name_mk_string(x_67, x_76);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_53);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_array_push(x_80, x_51);
lean_inc(x_61);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_61);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_72, x_78);
x_84 = lean_array_push(x_83, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_77);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_unsigned_to_nat(3u);
x_87 = lean_mk_empty_array_with_capacity(x_86);
x_88 = lean_array_push(x_87, x_75);
x_89 = lean_array_push(x_88, x_50);
x_90 = lean_array_push(x_89, x_85);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_61);
lean_ctor_set(x_91, 1, x_90);
x_92 = !lean_is_exclusive(x_2);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_2, 4);
lean_inc(x_91);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_1);
lean_ctor_set(x_94, 1, x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
lean_ctor_set(x_2, 4, x_95);
x_96 = l_Lean_Elab_Command_elabCommand(x_91, x_2, x_3, x_58);
lean_dec(x_2);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_97 = lean_ctor_get(x_2, 0);
x_98 = lean_ctor_get(x_2, 1);
x_99 = lean_ctor_get(x_2, 2);
x_100 = lean_ctor_get(x_2, 3);
x_101 = lean_ctor_get(x_2, 4);
x_102 = lean_ctor_get(x_2, 5);
x_103 = lean_ctor_get(x_2, 6);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_2);
lean_inc(x_91);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_1);
lean_ctor_set(x_104, 1, x_91);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_101);
x_106 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_106, 0, x_97);
lean_ctor_set(x_106, 1, x_98);
lean_ctor_set(x_106, 2, x_99);
lean_ctor_set(x_106, 3, x_100);
lean_ctor_set(x_106, 4, x_105);
lean_ctor_set(x_106, 5, x_102);
lean_ctor_set(x_106, 6, x_103);
x_107 = l_Lean_Elab_Command_elabCommand(x_91, x_106, x_3, x_58);
lean_dec(x_106);
return x_107;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabDeclaration");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDeclaration), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_declaration___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = lean_box(0);
x_10 = lean_mk_string("Lean");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("Parser");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("Command");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("inductive");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_name_eq(x_8, x_17);
lean_dec(x_17);
lean_dec(x_8);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = 1;
return x_19;
}
else
{
size_t x_20; size_t x_21; 
x_20 = 1;
x_21 = x_2 + x_20;
x_2 = x_21;
goto _start;
}
}
else
{
uint8_t x_23; 
x_23 = 0;
return x_23;
}
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
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
lean_inc(x_5);
lean_inc(x_4);
x_20 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_16, x_19, x_4, x_5, x_17);
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
lean_dec(x_5);
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
lean_dec(x_5);
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
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = x_1;
x_8 = lean_box_usize(x_6);
x_9 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1;
x_10 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed), 6, 3);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_7);
x_11 = x_10;
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_3(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Command_elabInductiveViews(x_13, x_2, x_3, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_3);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(x_7, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Elab_Command_isDefLike(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_2 + x_10;
x_2 = x_11;
goto _start;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Command");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("variable");
lean_inc(x_9);
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_name_eq(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_mk_string("variables");
lean_inc(x_9);
x_14 = lean_name_mk_string(x_9, x_13);
x_15 = lean_name_eq(x_2, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_mk_string("universe");
lean_inc(x_9);
x_17 = lean_name_mk_string(x_9, x_16);
x_18 = lean_name_eq(x_2, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_mk_string("universes");
lean_inc(x_9);
x_20 = lean_name_mk_string(x_9, x_19);
x_21 = lean_name_eq(x_2, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_mk_string("check");
lean_inc(x_9);
x_23 = lean_name_mk_string(x_9, x_22);
x_24 = lean_name_eq(x_2, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_mk_string("set_option");
lean_inc(x_9);
x_26 = lean_name_mk_string(x_9, x_25);
x_27 = lean_name_eq(x_2, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_mk_string("open");
x_29 = lean_name_mk_string(x_9, x_28);
x_30 = lean_name_eq(x_2, x_29);
lean_dec(x_29);
lean_dec(x_2);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_9);
lean_dec(x_2);
x_31 = 1;
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_9);
lean_dec(x_2);
x_32 = 1;
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_9);
lean_dec(x_2);
x_33 = 1;
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_9);
lean_dec(x_2);
x_34 = 1;
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_2);
x_35 = 1;
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_9);
lean_dec(x_2);
x_36 = 1;
return x_36;
}
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_fget(x_1, x_2);
x_7 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Array_toSubarray___rarg(x_1, x_8, x_2);
x_11 = l_Array_ofSubarray___rarg(x_10);
lean_dec(x_10);
x_12 = l_Array_toSubarray___rarg(x_1, x_2, x_3);
x_13 = l_Array_ofSubarray___rarg(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_box(0);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_2 = x_18;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_4, x_8, x_9);
return x_10;
}
}
else
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_apply_3(x_5, x_13, x_14, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_14; 
x_14 = x_3 < x_2;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_uget(x_1, x_3);
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
x_20 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_16);
if (lean_obj_tag(x_19) == 0)
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_array_push(x_18, x_16);
lean_ctor_set(x_4, 0, x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_4);
x_7 = x_22;
x_8 = x_6;
goto block_13;
}
else
{
uint8_t x_23; 
lean_dec(x_16);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_ctor_set(x_20, 0, x_25);
x_27 = lean_array_push(x_18, x_26);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_27);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_4);
x_7 = x_28;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec(x_20);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_30);
x_33 = lean_array_push(x_18, x_31);
lean_ctor_set(x_4, 1, x_32);
lean_ctor_set(x_4, 0, x_33);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_4);
x_7 = x_34;
x_8 = x_6;
goto block_13;
}
}
}
else
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_array_push(x_18, x_16);
lean_ctor_set(x_4, 0, x_35);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_4);
x_7 = x_36;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_16);
x_37 = lean_ctor_get(x_20, 0);
lean_inc(x_37);
lean_dec(x_20);
x_38 = lean_ctor_get(x_19, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_name_eq(x_38, x_39);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_4);
lean_dec(x_19);
lean_dec(x_18);
x_42 = 1;
x_43 = l_Lean_Name_toString(x_39, x_42);
x_44 = lean_mk_string("conflicting namespaces in mutual declaration, using namespace '");
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = lean_mk_string("', but used '");
x_47 = lean_string_append(x_45, x_46);
lean_dec(x_46);
x_48 = l_Lean_Name_toString(x_38, x_42);
x_49 = lean_string_append(x_47, x_48);
lean_dec(x_48);
x_50 = lean_mk_string("' in previous declaration");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
x_52 = l_Lean_Macro_throwErrorAt___rarg(x_40, x_51, x_5, x_6);
lean_dec(x_40);
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
lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_38);
x_57 = lean_array_push(x_18, x_40);
lean_ctor_set(x_4, 0, x_57);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_4);
x_7 = x_58;
x_8 = x_6;
goto block_13;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_4, 0);
x_60 = lean_ctor_get(x_4, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_4);
lean_inc(x_16);
x_61 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_16);
if (lean_obj_tag(x_60) == 0)
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_array_push(x_59, x_16);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_7 = x_64;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_16);
x_65 = lean_ctor_get(x_61, 0);
lean_inc(x_65);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_66 = x_61;
} else {
 lean_dec_ref(x_61);
 x_66 = lean_box(0);
}
x_67 = lean_ctor_get(x_65, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
if (lean_is_scalar(x_66)) {
 x_69 = lean_alloc_ctor(1, 1, 0);
} else {
 x_69 = x_66;
}
lean_ctor_set(x_69, 0, x_67);
x_70 = lean_array_push(x_59, x_68);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_7 = x_72;
x_8 = x_6;
goto block_13;
}
}
else
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_array_push(x_59, x_16);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_60);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_7 = x_75;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_16);
x_76 = lean_ctor_get(x_61, 0);
lean_inc(x_76);
lean_dec(x_61);
x_77 = lean_ctor_get(x_60, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = lean_name_eq(x_77, x_78);
if (x_80 == 0)
{
uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_60);
lean_dec(x_59);
x_81 = 1;
x_82 = l_Lean_Name_toString(x_78, x_81);
x_83 = lean_mk_string("conflicting namespaces in mutual declaration, using namespace '");
x_84 = lean_string_append(x_83, x_82);
lean_dec(x_82);
x_85 = lean_mk_string("', but used '");
x_86 = lean_string_append(x_84, x_85);
lean_dec(x_85);
x_87 = l_Lean_Name_toString(x_77, x_81);
x_88 = lean_string_append(x_86, x_87);
lean_dec(x_87);
x_89 = lean_mk_string("' in previous declaration");
x_90 = lean_string_append(x_88, x_89);
lean_dec(x_89);
x_91 = l_Lean_Macro_throwErrorAt___rarg(x_79, x_90, x_5, x_6);
lean_dec(x_79);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_78);
lean_dec(x_77);
x_96 = lean_array_push(x_59, x_79);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_60);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_7 = x_98;
x_8 = x_6;
goto block_13;
}
}
}
}
}
block_13:
{
lean_object* x_9; size_t x_10; size_t x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
x_4 = x_9;
x_6 = x_8;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_4 = lean_box(0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = l_Lean_Syntax_getArgs(x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_4);
x_11 = lean_array_get_size(x_9);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
lean_inc(x_2);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(x_9, x_12, x_13, x_10, x_2, x_3);
lean_dec(x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_14, 0);
lean_dec(x_18);
x_19 = lean_box(1);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_dec(x_14);
x_21 = lean_box(1);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l_Lean_mkIdentFrom(x_1, x_25);
x_27 = l_Lean_nullKind;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
x_29 = l_Lean_Syntax_setArg(x_1, x_7, x_28);
x_30 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_23);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_box(0);
x_34 = lean_mk_string("null");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("Lean");
x_37 = lean_name_mk_string(x_33, x_36);
x_38 = lean_mk_string("Parser");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("Command");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("namespace");
lean_inc(x_42);
lean_inc(x_41);
x_43 = lean_name_mk_string(x_41, x_42);
lean_inc(x_32);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_32);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_unsigned_to_nat(2u);
x_46 = lean_mk_empty_array_with_capacity(x_45);
lean_inc(x_46);
x_47 = lean_array_push(x_46, x_44);
lean_inc(x_26);
x_48 = lean_array_push(x_47, x_26);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_mk_string("end");
lean_inc(x_50);
x_51 = lean_name_mk_string(x_41, x_50);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_32);
lean_ctor_set(x_52, 1, x_50);
x_53 = lean_mk_empty_array_with_capacity(x_7);
x_54 = lean_array_push(x_53, x_26);
lean_inc(x_35);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_35);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_array_push(x_46, x_52);
x_57 = lean_array_push(x_56, x_55);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_unsigned_to_nat(3u);
x_60 = lean_mk_empty_array_with_capacity(x_59);
x_61 = lean_array_push(x_60, x_49);
x_62 = lean_array_push(x_61, x_29);
x_63 = lean_array_push(x_62, x_58);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_35);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_30, 0, x_64);
return x_30;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_65 = lean_ctor_get(x_30, 0);
x_66 = lean_ctor_get(x_30, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_30);
x_67 = lean_box(0);
x_68 = lean_mk_string("null");
x_69 = lean_name_mk_string(x_67, x_68);
x_70 = lean_mk_string("Lean");
x_71 = lean_name_mk_string(x_67, x_70);
x_72 = lean_mk_string("Parser");
x_73 = lean_name_mk_string(x_71, x_72);
x_74 = lean_mk_string("Command");
x_75 = lean_name_mk_string(x_73, x_74);
x_76 = lean_mk_string("namespace");
lean_inc(x_76);
lean_inc(x_75);
x_77 = lean_name_mk_string(x_75, x_76);
lean_inc(x_65);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_65);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_unsigned_to_nat(2u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
lean_inc(x_80);
x_81 = lean_array_push(x_80, x_78);
lean_inc(x_26);
x_82 = lean_array_push(x_81, x_26);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_77);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_mk_string("end");
lean_inc(x_84);
x_85 = lean_name_mk_string(x_75, x_84);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_65);
lean_ctor_set(x_86, 1, x_84);
x_87 = lean_mk_empty_array_with_capacity(x_7);
x_88 = lean_array_push(x_87, x_26);
lean_inc(x_69);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_69);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_push(x_80, x_86);
x_91 = lean_array_push(x_90, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_85);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_unsigned_to_nat(3u);
x_94 = lean_mk_empty_array_with_capacity(x_93);
x_95 = lean_array_push(x_94, x_83);
x_96 = lean_array_push(x_95, x_29);
x_97 = lean_array_push(x_96, x_92);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_69);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_66);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_14);
if (x_100 == 0)
{
return x_14;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_14, 0);
x_102 = lean_ctor_get(x_14, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_14);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandMutualNamespace");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_mutual___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 < x_2;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_uget(x_1, x_3);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_inc(x_9);
x_13 = l_Lean_Macro_expandMacro_x3f(x_9, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_11, x_9);
lean_ctor_set(x_4, 0, x_16);
x_17 = 1;
x_18 = x_3 + x_17;
x_3 = x_18;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; size_t x_25; size_t x_26; 
lean_dec(x_12);
lean_dec(x_9);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_array_push(x_11, x_21);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_4, 1, x_24);
lean_ctor_set(x_4, 0, x_22);
x_25 = 1;
x_26 = x_3 + x_25;
x_3 = x_26;
x_6 = x_20;
goto _start;
}
}
else
{
uint8_t x_28; 
lean_free_object(x_4);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
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
lean_inc(x_5);
lean_inc(x_9);
x_34 = l_Lean_Macro_expandMacro_x3f(x_9, x_5, x_6);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; 
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_array_push(x_32, x_9);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
x_39 = 1;
x_40 = x_3 + x_39;
x_3 = x_40;
x_4 = x_38;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; 
lean_dec(x_33);
lean_dec(x_9);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_dec(x_34);
x_43 = lean_ctor_get(x_35, 0);
lean_inc(x_43);
lean_dec(x_35);
x_44 = lean_array_push(x_32, x_43);
x_45 = 1;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = 1;
x_49 = x_3 + x_48;
x_3 = x_49;
x_4 = x_47;
x_6 = x_42;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_9);
lean_dec(x_5);
x_51 = lean_ctor_get(x_34, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_34, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_53 = x_34;
} else {
 lean_dec_ref(x_34);
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
lean_object* l_Lean_Elab_Command_expandMutualElement(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Syntax_getArgs(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_array_get_size(x_8);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(x_8, x_13, x_14, x_11, x_2, x_3);
lean_dec(x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_16);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_15, 0);
lean_dec(x_20);
x_21 = lean_box(1);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_dec(x_15);
x_23 = lean_box(1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_15, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
x_28 = l_Lean_nullKind;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_Syntax_setArg(x_1, x_6, x_29);
lean_ctor_set(x_15, 0, x_30);
return x_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_dec(x_15);
x_32 = lean_ctor_get(x_16, 0);
lean_inc(x_32);
lean_dec(x_16);
x_33 = l_Lean_nullKind;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_Lean_Syntax_setArg(x_1, x_6, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_31);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_15);
if (x_37 == 0)
{
return x_15;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_15, 0);
x_39 = lean_ctor_get(x_15, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_15);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandMutualElement");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_mutual___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_9 = lean_box(1);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = lean_mk_string("Lean");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Parser");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("Command");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("section");
lean_inc(x_24);
lean_inc(x_23);
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_mk_string("null");
x_28 = lean_name_mk_string(x_17, x_27);
x_29 = lean_mk_empty_array_with_capacity(x_7);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_unsigned_to_nat(2u);
x_32 = lean_mk_empty_array_with_capacity(x_31);
lean_inc(x_32);
x_33 = lean_array_push(x_32, x_26);
lean_inc(x_30);
x_34 = lean_array_push(x_33, x_30);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_nullKind;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_13);
x_38 = l_Lean_Syntax_setArg(x_1, x_4, x_37);
x_39 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_16);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_mk_string("end");
lean_inc(x_42);
x_43 = lean_name_mk_string(x_23, x_42);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_array_push(x_32, x_44);
x_46 = lean_array_push(x_45, x_30);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_43);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_48);
x_49 = lean_array_push(x_48, x_35);
x_50 = l_Array_append___rarg(x_49, x_12);
lean_dec(x_12);
lean_inc(x_48);
x_51 = lean_array_push(x_48, x_38);
x_52 = l_Array_append___rarg(x_50, x_51);
lean_dec(x_51);
x_53 = lean_array_push(x_48, x_47);
x_54 = l_Array_append___rarg(x_52, x_53);
lean_dec(x_53);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_36);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_39, 0, x_55);
return x_39;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_56 = lean_ctor_get(x_39, 0);
x_57 = lean_ctor_get(x_39, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_39);
x_58 = lean_mk_string("end");
lean_inc(x_58);
x_59 = lean_name_mk_string(x_23, x_58);
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_32, x_60);
x_62 = lean_array_push(x_61, x_30);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_64);
x_65 = lean_array_push(x_64, x_35);
x_66 = l_Array_append___rarg(x_65, x_12);
lean_dec(x_12);
lean_inc(x_64);
x_67 = lean_array_push(x_64, x_38);
x_68 = l_Array_append___rarg(x_66, x_67);
lean_dec(x_67);
x_69 = lean_array_push(x_64, x_63);
x_70 = l_Array_append___rarg(x_68, x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_36);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_57);
return x_72;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_expandMutualPreamble(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandMutualPreamble");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualPreamble___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_mutual___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabMutual(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_mk_string("invalid mutual block");
x_8 = l_Lean_stringToMessageData(x_7);
lean_dec(x_7);
x_9 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_8, x_2, x_3, x_4);
lean_dec(x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getArgs(x_11);
lean_dec(x_11);
x_13 = l_Lean_Elab_Command_elabMutualDef(x_12, x_2, x_3, x_4);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(x_16, x_2, x_3, x_4);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Command_elabMutual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabMutual(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabMutual");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMutual___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_mutual___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabAttr_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAttr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAttr_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_push(x_3, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_1, x_3);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_14 = l_Lean_Syntax_getKind(x_10);
x_15 = lean_box(0);
x_16 = lean_mk_string("Lean");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("Parser");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Command");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("eraseAttr");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_name_eq(x_14, x_23);
lean_dec(x_23);
lean_dec(x_14);
if (x_24 == 0)
{
lean_object* x_25; size_t x_26; size_t x_27; 
x_25 = lean_array_push(x_13, x_10);
lean_ctor_set(x_4, 1, x_25);
x_26 = 1;
x_27 = x_3 + x_26;
x_3 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_free_object(x_4);
x_29 = lean_unsigned_to_nat(1u);
x_30 = l_Lean_Syntax_getArg(x_10, x_29);
lean_dec(x_10);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
x_32 = lean_erase_macro_scopes(x_31);
x_33 = lean_st_ref_get(x_6, x_7);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_isAttribute(x_36, x_32);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_13);
lean_dec(x_12);
x_38 = lean_mk_string("unknown attribute [");
x_39 = l_Lean_stringToMessageData(x_38);
lean_dec(x_38);
x_40 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_40, 0, x_32);
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_mk_string("]");
x_43 = l_Lean_stringToMessageData(x_42);
lean_dec(x_42);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_44, x_5, x_6, x_35);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
return x_45;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_45);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; size_t x_55; size_t x_56; 
x_50 = lean_box(0);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_32, x_13, x_12, x_50, x_5, x_6, x_35);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec(x_52);
x_55 = 1;
x_56 = x_3 + x_55;
x_3 = x_56;
x_4 = x_54;
x_7 = x_53;
goto _start;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_58 = lean_ctor_get(x_4, 0);
x_59 = lean_ctor_get(x_4, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_4);
lean_inc(x_10);
x_60 = l_Lean_Syntax_getKind(x_10);
x_61 = lean_box(0);
x_62 = lean_mk_string("Lean");
x_63 = lean_name_mk_string(x_61, x_62);
x_64 = lean_mk_string("Parser");
x_65 = lean_name_mk_string(x_63, x_64);
x_66 = lean_mk_string("Command");
x_67 = lean_name_mk_string(x_65, x_66);
x_68 = lean_mk_string("eraseAttr");
x_69 = lean_name_mk_string(x_67, x_68);
x_70 = lean_name_eq(x_60, x_69);
lean_dec(x_69);
lean_dec(x_60);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; 
x_71 = lean_array_push(x_59, x_10);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_58);
lean_ctor_set(x_72, 1, x_71);
x_73 = 1;
x_74 = x_3 + x_73;
x_3 = x_74;
x_4 = x_72;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_76 = lean_unsigned_to_nat(1u);
x_77 = l_Lean_Syntax_getArg(x_10, x_76);
lean_dec(x_10);
x_78 = l_Lean_Syntax_getId(x_77);
lean_dec(x_77);
x_79 = lean_erase_macro_scopes(x_78);
x_80 = lean_st_ref_get(x_6, x_7);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_Lean_isAttribute(x_83, x_79);
lean_dec(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_59);
lean_dec(x_58);
x_85 = lean_mk_string("unknown attribute [");
x_86 = l_Lean_stringToMessageData(x_85);
lean_dec(x_85);
x_87 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_87, 0, x_79);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_mk_string("]");
x_90 = l_Lean_stringToMessageData(x_89);
lean_dec(x_89);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__14(x_91, x_5, x_6, x_82);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_95 = x_92;
} else {
 lean_dec_ref(x_92);
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
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; size_t x_102; size_t x_103; 
x_97 = lean_box(0);
x_98 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_79, x_59, x_58, x_97, x_5, x_6, x_82);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
lean_dec(x_99);
x_102 = 1;
x_103 = x_3 + x_102;
x_3 = x_103;
x_4 = x_101;
x_7 = x_100;
goto _start;
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_4 < x_3;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = lean_array_uget(x_2, x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_16 = l_Lean_Attribute_erase(x_1, x_15, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = 1;
x_19 = x_4 + x_18;
x_20 = lean_box(0);
x_4 = x_19;
x_5 = x_20;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_10);
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
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_Elab_Term_applyAttributes(x_4, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_array_get_size(x_2);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__2(x_4, x_2, x_15, x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
lean_dec(x_5);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
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
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_12);
if (x_26 == 0)
{
return x_12;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_12, 0);
x_28 = lean_ctor_get(x_12, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_12);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_6 < x_5;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_7);
x_13 = lean_array_uget(x_4, x_6);
x_14 = lean_box(0);
x_15 = l_Lean_Syntax_getId(x_13);
lean_inc(x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Term_elabDoubleQuotedName___spec__1___boxed), 9, 2);
lean_closure_set(x_16, 0, x_13);
lean_closure_set(x_16, 1, x_15);
x_17 = lean_box_usize(x_1);
lean_inc(x_2);
lean_inc(x_3);
x_18 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___lambda__1___boxed), 11, 3);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_17);
x_19 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_19, 0, x_16);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Elab_Command_getRef(x_8, x_9, x_10);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_replaceRef(x_13, x_21);
lean_dec(x_21);
lean_dec(x_13);
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
x_26 = lean_ctor_get(x_8, 2);
x_27 = lean_ctor_get(x_8, 3);
x_28 = lean_ctor_get(x_8, 4);
x_29 = lean_ctor_get(x_8, 5);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
x_30 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
lean_ctor_set(x_30, 4, x_28);
lean_ctor_set(x_30, 5, x_29);
lean_ctor_set(x_30, 6, x_23);
x_31 = l_Lean_Elab_Command_liftTermElabM___rarg(x_14, x_19, x_30, x_9, x_22);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; size_t x_33; size_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = 1;
x_34 = x_6 + x_33;
x_35 = lean_box(0);
x_6 = x_34;
x_7 = x_35;
x_10 = x_32;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_31);
if (x_37 == 0)
{
return x_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_31, 0);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAttr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = l_Lean_Syntax_getSepArgs(x_8);
lean_dec(x_8);
lean_inc(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_array_get_size(x_9);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
lean_inc(x_2);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(x_9, x_12, x_13, x_10, x_2, x_3, x_4);
lean_dec(x_9);
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
lean_inc(x_2);
x_19 = l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(x_18, x_2, x_3, x_16);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(4u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
x_24 = l_Lean_Syntax_getArgs(x_23);
lean_dec(x_23);
x_25 = lean_array_get_size(x_24);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = lean_box(0);
x_28 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3(x_13, x_17, x_20, x_24, x_26, x_13, x_27, x_2, x_3, x_21);
lean_dec(x_2);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
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
lean_dec(x_17);
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
uint8_t x_41; 
lean_dec(x_2);
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
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__2(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; lean_object* x_13; 
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___lambda__1(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_13 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__3(x_11, x_2, x_3, x_4, x_12, x_13, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Lean_Elab_Command_elabAttr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabAttr(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabAttr");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAttr___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_attribute___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_2, x_7);
x_9 = l_Lean_Syntax_isNone(x_6);
if (x_1 == 0)
{
lean_object* x_623; lean_object* x_624; lean_object* x_625; 
x_623 = lean_box(0);
x_624 = lean_mk_string("init");
x_625 = lean_name_mk_string(x_623, x_624);
x_10 = x_625;
goto block_622;
}
else
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; 
x_626 = lean_box(0);
x_627 = lean_mk_string("builtinInit");
x_628 = lean_name_mk_string(x_626, x_627);
x_10 = x_628;
goto block_622;
}
block_622:
{
lean_object* x_11; 
x_11 = l_Lean_mkIdentFrom(x_2, x_10);
if (x_9 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_6, x_12);
x_14 = l_Lean_Syntax_getArg(x_6, x_5);
lean_dec(x_6);
x_15 = l_Lean_Syntax_getArg(x_14, x_5);
lean_dec(x_14);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_3, x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_box(0);
x_22 = lean_mk_string("null");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("Lean");
x_25 = lean_name_mk_string(x_21, x_24);
x_26 = lean_mk_string("Parser");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Command");
lean_inc(x_27);
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("declaration");
lean_inc(x_29);
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("declModifiers");
lean_inc(x_29);
x_33 = lean_name_mk_string(x_29, x_32);
x_34 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_23);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_unsigned_to_nat(6u);
x_37 = lean_mk_empty_array_with_capacity(x_36);
lean_inc(x_35);
x_38 = lean_array_push(x_37, x_35);
lean_inc(x_35);
lean_inc(x_38);
x_39 = lean_array_push(x_38, x_35);
lean_inc(x_35);
x_40 = lean_array_push(x_39, x_35);
lean_inc(x_35);
x_41 = lean_array_push(x_40, x_35);
lean_inc(x_35);
x_42 = lean_array_push(x_41, x_35);
lean_inc(x_35);
x_43 = lean_array_push(x_42, x_35);
lean_inc(x_33);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("def");
lean_inc(x_45);
lean_inc(x_29);
x_46 = lean_name_mk_string(x_29, x_45);
lean_inc(x_18);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_18);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_mk_string("declId");
lean_inc(x_29);
x_49 = lean_name_mk_string(x_29, x_48);
x_50 = lean_mk_string("initFn");
x_51 = lean_string_utf8_byte_size(x_50);
lean_inc(x_50);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_12);
lean_ctor_set(x_52, 2, x_51);
x_53 = lean_name_mk_string(x_21, x_50);
lean_inc(x_19);
lean_inc(x_20);
x_54 = l_Lean_addMacroScope(x_20, x_53, x_19);
x_55 = lean_box(0);
lean_inc(x_18);
x_56 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_56, 0, x_18);
lean_ctor_set(x_56, 1, x_52);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_55);
x_57 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_56);
lean_inc(x_57);
x_58 = lean_array_push(x_57, x_56);
lean_inc(x_35);
x_59 = lean_array_push(x_58, x_35);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_49);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string("optDeclSig");
lean_inc(x_29);
x_62 = lean_name_mk_string(x_29, x_61);
x_63 = lean_mk_string("Term");
lean_inc(x_27);
x_64 = lean_name_mk_string(x_27, x_63);
x_65 = lean_mk_string("typeSpec");
lean_inc(x_64);
x_66 = lean_name_mk_string(x_64, x_65);
x_67 = lean_mk_string(":");
lean_inc(x_18);
x_68 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_68, 0, x_18);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("app");
lean_inc(x_64);
x_70 = lean_name_mk_string(x_64, x_69);
x_71 = lean_mk_string("IO");
x_72 = lean_string_utf8_byte_size(x_71);
lean_inc(x_71);
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_12);
lean_ctor_set(x_73, 2, x_72);
x_74 = lean_name_mk_string(x_21, x_71);
lean_inc(x_74);
x_75 = l_Lean_addMacroScope(x_20, x_74, x_19);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_55);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_55);
lean_inc(x_18);
x_78 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_78, 0, x_18);
lean_ctor_set(x_78, 1, x_73);
lean_ctor_set(x_78, 2, x_75);
lean_ctor_set(x_78, 3, x_77);
x_79 = lean_mk_empty_array_with_capacity(x_5);
lean_inc(x_15);
lean_inc(x_79);
x_80 = lean_array_push(x_79, x_15);
lean_inc(x_23);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_23);
lean_ctor_set(x_81, 1, x_80);
lean_inc(x_57);
x_82 = lean_array_push(x_57, x_78);
x_83 = lean_array_push(x_82, x_81);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_70);
lean_ctor_set(x_84, 1, x_83);
lean_inc(x_57);
x_85 = lean_array_push(x_57, x_68);
lean_inc(x_85);
x_86 = lean_array_push(x_85, x_84);
lean_inc(x_66);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_66);
lean_ctor_set(x_87, 1, x_86);
lean_inc(x_79);
x_88 = lean_array_push(x_79, x_87);
lean_inc(x_23);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_23);
lean_ctor_set(x_89, 1, x_88);
lean_inc(x_35);
lean_inc(x_57);
x_90 = lean_array_push(x_57, x_35);
lean_inc(x_90);
x_91 = lean_array_push(x_90, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_62);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string("declValSimple");
lean_inc(x_29);
x_94 = lean_name_mk_string(x_29, x_93);
x_95 = lean_mk_string(":=");
lean_inc(x_18);
x_96 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_96, 0, x_18);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_mk_string("do");
lean_inc(x_97);
lean_inc(x_64);
x_98 = lean_name_mk_string(x_64, x_97);
lean_inc(x_18);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_18);
lean_ctor_set(x_99, 1, x_97);
lean_inc(x_57);
x_100 = lean_array_push(x_57, x_99);
x_101 = lean_array_push(x_100, x_8);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_98);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_unsigned_to_nat(3u);
x_104 = lean_mk_empty_array_with_capacity(x_103);
lean_inc(x_104);
x_105 = lean_array_push(x_104, x_96);
x_106 = lean_array_push(x_105, x_102);
lean_inc(x_35);
x_107 = lean_array_push(x_106, x_35);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_94);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_unsigned_to_nat(4u);
x_110 = lean_mk_empty_array_with_capacity(x_109);
lean_inc(x_110);
x_111 = lean_array_push(x_110, x_47);
x_112 = lean_array_push(x_111, x_60);
x_113 = lean_array_push(x_112, x_92);
x_114 = lean_array_push(x_113, x_108);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_46);
lean_ctor_set(x_115, 1, x_114);
lean_inc(x_57);
x_116 = lean_array_push(x_57, x_44);
x_117 = lean_array_push(x_116, x_115);
lean_inc(x_31);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_31);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_mk_string("attributes");
lean_inc(x_64);
x_120 = lean_name_mk_string(x_64, x_119);
x_121 = lean_mk_string("@[");
lean_inc(x_18);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_18);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_mk_string("attrInstance");
lean_inc(x_64);
x_124 = lean_name_mk_string(x_64, x_123);
x_125 = lean_mk_string("attrKind");
x_126 = lean_name_mk_string(x_64, x_125);
lean_inc(x_35);
lean_inc(x_79);
x_127 = lean_array_push(x_79, x_35);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_mk_string("Attr");
x_130 = lean_name_mk_string(x_27, x_129);
x_131 = lean_mk_string("simple");
x_132 = lean_name_mk_string(x_130, x_131);
lean_inc(x_79);
x_133 = lean_array_push(x_79, x_56);
lean_inc(x_23);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_23);
lean_ctor_set(x_134, 1, x_133);
lean_inc(x_57);
x_135 = lean_array_push(x_57, x_11);
x_136 = lean_array_push(x_135, x_134);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_132);
lean_ctor_set(x_137, 1, x_136);
lean_inc(x_57);
x_138 = lean_array_push(x_57, x_128);
x_139 = lean_array_push(x_138, x_137);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_124);
lean_ctor_set(x_140, 1, x_139);
lean_inc(x_79);
x_141 = lean_array_push(x_79, x_140);
lean_inc(x_23);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_23);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_string("]");
lean_inc(x_18);
x_144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_144, 0, x_18);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_array_push(x_104, x_122);
x_146 = lean_array_push(x_145, x_142);
x_147 = lean_array_push(x_146, x_144);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_120);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_array_push(x_79, x_148);
lean_inc(x_23);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_23);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_array_push(x_38, x_150);
lean_inc(x_35);
x_152 = lean_array_push(x_151, x_35);
lean_inc(x_35);
x_153 = lean_array_push(x_152, x_35);
lean_inc(x_35);
x_154 = lean_array_push(x_153, x_35);
lean_inc(x_35);
x_155 = lean_array_push(x_154, x_35);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_33);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_mk_string("constant");
lean_inc(x_157);
lean_inc(x_29);
x_158 = lean_name_mk_string(x_29, x_157);
x_159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_159, 0, x_18);
lean_ctor_set(x_159, 1, x_157);
x_160 = lean_mk_string("declSig");
x_161 = lean_name_mk_string(x_29, x_160);
x_162 = lean_array_push(x_85, x_15);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_66);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_array_push(x_90, x_163);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_161);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_array_push(x_110, x_159);
x_167 = lean_array_push(x_166, x_13);
x_168 = lean_array_push(x_167, x_165);
x_169 = lean_array_push(x_168, x_35);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_158);
lean_ctor_set(x_170, 1, x_169);
lean_inc(x_57);
x_171 = lean_array_push(x_57, x_156);
x_172 = lean_array_push(x_171, x_170);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_31);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_array_push(x_57, x_118);
x_175 = lean_array_push(x_174, x_173);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_23);
lean_ctor_set(x_176, 1, x_175);
lean_ctor_set(x_16, 0, x_176);
return x_16;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_177 = lean_ctor_get(x_16, 0);
x_178 = lean_ctor_get(x_16, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_16);
x_179 = lean_ctor_get(x_3, 2);
lean_inc(x_179);
x_180 = lean_ctor_get(x_3, 1);
lean_inc(x_180);
lean_dec(x_3);
x_181 = lean_box(0);
x_182 = lean_mk_string("null");
x_183 = lean_name_mk_string(x_181, x_182);
x_184 = lean_mk_string("Lean");
x_185 = lean_name_mk_string(x_181, x_184);
x_186 = lean_mk_string("Parser");
x_187 = lean_name_mk_string(x_185, x_186);
x_188 = lean_mk_string("Command");
lean_inc(x_187);
x_189 = lean_name_mk_string(x_187, x_188);
x_190 = lean_mk_string("declaration");
lean_inc(x_189);
x_191 = lean_name_mk_string(x_189, x_190);
x_192 = lean_mk_string("declModifiers");
lean_inc(x_189);
x_193 = lean_name_mk_string(x_189, x_192);
x_194 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_183);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_183);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_unsigned_to_nat(6u);
x_197 = lean_mk_empty_array_with_capacity(x_196);
lean_inc(x_195);
x_198 = lean_array_push(x_197, x_195);
lean_inc(x_195);
lean_inc(x_198);
x_199 = lean_array_push(x_198, x_195);
lean_inc(x_195);
x_200 = lean_array_push(x_199, x_195);
lean_inc(x_195);
x_201 = lean_array_push(x_200, x_195);
lean_inc(x_195);
x_202 = lean_array_push(x_201, x_195);
lean_inc(x_195);
x_203 = lean_array_push(x_202, x_195);
lean_inc(x_193);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_193);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_mk_string("def");
lean_inc(x_205);
lean_inc(x_189);
x_206 = lean_name_mk_string(x_189, x_205);
lean_inc(x_177);
x_207 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_207, 0, x_177);
lean_ctor_set(x_207, 1, x_205);
x_208 = lean_mk_string("declId");
lean_inc(x_189);
x_209 = lean_name_mk_string(x_189, x_208);
x_210 = lean_mk_string("initFn");
x_211 = lean_string_utf8_byte_size(x_210);
lean_inc(x_210);
x_212 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_12);
lean_ctor_set(x_212, 2, x_211);
x_213 = lean_name_mk_string(x_181, x_210);
lean_inc(x_179);
lean_inc(x_180);
x_214 = l_Lean_addMacroScope(x_180, x_213, x_179);
x_215 = lean_box(0);
lean_inc(x_177);
x_216 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_216, 0, x_177);
lean_ctor_set(x_216, 1, x_212);
lean_ctor_set(x_216, 2, x_214);
lean_ctor_set(x_216, 3, x_215);
x_217 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_216);
lean_inc(x_217);
x_218 = lean_array_push(x_217, x_216);
lean_inc(x_195);
x_219 = lean_array_push(x_218, x_195);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_209);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_mk_string("optDeclSig");
lean_inc(x_189);
x_222 = lean_name_mk_string(x_189, x_221);
x_223 = lean_mk_string("Term");
lean_inc(x_187);
x_224 = lean_name_mk_string(x_187, x_223);
x_225 = lean_mk_string("typeSpec");
lean_inc(x_224);
x_226 = lean_name_mk_string(x_224, x_225);
x_227 = lean_mk_string(":");
lean_inc(x_177);
x_228 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_228, 0, x_177);
lean_ctor_set(x_228, 1, x_227);
x_229 = lean_mk_string("app");
lean_inc(x_224);
x_230 = lean_name_mk_string(x_224, x_229);
x_231 = lean_mk_string("IO");
x_232 = lean_string_utf8_byte_size(x_231);
lean_inc(x_231);
x_233 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_12);
lean_ctor_set(x_233, 2, x_232);
x_234 = lean_name_mk_string(x_181, x_231);
lean_inc(x_234);
x_235 = l_Lean_addMacroScope(x_180, x_234, x_179);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_215);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_215);
lean_inc(x_177);
x_238 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_238, 0, x_177);
lean_ctor_set(x_238, 1, x_233);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_238, 3, x_237);
x_239 = lean_mk_empty_array_with_capacity(x_5);
lean_inc(x_15);
lean_inc(x_239);
x_240 = lean_array_push(x_239, x_15);
lean_inc(x_183);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_183);
lean_ctor_set(x_241, 1, x_240);
lean_inc(x_217);
x_242 = lean_array_push(x_217, x_238);
x_243 = lean_array_push(x_242, x_241);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_230);
lean_ctor_set(x_244, 1, x_243);
lean_inc(x_217);
x_245 = lean_array_push(x_217, x_228);
lean_inc(x_245);
x_246 = lean_array_push(x_245, x_244);
lean_inc(x_226);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_226);
lean_ctor_set(x_247, 1, x_246);
lean_inc(x_239);
x_248 = lean_array_push(x_239, x_247);
lean_inc(x_183);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_183);
lean_ctor_set(x_249, 1, x_248);
lean_inc(x_195);
lean_inc(x_217);
x_250 = lean_array_push(x_217, x_195);
lean_inc(x_250);
x_251 = lean_array_push(x_250, x_249);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_222);
lean_ctor_set(x_252, 1, x_251);
x_253 = lean_mk_string("declValSimple");
lean_inc(x_189);
x_254 = lean_name_mk_string(x_189, x_253);
x_255 = lean_mk_string(":=");
lean_inc(x_177);
x_256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_256, 0, x_177);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_mk_string("do");
lean_inc(x_257);
lean_inc(x_224);
x_258 = lean_name_mk_string(x_224, x_257);
lean_inc(x_177);
x_259 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_259, 0, x_177);
lean_ctor_set(x_259, 1, x_257);
lean_inc(x_217);
x_260 = lean_array_push(x_217, x_259);
x_261 = lean_array_push(x_260, x_8);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_258);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_unsigned_to_nat(3u);
x_264 = lean_mk_empty_array_with_capacity(x_263);
lean_inc(x_264);
x_265 = lean_array_push(x_264, x_256);
x_266 = lean_array_push(x_265, x_262);
lean_inc(x_195);
x_267 = lean_array_push(x_266, x_195);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_254);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_unsigned_to_nat(4u);
x_270 = lean_mk_empty_array_with_capacity(x_269);
lean_inc(x_270);
x_271 = lean_array_push(x_270, x_207);
x_272 = lean_array_push(x_271, x_220);
x_273 = lean_array_push(x_272, x_252);
x_274 = lean_array_push(x_273, x_268);
x_275 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_275, 0, x_206);
lean_ctor_set(x_275, 1, x_274);
lean_inc(x_217);
x_276 = lean_array_push(x_217, x_204);
x_277 = lean_array_push(x_276, x_275);
lean_inc(x_191);
x_278 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_278, 0, x_191);
lean_ctor_set(x_278, 1, x_277);
x_279 = lean_mk_string("attributes");
lean_inc(x_224);
x_280 = lean_name_mk_string(x_224, x_279);
x_281 = lean_mk_string("@[");
lean_inc(x_177);
x_282 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_282, 0, x_177);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_mk_string("attrInstance");
lean_inc(x_224);
x_284 = lean_name_mk_string(x_224, x_283);
x_285 = lean_mk_string("attrKind");
x_286 = lean_name_mk_string(x_224, x_285);
lean_inc(x_195);
lean_inc(x_239);
x_287 = lean_array_push(x_239, x_195);
x_288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
x_289 = lean_mk_string("Attr");
x_290 = lean_name_mk_string(x_187, x_289);
x_291 = lean_mk_string("simple");
x_292 = lean_name_mk_string(x_290, x_291);
lean_inc(x_239);
x_293 = lean_array_push(x_239, x_216);
lean_inc(x_183);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_183);
lean_ctor_set(x_294, 1, x_293);
lean_inc(x_217);
x_295 = lean_array_push(x_217, x_11);
x_296 = lean_array_push(x_295, x_294);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_292);
lean_ctor_set(x_297, 1, x_296);
lean_inc(x_217);
x_298 = lean_array_push(x_217, x_288);
x_299 = lean_array_push(x_298, x_297);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_284);
lean_ctor_set(x_300, 1, x_299);
lean_inc(x_239);
x_301 = lean_array_push(x_239, x_300);
lean_inc(x_183);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_183);
lean_ctor_set(x_302, 1, x_301);
x_303 = lean_mk_string("]");
lean_inc(x_177);
x_304 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_304, 0, x_177);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_array_push(x_264, x_282);
x_306 = lean_array_push(x_305, x_302);
x_307 = lean_array_push(x_306, x_304);
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_280);
lean_ctor_set(x_308, 1, x_307);
x_309 = lean_array_push(x_239, x_308);
lean_inc(x_183);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_183);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_array_push(x_198, x_310);
lean_inc(x_195);
x_312 = lean_array_push(x_311, x_195);
lean_inc(x_195);
x_313 = lean_array_push(x_312, x_195);
lean_inc(x_195);
x_314 = lean_array_push(x_313, x_195);
lean_inc(x_195);
x_315 = lean_array_push(x_314, x_195);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_193);
lean_ctor_set(x_316, 1, x_315);
x_317 = lean_mk_string("constant");
lean_inc(x_317);
lean_inc(x_189);
x_318 = lean_name_mk_string(x_189, x_317);
x_319 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_319, 0, x_177);
lean_ctor_set(x_319, 1, x_317);
x_320 = lean_mk_string("declSig");
x_321 = lean_name_mk_string(x_189, x_320);
x_322 = lean_array_push(x_245, x_15);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_226);
lean_ctor_set(x_323, 1, x_322);
x_324 = lean_array_push(x_250, x_323);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_321);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_array_push(x_270, x_319);
x_327 = lean_array_push(x_326, x_13);
x_328 = lean_array_push(x_327, x_325);
x_329 = lean_array_push(x_328, x_195);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_318);
lean_ctor_set(x_330, 1, x_329);
lean_inc(x_217);
x_331 = lean_array_push(x_217, x_316);
x_332 = lean_array_push(x_331, x_330);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_191);
lean_ctor_set(x_333, 1, x_332);
x_334 = lean_array_push(x_217, x_278);
x_335 = lean_array_push(x_334, x_333);
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_183);
lean_ctor_set(x_336, 1, x_335);
x_337 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_178);
return x_337;
}
}
else
{
lean_object* x_338; uint8_t x_339; 
lean_dec(x_6);
x_338 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_3, x_4);
x_339 = !lean_is_exclusive(x_338);
if (x_339 == 0)
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; 
x_340 = lean_ctor_get(x_338, 0);
x_341 = lean_ctor_get(x_3, 2);
lean_inc(x_341);
x_342 = lean_ctor_get(x_3, 1);
lean_inc(x_342);
lean_dec(x_3);
x_343 = lean_box(0);
x_344 = lean_mk_string("Lean");
x_345 = lean_name_mk_string(x_343, x_344);
x_346 = lean_mk_string("Parser");
x_347 = lean_name_mk_string(x_345, x_346);
x_348 = lean_mk_string("Command");
lean_inc(x_347);
x_349 = lean_name_mk_string(x_347, x_348);
x_350 = lean_mk_string("declaration");
lean_inc(x_349);
x_351 = lean_name_mk_string(x_349, x_350);
x_352 = lean_mk_string("declModifiers");
lean_inc(x_349);
x_353 = lean_name_mk_string(x_349, x_352);
x_354 = lean_mk_string("null");
x_355 = lean_name_mk_string(x_343, x_354);
x_356 = lean_unsigned_to_nat(0u);
x_357 = lean_mk_empty_array_with_capacity(x_356);
lean_inc(x_355);
x_358 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_358, 0, x_355);
lean_ctor_set(x_358, 1, x_357);
x_359 = lean_mk_string("Term");
lean_inc(x_347);
x_360 = lean_name_mk_string(x_347, x_359);
x_361 = lean_mk_string("attributes");
lean_inc(x_360);
x_362 = lean_name_mk_string(x_360, x_361);
x_363 = lean_mk_string("@[");
lean_inc(x_340);
x_364 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_364, 0, x_340);
lean_ctor_set(x_364, 1, x_363);
x_365 = lean_mk_string("attrInstance");
lean_inc(x_360);
x_366 = lean_name_mk_string(x_360, x_365);
x_367 = lean_mk_string("attrKind");
lean_inc(x_360);
x_368 = lean_name_mk_string(x_360, x_367);
x_369 = lean_mk_empty_array_with_capacity(x_5);
lean_inc(x_358);
lean_inc(x_369);
x_370 = lean_array_push(x_369, x_358);
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_368);
lean_ctor_set(x_371, 1, x_370);
x_372 = lean_mk_string("Attr");
x_373 = lean_name_mk_string(x_347, x_372);
x_374 = lean_mk_string("simple");
x_375 = lean_name_mk_string(x_373, x_374);
x_376 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_376);
x_377 = lean_array_push(x_376, x_11);
lean_inc(x_358);
x_378 = lean_array_push(x_377, x_358);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_375);
lean_ctor_set(x_379, 1, x_378);
lean_inc(x_376);
x_380 = lean_array_push(x_376, x_371);
x_381 = lean_array_push(x_380, x_379);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_366);
lean_ctor_set(x_382, 1, x_381);
lean_inc(x_369);
x_383 = lean_array_push(x_369, x_382);
lean_inc(x_355);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_355);
lean_ctor_set(x_384, 1, x_383);
x_385 = lean_mk_string("]");
lean_inc(x_340);
x_386 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_386, 0, x_340);
lean_ctor_set(x_386, 1, x_385);
x_387 = lean_unsigned_to_nat(3u);
x_388 = lean_mk_empty_array_with_capacity(x_387);
lean_inc(x_388);
x_389 = lean_array_push(x_388, x_364);
x_390 = lean_array_push(x_389, x_384);
x_391 = lean_array_push(x_390, x_386);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_362);
lean_ctor_set(x_392, 1, x_391);
lean_inc(x_369);
x_393 = lean_array_push(x_369, x_392);
lean_inc(x_355);
x_394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_394, 0, x_355);
lean_ctor_set(x_394, 1, x_393);
x_395 = lean_unsigned_to_nat(6u);
x_396 = lean_mk_empty_array_with_capacity(x_395);
lean_inc(x_358);
x_397 = lean_array_push(x_396, x_358);
x_398 = lean_array_push(x_397, x_394);
lean_inc(x_358);
x_399 = lean_array_push(x_398, x_358);
lean_inc(x_358);
x_400 = lean_array_push(x_399, x_358);
lean_inc(x_358);
x_401 = lean_array_push(x_400, x_358);
lean_inc(x_358);
x_402 = lean_array_push(x_401, x_358);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_353);
lean_ctor_set(x_403, 1, x_402);
x_404 = lean_mk_string("def");
lean_inc(x_404);
lean_inc(x_349);
x_405 = lean_name_mk_string(x_349, x_404);
lean_inc(x_340);
x_406 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_406, 0, x_340);
lean_ctor_set(x_406, 1, x_404);
x_407 = lean_mk_string("declId");
lean_inc(x_349);
x_408 = lean_name_mk_string(x_349, x_407);
x_409 = lean_mk_string("initFn");
x_410 = lean_string_utf8_byte_size(x_409);
lean_inc(x_409);
x_411 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_411, 0, x_409);
lean_ctor_set(x_411, 1, x_356);
lean_ctor_set(x_411, 2, x_410);
x_412 = lean_name_mk_string(x_343, x_409);
lean_inc(x_341);
lean_inc(x_342);
x_413 = l_Lean_addMacroScope(x_342, x_412, x_341);
x_414 = lean_box(0);
lean_inc(x_340);
x_415 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_415, 0, x_340);
lean_ctor_set(x_415, 1, x_411);
lean_ctor_set(x_415, 2, x_413);
lean_ctor_set(x_415, 3, x_414);
lean_inc(x_376);
x_416 = lean_array_push(x_376, x_415);
lean_inc(x_358);
x_417 = lean_array_push(x_416, x_358);
x_418 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_418, 0, x_408);
lean_ctor_set(x_418, 1, x_417);
x_419 = lean_mk_string("optDeclSig");
lean_inc(x_349);
x_420 = lean_name_mk_string(x_349, x_419);
x_421 = lean_mk_string("typeSpec");
lean_inc(x_360);
x_422 = lean_name_mk_string(x_360, x_421);
x_423 = lean_mk_string(":");
lean_inc(x_340);
x_424 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_424, 0, x_340);
lean_ctor_set(x_424, 1, x_423);
x_425 = lean_mk_string("app");
lean_inc(x_360);
x_426 = lean_name_mk_string(x_360, x_425);
x_427 = lean_mk_string("IO");
x_428 = lean_string_utf8_byte_size(x_427);
lean_inc(x_427);
x_429 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_429, 0, x_427);
lean_ctor_set(x_429, 1, x_356);
lean_ctor_set(x_429, 2, x_428);
x_430 = lean_name_mk_string(x_343, x_427);
lean_inc(x_341);
lean_inc(x_430);
lean_inc(x_342);
x_431 = l_Lean_addMacroScope(x_342, x_430, x_341);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_430);
lean_ctor_set(x_432, 1, x_414);
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_414);
lean_inc(x_340);
x_434 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_434, 0, x_340);
lean_ctor_set(x_434, 1, x_429);
lean_ctor_set(x_434, 2, x_431);
lean_ctor_set(x_434, 3, x_433);
x_435 = lean_mk_string("Unit");
x_436 = lean_string_utf8_byte_size(x_435);
lean_inc(x_435);
x_437 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_437, 0, x_435);
lean_ctor_set(x_437, 1, x_356);
lean_ctor_set(x_437, 2, x_436);
x_438 = lean_name_mk_string(x_343, x_435);
lean_inc(x_438);
x_439 = l_Lean_addMacroScope(x_342, x_438, x_341);
x_440 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_440, 0, x_438);
lean_ctor_set(x_440, 1, x_414);
x_441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_414);
lean_inc(x_340);
x_442 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_442, 0, x_340);
lean_ctor_set(x_442, 1, x_437);
lean_ctor_set(x_442, 2, x_439);
lean_ctor_set(x_442, 3, x_441);
lean_inc(x_369);
x_443 = lean_array_push(x_369, x_442);
lean_inc(x_355);
x_444 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_444, 0, x_355);
lean_ctor_set(x_444, 1, x_443);
lean_inc(x_376);
x_445 = lean_array_push(x_376, x_434);
x_446 = lean_array_push(x_445, x_444);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_426);
lean_ctor_set(x_447, 1, x_446);
lean_inc(x_376);
x_448 = lean_array_push(x_376, x_424);
x_449 = lean_array_push(x_448, x_447);
x_450 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_450, 0, x_422);
lean_ctor_set(x_450, 1, x_449);
x_451 = lean_array_push(x_369, x_450);
x_452 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_452, 0, x_355);
lean_ctor_set(x_452, 1, x_451);
lean_inc(x_358);
lean_inc(x_376);
x_453 = lean_array_push(x_376, x_358);
x_454 = lean_array_push(x_453, x_452);
x_455 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_455, 0, x_420);
lean_ctor_set(x_455, 1, x_454);
x_456 = lean_mk_string("declValSimple");
x_457 = lean_name_mk_string(x_349, x_456);
x_458 = lean_mk_string(":=");
lean_inc(x_340);
x_459 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_459, 0, x_340);
lean_ctor_set(x_459, 1, x_458);
x_460 = lean_mk_string("do");
lean_inc(x_460);
x_461 = lean_name_mk_string(x_360, x_460);
x_462 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_462, 0, x_340);
lean_ctor_set(x_462, 1, x_460);
lean_inc(x_376);
x_463 = lean_array_push(x_376, x_462);
x_464 = lean_array_push(x_463, x_8);
x_465 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_465, 0, x_461);
lean_ctor_set(x_465, 1, x_464);
x_466 = lean_array_push(x_388, x_459);
x_467 = lean_array_push(x_466, x_465);
x_468 = lean_array_push(x_467, x_358);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_457);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_unsigned_to_nat(4u);
x_471 = lean_mk_empty_array_with_capacity(x_470);
x_472 = lean_array_push(x_471, x_406);
x_473 = lean_array_push(x_472, x_418);
x_474 = lean_array_push(x_473, x_455);
x_475 = lean_array_push(x_474, x_469);
x_476 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_476, 0, x_405);
lean_ctor_set(x_476, 1, x_475);
x_477 = lean_array_push(x_376, x_403);
x_478 = lean_array_push(x_477, x_476);
x_479 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_479, 0, x_351);
lean_ctor_set(x_479, 1, x_478);
lean_ctor_set(x_338, 0, x_479);
return x_338;
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; 
x_480 = lean_ctor_get(x_338, 0);
x_481 = lean_ctor_get(x_338, 1);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_338);
x_482 = lean_ctor_get(x_3, 2);
lean_inc(x_482);
x_483 = lean_ctor_get(x_3, 1);
lean_inc(x_483);
lean_dec(x_3);
x_484 = lean_box(0);
x_485 = lean_mk_string("Lean");
x_486 = lean_name_mk_string(x_484, x_485);
x_487 = lean_mk_string("Parser");
x_488 = lean_name_mk_string(x_486, x_487);
x_489 = lean_mk_string("Command");
lean_inc(x_488);
x_490 = lean_name_mk_string(x_488, x_489);
x_491 = lean_mk_string("declaration");
lean_inc(x_490);
x_492 = lean_name_mk_string(x_490, x_491);
x_493 = lean_mk_string("declModifiers");
lean_inc(x_490);
x_494 = lean_name_mk_string(x_490, x_493);
x_495 = lean_mk_string("null");
x_496 = lean_name_mk_string(x_484, x_495);
x_497 = lean_unsigned_to_nat(0u);
x_498 = lean_mk_empty_array_with_capacity(x_497);
lean_inc(x_496);
x_499 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_499, 0, x_496);
lean_ctor_set(x_499, 1, x_498);
x_500 = lean_mk_string("Term");
lean_inc(x_488);
x_501 = lean_name_mk_string(x_488, x_500);
x_502 = lean_mk_string("attributes");
lean_inc(x_501);
x_503 = lean_name_mk_string(x_501, x_502);
x_504 = lean_mk_string("@[");
lean_inc(x_480);
x_505 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_505, 0, x_480);
lean_ctor_set(x_505, 1, x_504);
x_506 = lean_mk_string("attrInstance");
lean_inc(x_501);
x_507 = lean_name_mk_string(x_501, x_506);
x_508 = lean_mk_string("attrKind");
lean_inc(x_501);
x_509 = lean_name_mk_string(x_501, x_508);
x_510 = lean_mk_empty_array_with_capacity(x_5);
lean_inc(x_499);
lean_inc(x_510);
x_511 = lean_array_push(x_510, x_499);
x_512 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_512, 0, x_509);
lean_ctor_set(x_512, 1, x_511);
x_513 = lean_mk_string("Attr");
x_514 = lean_name_mk_string(x_488, x_513);
x_515 = lean_mk_string("simple");
x_516 = lean_name_mk_string(x_514, x_515);
x_517 = lean_mk_empty_array_with_capacity(x_7);
lean_inc(x_517);
x_518 = lean_array_push(x_517, x_11);
lean_inc(x_499);
x_519 = lean_array_push(x_518, x_499);
x_520 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_520, 0, x_516);
lean_ctor_set(x_520, 1, x_519);
lean_inc(x_517);
x_521 = lean_array_push(x_517, x_512);
x_522 = lean_array_push(x_521, x_520);
x_523 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_523, 0, x_507);
lean_ctor_set(x_523, 1, x_522);
lean_inc(x_510);
x_524 = lean_array_push(x_510, x_523);
lean_inc(x_496);
x_525 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_525, 0, x_496);
lean_ctor_set(x_525, 1, x_524);
x_526 = lean_mk_string("]");
lean_inc(x_480);
x_527 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_527, 0, x_480);
lean_ctor_set(x_527, 1, x_526);
x_528 = lean_unsigned_to_nat(3u);
x_529 = lean_mk_empty_array_with_capacity(x_528);
lean_inc(x_529);
x_530 = lean_array_push(x_529, x_505);
x_531 = lean_array_push(x_530, x_525);
x_532 = lean_array_push(x_531, x_527);
x_533 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_533, 0, x_503);
lean_ctor_set(x_533, 1, x_532);
lean_inc(x_510);
x_534 = lean_array_push(x_510, x_533);
lean_inc(x_496);
x_535 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_535, 0, x_496);
lean_ctor_set(x_535, 1, x_534);
x_536 = lean_unsigned_to_nat(6u);
x_537 = lean_mk_empty_array_with_capacity(x_536);
lean_inc(x_499);
x_538 = lean_array_push(x_537, x_499);
x_539 = lean_array_push(x_538, x_535);
lean_inc(x_499);
x_540 = lean_array_push(x_539, x_499);
lean_inc(x_499);
x_541 = lean_array_push(x_540, x_499);
lean_inc(x_499);
x_542 = lean_array_push(x_541, x_499);
lean_inc(x_499);
x_543 = lean_array_push(x_542, x_499);
x_544 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_544, 0, x_494);
lean_ctor_set(x_544, 1, x_543);
x_545 = lean_mk_string("def");
lean_inc(x_545);
lean_inc(x_490);
x_546 = lean_name_mk_string(x_490, x_545);
lean_inc(x_480);
x_547 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_547, 0, x_480);
lean_ctor_set(x_547, 1, x_545);
x_548 = lean_mk_string("declId");
lean_inc(x_490);
x_549 = lean_name_mk_string(x_490, x_548);
x_550 = lean_mk_string("initFn");
x_551 = lean_string_utf8_byte_size(x_550);
lean_inc(x_550);
x_552 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_552, 0, x_550);
lean_ctor_set(x_552, 1, x_497);
lean_ctor_set(x_552, 2, x_551);
x_553 = lean_name_mk_string(x_484, x_550);
lean_inc(x_482);
lean_inc(x_483);
x_554 = l_Lean_addMacroScope(x_483, x_553, x_482);
x_555 = lean_box(0);
lean_inc(x_480);
x_556 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_556, 0, x_480);
lean_ctor_set(x_556, 1, x_552);
lean_ctor_set(x_556, 2, x_554);
lean_ctor_set(x_556, 3, x_555);
lean_inc(x_517);
x_557 = lean_array_push(x_517, x_556);
lean_inc(x_499);
x_558 = lean_array_push(x_557, x_499);
x_559 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_559, 0, x_549);
lean_ctor_set(x_559, 1, x_558);
x_560 = lean_mk_string("optDeclSig");
lean_inc(x_490);
x_561 = lean_name_mk_string(x_490, x_560);
x_562 = lean_mk_string("typeSpec");
lean_inc(x_501);
x_563 = lean_name_mk_string(x_501, x_562);
x_564 = lean_mk_string(":");
lean_inc(x_480);
x_565 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_565, 0, x_480);
lean_ctor_set(x_565, 1, x_564);
x_566 = lean_mk_string("app");
lean_inc(x_501);
x_567 = lean_name_mk_string(x_501, x_566);
x_568 = lean_mk_string("IO");
x_569 = lean_string_utf8_byte_size(x_568);
lean_inc(x_568);
x_570 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_570, 0, x_568);
lean_ctor_set(x_570, 1, x_497);
lean_ctor_set(x_570, 2, x_569);
x_571 = lean_name_mk_string(x_484, x_568);
lean_inc(x_482);
lean_inc(x_571);
lean_inc(x_483);
x_572 = l_Lean_addMacroScope(x_483, x_571, x_482);
x_573 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_573, 0, x_571);
lean_ctor_set(x_573, 1, x_555);
x_574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_574, 0, x_573);
lean_ctor_set(x_574, 1, x_555);
lean_inc(x_480);
x_575 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_575, 0, x_480);
lean_ctor_set(x_575, 1, x_570);
lean_ctor_set(x_575, 2, x_572);
lean_ctor_set(x_575, 3, x_574);
x_576 = lean_mk_string("Unit");
x_577 = lean_string_utf8_byte_size(x_576);
lean_inc(x_576);
x_578 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_578, 0, x_576);
lean_ctor_set(x_578, 1, x_497);
lean_ctor_set(x_578, 2, x_577);
x_579 = lean_name_mk_string(x_484, x_576);
lean_inc(x_579);
x_580 = l_Lean_addMacroScope(x_483, x_579, x_482);
x_581 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_581, 0, x_579);
lean_ctor_set(x_581, 1, x_555);
x_582 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_582, 0, x_581);
lean_ctor_set(x_582, 1, x_555);
lean_inc(x_480);
x_583 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_583, 0, x_480);
lean_ctor_set(x_583, 1, x_578);
lean_ctor_set(x_583, 2, x_580);
lean_ctor_set(x_583, 3, x_582);
lean_inc(x_510);
x_584 = lean_array_push(x_510, x_583);
lean_inc(x_496);
x_585 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_585, 0, x_496);
lean_ctor_set(x_585, 1, x_584);
lean_inc(x_517);
x_586 = lean_array_push(x_517, x_575);
x_587 = lean_array_push(x_586, x_585);
x_588 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_588, 0, x_567);
lean_ctor_set(x_588, 1, x_587);
lean_inc(x_517);
x_589 = lean_array_push(x_517, x_565);
x_590 = lean_array_push(x_589, x_588);
x_591 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_591, 0, x_563);
lean_ctor_set(x_591, 1, x_590);
x_592 = lean_array_push(x_510, x_591);
x_593 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_593, 0, x_496);
lean_ctor_set(x_593, 1, x_592);
lean_inc(x_499);
lean_inc(x_517);
x_594 = lean_array_push(x_517, x_499);
x_595 = lean_array_push(x_594, x_593);
x_596 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_596, 0, x_561);
lean_ctor_set(x_596, 1, x_595);
x_597 = lean_mk_string("declValSimple");
x_598 = lean_name_mk_string(x_490, x_597);
x_599 = lean_mk_string(":=");
lean_inc(x_480);
x_600 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_600, 0, x_480);
lean_ctor_set(x_600, 1, x_599);
x_601 = lean_mk_string("do");
lean_inc(x_601);
x_602 = lean_name_mk_string(x_501, x_601);
x_603 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_603, 0, x_480);
lean_ctor_set(x_603, 1, x_601);
lean_inc(x_517);
x_604 = lean_array_push(x_517, x_603);
x_605 = lean_array_push(x_604, x_8);
x_606 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_606, 0, x_602);
lean_ctor_set(x_606, 1, x_605);
x_607 = lean_array_push(x_529, x_600);
x_608 = lean_array_push(x_607, x_606);
x_609 = lean_array_push(x_608, x_499);
x_610 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_610, 0, x_598);
lean_ctor_set(x_610, 1, x_609);
x_611 = lean_unsigned_to_nat(4u);
x_612 = lean_mk_empty_array_with_capacity(x_611);
x_613 = lean_array_push(x_612, x_547);
x_614 = lean_array_push(x_613, x_559);
x_615 = lean_array_push(x_614, x_596);
x_616 = lean_array_push(x_615, x_610);
x_617 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_617, 0, x_546);
lean_ctor_set(x_617, 1, x_616);
x_618 = lean_array_push(x_517, x_544);
x_619 = lean_array_push(x_618, x_617);
x_620 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_620, 0, x_492);
lean_ctor_set(x_620, 1, x_619);
x_621 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_621, 0, x_620);
lean_ctor_set(x_621, 1, x_481);
return x_621;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Command_expandInitCmd(x_5, x_2, x_3, x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandInitialize(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = l_Lean_Elab_Command_expandInitCmd(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandInitialize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_expandInitialize(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandInitialize");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandInitialize___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_initialize___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = l_Lean_Elab_Command_expandInitCmd(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_expandBuiltinInitialize(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandBuiltinInitialize");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabNamespace___closed__1;
x_2 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandBuiltinInitialize___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Command_builtin__initialize___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
lean_object* initialize_Lean_Elab_DefView(lean_object*);
lean_object* initialize_Lean_Elab_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_Structure(lean_object*);
lean_object* initialize_Lean_Elab_MutualDef(lean_object*);
lean_object* initialize_Lean_Elab_DeclarationRange(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Declaration(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Structure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_MutualDef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3);
res = l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3);
res = l___regBuiltin_Lean_Elab_Command_elabMutual(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3);
res = l___regBuiltin_Lean_Elab_Command_elabAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
